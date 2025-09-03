// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/Public/VoxelActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
VOXELSANDBOX_API UClass* Z_Construct_UClass_AVoxelActor();
VOXELSANDBOX_API UClass* Z_Construct_UClass_AVoxelActor_NoRegister();
// End Cross Module References

// Begin Class AVoxelActor Function AddInstanceVoxel
struct VoxelActor_eventAddInstanceVoxel_Parms
{
	FVector instanceLocation;
	int32 type;
};
static const FName NAME_AVoxelActor_AddInstanceVoxel = FName(TEXT("AddInstanceVoxel"));
void AVoxelActor::AddInstanceVoxel(FVector instanceLocation, int32 type)
{
	VoxelActor_eventAddInstanceVoxel_Parms Parms;
	Parms.instanceLocation=instanceLocation;
	Parms.type=type;
	UFunction* Func = FindFunctionChecked(NAME_AVoxelActor_AddInstanceVoxel);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adding extras\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adding extras" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_instanceLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::NewProp_instanceLocation = { "instanceLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelActor_eventAddInstanceVoxel_Parms, instanceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelActor_eventAddInstanceVoxel_Parms, type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::NewProp_instanceLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::NewProp_type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "AddInstanceVoxel", nullptr, nullptr, Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::PropPointers), sizeof(VoxelActor_eventAddInstanceVoxel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::Function_MetaDataParams) };
