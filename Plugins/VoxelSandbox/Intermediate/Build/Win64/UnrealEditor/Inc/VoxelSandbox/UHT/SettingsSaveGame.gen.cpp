// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/Public/Savegame/SettingsSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsSaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
VOXELSANDBOX_API UClass* Z_Construct_UClass_USettingsSaveGame();
VOXELSANDBOX_API UClass* Z_Construct_UClass_USettingsSaveGame_NoRegister();
// End Cross Module References

// Begin Class USettingsSaveGame
void USettingsSaveGame::StaticRegisterNativesUSettingsSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsSaveGame);
UClass* Z_Construct_UClass_USettingsSaveGame_NoRegister()
{
	return USettingsSaveGame::StaticClass();
}
struct Z_Construct_UClass_USettingsSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings savegame stores user settings data from one game session to another\n */" },
#endif
		{ "IncludePath", "Savegame/SettingsSaveGame.h" },
		{ "ModuleRelativePath", "Public/Savegame/SettingsSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings savegame stores user settings data from one game session to another" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graphics_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/SettingsSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_General_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/SettingsSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/SettingsSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderRange_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/SettingsSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Graphics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Graphics;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_General_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_General;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Graphics_Inner = { "Graphics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Graphics = { "Graphics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsSaveGame, Graphics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graphics_MetaData), NewProp_Graphics_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_General_Inner = { "General", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_General = { "General", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsSaveGame, General), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_General_MetaData), NewProp_General_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsSaveGame, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_RenderRange = { "RenderRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USettingsSaveGame, RenderRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderRange_MetaData), NewProp_RenderRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Graphics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Graphics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_General_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_General,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_RenderRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USettingsSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsSaveGame_Statics::ClassParams = {
	&USettingsSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USettingsSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingsSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USettingsSaveGame()
{
	if (!Z_Registration_Info_UClass_USettingsSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsSaveGame.OuterSingleton, Z_Construct_UClass_USettingsSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USettingsSaveGame.OuterSingleton;
}
template<> VOXELSANDBOX_API UClass* StaticClass<USettingsSaveGame>()
{
	return USettingsSaveGame::StaticClass();
}
USettingsSaveGame::USettingsSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsSaveGame);
USettingsSaveGame::~USettingsSaveGame() {}
// End Class USettingsSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_SettingsSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USettingsSaveGame, USettingsSaveGame::StaticClass, TEXT("USettingsSaveGame"), &Z_Registration_Info_UClass_USettingsSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsSaveGame), 3997562902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_SettingsSaveGame_h_3584365932(TEXT("/Script/VoxelSandbox"),
	Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_SettingsSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_SettingsSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
