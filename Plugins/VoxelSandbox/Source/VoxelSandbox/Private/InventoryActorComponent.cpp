// Copyright 2019 Tefel. All Rights Reserved

#include "InventoryActorComponent.h"
#include "Kismet/KismetMathLibrary.h"

FItem& UInventoryActorComponent::GetCurrentInventoryItem()
{
	if (Items.IsValidIndex(currentItembarID))
	{
		return Items[currentItembarID];
	}

	static FItem EmptyItem = FItem();
	return EmptyItem;
}

void UInventoryActorComponent::NextSelectedItem()
{
	currentItembarID++;
	currentItembarID = UKismetMathLibrary::Clamp(currentItembarID, 0, InventorySlotNumber);
	ChangeToolbarItem();
}

void UInventoryActorComponent::PreviousSelectedItem()
{
	currentItembarID--;
	currentItembarID = UKismetMathLibrary::Clamp(currentItembarID, 0, InventorySlotNumber);
	ChangeToolbarItem();
}

void UInventoryActorComponent::PickItem(const int32 ItemType)
{
	for (int32 Index = 0; Index < Items.Num(); Index++)
	{
		if (Items[Index].ItemID == ItemType && Items[Index].ItemCount < 64)
		{
			// Index found
			FItem& Item = Items[Index];
			Item.ItemCount++;
			return;
		}
	}

	// finding first empty item to swap
	for (int32 Index = 0; Index < Items.Num(); Index++)
	{
		if (Items[Index].ItemID <= 0)
		{
			FItem& Item = Items[Index];
			Item.ItemCount = 1;
			Item.ItemID = ItemType;
			return;
		}
	}
}

void UInventoryActorComponent::ButtonItemPressed(const int32 Index)
{
	// Lifted items stats - swapping items
	FItem TempItem = CurrentItem;
	CurrentItem = Items[Index];
	Items[Index] = TempItem;

	ChangeInventoryItem();
}

UStaticMesh* UInventoryActorComponent::GetMeshSelectedMesh()
{
	if (Items.IsValidIndex(currentItembarID))
	{
		FItem& Item = Items[currentItembarID];
		if (Meshes.IsValidIndex(Item.ItemID))
		{
			return Meshes[Item.ItemID];
		}
	}

	return nullptr;
}

void UInventoryActorComponent::DecrementCurrentItem()
{
	FItem& Item = GetCurrentInventoryItem();
	Item.ItemCount--;

	if (Item.ItemCount <= 0)
	{
		Item.ItemID = 0;
		NoItemsLeft();
	}
}

bool UInventoryActorComponent::CheckVoxelToSpawn()
{
	FItem& Item = GetCurrentInventoryItem();

	// only items 4-8 can currently spawn items
	return (Item.ItemID > 4 && Item.ItemID <= 8);	
}

void UInventoryActorComponent::BeginPlay()
{
	Super::BeginPlay();

	ChangeToolbarItem();
}