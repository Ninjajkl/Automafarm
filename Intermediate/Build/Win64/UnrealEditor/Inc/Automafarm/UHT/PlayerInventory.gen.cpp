// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/UI/PlayerInventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInventory() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UInventoryGrid_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPlayerInventory();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPlayerInventory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void UPlayerInventory::StaticRegisterNativesUPlayerInventory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInventory);
	UClass* Z_Construct_UClass_UPlayerInventory_NoRegister()
	{
		return UPlayerInventory::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryGridClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryGridClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryGrid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerInventory.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventory_Statics::NewProp_InventoryGridClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerInventory_Statics::NewProp_InventoryGridClass = { "InventoryGridClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventory, InventoryGridClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInventoryGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::NewProp_InventoryGridClass_MetaData), Z_Construct_UClass_UPlayerInventory_Statics::NewProp_InventoryGridClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInventory_Statics::NewProp_InventoryGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerInventory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInventory_Statics::NewProp_InventoryGrid = { "InventoryGrid", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInventory, InventoryGrid), Z_Construct_UClass_UInventoryGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::NewProp_InventoryGrid_MetaData), Z_Construct_UClass_UPlayerInventory_Statics::NewProp_InventoryGrid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventory_Statics::NewProp_InventoryGridClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInventory_Statics::NewProp_InventoryGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInventory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInventory_Statics::ClassParams = {
		&UPlayerInventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerInventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInventory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInventory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerInventory()
	{
		if (!Z_Registration_Info_UClass_UPlayerInventory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInventory.OuterSingleton, Z_Construct_UClass_UPlayerInventory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerInventory.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UPlayerInventory>()
	{
		return UPlayerInventory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInventory);
	UPlayerInventory::~UPlayerInventory() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerInventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerInventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInventory, UPlayerInventory::StaticClass, TEXT("UPlayerInventory"), &Z_Registration_Info_UClass_UPlayerInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInventory), 2189410359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerInventory_h_679603867(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_UI_PlayerInventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
