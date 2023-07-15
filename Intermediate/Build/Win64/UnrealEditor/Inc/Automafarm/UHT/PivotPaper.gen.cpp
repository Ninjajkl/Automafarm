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
	AUTOMAFARM_API UClass* Z_Construct_UClass_APivotPaper();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APivotPaper_NoRegister();
	AUTOMAFARM_API UClass* Z_Construct_UClass_APlaceableObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	DEFINE_FUNCTION(APivotPaper::execPlayerMoved)
	{
		P_GET_STRUCT(FVector,Z_Param_PlayerLoc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerMoved(Z_Param_PlayerLoc);
		P_NATIVE_END;
	}
	void APivotPaper::StaticRegisterNativesAPivotPaper()
	{
		UClass* Class = APivotPaper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayerMoved", &APivotPaper::execPlayerMoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APivotPaper_PlayerMoved_Statics
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APivotPaper_PlayerMoved_Statics::NewProp_PlayerLoc = { "PlayerLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PivotPaper_eventPlayerMoved_Parms, PlayerLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APivotPaper_PlayerMoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APivotPaper_PlayerMoved_Statics::NewProp_PlayerLoc,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APivotPaper_PlayerMoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PivotPaper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APivotPaper_PlayerMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APivotPaper, nullptr, "PlayerMoved", nullptr, nullptr, sizeof(Z_Construct_UFunction_APivotPaper_PlayerMoved_Statics::PivotPaper_eventPlayerMoved_Parms), Z_Construct_UFunction_APivotPaper_PlayerMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APivotPaper_PlayerMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APivotPaper_PlayerMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APivotPaper_PlayerMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APivotPaper_PlayerMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APivotPaper_PlayerMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APivotPaper);
	UClass* Z_Construct_UClass_APivotPaper_NoRegister()
	{
		return APivotPaper::StaticClass();
	}
	struct Z_Construct_UClass_APivotPaper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APivotPaper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlaceableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APivotPaper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APivotPaper_PlayerMoved, "PlayerMoved" }, // 2760715978
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotPaper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PivotPaper.h" },
		{ "ModuleRelativePath", "PivotPaper.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotPaper_Statics::NewProp_Sprite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PivotPaper.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APivotPaper_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotPaper, Sprite), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotPaper_Statics::NewProp_Sprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotPaper_Statics::NewProp_Sprite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotPaper_Statics::NewProp_AnimationComp_MetaData[] = {
		{ "Category", "PivotPaper" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PivotPaper.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotPaper_Statics::NewProp_AnimationComp = { "AnimationComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotPaper, AnimationComp), Z_Construct_UClass_UPaperZDAnimationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotPaper_Statics::NewProp_AnimationComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotPaper_Statics::NewProp_AnimationComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APivotPaper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotPaper_Statics::NewProp_Sprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotPaper_Statics::NewProp_AnimationComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APivotPaper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APivotPaper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APivotPaper_Statics::ClassParams = {
		&APivotPaper::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APivotPaper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APivotPaper_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APivotPaper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APivotPaper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APivotPaper()
	{
		if (!Z_Registration_Info_UClass_APivotPaper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APivotPaper.OuterSingleton, Z_Construct_UClass_APivotPaper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APivotPaper.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<APivotPaper>()
	{
		return APivotPaper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APivotPaper);
	APivotPaper::~APivotPaper() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_PivotPaper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_PivotPaper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APivotPaper, APivotPaper::StaticClass, TEXT("APivotPaper"), &Z_Registration_Info_UClass_APivotPaper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APivotPaper), 3635856947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_PivotPaper_h_978236318(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_PivotPaper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_PivotPaper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
