// Copyright 2019 Tefel. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VoxelComponent.generated.h"

class AVoxelActor;

UCLASS( Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOXELSANDBOX_API UVoxelComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVoxelComponent();

	// Updates settings for materials and dynamic / static objects
	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void SetExtras(TArray<bool> GeneralSettings);

	// Getting voxel Type and Index by position in the World 
	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void GetVoxelForPosition(const FVector Position, int32 &VoxelType, int32 &Index);

	FVector CalculateLocalPositionForChunk(const FVector Position, FVector ChunkLocation);

	// Based on position updating voxel value (if 0 - voxel is destroyed)
	// It is also update adjacently chunks for edge voxels
	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void UpdateVoxel(const FVector Position, const int32 VoxelValue);

	UFUNCTION(BlueprintCallable, Category = "Voxel")
	AVoxelActor* FindChunk(const int32 X, const int32 Y);

	// Using LineTrace to determine position of looked at cube and position (global and local for chunk)
	// @return Returns true if line trace was unsuccessful
	UFUNCTION(BlueprintCallable, Category = "Voxel")
	bool UpdateCubeLineTrace();

	// Adding new voxel after pressing right click and when holding specific type of block
	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void VoxelAdd();

	// What happens when you try to press left mouse button when looking at voxel
	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void VoxelHit();

	// What happens when hitting reaches maximum - destroy voxel
	UFUNCTION(BlueprintCallable, Category = "Voxel")
	void VoxelDestroy();

	// Function for spawning destructible debris
	UFUNCTION(BlueprintImplementableEvent, Category = "Voxel")
	void SpawnDestructible(const FVector Location, bool IsSizeNormal);

	// Function providing speed of destroying voxels based on item and voxel type
	// It's getting these values in the blueprint since it's not very relevant to the voxel itself
	UFUNCTION(BlueprintImplementableEvent, Category = "Voxel")
	int32 GetVoxelHitTempo();

	// Function for spawning hit voxel sound - sounds are different based on voxel type
	UFUNCTION(BlueprintImplementableEvent, Category = "Voxel")
	void PlayHitSound();

	// Function for spawning destruct sound- sounds are different based on voxel type
	UFUNCTION(BlueprintImplementableEvent, Category = "Voxel")
	void PlayDestructSound();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	TSubclassOf<AVoxelActor> VoxelActorTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	class UStaticMesh* HitCubeMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	class UMaterialInterface* CubeDestructibleMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	TArray<TSubclassOf<AActor>> Pickups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	int32 renderRange = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	int32 chunkLineElements = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	int32 VoxelSize = 120;

	// When projecting lineTrace for voxel hit testing - higher value allows hitting voxels from far away
	// Turn sniper mode if you want to experiment more
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float lineTraceLength = 600;

	// Items are not used when new voxel is spawned
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool infiniteVoxelUse = false;

	// Applying round tree voxel shader for trees
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool roundedTrees = false;

	// Increasing distance for hitting voxels
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool sniperMode = false;

	// Calculated size of chunk -> Voxel Size * ChunkLineElements
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelComponent")
	int32 chunkSize = 0;

	// Chunk size divided
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelComponent")
	int32 chunkSizeHalf = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelComponent")
	FVector actorPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelComponent")
	int32 chunkX = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelComponent")
	int32 chunkY = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelComponent")
	TArray<FIntPoint> chunkCoords;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VoxelComponent")
	TArray<AVoxelActor*> chunks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HitCube")
	FVector CubePosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HitCube")
	FVector cubePositionGlobal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HitCube")
	int32 lastIndexHit = -1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HitCube")
	int32 lastTypeHit = -1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HitCube")
	int32 crackSize = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HitCube")
	int32 SingleCrackHit = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HitCube")
	bool bIsAdding = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenralSettings")
	bool SettingMaterial = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenralSettings")
	bool SettingObjectsStatic = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GenralSettings")
	bool SettingObjectsDynamic = true;

private:
	// Updates Chunks from position of the actor
	bool UpdateActorPosition();

	// Updates base params
	void Initialize();

	// Spawning chunks when reaching specific render range
	void AddChunks();

	// Removing all chunks which are not in render range anymore
	void RemoveChunks();

	// Checking if chunk is in specific render distance
	bool checkRadius(const float CenterX, const float CenterY);

	// Checking if chunk is in minimal render distance
	bool checkZeroRadius(const float CenterX, const float CenterY);

	FVector GetHalfVoxelSize();
	FIntPoint GetChunkCords(const FVector LocalPosition);

	TWeakObjectPtr<class AVoxelAdministration> VoxelAdministration;
	TWeakObjectPtr<class AStaticMeshActor> HitCube;
	TWeakObjectPtr<class UMaterialInstanceDynamic> CubeDynamicMaterial;
	TWeakObjectPtr<class UInventoryActorComponent> InventoryActorComponent;

};