// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define PLATFORMER2D_Pickup_generated_h

#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_SPARSE_DATA
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup) \
	NO_API virtual ~APickup();


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_25_PROLOG
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_SPARSE_DATA \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_INCLASS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HLD_Final_Platformer2D_Source_Platformer2D_Pickup_h


#define FOREACH_ENUM_EPICKUPTYPE(op) \
	op(EPickupType::Unknown) \
	op(EPickupType::Coin) \
	op(EPickupType::Mushroom) 

enum class EPickupType : uint8;
template<> struct TIsUEnumClass<EPickupType> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EPickupType>();

#define FOREACH_ENUM_EPICKUPSTATE(op) \
	op(EPickupState::Unknown) \
	op(EPickupState::Spawning) \
	op(EPickupState::Active) 

enum class EPickupState : uint8;
template<> struct TIsUEnumClass<EPickupState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EPickupState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
