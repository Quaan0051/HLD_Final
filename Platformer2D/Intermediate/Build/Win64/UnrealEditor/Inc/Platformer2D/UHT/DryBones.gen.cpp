// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/DryBones.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDryBones() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ADryBones();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ADryBones_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemy();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EDryBonesDirection();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EDryBonesState();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDryBonesState;
	static UEnum* EDryBonesState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDryBonesState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDryBonesState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EDryBonesState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EDryBonesState"));
		}
		return Z_Registration_Info_UEnum_EDryBonesState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EDryBonesState>()
	{
		return EDryBonesState_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EDryBonesState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EDryBonesState_Statics::Enumerators[] = {
		{ "EDryBonesState::Unknown", (int64)EDryBonesState::Unknown },
		{ "EDryBonesState::Walking", (int64)EDryBonesState::Walking },
		{ "EDryBonesState::GoingDown", (int64)EDryBonesState::GoingDown },
		{ "EDryBonesState::Downed", (int64)EDryBonesState::Downed },
		{ "EDryBonesState::Stirring", (int64)EDryBonesState::Stirring },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EDryBonesState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Downed.DisplayName", "Downed" },
		{ "Downed.Name", "EDryBonesState::Downed" },
		{ "GoingDown.DisplayName", "GoingDown" },
		{ "GoingDown.Name", "EDryBonesState::GoingDown" },
		{ "ModuleRelativePath", "DryBones.h" },
		{ "Stirring.DisplayName", "Stirring" },
		{ "Stirring.Name", "EDryBonesState::Stirring" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EDryBonesState::Unknown" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "EDryBonesState::Walking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EDryBonesState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EDryBonesState",
		"EDryBonesState",
		Z_Construct_UEnum_Platformer2D_EDryBonesState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EDryBonesState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EDryBonesState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EDryBonesState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EDryBonesState()
	{
		if (!Z_Registration_Info_UEnum_EDryBonesState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDryBonesState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EDryBonesState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDryBonesState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDryBonesDirection;
	static UEnum* EDryBonesDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDryBonesDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDryBonesDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EDryBonesDirection, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EDryBonesDirection"));
		}
		return Z_Registration_Info_UEnum_EDryBonesDirection.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<EDryBonesDirection>()
	{
		return EDryBonesDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_EDryBonesDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_EDryBonesDirection_Statics::Enumerators[] = {
		{ "EDryBonesDirection::Left", (int64)EDryBonesDirection::Left },
		{ "EDryBonesDirection::Right", (int64)EDryBonesDirection::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_EDryBonesDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EDryBonesDirection::Left" },
		{ "ModuleRelativePath", "DryBones.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EDryBonesDirection::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EDryBonesDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"EDryBonesDirection",
		"EDryBonesDirection",
		Z_Construct_UEnum_Platformer2D_EDryBonesDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EDryBonesDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EDryBonesDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EDryBonesDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_EDryBonesDirection()
	{
		if (!Z_Registration_Info_UEnum_EDryBonesDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDryBonesDirection.InnerSingleton, Z_Construct_UEnum_Platformer2D_EDryBonesDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDryBonesDirection.InnerSingleton;
	}
	DEFINE_FUNCTION(ADryBones::execOnHit)
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
	DEFINE_FUNCTION(ADryBones::execOnBackOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADryBones::execOnFrontOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFrontOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ADryBones::StaticRegisterNativesADryBones()
	{
		UClass* Class = ADryBones::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackOverlap", &ADryBones::execOnBackOverlap },
			{ "OnFrontOverlap", &ADryBones::execOnFrontOverlap },
			{ "OnHit", &ADryBones::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics
	{
		struct DryBones_eventOnBackOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnBackOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OverlapComponent_MetaData), Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OverlapComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnBackOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnBackOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnBackOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((DryBones_eventOnBackOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DryBones_eventOnBackOverlap_Parms), &Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnBackOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OverlapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DryBones.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADryBones, nullptr, "OnBackOverlap", nullptr, nullptr, Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::DryBones_eventOnBackOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::DryBones_eventOnBackOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADryBones_OnBackOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADryBones_OnBackOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics
	{
		struct DryBones_eventOnFrontOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnFrontOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OverlapComponent_MetaData), Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OverlapComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnFrontOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnFrontOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnFrontOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((DryBones_eventOnFrontOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DryBones_eventOnFrontOverlap_Parms), &Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnFrontOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OverlapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DryBones.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADryBones, nullptr, "OnFrontOverlap", nullptr, nullptr, Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::DryBones_eventOnFrontOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::DryBones_eventOnFrontOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADryBones_OnFrontOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADryBones_OnFrontOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADryBones_OnHit_Statics
	{
		struct DryBones_eventOnHit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DryBones_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADryBones_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADryBones_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADryBones_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DryBones.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADryBones_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADryBones, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_ADryBones_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADryBones_OnHit_Statics::DryBones_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADryBones_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADryBones_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADryBones_OnHit_Statics::DryBones_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADryBones_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADryBones_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADryBones);
	UClass* Z_Construct_UClass_ADryBones_NoRegister()
	{
		return ADryBones::StaticClass();
	}
	struct Z_Construct_UClass_ADryBones_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DryBonesDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryBonesDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DryBonesDirection;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoingDownFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GoingDownFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownedFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DownedFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StirringFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StirringFlipbook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADryBones_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADryBones_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADryBones_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADryBones_OnBackOverlap, "OnBackOverlap" }, // 3339808317
		{ &Z_Construct_UFunction_ADryBones_OnFrontOverlap, "OnFrontOverlap" }, // 2747564494
		{ &Z_Construct_UFunction_ADryBones_OnHit, "OnHit" }, // 444655522
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADryBones_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADryBones_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DryBones.h" },
		{ "ModuleRelativePath", "DryBones.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADryBones_Statics::NewProp_DryBonesDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADryBones_Statics::NewProp_DryBonesDirection_MetaData[] = {
		{ "Category", "Direction" },
		{ "ModuleRelativePath", "DryBones.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADryBones_Statics::NewProp_DryBonesDirection = { "DryBonesDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADryBones, DryBonesDirection), Z_Construct_UEnum_Platformer2D_EDryBonesDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADryBones_Statics::NewProp_DryBonesDirection_MetaData), Z_Construct_UClass_ADryBones_Statics::NewProp_DryBonesDirection_MetaData) }; // 2923092615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADryBones_Statics::NewProp_FrontOverlap_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DryBones.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADryBones_Statics::NewProp_FrontOverlap = { "FrontOverlap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADryBones, FrontOverlap), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADryBones_Statics::NewProp_FrontOverlap_MetaData), Z_Construct_UClass_ADryBones_Statics::NewProp_FrontOverlap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADryBones_Statics::NewProp_BackOverlap_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DryBones.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADryBones_Statics::NewProp_BackOverlap = { "BackOverlap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADryBones, BackOverlap), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADryBones_Statics::NewProp_BackOverlap_MetaData), Z_Construct_UClass_ADryBones_Statics::NewProp_BackOverlap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADryBones_Statics::NewProp_WalkingFlipbook_MetaData[] = {
		{ "Category", "DryBones flipbooks" },
		{ "ModuleRelativePath", "DryBones.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADryBones_Statics::NewProp_WalkingFlipbook = { "WalkingFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADryBones, WalkingFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADryBones_Statics::NewProp_WalkingFlipbook_MetaData), Z_Construct_UClass_ADryBones_Statics::NewProp_WalkingFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADryBones_Statics::NewProp_GoingDownFlipbook_MetaData[] = {
		{ "Category", "DryBones flipbooks" },
		{ "ModuleRelativePath", "DryBones.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADryBones_Statics::NewProp_GoingDownFlipbook = { "GoingDownFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADryBones, GoingDownFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADryBones_Statics::NewProp_GoingDownFlipbook_MetaData), Z_Construct_UClass_ADryBones_Statics::NewProp_GoingDownFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADryBones_Statics::NewProp_DownedFlipbook_MetaData[] = {
		{ "Category", "DryBones flipbooks" },
		{ "ModuleRelativePath", "DryBones.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADryBones_Statics::NewProp_DownedFlipbook = { "DownedFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADryBones, DownedFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADryBones_Statics::NewProp_DownedFlipbook_MetaData), Z_Construct_UClass_ADryBones_Statics::NewProp_DownedFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADryBones_Statics::NewProp_StirringFlipbook_MetaData[] = {
		{ "Category", "DryBones flipbooks" },
		{ "ModuleRelativePath", "DryBones.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADryBones_Statics::NewProp_StirringFlipbook = { "StirringFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADryBones, StirringFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADryBones_Statics::NewProp_StirringFlipbook_MetaData), Z_Construct_UClass_ADryBones_Statics::NewProp_StirringFlipbook_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADryBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADryBones_Statics::NewProp_DryBonesDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADryBones_Statics::NewProp_DryBonesDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADryBones_Statics::NewProp_FrontOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADryBones_Statics::NewProp_BackOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADryBones_Statics::NewProp_WalkingFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADryBones_Statics::NewProp_GoingDownFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADryBones_Statics::NewProp_DownedFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADryBones_Statics::NewProp_StirringFlipbook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADryBones_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADryBones>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADryBones_Statics::ClassParams = {
		&ADryBones::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADryBones_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADryBones_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADryBones_Statics::Class_MetaDataParams), Z_Construct_UClass_ADryBones_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADryBones_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADryBones()
	{
		if (!Z_Registration_Info_UClass_ADryBones.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADryBones.OuterSingleton, Z_Construct_UClass_ADryBones_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADryBones.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<ADryBones>()
	{
		return ADryBones::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADryBones);
	ADryBones::~ADryBones() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_DryBones_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_DryBones_h_Statics::EnumInfo[] = {
		{ EDryBonesState_StaticEnum, TEXT("EDryBonesState"), &Z_Registration_Info_UEnum_EDryBonesState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4237393977U) },
		{ EDryBonesDirection_StaticEnum, TEXT("EDryBonesDirection"), &Z_Registration_Info_UEnum_EDryBonesDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2923092615U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_DryBones_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADryBones, ADryBones::StaticClass, TEXT("ADryBones"), &Z_Registration_Info_UClass_ADryBones, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADryBones), 3139274103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_DryBones_h_1011186499(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_DryBones_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_DryBones_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_DryBones_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_DryBones_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
