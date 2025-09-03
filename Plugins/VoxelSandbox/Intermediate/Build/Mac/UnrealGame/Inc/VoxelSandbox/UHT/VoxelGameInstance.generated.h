// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USettingsSaveGame;
class UWorld;
struct FVoxelSave;
#ifdef VOXELSANDBOX_VoxelGameInstance_generated_h
#error "VoxelGameInstance.generated.h already included, missing '#pragma once' in VoxelGameInstance.h"
#endif
#define VOXELSANDBOX_VoxelGameInstance_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelSave_Statics; \
	VOXELSANDBOX_API static class UScriptStruct* StaticStruct();


template<> VOXELSANDBOX_API UScriptStruct* StaticStruct<struct FVoxelSave>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomSettings); \
	DECLARE_FUNCTION(execLoadGraphicSettings); \
	DECLARE_FUNCTION(execLoadVoxelSettings); \
	DECLARE_FUNCTION(execEndLoadingScreen); \
	DECLARE_FUNCTION(execBeginLoadingScreen); \
	DECLARE_FUNCTION(execGetAllSaveGameSlotNames); \
	DECLARE_FUNCTION(execGetSettings);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomSettings); \
	DECLARE_FUNCTION(execLoadGraphicSettings); \
	DECLARE_FUNCTION(execLoadVoxelSettings); \
	DECLARE_FUNCTION(execEndLoadingScreen); \
	DECLARE_FUNCTION(execBeginLoadingScreen); \
	DECLARE_FUNCTION(execGetAllSaveGameSlotNames); \
	DECLARE_FUNCTION(execGetSettings);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGameInstance(); \
	friend struct Z_Construct_UClass_UVoxelGameInstance_Statics; \
public: \
	DECLARE_CLASS(UVoxelGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VoxelSandbox"), NO_API) \
	DECLARE_SERIALIZER(UVoxelGameInstance)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUVoxelGameInstance(); \
	friend struct Z_Construct_UClass_UVoxelGameInstance_Statics; \
public: \
	DECLARE_CLASS(UVoxelGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VoxelSandbox"), NO_API) \
	DECLARE_SERIALIZER(UVoxelGameInstance)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelGameInstance(UVoxelGameInstance&&); \
	NO_API UVoxelGameInstance(const UVoxelGameInstance&); \
public: \
	NO_API virtual ~UVoxelGameInstance();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoxelGameInstance(UVoxelGameInstance&&); \
	NO_API UVoxelGameInstance(const UVoxelGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGameInstance) \
	NO_API virtual ~UVoxelGameInstance();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_29_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXELSANDBOX_API UClass* StaticClass<class UVoxelGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
