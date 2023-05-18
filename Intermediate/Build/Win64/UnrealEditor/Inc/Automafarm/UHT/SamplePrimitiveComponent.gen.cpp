// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Automafarm/SamplePrimitiveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSamplePrimitiveComponent() {}
// Cross Module References
	AUTOMAFARM_API UClass* Z_Construct_UClass_USamplePrimitiveComponent();
	AUTOMAFARM_API UClass* Z_Construct_UClass_USamplePrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Automafarm();
// End Cross Module References
	void USamplePrimitiveComponent::StaticRegisterNativesUSamplePrimitiveComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USamplePrimitiveComponent);
	UClass* Z_Construct_UClass_USamplePrimitiveComponent_NoRegister()
	{
		return USamplePrimitiveComponent::StaticClass();
	}
	struct Z_Construct_UClass_USamplePrimitiveComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USamplePrimitiveComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Automafarm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USamplePrimitiveComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SamplePrimitiveComponent.h" },
		{ "ModuleRelativePath", "SamplePrimitiveComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USamplePrimitiveComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USamplePrimitiveComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USamplePrimitiveComponent_Statics::ClassParams = {
		&USamplePrimitiveComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USamplePrimitiveComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USamplePrimitiveComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USamplePrimitiveComponent()
	{
		if (!Z_Registration_Info_UClass_USamplePrimitiveComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USamplePrimitiveComponent.OuterSingleton, Z_Construct_UClass_USamplePrimitiveComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USamplePrimitiveComponent.OuterSingleton;
	}
	template<> AUTOMAFARM_API UClass* StaticClass<USamplePrimitiveComponent>()
	{
		return USamplePrimitiveComponent::StaticClass();
	}
	USamplePrimitiveComponent::USamplePrimitiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USamplePrimitiveComponent);
	USamplePrimitiveComponent::~USamplePrimitiveComponent() {}
	struct Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_SamplePrimitiveComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_SamplePrimitiveComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USamplePrimitiveComponent, USamplePrimitiveComponent::StaticClass, TEXT("USamplePrimitiveComponent"), &Z_Registration_Info_UClass_USamplePrimitiveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USamplePrimitiveComponent), 3908033534U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_SamplePrimitiveComponent_h_801052862(TEXT("/Script/Automafarm"),
		Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_SamplePrimitiveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Automafarm_5_2_Source_Automafarm_SamplePrimitiveComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
