// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/UI/DragPreview.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragPreview() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UDragPreview();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UDragPreview_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(UDragPreview::execInit)
	{
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InItemID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InItemID);
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
			FDataTableRowHandle InItemID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InItemID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragPreview_Init_Statics::NewProp_InItemID = { "InItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DragPreview_eventInit_Parms, InItemID), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragPreview_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragPreview_Init_Statics::NewProp_InItemID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragPreview_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/DragPreview.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragPreview_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragPreview, nullptr, "Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDragPreview_Init_Statics::DragPreview_eventInit_Parms), Z_Construct_UFunction_UDragPreview_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragPreview_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragPreview_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragPreview_Init_Statics::Function_MetaDataParams)) };
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragPreview_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDragPreview_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDragPreview_Init, "Init" }, // 2585987481
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragPreview_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/DragPreview.h" },
		{ "ModuleRelativePath", "Public/UI/DragPreview.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragPreview_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/DragPreview.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDragPreview_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragPreview, ItemID), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UDragPreview_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::NewProp_ItemID_MetaData)) }; // 2710926200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragPreview_Statics::NewProp_ItemImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DragPreview" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/DragPreview.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragPreview_Statics::NewProp_ItemImage = { "ItemImage", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragPreview, ItemImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragPreview_Statics::NewProp_ItemImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::NewProp_ItemImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragPreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragPreview_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragPreview_Statics::NewProp_ItemImage,
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
		METADATA_PARAMS(Z_Construct_UClass_UDragPreview_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragPreview_Statics::Class_MetaDataParams))
	};
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
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_DragPreview_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_DragPreview_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDragPreview, UDragPreview::StaticClass, TEXT("UDragPreview"), &Z_Registration_Info_UClass_UDragPreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragPreview), 1957270234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_DragPreview_h_4005828171(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_DragPreview_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_DragPreview_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
