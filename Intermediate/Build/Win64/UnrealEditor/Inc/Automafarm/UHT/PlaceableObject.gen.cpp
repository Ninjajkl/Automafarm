// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/PlaceableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaceableObject() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UItem();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPlaceableObject();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPlaceableObject_NoRegister();
	AUTOMAFARM_API UEnum* Z_Construct_UEnum_Automafarm_ETileType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void UPlaceableObject::StaticRegisterNativesUPlaceableObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaceableObject);
	UClass* Z_Construct_UClass_UPlaceableObject_NoRegister()
	{
		return UPlaceableObject::StaticClass();
	}
	struct Z_Construct_UClass_UPlaceableObject_Statics
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilledTiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilledTiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilledTiles;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TileType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TileType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaceableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceableObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Item" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "PlaceableObject.h" },
		{ "ModuleRelativePath", "Public/PlaceableObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TilesToFill_Inner = { "TilesToFill", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TilesToFill_MetaData[] = {
		{ "Category", "PlaceableObject" },
		{ "ModuleRelativePath", "Public/PlaceableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TilesToFill = { "TilesToFill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaceableObject, TilesToFill), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TilesToFill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TilesToFill_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlaceableObject_Statics::NewProp_FilledTiles_Inner = { "FilledTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceableObject_Statics::NewProp_FilledTiles_MetaData[] = {
		{ "Category", "PlaceableObject" },
		{ "ModuleRelativePath", "Public/PlaceableObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlaceableObject_Statics::NewProp_FilledTiles = { "FilledTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaceableObject, FilledTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlaceableObject_Statics::NewProp_FilledTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableObject_Statics::NewProp_FilledTiles_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TileType_MetaData[] = {
		{ "Category", "PlaceableObject" },
		{ "ModuleRelativePath", "Public/PlaceableObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaceableObject, TileType), Z_Construct_UEnum_Automafarm_ETileType, METADATA_PARAMS(Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TileType_MetaData)) }; // 3146826733
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaceableObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TilesToFill_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TilesToFill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableObject_Statics::NewProp_FilledTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableObject_Statics::NewProp_FilledTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableObject_Statics::NewProp_TileType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaceableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaceableObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaceableObject_Statics::ClassParams = {
		&UPlaceableObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlaceableObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableObject_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaceableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaceableObject()
	{
		if (!Z_Registration_Info_UClass_UPlaceableObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaceableObject.OuterSingleton, Z_Construct_UClass_UPlaceableObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlaceableObject.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UPlaceableObject>()
	{
		return UPlaceableObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaceableObject);
	UPlaceableObject::~UPlaceableObject() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_PlaceableObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_PlaceableObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlaceableObject, UPlaceableObject::StaticClass, TEXT("UPlaceableObject"), &Z_Registration_Info_UClass_UPlaceableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaceableObject), 2920283759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_PlaceableObject_h_1918924191(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_PlaceableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_PlaceableObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS