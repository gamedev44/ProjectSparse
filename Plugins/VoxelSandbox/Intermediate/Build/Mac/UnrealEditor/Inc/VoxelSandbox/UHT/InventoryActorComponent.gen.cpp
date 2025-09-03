// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/Public/InventoryActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryActorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_UInventoryActorComponent();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_UInventoryActorComponent_NoRegister();
	VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
// End Cross Module References
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Item types\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Item types" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItem, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemCount_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItem, ItemCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
		nullptr,
		&NewStructOps,
		"Item",
		sizeof(FItem),
		alignof(FItem),
		Z_Construct_UScriptStruct_FItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItem()
	{
		if (!Z_Registration_Info_UScriptStruct_Item.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Item.InnerSingleton, Z_Construct_UScriptStruct_FItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Item.InnerSingleton;
	}
	DEFINE_FUNCTION(UInventoryActorComponent::execGetMeshSelectedMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->GetMeshSelectedMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryActorComponent::execButtonItemPressed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonItemPressed(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryActorComponent::execPickItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickItem(Z_Param_ItemType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryActorComponent::execPreviousSelectedItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreviousSelectedItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryActorComponent::execNextSelectedItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextSelectedItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryActorComponent::execGetCurrentInventoryItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItem*)Z_Param__Result=P_THIS->GetCurrentInventoryItem();
		P_NATIVE_END;
	}
	static FName NAME_UInventoryActorComponent_ChangeInventoryItem = FName(TEXT("ChangeInventoryItem"));
	void UInventoryActorComponent::ChangeInventoryItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInventoryActorComponent_ChangeInventoryItem),NULL);
	}
	static FName NAME_UInventoryActorComponent_ChangeToolbarItem = FName(TEXT("ChangeToolbarItem"));
	void UInventoryActorComponent::ChangeToolbarItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInventoryActorComponent_ChangeToolbarItem),NULL);
	}
	static FName NAME_UInventoryActorComponent_NoItemsLeft = FName(TEXT("NoItemsLeft"));
	void UInventoryActorComponent::NoItemsLeft()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInventoryActorComponent_NoItemsLeft),NULL);
	}
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
	struct Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics
	{
		struct InventoryActorComponent_eventButtonItemPressed_Parms
		{
			int32 Index;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryActorComponent_eventButtonItemPressed_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Lifting inventory item in the main inventory\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Lifting inventory item in the main inventory" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "ButtonItemPressed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::InventoryActorComponent_eventButtonItemPressed_Parms), Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Notifies when Inventory item changed, so UI can be updated\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Notifies when Inventory item changed, so UI can be updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "ChangeInventoryItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Notifies when ToolbarItem changed, so bp visuals can be updated\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Notifies when ToolbarItem changed, so bp visuals can be updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "ChangeToolbarItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics
	{
		struct InventoryActorComponent_eventGetCurrentInventoryItem_Parms
		{
			FItem ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryActorComponent_eventGetCurrentInventoryItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(nullptr, 0) }; // 3963133945
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Getting current Item \n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Getting current Item" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "GetCurrentInventoryItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::InventoryActorComponent_eventGetCurrentInventoryItem_Parms), Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics
	{
		struct InventoryActorComponent_eventGetMeshSelectedMesh_Parms
		{
			UStaticMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryActorComponent_eventGetMeshSelectedMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Getting StaticMesh from items config by current selected inventory item index\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Getting StaticMesh from items config by current selected inventory item index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "GetMeshSelectedMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::InventoryActorComponent_eventGetMeshSelectedMesh_Parms), Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Goes to the next item - selecting it\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Goes to the next item - selecting it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "NextSelectedItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Notify that there are no more items, co visuals needs to be updated\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Notify that there are no more items, co visuals needs to be updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "NoItemsLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics
	{
		struct InventoryActorComponent_eventPickItem_Parms
		{
			int32 ItemType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryActorComponent_eventPickItem_Parms, ItemType), METADATA_PARAMS(Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::NewProp_ItemType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::NewProp_ItemType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Implementation for specific item being picked\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Implementation for specific item being picked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "PickItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::InventoryActorComponent_eventPickItem_Parms), Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryActorComponent_PickItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_PickItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Goes to the previous item - selecting it\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Goes to the previous item - selecting it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryActorComponent, nullptr, "PreviousSelectedItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryActorComponent);
	UClass* Z_Construct_UClass_UInventoryActorComponent_NoRegister()
	{
		return UInventoryActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentItembarID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_currentItembarID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryActorComponent_ButtonItemPressed, "ButtonItemPressed" }, // 192014021
		{ &Z_Construct_UFunction_UInventoryActorComponent_ChangeInventoryItem, "ChangeInventoryItem" }, // 1132347243
		{ &Z_Construct_UFunction_UInventoryActorComponent_ChangeToolbarItem, "ChangeToolbarItem" }, // 1978621659
		{ &Z_Construct_UFunction_UInventoryActorComponent_GetCurrentInventoryItem, "GetCurrentInventoryItem" }, // 2711293702
		{ &Z_Construct_UFunction_UInventoryActorComponent_GetMeshSelectedMesh, "GetMeshSelectedMesh" }, // 2426849984
		{ &Z_Construct_UFunction_UInventoryActorComponent_NextSelectedItem, "NextSelectedItem" }, // 339918977
		{ &Z_Construct_UFunction_UInventoryActorComponent_NoItemsLeft, "NoItemsLeft" }, // 4293016567
		{ &Z_Construct_UFunction_UInventoryActorComponent_PickItem, "PickItem" }, // 1866461584
		{ &Z_Construct_UFunction_UInventoryActorComponent_PreviousSelectedItem, "PreviousSelectedItem" }, // 606998146
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// Inventory components provides functionality for keeping items in action bar and crafting\n// It is responsible of all inventory states and Items\n" },
		{ "IncludePath", "InventoryActorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Inventory components provides functionality for keeping items in action bar and crafting\nIt is responsible of all inventory states and Items" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(nullptr, 0) }; // 3963133945
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Items in the inventory\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Items in the inventory" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryActorComponent, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Items_MetaData)) }; // 3963133945
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Items textures\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Items textures" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryActorComponent, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Textures_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Items meshes\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Items meshes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryActorComponent, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_Meshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_CurrentItem_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Lifted item - when pressing (mouse pointer is holding it)\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Lifted item - when pressing (mouse pointer is holding it)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_CurrentItem = { "CurrentItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryActorComponent, CurrentItem), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_CurrentItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_CurrentItem_MetaData)) }; // 3963133945
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_currentItembarID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Inventory selected item ID\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Inventory selected item ID" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_currentItembarID = { "currentItembarID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryActorComponent, currentItembarID), METADATA_PARAMS(Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_currentItembarID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_currentItembarID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_InventorySlotNumber_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// Number of inventory slots\n" },
		{ "ModuleRelativePath", "Public/InventoryActorComponent.h" },
		{ "ToolTip", "Number of inventory slots" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_InventorySlotNumber = { "InventorySlotNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryActorComponent, InventorySlotNumber), METADATA_PARAMS(Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_InventorySlotNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::NewProp_InventorySlotNumber_MetaData)) };
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryActorComponent>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UInventoryActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryActorComponent_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_Statics::ScriptStructInfo[] = {
		{ FItem::StaticStruct, Z_Construct_UScriptStruct_FItem_Statics::NewStructOps, TEXT("Item"), &Z_Registration_Info_UScriptStruct_Item, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItem), 3963133945U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryActorComponent, UInventoryActorComponent::StaticClass, TEXT("UInventoryActorComponent"), &Z_Registration_Info_UClass_UInventoryActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryActorComponent), 879474337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_166024990(TEXT("/Script/VoxelSandbox"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
