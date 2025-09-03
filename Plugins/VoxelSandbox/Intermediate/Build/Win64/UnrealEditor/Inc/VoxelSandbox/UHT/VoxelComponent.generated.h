// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVoxelActor;
#ifdef VOXELSANDBOX_VoxelComponent_generated_h
#error "VoxelComponent.generated.h already included, missing '#pragma once' in VoxelComponent.h"
#endif
#define VOXELSANDBOX_VoxelComponent_generated_h

#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execVoxelDestroy); \
	DECLARE_FUNCTION(execVoxelHit); \
	DECLARE_FUNCTION(execVoxelAdd); \
	DECLARE_FUNCTION(execUpdateCubeLineTrace); \
	DECLARE_FUNCTION(execFindChunk); \
	DECLARE_FUNCTION(execUpdateVoxel); \
	DECLARE_FUNCTION(execGetVoxelForPosition); \
	DECLARE_FUNCTION(execSetExtras);


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_14_CALLBACK_WRAPPERS
#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelComponent(); \
	friend struct Z_Construct_UClass_UVoxelComponent_Statics; \
public: \
	DECLARE_CLASS(UVoxelComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoxelSandbox"), NO_API) \
	DECLARE_SERIALIZER(UVoxelComponent)


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVoxelComponent(UVoxelComponent&&); \
	UVoxelComponent(const UVoxelComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelComponent) \
	NO_API virtual ~UVoxelComponent();


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_11_PROLOG
#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_14_CALLBACK_WRAPPERS \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXELSANDBOX_API UClass* StaticClass<class UVoxelComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
