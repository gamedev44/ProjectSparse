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

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
VOXELSANDBOX_API UClass* Z_Construct_UClass_UVoxelSaveGame();
VOXELSANDBOX_API UClass* Z_Construct_UClass_UVoxelSaveGame_NoRegister();
VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FSectorArrayY();
// End Cross Module References

// Begin Class UVoxelSaveGame
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Savegame system - storing data about Voxels and world game data\n */" },
#endif
		{ "IncludePath", "Savegame/VoxelSaveGame.h" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Savegame system - storing data about Voxels and world game data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_seedName_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedNumber_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectorsArrY_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectorsArrYneg_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTransform_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_customSettings_MetaData[] = {
		{ "Category", "Savegame" },
		{ "ModuleRelativePath", "Public/Savegame/VoxelSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_seedName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SeedNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectorsArrY_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectorsArrY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectorsArrYneg_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectorsArrYneg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_customSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_customSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_seedName = { "seedName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSaveGame, seedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_seedName_MetaData), NewProp_seedName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SeedNumber = { "SeedNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSaveGame, SeedNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedNumber_MetaData), NewProp_SeedNumber_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrY_Inner = { "SectorsArrY", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSectorArrayY, METADATA_PARAMS(0, nullptr) }; // 3074467887
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrY = { "SectorsArrY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSaveGame, SectorsArrY), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectorsArrY_MetaData), NewProp_SectorsArrY_MetaData) }; // 3074467887
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrYneg_Inner = { "SectorsArrYneg", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSectorArrayY, METADATA_PARAMS(0, nullptr) }; // 3074467887
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_SectorsArrYneg = { "SectorsArrYneg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSaveGame, SectorsArrYneg), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectorsArrYneg_MetaData), NewProp_SectorsArrYneg_MetaData) }; // 3074467887
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_CharacterTransform = { "CharacterTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSaveGame, CharacterTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTransform_MetaData), NewProp_CharacterTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(0, nullptr) }; // 3971636446
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSaveGame, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 3971636446
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSaveGame, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRotation_MetaData), NewProp_ControlRotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_customSettings_Inner = { "customSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSaveGame_Statics::NewProp_customSettings = { "customSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSaveGame, customSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_customSettings_MetaData), NewProp_customSettings_MetaData) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSaveGame_Statics::Class_MetaDataParams)
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
// End Class UVoxelSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSaveGame, UVoxelSaveGame::StaticClass, TEXT("UVoxelSaveGame"), &Z_Registration_Info_UClass_UVoxelSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSaveGame), 2361310658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_2885875545(TEXT("/Script/VoxelSandbox"),
	Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_Savegame_VoxelSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
