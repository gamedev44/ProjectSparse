// Copyright 2019 Tefel. All Rights Reserved

#include "VoxelGameInstance.h"
#include "Engine.h"
#include "UObject/NoExportTypes.h"
#include "MoviePlayer.h"
#include "PlatformFeatures.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SaveGame.h"

#include "SaveGameSystem.h"
#include "VoxelAdministration.h"
#include "Savegame/SettingsSaveGame.h"
#include "VoxelComponent.h"

int32 settings[] = { 0, 0, 1, 0, 0, 0 };

// Custom settings
const TArray<float> LineTraceDistances = { 500.0f, 10000.0f };
const TArray<int32> VoxelSizes = { 80, 120, 160 };
const TArray<float> JumpZVelocities = { 800.0f, 1200.0f, 2000.0f };
const TArray<float> MaxWalkSpeeds = { 540.0f, 860.0f, 1200.0f };

void UVoxelGameInstance::Init()
{
	UGameInstance::Init();
	customSettings.Append(settings, UE_ARRAY_COUNT(settings));

	for (TActorIterator<AVoxelAdministration> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		voxelAdministration = *ActorItr;
	}
	
	FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &UVoxelGameInstance::BeginLoadingScreen);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UVoxelGameInstance::EndLoadingScreen);
}

USettingsSaveGame* UVoxelGameInstance::GetSettings()
{
	if (!SettingsSaveGamePtr.IsValid())
	{
		USaveGame* SaveGame = UGameplayStatics::LoadGameFromSlot("Settings", 0);
		if (!SaveGame)
		{
			SaveGame = UGameplayStatics::CreateSaveGameObject(SettingsSaveGameClass);
			UGameplayStatics::SaveGameToSlot(SaveGame, "Settings", 0);
		}

		SettingsSaveGamePtr = Cast<USettingsSaveGame>(SaveGame);
	}

	return SettingsSaveGamePtr.Get();
}

void UVoxelGameInstance::BeginLoadingScreen(const FString & name)
{
	FLoadingScreenAttributes LoadingScreen;
	LoadingScreen.bAutoCompleteWhenLoadingCompletes = false;

	LoadingScreen.WidgetLoadingScreen = SNew(SLoadingScreen);
	GetMoviePlayer()->SetupLoadingScreen(LoadingScreen);
}

void UVoxelGameInstance::EndLoadingScreen(UWorld* LoadedWorld)
{
	for (TActorIterator<AVoxelAdministration> ActorItr(LoadedWorld); ActorItr; ++ActorItr)
	{
		voxelAdministration = *ActorItr;
	}
}

void UVoxelGameInstance::LoadVoxelSettings()
{
	USettingsSaveGame* SettingsSaveGame = GetSettings();
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	UVoxelComponent* VoxelComponent = PlayerController->FindComponentByClass<UVoxelComponent>();
	if (VoxelComponent == nullptr)
	{
		// Only real VoxelComponent attached to PlayerController can load Voxel Settings
		return;
	}

	VoxelComponent->renderRange = SettingsSaveGame->RenderRange;

	// Updates extras after loading settings
	VoxelComponent->SetExtras(SettingsSaveGame->General);
}

void UVoxelGameInstance::LoadGraphicSettings()
{
	USettingsSaveGame* SettingsSaveGame = GetSettings();
	for (auto SettingIt = SettingsSaveGame->Graphics.CreateConstIterator(); SettingIt; ++SettingIt)
	{
		FString CommandString = GraphicCommands[SettingIt.GetIndex()] + FString::FromInt(*SettingIt);
		UKismetSystemLibrary::ExecuteConsoleCommand(this, CommandString);		
	}

	UKismetSystemLibrary::ExecuteConsoleCommand(this, "r.ScreenPercentage " + FString::FromInt(SettingsSaveGame->Resolution + 1));

	// set extras
}

void UVoxelGameInstance::SetCustomSettings()
{
	if (!(customSettings.Num() >= 4))
	{
		return;
	}

	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	UVoxelComponent* VoxelComponent = PlayerController->FindComponentByClass<UVoxelComponent>();
	VoxelComponent->lineTraceLength = LineTraceDistances[customSettings[0]];
	VoxelComponent->infiniteVoxelUse = (customSettings[0] == 1);
	VoxelComponent->VoxelSize = VoxelSizes[customSettings[2]];
	if (customSettings[2] == 2)
	{
		// Move player character for big voxels so it's not spawning under the map
		PlayerCharacter->SetActorLocation(PlayerCharacter->GetActorLocation() + FVector(0.0f, 0.0f, 1200.f));
	}

	PlayerCharacter->GetCharacterMovement()->JumpZVelocity = JumpZVelocities[customSettings[3]];
	PlayerCharacter->GetCharacterMovement()->MaxWalkSpeed = MaxWalkSpeeds[customSettings[4]];
}

TArray<FVoxelSave> UVoxelGameInstance::GetAllSaveGameSlotNames()
{
	TArray<FVoxelSave> saves;
	//ISaveGameSystem* SaveSystem = IPlatformFeaturesModule::Get().GetSaveGameSystem();

	//FString saveGamePath = FPaths::ConvertRelativePathToFull(FPaths::GameSavedDir()) + "SaveGames/";
	//if (!FPaths::DirectoryExists(saveGamePath))
	//{
	//	UE_LOG(VoxelLog, Log, TEXT("Wrong Directory %s"), *saveGamePath);
	//	TArray<FVoxelSave>();
	//}
	//
	//IFileManager& FileManager = IFileManager::Get();
	//FString FileExtension = ".sav";
	//TArray<FString> SaveGameList;
	//FileManager.FindFiles(SaveGameList, *saveGamePath, *FileExtension);

	//for (FString SaveGame : SaveGameList)
	//{
	//	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	//	FFileStatData FileStatData = PlatformFile.GetStatData(*(saveGamePath + "/" + SaveGame));

	//	if (!SaveGame.Contains("Settings"))
	//	{
	//		saves.Add(FVoxelSave(SaveGame, FileStatData.CreationTime));
	//	}
	//}

	return saves;
}