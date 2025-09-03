// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/ThirdParty/SimplexNoiseLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplexNoiseLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
VOXELSANDBOX_API UClass* Z_Construct_UClass_USimplexNoiseLibrary();
VOXELSANDBOX_API UClass* Z_Construct_UClass_USimplexNoiseLibrary_NoRegister();
// End Cross Module References

// Begin Class USimplexNoiseLibrary Function setNoiseSeed
struct Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics
{
	struct SimplexNoiseLibrary_eventsetNoiseSeed_Parms
	{
		int32 newSeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_newSeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_newSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::NewProp_newSeed = { "newSeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventsetNoiseSeed_Parms, newSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_newSeed_MetaData), NewProp_newSeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::NewProp_newSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "setNoiseSeed", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::SimplexNoiseLibrary_eventsetNoiseSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::SimplexNoiseLibrary_eventsetNoiseSeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execsetNoiseSeed)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_newSeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	USimplexNoiseLibrary::setNoiseSeed(Z_Param_Out_newSeed);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function setNoiseSeed

// Begin Class USimplexNoiseLibrary Function SimplexNoise1D
struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics
{
	struct SimplexNoiseLibrary_eventSimplexNoise1D_Parms
	{
		float x;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise1D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise1D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "SimplexNoise1D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::SimplexNoiseLibrary_eventSimplexNoise1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::SimplexNoiseLibrary_eventSimplexNoise1D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execSimplexNoise1D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoise1D(Z_Param_x);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function SimplexNoise1D

// Begin Class USimplexNoiseLibrary Function SimplexNoise2D
struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics
{
	struct SimplexNoiseLibrary_eventSimplexNoise2D_Parms
	{
		float x;
		float y;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise2D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise2D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise2D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "SimplexNoise2D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::SimplexNoiseLibrary_eventSimplexNoise2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::SimplexNoiseLibrary_eventSimplexNoise2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execSimplexNoise2D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoise2D(Z_Param_x,Z_Param_y);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function SimplexNoise2D

// Begin Class USimplexNoiseLibrary Function SimplexNoise3D
struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics
{
	struct SimplexNoiseLibrary_eventSimplexNoise3D_Parms
	{
		float x;
		float y;
		float z;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise3D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise3D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise3D_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise3D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "SimplexNoise3D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::SimplexNoiseLibrary_eventSimplexNoise3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::SimplexNoiseLibrary_eventSimplexNoise3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execSimplexNoise3D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoise3D(Z_Param_x,Z_Param_y,Z_Param_z);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function SimplexNoise3D

// Begin Class USimplexNoiseLibrary Function SimplexNoise4D
struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics
{
	struct SimplexNoiseLibrary_eventSimplexNoise4D_Parms
	{
		float x;
		float y;
		float z;
		float w;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, w), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_w,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "SimplexNoise4D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::SimplexNoiseLibrary_eventSimplexNoise4D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::SimplexNoiseLibrary_eventSimplexNoise4D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execSimplexNoise4D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_w);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoise4D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function SimplexNoise4D

// Begin Class USimplexNoiseLibrary Function SimplexNoiseInRange1D
struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics
{
	struct SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms
	{
		float x;
		float rangeMin;
		float rangeMax;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return value in Range between two float numbers\n// Return Value is scaled by difference between rangeMin & rangeMax value\n" },
#endif
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return value in Range between two float numbers\nReturn Value is scaled by difference between rangeMin & rangeMax value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_rangeMin = { "rangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms, rangeMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_rangeMax = { "rangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms, rangeMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_rangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_rangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "SimplexNoiseInRange1D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execSimplexNoiseInRange1D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseInRange1D(Z_Param_x,Z_Param_rangeMin,Z_Param_rangeMax);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function SimplexNoiseInRange1D

// Begin Class USimplexNoiseLibrary Function SimplexNoiseInRange2D
struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics
{
	struct SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms
	{
		float x;
		float y;
		float rangeMin;
		float rangeMax;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_rangeMin = { "rangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, rangeMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_rangeMax = { "rangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, rangeMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_rangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_rangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "SimplexNoiseInRange2D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execSimplexNoiseInRange2D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseInRange2D(Z_Param_x,Z_Param_y,Z_Param_rangeMin,Z_Param_rangeMax);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function SimplexNoiseInRange2D

// Begin Class USimplexNoiseLibrary Function SimplexNoiseInRange3D
struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics
{
	struct SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms
	{
		float x;
		float y;
		float z;
		float rangeMin;
		float rangeMax;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_rangeMin = { "rangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, rangeMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_rangeMax = { "rangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, rangeMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_rangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_rangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "SimplexNoiseInRange3D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execSimplexNoiseInRange3D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseInRange3D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_rangeMin,Z_Param_rangeMax);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function SimplexNoiseInRange3D

// Begin Class USimplexNoiseLibrary Function SimplexNoiseInRange4D
struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics
{
	struct SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms
	{
		float x;
		float y;
		float z;
		float w;
		float rangeMin;
		float rangeMax;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, w), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_rangeMin = { "rangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, rangeMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_rangeMax = { "rangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, rangeMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_w,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_rangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_rangeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "SimplexNoiseInRange4D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execSimplexNoiseInRange4D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_w);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_rangeMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseInRange4D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_rangeMin,Z_Param_rangeMax);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function SimplexNoiseInRange4D

// Begin Class USimplexNoiseLibrary Function SimplexNoiseScaled1D
struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics
{
	struct SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms
	{
		float x;
		float s;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scaled by float value\n" },
#endif
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scaled by float value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_s;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms, s), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::NewProp_s,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "SimplexNoiseScaled1D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execSimplexNoiseScaled1D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_s);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseScaled1D(Z_Param_x,Z_Param_s);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function SimplexNoiseScaled1D

// Begin Class USimplexNoiseLibrary Function SimplexNoiseScaled2D
struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics
{
	struct SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms
	{
		float x;
		float y;
		float s;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_s;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms, s), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_s,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "SimplexNoiseScaled2D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execSimplexNoiseScaled2D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_s);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseScaled2D(Z_Param_x,Z_Param_y,Z_Param_s);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function SimplexNoiseScaled2D

// Begin Class USimplexNoiseLibrary Function SimplexNoiseScaled3D
struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics
{
	struct SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms
	{
		float x;
		float y;
		float z;
		float s;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_s;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, s), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_s,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "SimplexNoiseScaled3D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execSimplexNoiseScaled3D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_s);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseScaled3D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_s);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function SimplexNoiseScaled3D

// Begin Class USimplexNoiseLibrary Function SimplexNoiseScaled4D
struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics
{
	struct SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms
	{
		float x;
		float y;
		float z;
		float w;
		float s;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_w;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_s;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, w), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, s), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_x,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_w,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_s,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, nullptr, "SimplexNoiseScaled4D", nullptr, nullptr, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimplexNoiseLibrary::execSimplexNoiseScaled4D)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_x);
	P_GET_PROPERTY(FFloatProperty,Z_Param_y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_w);
	P_GET_PROPERTY(FFloatProperty,Z_Param_s);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseScaled4D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_s);
	P_NATIVE_END;
}
// End Class USimplexNoiseLibrary Function SimplexNoiseScaled4D

// Begin Class USimplexNoiseLibrary
void USimplexNoiseLibrary::StaticRegisterNativesUSimplexNoiseLibrary()
{
	UClass* Class = USimplexNoiseLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "setNoiseSeed", &USimplexNoiseLibrary::execsetNoiseSeed },
		{ "SimplexNoise1D", &USimplexNoiseLibrary::execSimplexNoise1D },
		{ "SimplexNoise2D", &USimplexNoiseLibrary::execSimplexNoise2D },
		{ "SimplexNoise3D", &USimplexNoiseLibrary::execSimplexNoise3D },
		{ "SimplexNoise4D", &USimplexNoiseLibrary::execSimplexNoise4D },
		{ "SimplexNoiseInRange1D", &USimplexNoiseLibrary::execSimplexNoiseInRange1D },
		{ "SimplexNoiseInRange2D", &USimplexNoiseLibrary::execSimplexNoiseInRange2D },
		{ "SimplexNoiseInRange3D", &USimplexNoiseLibrary::execSimplexNoiseInRange3D },
		{ "SimplexNoiseInRange4D", &USimplexNoiseLibrary::execSimplexNoiseInRange4D },
		{ "SimplexNoiseScaled1D", &USimplexNoiseLibrary::execSimplexNoiseScaled1D },
		{ "SimplexNoiseScaled2D", &USimplexNoiseLibrary::execSimplexNoiseScaled2D },
		{ "SimplexNoiseScaled3D", &USimplexNoiseLibrary::execSimplexNoiseScaled3D },
		{ "SimplexNoiseScaled4D", &USimplexNoiseLibrary::execSimplexNoiseScaled4D },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimplexNoiseLibrary);
UClass* Z_Construct_UClass_USimplexNoiseLibrary_NoRegister()
{
	return USimplexNoiseLibrary::StaticClass();
}
struct Z_Construct_UClass_USimplexNoiseLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Class for generating Simplex Noise values\n*/" },
#endif
		{ "IncludePath", "ThirdParty/SimplexNoiseLibrary.h" },
		{ "ModuleRelativePath", "ThirdParty/SimplexNoiseLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class for generating Simplex Noise values" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed, "setNoiseSeed" }, // 3797074304
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D, "SimplexNoise1D" }, // 2048723505
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D, "SimplexNoise2D" }, // 1215202503
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D, "SimplexNoise3D" }, // 359294810
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D, "SimplexNoise4D" }, // 3676751167
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D, "SimplexNoiseInRange1D" }, // 4108798676
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D, "SimplexNoiseInRange2D" }, // 1844312757
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D, "SimplexNoiseInRange3D" }, // 337213362
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D, "SimplexNoiseInRange4D" }, // 2148349352
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D, "SimplexNoiseScaled1D" }, // 300293641
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D, "SimplexNoiseScaled2D" }, // 2449028750
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D, "SimplexNoiseScaled3D" }, // 696813369
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D, "SimplexNoiseScaled4D" }, // 911505981
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplexNoiseLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimplexNoiseLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimplexNoiseLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimplexNoiseLibrary_Statics::ClassParams = {
	&USimplexNoiseLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimplexNoiseLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimplexNoiseLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimplexNoiseLibrary()
{
	if (!Z_Registration_Info_UClass_USimplexNoiseLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimplexNoiseLibrary.OuterSingleton, Z_Construct_UClass_USimplexNoiseLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimplexNoiseLibrary.OuterSingleton;
}
template<> VOXELSANDBOX_API UClass* StaticClass<USimplexNoiseLibrary>()
{
	return USimplexNoiseLibrary::StaticClass();
}
USimplexNoiseLibrary::USimplexNoiseLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimplexNoiseLibrary);
USimplexNoiseLibrary::~USimplexNoiseLibrary() {}
// End Class USimplexNoiseLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimplexNoiseLibrary, USimplexNoiseLibrary::StaticClass, TEXT("USimplexNoiseLibrary"), &Z_Registration_Info_UClass_USimplexNoiseLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimplexNoiseLibrary), 2358985309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_98286538(TEXT("/Script/VoxelSandbox"),
	Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_ThirdParty_SimplexNoiseLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
