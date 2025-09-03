// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/Public/VoxelGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGameInstance() {}

// Begin Cross Module References
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

// Begin ScriptStruct FVoxelSave
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Save (name + time)\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save (name + time)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_saveName_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dateTime_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_saveName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_dateTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSave>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_saveName = { "saveName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSave, saveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_saveName_MetaData), NewProp_saveName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_dateTime = { "dateTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSave, dateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dateTime_MetaData), NewProp_dateTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_saveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSave_Statics::NewProp_dateTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSave_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
	nullptr,
	&NewStructOps,
	"VoxelSave",
	Z_Construct_UScriptStruct_FVoxelSave_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSave_Statics::PropPointers),
	sizeof(FVoxelSave),
	alignof(FVoxelSave),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSave_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSave_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSave()
{
	if (!Z_Registration_Info_UScriptStruct_VoxelSave.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoxelSave.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSave_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VoxelSave.InnerSingleton;
}
// End ScriptStruct FVoxelSave

// Begin Class UVoxelGameInstance Function BeginLoadingScreen
struct Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics
{
	struct VoxelGameInstance_eventBeginLoadingScreen_Parms
	{
		FString name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGameInstance_eventBeginLoadingScreen_Parms, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::NewProp_name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "BeginLoadingScreen", nullptr, nullptr, Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::VoxelGameInstance_eventBeginLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::VoxelGameInstance_eventBeginLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGameInstance::execBeginLoadingScreen)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginLoadingScreen(Z_Param_name);
	P_NATIVE_END;
}
// End Class UVoxelGameInstance Function BeginLoadingScreen

// Begin Class UVoxelGameInstance Function EndLoadingScreen
struct Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics
{
	struct VoxelGameInstance_eventEndLoadingScreen_Parms
	{
		UWorld* LoadedWorld;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::NewProp_LoadedWorld = { "LoadedWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGameInstance_eventEndLoadingScreen_Parms, LoadedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::NewProp_LoadedWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "EndLoadingScreen", nullptr, nullptr, Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::VoxelGameInstance_eventEndLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::VoxelGameInstance_eventEndLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGameInstance::execEndLoadingScreen)
{
	P_GET_OBJECT(UWorld,Z_Param_LoadedWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndLoadingScreen(Z_Param_LoadedWorld);
	P_NATIVE_END;
}
// End Class UVoxelGameInstance Function EndLoadingScreen

// Begin Class UVoxelGameInstance Function GetAllSaveGameSlotNames
struct Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics
{
	struct VoxelGameInstance_eventGetAllSaveGameSlotNames_Parms
	{
		TArray<FVoxelSave> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TDLHelpers" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelSave, METADATA_PARAMS(0, nullptr) }; // 941878189
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGameInstance_eventGetAllSaveGameSlotNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 941878189
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "GetAllSaveGameSlotNames", nullptr, nullptr, Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::VoxelGameInstance_eventGetAllSaveGameSlotNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::VoxelGameInstance_eventGetAllSaveGameSlotNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGameInstance::execGetAllSaveGameSlotNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVoxelSave>*)Z_Param__Result=UVoxelGameInstance::GetAllSaveGameSlotNames();
	P_NATIVE_END;
}
// End Class UVoxelGameInstance Function GetAllSaveGameSlotNames

// Begin Class UVoxelGameInstance Function GetSettings
struct Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics
{
	struct VoxelGameInstance_eventGetSettings_Parms
	{
		USettingsSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGameInstance_eventGetSettings_Parms, ReturnValue), Z_Construct_UClass_USettingsSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "GetSettings", nullptr, nullptr, Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::VoxelGameInstance_eventGetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::VoxelGameInstance_eventGetSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGameInstance_GetSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_GetSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGameInstance::execGetSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USettingsSaveGame**)Z_Param__Result=P_THIS->GetSettings();
	P_NATIVE_END;
}
// End Class UVoxelGameInstance Function GetSettings

// Begin Class UVoxelGameInstance Function LoadGraphicSettings
struct Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "LoadGraphicSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGameInstance::execLoadGraphicSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadGraphicSettings();
	P_NATIVE_END;
}
// End Class UVoxelGameInstance Function LoadGraphicSettings

// Begin Class UVoxelGameInstance Function LoadVoxelSettings
struct Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "LoadVoxelSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGameInstance::execLoadVoxelSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadVoxelSettings();
	P_NATIVE_END;
}
// End Class UVoxelGameInstance Function LoadVoxelSettings

// Begin Class UVoxelGameInstance Function SetCustomSettings
struct Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Setting custom settings for generation - big voxels, endless spawning, sniper mode etc.\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setting custom settings for generation - big voxels, endless spawning, sniper mode etc." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGameInstance, nullptr, "SetCustomSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGameInstance::execSetCustomSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomSettings();
	P_NATIVE_END;
}
// End Class UVoxelGameInstance Function SetCustomSettings

// Begin Class UVoxelGameInstance
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
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelGameInstance);
UClass* Z_Construct_UClass_UVoxelGameInstance_NoRegister()
{
	return UVoxelGameInstance::StaticClass();
}
struct Z_Construct_UClass_UVoxelGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game instance supporting savegame and setting loading screen from Slate widget\n" },
#endif
		{ "IncludePath", "VoxelGameInstance.h" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game instance supporting savegame and setting loading screen from Slate widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsSaveGameClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphicCommands_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_savegameName_MetaData[] = {
		{ "Category", "VoxelGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// if empty \"\" means it's a new world\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if empty \"\" means it's a new world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_randomSeed_MetaData[] = {
		{ "Category", "VoxelGameInstance" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_randomSeedName_MetaData[] = {
		{ "Category", "VoxelGameInstance" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_customSettings_MetaData[] = {
		{ "Category", "VoxelGameInstance" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_voxelAdministration_MetaData[] = {
		{ "Category", "VoxelGameInstance" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_loadingProgress_MetaData[] = {
		{ "Category", "VoxelGameInstance" },
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SettingsSaveGameClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GraphicCommands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphicCommands;
	static const UECodeGen_Private::FStrPropertyParams NewProp_savegameName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_randomSeed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_randomSeedName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_customSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_customSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_voxelAdministration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_loadingProgress;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelGameInstance_BeginLoadingScreen, "BeginLoadingScreen" }, // 1642978144
		{ &Z_Construct_UFunction_UVoxelGameInstance_EndLoadingScreen, "EndLoadingScreen" }, // 4041451218
		{ &Z_Construct_UFunction_UVoxelGameInstance_GetAllSaveGameSlotNames, "GetAllSaveGameSlotNames" }, // 1476760627
		{ &Z_Construct_UFunction_UVoxelGameInstance_GetSettings, "GetSettings" }, // 1166732194
		{ &Z_Construct_UFunction_UVoxelGameInstance_LoadGraphicSettings, "LoadGraphicSettings" }, // 45730615
		{ &Z_Construct_UFunction_UVoxelGameInstance_LoadVoxelSettings, "LoadVoxelSettings" }, // 3467606089
		{ &Z_Construct_UFunction_UVoxelGameInstance_SetCustomSettings, "SetCustomSettings" }, // 2097092506
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_SettingsSaveGameClass = { "SettingsSaveGameClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGameInstance, SettingsSaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USettingsSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsSaveGameClass_MetaData), NewProp_SettingsSaveGameClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_GraphicCommands_Inner = { "GraphicCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_GraphicCommands = { "GraphicCommands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGameInstance, GraphicCommands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphicCommands_MetaData), NewProp_GraphicCommands_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_savegameName = { "savegameName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGameInstance, savegameName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_savegameName_MetaData), NewProp_savegameName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_randomSeed = { "randomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGameInstance, randomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_randomSeed_MetaData), NewProp_randomSeed_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_randomSeedName = { "randomSeedName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGameInstance, randomSeedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_randomSeedName_MetaData), NewProp_randomSeedName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_customSettings_Inner = { "customSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_customSettings = { "customSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGameInstance, customSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_customSettings_MetaData), NewProp_customSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_voxelAdministration = { "voxelAdministration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGameInstance, voxelAdministration), Z_Construct_UClass_AVoxelAdministration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_voxelAdministration_MetaData), NewProp_voxelAdministration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_loadingProgress = { "loadingProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGameInstance, loadingProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_loadingProgress_MetaData), NewProp_loadingProgress_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGameInstance_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGameInstance, texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_texture_MetaData), NewProp_texture_MetaData) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGameInstance_Statics::Class_MetaDataParams)
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
// End Class UVoxelGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelSave::StaticStruct, Z_Construct_UScriptStruct_FVoxelSave_Statics::NewStructOps, TEXT("VoxelSave"), &Z_Registration_Info_UScriptStruct_VoxelSave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSave), 941878189U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGameInstance, UVoxelGameInstance::StaticClass, TEXT("UVoxelGameInstance"), &Z_Registration_Info_UClass_UVoxelGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGameInstance), 657800854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_3480199713(TEXT("/Script/VoxelSandbox"),
	Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_engine_PluginRebuild_PR55_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelGameInstance_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
