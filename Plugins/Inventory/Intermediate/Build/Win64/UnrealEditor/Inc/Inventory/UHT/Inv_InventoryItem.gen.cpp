// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/Inv_InventoryItem.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_InventoryItem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_InventoryItem *******************************************************
void UInv_InventoryItem::StaticRegisterNativesUInv_InventoryItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_InventoryItem;
UClass* UInv_InventoryItem::GetPrivateStaticClass()
{
	using TClass = UInv_InventoryItem;
	if (!Z_Registration_Info_UClass_UInv_InventoryItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_InventoryItem"),
			Z_Registration_Info_UClass_UInv_InventoryItem.InnerSingleton,
			StaticRegisterNativesUInv_InventoryItem,
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
	return Z_Registration_Info_UClass_UInv_InventoryItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister()
{
	return UInv_InventoryItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_InventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Inv_InventoryItem.h" },
		{ "ModuleRelativePath", "Public/Items/Inv_InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemManifest_MetaData[] = {
		{ "BaseStruct", "Script/Inventory.Inv_ItemManifest" },
		{ "Category", "Inv_InventoryItem" },
		{ "ModuleRelativePath", "Public/Items/Inv_InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalStackCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/Inv_InventoryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemManifest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalStackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InventoryItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_InventoryItem_Statics::NewProp_ItemManifest = { "ItemManifest", nullptr, (EPropertyFlags)0x0040000000020021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryItem, ItemManifest), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemManifest_MetaData), NewProp_ItemManifest_MetaData) }; // 1627169465
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInv_InventoryItem_Statics::NewProp_TotalStackCount = { "TotalStackCount", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryItem, TotalStackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalStackCount_MetaData), NewProp_TotalStackCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_InventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryItem_Statics::NewProp_ItemManifest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryItem_Statics::NewProp_TotalStackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_InventoryItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InventoryItem_Statics::ClassParams = {
	&UInv_InventoryItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_InventoryItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryItem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InventoryItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InventoryItem()
{
	if (!Z_Registration_Info_UClass_UInv_InventoryItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InventoryItem.OuterSingleton, Z_Construct_UClass_UInv_InventoryItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InventoryItem.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UInv_InventoryItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_ItemManifest(TEXT("ItemManifest"));
	static FName Name_TotalStackCount(TEXT("TotalStackCount"));
	const bool bIsValid = true
		&& Name_ItemManifest == ClassReps[(int32)ENetFields_Private::ItemManifest].Property->GetFName()
		&& Name_TotalStackCount == ClassReps[(int32)ENetFields_Private::TotalStackCount].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInv_InventoryItem"));
}
#endif
UInv_InventoryItem::UInv_InventoryItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InventoryItem);
UInv_InventoryItem::~UInv_InventoryItem() {}
// ********** End Class UInv_InventoryItem *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InventoryItem, UInv_InventoryItem::StaticClass, TEXT("UInv_InventoryItem"), &Z_Registration_Info_UClass_UInv_InventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InventoryItem), 1827998435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h__Script_Inventory_1000611538(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Inv_InventoryItem_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
