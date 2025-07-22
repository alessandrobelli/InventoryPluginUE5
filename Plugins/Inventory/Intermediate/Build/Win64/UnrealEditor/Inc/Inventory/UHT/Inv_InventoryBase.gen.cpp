// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Inventory/InventoryBase/Inv_InventoryBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_InventoryBase() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryBase();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_InventoryBase *******************************************************
void UInv_InventoryBase::StaticRegisterNativesUInv_InventoryBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_InventoryBase;
UClass* UInv_InventoryBase::GetPrivateStaticClass()
{
	using TClass = UInv_InventoryBase;
	if (!Z_Registration_Info_UClass_UInv_InventoryBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_InventoryBase"),
			Z_Registration_Info_UClass_UInv_InventoryBase.InnerSingleton,
			StaticRegisterNativesUInv_InventoryBase,
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
	return Z_Registration_Info_UClass_UInv_InventoryBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_InventoryBase_NoRegister()
{
	return UInv_InventoryBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_InventoryBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Inventory/InventoryBase/Inv_InventoryBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/InventoryBase/Inv_InventoryBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InventoryBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_InventoryBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InventoryBase_Statics::ClassParams = {
	&UInv_InventoryBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InventoryBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InventoryBase()
{
	if (!Z_Registration_Info_UClass_UInv_InventoryBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InventoryBase.OuterSingleton, Z_Construct_UClass_UInv_InventoryBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InventoryBase.OuterSingleton;
}
UInv_InventoryBase::UInv_InventoryBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InventoryBase);
UInv_InventoryBase::~UInv_InventoryBase() {}
// ********** End Class UInv_InventoryBase *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_InventoryBase_Inv_InventoryBase_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InventoryBase, UInv_InventoryBase::StaticClass, TEXT("UInv_InventoryBase"), &Z_Registration_Info_UClass_UInv_InventoryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InventoryBase), 4249412561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_InventoryBase_Inv_InventoryBase_h__Script_Inventory_107921643(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_InventoryBase_Inv_InventoryBase_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_InventoryBase_Inv_InventoryBase_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
