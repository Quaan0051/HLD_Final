// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SecretDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PLATFORMER2D_SecretDoor_generated_h
#error "SecretDoor.generated.h already included, missing '#pragma once' in SecretDoor.h"
#endif
#define PLATFORMER2D_SecretDoor_generated_h

#define FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_SPARSE_DATA
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASecretDoor(); \
	friend struct Z_Construct_UClass_ASecretDoor_Statics; \
public: \
	DECLARE_CLASS(ASecretDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(ASecretDoor)


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASecretDoor(ASecretDoor&&); \
	NO_API ASecretDoor(const ASecretDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASecretDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASecretDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASecretDoor) \
	NO_API virtual ~ASecretDoor();


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_17_PROLOG
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_SPARSE_DATA \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_INCLASS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class ASecretDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h


#define FOREACH_ENUM_ESECRETDOORSTATE(op) \
	op(ESecretDoorState::Unknown) \
	op(ESecretDoorState::Visible) \
	op(ESecretDoorState::Hidden) 

enum class ESecretDoorState : uint8;
template<> struct TIsUEnumClass<ESecretDoorState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<ESecretDoorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
