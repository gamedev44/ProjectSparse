// Copyright 2019 Tefel. All Rights Reserved

#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryActorComponent.generated.h"

// Item types
USTRUCT(BlueprintType)
struct FItem
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 ItemID = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 ItemCount = 0;

};

// Inventory components provides functionality for keeping items in action bar and crafting
// It is responsible of all inventory states and Items
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOXELSANDBOX_API UInventoryActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Getting current Item 
	UFUNCTION(BlueprintPure, Category = "Inventory")
	FItem& GetCurrentInventoryItem();

	// Goes to the next item - selecting it
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void NextSelectedItem();

	// Goes to the previous item - selecting it
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void PreviousSelectedItem();

	// Implementation for specific item being picked
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void PickItem(const int32 ItemType);

	// Lifting inventory item in the main inventory
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void ButtonItemPressed(const int32 Index);

	// Notifies when ToolbarItem changed, so bp visuals can be updated
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Inventory")
	void ChangeToolbarItem();

	// Notifies when Inventory item changed, so UI can be updated
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Inventory")
	void ChangeInventoryItem();

	// Getting StaticMesh from items config by current selected inventory item index
	UFUNCTION(BlueprintPure, Category = "Inventory")
	UStaticMesh* GetMeshSelectedMesh();

	// Notify that there are no more items, co visuals needs to be updated
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Inventory")
	void NoItemsLeft();

	// After using and item decrementing count of it in the inventory
	void DecrementCurrentItem();

	// Checks if selected item is ground voxel
	bool CheckVoxelToSpawn();

	// Items in the inventory
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<FItem> Items;

	// Items textures
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<class UTexture2D*> Textures;

	// Items meshes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<class UStaticMesh*> Meshes;

	// Lifted item - when pressing (mouse pointer is holding it)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	FItem CurrentItem;

	// Inventory selected item ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 currentItembarID;

	// Number of inventory slots
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 InventorySlotNumber = 8;

protected:
	virtual void BeginPlay() override;

};