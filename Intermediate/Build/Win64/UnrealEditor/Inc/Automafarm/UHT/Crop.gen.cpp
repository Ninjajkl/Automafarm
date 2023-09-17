// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Items/Crop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrop() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_ACrop();
	AUTOMAFARM_API UClass* Z_Construct_UClass_ACrop_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_AItem_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APivotPaper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(ACrop::execUpdateCurrentFlipBook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCurrentFlipBook();
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
			{ "UpdateCurrentFlipBook", &ACrop::execUpdateCurrentFlipBook },
			{ "UpdateTime", &ACrop::execUpdateTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACrop_UpdateCurrentFlipBook_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrop_UpdateCurrentFlipBook_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeSystem" },
		{ "ModuleRelativePath", "Public/Items/Crop.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrop_UpdateCurrentFlipBook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrop, nullptr, "UpdateCurrentFlipBook", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrop_UpdateCurrentFlipBook_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrop_UpdateCurrentFlipBook_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACrop_UpdateCurrentFlipBook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrop_UpdateCurrentFlipBook_Statics::FuncParams);
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrop_UpdateTime_Statics::NewProp_GameTimeSpan = { "GameTimeSpan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Crop_eventUpdateTime_Parms, GameTimeSpan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrop_UpdateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrop_UpdateTime_Statics::NewProp_GameTimeSpan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrop_UpdateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Crop.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrop_UpdateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrop, nullptr, "UpdateTime", nullptr, nullptr, Z_Construct_UFunction_ACrop_UpdateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrop_UpdateTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACrop_UpdateTime_Statics::Crop_eventUpdateTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrop_UpdateTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrop_UpdateTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrop_UpdateTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACrop_UpdateTime_Statics::Crop_eventUpdateTime_Parms) < MAX_uint16);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeedsItem_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SeedsItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HarvestItem_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HarvestItem;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrowthStages_ValueProp;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APivotPaper,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACrop_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrop_UpdateCurrentFlipBook, "UpdateCurrentFlipBook" }, // 2826846806
		{ &Z_Construct_UFunction_ACrop_UpdateTime, "UpdateTime" }, // 2939067693
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Crop.h" },
		{ "ModuleRelativePath", "Public/Items/Crop.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable_MetaData[] = {
		{ "Category", "CropSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Crop System Properties and Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Crop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crop System Properties and Functions" },
#endif
	};
#endif
	void Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable_SetBit(void* Obj)
	{
		((ACrop*)Obj)->Harvestable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable = { "Harvestable", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACrop), &Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable_MetaData), Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::NewProp_SeedsItem_MetaData[] = {
		{ "Category", "CropSystem" },
		{ "ModuleRelativePath", "Public/Items/Crop.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_SeedsItem = { "SeedsItem", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrop, SeedsItem), Z_Construct_UClass_UClass, Z_Construct_UClass_ACrop_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::NewProp_SeedsItem_MetaData), Z_Construct_UClass_ACrop_Statics::NewProp_SeedsItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::NewProp_HarvestItem_MetaData[] = {
		{ "Category", "CropSystem" },
		{ "ModuleRelativePath", "Public/Items/Crop.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_HarvestItem = { "HarvestItem", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrop, HarvestItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::NewProp_HarvestItem_MetaData), Z_Construct_UClass_ACrop_Statics::NewProp_HarvestItem_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_ValueProp = { "GrowthStages", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_Key_KeyProp = { "GrowthStages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_MetaData[] = {
		{ "Category", "CropSystem" },
		{ "ModuleRelativePath", "Public/Items/Crop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A map of growth stages for playing Flipbooks over time.\nKey: Hours since creation\nValue: Flipbook to play at the specified hour." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages = { "GrowthStages", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrop, GrowthStages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_MetaData), Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::NewProp_CropCreationTime_MetaData[] = {
		{ "Category", "TimeSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Time System Properties and Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Crop.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time System Properties and Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_CropCreationTime = { "CropCreationTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrop, CropCreationTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::NewProp_CropCreationTime_MetaData), Z_Construct_UClass_ACrop_Statics::NewProp_CropCreationTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrop_Statics::NewProp_CropTimespan_MetaData[] = {
		{ "Category", "TimeSystem" },
		{ "ModuleRelativePath", "Public/Items/Crop.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrop_Statics::NewProp_CropTimespan = { "CropTimespan", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrop, CropTimespan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::NewProp_CropTimespan_MetaData), Z_Construct_UClass_ACrop_Statics::NewProp_CropTimespan_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_Harvestable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_SeedsItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_HarvestItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_GrowthStages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_CropCreationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrop_Statics::NewProp_CropTimespan,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::Class_MetaDataParams), Z_Construct_UClass_ACrop_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrop_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_Crop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_Crop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACrop, ACrop::StaticClass, TEXT("ACrop"), &Z_Registration_Info_UClass_ACrop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrop), 873887598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_Crop_h_253002213(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_Crop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_Crop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
