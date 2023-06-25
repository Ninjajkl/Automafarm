// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/PivotPaper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePivotPaper() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPivotPaper();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPivotPaper_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_UPlaceableObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(UPivotPaper::execPlayerMoved)
	{
		P_GET_STRUCT(FVector,Z_Param_PlayerLoc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerMoved(Z_Param_PlayerLoc);
		P_NATIVE_END;
	}
	void UPivotPaper::StaticRegisterNativesUPivotPaper()
	{
		UClass* Class = UPivotPaper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayerMoved", &UPivotPaper::execPlayerMoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPivotPaper_PlayerMoved_Statics
	{
		struct PivotPaper_eventPlayerMoved_Parms
		{
			FVector PlayerLoc;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLoc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPivotPaper_PlayerMoved_Statics::NewProp_PlayerLoc = { "PlayerLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PivotPaper_eventPlayerMoved_Parms, PlayerLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPivotPaper_PlayerMoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPivotPaper_PlayerMoved_Statics::NewProp_PlayerLoc,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPivotPaper_PlayerMoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PivotPaper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPivotPaper_PlayerMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPivotPaper, nullptr, "PlayerMoved", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPivotPaper_PlayerMoved_Statics::PivotPaper_eventPlayerMoved_Parms), Z_Construct_UFunction_UPivotPaper_PlayerMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPivotPaper_PlayerMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPivotPaper_PlayerMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPivotPaper_PlayerMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPivotPaper_PlayerMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPivotPaper_PlayerMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPivotPaper);
	UClass* Z_Construct_UClass_UPivotPaper_NoRegister()
	{
		return UPivotPaper::StaticClass();
	}
	struct Z_Construct_UClass_UPivotPaper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZDAnimComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ZDAnimComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotPaper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlaceableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPivotPaper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPivotPaper_PlayerMoved, "PlayerMoved" }, // 1844034390
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotPaper_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "PivotPaper.h" },
		{ "ModuleRelativePath", "PivotPaper.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotPaper_Statics::NewProp_FlipbookComp_MetaData[] = {
		{ "Category", "PivotPaper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PivotPaper.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPivotPaper_Statics::NewProp_FlipbookComp = { "FlipbookComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPivotPaper, FlipbookComp), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotPaper_Statics::NewProp_FlipbookComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotPaper_Statics::NewProp_FlipbookComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotPaper_Statics::NewProp_ZDAnimComp_MetaData[] = {
		{ "Category", "PivotPaper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PivotPaper.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPivotPaper_Statics::NewProp_ZDAnimComp = { "ZDAnimComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPivotPaper, ZDAnimComp), Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotPaper_Statics::NewProp_ZDAnimComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotPaper_Statics::NewProp_ZDAnimComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPivotPaper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotPaper_Statics::NewProp_FlipbookComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotPaper_Statics::NewProp_ZDAnimComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotPaper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotPaper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPivotPaper_Statics::ClassParams = {
		&UPivotPaper::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPivotPaper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPivotPaper_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotPaper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotPaper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotPaper()
	{
		if (!Z_Registration_Info_UClass_UPivotPaper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPivotPaper.OuterSingleton, Z_Construct_UClass_UPivotPaper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPivotPaper.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<UPivotPaper>()
	{
		return UPivotPaper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotPaper);
	UPivotPaper::~UPivotPaper() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_PivotPaper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_PivotPaper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPivotPaper, UPivotPaper::StaticClass, TEXT("UPivotPaper"), &Z_Registration_Info_UClass_UPivotPaper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPivotPaper), 3169366800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_PivotPaper_h_2667110322(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_PivotPaper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_PivotPaper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
