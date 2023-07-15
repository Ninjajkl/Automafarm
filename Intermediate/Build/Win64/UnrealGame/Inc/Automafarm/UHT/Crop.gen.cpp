// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Crop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrop() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_ACrop();
	AUTOMAFARM_API UClass* Z_Construct_UClass_ACrop_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APivotPaper();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(ACrop::execUpdateCurrentAnimSeq)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCurrentAnimSeq();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACrop::execUpdateTime)
	{
		P_GET_STRUCT(FTimespan,Z_Param_GameTimeSpan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTime(Z_Param_GameTimeSpan);
		P_NATIVE_END;
	}
	void ACrop::StaticRegisterNativesACrop()
	{
		UClass* Class = ACrop::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateCurrentAnimSeq", &ACrop::execUpdateCurrentAnimSeq },
			{ "UpdateTime", &ACrop::execUpdateTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACrop_UpdateCurrentAnimSeq_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrop_UpdateCurrentAnimSeq_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeSystem" },
		{ "ModuleRelativePath", "Crop.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrop_UpdateCurrentAnimSeq_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrop, nullptr, "UpdateCurrentAnimSeq", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrop_UpdateCurrentAnimSeq_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrop_UpdateCurrentAnimSeq_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrop_UpdateCurrentAnimSeq()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrop_UpdateCurrentAnimSeq_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrop_UpdateTime_Statics
	{
		struct Crop_eventUpdateTime_Parms
		{
			FTimespan GameTimeSpan;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameTimeSpan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrop_UpdateTime_Statics::NewProp_GameTimeSpan = { "GameTimeSpan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Crop_eventUpdateTime_Parms, GameTimeSpan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrop_UpdateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrop_UpdateTime_Statics::NewProp_GameTimeSpan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrop_UpdateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Crop.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrop_UpdateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrop, nullptr, "UpdateTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACrop_UpdateTime_Statics::Crop_eventUpdateTime_Parms), Z_Construct_UFunction_ACrop_UpdateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrop_UpdateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrop_UpdateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrop_UpdateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrop_UpdateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrop_UpdateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACrop);
	UClass* Z_Construct_UClass_ACrop_NoRegister()
	{
		return ACrop::StaticClass();
	}
	struct Z_Construct_UClass_ACrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Harvestable_MetaData[];
#endif
		static void NewProp_Harvestable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Harvestable;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GrowthStages_ValueProp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrowthStages_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrowthStages_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GrowthStages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropCreationTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CropCreationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropTimespan_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CropTimespan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrAnimSeq_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CurrAnimSeq;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APivotPaper,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACrop_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrop_UpdateCurrentAnimSeq, "UpdateCurrentAnimSeq" }, // 857386226
		{ &Z_Construct_UFunction_ACrop_UpdateTime, "UpdateTime" }, // 1097356602
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Crop.h" },
		{ "ModuleRelativePath", "Crop.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable_MetaData[] = {
		{ "Category", "CropSystem" },
		{ "Comment", "//Crop System Properties and Functions\n" },
		{ "ModuleRelativePath", "Crop.h" },
		{ "ToolTip", "Crop System Properties and Functions" },
	};
#endif
	void Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable_SetBit(void* Obj)
	{
		((ACrop*)Obj)->Harvestable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable = { "Harvestable", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACrop), &Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_ValueProp = { "GrowthStages", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UPaperZDAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_Key_KeyProp = { "GrowthStages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_MetaData[] = {
		{ "Category", "CropSystem" },
		{ "ModuleRelativePath", "Crop.h" },
		{ "ToolTip", "A map of growth stages for playing AnimSequences over time.\nKey: Hours since creation\nValue: AnimSequence to play at the specified hour." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages = { "GrowthStages", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACrop, GrowthStages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::NewProp_CropCreationTime_MetaData[] = {
		{ "Category", "TimeSystem" },
		{ "Comment", "//Time System Properties and Functions\n" },
		{ "ModuleRelativePath", "Crop.h" },
		{ "ToolTip", "Time System Properties and Functions" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_CropCreationTime = { "CropCreationTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACrop, CropCreationTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_ACrop_Statics::NewProp_CropCreationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::NewProp_CropCreationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::NewProp_CropTimespan_MetaData[] = {
		{ "Category", "TimeSystem" },
		{ "ModuleRelativePath", "Crop.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_CropTimespan = { "CropTimespan", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACrop, CropTimespan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_ACrop_Statics::NewProp_CropTimespan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::NewProp_CropTimespan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::NewProp_CurrAnimSeq_MetaData[] = {
		{ "Category", "TimeSystem" },
		{ "ModuleRelativePath", "Crop.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_CurrAnimSeq = { "CurrAnimSeq", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACrop, CurrAnimSeq), Z_Construct_UClass_UPaperZDAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrop_Statics::NewProp_CurrAnimSeq_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::NewProp_CurrAnimSeq_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_CropCreationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_CropTimespan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_CurrAnimSeq,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACrop_Statics::ClassParams = {
		&ACrop::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACrop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACrop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrop()
	{
		if (!Z_Registration_Info_UClass_ACrop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrop.OuterSingleton, Z_Construct_UClass_ACrop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACrop.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<ACrop>()
	{
		return ACrop::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrop);
	ACrop::~ACrop() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACrop, ACrop::StaticClass, TEXT("ACrop"), &Z_Registration_Info_UClass_ACrop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrop), 3345050483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_3179272849(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Crop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
