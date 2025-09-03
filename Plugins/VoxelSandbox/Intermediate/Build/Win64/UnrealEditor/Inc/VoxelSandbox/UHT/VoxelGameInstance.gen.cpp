// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/Public/VoxelGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGameInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_AVoxelAdministration_NoRegister();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_USettingsSaveGame_NoRegister();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_UVoxelGameInstance();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_UVoxelGameInstance_NoRegister();
	VOXELSANDBOX_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSave();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoxelSave;
class UScriptStruct* FVoxelSave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelSave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoxelSave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSave, (UObject*)Z_Construct_UPackage__Script_VoxelSandbox(), TEXT("VoxelSave"));
	}
	return Z_Registration_Info_UScriptStruct_VoxelSave.OuterSingleton;
}
template<> VOXELSANDBOX_API UScriptStruct* StaticStruct<FVoxelSave>()
{
	return FVoxelSave::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVoxelSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_saveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_saveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_dateTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Save (name + time)\n" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
		{ "ToolTip", "Save (name + time)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSave>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_saveName_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_saveName = { "saveName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoxelSave, saveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_saveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_saveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_dateTime_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_dateTime = { "dateTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVoxelSave, dateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_dateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_dateTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_saveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_dateTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
		nullptr,
		&NewStructOps,
		"VoxelSave",
		sizeof(FVoxelSave),
		alignof(FVoxelSave),
		Z_Construct_UScriptStruct_FVoxelSave_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSave_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSave()
	{
		if (!Z_Registration_Info_UScriptStruct_VoxelSave.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelSave.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSave_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VoxelSave.InnerSingleton;
	}
	DEFINE_FUNCTION(UVoxelGameInstance::execSetCustomSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGameInstance::execLoadGraphicSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGraphicSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGameInstance::execLoadVoxelSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadVoxelSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGameInstance::execEndLoadingScreen)
	{
		P_GET_OBJECT(UWorld,Z_Param_LoadedWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndLoadingScreen(Z_Param_LoadedWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGameInstance::execBeginLoadingScreen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginLoadingScreen(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGameInstance::execGetAllSaveGameSlotNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVoxelSave>*)Z_Param__Result=UVoxelGameInstance::GetAllSaveGameSlotNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGameInstance::execGetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USettingsSaveGame**)Z_Param__Result=P_THIS->GetSettings();
		P_NATIVE_END;
	}
	void UVoxelGameInstance::StaticRegisterNativesUVoxelGameInstance()
	{
		UClass* Class = UVoxelGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginLoadingScreen", &UVoxelGameInstance::execBeginLoadingScreen },
			{ "EndLoadingScreen", &UVoxelGameInstance::execEndLoadingScreen },
			{ "GetAllSaveGameSlotNames", &UVoxelGameInstance::execGetAllSaveGameSlotNames },
			{ "GetSettings", &UVoxelGameInstance::execGetSettings },
			{ "LoadGraphicSettings", &UVoxelGameInstance::execLoadGraphicSettings },
			{ "LoadVoxelSettings", &UVoxelGameInstance::execLoadVoxelSettings },
			{ "SetCustomSettings", &UVoxelGameInstance::execSetCustomSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics
	{
		struct VoxelGameInstance_eventBeginLoadingScreen_Parms
		{
			FString name;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelGameInstance_eventBeginLoadingScreen_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::NewProp_name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "BeginLoadingScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::VoxelGameInstance_eventBeginLoadingScreen_Parms), Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics
	{
		struct VoxelGameInstance_eventEndLoadingScreen_Parms
		{
			UWorld* LoadedWorld;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::NewProp_LoadedWorld = { "LoadedWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelGameInstance_eventEndLoadingScreen_Parms, LoadedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::NewProp_LoadedWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "EndLoadingScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::VoxelGameInstance_eventEndLoadingScreen_Parms), Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics
	{
		struct VoxelGameInstance_eventGetAllSaveGameSlotNames_Parms
		{
			TArray<FVoxelSave> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVoxelSave, METADATA_PARAMS(nullptr, 0) }; // 2125023560
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelGameInstance_eventGetAllSaveGameSlotNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2125023560
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDLHelpers" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "GetAllSaveGameSlotNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::VoxelGameInstance_eventGetAllSaveGameSlotNames_Parms), Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics
	{
		struct VoxelGameInstance_eventGetSettings_Parms
		{
			USettingsSaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelGameInstance_eventGetSettings_Parms, ReturnValue), Z_Construct_UClass_USettingsSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "GetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::VoxelGameInstance_eventGetSettings_Parms), Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGameInstance_GetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "LoadGraphicSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "LoadVoxelSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "Comment", "// Setting custom settings for generation - big voxels, endless spawning, sniper mode etc.\n" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
		{ "ToolTip", "Setting custom settings for generation - big voxels, endless spawning, sniper mode etc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "SetCustomSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGameInstance);
	UClass* Z_Construct_UClass_UVoxelGameInstance_NoRegister()
	{
		return UVoxelGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsSaveGameClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SettingsSaveGameClass;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GraphicCommands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphicCommands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphicCommands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_savegameName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_savegameName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_randomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_randomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_randomSeedName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_randomSeedName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_customSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_customSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_customSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_voxelAdministration_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_voxelAdministration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loadingProgress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_loadingProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen, "BeginLoadingScreen" }, // 4045387544
		{ &Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen, "EndLoadingScreen" }, // 2270077770
		{ &Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames, "GetAllSaveGameSlotNames" }, // 2955786292
		{ &Z_Construct_UFunction_UVoxelGameInstance_GetSettings, "GetSettings" }, // 3685998592
		{ &Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings, "LoadGraphicSettings" }, // 3139448006
		{ &Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings, "LoadVoxelSettings" }, // 3386788798
		{ &Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings, "SetCustomSettings" }, // 1099708824
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Game instance supporting savegame and setting loading screen from Slate widget\n" },
		{ "IncludePath", "VoxelGameInstance.h" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
		{ "ToolTip", "Game instance supporting savegame and setting loading screen from Slate widget" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_SettingsSaveGameClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_SettingsSaveGameClass = { "SettingsSaveGameClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelGameInstance, SettingsSaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USettingsSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_SettingsSaveGameClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_SettingsSaveGameClass_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_GraphicCommands_Inner = { "GraphicCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_GraphicCommands_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_GraphicCommands = { "GraphicCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelGameInstance, GraphicCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_GraphicCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_GraphicCommands_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_savegameName_MetaData[] = {
		{ "Category", "VoxelGameInstance" },
		{ "Comment", "// if empty \"\" means it's a new world\n" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
		{ "ToolTip", "if empty \"\" means it's a new world" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_savegameName = { "savegameName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelGameInstance, savegameName), METADATA_PARAMS(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_savegameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_savegameName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_randomSeed_MetaData[] = {
		{ "Category", "VoxelGameInstance" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_randomSeed = { "randomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelGameInstance, randomSeed), METADATA_PARAMS(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_randomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_randomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_randomSeedName_MetaData[] = {
		{ "Category", "VoxelGameInstance" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_randomSeedName = { "randomSeedName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelGameInstance, randomSeedName), METADATA_PARAMS(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_randomSeedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_randomSeedName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_customSettings_Inner = { "customSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_customSettings_MetaData[] = {
		{ "Category", "VoxelGameInstance" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_customSettings = { "customSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelGameInstance, customSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_customSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_customSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_voxelAdministration_MetaData[] = {
		{ "Category", "VoxelGameInstance" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_voxelAdministration = { "voxelAdministration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelGameInstance, voxelAdministration), Z_Construct_UClass_AVoxelAdministration_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_voxelAdministration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_voxelAdministration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_loadingProgress_MetaData[] = {
		{ "Category", "VoxelGameInstance" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_loadingProgress = { "loadingProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelGameInstance, loadingProgress), METADATA_PARAMS(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_loadingProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_loadingProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_texture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelGameInstance, texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_SettingsSaveGameClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_GraphicCommands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_GraphicCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_savegameName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_randomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_randomSeedName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_customSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_customSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_voxelAdministration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_loadingProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGameInstance_Statics::ClassParams = {
		&UVoxelGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGameInstance()
	{
		if (!Z_Registration_Info_UClass_UVoxelGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGameInstance.OuterSingleton, Z_Construct_UClass_UVoxelGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelGameInstance.OuterSingleton;
	}
	template<> VOXELSANDBOX_API UClass* StaticClass<UVoxelGameInstance>()
	{
		return UVoxelGameInstance::StaticClass();
	}
	UVoxelGameInstance::UVoxelGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGameInstance);
	UVoxelGameInstance::~UVoxelGameInstance() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_Statics::ScriptStructInfo[] = {
		{ FVoxelSave::StaticStruct, Z_Construct_UScriptStruct_FVoxelSave_Statics::NewStructOps, TEXT("VoxelSave"), &Z_Registration_Info_UScriptStruct_VoxelSave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSave), 2125023560U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGameInstance, UVoxelGameInstance::StaticClass, TEXT("UVoxelGameInstance"), &Z_Registration_Info_UClass_UVoxelGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGameInstance), 3159703657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_3061214802(TEXT("/Script/VoxelSandbox"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
