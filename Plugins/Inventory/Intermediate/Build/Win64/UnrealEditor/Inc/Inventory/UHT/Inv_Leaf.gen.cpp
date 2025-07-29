// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Composite/Inv_Leaf.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_Leaf() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_CompositeBase();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_Leaf ****************************************************************
void UInv_Leaf::StaticRegisterNativesUInv_Leaf()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_Leaf;
UClass* UInv_Leaf::GetPrivateStaticClass()
{
	using TClass = UInv_Leaf;
	if (!Z_Registration_Info_UClass_UInv_Leaf.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_Leaf"),
			Z_Registration_Info_UClass_UInv_Leaf.InnerSingleton,
			StaticRegisterNativesUInv_Leaf,
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
	return Z_Registration_Info_UClass_UInv_Leaf.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_Leaf_NoRegister()
{
	return UInv_Leaf::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_Leaf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Composite/Inv_Leaf.h" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Leaf.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_Leaf>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_Leaf_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInv_CompositeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_Leaf_Statics::ClassParams = {
	&UInv_Leaf::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_Leaf_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_Leaf()
{
	if (!Z_Registration_Info_UClass_UInv_Leaf.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_Leaf.OuterSingleton, Z_Construct_UClass_UInv_Leaf_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_Leaf.OuterSingleton;
}
UInv_Leaf::UInv_Leaf(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_Leaf);
UInv_Leaf::~UInv_Leaf() {}
// ********** End Class UInv_Leaf ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_Leaf, UInv_Leaf::StaticClass, TEXT("UInv_Leaf"), &Z_Registration_Info_UClass_UInv_Leaf, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_Leaf), 2292290481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_h__Script_Inventory_1722830296(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
