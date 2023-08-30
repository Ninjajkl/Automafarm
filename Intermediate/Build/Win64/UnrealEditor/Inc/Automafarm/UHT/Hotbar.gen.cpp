// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/UI/Hotbar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHotbar() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UHotbar();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UHotbar_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventorySlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(UHotbar::execRefreshHotbar)
	{
		P_GET_OBJECT(UInventory,Z_Param_refreshInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshHotbar(Z_Param_refreshInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHotbar::execHotbarSlotUpdated)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InCurrHotbarSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HotbarSlotUpdated(Z_Param_InCurrHotbarSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHotbar::execInit)
	{
		P_GET_OBJECT(UInventory,Z_Param_InInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InInventory);
		P_NATIVE_END;
	}
	void UHotbar::StaticRegisterNativesUHotbar()
	{
		UClass* Class = UHotbar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HotbarSlotUpdated", &UHotbar::execHotbarSlotUpdated },
			{ "Init", &UHotbar::execInit },
			{ "RefreshHotbar", &UHotbar::execRefreshHotbar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHotbar_HotbarSlotUpdated_Statics
	{
		struct Hotbar_eventHotbarSlotUpdated_Parms
		{
			int32 InCurrHotbarSlot;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InCurrHotbarSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHotbar_HotbarSlotUpdated_Statics::NewProp_InCurrHotbarSlot = { "InCurrHotbarSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Hotbar_eventHotbarSlotUpdated_Parms, InCurrHotbarSlot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHotbar_HotbarSlotUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHotbar_HotbarSlotUpdated_Statics::NewProp_InCurrHotbarSlot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHotbar_HotbarSlotUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/Hotbar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHotbar_HotbarSlotUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHotbar, nullptr, "HotbarSlotUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHotbar_HotbarSlotUpdated_Statics::Hotbar_eventHotbarSlotUpdated_Parms), Z_Construct_UFunction_UHotbar_HotbarSlotUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHotbar_HotbarSlotUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHotbar_HotbarSlotUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHotbar_HotbarSlotUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHotbar_HotbarSlotUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHotbar_HotbarSlotUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHotbar_Init_Statics
	{
		struct Hotbar_eventInit_Parms
		{
			UInventory* InInventory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHotbar_Init_Statics::NewProp_InInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHotbar_Init_Statics::NewProp_InInventory = { "InInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Hotbar_eventInit_Parms, InInventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHotbar_Init_Statics::NewProp_InInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHotbar_Init_Statics::NewProp_InInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHotbar_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHotbar_Init_Statics::NewProp_InInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHotbar_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/Hotbar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHotbar_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHotbar, nullptr, "Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHotbar_Init_Statics::Hotbar_eventInit_Parms), Z_Construct_UFunction_UHotbar_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHotbar_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHotbar_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHotbar_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHotbar_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHotbar_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics
	{
		struct Hotbar_eventRefreshHotbar_Parms
		{
			UInventory* refreshInventory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_refreshInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_refreshInventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::NewProp_refreshInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::NewProp_refreshInventory = { "refreshInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Hotbar_eventRefreshHotbar_Parms, refreshInventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::NewProp_refreshInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::NewProp_refreshInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::NewProp_refreshInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/Hotbar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHotbar, nullptr, "RefreshHotbar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::Hotbar_eventRefreshHotbar_Parms), Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHotbar_RefreshHotbar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHotbar_RefreshHotbar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHotbar);
	UClass* Z_Construct_UClass_UHotbar_NoRegister()
	{
		return UHotbar::StaticClass();
	}
	struct Z_Construct_UClass_UHotbar_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrHotbarSlot_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrHotbarSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HotbarSlotGap_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HotbarSlotGap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IMGHotbarSelector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IMGHotbarSelector;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventorySlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InventorySlots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHotbar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHotbar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHotbar_HotbarSlotUpdated, "HotbarSlotUpdated" }, // 2614344691
		{ &Z_Construct_UFunction_UHotbar_Init, "Init" }, // 1121641206
		{ &Z_Construct_UFunction_UHotbar_RefreshHotbar, "RefreshHotbar" }, // 2533597756
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHotbar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Hotbar.h" },
		{ "ModuleRelativePath", "Public/UI/Hotbar.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHotbar_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Hotbar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHotbar_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHotbar, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHotbar_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHotbar_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHotbar_Statics::NewProp_CurrHotbarSlot_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/Hotbar.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHotbar_Statics::NewProp_CurrHotbarSlot = { "CurrHotbarSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHotbar, CurrHotbarSlot), METADATA_PARAMS(Z_Construct_UClass_UHotbar_Statics::NewProp_CurrHotbarSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHotbar_Statics::NewProp_CurrHotbarSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHotbar_Statics::NewProp_HotbarSlotGap_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/Hotbar.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHotbar_Statics::NewProp_HotbarSlotGap = { "HotbarSlotGap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHotbar, HotbarSlotGap), METADATA_PARAMS(Z_Construct_UClass_UHotbar_Statics::NewProp_HotbarSlotGap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHotbar_Statics::NewProp_HotbarSlotGap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHotbar_Statics::NewProp_IMGHotbarSelector_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Hotbar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHotbar_Statics::NewProp_IMGHotbarSelector = { "IMGHotbarSelector", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHotbar, IMGHotbarSelector), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHotbar_Statics::NewProp_IMGHotbarSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHotbar_Statics::NewProp_IMGHotbarSelector_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHotbar_Statics::NewProp_InventorySlots_Inner = { "InventorySlots", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInventorySlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHotbar_Statics::NewProp_InventorySlots_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Hotbar.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHotbar_Statics::NewProp_InventorySlots = { "InventorySlots", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHotbar, InventorySlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHotbar_Statics::NewProp_InventorySlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHotbar_Statics::NewProp_InventorySlots_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHotbar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHotbar_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHotbar_Statics::NewProp_CurrHotbarSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHotbar_Statics::NewProp_HotbarSlotGap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHotbar_Statics::NewProp_IMGHotbarSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHotbar_Statics::NewProp_InventorySlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHotbar_Statics::NewProp_InventorySlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHotbar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHotbar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHotbar_Statics::ClassParams = {
		&UHotbar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHotbar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHotbar_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHotbar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHotbar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHotbar()
	{
		if (!Z_Registration_Info_UClass_UHotbar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHotbar.OuterSingleton, Z_Construct_UClass_UHotbar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHotbar.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UHotbar>()
	{
		return UHotbar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHotbar);
	UHotbar::~UHotbar() {}
	struct Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHotbar, UHotbar::StaticClass, TEXT("UHotbar"), &Z_Registration_Info_UClass_UHotbar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHotbar), 2819805789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_1934650174(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ninja_OneDrive_Documents_Programming_Unreal_Projects_Automafarm_Source_Automafarm_Public_UI_Hotbar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
