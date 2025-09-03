// Copyright 2019 Tefel. All Rights Reserved

#include "VoxelComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "CollisionQueryParams.h"
#include "Engine/StaticMeshActor.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Components/MeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

#include "VoxelActor.h"
#include "VoxelAdministration.h"
#include "InventoryActorComponent.h"

UVoxelComponent::UVoxelComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UVoxelComponent::SetExtras(TArray<bool> GeneralSettings)
{
	if (GeneralSettings.Num() == 0)
	{
		return;
	}

	if (SettingMaterial != GeneralSettings[0])
	{
		SettingMaterial = GeneralSettings[0];

		for (auto Chunk : chunks)
		{
			Chunk->ApplyMaterials();
		}
	}

	if (SettingObjectsStatic != GeneralSettings[1] ||
		SettingObjectsDynamic != GeneralSettings[2])
	{
		SettingObjectsStatic = GeneralSettings[1];
		SettingObjectsDynamic = GeneralSettings[2];

		for (auto Chunk : chunks)
		{
			Chunk->ClearInstancesVoxel();
			Chunk->UpdateExtras();
		}
	}
}

FIntPoint UVoxelComponent::GetChunkCords(const FVector LocalPosition)
{
	FVector HalvVoxelSize = GetHalfVoxelSize();
	FVector Pos = (HalvVoxelSize + LocalPosition) / chunkSize;
	int32 X = UKismetMathLibrary::FFloor(Pos.X);
	int32 Y = UKismetMathLibrary::FFloor(Pos.Y);

	return FIntPoint(X, Y);
}


void UVoxelComponent::GetVoxelForPosition(const FVector Position, int32 &VoxelType, int32 &Index)
{
	// Finding X,Y from chunk of specific position
	FIntPoint Point = GetChunkCords(Position);
	AVoxelActor* Chunk = FindChunk(Point.X, Point.Y);
	if (Chunk != nullptr)
	{
		FVector LocPosition = CalculateLocalPositionForChunk(Position, Chunk->GetActorLocation());
		Chunk->getVoxel(LocPosition, VoxelType, Index);
	}
}

FVector UVoxelComponent::CalculateLocalPositionForChunk(const FVector Position, FVector ChunkLocation)
{
	return (GetHalfVoxelSize() / chunkSize) + Position - ChunkLocation;
}

void UVoxelComponent::UpdateVoxel(const FVector Position, const int32 VoxelValue)
{
	FIntPoint Point = GetChunkCords(Position);
	AVoxelActor* Chunk = FindChunk(Point.X, Point.Y);
	if (Chunk == nullptr)
	{
		return;
	}

	FVector LocPosition = GetHalfVoxelSize() + Position - Chunk->GetActorLocation();
	Chunk->setVoxel(LocPosition, VoxelValue);

	// setting additional - edge voxels
	FVector PositionDivided = LocPosition / VoxelSize;
	int32 VoxX = UKismetMathLibrary::FFloor(PositionDivided.X);
	int32 VoxY = UKismetMathLibrary::FFloor(PositionDivided.Y);

	// Edge X voxel
	bool MinEdgeX = (VoxX == 0);
	bool MaxEdgeX = (VoxX == chunkLineElements - 1);
	if (MinEdgeX || MaxEdgeX)
	{
		int32 DifferenceX = (int32)MinEdgeX + -(int32)MaxEdgeX;
		FVector PositionX = FVector(chunkSize * DifferenceX, .0f, .0f);
		AVoxelActor* ChunkX = FindChunk(Point.X - DifferenceX, Point.Y);
		ChunkX->setVoxel(LocPosition + PositionX, VoxelValue);
	}

	// Edge Y voxel
	bool MinEdgeY = (VoxY == 0);
	bool MaxEdgeY = (VoxY == chunkLineElements - 1);
	if (MinEdgeY || MaxEdgeY)
	{
		int32 DifferenceY = (int32)MinEdgeY + -(int32)MaxEdgeY;
		FVector PositionY = FVector(.0f, chunkSize * DifferenceY, .0f);
		AVoxelActor* ChunkY = FindChunk(Point.X, Point.Y - DifferenceY);
		ChunkY->setVoxel(LocPosition + PositionY, VoxelValue);
	}
}

AVoxelActor* UVoxelComponent::FindChunk(const int32 X, const int32 Y)
{
	int32 ChunkIndex = chunkCoords.Find(FIntPoint(X, Y));
	if (ChunkIndex != -1)
	{
		return chunks[ChunkIndex];
	}

	return nullptr;
}

