// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/EstadoCongelado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoCongelado() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstadoCongelado_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstadoCongelado();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UState_NoRegister();
// End Cross Module References
	void AEstadoCongelado::StaticRegisterNativesAEstadoCongelado()
	{
	}
	UClass* Z_Construct_UClass_AEstadoCongelado_NoRegister()
	{
		return AEstadoCongelado::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoCongelado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoCongelado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoCongelado_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoCongelado.h" },
		{ "ModuleRelativePath", "EstadoCongelado.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoCongelado_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UState_NoRegister, (int32)VTABLE_OFFSET(AEstadoCongelado, IState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoCongelado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoCongelado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoCongelado_Statics::ClassParams = {
		&AEstadoCongelado::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoCongelado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoCongelado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoCongelado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoCongelado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoCongelado, 1598153321);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AEstadoCongelado>()
	{
		return AEstadoCongelado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoCongelado(Z_Construct_UClass_AEstadoCongelado, &AEstadoCongelado::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AEstadoCongelado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoCongelado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
