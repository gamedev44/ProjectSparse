// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelAdministration.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVoxelSaveGame;
struct FSectorX;
struct FVoxel;
#ifdef VOXELSANDBOX_VoxelAdministration_generated_h
#error "VoxelAdministration.generated.h already included, missing '#pragma once' in VoxelAdministration.h"
#endif
#define VOXELSANDBOX_VoxelAdministration_generated_h

#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLoadGameValues); \
	DECLARE_FUNCTION(execSetSaveGameValues); \
	DECLARE_FUNCTION(execgetVoxelData); \
	DECLARE_FUNCTION(execUpdateVoxel); \
	DECLARE_FUNCTION(execFindVoxelIndex);


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelAdministration(); \
	friend struct Z_Construct_UClass_AVoxelAdministration_Statics; \
public: \
	DECLARE_CLASS(AVoxelAdministration, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VoxelSandbox"), NO_API) \
	DECLARE_SERIALIZER(AVoxelAdministration)


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVoxelAdministration(AVoxelAdministration&&); \
	AVoxelAdministration(const AVoxelAdministration&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelAdministration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelAdministration); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelAdministration) \
	NO_API virtual ~AVoxelAdministration();


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_10_PROLOG
#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXELSANDBOX_API UClass* StaticClass<class AVoxelAdministration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
