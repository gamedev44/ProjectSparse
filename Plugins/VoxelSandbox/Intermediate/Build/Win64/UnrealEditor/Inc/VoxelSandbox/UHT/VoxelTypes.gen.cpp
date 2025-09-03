// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/Public/VoxelTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelTypes() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FSectorArrayY();
VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FSectorX();
VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FVoxel();
// End Cross Module References

// Begin ScriptStruct FVoxel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Voxel;
class UScriptStruct* FVoxel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Voxel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Voxel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxel, (UObject*)Z_Construct_UPackage__Script_VoxelSandbox(), TEXT("Voxel"));
	}
	return Z_Registration_Info_UScriptStruct_Voxel.OuterSingleton;
}
template<> VOXELSANDBOX_API UScriptStruct* StaticStruct<FVoxel>()
{
	return FVoxel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVoxel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Voxel values\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voxel values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Green_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Red;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Green;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Blue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxel_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxel, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxel, Value), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxel_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxel, Red), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Red_MetaData), NewProp_Red_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxel_Statics::NewProp_Green = { "Green", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxel, Green), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Green_MetaData), NewProp_Green_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxel_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxel, Blue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blue_MetaData), NewProp_Blue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxel_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxel_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxel_Statics::NewProp_Red,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxel_Statics::NewProp_Green,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxel_Statics::NewProp_Blue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
	nullptr,
	&NewStructOps,
	"Voxel",
	Z_Construct_UScriptStruct_FVoxel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxel_Statics::PropPointers),
	sizeof(FVoxel),
	alignof(FVoxel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxel()
{
	if (!Z_Registration_Info_UScriptStruct_Voxel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Voxel.InnerSingleton, Z_Construct_UScriptStruct_FVoxel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Voxel.InnerSingleton;
}
// End ScriptStruct FVoxel

// Begin ScriptStruct FSectorX
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SectorX;
class UScriptStruct* FSectorX::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SectorX.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SectorX.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSectorX, (UObject*)Z_Construct_UPackage__Script_VoxelSandbox(), TEXT("SectorX"));
	}
	return Z_Registration_Info_UScriptStruct_SectorX.OuterSingleton;
}
template<> VOXELSANDBOX_API UScriptStruct* StaticStruct<FSectorX>()
{
	return FSectorX::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSectorX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09Sector element - X coordinate\n*/" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sector element - X coordinate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Voxels_MetaData[] = {
		{ "Category", "SectorX" },
		{ "ModuleRelativePath", "Public/VoxelTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Voxels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSectorX>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSectorX_Statics::NewProp_Voxels_Inner = { "Voxels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxel, METADATA_PARAMS(0, nullptr) }; // 1554336463
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSectorX_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSectorX, Voxels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Voxels_MetaData), NewProp_Voxels_MetaData) }; // 1554336463
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSectorX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectorX_Statics::NewProp_Voxels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectorX_Statics::NewProp_Voxels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectorX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSectorX_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
	nullptr,
	&NewStructOps,
	"SectorX",
	Z_Construct_UScriptStruct_FSectorX_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectorX_Statics::PropPointers),
	sizeof(FSectorX),
	alignof(FSectorX),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectorX_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSectorX_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSectorX()
{
	if (!Z_Registration_Info_UScriptStruct_SectorX.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SectorX.InnerSingleton, Z_Construct_UScriptStruct_FSectorX_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SectorX.InnerSingleton;
}
// End ScriptStruct FSectorX

// Begin ScriptStruct FSectorArrayY
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SectorArrayY;
class UScriptStruct* FSectorArrayY::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SectorArrayY.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SectorArrayY.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSectorArrayY, (UObject*)Z_Construct_UPackage__Script_VoxelSandbox(), TEXT("SectorArrayY"));
	}
	return Z_Registration_Info_UScriptStruct_SectorArrayY.OuterSingleton;
}
template<> VOXELSANDBOX_API UScriptStruct* StaticStruct<FSectorArrayY>()
{
	return FSectorArrayY::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSectorArrayY_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09Struct represents sectors arrays - Y lines (contains X elements)\n*/" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct represents sectors arrays - Y lines (contains X elements)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectorsX_MetaData[] = {
		{ "Category", "SectorArray" },
		{ "ModuleRelativePath", "Public/VoxelTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectorsXneg_MetaData[] = {
		{ "Category", "SectorArray" },
		{ "ModuleRelativePath", "Public/VoxelTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectorsX_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectorsX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectorsXneg_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectorsXneg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSectorArrayY>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSectorArrayY_Statics::NewProp_SectorsX_Inner = { "SectorsX", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSectorX, METADATA_PARAMS(0, nullptr) }; // 1465972631
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSectorArrayY_Statics::NewProp_SectorsX = { "SectorsX", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSectorArrayY, SectorsX), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectorsX_MetaData), NewProp_SectorsX_MetaData) }; // 1465972631
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSectorArrayY_Statics::NewProp_SectorsXneg_Inner = { "SectorsXneg", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSectorX, METADATA_PARAMS(0, nullptr) }; // 1465972631
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSectorArrayY_Statics::NewProp_SectorsXneg = { "SectorsXneg", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSectorArrayY, SectorsXneg), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectorsXneg_MetaData), NewProp_SectorsXneg_MetaData) }; // 1465972631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSectorArrayY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectorArrayY_Statics::NewProp_SectorsX_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectorArrayY_Statics::NewProp_SectorsX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectorArrayY_Statics::NewProp_SectorsXneg_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSectorArrayY_Statics::NewProp_SectorsXneg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectorArrayY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSectorArrayY_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
	nullptr,
	&NewStructOps,
	"SectorArrayY",
	Z_Construct_UScriptStruct_FSectorArrayY_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectorArrayY_Statics::PropPointers),
	sizeof(FSectorArrayY),
	alignof(FSectorArrayY),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSectorArrayY_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSectorArrayY_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSectorArrayY()
{
	if (!Z_Registration_Info_UScriptStruct_SectorArrayY.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SectorArrayY.InnerSingleton, Z_Construct_UScriptStruct_FSectorArrayY_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SectorArrayY.InnerSingleton;
}
// End ScriptStruct FSectorArrayY

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxel::StaticStruct, Z_Construct_UScriptStruct_FVoxel_Statics::NewStructOps, TEXT("Voxel"), &Z_Registration_Info_UScriptStruct_Voxel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxel), 1554336463U) },
		{ FSectorX::StaticStruct, Z_Construct_UScriptStruct_FSectorX_Statics::NewStructOps, TEXT("SectorX"), &Z_Registration_Info_UScriptStruct_SectorX, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSectorX), 1465972631U) },
		{ FSectorArrayY::StaticStruct, Z_Construct_UScriptStruct_FSectorArrayY_Statics::NewStructOps, TEXT("SectorArrayY"), &Z_Registration_Info_UScriptStruct_SectorArrayY, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSectorArrayY), 3074467887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelTypes_h_4188900463(TEXT("/Script/VoxelSandbox"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
