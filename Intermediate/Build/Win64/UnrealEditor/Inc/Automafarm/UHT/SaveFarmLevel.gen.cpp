// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Systems/SaveFarmLevel.h"
#include "Automafarm/Public/Library/SerializableStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveFarmLevel() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_USaveFarmLevel();
	AUTOMAFARM_API UClass* Z_Construct_UClass_USaveFarmLevel_NoRegister();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedBaseBlock();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedCrop();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedInteractableBlock();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedPivotPaper();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedPlayerCharacter();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedPlayerController();
	AUTOMAFARM_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedTimeSystem();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void USaveFarmLevel::StaticRegisterNativesUSaveFarmLevel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveFarmLevel);
	UClass* Z_Construct_UClass_USaveFarmLevel_NoRegister()
	{
		return USaveFarmLevel::StaticClass();
	}
	struct Z_Construct_UClass_USaveFarmLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedBaseBlocks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedBaseBlocks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedBaseBlocks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedPivotPapers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedPivotPapers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedPivotPapers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedCrops_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedCrops_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedCrops;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedInteractableBlocks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedInteractableBlocks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedInteractableBlocks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedTimeSystem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedTimeSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedPlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedPlayerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedPlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveFarmLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveFarmLevel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/SaveFarmLevel.h" },
		{ "ModuleRelativePath", "Public/Systems/SaveFarmLevel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/Systems/SaveFarmLevel.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveFarmLevel, SaveSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SaveSlotName_MetaData), Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SaveSlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/Systems/SaveFarmLevel.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveFarmLevel, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_UserIndex_MetaData), Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_UserIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedBaseBlocks_Inner = { "SerializedBaseBlocks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSerializedBaseBlock, METADATA_PARAMS(0, nullptr) }; // 2568384412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedBaseBlocks_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/Systems/SaveFarmLevel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedBaseBlocks = { "SerializedBaseBlocks", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveFarmLevel, SerializedBaseBlocks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedBaseBlocks_MetaData), Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedBaseBlocks_MetaData) }; // 2568384412
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPivotPapers_Inner = { "SerializedPivotPapers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSerializedPivotPaper, METADATA_PARAMS(0, nullptr) }; // 2195761074
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPivotPapers_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/Systems/SaveFarmLevel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPivotPapers = { "SerializedPivotPapers", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveFarmLevel, SerializedPivotPapers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPivotPapers_MetaData), Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPivotPapers_MetaData) }; // 2195761074
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedCrops_Inner = { "SerializedCrops", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSerializedCrop, METADATA_PARAMS(0, nullptr) }; // 3083438852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedCrops_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/Systems/SaveFarmLevel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedCrops = { "SerializedCrops", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveFarmLevel, SerializedCrops), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedCrops_MetaData), Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedCrops_MetaData) }; // 3083438852
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedInteractableBlocks_Inner = { "SerializedInteractableBlocks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSerializedInteractableBlock, METADATA_PARAMS(0, nullptr) }; // 58458769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedInteractableBlocks_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/Systems/SaveFarmLevel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedInteractableBlocks = { "SerializedInteractableBlocks", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveFarmLevel, SerializedInteractableBlocks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedInteractableBlocks_MetaData), Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedInteractableBlocks_MetaData) }; // 58458769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedTimeSystem_MetaData[] = {
		{ "Category", "TimeSystem" },
		{ "ModuleRelativePath", "Public/Systems/SaveFarmLevel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedTimeSystem = { "SerializedTimeSystem", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveFarmLevel, SerializedTimeSystem), Z_Construct_UScriptStruct_FSerializedTimeSystem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedTimeSystem_MetaData), Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedTimeSystem_MetaData) }; // 900370704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPlayerCharacter_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Systems/SaveFarmLevel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPlayerCharacter = { "SerializedPlayerCharacter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveFarmLevel, SerializedPlayerCharacter), Z_Construct_UScriptStruct_FSerializedPlayerCharacter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPlayerCharacter_MetaData), Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPlayerCharacter_MetaData) }; // 4133676082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPlayerController_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Systems/SaveFarmLevel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPlayerController = { "SerializedPlayerController", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveFarmLevel, SerializedPlayerController), Z_Construct_UScriptStruct_FSerializedPlayerController, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPlayerController_MetaData), Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPlayerController_MetaData) }; // 1514486570
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveFarmLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedBaseBlocks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedBaseBlocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPivotPapers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPivotPapers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedCrops_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedCrops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedInteractableBlocks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedInteractableBlocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedTimeSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPlayerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveFarmLevel_Statics::NewProp_SerializedPlayerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveFarmLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveFarmLevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveFarmLevel_Statics::ClassParams = {
		&USaveFarmLevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveFarmLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveFarmLevel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveFarmLevel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USaveFarmLevel()
	{
		if (!Z_Registration_Info_UClass_USaveFarmLevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveFarmLevel.OuterSingleton, Z_Construct_UClass_USaveFarmLevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveFarmLevel.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<USaveFarmLevel>()
	{
		return USaveFarmLevel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveFarmLevel);
	USaveFarmLevel::~USaveFarmLevel() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Systems_SaveFarmLevel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Systems_SaveFarmLevel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveFarmLevel, USaveFarmLevel::StaticClass, TEXT("USaveFarmLevel"), &Z_Registration_Info_UClass_USaveFarmLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveFarmLevel), 3669485513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Systems_SaveFarmLevel_h_3619196060(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Systems_SaveFarmLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_Source_Automafarm_Public_Systems_SaveFarmLevel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
