// Copyright 2019 Tefel. All Rights Reserved

#pragma once

#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "VoxelActor.generated.h"

struct FMeshSection
{
	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector> Normals;
	TArray<FVector2D> UVs;
	TArray<FProcMeshTangent> Tangents;
	TArray<FColor> VertexColors;

	int32 elementID = 0;

};

class AVoxelAdministration;
class UVoxelComponent;

UCLASS()
class VOXELSANDBOX_API AVoxelActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelActor")
	TArray <UMaterialInterface *> Materials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelActor")
	TArray <UMaterialInterface *> MaterialsLow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelActor")
	UMaterialInterface * leavesMaterialRounded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = "VoxelActor")
	int32 randomSeed = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = "VoxelActor")
	int32 voxelSize = 200;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = "VoxelActor")
	int32 chunkLineElements = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = "VoxelActor")
	int32 chunkXindex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = "VoxelActor")
	int32 chunkYindex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = "VoxelActor")
	bool bCreateCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelActor")
	float xMult = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelActor")
	float yMult = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelActor")
	float zMult = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelActor")
	float weight = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelActor")
	float freq = 1;

	UPROPERTY()
	int32 chunkTotalElements;

	UPROPERTY()
	int32 chunkZElements;

	UPROPERTY()
	int32 chunkLineElementsExt;

	UPROPERTY()
	int32 chunkLineElementsP2;

	UPROPERTY()
	int32 chunkLineElementsP2Ext;

	UPROPERTY()
	int32 voxelSizeHalf;

	UPROPERTY()
	TArray <int32> chunkFields;

	UPROPERTY()
	UProceduralMeshComponent* proceduralComponent;

	// Adding extras
	UFUNCTION(BlueprintImplementableEvent)
	void AddInstanceVoxel(FVector instanceLocation, int32 type);

	// Clearing extras
	UFUNCTION(BlueprintImplementableEvent)
	void ClearInstancesVoxel();

	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void setVoxel(FVector localPos, int32 value);

	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void getVoxel(FVector localPos, int32 &voxelType, int32 &index);

	// Check collision range - if changed update mesh
	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void updateCollisionRange(bool isCollisionRange);

	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void ApplyMaterials();

	/* Update extra elements like flowers 0-4, mushroom 5 */
	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void UpdateExtras();

	// Sets default values for this actor's properties
	AVoxelActor();

	virtual void OnConstruction(const FTransform & Transform) override;

private:
	void GenerateChunk();

	void UpdateChunkFromData();

	void UpdateMesh();

	bool inRange(int32 value, int32 range);

	TArray<int32> calculateNoise();

	TWeakObjectPtr<AVoxelAdministration> voxelAdministration;
	TWeakObjectPtr<UVoxelComponent> VoxelComponent;

};