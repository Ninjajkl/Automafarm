// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/UI/DragPreview.h"
#include "Automafarm/Public/Library/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragPreview() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UDragPreview();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UDragPreview_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_USlotPreview_NoRegister();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(UDragPreview::execInit)
	{
		P_GET_STRUCT_REF(FSlotStruct,Z_Param_Out_InSlotStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_Out_InSlotStruct);
		P_NATIVE_END;
	}
	void UDragPreview::StaticRegisterNativesUDragPreview()
	{
		UClass* Class = UDragPreview::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UDragPreview::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDragPreview_Init_Statics
	{
		struct DragPreview_eventInit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragPreview_Init_Statics::NewProp_InSlotStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragPreview_Init_Statics::NewProp_InSlotStruct = { "InSlotStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DragPreview_eventInit_Parms, InSlotStruct), Z_Construct_UScriptStruct_FSlotStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDragPreview_Init_Statics::NewProp_InSlotStruct_MetaData), Z_Construct_UFunction_UDragPreview_Init_Statics::NewProp_InSlotStruct_MetaData) }; // 3392258304
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragPreview_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragPreview_Init_Statics::NewProp_InSlotStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragPreview_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/DragPreview.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragPreview_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragPreview, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UDragPreview_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragPreview_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDragPreview_Init_Statics::DragPreview_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDragPreview_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDragPreview_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDragPreview_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDragPreview_Init_Statics::DragPreview_eventInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDragPreview_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDragPreview_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDragPreview);
	UClass* Z_Construct_UClass_UDragPreview_NoRegister()
	{
		return UDragPreview::StaticClass();
	}
	struct Z_Construct_UClass_UDragPreview_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotPreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotPreview;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragPreview_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDragPreview_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDragPreview_Init, "Init" }, // 2301683246
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragPreview_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/DragPreview.h" },
		{ "ModuleRelativePath", "Public/UI/DragPreview.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragPreview_Statics::NewProp_SlotPreview_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/DragPreview.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragPreview_Statics::NewProp_SlotPreview = { "SlotPreview", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDragPreview, SlotPreview), Z_Construct_UClass_USlotPreview_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::NewProp_SlotPreview_MetaData), Z_Construct_UClass_UDragPreview_Statics::NewProp_SlotPreview_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragPreview_Statics::NewProp_SlotPreview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragPreview_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragPreview>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDragPreview_Statics::ClassParams = {
		&UDragPreview::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDragPreview_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::Class_MetaDataParams), Z_Construct_UClass_UDragPreview_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDragPreview()
	{
		if (!Z_Registration_Info_UClass_UDragPreview.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDragPreview.OuterSingleton, Z_Construct_UClass_UDragPreview_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDragPreview.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UDragPreview>()
	{
		return UDragPreview::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragPreview);
	UDragPreview::~UDragPreview() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_DragPreview_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_DragPreview_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDragPreview, UDragPreview::StaticClass, TEXT("UDragPreview"), &Z_Registration_Info_UClass_UDragPreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragPreview), 4019336281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_DragPreview_h_4030609692(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_DragPreview_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_DragPreview_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
