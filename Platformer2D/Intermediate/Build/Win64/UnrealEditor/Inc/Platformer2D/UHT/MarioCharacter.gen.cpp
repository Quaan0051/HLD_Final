// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarioCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioCharacter();
	PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	DEFINE_FUNCTION(AMarioCharacter::execOnOverlapEnded)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnded(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMarioCharacter::execOnOverlapBegan)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegan(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMarioCharacter::execOnHit)
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
	void AMarioCharacter::StaticRegisterNativesAMarioCharacter()
	{
		UClass* Class = AMarioCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AMarioCharacter::execOnHit },
			{ "OnOverlapBegan", &AMarioCharacter::execOnOverlapBegan },
			{ "OnOverlapEnded", &AMarioCharacter::execOnOverlapEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMarioCharacter_OnHit_Statics
	{
		struct MarioCharacter_eventOnHit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarioCharacter, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::MarioCharacter_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::MarioCharacter_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMarioCharacter_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics
	{
		struct MarioCharacter_eventOnOverlapBegan_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapBegan_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OverlapComponent_MetaData), Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OverlapComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapBegan_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapBegan_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapBegan_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MarioCharacter_eventOnOverlapBegan_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MarioCharacter_eventOnOverlapBegan_Parms), &Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapBegan_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OverlapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarioCharacter, nullptr, "OnOverlapBegan", nullptr, nullptr, Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::MarioCharacter_eventOnOverlapBegan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::MarioCharacter_eventOnOverlapBegan_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics
	{
		struct MarioCharacter_eventOnOverlapEnded_Parms
		{
			UPrimitiveComponent* OverlapComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapEnded_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OverlapComponent_MetaData), Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OverlapComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapEnded_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapEnded_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapEnded_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OverlapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarioCharacter, nullptr, "OnOverlapEnded", nullptr, nullptr, Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::MarioCharacter_eventOnOverlapEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::MarioCharacter_eventOnOverlapEnded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarioCharacter);
	UClass* Z_Construct_UClass_AMarioCharacter_NoRegister()
	{
		return AMarioCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMarioCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmallIdleFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallIdleFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmallWalkFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallWalkFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmallRunFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallRunFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmallJumpFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallJumpFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmallRunJumpFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallRunJumpFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmallTurnFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallTurnFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperIdleFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperIdleFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperWalkFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperWalkFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperRunFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperRunFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperJumpFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperJumpFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperFallingFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperFallingFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperRunJumpFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperRunJumpFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperTurnFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperTurnFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperDuckFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperDuckFlipbook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarioCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMarioCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMarioCharacter_OnHit, "OnHit" }, // 3299704221
		{ &Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan, "OnOverlapBegan" }, // 558555743
		{ &Z_Construct_UFunction_AMarioCharacter_OnOverlapEnded, "OnOverlapEnded" }, // 2075217979
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MarioCharacter.h" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallIdleFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallIdleFlipbook = { "SmallIdleFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SmallIdleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallIdleFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallIdleFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallWalkFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallWalkFlipbook = { "SmallWalkFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SmallWalkFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallWalkFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallWalkFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunFlipbook = { "SmallRunFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SmallRunFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallJumpFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallJumpFlipbook = { "SmallJumpFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SmallJumpFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallJumpFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallJumpFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunJumpFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunJumpFlipbook = { "SmallRunJumpFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SmallRunJumpFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunJumpFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunJumpFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallTurnFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallTurnFlipbook = { "SmallTurnFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SmallTurnFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallTurnFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallTurnFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperIdleFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperIdleFlipbook = { "SuperIdleFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperIdleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperIdleFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperIdleFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperWalkFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperWalkFlipbook = { "SuperWalkFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperWalkFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperWalkFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperWalkFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunFlipbook = { "SuperRunFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperRunFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperJumpFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperJumpFlipbook = { "SuperJumpFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperJumpFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperJumpFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperJumpFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperFallingFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperFallingFlipbook = { "SuperFallingFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperFallingFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperFallingFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperFallingFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunJumpFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunJumpFlipbook = { "SuperRunJumpFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperRunJumpFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunJumpFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunJumpFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperTurnFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperTurnFlipbook = { "SuperTurnFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperTurnFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperTurnFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperTurnFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperDuckFlipbook_MetaData[] = {
		{ "Category", "Mario flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperDuckFlipbook = { "SuperDuckFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperDuckFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperDuckFlipbook_MetaData), Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperDuckFlipbook_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallIdleFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallWalkFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallJumpFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunJumpFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallTurnFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperIdleFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperWalkFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperJumpFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperFallingFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunJumpFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperTurnFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperDuckFlipbook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarioCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioCharacter_Statics::ClassParams = {
		&AMarioCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMarioCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMarioCharacter()
	{
		if (!Z_Registration_Info_UClass_AMarioCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioCharacter.OuterSingleton, Z_Construct_UClass_AMarioCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarioCharacter.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<AMarioCharacter>()
	{
		return AMarioCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioCharacter);
	AMarioCharacter::~AMarioCharacter() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarioCharacter, AMarioCharacter::StaticClass, TEXT("AMarioCharacter"), &Z_Registration_Info_UClass_AMarioCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioCharacter), 2603947428U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioCharacter_h_3013954107(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_MarioCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
