// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Composite/Inv_Composite.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_Composite() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_Composite();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Composite_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_CompositeBase();
INVENTORY_API UClass* Z_Construct_UClass_UInv_CompositeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_Composite ***********************************************************
void UInv_Composite::StaticRegisterNativesUInv_Composite()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_Composite;
UClass* UInv_Composite::GetPrivateStaticClass()
{
	using TClass = UInv_Composite;
	if (!Z_Registration_Info_UClass_UInv_Composite.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_Composite"),
			Z_Registration_Info_UClass_UInv_Composite.InnerSingleton,
			StaticRegisterNativesUInv_Composite,
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
	return Z_Registration_Info_UClass_UInv_Composite.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_Composite_NoRegister()
{
	return UInv_Composite::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_Composite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Composite/Inv_Composite.h" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Composite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Composite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_Composite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_Composite_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInv_CompositeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInv_Composite_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_Composite, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_Composite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_Composite_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_Composite_Statics::NewProp_Children,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Composite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_Composite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInv_CompositeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Composite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_Composite_Statics::ClassParams = {
	&UInv_Composite::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_Composite_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Composite_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Composite_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_Composite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_Composite()
{
	if (!Z_Registration_Info_UClass_UInv_Composite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_Composite.OuterSingleton, Z_Construct_UClass_UInv_Composite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_Composite.OuterSingleton;
}
UInv_Composite::UInv_Composite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_Composite);
UInv_Composite::~UInv_Composite() {}
// ********** End Class UInv_Composite *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Composite_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_Composite, UInv_Composite::StaticClass, TEXT("UInv_Composite"), &Z_Registration_Info_UClass_UInv_Composite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_Composite), 221653034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Composite_h__Script_Inventory_3570302086(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Composite_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Composite_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
