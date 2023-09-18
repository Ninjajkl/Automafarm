// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/UI/PlayerHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHud() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_AInteractableBlock_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UContainerInventory_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UHotbar_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPlayerHud();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPlayerHud_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPlayerInventory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerHud::execExitMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHud::execShowContainer)
	{
		P_GET_OBJECT(AInteractableBlock,Z_Param_Container);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowContainer(Z_Param_Container);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHud::execDisplayPlayerInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayPlayerInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerHud::execInit)
	{
		P_GET_OBJECT(UInventory,Z_Param_InInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InInventory);
		P_NATIVE_END;
	}
	void UPlayerHud::StaticRegisterNativesUPlayerHud()
	{
		UClass* Class = UPlayerHud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayPlayerInventory", &UPlayerHud::execDisplayPlayerInventory },
			{ "ExitMenu", &UPlayerHud::execExitMenu },
			{ "Init", &UPlayerHud::execInit },
			{ "ShowContainer", &UPlayerHud::execShowContainer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerHud_DisplayPlayerInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHud_DisplayPlayerInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/PlayerHud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHud_DisplayPlayerInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHud, nullptr, "DisplayPlayerInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHud_DisplayPlayerInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHud_DisplayPlayerInventory_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerHud_DisplayPlayerInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHud_DisplayPlayerInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHud_ExitMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHud_ExitMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/PlayerHud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHud_ExitMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHud, nullptr, "ExitMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHud_ExitMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHud_ExitMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerHud_ExitMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHud_ExitMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHud_Init_Statics
	{
		struct PlayerHud_eventInit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHud_Init_Statics::NewProp_InInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerHud_Init_Statics::NewProp_InInventory = { "InInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHud_eventInit_Parms, InInventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHud_Init_Statics::NewProp_InInventory_MetaData), Z_Construct_UFunction_UPlayerHud_Init_Statics::NewProp_InInventory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHud_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHud_Init_Statics::NewProp_InInventory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHud_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/PlayerHud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHud_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHud, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UPlayerHud_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHud_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerHud_Init_Statics::PlayerHud_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHud_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHud_Init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHud_Init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerHud_Init_Statics::PlayerHud_eventInit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerHud_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHud_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics
	{
		struct PlayerHud_eventShowContainer_Parms
		{
			AInteractableBlock* Container;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerHud_eventShowContainer_Parms, Container), Z_Construct_UClass_AInteractableBlock_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::NewProp_Container,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/PlayerHud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerHud, nullptr, "ShowContainer", nullptr, nullptr, Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::PlayerHud_eventShowContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::PlayerHud_eventShowContainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerHud_ShowContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerHud_ShowContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHud);
	UClass* Z_Construct_UClass_UPlayerHud_NoRegister()
	{
		return UPlayerHud::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInventoryClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerInventoryClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hotbar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hotbar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHud_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerHud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerHud_DisplayPlayerInventory, "DisplayPlayerInventory" }, // 1364275405
		{ &Z_Construct_UFunction_UPlayerHud_ExitMenu, "ExitMenu" }, // 924400383
		{ &Z_Construct_UFunction_UPlayerHud_Init, "Init" }, // 1058588726
		{ &Z_Construct_UFunction_UPlayerHud_ShowContainer, "ShowContainer" }, // 1008460650
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHud_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHud_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerHud.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerHud.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHud_Statics::NewProp_PlayerInventoryClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/PlayerHud.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerHud_Statics::NewProp_PlayerInventoryClass = { "PlayerInventoryClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHud, PlayerInventoryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHud_Statics::NewProp_PlayerInventoryClass_MetaData), Z_Construct_UClass_UPlayerHud_Statics::NewProp_PlayerInventoryClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHud_Statics::NewProp_PlayerInventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHud_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHud, PlayerInventory), Z_Construct_UClass_UPlayerInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHud_Statics::NewProp_PlayerInventory_MetaData), Z_Construct_UClass_UPlayerHud_Statics::NewProp_PlayerInventory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHud_Statics::NewProp_ContainerInventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHud_Statics::NewProp_ContainerInventory = { "ContainerInventory", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHud, ContainerInventory), Z_Construct_UClass_UContainerInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHud_Statics::NewProp_ContainerInventory_MetaData), Z_Construct_UClass_UPlayerHud_Statics::NewProp_ContainerInventory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHud_Statics::NewProp_Hotbar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHud_Statics::NewProp_Hotbar = { "Hotbar", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHud, Hotbar), Z_Construct_UClass_UHotbar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHud_Statics::NewProp_Hotbar_MetaData), Z_Construct_UClass_UPlayerHud_Statics::NewProp_Hotbar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHud_Statics::NewProp_PlayerInventoryClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHud_Statics::NewProp_PlayerInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHud_Statics::NewProp_ContainerInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHud_Statics::NewProp_Hotbar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHud_Statics::ClassParams = {
		&UPlayerHud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHud_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHud_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerHud_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHud_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerHud()
	{
		if (!Z_Registration_Info_UClass_UPlayerHud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHud.OuterSingleton, Z_Construct_UClass_UPlayerHud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerHud.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UPlayerHud>()
	{
		return UPlayerHud::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHud);
	UPlayerHud::~UPlayerHud() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHud, UPlayerHud::StaticClass, TEXT("UPlayerHud"), &Z_Registration_Info_UClass_UPlayerHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHud), 3594374083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_688743785(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerHud_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
