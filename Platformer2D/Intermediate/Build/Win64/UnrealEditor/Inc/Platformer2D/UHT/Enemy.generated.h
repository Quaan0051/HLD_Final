// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER2D_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define PLATFORMER2D_Enemy_generated_h

#define FID_Platformer2D_Source_Platformer2D_Enemy_h_21_SPARSE_DATA
#define FID_Platformer2D_Source_Platformer2D_Enemy_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_Enemy_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_Enemy_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Platformer2D_Source_Platformer2D_Enemy_h_21_ACCESSORS
#define FID_Platformer2D_Source_Platformer2D_Enemy_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_Platformer2D_Source_Platformer2D_Enemy_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy) \
	NO_API virtual ~AEnemy();


#define FID_Platformer2D_Source_Platformer2D_Enemy_h_18_PROLOG
#define FID_Platformer2D_Source_Platformer2D_Enemy_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Platformer2D_Source_Platformer2D_Enemy_h_21_SPARSE_DATA \
	FID_Platformer2D_Source_Platformer2D_Enemy_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_Enemy_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_Enemy_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_Enemy_h_21_ACCESSORS \
	FID_Platformer2D_Source_Platformer2D_Enemy_h_21_INCLASS_NO_PURE_DECLS \
	FID_Platformer2D_Source_Platformer2D_Enemy_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER2D_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Platformer2D_Source_Platformer2D_Enemy_h


#define FOREACH_ENUM_EENEMYTYPE(op) \
	op(EEnemyType::Unknown) \
	op(EEnemyType::PiranhaPlant) \
	op(EEnemyType::Goomba) \
	op(EEnemyType::Boo) 

enum class EEnemyType : uint8;
template<> struct TIsUEnumClass<EEnemyType> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EEnemyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
