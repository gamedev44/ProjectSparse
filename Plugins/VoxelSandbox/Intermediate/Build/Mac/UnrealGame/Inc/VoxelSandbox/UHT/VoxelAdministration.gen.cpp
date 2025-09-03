// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/Public/VoxelAdministration.h"
#include "VoxelSandbox/Public/VoxelTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelAdministration() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_AVoxelAdministration();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_AVoxelAdministration_NoRegister();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_UVoxelSaveGame_NoRegister();
	VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FSectorArrayY();
	VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FSectorX();
	VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FVoxel();
// End Cross Module References
	DEFINE_FUNCTION(AVoxelAdministration::execSetLoadGameValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadGameValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoxelAdministration::execSetSaveGameValues)
	{
		P_GET_OBJECT(UVoxelSaveGame,Z_Param_SaveGame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSaveGameValues(Z_Param_SaveGame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoxelAdministration::execgetVoxelData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectorXindex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectorYindex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSectorX*)Z_Param__Result=P_THIS->getVoxelData(Z_Param_SectorXindex,Z_Param_SectorYindex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoxelAdministration::execUpdateVoxel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectorXindex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectorYindex);
		P_GET_STRUCT(FVoxel,Z_Param_Voxel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVoxel(Z_Param_SectorXindex,Z_Param_SectorYindex,Z_Param_Voxel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoxelAdministration::execFindVoxelIndex)
	{
		P_GET_TARRAY_REF(FVoxel,Z_Param_Out_voxels);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindVoxelIndex(Z_Param_Out_voxels,Z_Param_Index);
		P_NATIVE_END;
	}
	void AVoxelAdministration::StaticRegisterNativesAVoxelAdministration()
	{
		UClass* Class = AVoxelAdministration::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindVoxelIndex", &AVoxelAdministration::execFindVoxelIndex },
			{ "getVoxelData", &AVoxelAdministration::execgetVoxelData },
			{ "SetLoadGameValues", &AVoxelAdministration::execSetLoadGameValues },
			{ "SetSaveGameValues", &AVoxelAdministration::execSetSaveGameValues },
			{ "UpdateVoxel", &AVoxelAdministration::execUpdateVoxel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics
	{
		struct VoxelAdministration_eventFindVoxelIndex_Parms
		{
			TArray<FVoxel> voxels;
			int32 Index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_voxels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_voxels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_voxels;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::NewProp_voxels_Inner = { "voxels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVoxel, METADATA_PARAMS(nullptr, 0) }; // 2884733651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::NewProp_voxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::NewProp_voxels = { "voxels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelAdministration_eventFindVoxelIndex_Parms, voxels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::NewProp_voxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::NewProp_voxels_MetaData)) }; // 2884733651
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelAdministration_eventFindVoxelIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelAdministration_eventFindVoxelIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::NewProp_voxels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::NewProp_voxels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelAdministration.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelAdministration, nullptr, "FindVoxelIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::VoxelAdministration_eventFindVoxelIndex_Parms), Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics
	{
		struct VoxelAdministration_eventgetVoxelData_Parms
		{
			int32 SectorXindex;
			int32 SectorYindex;
			FSectorX ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectorXindex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectorYindex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::NewProp_SectorXindex = { "SectorXindex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelAdministration_eventgetVoxelData_Parms, SectorXindex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::NewProp_SectorYindex = { "SectorYindex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelAdministration_eventgetVoxelData_Parms, SectorYindex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelAdministration_eventgetVoxelData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSectorX, METADATA_PARAMS(nullptr, 0) }; // 4246899664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::NewProp_SectorXindex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::NewProp_SectorYindex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelAdministration.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelAdministration, nullptr, "getVoxelData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::VoxelAdministration_eventgetVoxelData_Parms), Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelAdministration_getVoxelData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelAdministration_getVoxelData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelAdministration_SetLoadGameValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelAdministration_SetLoadGameValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "// Loading all data from the session, voxel data and world data\n" },
		{ "ModuleRelativePath", "Public/VoxelAdministration.h" },
		{ "ToolTip", "Loading all data from the session, voxel data and world data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelAdministration_SetLoadGameValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelAdministration, nullptr, "SetLoadGameValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelAdministration_SetLoadGameValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelAdministration_SetLoadGameValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelAdministration_SetLoadGameValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelAdministration_SetLoadGameValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues_Statics
	{
		struct VoxelAdministration_eventSetSaveGameValues_Parms
		{
			UVoxelSaveGame* SaveGame;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelAdministration_eventSetSaveGameValues_Parms, SaveGame), Z_Construct_UClass_UVoxelSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues_Statics::NewProp_SaveGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "// Saving all data from the session, voxel data and world data\n" },
		{ "ModuleRelativePath", "Public/VoxelAdministration.h" },
		{ "ToolTip", "Saving all data from the session, voxel data and world data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelAdministration, nullptr, "SetSaveGameValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues_Statics::VoxelAdministration_eventSetSaveGameValues_Parms), Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics
	{
		struct VoxelAdministration_eventUpdateVoxel_Parms
		{
			int32 SectorXindex;
			int32 SectorYindex;
			FVoxel Voxel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectorXindex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectorYindex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Voxel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::NewProp_SectorXindex = { "SectorXindex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelAdministration_eventUpdateVoxel_Parms, SectorXindex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::NewProp_SectorYindex = { "SectorYindex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelAdministration_eventUpdateVoxel_Parms, SectorYindex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::NewProp_Voxel = { "Voxel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelAdministration_eventUpdateVoxel_Parms, Voxel), Z_Construct_UScriptStruct_FVoxel, METADATA_PARAMS(nullptr, 0) }; // 2884733651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::NewProp_SectorXindex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::NewProp_SectorYindex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::NewProp_Voxel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Updating voxel values for chunk X,Y with value FVoxel\n" },
		{ "ModuleRelativePath", "Public/VoxelAdministration.h" },
		{ "ToolTip", "Updating voxel values for chunk X,Y with value FVoxel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelAdministration, nullptr, "UpdateVoxel", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::VoxelAdministration_eventUpdateVoxel_Parms), Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVoxelAdministration);
	UClass* Z_Construct_UClass_AVoxelAdministration_NoRegister()
	{
		return AVoxelAdministration::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelAdministration_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sectorsArrY_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sectorsArrY_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_sectorsArrY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_sectorsArrYneg_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sectorsArrYneg_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_sectorsArrYneg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelAdministration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoxelAdministration_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelAdministration_FindVoxelIndex, "FindVoxelIndex" }, // 55072827
		{ &Z_Construct_UFunction_AVoxelAdministration_getVoxelData, "getVoxelData" }, // 2608910200
		{ &Z_Construct_UFunction_AVoxelAdministration_SetLoadGameValues, "SetLoadGameValues" }, // 2682833153
		{ &Z_Construct_UFunction_AVoxelAdministration_SetSaveGameValues, "SetSaveGameValues" }, // 2113822613
		{ &Z_Construct_UFunction_AVoxelAdministration_UpdateVoxel, "UpdateVoxel" }, // 3739828503
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAdministration_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelAdministration.h" },
		{ "ModuleRelativePath", "Public/VoxelAdministration.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrY_Inner = { "sectorsArrY", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSectorArrayY, METADATA_PARAMS(nullptr, 0) }; // 3380673919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrY_MetaData[] = {
		{ "Category", "VoxelAdministration" },
		{ "ModuleRelativePath", "Public/VoxelAdministration.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrY = { "sectorsArrY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelAdministration, sectorsArrY), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrY_MetaData)) }; // 3380673919
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrYneg_Inner = { "sectorsArrYneg", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSectorArrayY, METADATA_PARAMS(nullptr, 0) }; // 3380673919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrYneg_MetaData[] = {
		{ "Category", "VoxelAdministration" },
		{ "ModuleRelativePath", "Public/VoxelAdministration.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrYneg = { "sectorsArrYneg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVoxelAdministration, sectorsArrYneg), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrYneg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrYneg_MetaData)) }; // 3380673919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelAdministration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrY_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrYneg_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAdministration_Statics::NewProp_sectorsArrYneg,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelAdministration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelAdministration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelAdministration_Statics::ClassParams = {
		&AVoxelAdministration::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVoxelAdministration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAdministration_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelAdministration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAdministration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelAdministration()
	{
		if (!Z_Registration_Info_UClass_AVoxelAdministration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelAdministration.OuterSingleton, Z_Construct_UClass_AVoxelAdministration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVoxelAdministration.OuterSingleton;
	}
	template<> VOXELSANDBOX_API UClass* StaticClass<AVoxelAdministration>()
	{
		return AVoxelAdministration::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelAdministration);
	AVoxelAdministration::~AVoxelAdministration() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelAdministration, AVoxelAdministration::StaticClass, TEXT("AVoxelAdministration"), &Z_Registration_Info_UClass_AVoxelAdministration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelAdministration), 2559151208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_3206427837(TEXT("/Script/VoxelSandbox"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelAdministration_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
