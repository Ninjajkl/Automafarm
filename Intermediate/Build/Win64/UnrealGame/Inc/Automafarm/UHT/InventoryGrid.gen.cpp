// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/UI/InventoryGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryGrid() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventoryGrid();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventoryGrid_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventorySlot_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryGrid::execRefreshInventory)
	{
		P_GET_OBJECT(UInventory,Z_Param_refreshInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshInventory(Z_Param_refreshInventory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryGrid::execInit)
	{
		P_GET_OBJECT(UInventory,Z_Param_InInventory);
		P_GET_OBJECT(UGridPanel,Z_Param_InSlotHolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InInventory,Z_Param_InSlotHolder);
		P_NATIVE_END;
	}
	void UInventoryGrid::StaticRegisterNativesUInventoryGrid()
	{
		UClass* Class = UInventoryGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UInventoryGrid::execInit },
			{ "RefreshInventory", &UInventoryGrid::execRefreshInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryGrid_Init_Statics
	{
		struct InventoryGrid_eventInit_Parms
		{
			UInventory* InInventory;
			UGridPanel* InSlotHolder;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSlotHolder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSlotHolder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryGrid_Init_Statics::NewProp_InInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryGrid_Init_Statics::NewProp_InInventory = { "InInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryGrid_eventInit_Parms, InInventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryGrid_Init_Statics::NewProp_InInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGrid_Init_Statics::NewProp_InInventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryGrid_Init_Statics::NewProp_InSlotHolder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryGrid_Init_Statics::NewProp_InSlotHolder = { "InSlotHolder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryGrid_eventInit_Parms, InSlotHolder), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryGrid_Init_Statics::NewProp_InSlotHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGrid_Init_Statics::NewProp_InSlotHolder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryGrid_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGrid_Init_Statics::NewProp_InInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGrid_Init_Statics::NewProp_InSlotHolder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryGrid_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGrid_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGrid, nullptr, "Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryGrid_Init_Statics::InventoryGrid_eventInit_Parms), Z_Construct_UFunction_UInventoryGrid_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGrid_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryGrid_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGrid_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryGrid_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGrid_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics
	{
		struct InventoryGrid_eventRefreshInventory_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::NewProp_refreshInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::NewProp_refreshInventory = { "refreshInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryGrid_eventRefreshInventory_Parms, refreshInventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::NewProp_refreshInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::NewProp_refreshInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::NewProp_refreshInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryGrid, nullptr, "RefreshInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::InventoryGrid_eventRefreshInventory_Parms), Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryGrid_RefreshInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryGrid_RefreshInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryGrid);
	UClass* Z_Construct_UClass_UInventoryGrid_NoRegister()
	{
		return UInventoryGrid::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InventorySlotClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotHolder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotHolder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryGrid_Init, "Init" }, // 116624042
		{ &Z_Construct_UFunction_UInventoryGrid_RefreshInventory, "RefreshInventory" }, // 1723861352
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/InventoryGrid.h" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventorySlotClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventorySlotClass = { "InventorySlotClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryGrid, InventorySlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInventorySlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventorySlotClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventorySlotClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryGrid_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryGrid_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryGrid, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryGrid_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryGrid_Statics::NewProp_SlotHolder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventoryGrid.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryGrid_Statics::NewProp_SlotHolder = { "SlotHolder", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryGrid, SlotHolder), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryGrid_Statics::NewProp_SlotHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::NewProp_SlotHolder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGrid_Statics::NewProp_InventorySlotClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGrid_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryGrid_Statics::NewProp_SlotHolder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryGrid_Statics::ClassParams = {
		&UInventoryGrid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryGrid()
	{
		if (!Z_Registration_Info_UClass_UInventoryGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryGrid.OuterSingleton, Z_Construct_UClass_UInventoryGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryGrid.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UInventoryGrid>()
	{
		return UInventoryGrid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryGrid);
	UInventoryGrid::~UInventoryGrid() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventoryGrid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventoryGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryGrid, UInventoryGrid::StaticClass, TEXT("UInventoryGrid"), &Z_Registration_Info_UClass_UInventoryGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryGrid), 473558444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventoryGrid_h_1424469307(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventoryGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_InventoryGrid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
