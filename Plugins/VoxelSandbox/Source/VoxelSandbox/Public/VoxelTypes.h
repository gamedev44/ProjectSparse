// Copyright 2019 Tefel. All Rights Reserved

#pragma once
#include "VoxelTypes.generated.h"

// Voxel values
USTRUCT(BlueprintType)
struct VOXELSANDBOX_API FVoxel
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(BlueprintReadWrite, Category = "Voxel")
	int32 Index = -1;

	UPROPERTY(BlueprintReadWrite, Category = "Voxel")
	uint8 Value = 0;

	UPROPERTY(BlueprintReadWrite, Category = "Voxel")
	uint8 Red = 0;

	UPROPERTY(BlueprintReadWrite, Category = "Voxel")
	uint8 Green = 0;

	UPROPERTY(BlueprintReadWrite, Category = "Voxel")
	uint8 Blue = 0;
};

/**
*	Sector element - X coordinate
*/
USTRUCT(BlueprintType)
struct VOXELSANDBOX_API FSectorX
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(BlueprintReadWrite, Category = "SectorX")
	TArray<FVoxel> Voxels;

};

/**
*	Struct represents sectors arrays - Y lines (contains X elements)
*/
USTRUCT(BlueprintType)
struct VOXELSANDBOX_API FSectorArrayY
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(BlueprintReadWrite, Category = "SectorArray")
	TArray<FSectorX> SectorsX;

	UPROPERTY(BlueprintReadWrite, Category = "SectorArray")
	TArray<FSectorX> SectorsXneg;
};