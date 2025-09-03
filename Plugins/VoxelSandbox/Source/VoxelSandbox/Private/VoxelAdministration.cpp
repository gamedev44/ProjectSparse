// Copyright 2019 Tefel. All Rights Reserved

#include "VoxelAdministration.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"

#include "VoxelGameInstance.h"
#include "InventoryActorComponent.h"
#include "Savegame/VoxelSaveGame.h"

// Sets default values
AVoxelAdministration::AVoxelAdministration()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AVoxelAdministration::UpdateVoxel(int32 SectorXindex, int32 SectorYindex, FVoxel Voxel)
{
	TArray<FSectorArrayY> & sectorsY = (SectorYindex < 0) ? sectorsArrYneg : sectorsArrY;
	SectorYindex = abs(SectorYindex);
	if (SectorYindex >= sectorsY.Num())
	{
		sectorsY.SetNum(SectorYindex + 1);
		sectorsY[SectorYindex] = FSectorArrayY();

	}
	FSectorArrayY & sectorArrY = sectorsY[SectorYindex];

	TArray<FSectorX> & sectorsX = (SectorXindex < 0) ? sectorArrY.SectorsXneg : sectorArrY.SectorsX;
	SectorXindex = abs(SectorXindex);
	if (SectorXindex >= sectorsX.Num())
	{
		sectorsX.SetNum(SectorXindex + 1);
		sectorsX[SectorXindex] = FSectorX();
	}
	FSectorX & sectorX = sectorsX[SectorXindex];
	
	int32 searchIndex = FindVoxelIndex(sectorX.Voxels, Voxel.Index);

	if (searchIndex != -1) // voxel already exist, modify
	{
		sectorX.Voxels[searchIndex] = Voxel;
	}
	else // voxel not exist, add new
	{
		sectorX.Voxels.Add(Voxel);
	}
}

int32 AVoxelAdministration::FindVoxelIndex(const TArray<FVoxel>& voxels, int32 Index)
{
	for (int32 i = 0; i < voxels.Num(); i++)
	{
		if (voxels[i].Index == Index) return i;
	}
	return -1;
}

FSectorX AVoxelAdministration::getVoxelData(int32 SectorXindex, int32 SectorYindex)
{
	TArray<FSectorArrayY> & sectorsY = (SectorYindex < 0) ? sectorsArrYneg : sectorsArrY;
	SectorYindex = abs(SectorYindex);
	if (SectorYindex < sectorsY.Num())
	{
		FSectorArrayY & sectorArrY = sectorsY[SectorYindex];
		TArray<FSectorX> & sectorsX = (SectorXindex < 0) ? sectorArrY.SectorsXneg : sectorArrY.SectorsX;
		SectorXindex = abs(SectorXindex);

		if (SectorXindex < sectorsX.Num())
		{
			return sectorsX[SectorXindex];
		}
	}
	return FSectorX();
}

void AVoxelAdministration::SetSaveGameValues(UVoxelSaveGame* SaveGame)
{
	ACharacter* Character = UGameplayStatics::GetPlayerCharacter(this, 0);
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	UInventoryActorComponent* InventoryActorComponent = PlayerController->FindComponentByClass<UInventoryActorComponent>();
	UVoxelGameInstance * VoxelGameInstance = Cast<UVoxelGameInstance>(UGameplayStatics::GetGameInstance(this));

	if (VoxelGameInstance == nullptr)
	{
		return;
	}

	SaveGame->CharacterTransform = Character->GetActorTransform();
	SaveGame->ControlRotation = PlayerController->GetControlRotation();
	SaveGame->Items = InventoryActorComponent->Items;
	SaveGame->seedName = VoxelGameInstance->randomSeedName;
	SaveGame->SeedNumber = VoxelGameInstance->randomSeed;
	SaveGame->customSettings = VoxelGameInstance->customSettings;
	SaveGame->SectorsArrY = sectorsArrY;
	SaveGame->SectorsArrYneg = sectorsArrYneg;

}

void AVoxelAdministration::SetLoadGameValues()
{
	UVoxelGameInstance * VoxelGameInstance = Cast<UVoxelGameInstance>(UGameplayStatics::GetGameInstance(this));
	if (VoxelGameInstance == nullptr)
	{
		return;
	}

	const FString saveName = VoxelGameInstance->savegameName;
	if (saveName.Len() <= 0)
	{
		return;
	}

	ACharacter* Character = UGameplayStatics::GetPlayerCharacter(this, 0);
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	UInventoryActorComponent* InventoryActorComponent = PlayerController->FindComponentByClass<UInventoryActorComponent>();
	USaveGame* SaveGame = UGameplayStatics::LoadGameFromSlot(saveName, 0);
	UVoxelSaveGame* VoxelSaveGame = Cast<UVoxelSaveGame>(SaveGame);

	Character->SetActorTransform(VoxelSaveGame->CharacterTransform);
	PlayerController->SetControlRotation(VoxelSaveGame->ControlRotation);
	InventoryActorComponent->Items = VoxelSaveGame->Items;
	VoxelGameInstance->randomSeedName = VoxelSaveGame->seedName;
	VoxelGameInstance->randomSeed = VoxelSaveGame->SeedNumber;
	VoxelGameInstance->customSettings = VoxelSaveGame->customSettings;
	sectorsArrY = VoxelSaveGame->SectorsArrY;
	sectorsArrYneg = VoxelSaveGame->SectorsArrYneg;

}