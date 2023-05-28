// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/TileHolder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileHolder() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UTileHolder();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UTileHolder_NoRegister();
	AUTOMAFARM_API UEnum* Z_Construct_UEnum_Automafarm_TileType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void UTileHolder::StaticRegisterNativesUTileHolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileHolder);
	UClass* Z_Construct_UClass_UTileHolder_NoRegister()
	{
		return UTileHolder::StaticClass();
	}
	struct Z_Construct_UClass_UTileHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileHolder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TileHolder.h" },
		{ "ModuleRelativePath", "Public/TileHolder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileHolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileHolder_Statics::ClassParams = {
		&UTileHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileHolder()
	{
		if (!Z_Registration_Info_UClass_UTileHolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileHolder.OuterSingleton, Z_Construct_UClass_UTileHolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTileHolder.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UTileHolder>()
	{
		return UTileHolder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileHolder);
	UTileHolder::~UTileHolder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_TileType;
	static UEnum* TileType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_TileType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_TileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Automafarm_TileType, (UObject*)Z_Construct_UPackage__Script_Automafarm(), TEXT("TileType"));
		}
		return Z_Registration_Info_UEnum_TileType.OuterSingleton;
	}
	template<> AUTOMAFARM_API UEnum* StaticEnum<TileType>()
	{
		return TileType_StaticEnum();
	}
	struct Z_Construct_UEnum_Automafarm_TileType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Automafarm_TileType_Statics::Enumerators[] = {
		{ "TileType::BLOCK", (int64)TileType::BLOCK },
		{ "TileType::PIVOTPAPER", (int64)TileType::PIVOTPAPER },
		{ "TileType::FILLER", (int64)TileType::FILLER },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Automafarm_TileType_Statics::Enum_MetaDataParams[] = {
		{ "BLOCK.DisplayName", "Block" },
		{ "BLOCK.Name", "TileType::BLOCK" },
		{ "BlueprintType", "true" },
		{ "FILLER.DisplayName", "Filler" },
		{ "FILLER.Name", "TileType::FILLER" },
		{ "ModuleRelativePath", "Public/TileHolder.h" },
		{ "PIVOTPAPER.DisplayName", "PivotPaper" },
		{ "PIVOTPAPER.Name", "TileType::PIVOTPAPER" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Automafarm_TileType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Automafarm,
		nullptr,
		"TileType",
		"TileType",
		Z_Construct_UEnum_Automafarm_TileType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Automafarm_TileType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Automafarm_TileType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Automafarm_TileType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Automafarm_TileType()
	{
		if (!Z_Registration_Info_UEnum_TileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TileType.InnerSingleton, Z_Construct_UEnum_Automafarm_TileType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_TileType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_Statics::EnumInfo[] = {
		{ TileType_StaticEnum, TEXT("TileType"), &Z_Registration_Info_UEnum_TileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3070822559U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTileHolder, UTileHolder::StaticClass, TEXT("UTileHolder"), &Z_Registration_Info_UClass_UTileHolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileHolder), 2024094345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_1693842038(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
