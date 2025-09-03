// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
struct FItem;
#ifdef VOXELSANDBOX_InventoryActorComponent_generated_h
#error "InventoryActorComponent.generated.h already included, missing '#pragma once' in InventoryActorComponent.h"
#endif
#define VOXELSANDBOX_InventoryActorComponent_generated_h

#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItem_Statics; \
	VOXELSANDBOX_API static class UScriptStruct* StaticStruct();


template<> VOXELSANDBOX_API UScriptStruct* StaticStruct<struct FItem>();

#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMeshSelectedMesh); \
	DECLARE_FUNCTION(execButtonItemPressed); \
	DECLARE_FUNCTION(execPickItem); \
	DECLARE_FUNCTION(execPreviousSelectedItem); \
	DECLARE_FUNCTION(execNextSelectedItem); \
	DECLARE_FUNCTION(execGetCurrentInventoryItem);


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_27_CALLBACK_WRAPPERS
#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryActorComponent(); \
	friend struct Z_Construct_UClass_UInventoryActorComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoxelSandbox"), NO_API) \
	DECLARE_SERIALIZER(UInventoryActorComponent)


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryActorComponent(UInventoryActorComponent&&); \
	UInventoryActorComponent(const UInventoryActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryActorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryActorComponent) \
	NO_API virtual ~UInventoryActorComponent();


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_24_PROLOG
#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_27_CALLBACK_WRAPPERS \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXELSANDBOX_API UClass* StaticClass<class UInventoryActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_InventoryActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
