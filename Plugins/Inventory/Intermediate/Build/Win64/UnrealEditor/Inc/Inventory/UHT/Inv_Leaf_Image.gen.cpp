// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Composite/Inv_Leaf_Image.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_Leaf_Image() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf_Image();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Leaf_Image_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_Leaf_Image **********************************************************
void UInv_Leaf_Image::StaticRegisterNativesUInv_Leaf_Image()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_Leaf_Image;
UClass* UInv_Leaf_Image::GetPrivateStaticClass()
{
	using TClass = UInv_Leaf_Image;
	if (!Z_Registration_Info_UClass_UInv_Leaf_Image.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_Leaf_Image"),
			Z_Registration_Info_UClass_UInv_Leaf_Image.InnerSingleton,
			StaticRegisterNativesUInv_Leaf_Image,
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
	return Z_Registration_Info_UClass_UInv_Leaf_Image.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_Leaf_Image_NoRegister()
{
	return UInv_Leaf_Image::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_Leaf_Image_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Composite/Inv_Leaf_Image.h" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Leaf_Image.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Icon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Leaf_Image.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_Icon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Composite/Inv_Leaf_Image.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_Leaf_Image>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_Leaf_Image_Statics::NewProp_Image_Icon = { "Image_Icon", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_Leaf_Image, Image_Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Icon_MetaData), NewProp_Image_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_Leaf_Image_Statics::NewProp_SizeBox_Icon = { "SizeBox_Icon", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_Leaf_Image, SizeBox_Icon), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_Icon_MetaData), NewProp_SizeBox_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_Leaf_Image_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_Leaf_Image_Statics::NewProp_Image_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_Leaf_Image_Statics::NewProp_SizeBox_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_Image_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_Leaf_Image_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInv_Leaf,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_Image_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_Leaf_Image_Statics::ClassParams = {
	&UInv_Leaf_Image::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_Leaf_Image_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_Image_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Leaf_Image_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_Leaf_Image_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_Leaf_Image()
{
	if (!Z_Registration_Info_UClass_UInv_Leaf_Image.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_Leaf_Image.OuterSingleton, Z_Construct_UClass_UInv_Leaf_Image_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_Leaf_Image.OuterSingleton;
}
UInv_Leaf_Image::UInv_Leaf_Image(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_Leaf_Image);
UInv_Leaf_Image::~UInv_Leaf_Image() {}
// ********** End Class UInv_Leaf_Image ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_Image_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_Leaf_Image, UInv_Leaf_Image::StaticClass, TEXT("UInv_Leaf_Image"), &Z_Registration_Info_UClass_UInv_Leaf_Image, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_Leaf_Image), 4283760651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_Image_h__Script_Inventory_3949053954(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_Image_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Composite_Inv_Leaf_Image_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
