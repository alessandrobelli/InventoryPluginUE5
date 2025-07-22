// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Inv_HighlighttableStaticMesh.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_HighlighttableStaticMesh() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Highlightable_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_HighlighttableStaticMesh();
INVENTORY_API UClass* Z_Construct_UClass_UInv_HighlighttableStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_HighlighttableStaticMesh ********************************************
void UInv_HighlighttableStaticMesh::StaticRegisterNativesUInv_HighlighttableStaticMesh()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_HighlighttableStaticMesh;
UClass* UInv_HighlighttableStaticMesh::GetPrivateStaticClass()
{
	using TClass = UInv_HighlighttableStaticMesh;
	if (!Z_Registration_Info_UClass_UInv_HighlighttableStaticMesh.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_HighlighttableStaticMesh"),
			Z_Registration_Info_UClass_UInv_HighlighttableStaticMesh.InnerSingleton,
			StaticRegisterNativesUInv_HighlighttableStaticMesh,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInv_HighlighttableStaticMesh.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_HighlighttableStaticMesh_NoRegister()
{
	return UInv_HighlighttableStaticMesh::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interaction/Inv_HighlighttableStaticMesh.h" },
		{ "ModuleRelativePath", "Public/Interaction/Inv_HighlighttableStaticMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMaterial_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Interaction/Inv_HighlighttableStaticMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_HighlighttableStaticMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::NewProp_HighlightMaterial = { "HighlightMaterial", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_HighlighttableStaticMesh, HighlightMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMaterial_MetaData), NewProp_HighlightMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::NewProp_HighlightMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInv_Highlightable_NoRegister, (int32)VTABLE_OFFSET(UInv_HighlighttableStaticMesh, IInv_Highlightable), false },  // 1820368217
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::ClassParams = {
	&UInv_HighlighttableStaticMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_HighlighttableStaticMesh()
{
	if (!Z_Registration_Info_UClass_UInv_HighlighttableStaticMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_HighlighttableStaticMesh.OuterSingleton, Z_Construct_UClass_UInv_HighlighttableStaticMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_HighlighttableStaticMesh.OuterSingleton;
}
UInv_HighlighttableStaticMesh::UInv_HighlighttableStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_HighlighttableStaticMesh);
UInv_HighlighttableStaticMesh::~UInv_HighlighttableStaticMesh() {}
// ********** End Class UInv_HighlighttableStaticMesh **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_HighlighttableStaticMesh_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_HighlighttableStaticMesh, UInv_HighlighttableStaticMesh::StaticClass, TEXT("UInv_HighlighttableStaticMesh"), &Z_Registration_Info_UClass_UInv_HighlighttableStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_HighlighttableStaticMesh), 890243570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_HighlighttableStaticMesh_h__Script_Inventory_2362631824(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_HighlighttableStaticMesh_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_HighlighttableStaticMesh_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
