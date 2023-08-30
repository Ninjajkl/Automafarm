// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/UI/DragDropInventorySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragDropInventorySlot() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UDragDropInventorySlot();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UDragDropInventorySlot_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(UDragDropInventorySlot::execInit)
	{
		P_GET_OBJECT(UInventory,Z_Param_Inventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_ContentIndex);
		P_GET_OBJECT(UWidget,Z_Param_InDefaultDragVisual);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_Inventory,Z_Param_ContentIndex,Z_Param_InDefaultDragVisual);
		P_NATIVE_END;
	}
	void UDragDropInventorySlot::StaticRegisterNativesUDragDropInventorySlot()
	{
		UClass* Class = UDragDropInventorySlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UDragDropInventorySlot::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics
	{
		struct DragDropInventorySlot_eventInit_Parms
		{
			UInventory* Inventory;
			int32 ContentIndex;
			UWidget* InDefaultDragVisual;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ContentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultDragVisual_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDefaultDragVisual;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::NewProp_Inventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DragDropInventorySlot_eventInit_Parms, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::NewProp_ContentIndex = { "ContentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DragDropInventorySlot_eventInit_Parms, ContentIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::NewProp_InDefaultDragVisual_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::NewProp_InDefaultDragVisual = { "InDefaultDragVisual", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DragDropInventorySlot_eventInit_Parms, InDefaultDragVisual), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::NewProp_InDefaultDragVisual_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::NewProp_InDefaultDragVisual_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::NewProp_ContentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::NewProp_InDefaultDragVisual,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/DragDropInventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragDropInventorySlot, nullptr, "Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::DragDropInventorySlot_eventInit_Parms), Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragDropInventorySlot_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDragDropInventorySlot_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDragDropInventorySlot);
	UClass* Z_Construct_UClass_UDragDropInventorySlot_NoRegister()
	{
		return UDragDropInventorySlot::StaticClass();
	}
	struct Z_Construct_UClass_UDragDropInventorySlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ContentIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragDropInventorySlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDragDropInventorySlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDragDropInventorySlot_Init, "Init" }, // 2110764942
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDropInventorySlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/DragDropInventorySlot.h" },
		{ "ModuleRelativePath", "Public/UI/DragDropInventorySlot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDropInventorySlot_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/DragDropInventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragDropInventorySlot_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragDropInventorySlot, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragDropInventorySlot_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropInventorySlot_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragDropInventorySlot_Statics::NewProp_ContentIndex_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/DragDropInventorySlot.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDragDropInventorySlot_Statics::NewProp_ContentIndex = { "ContentIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDragDropInventorySlot, ContentIndex), METADATA_PARAMS(Z_Construct_UClass_UDragDropInventorySlot_Statics::NewProp_ContentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropInventorySlot_Statics::NewProp_ContentIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragDropInventorySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDropInventorySlot_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragDropInventorySlot_Statics::NewProp_ContentIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragDropInventorySlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragDropInventorySlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDragDropInventorySlot_Statics::ClassParams = {
		&UDragDropInventorySlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDragDropInventorySlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropInventorySlot_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDragDropInventorySlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragDropInventorySlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragDropInventorySlot()
	{
		if (!Z_Registration_Info_UClass_UDragDropInventorySlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDragDropInventorySlot.OuterSingleton, Z_Construct_UClass_UDragDropInventorySlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDragDropInventorySlot.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UDragDropInventorySlot>()
	{
		return UDragDropInventorySlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragDropInventorySlot);
	UDragDropInventorySlot::~UDragDropInventorySlot() {}
	struct Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_DragDropInventorySlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_DragDropInventorySlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDragDropInventorySlot, UDragDropInventorySlot::StaticClass, TEXT("UDragDropInventorySlot"), &Z_Registration_Info_UClass_UDragDropInventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragDropInventorySlot), 2751684039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_DragDropInventorySlot_h_486559101(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_DragDropInventorySlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_DragDropInventorySlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
