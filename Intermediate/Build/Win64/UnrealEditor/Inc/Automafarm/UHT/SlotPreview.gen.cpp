// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/UI/SlotPreview.h"
#include "Automafarm/Public/Library/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotPreview() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_USlotPreview();
	AUTOMAFARM_API UClass* Z_Construct_UClass_USlotPreview_NoRegister();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(USlotPreview::execRefreshSlot)
	{
		P_GET_STRUCT_REF(FSlotStruct,Z_Param_Out_InSlotStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshSlot(Z_Param_Out_InSlotStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlotPreview::execInit)
	{
		P_GET_STRUCT_REF(FSlotStruct,Z_Param_Out_InSlotStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_Out_InSlotStruct);
		P_NATIVE_END;
	}
	void USlotPreview::StaticRegisterNativesUSlotPreview()
	{
		UClass* Class = USlotPreview::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &USlotPreview::execInit },
			{ "RefreshSlot", &USlotPreview::execRefreshSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlotPreview_Init_Statics
	{
		struct SlotPreview_eventInit_Parms
		{
			FSlotStruct InSlotStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSlotStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSlotStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlotPreview_Init_Statics::NewProp_InSlotStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlotPreview_Init_Statics::NewProp_InSlotStruct = { "InSlotStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlotPreview_eventInit_Parms, InSlotStruct), Z_Construct_UScriptStruct_FSlotStruct, METADATA_PARAMS(Z_Construct_UFunction_USlotPreview_Init_Statics::NewProp_InSlotStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlotPreview_Init_Statics::NewProp_InSlotStruct_MetaData)) }; // 2383706676
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlotPreview_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlotPreview_Init_Statics::NewProp_InSlotStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlotPreview_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/SlotPreview.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlotPreview_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlotPreview, nullptr, "Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlotPreview_Init_Statics::SlotPreview_eventInit_Parms), Z_Construct_UFunction_USlotPreview_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlotPreview_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlotPreview_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlotPreview_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlotPreview_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlotPreview_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics
	{
		struct SlotPreview_eventRefreshSlot_Parms
		{
			FSlotStruct InSlotStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSlotStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSlotStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::NewProp_InSlotStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::NewProp_InSlotStruct = { "InSlotStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlotPreview_eventRefreshSlot_Parms, InSlotStruct), Z_Construct_UScriptStruct_FSlotStruct, METADATA_PARAMS(Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::NewProp_InSlotStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::NewProp_InSlotStruct_MetaData)) }; // 2383706676
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::NewProp_InSlotStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/SlotPreview.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlotPreview, nullptr, "RefreshSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::SlotPreview_eventRefreshSlot_Parms), Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlotPreview_RefreshSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlotPreview_RefreshSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlotPreview);
	UClass* Z_Construct_UClass_USlotPreview_NoRegister()
	{
		return USlotPreview::StaticClass();
	}
	struct Z_Construct_UClass_USlotPreview_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TXTQuantity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TXTQuantity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IMGIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IMGIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotPreview_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlotPreview_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlotPreview_Init, "Init" }, // 1501237075
		{ &Z_Construct_UFunction_USlotPreview_RefreshSlot, "RefreshSlot" }, // 1972461669
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotPreview_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/SlotPreview.h" },
		{ "ModuleRelativePath", "Public/UI/SlotPreview.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotPreview_Statics::NewProp_SlotStruct_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/SlotPreview.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlotPreview_Statics::NewProp_SlotStruct = { "SlotStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotPreview, SlotStruct), Z_Construct_UScriptStruct_FSlotStruct, METADATA_PARAMS(Z_Construct_UClass_USlotPreview_Statics::NewProp_SlotStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotPreview_Statics::NewProp_SlotStruct_MetaData)) }; // 2383706676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotPreview_Statics::NewProp_TXTQuantity_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SlotPreview.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotPreview_Statics::NewProp_TXTQuantity = { "TXTQuantity", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotPreview, TXTQuantity), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotPreview_Statics::NewProp_TXTQuantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotPreview_Statics::NewProp_TXTQuantity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotPreview_Statics::NewProp_IMGIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SlotPreview.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotPreview_Statics::NewProp_IMGIcon = { "IMGIcon", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlotPreview, IMGIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotPreview_Statics::NewProp_IMGIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotPreview_Statics::NewProp_IMGIcon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotPreview_Statics::NewProp_SlotStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotPreview_Statics::NewProp_TXTQuantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotPreview_Statics::NewProp_IMGIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotPreview_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotPreview>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlotPreview_Statics::ClassParams = {
		&USlotPreview::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USlotPreview_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotPreview_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotPreview_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotPreview_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotPreview()
	{
		if (!Z_Registration_Info_UClass_USlotPreview.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlotPreview.OuterSingleton, Z_Construct_UClass_USlotPreview_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlotPreview.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<USlotPreview>()
	{
		return USlotPreview::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotPreview);
	USlotPreview::~USlotPreview() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlotPreview, USlotPreview::StaticClass, TEXT("USlotPreview"), &Z_Registration_Info_UClass_USlotPreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlotPreview), 2889957262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_2199230960(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_SlotPreview_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
