// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/Public/InventoryActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryActorComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
VOXELSANDBOX_API UClass* Z_Construct_UClass_UInventoryActorComponent();
VOXELSANDBOX_API UClass* Z_Construct_UClass_UInventoryActorComponent_NoRegister();
VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
// End Cross Module References

// Begin ScriptStruct FItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Item;
class UScriptStruct* FItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Item.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Item.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItem, (UObject*)Z_Construct_UPackage__Script_VoxelSandbox(), TEXT("Item"));
	}
	return Z_Registration_Info_UScriptStruct_Item.OuterSingleton;
}
template<> VOXELSANDBOX_API UScriptStruct* StaticStruct<FItem>()
{
	return FItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Item types\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item types" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItem, ItemCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCount_MetaData), NewProp_ItemCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
	nullptr,
	&NewStructOps,
	"Item",
	Z_Construct_UScriptStruct_FItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::PropPointers),
	sizeof(FItem),
	alignof(FItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItem()
{
	if (!Z_Registration_Info_UScriptStruct_Item.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Item.InnerSingleton, Z_Construct_UScriptStruct_FItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Item.InnerSingleton;
}
// End ScriptStruct FItem

// Begin Class UInventoryActorComponent Function ButtonItemPressed
struct Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics
{
	struct InventoryActorComponent_eventButtonItemPressed_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lifting inventory item in the main inventory\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lifting inventory item in the main inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventButtonItemPressed_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "ButtonItemPressed", nullptr, nullptr, Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::InventoryActorComponent_eventButtonItemPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::InventoryActorComponent_eventButtonItemPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryActorComponent::execButtonItemPressed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ButtonItemPressed(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UInventoryActorComponent Function ButtonItemPressed

// Begin Class UInventoryActorComponent Function ChangeInventoryItem
static const FName NAME_UInventoryActorComponent_ChangeInventoryItem = FName(TEXT("ChangeInventoryItem"));
void UInventoryActorComponent::ChangeInventoryItem()
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryActorComponent_ChangeInventoryItem);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notifies when Inventory item changed, so UI can be updated\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notifies when Inventory item changed, so UI can be updated" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "ChangeInventoryItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UInventoryActorComponent Function ChangeInventoryItem

// Begin Class UInventoryActorComponent Function ChangeToolbarItem
static const FName NAME_UInventoryActorComponent_ChangeToolbarItem = FName(TEXT("ChangeToolbarItem"));
void UInventoryActorComponent::ChangeToolbarItem()
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryActorComponent_ChangeToolbarItem);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notifies when ToolbarItem changed, so bp visuals can be updated\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notifies when ToolbarItem changed, so bp visuals can be updated" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "ChangeToolbarItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UInventoryActorComponent Function ChangeToolbarItem

// Begin Class UInventoryActorComponent Function GetCurrentInventoryItem
struct Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics
{
	struct InventoryActorComponent_eventGetCurrentInventoryItem_Parms
	{
		FItem ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getting current Item \n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getting current Item" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventGetCurrentInventoryItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(0, nullptr) }; // 3971636446
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "GetCurrentInventoryItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::InventoryActorComponent_eventGetCurrentInventoryItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::InventoryActorComponent_eventGetCurrentInventoryItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryActorComponent::execGetCurrentInventoryItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItem*)Z_Param__Result=P_THIS->GetCurrentInventoryItem();
	P_NATIVE_END;
}
// End Class UInventoryActorComponent Function GetCurrentInventoryItem

// Begin Class UInventoryActorComponent Function GetMeshSelectedMesh
struct Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics
{
	struct InventoryActorComponent_eventGetMeshSelectedMesh_Parms
	{
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getting StaticMesh from items config by current selected inventory item index\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getting StaticMesh from items config by current selected inventory item index" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventGetMeshSelectedMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "GetMeshSelectedMesh", nullptr, nullptr, Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::InventoryActorComponent_eventGetMeshSelectedMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::InventoryActorComponent_eventGetMeshSelectedMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryActorComponent::execGetMeshSelectedMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=P_THIS->GetMeshSelectedMesh();
	P_NATIVE_END;
}
// End Class UInventoryActorComponent Function GetMeshSelectedMesh

// Begin Class UInventoryActorComponent Function NextSelectedItem
struct Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Goes to the next item - selecting it\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Goes to the next item - selecting it" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "NextSelectedItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryActorComponent::execNextSelectedItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextSelectedItem();
	P_NATIVE_END;
}
// End Class UInventoryActorComponent Function NextSelectedItem

// Begin Class UInventoryActorComponent Function NoItemsLeft
static const FName NAME_UInventoryActorComponent_NoItemsLeft = FName(TEXT("NoItemsLeft"));
void UInventoryActorComponent::NoItemsLeft()
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryActorComponent_NoItemsLeft);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Notify that there are no more items, co visuals needs to be updated\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify that there are no more items, co visuals needs to be updated" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "NoItemsLeft", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UInventoryActorComponent Function NoItemsLeft

// Begin Class UInventoryActorComponent Function PickItem
struct Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics
{
	struct InventoryActorComponent_eventPickItem_Parms
	{
		int32 ItemType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implementation for specific item being picked\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implementation for specific item being picked" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryActorComponent_eventPickItem_Parms, ItemType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::NewProp_ItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "PickItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::InventoryActorComponent_eventPickItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::InventoryActorComponent_eventPickItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryActorComponent_PickItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryActorComponent::execPickItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PickItem(Z_Param_ItemType);
	P_NATIVE_END;
}
// End Class UInventoryActorComponent Function PickItem

// Begin Class UInventoryActorComponent Function PreviousSelectedItem
struct Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Goes to the previous item - selecting it\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Goes to the previous item - selecting it" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "PreviousSelectedItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryActorComponent::execPreviousSelectedItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreviousSelectedItem();
	P_NATIVE_END;
}
// End Class UInventoryActorComponent Function PreviousSelectedItem

// Begin Class UInventoryActorComponent
void UInventoryActorComponent::StaticRegisterNativesUInventoryActorComponent()
{
	UClass* Class = UInventoryActorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ButtonItemPressed", &UInventoryActorComponent::execButtonItemPressed },
		{ "GetCurrentInventoryItem", &UInventoryActorComponent::execGetCurrentInventoryItem },
		{ "GetMeshSelectedMesh", &UInventoryActorComponent::execGetMeshSelectedMesh },
		{ "NextSelectedItem", &UInventoryActorComponent::execNextSelectedItem },
		{ "PickItem", &UInventoryActorComponent::execPickItem },
		{ "PreviousSelectedItem", &UInventoryActorComponent::execPreviousSelectedItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryActorComponent);
UClass* Z_Construct_UClass_UInventoryActorComponent_NoRegister()
{
	return UInventoryActorComponent::StaticClass();
}
struct Z_Construct_UClass_UInventoryActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inventory components provides functionality for keeping items in action bar and crafting\n// It is responsible of all inventory states and Items\n" },
#endif
		{ "IncludePath", "InventoryActorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory components provides functionality for keeping items in action bar and crafting\nIt is responsible of all inventory states and Items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Items in the inventory\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Items in the inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Items textures\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Items textures" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Items meshes\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Items meshes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentItem_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lifted item - when pressing (mouse pointer is holding it)\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lifted item - when pressing (mouse pointer is holding it)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentItembarID_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inventory selected item ID\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory selected item ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotNumber_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of inventory slots\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of inventory slots" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentItembarID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed, "ButtonItemPressed" }, // 3347657629
		{ &Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem, "ChangeInventoryItem" }, // 1642473314
		{ &Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem, "ChangeToolbarItem" }, // 2881120371
		{ &Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem, "GetCurrentInventoryItem" }, // 367932325
		{ &Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh, "GetMeshSelectedMesh" }, // 478133735
		{ &Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem, "NextSelectedItem" }, // 4264135853
		{ &Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft, "NoItemsLeft" }, // 311195210
		{ &Z_Construct_UFunction_UInventoryActorComponent_PickItem, "PickItem" }, // 2446889953
		{ &Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem, "PreviousSelectedItem" }, // 3161278422
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(0, nullptr) }; // 3971636446
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryActorComponent, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 3971636446
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryActorComponent, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryActorComponent, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_CurrentItem = { "CurrentItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryActorComponent, CurrentItem), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentItem_MetaData), NewProp_CurrentItem_MetaData) }; // 3971636446
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_currentItembarID = { "currentItembarID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryActorComponent, currentItembarID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentItembarID_MetaData), NewProp_currentItembarID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_InventorySlotNumber = { "InventorySlotNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryActorComponent, InventorySlotNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySlotNumber_MetaData), NewProp_InventorySlotNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryActorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Textures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Textures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Meshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_CurrentItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_currentItembarID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_InventorySlotNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryActorComponent_Statics::ClassParams = {
	&UInventoryActorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryActorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryActorComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryActorComponent.OuterSingleton, Z_Construct_UClass_UInventoryActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryActorComponent.OuterSingleton;
}
template<> VOXELSANDBOX_API UClass* StaticClass<UInventoryActorComponent>()
{
	return UInventoryActorComponent::StaticClass();
}
UInventoryActorComponent::UInventoryActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryActorComponent);
UInventoryActorComponent::~UInventoryActorComponent() {}
// End Class UInventoryActorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItem::StaticStruct, Z_Construct_UScriptStruct_FItem_Statics::NewStructOps, TEXT("Item"), &Z_Registration_Info_UScriptStruct_Item, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItem), 3971636446U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryActorComponent, UInventoryActorComponent::StaticClass, TEXT("UInventoryActorComponent"), &Z_Registration_Info_UClass_UInventoryActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryActorComponent), 1484438862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_256437275(TEXT("/Script/VoxelSandbox"),
	Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