bool UVoxelComponent::UpdateCubeLineTrace()
{
	APlayerCameraManager* PlayerCameraManager = UGameplayStatics::GetPlayerCameraManager(GetOwner(), 0);
	FVector CameraLocation = PlayerCameraManager->GetCameraLocation();
	FVector CameraForwardVector = PlayerCameraManager->GetActorForwardVector();

	FVector StartPos = CameraLocation;
	FVector EndPos = CameraLocation + (CameraForwardVector * lineTraceLength);

	FCollisionQueryParams TraceParams(NAME_None, /*TraceComplex*/ true, /*IgnoreActor*/ UGameplayStatics::GetPlayerPawn(GetOwner(), 0));
	ECollisionChannel CollisionChannel(ECC_Visibility);
	
	FHitResult OutHit;
	const bool bHit = GetWorld()->LineTraceSingleByChannel(OutHit, StartPos, EndPos, CollisionChannel, TraceParams);
	if (bHit)
	{
		FVector HitLocation = OutHit.Location;
		FVector UnitVector = UKismetMathLibrary::GetDirectionUnitVector(HitLocation, CameraLocation);
		CubePosition = ((((float)bIsAdding * 2.0f) - 1.0f) * UnitVector) + HitLocation;

		FIntPoint IntPoint = GetChunkCords(CubePosition);
		AVoxelActor* Chunk = FindChunk(IntPoint.X, IntPoint.Y);
		FVector Position = -Chunk->GetActorLocation() + CubePosition + GetHalfVoxelSize();

		FVector PositionDivided = Position / VoxelSize;
		FVector VecFloor = FVector(UKismetMathLibrary::FFloor(PositionDivided.X), UKismetMathLibrary::FFloor(PositionDivided.Y), UKismetMathLibrary::FFloor(PositionDivided.Z));
		
		cubePositionGlobal = Chunk->GetActorLocation() + (VecFloor * VoxelSize);

		HitCube->SetActorLocation(cubePositionGlobal);
	}

	return bHit;
}

void UVoxelComponent::VoxelAdd()
{
	// checking if inventory has voxel to spawn selected
	if (!InventoryActorComponent->CheckVoxelToSpawn())
	{
		return;
	}

	bIsAdding = true;
	bool TraceUpdated = UpdateCubeLineTrace();
	if (!TraceUpdated)
	{
		return;
	}
	
	FItem& Item = InventoryActorComponent->GetCurrentInventoryItem();
	UpdateVoxel(CubePosition, Item.ItemID + 6);

	if (!infiniteVoxelUse)
	{
		InventoryActorComponent->DecrementCurrentItem();
	}

	if (crackSize > 0)	// reseting crack so it dissapears
	{
		crackSize = 0;
		CubeDynamicMaterial->SetScalarParameterValue("CrackSize", (float)crackSize);
	}
}

void UVoxelComponent::VoxelHit()
{
	bIsAdding = false;
	bool WasVoxelHit = UpdateCubeLineTrace();
	if (!WasVoxelHit)
	{
		return;
	}

	int32 Index;
	GetVoxelForPosition(cubePositionGlobal, lastTypeHit, Index);

	if (lastIndexHit != Index)
	{
		// New HIT
		crackSize = 0;
		SingleCrackHit = 0;
		CubeDynamicMaterial->SetScalarParameterValue("CrackSize", (float)crackSize);
		lastIndexHit = Index;
	}
	else
	{
		// Another HIT
		int32 VoxelHitTempo = 2;				// Default hitting speed
		VoxelHitTempo = GetVoxelHitTempo();		// Determine how fast cracks are showing when hitting weapon

		SingleCrackHit++;
		if (SingleCrackHit % VoxelHitTempo == 0)
		{
			crackSize++;
			CubeDynamicMaterial->SetScalarParameterValue("CrackSize", (float)crackSize);

			// every 4 cracks
			if (crackSize % 4 == 0)
			{
				SpawnDestructible(CubePosition, false);
			}

			if (crackSize >= 11) // number of cracks
			{
				VoxelDestroy();
			}
		}

		// every 4 hits
		if (SingleCrackHit % 4 == 0)
		{
			PlayHitSound();
		}
	}
}

void UVoxelComponent::VoxelDestroy()
{
	crackSize = 0;
	CubeDynamicMaterial->SetScalarParameterValue("CrackSize", static_cast<float>(crackSize));
 	GetVoxelForPosition(cubePositionGlobal, lastTypeHit, lastIndexHit);

	// Spawn pickup
	GetWorld()->SpawnActor<AActor>(Pickups[lastTypeHit], FTransform(cubePositionGlobal));

	// Remove voxel
	UpdateVoxel(CubePosition, 0);

	// BlueprintImplementableEvent for spawning destructible debris
	SpawnDestructible(CubePosition, true);

	PlayDestructSound();
}

