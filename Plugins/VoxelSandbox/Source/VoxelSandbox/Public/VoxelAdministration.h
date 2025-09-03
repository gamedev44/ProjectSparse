// Copyright 2019 Tefel. All Rights Reserved

#pragma once
#include "GameFramework/Actor.h"
#include "VoxelTypes.h"
#include "VoxelAdministration.generated.h"

class UVoxelSaveGame;

UCLASS()
class VOXELSANDBOX_API AVoxelAdministration : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVoxelAdministration();

	UFUNCTION(BlueprintCallable, Category = "Voxel")
	int32 FindVoxelIndex(const TArray<FVoxel>& voxels, int32 Index);

	// Updating voxel values for chunk X,Y with value FVoxel
	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void UpdateVoxel(int32 SectorXindex, int32 SectorYindex, FVoxel Voxel);

	UFUNCTION(BlueprintCallable, Category = "Voxel")
	FSectorX getVoxelData(int32 SectorXindex, int32 SectorYindex);

	// Saving all data from the session, voxel data and world data
	UFUNCTION(BlueprintCallable, Category = "Save")
	void SetSaveGameValues(UVoxelSaveGame* SaveGame);

	// Loading all data from the session, voxel data and world data
	UFUNCTION(BlueprintCallable, Category = "Save")
	void SetLoadGameValues();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelAdministration")
	TArray<FSectorArrayY> sectorsArrY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelAdministration")
	TArray<FSectorArrayY> sectorsArrYneg;

};