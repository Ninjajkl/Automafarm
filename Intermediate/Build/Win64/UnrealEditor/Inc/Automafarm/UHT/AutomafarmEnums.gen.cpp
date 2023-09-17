// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Library/AutomafarmEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomafarmEnums() {}
// Cross Module References
	AUTOMAFARM_API UEnum* Z_Construct_UEnum_Automafarm_ETileType();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETileType;
	static UEnum* ETileType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETileType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Automafarm_ETileType, (UObject*)Z_Construct_UPackage__Script_Automafarm(), TEXT("ETileType"));
		}
		return Z_Registration_Info_UEnum_ETileType.OuterSingleton;
	}
	template<> AUTOMAFARM_API UEnum* StaticEnum<ETileType>()
	{
		return ETileType_StaticEnum();
	}
	struct Z_Construct_UEnum_Automafarm_ETileType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Automafarm_ETileType_Statics::Enumerators[] = {
		{ "ETileType::BASEBLOCK", (int64)ETileType::BASEBLOCK },
		{ "ETileType::INTERACTABLEBLOCK", (int64)ETileType::INTERACTABLEBLOCK },
		{ "ETileType::PIVOTPAPER", (int64)ETileType::PIVOTPAPER },
		{ "ETileType::REFERENCER", (int64)ETileType::REFERENCER },
		{ "ETileType::DEFAULT", (int64)ETileType::DEFAULT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Automafarm_ETileType_Statics::Enum_MetaDataParams[] = {
		{ "BASEBLOCK.DisplayName", "BaseBlock" },
		{ "BASEBLOCK.Name", "ETileType::BASEBLOCK" },
		{ "BlueprintType", "true" },
		{ "DEFAULT.DisplayName", "Default" },
		{ "DEFAULT.Name", "ETileType::DEFAULT" },
		{ "INTERACTABLEBLOCK.DisplayName", "InteractableBlock" },
		{ "INTERACTABLEBLOCK.Name", "ETileType::INTERACTABLEBLOCK" },
		{ "ModuleRelativePath", "Public/Library/AutomafarmEnums.h" },
		{ "PIVOTPAPER.DisplayName", "PivotPaper" },
		{ "PIVOTPAPER.Name", "ETileType::PIVOTPAPER" },
		{ "REFERENCER.DisplayName", "Referencer" },
		{ "REFERENCER.Name", "ETileType::REFERENCER" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Automafarm_ETileType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Automafarm,
		nullptr,
		"ETileType",
		"ETileType",
		Z_Construct_UEnum_Automafarm_ETileType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Automafarm_ETileType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Automafarm_ETileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Automafarm_ETileType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Automafarm_ETileType()
	{
		if (!Z_Registration_Info_UEnum_ETileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETileType.InnerSingleton, Z_Construct_UEnum_Automafarm_ETileType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETileType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Library_AutomafarmEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Library_AutomafarmEnums_h_Statics::EnumInfo[] = {
		{ ETileType_StaticEnum, TEXT("ETileType"), &Z_Registration_Info_UEnum_ETileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 789816852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Library_AutomafarmEnums_h_768888367(TEXT("/Script/Automafarm"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Library_AutomafarmEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Library_AutomafarmEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
