// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Library/SerializableStructs.h"
#include "../../Source/Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "Automafarm/Public/Library/Structs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerializableStructs() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_ABaseBlock_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_AInteractableBlock_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APivotPaper_NoRegister();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedBaseBlock();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedCrop();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedInteractableBlock();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedInventory();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedPivotPaper();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedPlayerCharacter();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedBaseBlock, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseBlock_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_PerInstanceSMData_Inner = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, METADATA_PARAMS(nullptr, 0) }; // 1322225863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_PerInstanceSMData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_PerInstanceSMData = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedBaseBlock, PerInstanceSMData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_PerInstanceSMData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_PerInstanceSMData_MetaData)) }; // 1322225863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewProp_Class,
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridLocation;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedPivotPaper, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_APivotPaper_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_GridLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_GridLocation = { "GridLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedPivotPaper, GridLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_GridLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_GridLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewProp_GridLocation,
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

static_assert(std::is_polymorphic<FSerializedCrop>() == std::is_polymorphic<FSerializedPivotPaper>(), "USTRUCT FSerializedCrop cannot be polymorphic unless super FSerializedPivotPaper is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SerializedCrop;
class UScriptStruct* FSerializedCrop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SerializedCrop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SerializedCrop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSerializedCrop, (UObject*)Z_Construct_UPackage__Script_Automafarm(), TEXT("SerializedCrop"));
	}
	return Z_Registration_Info_UScriptStruct_SerializedCrop.OuterSingleton;
}
template<> AUTOMAFARM_API UScriptStruct* StaticStruct<FSerializedCrop>()
{
	return FSerializedCrop::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSerializedCrop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropCreationTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CropCreationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropTimespan_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CropTimespan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedCrop_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSerializedCrop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSerializedCrop>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedCrop_Statics::NewProp_CropCreationTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedCrop_Statics::NewProp_CropCreationTime = { "CropCreationTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedCrop, CropCreationTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedCrop_Statics::NewProp_CropCreationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedCrop_Statics::NewProp_CropCreationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedCrop_Statics::NewProp_CropTimespan_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedCrop_Statics::NewProp_CropTimespan = { "CropTimespan", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedCrop, CropTimespan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedCrop_Statics::NewProp_CropTimespan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedCrop_Statics::NewProp_CropTimespan_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializedCrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedCrop_Statics::NewProp_CropCreationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedCrop_Statics::NewProp_CropTimespan,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSerializedCrop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
		Z_Construct_UScriptStruct_FSerializedPivotPaper,
		&NewStructOps,
		"SerializedCrop",
		sizeof(FSerializedCrop),
		alignof(FSerializedCrop),
		Z_Construct_UScriptStruct_FSerializedCrop_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedCrop_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedCrop_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedCrop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSerializedCrop()
	{
		if (!Z_Registration_Info_UScriptStruct_SerializedCrop.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SerializedCrop.InnerSingleton, Z_Construct_UScriptStruct_FSerializedCrop_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SerializedCrop.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SerializedInventory;
class UScriptStruct* FSerializedInventory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SerializedInventory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SerializedInventory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSerializedInventory, (UObject*)Z_Construct_UPackage__Script_Automafarm(), TEXT("SerializedInventory"));
	}
	return Z_Registration_Info_UScriptStruct_SerializedInventory.OuterSingleton;
}
template<> AUTOMAFARM_API UScriptStruct* StaticStruct<FSerializedInventory>()
{
	return FSerializedInventory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSerializedInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumRows_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumRows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCols_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumCols;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Content_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Content_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInventory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSerializedInventory>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_NumRows_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_NumRows = { "NumRows", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedInventory, NumRows), METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_NumRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_NumRows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_NumCols_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_NumCols = { "NumCols", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedInventory, NumCols), METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_NumCols_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_NumCols_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_Content_ValueProp = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSlotStruct, METADATA_PARAMS(nullptr, 0) }; // 2383706676
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_Content_Key_KeyProp = { "Content_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_Content_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedInventory, Content), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_Content_MetaData)) }; // 2383706676
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializedInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_NumRows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_NumCols,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_Content_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_Content_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewProp_Content,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSerializedInventory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
		nullptr,
		&NewStructOps,
		"SerializedInventory",
		sizeof(FSerializedInventory),
		alignof(FSerializedInventory),
		Z_Construct_UScriptStruct_FSerializedInventory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInventory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInventory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInventory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSerializedInventory()
	{
		if (!Z_Registration_Info_UScriptStruct_SerializedInventory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SerializedInventory.InnerSingleton, Z_Construct_UScriptStruct_FSerializedInventory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SerializedInventory.InnerSingleton;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedInventory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridLocation;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedInteractableBlock, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AInteractableBlock_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedInteractableBlock, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_SerializedInventory_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_SerializedInventory = { "SerializedInventory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedInteractableBlock, SerializedInventory), Z_Construct_UScriptStruct_FSerializedInventory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_SerializedInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_SerializedInventory_MetaData)) }; // 1261889015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_GridLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_GridLocation = { "GridLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedInteractableBlock, GridLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_GridLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_GridLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_SerializedInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewProp_GridLocation,
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SerializedPlayerCharacter;
class UScriptStruct* FSerializedPlayerCharacter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SerializedPlayerCharacter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SerializedPlayerCharacter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSerializedPlayerCharacter, (UObject*)Z_Construct_UPackage__Script_Automafarm(), TEXT("SerializedPlayerCharacter"));
	}
	return Z_Registration_Info_UScriptStruct_SerializedPlayerCharacter.OuterSingleton;
}
template<> AUTOMAFARM_API UScriptStruct* StaticStruct<FSerializedPlayerCharacter>()
{
	return FSerializedPlayerCharacter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedInventory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSerializedPlayerCharacter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::NewProp_SerializedInventory_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::NewProp_SerializedInventory = { "SerializedInventory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedPlayerCharacter, SerializedInventory), Z_Construct_UScriptStruct_FSerializedInventory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::NewProp_SerializedInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::NewProp_SerializedInventory_MetaData)) }; // 1261889015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/SerializableStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedPlayerCharacter, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::NewProp_SerializedInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
		nullptr,
		&NewStructOps,
		"SerializedPlayerCharacter",
		sizeof(FSerializedPlayerCharacter),
		alignof(FSerializedPlayerCharacter),
		Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSerializedPlayerCharacter()
	{
		if (!Z_Registration_Info_UScriptStruct_SerializedPlayerCharacter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SerializedPlayerCharacter.InnerSingleton, Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SerializedPlayerCharacter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Library_SerializableStructs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Library_SerializableStructs_h_Statics::ScriptStructInfo[] = {
		{ FSerializedBaseBlock::StaticStruct, Z_Construct_UScriptStruct_FSerializedBaseBlock_Statics::NewStructOps, TEXT("SerializedBaseBlock"), &Z_Registration_Info_UScriptStruct_SerializedBaseBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSerializedBaseBlock), 629812681U) },
		{ FSerializedPivotPaper::StaticStruct, Z_Construct_UScriptStruct_FSerializedPivotPaper_Statics::NewStructOps, TEXT("SerializedPivotPaper"), &Z_Registration_Info_UScriptStruct_SerializedPivotPaper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSerializedPivotPaper), 2142055963U) },
		{ FSerializedCrop::StaticStruct, Z_Construct_UScriptStruct_FSerializedCrop_Statics::NewStructOps, TEXT("SerializedCrop"), &Z_Registration_Info_UScriptStruct_SerializedCrop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSerializedCrop), 1107703144U) },
		{ FSerializedInventory::StaticStruct, Z_Construct_UScriptStruct_FSerializedInventory_Statics::NewStructOps, TEXT("SerializedInventory"), &Z_Registration_Info_UScriptStruct_SerializedInventory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSerializedInventory), 1261889015U) },
		{ FSerializedInteractableBlock::StaticStruct, Z_Construct_UScriptStruct_FSerializedInteractableBlock_Statics::NewStructOps, TEXT("SerializedInteractableBlock"), &Z_Registration_Info_UScriptStruct_SerializedInteractableBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSerializedInteractableBlock), 617781861U) },
		{ FSerializedPlayerCharacter::StaticStruct, Z_Construct_UScriptStruct_FSerializedPlayerCharacter_Statics::NewStructOps, TEXT("SerializedPlayerCharacter"), &Z_Registration_Info_UScriptStruct_SerializedPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSerializedPlayerCharacter), 1158279048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Library_SerializableStructs_h_373611929(TEXT("/Script/Automafarm"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Library_SerializableStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Library_SerializableStructs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
