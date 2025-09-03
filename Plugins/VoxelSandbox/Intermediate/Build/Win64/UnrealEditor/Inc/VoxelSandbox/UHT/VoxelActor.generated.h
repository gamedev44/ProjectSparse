// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXELSANDBOX_VoxelActor_generated_h
#error "VoxelActor.generated.h already included, missing '#pragma once' in VoxelActor.h"
#endif
#define VOXELSANDBOX_VoxelActor_generated_h

#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateExtras); \
	DECLARE_FUNCTION(execApplyMaterials); \
	DECLARE_FUNCTION(execupdateCollisionRange); \
	DECLARE_FUNCTION(execgetVoxel); \
	DECLARE_FUNCTION(execsetVoxel);


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_28_CALLBACK_WRAPPERS
#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelActor(); \
	friend struct Z_Construct_UClass_AVoxelActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoxelSandbox"), NO_API) \
	DECLARE_SERIALIZER(AVoxelActor)


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVoxelActor(AVoxelActor&&); \
	AVoxelActor(const AVoxelActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelActor) \
	NO_API virtual ~AVoxelActor();


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_25_PROLOG
#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_28_CALLBACK_WRAPPERS \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_28_INCLASS_NO_PURE_DECLS \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXELSANDBOX_API UClass* StaticClass<class AVoxelActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
