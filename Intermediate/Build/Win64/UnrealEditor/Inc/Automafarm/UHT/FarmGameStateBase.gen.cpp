// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/FarmGameStateBase.h"
#include "Automafarm/Public/TileHolder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmGameStateBase() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_AFarmGameStateBase();
	AUTOMAFARM_API UClass* Z_Construct_UClass_AFarmGameStateBase_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPlaceableObject_NoRegister();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FTileHolder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void AFarmGameStateBase::StaticRegisterNativesAFarmGameStateBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFarmGameStateBase);
	UClass* Z_Construct_UClass_AFarmGameStateBase_NoRegister()
	{
		return AFarmGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AFarmGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LevelMap;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InstancedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedObjectMap_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InstancedObjectMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedObjectMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InstancedObjectMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainHolder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainHolder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFarmGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FarmGameStateBase.h" },
		{ "ModuleRelativePath", "FarmGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_ValueProp = { "LevelMap", nullptr, (EPropertyFlags)0x0000008000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTileHolder, METADATA_PARAMS(nullptr, 0) }; // 2260507822
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_Key_KeyProp = { "LevelMap_Key", nullptr, (EPropertyFlags)0x0000008000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "FarmGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap = { "LevelMap", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFarmGameStateBase, LevelMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_MetaData)) }; // 2260507822
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjects_Inner = { "InstancedObjects", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UPlaceableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjects_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "FarmGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjects = { "InstancedObjects", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFarmGameStateBase, InstancedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjects_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_ValueProp = { "InstancedObjectMap", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UPlaceableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_Key_KeyProp = { "InstancedObjectMap_Key", nullptr, (EPropertyFlags)0x0004000000080009, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UPlaceableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_MetaData[] = {
		{ "Category", "Terrain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FarmGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap = { "InstancedObjectMap", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFarmGameStateBase, InstancedObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_TerrainHolder_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "FarmGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_TerrainHolder = { "TerrainHolder", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFarmGameStateBase, TerrainHolder), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_TerrainHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_TerrainHolder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFarmGameStateBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_TerrainHolder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFarmGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFarmGameStateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFarmGameStateBase_Statics::ClassParams = {
		&AFarmGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFarmGameStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFarmGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFarmGameStateBase()
	{
		if (!Z_Registration_Info_UClass_AFarmGameStateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFarmGameStateBase.OuterSingleton, Z_Construct_UClass_AFarmGameStateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFarmGameStateBase.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<AFarmGameStateBase>()
	{
		return AFarmGameStateBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFarmGameStateBase);
	AFarmGameStateBase::~AFarmGameStateBase() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFarmGameStateBase, AFarmGameStateBase::StaticClass, TEXT("AFarmGameStateBase"), &Z_Registration_Info_UClass_AFarmGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFarmGameStateBase), 3352186683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_3306436637(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
