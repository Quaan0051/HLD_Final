// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrapDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_TrapDoor_generated_h
#error "TrapDoor.generated.h already included, missing '#pragma once' in TrapDoor.h"
#endif
#define PLATFORMER2D_TrapDoor_generated_h

#define FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_SPARSE_DATA
#define FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrapDoor(); \
	friend struct Z_Construct_UClass_ATrapDoor_Statics; \
public: \
	DECLARE_CLASS(ATrapDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ATrapDoor)


#define FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrapDoor(ATrapDoor&&); \
	NO_API ATrapDoor(const ATrapDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrapDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrapDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrapDoor) \
	NO_API virtual ~ATrapDoor();


#define FID_Platformer2D_Source_Platformer2D_TrapDoor_h_18_PROLOG
#define FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_SPARSE_DATA \
	FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_TrapDoor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ATrapDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer2D_Source_Platformer2D_TrapDoor_h


#define FOREACH_ENUM_ETRAPDOORSTATE(op) \
	op(ETrapDoorState::Unknown) \
	op(ETrapDoorState::Open) \
	op(ETrapDoorState::Falling) \
	op(ETrapDoorState::Closed) 

enum class ETrapDoorState : uint8;
template<> struct TIsUEnumClass<ETrapDoorState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<ETrapDoorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
