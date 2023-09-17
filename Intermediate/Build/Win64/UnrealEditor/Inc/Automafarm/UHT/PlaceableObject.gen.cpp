// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Items/PlaceableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaceableObject() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_AItem();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APlaceableObject();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APlaceableObject_NoRegister();
	AUTOMAFARM_API UEnum* Z_Construct_UEnum_Automafarm_ETileType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void APlaceableObject::StaticRegisterNativesAPlaceableObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlaceableObject);
	UClass* Z_Construct_UClass_APlaceableObject_NoRegister()
	{
		return APlaceableObject::StaticClass();
	}
	struct Z_Construct_UClass_APlaceableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TilesToFill_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilesToFill_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TilesToFill;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TileType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TileType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlaceableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceableObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Item" },
		{ "IncludePath", "Items/PlaceableObject.h" },
		{ "ModuleRelativePath", "Public/Items/PlaceableObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlaceableObject_Statics::NewProp_TilesToFill_Inner = { "TilesToFill", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceableObject_Statics::NewProp_TilesToFill_MetaData[] = {
		{ "Category", "PlaceableObject" },
		{ "ModuleRelativePath", "Public/Items/PlaceableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlaceableObject_Statics::NewProp_TilesToFill = { "TilesToFill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlaceableObject, TilesToFill), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableObject_Statics::NewProp_TilesToFill_MetaData), Z_Construct_UClass_APlaceableObject_Statics::NewProp_TilesToFill_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlaceableObject_Statics::NewProp_TileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceableObject_Statics::NewProp_TileType_MetaData[] = {
		{ "Category", "PlaceableObject" },
		{ "ModuleRelativePath", "Public/Items/PlaceableObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlaceableObject_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlaceableObject, TileType), Z_Construct_UEnum_Automafarm_ETileType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableObject_Statics::NewProp_TileType_MetaData), Z_Construct_UClass_APlaceableObject_Statics::NewProp_TileType_MetaData) }; // 789816852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlaceableObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableObject_Statics::NewProp_TilesToFill_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableObject_Statics::NewProp_TilesToFill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableObject_Statics::NewProp_TileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableObject_Statics::NewProp_TileType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlaceableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaceableObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlaceableObject_Statics::ClassParams = {
		&APlaceableObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlaceableObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_APlaceableObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlaceableObject()
	{
		if (!Z_Registration_Info_UClass_APlaceableObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlaceableObject.OuterSingleton, Z_Construct_UClass_APlaceableObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlaceableObject.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<APlaceableObject>()
	{
		return APlaceableObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlaceableObject);
	APlaceableObject::~APlaceableObject() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_PlaceableObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_PlaceableObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlaceableObject, APlaceableObject::StaticClass, TEXT("APlaceableObject"), &Z_Registration_Info_UClass_APlaceableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlaceableObject), 1535682778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_PlaceableObject_h_2763547515(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_PlaceableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Items_PlaceableObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
