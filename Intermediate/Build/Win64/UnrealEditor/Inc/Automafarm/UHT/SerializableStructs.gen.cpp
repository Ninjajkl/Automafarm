// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Library/SerializableStructs.h"
#include "../../Source/Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerializableStructs() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_ABaseBlock_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_AInteractableBlock_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APivotPaper_NoRegister();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedBaseBlock();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedInteractableBlock();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedPivotPaper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SerializedBaseBlock;
class UScriptStruct* FSerializedBaseBlock::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SerializedBaseBlock.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SerializedBaseBlock.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSerializedBaseBlock, (UObject*)Z_Construct_UPackage__Script_Automafarm(), TEXT("SerializedBaseBlock"));
	}
	return Z_Registration_Info_UScriptStruct_SerializedBaseBlock.OuterSingleton;
}
template<> AUTOMAFARM_API UScriptStruct* StaticStruct<FSerializedBaseBlock>()
{
	return FSerializedBaseBlock::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlockClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerInstanceSMData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSMData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSMData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSerializedBaseBlock>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_BlockClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_BlockClass = { "BlockClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedBaseBlock, BlockClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseBlock_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_BlockClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_BlockClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedBaseBlock, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_PerInstanceSMData_Inner = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, METADATA_PARAMS(nullptr, 0) }; // 1322225863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_PerInstanceSMData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_PerInstanceSMData = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedBaseBlock, PerInstanceSMData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_PerInstanceSMData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_PerInstanceSMData_MetaData)) }; // 1322225863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_BlockClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_PerInstanceSMData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_PerInstanceSMData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
		nullptr,
		&NewStructOps,
		"SerializedBaseBlock",
		sizeof(FSerializedBaseBlock),
		alignof(FSerializedBaseBlock),
		Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSerializedBaseBlock()
	{
		if (!Z_Registration_Info_UScriptStruct_SerializedBaseBlock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SerializedBaseBlock.InnerSingleton, Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SerializedBaseBlock.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SerializedPivotPaper;
class UScriptStruct* FSerializedPivotPaper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SerializedPivotPaper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SerializedPivotPaper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSerializedPivotPaper, (UObject*)Z_Construct_UPackage__Script_Automafarm(), TEXT("SerializedPivotPaper"));
	}
	return Z_Registration_Info_UScriptStruct_SerializedPivotPaper.OuterSingleton;
}
template<> AUTOMAFARM_API UScriptStruct* StaticStruct<FSerializedPivotPaper>()
{
	return FSerializedPivotPaper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotPaperClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PivotPaperClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSerializedPivotPaper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_PivotPaperClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_PivotPaperClass = { "PivotPaperClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedPivotPaper, PivotPaperClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APivotPaper_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_PivotPaperClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_PivotPaperClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedPivotPaper, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_PivotPaperClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
		nullptr,
		&NewStructOps,
		"SerializedPivotPaper",
		sizeof(FSerializedPivotPaper),
		alignof(FSerializedPivotPaper),
		Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSerializedPivotPaper()
	{
		if (!Z_Registration_Info_UScriptStruct_SerializedPivotPaper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SerializedPivotPaper.InnerSingleton, Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SerializedPivotPaper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SerializedInteractableBlock;
class UScriptStruct* FSerializedInteractableBlock::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SerializedInteractableBlock.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SerializedInteractableBlock.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSerializedInteractableBlock, (UObject*)Z_Construct_UPackage__Script_Automafarm(), TEXT("SerializedInteractableBlock"));
	}
	return Z_Registration_Info_UScriptStruct_SerializedInteractableBlock.OuterSingleton;
}
template<> AUTOMAFARM_API UScriptStruct* StaticStruct<FSerializedInteractableBlock>()
{
	return FSerializedInteractableBlock::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotPaperClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PivotPaperClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSerializedInteractableBlock>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_PivotPaperClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_PivotPaperClass = { "PivotPaperClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedInteractableBlock, PivotPaperClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AInteractableBlock_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_PivotPaperClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_PivotPaperClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedInteractableBlock, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Transform_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//    UInventory Inventory;\n" },
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
		{ "ToolTip", "UPROPERTY()\n    UInventory Inventory;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedInteractableBlock, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_PivotPaperClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
		nullptr,
		&NewStructOps,
		"SerializedInteractableBlock",
		sizeof(FSerializedInteractableBlock),
		alignof(FSerializedInteractableBlock),
		Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSerializedInteractableBlock()
	{
		if (!Z_Registration_Info_UScriptStruct_SerializedInteractableBlock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SerializedInteractableBlock.InnerSingleton, Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SerializedInteractableBlock.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Library_SerializableStructs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Library_SerializableStructs_h_Statics::ScriptStructInfo[] = {
		{ FSerializedBaseBlock::StaticStruct, Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewStructOps, TEXT("SerializedBaseBlock"), &Z_Registration_Info_UScriptStruct_SerializedBaseBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSerializedBaseBlock), 2118142969U) },
		{ FSerializedPivotPaper::StaticStruct, Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewStructOps, TEXT("SerializedPivotPaper"), &Z_Registration_Info_UScriptStruct_SerializedPivotPaper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSerializedPivotPaper), 2155699367U) },
		{ FSerializedInteractableBlock::StaticStruct, Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewStructOps, TEXT("SerializedInteractableBlock"), &Z_Registration_Info_UScriptStruct_SerializedInteractableBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSerializedInteractableBlock), 2519003881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Library_SerializableStructs_h_1729464903(TEXT("/Script/Automafarm"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Library_SerializableStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Library_SerializableStructs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
