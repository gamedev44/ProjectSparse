// Copyright 2019 Tefel. All Rights Reserved

#pragma once

#include "Engine/GameInstance.h"
#include "UObject/WeakObjectPtrTemplates.h"
#include "VoxelAdministration.h"
#include "VoxelGameInstance.generated.h"

// Save (name + time)
USTRUCT(BlueprintType)
struct FVoxelSave
{
	GENERATED_USTRUCT_BODY()
	FVoxelSave(FString name = "", FDateTime date = FDateTime()) : saveName(name), dateTime(date) {}

	UPROPERTY(BlueprintReadWrite, Category = "Save")
	FString saveName;

	UPROPERTY(BlueprintReadWrite, Category = "Save")
	FDateTime dateTime;

};

class USettingsSaveGame;
class UTexture;

// Game instance supporting savegame and setting loading screen from Slate widget
 UCLASS()
class VOXELSANDBOX_API UVoxelGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	virtual void Init() override;
	
	UFUNCTION(BlueprintPure, Category = "Save")
	USettingsSaveGame* GetSettings();

	UFUNCTION(BlueprintCallable, Category = TDLHelpers)
	static TArray<FVoxelSave> GetAllSaveGameSlotNames();

	UFUNCTION()
	virtual void BeginLoadingScreen(const FString & name);

	UFUNCTION()
	virtual void EndLoadingScreen(UWorld* LoadedWorld);

	UFUNCTION(BlueprintCallable, Category = "Save")
	void LoadVoxelSettings();

	UFUNCTION(BlueprintCallable, Category = "Save")
	void LoadGraphicSettings();

	// Setting custom settings for generation - big voxels, endless spawning, sniper mode etc.
	UFUNCTION(BlueprintCallable, Category = "Save")
	void SetCustomSettings();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	TSubclassOf<USettingsSaveGame> SettingsSaveGameClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	TArray<FString> GraphicCommands;

	// if empty "" means it's a new world
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelGameInstance")
	FString savegameName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelGameInstance")
	int32 randomSeed = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelGameInstance")
	FString randomSeedName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelGameInstance")
	TArray<int32> customSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelGameInstance")
	AVoxelAdministration * voxelAdministration;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelGameInstance")
	int32 loadingProgress = 0;

	UPROPERTY()
	UTexture* texture;

	TWeakObjectPtr<USettingsSaveGame> SettingsSaveGamePtr;

};