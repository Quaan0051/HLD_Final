// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Goomba.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoomba() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemy();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AGoomba();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AGoomba_NoRegister();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EGoombaState();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoombaState;
	static UEnum* EGoombaState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoombaState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoombaState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EGoombaState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EGoombaState"));
		}
		return Z_Registration_Info_UEnum_EGoombaState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EGoombaState>()
	{
		return EGoombaState_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EGoombaState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EGoombaState_Statics::Enumerators[] = {
		{ "EGoombaState::Unknown", (int64)EGoombaState::Unknown },
		{ "EGoombaState::Walking", (int64)EGoombaState::Walking },
		{ "EGoombaState::Squished", (int64)EGoombaState::Squished },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EGoombaState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Goomba.h" },
		{ "Squished.DisplayName", "Squished" },
		{ "Squished.Name", "EGoombaState::Squished" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EGoombaState::Unknown" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "EGoombaState::Walking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EGoombaState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EGoombaState",
		"EGoombaState",
		Z_Construct_UEnum_Platformer2D_EGoombaState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EGoombaState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EGoombaState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EGoombaState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EGoombaState()
	{
		if (!Z_Registration_Info_UEnum_EGoombaState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoombaState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EGoombaState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoombaState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGoombaInitialDirection;
	static UEnum* EGoombaInitialDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGoombaInitialDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGoombaInitialDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EGoombaInitialDirection"));
		}
		return Z_Registration_Info_UEnum_EGoombaInitialDirection.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EGoombaInitialDirection>()
	{
		return EGoombaInitialDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection_Statics::Enumerators[] = {
		{ "EGoombaInitialDirection::Random", (int64)EGoombaInitialDirection::Random },
		{ "EGoombaInitialDirection::Left", (int64)EGoombaInitialDirection::Left },
		{ "EGoombaInitialDirection::Right", (int64)EGoombaInitialDirection::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EGoombaInitialDirection::Left" },
		{ "ModuleRelativePath", "Goomba.h" },
		{ "Random.DisplayName", "Random" },
		{ "Random.Name", "EGoombaInitialDirection::Random" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EGoombaInitialDirection::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EGoombaInitialDirection",
		"EGoombaInitialDirection",
		Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection()
	{
		if (!Z_Registration_Info_UEnum_EGoombaInitialDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGoombaInitialDirection.InnerSingleton, Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGoombaInitialDirection.InnerSingleton;
	}
	DEFINE_FUNCTION(AGoomba::execOnHit)
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
	DEFINE_FUNCTION(AGoomba::execOnBackwardOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackwardOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGoomba::execOnForwardOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnForwardOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AGoomba::StaticRegisterNativesAGoomba()
	{
		UClass* Class = AGoomba::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackwardOverlap", &AGoomba::execOnBackwardOverlap },
			{ "OnForwardOverlap", &AGoomba::execOnForwardOverlap },
			{ "OnHit", &AGoomba::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics
	{
		struct Goomba_eventOnBackwardOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnBackwardOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OverlapComponent_MetaData), Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OverlapComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnBackwardOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnBackwardOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnBackwardOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Goomba_eventOnBackwardOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Goomba_eventOnBackwardOverlap_Parms), &Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnBackwardOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OverlapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goomba.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoomba, nullptr, "OnBackwardOverlap", nullptr, nullptr, Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::Goomba_eventOnBackwardOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::Goomba_eventOnBackwardOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGoomba_OnBackwardOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoomba_OnBackwardOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics
	{
		struct Goomba_eventOnForwardOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnForwardOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OverlapComponent_MetaData), Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OverlapComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnForwardOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnForwardOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnForwardOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Goomba_eventOnForwardOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Goomba_eventOnForwardOverlap_Parms), &Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnForwardOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OverlapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goomba.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoomba, nullptr, "OnForwardOverlap", nullptr, nullptr, Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::Goomba_eventOnForwardOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::Goomba_eventOnForwardOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGoomba_OnForwardOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoomba_OnForwardOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoomba_OnHit_Statics
	{
		struct Goomba_eventOnHit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Goomba_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoomba_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoomba_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoomba_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Goomba.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoomba_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoomba, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_AGoomba_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoomba_OnHit_Statics::Goomba_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoomba_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoomba_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGoomba_OnHit_Statics::Goomba_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGoomba_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoomba_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoomba);
	UClass* Z_Construct_UClass_AGoomba_NoRegister()
	{
		return AGoomba::StaticClass();
	}
	struct Z_Construct_UClass_AGoomba_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitialDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontOverlap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackOverlap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkingFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkingFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SquishedFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SquishedFlipbook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoomba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoomba_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGoomba_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGoomba_OnBackwardOverlap, "OnBackwardOverlap" }, // 2713210428
		{ &Z_Construct_UFunction_AGoomba_OnForwardOverlap, "OnForwardOverlap" }, // 1459722017
		{ &Z_Construct_UFunction_AGoomba_OnHit, "OnHit" }, // 1620962798
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoomba_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoomba_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Goomba.h" },
		{ "ModuleRelativePath", "Goomba.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGoomba_Statics::NewProp_InitialDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoomba_Statics::NewProp_InitialDirection_MetaData[] = {
		{ "Category", "Direction" },
		{ "ModuleRelativePath", "Goomba.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGoomba_Statics::NewProp_InitialDirection = { "InitialDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoomba, InitialDirection), Z_Construct_UEnum_Platformer2D_EGoombaInitialDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoomba_Statics::NewProp_InitialDirection_MetaData), Z_Construct_UClass_AGoomba_Statics::NewProp_InitialDirection_MetaData) }; // 2849166029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoomba_Statics::NewProp_FrontOverlap_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goomba.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoomba_Statics::NewProp_FrontOverlap = { "FrontOverlap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoomba, FrontOverlap), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoomba_Statics::NewProp_FrontOverlap_MetaData), Z_Construct_UClass_AGoomba_Statics::NewProp_FrontOverlap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoomba_Statics::NewProp_BackOverlap_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Goomba.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoomba_Statics::NewProp_BackOverlap = { "BackOverlap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoomba, BackOverlap), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoomba_Statics::NewProp_BackOverlap_MetaData), Z_Construct_UClass_AGoomba_Statics::NewProp_BackOverlap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoomba_Statics::NewProp_WalkingFlipbook_MetaData[] = {
		{ "Category", "Goomba flipbooks" },
		{ "ModuleRelativePath", "Goomba.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoomba_Statics::NewProp_WalkingFlipbook = { "WalkingFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoomba, WalkingFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoomba_Statics::NewProp_WalkingFlipbook_MetaData), Z_Construct_UClass_AGoomba_Statics::NewProp_WalkingFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoomba_Statics::NewProp_SquishedFlipbook_MetaData[] = {
		{ "Category", "Goomba flipbooks" },
		{ "ModuleRelativePath", "Goomba.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoomba_Statics::NewProp_SquishedFlipbook = { "SquishedFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoomba, SquishedFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoomba_Statics::NewProp_SquishedFlipbook_MetaData), Z_Construct_UClass_AGoomba_Statics::NewProp_SquishedFlipbook_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoomba_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoomba_Statics::NewProp_InitialDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoomba_Statics::NewProp_InitialDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoomba_Statics::NewProp_FrontOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoomba_Statics::NewProp_BackOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoomba_Statics::NewProp_WalkingFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoomba_Statics::NewProp_SquishedFlipbook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoomba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoomba>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoomba_Statics::ClassParams = {
		&AGoomba::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGoomba_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGoomba_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoomba_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoomba_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoomba_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGoomba()
	{
		if (!Z_Registration_Info_UClass_AGoomba.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoomba.OuterSingleton, Z_Construct_UClass_AGoomba_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGoomba.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AGoomba>()
	{
		return AGoomba::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoomba);
	AGoomba::~AGoomba() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_Statics::EnumInfo[] = {
		{ EGoombaState_StaticEnum, TEXT("EGoombaState"), &Z_Registration_Info_UEnum_EGoombaState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3376966145U) },
		{ EGoombaInitialDirection_StaticEnum, TEXT("EGoombaInitialDirection"), &Z_Registration_Info_UEnum_EGoombaInitialDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2849166029U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGoomba, AGoomba::StaticClass, TEXT("AGoomba"), &Z_Registration_Info_UClass_AGoomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoomba), 4243989700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_481308122(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_Goomba_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
