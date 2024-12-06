// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/BoomBoom.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoomBoom() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABoomBoom();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ABoomBoom_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemy();
	PLATFORMER2D_API UClass* Z_Construct_UClass_APoofEffect_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AQuestionCircle_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AStarEffect_NoRegister();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EBoomBoomState();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoomBoomState;
	static UEnum* EBoomBoomState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoomBoomState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoomBoomState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EBoomBoomState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EBoomBoomState"));
		}
		return Z_Registration_Info_UEnum_EBoomBoomState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EBoomBoomState>()
	{
		return EBoomBoomState_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EBoomBoomState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EBoomBoomState_Statics::Enumerators[] = {
		{ "EBoomBoomState::Unknown", (int64)EBoomBoomState::Unknown },
		{ "EBoomBoomState::Idle", (int64)EBoomBoomState::Idle },
		{ "EBoomBoomState::Active", (int64)EBoomBoomState::Active },
		{ "EBoomBoomState::Jumping", (int64)EBoomBoomState::Jumping },
		{ "EBoomBoomState::Damaged", (int64)EBoomBoomState::Damaged },
		{ "EBoomBoomState::Dead", (int64)EBoomBoomState::Dead },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EBoomBoomState_Statics::Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EBoomBoomState::Active" },
		{ "BlueprintType", "true" },
		{ "Damaged.DisplayName", "Damaged" },
		{ "Damaged.Name", "EBoomBoomState::Damaged" },
		{ "Dead.DisplayName", "Dead" },
		{ "Dead.Name", "EBoomBoomState::Dead" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EBoomBoomState::Idle" },
		{ "Jumping.DisplayName", "Jumping" },
		{ "Jumping.Name", "EBoomBoomState::Jumping" },
		{ "ModuleRelativePath", "BoomBoom.h" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EBoomBoomState::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EBoomBoomState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EBoomBoomState",
		"EBoomBoomState",
		Z_Construct_UEnum_Platformer2D_EBoomBoomState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBoomBoomState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBoomBoomState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EBoomBoomState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EBoomBoomState()
	{
		if (!Z_Registration_Info_UEnum_EBoomBoomState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoomBoomState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EBoomBoomState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoomBoomState.InnerSingleton;
	}
	DEFINE_FUNCTION(ABoomBoom::execOnBottomOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBottomOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoomBoom::execOnSideOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSideOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoomBoom::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ABoomBoom::StaticRegisterNativesABoomBoom()
	{
		UClass* Class = ABoomBoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBottomOverlap", &ABoomBoom::execOnBottomOverlap },
			{ "OnHit", &ABoomBoom::execOnHit },
			{ "OnSideOverlap", &ABoomBoom::execOnSideOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics
	{
		struct BoomBoom_eventOnBottomOverlap_Parms
		{
			UPrimitiveComponent* OverlapComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnBottomOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OverlapComponent_MetaData), Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OverlapComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnBottomOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnBottomOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnBottomOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BoomBoom_eventOnBottomOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BoomBoom_eventOnBottomOverlap_Parms), &Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnBottomOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OverlapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoomBoom, nullptr, "OnBottomOverlap", nullptr, nullptr, Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::BoomBoom_eventOnBottomOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::BoomBoom_eventOnBottomOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABoomBoom_OnBottomOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoomBoom_OnBottomOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoomBoom_OnHit_Statics
	{
		struct BoomBoom_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoomBoom_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomBoom_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoomBoom_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoomBoom, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_ABoomBoom_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoomBoom_OnHit_Statics::BoomBoom_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoomBoom_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABoomBoom_OnHit_Statics::BoomBoom_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABoomBoom_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoomBoom_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics
	{
		struct BoomBoom_eventOnSideOverlap_Parms
		{
			UPrimitiveComponent* OverlapComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnSideOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OverlapComponent_MetaData), Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OverlapComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnSideOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnSideOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnSideOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BoomBoom_eventOnSideOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BoomBoom_eventOnSideOverlap_Parms), &Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BoomBoom_eventOnSideOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OverlapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoomBoom, nullptr, "OnSideOverlap", nullptr, nullptr, Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::BoomBoom_eventOnSideOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::BoomBoom_eventOnSideOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABoomBoom_OnSideOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoomBoom_OnSideOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoomBoom);
	UClass* Z_Construct_UClass_ABoomBoom_NoRegister()
	{
		return ABoomBoom::StaticClass();
	}
	struct Z_Construct_UClass_ABoomBoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftOverlap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightOverlap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomOverlap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagedFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarEffectTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StarEffectTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoofEffectTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PoofEffectTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestionCircleTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestionCircleTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoomBoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoomBoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoomBoom_OnBottomOverlap, "OnBottomOverlap" }, // 891826367
		{ &Z_Construct_UFunction_ABoomBoom_OnHit, "OnHit" }, // 1270190142
		{ &Z_Construct_UFunction_ABoomBoom_OnSideOverlap, "OnSideOverlap" }, // 1439995007
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomBoom_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BoomBoom.h" },
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomBoom_Statics::NewProp_LeftOverlap_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoomBoom_Statics::NewProp_LeftOverlap = { "LeftOverlap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoomBoom, LeftOverlap), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::NewProp_LeftOverlap_MetaData), Z_Construct_UClass_ABoomBoom_Statics::NewProp_LeftOverlap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomBoom_Statics::NewProp_RightOverlap_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoomBoom_Statics::NewProp_RightOverlap = { "RightOverlap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoomBoom, RightOverlap), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::NewProp_RightOverlap_MetaData), Z_Construct_UClass_ABoomBoom_Statics::NewProp_RightOverlap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomBoom_Statics::NewProp_BottomOverlap_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoomBoom_Statics::NewProp_BottomOverlap = { "BottomOverlap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoomBoom, BottomOverlap), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::NewProp_BottomOverlap_MetaData), Z_Construct_UClass_ABoomBoom_Statics::NewProp_BottomOverlap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomBoom_Statics::NewProp_IdleFlipbook_MetaData[] = {
		{ "Category", "BoomBoom flipbooks" },
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoomBoom_Statics::NewProp_IdleFlipbook = { "IdleFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoomBoom, IdleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::NewProp_IdleFlipbook_MetaData), Z_Construct_UClass_ABoomBoom_Statics::NewProp_IdleFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomBoom_Statics::NewProp_ActiveFlipbook_MetaData[] = {
		{ "Category", "BoomBoom flipbooks" },
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoomBoom_Statics::NewProp_ActiveFlipbook = { "ActiveFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoomBoom, ActiveFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::NewProp_ActiveFlipbook_MetaData), Z_Construct_UClass_ABoomBoom_Statics::NewProp_ActiveFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomBoom_Statics::NewProp_DamagedFlipbook_MetaData[] = {
		{ "Category", "BoomBoom flipbooks" },
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoomBoom_Statics::NewProp_DamagedFlipbook = { "DamagedFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoomBoom, DamagedFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::NewProp_DamagedFlipbook_MetaData), Z_Construct_UClass_ABoomBoom_Statics::NewProp_DamagedFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomBoom_Statics::NewProp_DeadFlipbook_MetaData[] = {
		{ "Category", "BoomBoom flipbooks" },
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoomBoom_Statics::NewProp_DeadFlipbook = { "DeadFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoomBoom, DeadFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::NewProp_DeadFlipbook_MetaData), Z_Construct_UClass_ABoomBoom_Statics::NewProp_DeadFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomBoom_Statics::NewProp_StarEffectTemplate_MetaData[] = {
		{ "Category", "BoomBoom Templates" },
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABoomBoom_Statics::NewProp_StarEffectTemplate = { "StarEffectTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoomBoom, StarEffectTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AStarEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::NewProp_StarEffectTemplate_MetaData), Z_Construct_UClass_ABoomBoom_Statics::NewProp_StarEffectTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomBoom_Statics::NewProp_PoofEffectTemplate_MetaData[] = {
		{ "Category", "BoomBoom Templates" },
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABoomBoom_Statics::NewProp_PoofEffectTemplate = { "PoofEffectTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoomBoom, PoofEffectTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_APoofEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::NewProp_PoofEffectTemplate_MetaData), Z_Construct_UClass_ABoomBoom_Statics::NewProp_PoofEffectTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoomBoom_Statics::NewProp_QuestionCircleTemplate_MetaData[] = {
		{ "Category", "BoomBoom Templates" },
		{ "ModuleRelativePath", "BoomBoom.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABoomBoom_Statics::NewProp_QuestionCircleTemplate = { "QuestionCircleTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoomBoom, QuestionCircleTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_AQuestionCircle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::NewProp_QuestionCircleTemplate_MetaData), Z_Construct_UClass_ABoomBoom_Statics::NewProp_QuestionCircleTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoomBoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoomBoom_Statics::NewProp_LeftOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoomBoom_Statics::NewProp_RightOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoomBoom_Statics::NewProp_BottomOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoomBoom_Statics::NewProp_IdleFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoomBoom_Statics::NewProp_ActiveFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoomBoom_Statics::NewProp_DamagedFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoomBoom_Statics::NewProp_DeadFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoomBoom_Statics::NewProp_StarEffectTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoomBoom_Statics::NewProp_PoofEffectTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoomBoom_Statics::NewProp_QuestionCircleTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoomBoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoomBoom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoomBoom_Statics::ClassParams = {
		&ABoomBoom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoomBoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoomBoom_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoomBoom_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABoomBoom()
	{
		if (!Z_Registration_Info_UClass_ABoomBoom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoomBoom.OuterSingleton, Z_Construct_UClass_ABoomBoom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoomBoom.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<ABoomBoom>()
	{
		return ABoomBoom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoomBoom);
	ABoomBoom::~ABoomBoom() {}
	struct Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BoomBoom_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BoomBoom_h_Statics::EnumInfo[] = {
		{ EBoomBoomState_StaticEnum, TEXT("EBoomBoomState"), &Z_Registration_Info_UEnum_EBoomBoomState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3823728237U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BoomBoom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoomBoom, ABoomBoom::StaticClass, TEXT("ABoomBoom"), &Z_Registration_Info_UClass_ABoomBoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoomBoom), 403983682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BoomBoom_h_2337284406(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BoomBoom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BoomBoom_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BoomBoom_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_BoomBoom_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
