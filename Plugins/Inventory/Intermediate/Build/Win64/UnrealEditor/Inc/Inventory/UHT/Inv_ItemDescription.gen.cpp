// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/ItemDescription/Inv_ItemDescription.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_ItemDescription() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_Composite();
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemDescription();
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemDescription_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_ItemDescription *****************************************************
void UInv_ItemDescription::StaticRegisterNativesUInv_ItemDescription()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_ItemDescription;
UClass* UInv_ItemDescription::GetPrivateStaticClass()
{
	using TClass = UInv_ItemDescription;
	if (!Z_Registration_Info_UClass_UInv_ItemDescription.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_ItemDescription"),
			Z_Registration_Info_UClass_UInv_ItemDescription.InnerSingleton,
			StaticRegisterNativesUInv_ItemDescription,
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
	return Z_Registration_Info_UClass_UInv_ItemDescription.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_ItemDescription_NoRegister()
{
	return UInv_ItemDescription::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_ItemDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/ItemDescription/Inv_ItemDescription.h" },
		{ "ModuleRelativePath", "Public/Widgets/ItemDescription/Inv_ItemDescription.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ItemDescription/Inv_ItemDescription.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_ItemDescription>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_ItemDescription_Statics::NewProp_SizeBox = { "SizeBox", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemDescription, SizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_MetaData), NewProp_SizeBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_ItemDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemDescription_Statics::NewProp_SizeBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemDescription_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_ItemDescription_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInv_Composite,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemDescription_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_ItemDescription_Statics::ClassParams = {
	&UInv_ItemDescription::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_ItemDescription_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemDescription_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemDescription_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_ItemDescription_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_ItemDescription()
{
	if (!Z_Registration_Info_UClass_UInv_ItemDescription.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_ItemDescription.OuterSingleton, Z_Construct_UClass_UInv_ItemDescription_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_ItemDescription.OuterSingleton;
}
UInv_ItemDescription::UInv_ItemDescription(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_ItemDescription);
UInv_ItemDescription::~UInv_ItemDescription() {}
// ********** End Class UInv_ItemDescription *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemDescription_Inv_ItemDescription_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_ItemDescription, UInv_ItemDescription::StaticClass, TEXT("UInv_ItemDescription"), &Z_Registration_Info_UClass_UInv_ItemDescription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_ItemDescription), 2070752306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemDescription_Inv_ItemDescription_h__Script_Inventory_3010613126(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemDescription_Inv_ItemDescription_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemDescription_Inv_ItemDescription_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
