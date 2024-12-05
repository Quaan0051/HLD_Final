// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Thwomp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_Thwomp_generated_h
#error "Thwomp.generated.h already included, missing '#pragma once' in Thwomp.h"
#endif
#define PLATFORMER2D_Thwomp_generated_h

#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_SPARSE_DATA
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBottomOverlap); \
	DECLARE_FUNCTION(execOnHit);


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThwomp(); \
	friend struct Z_Construct_UClass_AThwomp_Statics; \
public: \
	DECLARE_CLASS(AThwomp, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AThwomp)


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThwomp(AThwomp&&); \
	NO_API AThwomp(const AThwomp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThwomp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThwomp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThwomp) \
	NO_API virtual ~AThwomp();


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_22_PROLOG
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_SPARSE_DATA \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_INCLASS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AThwomp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HLD_Final_Platformer2D_Source_Platformer2D_Thwomp_h


#define FOREACH_ENUM_ETHWOMPSTATE(op) \
	op(EThwompState::Unknown) \
	op(EThwompState::Idle) \
	op(EThwompState::Falling) \
	op(EThwompState::Waiting) \
	op(EThwompState::Rising) 

enum class EThwompState : uint8;
template<> struct TIsUEnumClass<EThwompState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EThwompState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
