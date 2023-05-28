// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/FarmGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmGameStateBase() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_AFarmGameStateBase();
	AUTOMAFARM_API UClass* Z_Construct_UClass_AFarmGameStateBase_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UTileHolder_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
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
		static const UECodeGen_Private::FClassPropertyParams NewProp_LevelMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LevelMap;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_ValueProp = { "LevelMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTileHolder_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_Key_KeyProp = { "LevelMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "FarmGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap = { "LevelMap", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFarmGameStateBase, LevelMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFarmGameStateBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap,
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
		{ Z_Construct_UClass_AFarmGameStateBase, AFarmGameStateBase::StaticClass, TEXT("AFarmGameStateBase"), &Z_Registration_Info_UClass_AFarmGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFarmGameStateBase), 858486134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_3063123979(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_FarmGameStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
