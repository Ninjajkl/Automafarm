// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/Public/Game/FarmGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmGameStateBase() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_AFarmGameStateBase();
	AUTOMAFARM_API UClass* Z_Construct_UClass_AFarmGameStateBase_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APlaceableObject_NoRegister();
	AUTOMAFARM_API UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature_Statics
	{
		struct _Script_Automafarm_eventKFOnHourPassed_Parms
		{
			FTimespan GameTimePassed;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameTimePassed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature_Statics::NewProp_GameTimePassed = { "GameTimePassed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Automafarm_eventKFOnHourPassed_Parms, GameTimePassed), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature_Statics::NewProp_GameTimePassed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/FarmGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Automafarm, nullptr, "KFOnHourPassed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature_Statics::_Script_Automafarm_eventKFOnHourPassed_Parms), Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FKFOnHourPassed_DelegateWrapper(const FMulticastScriptDelegate& KFOnHourPassed, FTimespan GameTimePassed)
{
	struct _Script_Automafarm_eventKFOnHourPassed_Parms
	{
		FTimespan GameTimePassed;
	};
	_Script_Automafarm_eventKFOnHourPassed_Parms Parms;
	Parms.GameTimePassed=GameTimePassed;
	KFOnHourPassed.ProcessMulticastDelegate<UObject>(&Parms);
}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHourPassed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHourPassed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LevelMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedObjectMap_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InstancedObjectMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedObjectMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InstancedObjectMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameTimeSpan_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameTimeSpan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingHour_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StartingHour;
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
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/FarmGameStateBase.h" },
		{ "ModuleRelativePath", "Public/Game/FarmGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_OnHourPassed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/FarmGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_OnHourPassed = { "OnHourPassed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFarmGameStateBase, OnHourPassed), Z_Construct_UDelegateFunction_Automafarm_KFOnHourPassed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_OnHourPassed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_OnHourPassed_MetaData)) }; // 3578227962
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_ValueProp = { "LevelMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_APlaceableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_Key_KeyProp = { "LevelMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_MetaData[] = {
		{ "Category", "Terrain" },
		{ "Comment", "//Terrain Properties and Functions\n" },
		{ "ModuleRelativePath", "Public/Game/FarmGameStateBase.h" },
		{ "ToolTip", "Terrain Properties and Functions" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap = { "LevelMap", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFarmGameStateBase, LevelMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_ValueProp = { "InstancedObjectMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_APlaceableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_Key_KeyProp = { "InstancedObjectMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APlaceableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/Game/FarmGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap = { "InstancedObjectMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFarmGameStateBase, InstancedObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_GameTimeSpan_MetaData[] = {
		{ "Category", "TimeSystem" },
		{ "Comment", "//Time System Properties and Functions\n" },
		{ "ModuleRelativePath", "Public/Game/FarmGameStateBase.h" },
		{ "ToolTip", "Time System Properties and Functions" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_GameTimeSpan = { "GameTimeSpan", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFarmGameStateBase, GameTimeSpan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_GameTimeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_GameTimeSpan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_TimeMultiplier_MetaData[] = {
		{ "Category", "TimeSystem" },
		{ "ModuleRelativePath", "Public/Game/FarmGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_TimeMultiplier = { "TimeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFarmGameStateBase, TimeMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_TimeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_TimeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_StartingHour_MetaData[] = {
		{ "Category", "TimeSystem" },
		{ "ModuleRelativePath", "Public/Game/FarmGameStateBase.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_StartingHour = { "StartingHour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFarmGameStateBase, StartingHour), METADATA_PARAMS(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_StartingHour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_StartingHour_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFarmGameStateBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_OnHourPassed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_LevelMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_InstancedObjectMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_GameTimeSpan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_TimeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmGameStateBase_Statics::NewProp_StartingHour,
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
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Game_FarmGameStateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Game_FarmGameStateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFarmGameStateBase, AFarmGameStateBase::StaticClass, TEXT("AFarmGameStateBase"), &Z_Registration_Info_UClass_AFarmGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFarmGameStateBase), 658755938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Game_FarmGameStateBase_h_2466256370(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Game_FarmGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_Public_Game_FarmGameStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
