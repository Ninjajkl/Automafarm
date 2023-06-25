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
	AUTOMAFARM_API UClass* Z_Construct_UClass_UBaseBlock_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPivotPaper_NoRegister();
	AUTOMAFARM_API UEnum* Z_Construct_UEnum_Automafarm_ETileType();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FTileHolder();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TileHolder;
class UScriptStruct* FTileHolder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TileHolder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TileHolder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileHolder, (UObject*)Z_Construct_UPackage__Script_Automafarm(), TEXT("TileHolder"));
	}
	return Z_Registration_Info_UScriptStruct_TileHolder.OuterSingleton;
}
template<> AUTOMAFARM_API UScriptStruct* StaticStruct<FTileHolder>()
{
	return FTileHolder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTileHolder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TileType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TileType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoreBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CoreBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorePivotPaper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CorePivotPaper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileHolder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/TileHolder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileHolder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileHolder>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_TileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_TileType_MetaData[] = {
		{ "Category", "TileHolder" },
		{ "Comment", "//Defaults to PivotPaper\n" },
		{ "ModuleRelativePath", "Public/TileHolder.h" },
		{ "ToolTip", "Defaults to PivotPaper" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileHolder, TileType), Z_Construct_UEnum_Automafarm_ETileType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_TileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_TileType_MetaData)) }; // 3146826733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_CoreBlock_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TileHolder.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_CoreBlock = { "CoreBlock", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileHolder, CoreBlock), Z_Construct_UClass_UBaseBlock_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_CoreBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_CoreBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_CorePivotPaper_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TileHolder.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_CorePivotPaper = { "CorePivotPaper", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileHolder, CorePivotPaper), Z_Construct_UClass_UPivotPaper_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_CorePivotPaper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_CorePivotPaper_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileHolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_TileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_TileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_CoreBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileHolder_Statics::NewProp_CorePivotPaper,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileHolder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
		nullptr,
		&NewStructOps,
		"TileHolder",
		sizeof(FTileHolder),
		alignof(FTileHolder),
		Z_Construct_UScriptStruct_FTileHolder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileHolder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTileHolder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileHolder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTileHolder()
	{
		if (!Z_Registration_Info_UScriptStruct_TileHolder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TileHolder.InnerSingleton, Z_Construct_UScriptStruct_FTileHolder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TileHolder.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_Statics::ScriptStructInfo[] = {
		{ FTileHolder::StaticStruct, Z_Construct_UScriptStruct_FTileHolder_Statics::NewStructOps, TEXT("TileHolder"), &Z_Registration_Info_UScriptStruct_TileHolder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileHolder), 2260507822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_2139562629(TEXT("/Script/Automafarm"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
