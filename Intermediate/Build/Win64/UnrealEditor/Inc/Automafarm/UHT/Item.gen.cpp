// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Items/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_AItem();
	AUTOMAFARM_API UClass* Z_Construct_UClass_AItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void AItem::StaticRegisterNativesAItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem);
	UClass* Z_Construct_UClass_AItem_NoRegister()
	{
		return AItem::StaticClass();
	}
	struct Z_Construct_UClass_AItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Placeable_MetaData[];
#endif
		static void NewProp_Placeable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Placeable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Item" },
		{ "IncludePath", "Items/Item.h" },
		{ "ModuleRelativePath", "Public/Items/Item.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_Placeable_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/Item.h" },
	};
#endif
	void Z_Construct_UClass_AItem_Statics::NewProp_Placeable_SetBit(void* Obj)
	{
		((AItem*)Obj)->Placeable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Placeable = { "Placeable", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AItem), &Z_Construct_UClass_AItem_Statics::NewProp_Placeable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_Placeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_Placeable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Placeable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
		&AItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem()
	{
		if (!Z_Registration_Info_UClass_AItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem.OuterSingleton, Z_Construct_UClass_AItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItem.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<AItem>()
	{
		return AItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
	AItem::~AItem() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Items_Item_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Items_Item_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItem, AItem::StaticClass, TEXT("AItem"), &Z_Registration_Info_UClass_AItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem), 1309186616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Items_Item_h_2360509401(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Items_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Items_Item_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
