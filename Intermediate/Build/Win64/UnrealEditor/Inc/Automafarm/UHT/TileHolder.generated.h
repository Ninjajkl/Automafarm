// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TileHolder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMAFARM_TileHolder_generated_h
#error "TileHolder.generated.h already included, missing '#pragma once' in TileHolder.h"
#endif
#define AUTOMAFARM_TileHolder_generated_h

#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_SPARSE_DATA
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_RPC_WRAPPERS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_ACCESSORS
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTileHolder(); \
	friend struct Z_Construct_UClass_UTileHolder_Statics; \
public: \
	DECLARE_CLASS(UTileHolder, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(UTileHolder)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTileHolder(); \
	friend struct Z_Construct_UClass_UTileHolder_Statics; \
public: \
	DECLARE_CLASS(UTileHolder, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Automafarm"), NO_API) \
	DECLARE_SERIALIZER(UTileHolder)


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileHolder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileHolder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileHolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileHolder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileHolder(UTileHolder&&); \
	NO_API UTileHolder(const UTileHolder&); \
public: \
	NO_API virtual ~UTileHolder();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileHolder(UTileHolder&&); \
	NO_API UTileHolder(const UTileHolder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileHolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileHolder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTileHolder) \
	NO_API virtual ~UTileHolder();


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_11_PROLOG
#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_RPC_WRAPPERS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_INCLASS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_SPARSE_DATA \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_ACCESSORS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_INCLASS_NO_PURE_DECLS \
	FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMAFARM_API UClass* StaticClass<class UTileHolder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Automafarm_5_2_Source_Automafarm_Public_TileHolder_h


#define FOREACH_ENUM_TILETYPE(op) \
	op(TileType::BLOCK) \
	op(TileType::PIVOTPAPER) \
	op(TileType::FILLER) 

enum class TileType : uint8;
template<> struct TIsUEnumClass<TileType> { enum { Value = true }; };
template<> AUTOMAFARM_API UEnum* StaticEnum<TileType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
