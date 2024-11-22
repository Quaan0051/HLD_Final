// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Goomba.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_Goomba_generated_h
#error "Goomba.generated.h already included, missing '#pragma once' in Goomba.h"
#endif
#define PLATFORMER2D_Goomba_generated_h

#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_SPARSE_DATA
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnBackwardOverlap); \
	DECLARE_FUNCTION(execOnForwardOverlap);


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoomba(); \
	friend struct Z_Construct_UClass_AGoomba_Statics; \
public: \
	DECLARE_CLASS(AGoomba, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AGoomba)


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoomba(AGoomba&&); \
	NO_API AGoomba(const AGoomba&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoomba); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoomba) \
	NO_API virtual ~AGoomba();


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_28_PROLOG
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_SPARSE_DATA \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_INCLASS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AGoomba>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h


#define FOREACH_ENUM_EGOOMBASTATE(op) \
	op(EGoombaState::Unknown) \
	op(EGoombaState::Walking) \
	op(EGoombaState::Squished) 

enum class EGoombaState : uint8;
template<> struct TIsUEnumClass<EGoombaState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EGoombaState>();

#define FOREACH_ENUM_EGOOMBAINITIALDIRECTION(op) \
	op(EGoombaInitialDirection::Random) \
	op(EGoombaInitialDirection::Left) \
	op(EGoombaInitialDirection::Right) 

enum class EGoombaInitialDirection : uint8;
template<> struct TIsUEnumClass<EGoombaInitialDirection> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EGoombaInitialDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
