// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PiranhaPlant.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_PiranhaPlant_generated_h
#error "PiranhaPlant.generated.h already included, missing '#pragma once' in PiranhaPlant.h"
#endif
#define PLATFORMER2D_PiranhaPlant_generated_h

#define FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_SPARSE_DATA
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_ACCESSORS
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPiranhaPlant(); \
	friend struct Z_Construct_UClass_APiranhaPlant_Statics; \
public: \
	DECLARE_CLASS(APiranhaPlant, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(APiranhaPlant)


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APiranhaPlant(APiranhaPlant&&); \
	NO_API APiranhaPlant(const APiranhaPlant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APiranhaPlant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APiranhaPlant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APiranhaPlant) \
	NO_API virtual ~APiranhaPlant();


#define FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_22_PROLOG
#define FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_SPARSE_DATA \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_ACCESSORS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_INCLASS_NO_PURE_DECLS \
	FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class APiranhaPlant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HLD_Final_Platformer2D_Source_Platformer2D_PiranhaPlant_h


#define FOREACH_ENUM_EPIRANHAPLANTSTATE(op) \
	op(EPiranhaPlantState::Unknown) \
	op(EPiranhaPlantState::Hiding) \
	op(EPiranhaPlantState::AnimatingUp) \
	op(EPiranhaPlantState::Active) \
	op(EPiranhaPlantState::AnimatingDown) 

enum class EPiranhaPlantState : uint8;
template<> struct TIsUEnumClass<EPiranhaPlantState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EPiranhaPlantState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
