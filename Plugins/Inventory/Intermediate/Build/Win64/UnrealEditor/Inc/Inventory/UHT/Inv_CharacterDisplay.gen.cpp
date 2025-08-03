// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/CharacterDisplay/Inv_CharacterDisplay.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_CharacterDisplay() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_CharacterDisplay();
INVENTORY_API UClass* Z_Construct_UClass_UInv_CharacterDisplay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_CharacterDisplay ****************************************************
void UInv_CharacterDisplay::StaticRegisterNativesUInv_CharacterDisplay()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_CharacterDisplay;
UClass* UInv_CharacterDisplay::GetPrivateStaticClass()
{
	using TClass = UInv_CharacterDisplay;
	if (!Z_Registration_Info_UClass_UInv_CharacterDisplay.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_CharacterDisplay"),
			Z_Registration_Info_UClass_UInv_CharacterDisplay.InnerSingleton,
			StaticRegisterNativesUInv_CharacterDisplay,
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
	return Z_Registration_Info_UClass_UInv_CharacterDisplay.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_CharacterDisplay_NoRegister()
{
	return UInv_CharacterDisplay::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_CharacterDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/CharacterDisplay/Inv_CharacterDisplay.h" },
		{ "ModuleRelativePath", "Public/Widgets/CharacterDisplay/Inv_CharacterDisplay.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_CharacterDisplay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_CharacterDisplay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_CharacterDisplay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_CharacterDisplay_Statics::ClassParams = {
	&UInv_CharacterDisplay::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_CharacterDisplay_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_CharacterDisplay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_CharacterDisplay()
{
	if (!Z_Registration_Info_UClass_UInv_CharacterDisplay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_CharacterDisplay.OuterSingleton, Z_Construct_UClass_UInv_CharacterDisplay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_CharacterDisplay.OuterSingleton;
}
UInv_CharacterDisplay::UInv_CharacterDisplay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_CharacterDisplay);
UInv_CharacterDisplay::~UInv_CharacterDisplay() {}
// ********** End Class UInv_CharacterDisplay ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_CharacterDisplay_Inv_CharacterDisplay_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_CharacterDisplay, UInv_CharacterDisplay::StaticClass, TEXT("UInv_CharacterDisplay"), &Z_Registration_Info_UClass_UInv_CharacterDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_CharacterDisplay), 1919774356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_CharacterDisplay_Inv_CharacterDisplay_h__Script_Inventory_948652072(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_CharacterDisplay_Inv_CharacterDisplay_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_CharacterDisplay_Inv_CharacterDisplay_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
