// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Boo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_Boo_generated_h
#error "Boo.generated.h already included, missing '#pragma once' in Boo.h"
#endif
#define PLATFORMER2D_Boo_generated_h

#define FID_Platformer2D_Source_Platformer2D_Boo_h_30_SPARSE_DATA
#define FID_Platformer2D_Source_Platformer2D_Boo_h_30_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_Boo_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_Boo_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Platformer2D_Source_Platformer2D_Boo_h_30_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_Boo_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoo(); \
	friend struct Z_Construct_UClass_ABoo_Statics; \
public: \
	DECLARE_CLASS(ABoo, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ABoo)


#define FID_Platformer2D_Source_Platformer2D_Boo_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoo(ABoo&&); \
	NO_API ABoo(const ABoo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoo) \
	NO_API virtual ~ABoo();


#define FID_Platformer2D_Source_Platformer2D_Boo_h_27_PROLOG
#define FID_Platformer2D_Source_Platformer2D_Boo_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer2D_Source_Platformer2D_Boo_h_30_SPARSE_DATA \
	FID_Platformer2D_Source_Platformer2D_Boo_h_30_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_Boo_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_Boo_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_Boo_h_30_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_Boo_h_30_INCLASS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_Boo_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ABoo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer2D_Source_Platformer2D_Boo_h


#define FOREACH_ENUM_EBOOSTATE(op) \
	op(EBooState::Unknown) \
	op(EBooState::Active) \
	op(EBooState::Hiding) 

enum class EBooState : uint8;
template<> struct TIsUEnumClass<EBooState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EBooState>();

#define FOREACH_ENUM_EBOODIRECTION(op) \
	op(EBooDirection::Left) \
	op(EBooDirection::Right) 

enum class EBooDirection : uint8;
template<> struct TIsUEnumClass<EBooDirection> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EBooDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
