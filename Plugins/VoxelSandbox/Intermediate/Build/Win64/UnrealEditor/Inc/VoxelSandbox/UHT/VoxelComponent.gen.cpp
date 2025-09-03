// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSandbox/Public/VoxelComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VoxelSandbox();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_AVoxelActor_NoRegister();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_UVoxelComponent();
	VOXELSANDBOX_API UClass* Z_Construct_UClass_UVoxelComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelComponent::execVoxelDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VoxelDestroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelComponent::execVoxelHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VoxelHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelComponent::execVoxelAdd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VoxelAdd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelComponent::execUpdateCubeLineTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateCubeLineTrace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelComponent::execFindChunk)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVoxelActor**)Z_Param__Result=P_THIS->FindChunk(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelComponent::execUpdateVoxel)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FIntProperty,Z_Param_VoxelValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVoxel(Z_Param_Position,Z_Param_VoxelValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelComponent::execGetVoxelForPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_VoxelType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetVoxelForPosition(Z_Param_Position,Z_Param_Out_VoxelType,Z_Param_Out_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelComponent::execSetExtras)
	{
		P_GET_TARRAY(bool,Z_Param_GeneralSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExtras(Z_Param_GeneralSettings);
		P_NATIVE_END;
	}
	struct VoxelComponent_eventGetVoxelHitTempo_Parms
	{
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		VoxelComponent_eventGetVoxelHitTempo_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct VoxelComponent_eventSpawnDestructible_Parms
	{
		FVector Location;
		bool IsSizeNormal;
	};
	static FName NAME_UVoxelComponent_GetVoxelHitTempo = FName(TEXT("GetVoxelHitTempo"));
	int32 UVoxelComponent::GetVoxelHitTempo()
	{
		VoxelComponent_eventGetVoxelHitTempo_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVoxelComponent_GetVoxelHitTempo),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVoxelComponent_PlayDestructSound = FName(TEXT("PlayDestructSound"));
	void UVoxelComponent::PlayDestructSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVoxelComponent_PlayDestructSound),NULL);
	}
	static FName NAME_UVoxelComponent_PlayHitSound = FName(TEXT("PlayHitSound"));
	void UVoxelComponent::PlayHitSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVoxelComponent_PlayHitSound),NULL);
	}
	static FName NAME_UVoxelComponent_SpawnDestructible = FName(TEXT("SpawnDestructible"));
	void UVoxelComponent::SpawnDestructible(const FVector Location, bool IsSizeNormal)
	{
		VoxelComponent_eventSpawnDestructible_Parms Parms;
		Parms.Location=Location;
		Parms.IsSizeNormal=IsSizeNormal ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVoxelComponent_SpawnDestructible),&Parms);
	}
	void UVoxelComponent::StaticRegisterNativesUVoxelComponent()
	{
		UClass* Class = UVoxelComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindChunk", &UVoxelComponent::execFindChunk },
			{ "GetVoxelForPosition", &UVoxelComponent::execGetVoxelForPosition },
			{ "SetExtras", &UVoxelComponent::execSetExtras },
			{ "UpdateCubeLineTrace", &UVoxelComponent::execUpdateCubeLineTrace },
			{ "UpdateVoxel", &UVoxelComponent::execUpdateVoxel },
			{ "VoxelAdd", &UVoxelComponent::execVoxelAdd },
			{ "VoxelDestroy", &UVoxelComponent::execVoxelDestroy },
			{ "VoxelHit", &UVoxelComponent::execVoxelHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics
	{
		struct VoxelComponent_eventFindChunk_Parms
		{
			int32 X;
			int32 Y;
			AVoxelActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelComponent_eventFindChunk_Parms, X), METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelComponent_eventFindChunk_Parms, Y), METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::NewProp_Y_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelComponent_eventFindChunk_Parms, ReturnValue), Z_Construct_UClass_AVoxelActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "FindChunk", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::VoxelComponent_eventFindChunk_Parms), Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_FindChunk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelComponent_FindChunk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics
	{
		struct VoxelComponent_eventGetVoxelForPosition_Parms
		{
			FVector Position;
			int32 VoxelType;
			int32 Index;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelComponent_eventGetVoxelForPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::NewProp_VoxelType = { "VoxelType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelComponent_eventGetVoxelForPosition_Parms, VoxelType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelComponent_eventGetVoxelForPosition_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::NewProp_VoxelType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Getting voxel Type and Index by position in the World \n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Getting voxel Type and Index by position in the World" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "GetVoxelForPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::VoxelComponent_eventGetVoxelForPosition_Parms), Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelComponent_eventGetVoxelHitTempo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Function providing speed of destroying voxels based on item and voxel type\n// It's getting these values in the blueprint since it's not very relevant to the voxel itself\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Function providing speed of destroying voxels based on item and voxel type\nIt's getting these values in the blueprint since it's not very relevant to the voxel itself" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "GetVoxelHitTempo", nullptr, nullptr, sizeof(VoxelComponent_eventGetVoxelHitTempo_Parms), Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_PlayDestructSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_PlayDestructSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Function for spawning destruct sound- sounds are different based on voxel type\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Function for spawning destruct sound- sounds are different based on voxel type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_PlayDestructSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "PlayDestructSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_PlayDestructSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_PlayDestructSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_PlayDestructSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelComponent_PlayDestructSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_PlayHitSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_PlayHitSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Function for spawning hit voxel sound - sounds are different based on voxel type\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Function for spawning hit voxel sound - sounds are different based on voxel type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_PlayHitSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "PlayHitSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_PlayHitSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_PlayHitSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_PlayHitSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelComponent_PlayHitSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics
	{
		struct VoxelComponent_eventSetExtras_Parms
		{
			TArray<bool> GeneralSettings;
		};
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GeneralSettings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneralSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::NewProp_GeneralSettings_Inner = { "GeneralSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::NewProp_GeneralSettings = { "GeneralSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelComponent_eventSetExtras_Parms, GeneralSettings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::NewProp_GeneralSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::NewProp_GeneralSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Updates settings for materials and dynamic / static objects\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Updates settings for materials and dynamic / static objects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "SetExtras", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::VoxelComponent_eventSetExtras_Parms), Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_SetExtras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelComponent_SetExtras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_IsSizeNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSizeNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelComponent_eventSpawnDestructible_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::NewProp_Location_MetaData)) };
	void Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::NewProp_IsSizeNormal_SetBit(void* Obj)
	{
		((VoxelComponent_eventSpawnDestructible_Parms*)Obj)->IsSizeNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::NewProp_IsSizeNormal = { "IsSizeNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoxelComponent_eventSpawnDestructible_Parms), &Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::NewProp_IsSizeNormal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::NewProp_IsSizeNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Function for spawning destructible debris\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Function for spawning destructible debris" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "SpawnDestructible", nullptr, nullptr, sizeof(VoxelComponent_eventSpawnDestructible_Parms), Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_SpawnDestructible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelComponent_SpawnDestructible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics
	{
		struct VoxelComponent_eventUpdateCubeLineTrace_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelComponent_eventUpdateCubeLineTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VoxelComponent_eventUpdateCubeLineTrace_Parms), &Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Using LineTrace to determine position of looked at cube and position (global and local for chunk)\n// @return Returns true if line trace was unsuccessful\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Using LineTrace to determine position of looked at cube and position (global and local for chunk)\n@return Returns true if line trace was unsuccessful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "UpdateCubeLineTrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::VoxelComponent_eventUpdateCubeLineTrace_Parms), Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics
	{
		struct VoxelComponent_eventUpdateVoxel_Parms
		{
			FVector Position;
			int32 VoxelValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelComponent_eventUpdateVoxel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::NewProp_VoxelValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::NewProp_VoxelValue = { "VoxelValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VoxelComponent_eventUpdateVoxel_Parms, VoxelValue), METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::NewProp_VoxelValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::NewProp_VoxelValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::NewProp_VoxelValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Based on position updating voxel value (if 0 - voxel is destroyed)\n// It is also update adjacently chunks for edge voxels\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Based on position updating voxel value (if 0 - voxel is destroyed)\nIt is also update adjacently chunks for edge voxels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "UpdateVoxel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::VoxelComponent_eventUpdateVoxel_Parms), Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_UpdateVoxel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelComponent_UpdateVoxel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_VoxelAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_VoxelAdd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Adding new voxel after pressing right click and when holding specific type of block\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Adding new voxel after pressing right click and when holding specific type of block" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_VoxelAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "VoxelAdd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_VoxelAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_VoxelAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_VoxelAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelComponent_VoxelAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_VoxelDestroy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_VoxelDestroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// What happens when hitting reaches maximum - destroy voxel\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "What happens when hitting reaches maximum - destroy voxel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_VoxelDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "VoxelDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_VoxelDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_VoxelDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_VoxelDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelComponent_VoxelDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelComponent_VoxelHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelComponent_VoxelHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// What happens when you try to press left mouse button when looking at voxel\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "What happens when you try to press left mouse button when looking at voxel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelComponent_VoxelHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelComponent, nullptr, "VoxelHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelComponent_VoxelHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelComponent_VoxelHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelComponent_VoxelHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelComponent_VoxelHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelComponent);
	UClass* Z_Construct_UClass_UVoxelComponent_NoRegister()
	{
		return UVoxelComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelActorTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VoxelActorTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCubeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCubeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeDestructibleMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeDestructibleMaterial;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Pickups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pickups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pickups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_renderRange_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_renderRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkLineElements_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkLineElements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lineTraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lineTraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_infiniteVoxelUse_MetaData[];
#endif
		static void NewProp_infiniteVoxelUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_infiniteVoxelUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_roundedTrees_MetaData[];
#endif
		static void NewProp_roundedTrees_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_roundedTrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sniperMode_MetaData[];
#endif
		static void NewProp_sniperMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_sniperMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkSizeHalf_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkSizeHalf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_actorPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_chunkY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_chunkCoords_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunkCoords_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_chunkCoords;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_chunks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chunks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_chunks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CubePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cubePositionGlobal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_cubePositionGlobal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastIndexHit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_lastIndexHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastTypeHit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_lastTypeHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crackSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_crackSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleCrackHit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SingleCrackHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAdding_MetaData[];
#endif
		static void NewProp_bIsAdding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAdding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingMaterial_MetaData[];
#endif
		static void NewProp_SettingMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SettingMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingObjectsStatic_MetaData[];
#endif
		static void NewProp_SettingObjectsStatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SettingObjectsStatic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingObjectsDynamic_MetaData[];
#endif
		static void NewProp_SettingObjectsDynamic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SettingObjectsDynamic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelSandbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelComponent_FindChunk, "FindChunk" }, // 3925132229
		{ &Z_Construct_UFunction_UVoxelComponent_GetVoxelForPosition, "GetVoxelForPosition" }, // 26338123
		{ &Z_Construct_UFunction_UVoxelComponent_GetVoxelHitTempo, "GetVoxelHitTempo" }, // 1616221554
		{ &Z_Construct_UFunction_UVoxelComponent_PlayDestructSound, "PlayDestructSound" }, // 1000694805
		{ &Z_Construct_UFunction_UVoxelComponent_PlayHitSound, "PlayHitSound" }, // 2250727777
		{ &Z_Construct_UFunction_UVoxelComponent_SetExtras, "SetExtras" }, // 2014359631
		{ &Z_Construct_UFunction_UVoxelComponent_SpawnDestructible, "SpawnDestructible" }, // 3626951861
		{ &Z_Construct_UFunction_UVoxelComponent_UpdateCubeLineTrace, "UpdateCubeLineTrace" }, // 2384499798
		{ &Z_Construct_UFunction_UVoxelComponent_UpdateVoxel, "UpdateVoxel" }, // 2490534010
		{ &Z_Construct_UFunction_UVoxelComponent_VoxelAdd, "VoxelAdd" }, // 1178611099
		{ &Z_Construct_UFunction_UVoxelComponent_VoxelDestroy, "VoxelDestroy" }, // 3024849840
		{ &Z_Construct_UFunction_UVoxelComponent_VoxelHit, "VoxelHit" }, // 2604282773
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "VoxelComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_VoxelActorTemplate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_VoxelActorTemplate = { "VoxelActorTemplate", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, VoxelActorTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AVoxelActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_VoxelActorTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_VoxelActorTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_HitCubeMesh_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_HitCubeMesh = { "HitCubeMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, HitCubeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_HitCubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_HitCubeMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CubeDestructibleMaterial_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CubeDestructibleMaterial = { "CubeDestructibleMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, CubeDestructibleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CubeDestructibleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CubeDestructibleMaterial_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Pickups_Inner = { "Pickups", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Pickups_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Pickups = { "Pickups", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, Pickups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Pickups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Pickups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_renderRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_renderRange = { "renderRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, renderRange), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_renderRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_renderRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkLineElements_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkLineElements = { "chunkLineElements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, chunkLineElements), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkLineElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkLineElements_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, VoxelSize), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lineTraceLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// When projecting lineTrace for voxel hit testing - higher value allows hitting voxels from far away\n// Turn sniper mode if you want to experiment more\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "When projecting lineTrace for voxel hit testing - higher value allows hitting voxels from far away\nTurn sniper mode if you want to experiment more" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lineTraceLength = { "lineTraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, lineTraceLength), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lineTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lineTraceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_infiniteVoxelUse_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Items are not used when new voxel is spawned\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Items are not used when new voxel is spawned" },
	};
#endif
	void Z_Construct_UClass_UVoxelComponent_Statics::NewProp_infiniteVoxelUse_SetBit(void* Obj)
	{
		((UVoxelComponent*)Obj)->infiniteVoxelUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_infiniteVoxelUse = { "infiniteVoxelUse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelComponent), &Z_Construct_UClass_UVoxelComponent_Statics::NewProp_infiniteVoxelUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_infiniteVoxelUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_infiniteVoxelUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_roundedTrees_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Applying round tree voxel shader for trees\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Applying round tree voxel shader for trees" },
	};
#endif
	void Z_Construct_UClass_UVoxelComponent_Statics::NewProp_roundedTrees_SetBit(void* Obj)
	{
		((UVoxelComponent*)Obj)->roundedTrees = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_roundedTrees = { "roundedTrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelComponent), &Z_Construct_UClass_UVoxelComponent_Statics::NewProp_roundedTrees_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_roundedTrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_roundedTrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_sniperMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Increasing distance for hitting voxels\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Increasing distance for hitting voxels" },
	};
#endif
	void Z_Construct_UClass_UVoxelComponent_Statics::NewProp_sniperMode_SetBit(void* Obj)
	{
		((UVoxelComponent*)Obj)->sniperMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_sniperMode = { "sniperMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelComponent), &Z_Construct_UClass_UVoxelComponent_Statics::NewProp_sniperMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_sniperMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_sniperMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkSize_MetaData[] = {
		{ "Category", "VoxelComponent" },
		{ "Comment", "// Calculated size of chunk -> Voxel Size * ChunkLineElements\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Calculated size of chunk -> Voxel Size * ChunkLineElements" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkSize = { "chunkSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, chunkSize), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkSizeHalf_MetaData[] = {
		{ "Category", "VoxelComponent" },
		{ "Comment", "// Chunk size divided\n" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
		{ "ToolTip", "Chunk size divided" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkSizeHalf = { "chunkSizeHalf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, chunkSizeHalf), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkSizeHalf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkSizeHalf_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_actorPosition_MetaData[] = {
		{ "Category", "VoxelComponent" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_actorPosition = { "actorPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, actorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_actorPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_actorPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkX_MetaData[] = {
		{ "Category", "VoxelComponent" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkX = { "chunkX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, chunkX), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkY_MetaData[] = {
		{ "Category", "VoxelComponent" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkY = { "chunkY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, chunkY), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkY_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkCoords_Inner = { "chunkCoords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkCoords_MetaData[] = {
		{ "Category", "VoxelComponent" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkCoords = { "chunkCoords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, chunkCoords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkCoords_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunks_Inner = { "chunks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AVoxelActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunks_MetaData[] = {
		{ "Category", "VoxelComponent" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunks = { "chunks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, chunks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CubePosition_MetaData[] = {
		{ "Category", "HitCube" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CubePosition = { "CubePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, CubePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CubePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CubePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_cubePositionGlobal_MetaData[] = {
		{ "Category", "HitCube" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_cubePositionGlobal = { "cubePositionGlobal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, cubePositionGlobal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_cubePositionGlobal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_cubePositionGlobal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lastIndexHit_MetaData[] = {
		{ "Category", "HitCube" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lastIndexHit = { "lastIndexHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, lastIndexHit), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lastIndexHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lastIndexHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lastTypeHit_MetaData[] = {
		{ "Category", "HitCube" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lastTypeHit = { "lastTypeHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, lastTypeHit), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lastTypeHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lastTypeHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_crackSize_MetaData[] = {
		{ "Category", "HitCube" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_crackSize = { "crackSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, crackSize), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_crackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_crackSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SingleCrackHit_MetaData[] = {
		{ "Category", "HitCube" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SingleCrackHit = { "SingleCrackHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelComponent, SingleCrackHit), METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SingleCrackHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SingleCrackHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bIsAdding_MetaData[] = {
		{ "Category", "HitCube" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bIsAdding_SetBit(void* Obj)
	{
		((UVoxelComponent*)Obj)->bIsAdding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bIsAdding = { "bIsAdding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelComponent), &Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bIsAdding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bIsAdding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bIsAdding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingMaterial_MetaData[] = {
		{ "Category", "GenralSettings" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingMaterial_SetBit(void* Obj)
	{
		((UVoxelComponent*)Obj)->SettingMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingMaterial = { "SettingMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelComponent), &Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsStatic_MetaData[] = {
		{ "Category", "GenralSettings" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsStatic_SetBit(void* Obj)
	{
		((UVoxelComponent*)Obj)->SettingObjectsStatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsStatic = { "SettingObjectsStatic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelComponent), &Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsStatic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsDynamic_MetaData[] = {
		{ "Category", "GenralSettings" },
		{ "ModuleRelativePath", "Public/VoxelComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsDynamic_SetBit(void* Obj)
	{
		((UVoxelComponent*)Obj)->SettingObjectsDynamic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsDynamic = { "SettingObjectsDynamic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelComponent), &Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsDynamic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsDynamic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_VoxelActorTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_HitCubeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CubeDestructibleMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Pickups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_Pickups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_renderRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkLineElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_VoxelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lineTraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_infiniteVoxelUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_roundedTrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_sniperMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkSizeHalf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_actorPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkCoords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunkCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_chunks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_CubePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_cubePositionGlobal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lastIndexHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_lastTypeHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_crackSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SingleCrackHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_bIsAdding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsStatic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelComponent_Statics::NewProp_SettingObjectsDynamic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelComponent_Statics::ClassParams = {
		&UVoxelComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelComponent()
	{
		if (!Z_Registration_Info_UClass_UVoxelComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelComponent.OuterSingleton, Z_Construct_UClass_UVoxelComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelComponent.OuterSingleton;
	}
	template<> VOXELSANDBOX_API UClass* StaticClass<UVoxelComponent>()
	{
		return UVoxelComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelComponent);
	UVoxelComponent::~UVoxelComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelComponent, UVoxelComponent::StaticClass, TEXT("UVoxelComponent"), &Z_Registration_Info_UClass_UVoxelComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelComponent), 1712219936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_1721789538(TEXT("/Script/VoxelSandbox"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelSandbox_Source_VoxelSandbox_Public_VoxelComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
