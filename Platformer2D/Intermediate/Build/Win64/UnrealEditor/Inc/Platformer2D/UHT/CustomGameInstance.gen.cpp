// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/CustomGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGameInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UCustomGameInstance();
	PLATFORMER2D_API UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer2D();
// End Cross Module References
	void UCustomGameInstance::StaticRegisterNativesUCustomGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomGameInstance);
	UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister()
	{
		return UCustomGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCustomGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadGlobalData_MetaData[];
#endif
		static void NewProp_LoadGlobalData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadGlobalData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarioSpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarioSpawnLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Lives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRoom_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveRoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CustomGameInstance.h" },
		{ "ModuleRelativePath", "CustomGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_LoadGlobalData_MetaData[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "CustomGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_LoadGlobalData_SetBit(void* Obj)
	{
		((UCustomGameInstance*)Obj)->LoadGlobalData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_LoadGlobalData = { "LoadGlobalData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCustomGameInstance), &Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_LoadGlobalData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_LoadGlobalData_MetaData), Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_LoadGlobalData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_MarioSpawnLocation_MetaData[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "CustomGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_MarioSpawnLocation = { "MarioSpawnLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameInstance, MarioSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_MarioSpawnLocation_MetaData), Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_MarioSpawnLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_TimeRemaining_MetaData[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "CustomGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameInstance, TimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_TimeRemaining_MetaData), Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_TimeRemaining_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_Lives_MetaData[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "CustomGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameInstance, Lives), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_Lives_MetaData), Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_Lives_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_Coins_MetaData[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "CustomGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameInstance, Coins), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_Coins_MetaData), Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_Coins_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_ActiveRoom_MetaData[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "CustomGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_ActiveRoom = { "ActiveRoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomGameInstance, ActiveRoom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_ActiveRoom_MetaData), Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_ActiveRoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_LoadGlobalData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_MarioSpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_TimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_Lives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_Coins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomGameInstance_Statics::NewProp_ActiveRoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomGameInstance_Statics::ClassParams = {
		&UCustomGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCustomGameInstance()
	{
		if (!Z_Registration_Info_UClass_UCustomGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomGameInstance.OuterSingleton, Z_Construct_UClass_UCustomGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomGameInstance.OuterSingleton;
	}
	template<> PLATFORMER2D_API UClass* StaticClass<UCustomGameInstance>()
	{
		return UCustomGameInstance::StaticClass();
	}
	UCustomGameInstance::UCustomGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomGameInstance);
	UCustomGameInstance::~UCustomGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_CustomGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_CustomGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomGameInstance, UCustomGameInstance::StaticClass, TEXT("UCustomGameInstance"), &Z_Registration_Info_UClass_UCustomGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomGameInstance), 475440359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_CustomGameInstance_h_4184361847(TEXT("/Script/Platformer2D"),
		Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_CustomGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer2D_Source_Platformer2D_CustomGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
