// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/Manifest/Inv_ItemManifest.h"
#include "GameplayTagContainer.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_ItemManifest() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORY_API UEnum* Z_Construct_UEnum_Inventory_EInv_ItemCategory();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ItemManifest();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInv_ItemManifest *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_ItemManifest;
class UScriptStruct* FInv_ItemManifest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ItemManifest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_ItemManifest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_ItemManifest, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_ItemManifest"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_ItemManifest.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_ItemManifest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Manifest/Inv_ItemManifest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[] = {
		{ "BaseStruct", "/Script/Inventory.Inv_ItemFragment" },
		{ "Category", "Inventory" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/Items/Manifest/Inv_ItemManifest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCategory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Manifest/Inv_ItemManifest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Manifest/Inv_ItemManifest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fragments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_ItemManifest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 1627169465
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ItemManifest, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragments_MetaData), NewProp_Fragments_MetaData) }; // 1627169465
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_ItemCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_ItemCategory = { "ItemCategory", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ItemManifest, ItemCategory), Z_Construct_UEnum_Inventory_EInv_ItemCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCategory_MetaData), NewProp_ItemCategory_MetaData) }; // 4149887105
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ItemManifest, ItemType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_Fragments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_Fragments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_ItemCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_ItemCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewProp_ItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	&NewStructOps,
	"Inv_ItemManifest",
	Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::PropPointers),
	sizeof(FInv_ItemManifest),
	alignof(FInv_ItemManifest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_ItemManifest()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ItemManifest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_ItemManifest.InnerSingleton, Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_ItemManifest.InnerSingleton;
}
// ********** End ScriptStruct FInv_ItemManifest ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Manifest_Inv_ItemManifest_h__Script_Inventory_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInv_ItemManifest::StaticStruct, Z_Construct_UScriptStruct_FInv_ItemManifest_Statics::NewStructOps, TEXT("Inv_ItemManifest"), &Z_Registration_Info_UScriptStruct_FInv_ItemManifest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ItemManifest), 1014103942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Manifest_Inv_ItemManifest_h__Script_Inventory_1651498378(TEXT("/Script/Inventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Manifest_Inv_ItemManifest_h__Script_Inventory_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Manifest_Inv_ItemManifest_h__Script_Inventory_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
