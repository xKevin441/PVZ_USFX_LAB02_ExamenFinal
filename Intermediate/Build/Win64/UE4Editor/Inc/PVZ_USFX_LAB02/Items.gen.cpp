// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Items.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItems() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AItems_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AItems();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AItems::StaticRegisterNativesAItems()
	{
	}
	UClass* Z_Construct_UClass_AItems_NoRegister()
	{
		return AItems::StaticClass();
	}
	struct Z_Construct_UClass_AItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItems_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items.h" },
		{ "ModuleRelativePath", "Items.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItems_Statics::NewProp_ItemMeshComponent_MetaData[] = {
		{ "Category", "Items" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Items.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItems_Statics::NewProp_ItemMeshComponent = { "ItemMeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItems, ItemMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItems_Statics::NewProp_ItemMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItems_Statics::NewProp_ItemMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItems_Statics::NewProp_ItemMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItems>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItems_Statics::ClassParams = {
		&AItems::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AItems_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AItems_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItems()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItems_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItems, 645886087);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AItems>()
	{
		return AItems::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItems(Z_Construct_UClass_AItems, &AItems::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AItems"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItems);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
