// Copyright 2019 Tefel. All Rights Reserved

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "VoxelTypes.h"
#include "InventoryActorComponent.h"
#include "VoxelSaveGame.generated.h"

/**
 * Savegame system - storing data about Voxels and world game data
 */
UCLASS()
class VOXELSANDBOX_API UVoxelSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Savegame")
	FString seedName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Savegame")
	int32 SeedNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Savegame")
	TArray<FSectorArrayY> SectorsArrY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Savegame")
	TArray<FSectorArrayY> SectorsArrYneg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Savegame")
	FTransform CharacterTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Savegame")
	TArray<FItem> Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Savegame")
	FRotator ControlRotation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Savegame")
	TArray<int32> customSettings;

};