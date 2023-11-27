// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/EstadoRalentizado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoRalentizado() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstadoRalentizado_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstadoRalentizado();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombie_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UState_NoRegister();
// End Cross Module References
	void AEstadoRalentizado::StaticRegisterNativesAEstadoRalentizado()
	{
	}
	UClass* Z_Construct_UClass_AEstadoRalentizado_NoRegister()
	{
		return AEstadoRalentizado::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoRalentizado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombieEstado_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombieEstado;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoRalentizado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoRalentizado_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoRalentizado.h" },
		{ "ModuleRelativePath", "EstadoRalentizado.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoRalentizado_Statics::NewProp_ZombieEstado_MetaData[] = {
		{ "ModuleRelativePath", "EstadoRalentizado.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEstadoRalentizado_Statics::NewProp_ZombieEstado = { "ZombieEstado", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEstadoRalentizado, ZombieEstado), Z_Construct_UClass_AZombie_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEstadoRalentizado_Statics::NewProp_ZombieEstado_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoRalentizado_Statics::NewProp_ZombieEstado_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEstadoRalentizado_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEstadoRalentizado_Statics::NewProp_ZombieEstado,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoRalentizado_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UState_NoRegister, (int32)VTABLE_OFFSET(AEstadoRalentizado, IState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoRalentizado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoRalentizado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoRalentizado_Statics::ClassParams = {
		&AEstadoRalentizado::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEstadoRalentizado_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoRalentizado_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoRalentizado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoRalentizado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoRalentizado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoRalentizado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoRalentizado, 225472800);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AEstadoRalentizado>()
	{
		return AEstadoRalentizado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoRalentizado(Z_Construct_UClass_AEstadoRalentizado, &AEstadoRalentizado::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AEstadoRalentizado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoRalentizado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
