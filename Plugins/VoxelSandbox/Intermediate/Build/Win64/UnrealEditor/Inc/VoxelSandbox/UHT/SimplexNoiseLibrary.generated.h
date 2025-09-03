// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThirdParty/SimplexNoiseLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXELSANDBOX_SimplexNoiseLibrary_generated_h
#error "SimplexNoiseLibrary.generated.h already included, missing '#pragma once' in SimplexNoiseLibrary.h"
#endif
#define VOXELSANDBOX_SimplexNoiseLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSimplexNoiseInRange4D); \
	DECLARE_FUNCTION(execSimplexNoiseInRange3D); \
	DECLARE_FUNCTION(execSimplexNoiseInRange2D); \
	DECLARE_FUNCTION(execSimplexNoiseInRange1D); \
	DECLARE_FUNCTION(execSimplexNoiseScaled4D); \
	DECLARE_FUNCTION(execSimplexNoiseScaled3D); \
	DECLARE_FUNCTION(execSimplexNoiseScaled2D); \
	DECLARE_FUNCTION(execSimplexNoiseScaled1D); \
	DECLARE_FUNCTION(execSimplexNoise4D); \
	DECLARE_FUNCTION(execSimplexNoise3D); \
	DECLARE_FUNCTION(execSimplexNoise2D); \
	DECLARE_FUNCTION(execSimplexNoise1D); \
	DECLARE_FUNCTION(execsetNoiseSeed);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSimplexNoiseInRange4D); \
	DECLARE_FUNCTION(execSimplexNoiseInRange3D); \
	DECLARE_FUNCTION(execSimplexNoiseInRange2D); \
	DECLARE_FUNCTION(execSimplexNoiseInRange1D); \
	DECLARE_FUNCTION(execSimplexNoiseScaled4D); \
	DECLARE_FUNCTION(execSimplexNoiseScaled3D); \
	DECLARE_FUNCTION(execSimplexNoiseScaled2D); \
	DECLARE_FUNCTION(execSimplexNoiseScaled1D); \
	DECLARE_FUNCTION(execSimplexNoise4D); \
	DECLARE_FUNCTION(execSimplexNoise3D); \
	DECLARE_FUNCTION(execSimplexNoise2D); \
	DECLARE_FUNCTION(execSimplexNoise1D); \
	DECLARE_FUNCTION(execsetNoiseSeed);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimplexNoiseLibrary(); \
	friend struct Z_Construct_UClass_USimplexNoiseLibrary_Statics; \
public: \
	DECLARE_CLASS(USimplexNoiseLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelSandbox"), NO_API) \
	DECLARE_SERIALIZER(USimplexNoiseLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUSimplexNoiseLibrary(); \
	friend struct Z_Construct_UClass_USimplexNoiseLibrary_Statics; \
public: \
	DECLARE_CLASS(USimplexNoiseLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelSandbox"), NO_API) \
	DECLARE_SERIALIZER(USimplexNoiseLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimplexNoiseLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimplexNoiseLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimplexNoiseLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimplexNoiseLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimplexNoiseLibrary(USimplexNoiseLibrary&&); \
	NO_API USimplexNoiseLibrary(const USimplexNoiseLibrary&); \
public: \
	NO_API virtual ~USimplexNoiseLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimplexNoiseLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimplexNoiseLibrary(USimplexNoiseLibrary&&); \
	NO_API USimplexNoiseLibrary(const USimplexNoiseLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimplexNoiseLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimplexNoiseLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimplexNoiseLibrary) \
	NO_API virtual ~USimplexNoiseLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_28_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXELSANDBOX_API UClass* StaticClass<class USimplexNoiseLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
