// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/Public/VoxelActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_AVoxelActor();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_AVoxelActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVoxelActor::execUpdateExtras)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateExtras();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoxelActor::execApplyMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoxelActor::execupdateCollisionRange)
	{
		P_GET_UBOOL(Z_Param_isCollisionRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->updateCollisionRange(Z_Param_isCollisionRange);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(AVoxelActor::execsetVoxel)
	{
		P_GET_STRUCT(FVector,Z_Param_localPos);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setVoxel(Z_Param_localPos,Z_Param_value);
		P_NATIVE_END;
	}
	struct VoxelActor_eventAddInstanceVoxel_Parms
	{
		FVector instanceLocation;
		int32 type;
	};
	static FName NAME_AVoxelActor_AddInstanceVoxel = FName(TEXT("AddInstanceVoxel"));
	void AVoxelActor::AddInstanceVoxel(FVector instanceLocation, int32 type)
	{
		VoxelActor_eventAddInstanceVoxel_Parms Parms;
		Parms.instanceLocation=instanceLocation;
		Parms.type=type;
		ProcessEvent(FindFunctionChecked(NAME_AVoxelActor_AddInstanceVoxel),&Parms);
	}
	static FName NAME_AVoxelActor_ClearInstancesVoxel = FName(TEXT("ClearInstancesVoxel"));
	void AVoxelActor::ClearInstancesVoxel()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVoxelActor_ClearInstancesVoxel),NULL);
	}
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
	struct Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_instanceLocation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::NewProp_instanceLocation = { "instanceLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelActor_eventAddInstanceVoxel_Parms, instanceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelActor_eventAddInstanceVoxel_Parms, type), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::NewProp_instanceLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Adding extras\n" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
		{ "ToolTip", "Adding extras" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "AddInstanceVoxel", nullptr, nullptr, sizeof(VoxelActor_eventAddInstanceVoxel_Parms), Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelActor_ApplyMaterials_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelActor_ApplyMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_ApplyMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "ApplyMaterials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelActor_ApplyMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_ApplyMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelActor_ApplyMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_ApplyMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Clearing extras\n" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
		{ "ToolTip", "Clearing extras" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "ClearInstancesVoxel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelActor_getVoxel_Statics
	{
		struct VoxelActor_eventgetVoxel_Parms
		{
			FVector localPos;
			int32 voxelType;
			int32 index;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_localPos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_voxelType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::NewProp_localPos = { "localPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelActor_eventgetVoxel_Parms, localPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::NewProp_voxelType = { "voxelType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelActor_eventgetVoxel_Parms, voxelType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelActor_eventgetVoxel_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::NewProp_localPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::NewProp_voxelType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "getVoxel", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::VoxelActor_eventgetVoxel_Parms), Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelActor_getVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_getVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelActor_setVoxel_Statics
	{
		struct VoxelActor_eventsetVoxel_Parms
		{
			FVector localPos;
			int32 value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_localPos;
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::NewProp_localPos = { "localPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelActor_eventsetVoxel_Parms, localPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelActor_eventsetVoxel_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::NewProp_localPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "setVoxel", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::VoxelActor_eventsetVoxel_Parms), Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelActor_setVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_setVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics
	{
		struct VoxelActor_eventupdateCollisionRange_Parms
		{
			bool isCollisionRange;
		};
		static void NewProp_isCollisionRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isCollisionRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::NewProp_isCollisionRange_SetBit(void* Obj)
	{
		((VoxelActor_eventupdateCollisionRange_Parms*)Obj)->isCollisionRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::NewProp_isCollisionRange = { "isCollisionRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoxelActor_eventupdateCollisionRange_Parms), &Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::NewProp_isCollisionRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::NewProp_isCollisionRange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Check collision range - if changed update mesh\n" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
		{ "ToolTip", "Check collision range - if changed update mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "updateCollisionRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::VoxelActor_eventupdateCollisionRange_Parms), Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelActor_updateCollisionRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_updateCollisionRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelActor_UpdateExtras_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelActor_UpdateExtras_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/* Update extra elements like flowers 0-4, mushroom 5 */" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
		{ "ToolTip", "Update extra elements like flowers 0-4, mushroom 5" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_UpdateExtras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, nullptr, "UpdateExtras", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelActor_UpdateExtras_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_UpdateExtras_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelActor_UpdateExtras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelActor_UpdateExtras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelActor);
	UClass* Z_Construct_UClass_AVoxelActor_NoRegister()
	{
		return AVoxelActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialsLow_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsLow_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialsLow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leavesMaterialRounded_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leavesMaterialRounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_randomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_randomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_voxelSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_voxelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkLineElements_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkLineElements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkXindex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkXindex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkYindex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkYindex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateCollision_MetaData[];
#endif
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_xMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_yMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_zMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_freq_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_freq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkTotalElements_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkTotalElements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkZElements_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkZElements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkLineElementsExt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkLineElementsExt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkLineElementsP2_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkLineElementsP2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkLineElementsP2Ext_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkLineElementsP2Ext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_voxelSizeHalf_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_voxelSizeHalf;
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkFields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkFields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_chunkFields;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_proceduralComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_proceduralComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoxelActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelActor_AddInstanceVoxel, "AddInstanceVoxel" }, // 2547814459
		{ &Z_Construct_UFunction_AVoxelActor_ApplyMaterials, "ApplyMaterials" }, // 690309463
		{ &Z_Construct_UFunction_AVoxelActor_ClearInstancesVoxel, "ClearInstancesVoxel" }, // 3181854296
		{ &Z_Construct_UFunction_AVoxelActor_getVoxel, "getVoxel" }, // 324244862
		{ &Z_Construct_UFunction_AVoxelActor_setVoxel, "setVoxel" }, // 4204853504
		{ &Z_Construct_UFunction_AVoxelActor_updateCollisionRange, "updateCollisionRange" }, // 3070697467
		{ &Z_Construct_UFunction_AVoxelActor_UpdateExtras, "UpdateExtras" }, // 3953637113
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelActor.h" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_MaterialsLow_Inner = { "MaterialsLow", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_MaterialsLow_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_MaterialsLow = { "MaterialsLow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, MaterialsLow), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_MaterialsLow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_MaterialsLow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_leavesMaterialRounded_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_leavesMaterialRounded = { "leavesMaterialRounded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, leavesMaterialRounded), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_leavesMaterialRounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_leavesMaterialRounded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_randomSeed_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_randomSeed = { "randomSeed", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, randomSeed), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_randomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_randomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSize_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSize = { "voxelSize", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, voxelSize), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElements_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElements = { "chunkLineElements", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, chunkLineElements), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElements_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkXindex_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkXindex = { "chunkXindex", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, chunkXindex), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkXindex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkXindex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkYindex_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkYindex = { "chunkYindex", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, chunkYindex), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkYindex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkYindex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_bCreateCollision_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	void Z_Construct_UClass_AVoxelActor_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((AVoxelActor*)Obj)->bCreateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AVoxelActor), &Z_Construct_UClass_AVoxelActor_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_bCreateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_bCreateCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_xMult_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_xMult = { "xMult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, xMult), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_xMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_xMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_yMult_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_yMult = { "yMult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, yMult), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_yMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_yMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_zMult_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_zMult = { "zMult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, zMult), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_zMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_zMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, weight), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_freq_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_freq = { "freq", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, freq), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_freq_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_freq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkTotalElements_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkTotalElements = { "chunkTotalElements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, chunkTotalElements), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkTotalElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkTotalElements_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkZElements_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkZElements = { "chunkZElements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, chunkZElements), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkZElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkZElements_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsExt_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsExt = { "chunkLineElementsExt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, chunkLineElementsExt), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsExt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsExt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2 = { "chunkLineElementsP2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, chunkLineElementsP2), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2Ext_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2Ext = { "chunkLineElementsP2Ext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, chunkLineElementsP2Ext), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2Ext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2Ext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSizeHalf_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSizeHalf = { "voxelSizeHalf", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, voxelSizeHalf), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSizeHalf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSizeHalf_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields_Inner = { "chunkFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields = { "chunkFields", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, chunkFields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_proceduralComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_proceduralComponent = { "proceduralComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelActor, proceduralComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_proceduralComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_proceduralComponent_MetaData)) };
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelActor>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelActor, AVoxelActor::StaticClass, TEXT("AVoxelActor"), &Z_Registration_Info_UClass_AVoxelActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelActor), 2558848503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_566022745(TEXT("/Script/VoxelSandbox"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
