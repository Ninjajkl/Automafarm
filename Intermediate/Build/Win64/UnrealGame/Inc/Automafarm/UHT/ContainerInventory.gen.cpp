// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/UI/ContainerInventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContainerInventory() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UContainerInventory();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UContainerInventory_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventoryGrid_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(UContainerInventory::execInit)
	{
		P_GET_OBJECT(UInventory,Z_Param_InInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InInventory);
		P_NATIVE_END;
	}
	void UContainerInventory::StaticRegisterNativesUContainerInventory()
	{
		UClass* Class = UContainerInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UContainerInventory::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContainerInventory_Init_Statics
	{
		struct ContainerInventory_eventInit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContainerInventory_Init_Statics::NewProp_InInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContainerInventory_Init_Statics::NewProp_InInventory = { "InInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContainerInventory_eventInit_Parms, InInventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContainerInventory_Init_Statics::NewProp_InInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerInventory_Init_Statics::NewProp_InInventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContainerInventory_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContainerInventory_Init_Statics::NewProp_InInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContainerInventory_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/ContainerInventory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContainerInventory_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContainerInventory, nullptr, "Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContainerInventory_Init_Statics::ContainerInventory_eventInit_Parms), Z_Construct_UFunction_UContainerInventory_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerInventory_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContainerInventory_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContainerInventory_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContainerInventory_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContainerInventory_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContainerInventory);
	UClass* Z_Construct_UClass_UContainerInventory_NoRegister()
	{
		return UContainerInventory::StaticClass();
	}
	struct Z_Construct_UClass_UContainerInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInventoryGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInventoryGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerInventoryGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerInventoryGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContainerInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContainerInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContainerInventory_Init, "Init" }, // 3323116816
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContainerInventory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/ContainerInventory.h" },
		{ "ModuleRelativePath", "Public/UI/ContainerInventory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContainerInventory_Statics::NewProp_PlayerInventoryGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ContainerInventory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContainerInventory_Statics::NewProp_PlayerInventoryGrid = { "PlayerInventoryGrid", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContainerInventory, PlayerInventoryGrid), Z_Construct_UClass_UInventoryGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContainerInventory_Statics::NewProp_PlayerInventoryGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContainerInventory_Statics::NewProp_PlayerInventoryGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContainerInventory_Statics::NewProp_ContainerInventoryGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ContainerInventory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContainerInventory_Statics::NewProp_ContainerInventoryGrid = { "ContainerInventoryGrid", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContainerInventory, ContainerInventoryGrid), Z_Construct_UClass_UInventoryGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContainerInventory_Statics::NewProp_ContainerInventoryGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContainerInventory_Statics::NewProp_ContainerInventoryGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContainerInventory_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/ContainerInventory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContainerInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContainerInventory, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContainerInventory_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContainerInventory_Statics::NewProp_Inventory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContainerInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContainerInventory_Statics::NewProp_PlayerInventoryGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContainerInventory_Statics::NewProp_ContainerInventoryGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContainerInventory_Statics::NewProp_Inventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContainerInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContainerInventory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContainerInventory_Statics::ClassParams = {
		&UContainerInventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UContainerInventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UContainerInventory_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContainerInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContainerInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContainerInventory()
	{
		if (!Z_Registration_Info_UClass_UContainerInventory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContainerInventory.OuterSingleton, Z_Construct_UClass_UContainerInventory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContainerInventory.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UContainerInventory>()
	{
		return UContainerInventory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContainerInventory);
	UContainerInventory::~UContainerInventory() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_ContainerInventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_ContainerInventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContainerInventory, UContainerInventory::StaticClass, TEXT("UContainerInventory"), &Z_Registration_Info_UClass_UContainerInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContainerInventory), 3625055776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_ContainerInventory_h_3743006548(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_ContainerInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_UI_ContainerInventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