void UVoxelComponent::BeginPlay()
{
	Super::BeginPlay();
	
	VoxelAdministration = GetWorld()->SpawnActor<AVoxelAdministration>();
	HitCube = GetWorld()->SpawnActor<AStaticMeshActor>();
	HitCube->SetMobility(EComponentMobility::Movable);
	HitCube->SetActorScale3D(FVector(1.20005f, 1.20005f, 1.20005f));

	if (UStaticMeshComponent* HitCubeMeshComponent = HitCube->GetStaticMeshComponent())
	{
		CubeDynamicMaterial = UKismetMaterialLibrary::CreateDynamicMaterialInstance(GetOwner(), CubeDestructibleMaterial);
		HitCubeMeshComponent->SetStaticMesh(HitCubeMesh);
		HitCubeMeshComponent->SetMaterial(0, CubeDynamicMaterial.Get());
		HitCubeMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	InventoryActorComponent = GetOwner()->FindComponentByClass<UInventoryActorComponent>();
	Initialize();

	// VoxelAdministration begin play
	// Load voxel settings
	// Set custom settings
	// Set Load game values - recover saved state

}

void UVoxelComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateActorPosition();
	RemoveChunks();
	AddChunks();
}

bool UVoxelComponent::UpdateActorPosition()
{
	actorPosition = UGameplayStatics::GetPlayerPawn(GetOwner(), 0)->GetActorLocation();
	int32 NewChunkX = actorPosition.X / chunkSize;
	int32 NewChunkY = actorPosition.Y / chunkSize;

	bool WasChanged = (NewChunkX != chunkX || NewChunkY != chunkY);
	chunkX = NewChunkX;
	chunkY = NewChunkY;

	return WasChanged;
}

void UVoxelComponent::Initialize()
{
	chunkSize = chunkLineElements  * VoxelSize;
	chunkSizeHalf = chunkSize / 2;
}

void UVoxelComponent::AddChunks()
{
	if (VoxelActorTemplate == nullptr)
	{
		return;
	}

	const int32 FirstIndex = -renderRange;
	const int32 LastIndex = renderRange;

	for (int32 IndexX = FirstIndex; IndexX <= LastIndex; IndexX++)
	{
		for (int32 IndexY = FirstIndex; IndexY <= LastIndex; IndexY++)
		{
			const int32 GlobalX = IndexX + chunkX;
			const int32 GlobalY = IndexY + chunkY;

			float ChunkPositionX = GlobalX * chunkSize;
			float ChunkPositionY = GlobalY * chunkSize;
			float XCenter = ChunkPositionX + chunkSizeHalf;
			float YCenter = ChunkPositionY + chunkSizeHalf;

			if (checkRadius(XCenter, YCenter))
			{
				bool CreateCollisions = checkZeroRadius(XCenter, YCenter);

				// chunk already exists
				if (AVoxelActor* Chunk = FindChunk(GlobalX, GlobalY))
				{
					Chunk->updateCollisionRange(CreateCollisions);
				}
				else
				{
					chunkCoords.Add(FIntPoint(GlobalX, GlobalY));

					FTransform SpawnTransform = FTransform(FVector(ChunkPositionX, ChunkPositionY, 0.0f));

					AVoxelActor* SpawnedActor = GetWorld()->SpawnActorDeferred<AVoxelActor>(VoxelActorTemplate, SpawnTransform);
					SpawnedActor->voxelSize = VoxelSize;
					SpawnedActor->chunkLineElements = chunkLineElements;
					SpawnedActor->chunkXindex = GlobalX;
					SpawnedActor->chunkYindex = GlobalY;
					SpawnedActor->bCreateCollision = CreateCollisions;
					SpawnedActor->FinishSpawning(SpawnTransform);

					chunks.Add(SpawnedActor);
				}
			}
		}
	}
}

void UVoxelComponent::RemoveChunks()
{
	for (int32 Index = 0; Index < chunkCoords.Num(); Index++)
	{
		FIntPoint Vect = chunkCoords[Index];
		float ChunkPositionX = Vect.X * chunkSize;
		float ChunkPositionY = Vect.Y * chunkSize;
		bool InRanderRange = checkRadius(ChunkPositionX + chunkSizeHalf, ChunkPositionY + chunkSizeHalf);
		
		if (!InRanderRange)
		{
			chunkCoords.RemoveAt(Index, 1, false);
			chunks[Index]->Destroy();
			chunks.RemoveAt(Index, 1, false);
		}
	}

	chunkCoords.Shrink();
	chunks.Shrink();
}

bool UVoxelComponent::checkRadius(const float CenterX, const float CenterY)
{
	float RenderDistnace = (FVector(CenterX - actorPosition.X, CenterY - actorPosition.Y, 0.0f)).Size();
	
	return RenderDistnace < (chunkSize * renderRange);
}

bool UVoxelComponent::checkZeroRadius(const float CenterX, const float CenterY)
{
	float RenderDistnace = (FVector(CenterX - actorPosition.X, CenterY - actorPosition.Y, 0.0f)).Size();

	return RenderDistnace < chunkSize;
}

FVector UVoxelComponent::GetHalfVoxelSize()
{
	float VoxelSizeHalf = VoxelSize / 2;
	return FVector(VoxelSizeHalf, VoxelSizeHalf, VoxelSizeHalf);
}