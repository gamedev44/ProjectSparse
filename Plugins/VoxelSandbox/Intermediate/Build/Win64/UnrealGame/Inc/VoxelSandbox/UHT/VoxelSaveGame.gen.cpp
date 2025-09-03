// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/Public/Savegame/VoxelSaveGame.h"
#include "VoxelSandbox/Public/InventoryActorComponent.h"
#include "VoxelSandbox/Public/VoxelTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSaveGame() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_UVoxelSaveGame();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_UVoxelSaveGame_NoRegister();
	VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
	VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FSectorArrayY();
// End Cross Module References
	void UVoxelSaveGame::StaticRegisterNativesUVoxelSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelSaveGame);
	UClass* Z_Construct_UClass_UVoxelSaveGame_NoRegister()
	{
		return UVoxelSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seedName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_seedName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeedNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SeedNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectorsArrY_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectorsArrY_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectorsArrY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectorsArrYneg_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectorsArrYneg_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectorsArrYneg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_customSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_customSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_customSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Savegame system - storing data about Voxels and world game data\n */" },
		{ "IncludePath", "Savegame/VoxelSaveGame.h" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
		{ "ToolTip", "Savegame system - storing data about Voxels and world game data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_seedName_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_seedName = { "seedName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSaveGame, seedName), METADATA_PARAMS(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_seedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_seedName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SeedNumber_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SeedNumber = { "SeedNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSaveGame, SeedNumber), METADATA_PARAMS(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SeedNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SeedNumber_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrY_Inner = { "SectorsArrY", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSectorArrayY, METADATA_PARAMS(nullptr, 0) }; // 3380673919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrY_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrY = { "SectorsArrY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSaveGame, SectorsArrY), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrY_MetaData)) }; // 3380673919
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrYneg_Inner = { "SectorsArrYneg", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSectorArrayY, METADATA_PARAMS(nullptr, 0) }; // 3380673919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrYneg_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrYneg = { "SectorsArrYneg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSaveGame, SectorsArrYneg), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrYneg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrYneg_MetaData)) }; // 3380673919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_CharacterTransform_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_CharacterTransform = { "CharacterTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSaveGame, CharacterTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_CharacterTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_CharacterTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(nullptr, 0) }; // 3963133945
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSaveGame, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_Items_MetaData)) }; // 3963133945
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSaveGame, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_ControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_ControlRotation_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_customSettings_Inner = { "customSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_customSettings_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_customSettings = { "customSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelSaveGame, customSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_customSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_customSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_seedName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SeedNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrY_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrYneg_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrYneg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_CharacterTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_ControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_customSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_customSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSaveGame_Statics::ClassParams = {
		&UVoxelSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSaveGame()
	{
		if (!Z_Registration_Info_UClass_UVoxelSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSaveGame.OuterSingleton, Z_Construct_UClass_UVoxelSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelSaveGame.OuterSingleton;
	}
	template<> VOXELSANDBOX_API UClass* StaticClass<UVoxelSaveGame>()
	{
		return UVoxelSaveGame::StaticClass();
	}
	UVoxelSaveGame::UVoxelSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSaveGame);
	UVoxelSaveGame::~UVoxelSaveGame() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSaveGame, UVoxelSaveGame::StaticClass, TEXT("UVoxelSaveGame"), &Z_Registration_Info_UClass_UVoxelSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSaveGame), 547255300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_41168725(TEXT("/Script/VoxelSandbox"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
