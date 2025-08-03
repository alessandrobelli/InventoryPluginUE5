// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentManagement/EquipActor/Inv_EquipActor.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_EquipActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORY_API UClass* Z_Construct_UClass_AInv_EquipActor();
INVENTORY_API UClass* Z_Construct_UClass_AInv_EquipActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInv_EquipActor **********************************************************
void AInv_EquipActor::StaticRegisterNativesAInv_EquipActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInv_EquipActor;
UClass* AInv_EquipActor::GetPrivateStaticClass()
{
	using TClass = AInv_EquipActor;
	if (!Z_Registration_Info_UClass_AInv_EquipActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_EquipActor"),
			Z_Registration_Info_UClass_AInv_EquipActor.InnerSingleton,
			StaticRegisterNativesAInv_EquipActor,
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
	return Z_Registration_Info_UClass_AInv_EquipActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AInv_EquipActor_NoRegister()
{
	return AInv_EquipActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInv_EquipActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentManagement/EquipActor/Inv_EquipActor.h" },
		{ "ModuleRelativePath", "Private/EquipmentManagement/EquipActor/Inv_EquipActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentType_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Private/EquipmentManagement/EquipActor/Inv_EquipActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInv_EquipActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInv_EquipActor_Statics::NewProp_EquipmentType = { "EquipmentType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_EquipActor, EquipmentType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentType_MetaData), NewProp_EquipmentType_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInv_EquipActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_EquipActor_Statics::NewProp_EquipmentType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_EquipActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInv_EquipActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_EquipActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInv_EquipActor_Statics::ClassParams = {
	&AInv_EquipActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInv_EquipActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInv_EquipActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_EquipActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInv_EquipActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInv_EquipActor()
{
	if (!Z_Registration_Info_UClass_AInv_EquipActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInv_EquipActor.OuterSingleton, Z_Construct_UClass_AInv_EquipActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInv_EquipActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInv_EquipActor);
AInv_EquipActor::~AInv_EquipActor() {}
// ********** End Class AInv_EquipActor ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Private_EquipmentManagement_EquipActor_Inv_EquipActor_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInv_EquipActor, AInv_EquipActor::StaticClass, TEXT("AInv_EquipActor"), &Z_Registration_Info_UClass_AInv_EquipActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInv_EquipActor), 2887622384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Private_EquipmentManagement_EquipActor_Inv_EquipActor_h__Script_Inventory_3246658046(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Private_EquipmentManagement_EquipActor_Inv_EquipActor_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Private_EquipmentManagement_EquipActor_Inv_EquipActor_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
