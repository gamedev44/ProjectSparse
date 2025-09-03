// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/Public/Savegame/SettingsSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_USettingsSaveGame();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_USettingsSaveGame_NoRegister();
// End Cross Module References
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Graphics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graphics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Graphics;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_General_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_General_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_General;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderRange_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenderRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings savegame stores user settings data from one game session to another\n */" },
		{ "IncludePath", "Savegame/SettingsSaveGame.h" },
		{ "ModuleRelativePath", "Public/Savegame/SettingsSaveGame.h" },
		{ "ToolTip", "Settings savegame stores user settings data from one game session to another" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Graphics_Inner = { "Graphics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Graphics_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/SettingsSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Graphics = { "Graphics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSaveGame, Graphics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Graphics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Graphics_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_General_Inner = { "General", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_General_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/SettingsSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_General = { "General", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSaveGame, General), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_General_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_General_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/SettingsSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSaveGame, Resolution), METADATA_PARAMS(Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_RenderRange_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/SettingsSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_RenderRange = { "RenderRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsSaveGame, RenderRange), METADATA_PARAMS(Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_RenderRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_RenderRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Graphics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Graphics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_General_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_General,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsSaveGame_Statics::NewProp_RenderRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingsSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsSaveGame>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_USettingsSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSaveGame_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_SettingsSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_SettingsSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USettingsSaveGame, USettingsSaveGame::StaticClass, TEXT("USettingsSaveGame"), &Z_Registration_Info_UClass_USettingsSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsSaveGame), 926990249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_SettingsSaveGame_h_3079140054(TEXT("/Script/VoxelSandbox"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_SettingsSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_SettingsSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
