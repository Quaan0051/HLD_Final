// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/SecretDoor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecretDoor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_APaperTileMapActor_NoRegister();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ASecretDoor();
	PLATFORMER2D_API UClass* Z_Construct_UClass_ASecretDoor_NoRegister();
	PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_ESecretDoorState();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESecretDoorState;
	static UEnum* ESecretDoorState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESecretDoorState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESecretDoorState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_ESecretDoorState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("ESecretDoorState"));
		}
		return Z_Registration_Info_UEnum_ESecretDoorState.OuterSingleton;
	}
	template<> PLATFORMER2D_API UEnum* StaticEnum<ESecretDoorState>()
	{
		return ESecretDoorState_StaticEnum();
	}
	struct Z_Construct_UEnum_Platformer2D_ESecretDoorState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Platformer2D_ESecretDoorState_Statics::Enumerators[] = {
		{ "ESecretDoorState::Unknown", (int64)ESecretDoorState::Unknown },
		{ "ESecretDoorState::Visible", (int64)ESecretDoorState::Visible },
		{ "ESecretDoorState::Hidden", (int64)ESecretDoorState::Hidden },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Platformer2D_ESecretDoorState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hidden.DisplayName", "Hidden" },
		{ "Hidden.Name", "ESecretDoorState::Hidden" },
		{ "ModuleRelativePath", "SecretDoor.h" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "ESecretDoorState::Unknown" },
		{ "Visible.DisplayName", "Visible" },
		{ "Visible.Name", "ESecretDoorState::Visible" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_ESecretDoorState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
		nullptr,
		"ESecretDoorState",
		"ESecretDoorState",
		Z_Construct_UEnum_Platformer2D_ESecretDoorState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_ESecretDoorState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_ESecretDoorState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_ESecretDoorState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Platformer2D_ESecretDoorState()
	{
		if (!Z_Registration_Info_UEnum_ESecretDoorState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESecretDoorState.InnerSingleton, Z_Construct_UEnum_Platformer2D_ESecretDoorState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESecretDoorState.InnerSingleton;
	}
	DEFINE_FUNCTION(ASecretDoor::execEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASecretDoor::execOnOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ASecretDoor::StaticRegisterNativesASecretDoor()
	{
		UClass* Class = ASecretDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndOverlap", &ASecretDoor::execEndOverlap },
			{ "OnOverlap", &ASecretDoor::execOnOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics
	{
		struct SecretDoor_eventEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecretDoor_eventEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecretDoor_eventEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecretDoor_eventEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecretDoor_eventEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SecretDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASecretDoor, nullptr, "EndOverlap", nullptr, nullptr, Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::SecretDoor_eventEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::SecretDoor_eventEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASecretDoor_EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASecretDoor_EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics
	{
		struct SecretDoor_eventOnOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecretDoor_eventOnOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OverlapComponent_MetaData), Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OverlapComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecretDoor_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecretDoor_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecretDoor_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SecretDoor_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SecretDoor_eventOnOverlap_Parms), &Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecretDoor_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OverlapComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SecretDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASecretDoor, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::SecretDoor_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::SecretDoor_eventOnOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASecretDoor_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASecretDoor_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecretDoor);
	UClass* Z_Construct_UClass_ASecretDoor_NoRegister()
	{
		return ASecretDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASecretDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tilemap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tilemap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASecretDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecretDoor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASecretDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASecretDoor_EndOverlap, "EndOverlap" }, // 655243342
		{ &Z_Construct_UFunction_ASecretDoor_OnOverlap, "OnOverlap" }, // 2512885213
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecretDoor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASecretDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SecretDoor.h" },
		{ "ModuleRelativePath", "SecretDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASecretDoor_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SecretDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecretDoor_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecretDoor, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecretDoor_Statics::NewProp_BoxComponent_MetaData), Z_Construct_UClass_ASecretDoor_Statics::NewProp_BoxComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASecretDoor_Statics::NewProp_Tilemap_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "ModuleRelativePath", "SecretDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecretDoor_Statics::NewProp_Tilemap = { "Tilemap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecretDoor, Tilemap), Z_Construct_UClass_APaperTileMapActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecretDoor_Statics::NewProp_Tilemap_MetaData), Z_Construct_UClass_ASecretDoor_Statics::NewProp_Tilemap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASecretDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecretDoor_Statics::NewProp_BoxComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecretDoor_Statics::NewProp_Tilemap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASecretDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecretDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecretDoor_Statics::ClassParams = {
		&ASecretDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASecretDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASecretDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecretDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASecretDoor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecretDoor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASecretDoor()
	{
		if (!Z_Registration_Info_UClass_ASecretDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecretDoor.OuterSingleton, Z_Construct_UClass_ASecretDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASecretDoor.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<ASecretDoor>()
	{
		return ASecretDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASecretDoor);
	ASecretDoor::~ASecretDoor() {}
	struct Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_Statics::EnumInfo[] = {
		{ ESecretDoorState_StaticEnum, TEXT("ESecretDoorState"), &Z_Registration_Info_UEnum_ESecretDoorState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1036973684U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASecretDoor, ASecretDoor::StaticClass, TEXT("ASecretDoor"), &Z_Registration_Info_UClass_ASecretDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecretDoor), 1208074926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_950247025(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HLD_Final_Platformer2D_Source_Platformer2D_SecretDoor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
