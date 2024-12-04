// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BreakableBlockBit.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_BreakableBlockBit_generated_h
#error "BreakableBlockBit.generated.h already included, missing '#pragma once' in BreakableBlockBit.h"
#endif
#define PLATFORMER2D_BreakableBlockBit_generated_h

#define FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_SPARSE_DATA
#define FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABreakableBlockBit(); \
	friend struct Z_Construct_UClass_ABreakableBlockBit_Statics; \
public: \
	DECLARE_CLASS(ABreakableBlockBit, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ABreakableBlockBit)


#define FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABreakableBlockBit(ABreakableBlockBit&&); \
	NO_API ABreakableBlockBit(const ABreakableBlockBit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableBlockBit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableBlockBit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABreakableBlockBit) \
	NO_API virtual ~ABreakableBlockBit();


#define FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_18_PROLOG
#define FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_SPARSE_DATA \
	FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_INCLASS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ABreakableBlockBit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer2D_Source_Platformer2D_BreakableBlockBit_h


#define FOREACH_ENUM_EBREAKABLEBLOCKBITTYPE(op) \
	op(EBreakableBlockBitType::Unknown) \
	op(EBreakableBlockBitType::Left) \
	op(EBreakableBlockBitType::Right) 

enum class EBreakableBlockBitType : uint8;
template<> struct TIsUEnumClass<EBreakableBlockBitType> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EBreakableBlockBitType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