static_assert(sizeof(VoxelActor_eventAddInstanceVoxel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AVoxelActor Function AddInstanceVoxel

// Begin Class AVoxelActor Function ApplyMaterials
struct Z_Construct_UFunction_AVoxelActor_ApplyMaterials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_ApplyMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "ApplyMaterials", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_ApplyMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelActor_ApplyMaterials_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVoxelActor_ApplyMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_ApplyMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelActor::execApplyMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyMaterials();
	P_NATIVE_END;
}
// End Class AVoxelActor Function ApplyMaterials

// Begin Class AVoxelActor Function ClearInstancesVoxel
static const FName NAME_AVoxelActor_ClearInstancesVoxel = FName(TEXT("ClearInstancesVoxel"));
void AVoxelActor::ClearInstancesVoxel()
{
	UFunction* Func = FindFunctionChecked(NAME_AVoxelActor_ClearInstancesVoxel);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clearing extras\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clearing extras" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "ClearInstancesVoxel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AVoxelActor Function ClearInstancesVoxel

// Begin Class AVoxelActor Function getVoxel
struct Z_Construct_UFunction_AVoxelActor_getVoxel_Statics
{
	struct VoxelActor_eventgetVoxel_Parms
	{
		FVector localPos;
		int32 voxelType;
		int32 index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_localPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_voxelType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::NewProp_localPos = { "localPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelActor_eventgetVoxel_Parms, localPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::NewProp_voxelType = { "voxelType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelActor_eventgetVoxel_Parms, voxelType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelActor_eventgetVoxel_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::NewProp_localPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::NewProp_voxelType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::NewProp_index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "getVoxel", nullptr, nullptr, Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::VoxelActor_eventgetVoxel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::VoxelActor_eventgetVoxel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelActor_getVoxel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelActor::execgetVoxel)
{
	P_GET_STRUCT(FVector,Z_Param_localPos);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_voxelType);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->getVoxel(Z_Param_localPos,Z_Param_Out_voxelType,Z_Param_Out_index);
	P_NATIVE_END;
}
// End Class AVoxelActor Function getVoxel

// Begin Class AVoxelActor Function setVoxel
struct Z_Construct_UFunction_AVoxelActor_setVoxel_Statics
{
	struct VoxelActor_eventsetVoxel_Parms
	{
		FVector localPos;
		int32 value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_localPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::NewProp_localPos = { "localPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelActor_eventsetVoxel_Parms, localPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelActor_eventsetVoxel_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::NewProp_localPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "setVoxel", nullptr, nullptr, Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::VoxelActor_eventsetVoxel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::VoxelActor_eventsetVoxel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelActor_setVoxel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelActor::execsetVoxel)
{
	P_GET_STRUCT(FVector,Z_Param_localPos);
	P_GET_PROPERTY(FIntProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->setVoxel(Z_Param_localPos,Z_Param_value);
	P_NATIVE_END;
}
// End Class AVoxelActor Function setVoxel

// Begin Class AVoxelActor Function updateCollisionRange
struct Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics
{
	struct VoxelActor_eventupdateCollisionRange_Parms
	{
		bool isCollisionRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check collision range - if changed update mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check collision range - if changed update mesh" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_isCollisionRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isCollisionRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::NewProp_isCollisionRange_SetBit(void* Obj)
{
	((VoxelActor_eventupdateCollisionRange_Parms*)Obj)->isCollisionRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::NewProp_isCollisionRange = { "isCollisionRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelActor_eventupdateCollisionRange_Parms), &Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::NewProp_isCollisionRange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::NewProp_isCollisionRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "updateCollisionRange", nullptr, nullptr, Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::VoxelActor_eventupdateCollisionRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::VoxelActor_eventupdateCollisionRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelActor_updateCollisionRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelActor::execupdateCollisionRange)
{
	P_GET_UBOOL(Z_Param_isCollisionRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->updateCollisionRange(Z_Param_isCollisionRange);
	P_NATIVE_END;
}
// End Class AVoxelActor Function updateCollisionRange

// Begin Class AVoxelActor Function UpdateExtras
struct Z_Construct_UFunction_AVoxelActor_UpdateExtras_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Update extra elements like flowers 0-4, mushroom 5 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update extra elements like flowers 0-4, mushroom 5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_UpdateExtras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "UpdateExtras", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_UpdateExtras_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelActor_UpdateExtras_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVoxelActor_UpdateExtras()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_UpdateExtras_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelActor::execUpdateExtras)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateExtras();
	P_NATIVE_END;
}
// End Class AVoxelActor Function UpdateExtras

// Begin Class AVoxelActor
void AVoxelActor::StaticRegisterNativesAVoxelActor()
{
	UClass* Class = AVoxelActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyMaterials", &AVoxelActor::execApplyMaterials },
		{ "getVoxel", &AVoxelActor::execgetVoxel },
		{ "setVoxel", &AVoxelActor::execsetVoxel },
		{ "updateCollisionRange", &AVoxelActor::execupdateCollisionRange },
		{ "UpdateExtras", &AVoxelActor::execUpdateExtras },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelActor);
UClass* Z_Construct_UClass_AVoxelActor_NoRegister()
{
	return AVoxelActor::StaticClass();
}
struct Z_Construct_UClass_AVoxelActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelActor.h" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsLow_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leavesMaterialRounded_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_randomSeed_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_voxelSize_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkLineElements_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkXindex_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkYindex_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateCollision_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_xMult_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_yMult_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_zMult_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_freq_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkTotalElements_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkZElements_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkLineElementsExt_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkLineElementsP2_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkLineElementsP2Ext_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_voxelSizeHalf_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkFields_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_proceduralComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialsLow_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialsLow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_leavesMaterialRounded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_randomSeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_voxelSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_chunkLineElements;
	static const UECodeGen_Private::FIntPropertyParams NewProp_chunkXindex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_chunkYindex;
	static void NewProp_bCreateCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_xMult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_yMult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_zMult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_freq;
	static const UECodeGen_Private::FIntPropertyParams NewProp_chunkTotalElements;
	static const UECodeGen_Private::FIntPropertyParams NewProp_chunkZElements;
	static const UECodeGen_Private::FIntPropertyParams NewProp_chunkLineElementsExt;
	static const UECodeGen_Private::FIntPropertyParams NewProp_chunkLineElementsP2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_chunkLineElementsP2Ext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_voxelSizeHalf;
	static const UECodeGen_Private::FIntPropertyParams NewProp_chunkFields_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_chunkFields;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_proceduralComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel, "AddInstanceVoxel" }, // 1872250013
		{ &Z_Construct_UFunction_AVoxelActor_ApplyMaterials, "ApplyMaterials" }, // 460405484
		{ &Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel, "ClearInstancesVoxel" }, // 3292130311
		{ &Z_Construct_UFunction_AVoxelActor_getVoxel, "getVoxel" }, // 3903179889
		{ &Z_Construct_UFunction_AVoxelActor_setVoxel, "setVoxel" }, // 2512955167
		{ &Z_Construct_UFunction_AVoxelActor_updateCollisionRange, "updateCollisionRange" }, // 4020963441
		{ &Z_Construct_UFunction_AVoxelActor_UpdateExtras, "UpdateExtras" }, // 2160610418
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_MaterialsLow_Inner = { "MaterialsLow", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_MaterialsLow = { "MaterialsLow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, MaterialsLow), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialsLow_MetaData), NewProp_MaterialsLow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_leavesMaterialRounded = { "leavesMaterialRounded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, leavesMaterialRounded), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leavesMaterialRounded_MetaData), NewProp_leavesMaterialRounded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_randomSeed = { "randomSeed", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, randomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_randomSeed_MetaData), NewProp_randomSeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSize = { "voxelSize", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, voxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_voxelSize_MetaData), NewProp_voxelSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElements = { "chunkLineElements", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, chunkLineElements), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkLineElements_MetaData), NewProp_chunkLineElements_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkXindex = { "chunkXindex", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, chunkXindex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkXindex_MetaData), NewProp_chunkXindex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkYindex = { "chunkYindex", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, chunkYindex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkYindex_MetaData), NewProp_chunkYindex_MetaData) };
void Z_Construct_UClass_AVoxelActor_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
{
	((AVoxelActor*)Obj)->bCreateCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelActor), &Z_Construct_UClass_AVoxelActor_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateCollision_MetaData), NewProp_bCreateCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_xMult = { "xMult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, xMult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_xMult_MetaData), NewProp_xMult_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_yMult = { "yMult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, yMult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_yMult_MetaData), NewProp_yMult_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_zMult = { "zMult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, zMult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_zMult_MetaData), NewProp_zMult_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weight_MetaData), NewProp_weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_freq = { "freq", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, freq), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_freq_MetaData), NewProp_freq_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkTotalElements = { "chunkTotalElements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, chunkTotalElements), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkTotalElements_MetaData), NewProp_chunkTotalElements_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkZElements = { "chunkZElements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, chunkZElements), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkZElements_MetaData), NewProp_chunkZElements_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsExt = { "chunkLineElementsExt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, chunkLineElementsExt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkLineElementsExt_MetaData), NewProp_chunkLineElementsExt_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2 = { "chunkLineElementsP2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, chunkLineElementsP2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkLineElementsP2_MetaData), NewProp_chunkLineElementsP2_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2Ext = { "chunkLineElementsP2Ext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, chunkLineElementsP2Ext), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkLineElementsP2Ext_MetaData), NewProp_chunkLineElementsP2Ext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSizeHalf = { "voxelSizeHalf", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, voxelSizeHalf), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_voxelSizeHalf_MetaData), NewProp_voxelSizeHalf_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields_Inner = { "chunkFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields = { "chunkFields", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, chunkFields), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkFields_MetaData), NewProp_chunkFields_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_proceduralComponent = { "proceduralComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelActor, proceduralComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_proceduralComponent_MetaData), NewProp_proceduralComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_MaterialsLow_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_MaterialsLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_leavesMaterialRounded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_randomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkXindex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkYindex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_bCreateCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_xMult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_yMult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_zMult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_freq,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkTotalElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkZElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsExt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2Ext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSizeHalf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_proceduralComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelActor_Statics::ClassParams = {
	&AVoxelActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVoxelActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelActor()
{
	if (!Z_Registration_Info_UClass_AVoxelActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelActor.OuterSingleton, Z_Construct_UClass_AVoxelActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelActor.OuterSingleton;
}
template<> VOXELSANDBOX_API UClass* StaticClass<AVoxelActor>()
{
	return AVoxelActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelActor);
AVoxelActor::~AVoxelActor() {}
// End Class AVoxelActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelActor, AVoxelActor::StaticClass, TEXT("AVoxelActor"), &Z_Registration_Info_UClass_AVoxelActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelActor), 1108041690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_2450694224(TEXT("/Script/VoxelSandbox"),
	Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
