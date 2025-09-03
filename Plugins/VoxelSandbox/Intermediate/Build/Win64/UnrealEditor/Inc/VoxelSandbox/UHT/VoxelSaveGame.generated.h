// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Savegame/VoxelSaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOXELSANDBOX_VoxelSaveGame_generated_h
#error "VoxelSaveGame.generated.h already included, missing '#pragma once' in VoxelSaveGame.h"
#endif
#define VOXELSANDBOX_VoxelSaveGame_generated_h

#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSaveGame(); \
	friend struct Z_Construct_UClass_UVoxelSaveGame_Statics; \
public: \
	DECLARE_CLASS(UVoxelSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelSandbox"), NO_API) \
	DECLARE_SERIALIZER(UVoxelSaveGame)


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVoxelSaveGame(UVoxelSaveGame&&); \
	UVoxelSaveGame(const UVoxelSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSaveGame) \
	NO_API virtual ~UVoxelSaveGame();


#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_13_PROLOG
#define FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOXELSANDBOX_API UClass* StaticClass<class UVoxelSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
