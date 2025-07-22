// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryManagement/FastArray/Inv_FastArray.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_FastArray() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_InventoryEntry();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_InventoryFastArray();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInv_InventoryEntry ***********************************************
static_assert(std::is_polymorphic<FInv_InventoryEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FInv_InventoryEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_InventoryEntry;
class UScriptStruct* FInv_InventoryEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_InventoryEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_InventoryEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_InventoryEntry, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_InventoryEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_InventoryEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A single entry in the inventory */" },
#endif
		{ "ModuleRelativePath", "Public/InventoryManagement/FastArray/Inv_FastArray.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single entry in the inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryManagement/FastArray/Inv_FastArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_InventoryEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_InventoryEntry, Item), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"Inv_InventoryEntry",
	Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics::PropPointers),
	sizeof(FInv_InventoryEntry),
	alignof(FInv_InventoryEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_InventoryEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_InventoryEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_InventoryEntry.InnerSingleton, Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_InventoryEntry.InnerSingleton;
}
// ********** End ScriptStruct FInv_InventoryEntry *************************************************

// ********** Begin ScriptStruct FInv_InventoryFastArray *******************************************
static_assert(std::is_polymorphic<FInv_InventoryFastArray>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FInv_InventoryFastArray cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_InventoryFastArray;
class UScriptStruct* FInv_InventoryFastArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_InventoryFastArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_InventoryFastArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_InventoryFastArray, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_InventoryFastArray"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_InventoryFastArray.OuterSingleton;
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FInv_InventoryFastArray);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FInv_InventoryFastArray);
#endif
struct Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of inventory entries */" },
#endif
		{ "ModuleRelativePath", "Public/InventoryManagement/FastArray/Inv_FastArray.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of inventory entries" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// replicated list of items\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryManagement/FastArray/Inv_FastArray.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "replicated list of items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryManagement/FastArray/Inv_FastArray.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_InventoryFastArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInv_InventoryEntry, METADATA_PARAMS(0, nullptr) }; // 3983192781
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_InventoryFastArray, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3983192781
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0144000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_InventoryFastArray, OwnerComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::NewProp_OwnerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"Inv_InventoryFastArray",
	Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::PropPointers),
	sizeof(FInv_InventoryFastArray),
	alignof(FInv_InventoryFastArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_InventoryFastArray()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_InventoryFastArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_InventoryFastArray.InnerSingleton, Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_InventoryFastArray.InnerSingleton;
}
// ********** End ScriptStruct FInv_InventoryFastArray *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_FastArray_Inv_FastArray_h__Script_Inventory_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInv_InventoryEntry::StaticStruct, Z_Construct_UScriptStruct_FInv_InventoryEntry_Statics::NewStructOps, TEXT("Inv_InventoryEntry"), &Z_Registration_Info_UScriptStruct_FInv_InventoryEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_InventoryEntry), 3983192781U) },
		{ FInv_InventoryFastArray::StaticStruct, Z_Construct_UScriptStruct_FInv_InventoryFastArray_Statics::NewStructOps, TEXT("Inv_InventoryFastArray"), &Z_Registration_Info_UScriptStruct_FInv_InventoryFastArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_InventoryFastArray), 1153450807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_FastArray_Inv_FastArray_h__Script_Inventory_3375681169(TEXT("/Script/Inventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_FastArray_Inv_FastArray_h__Script_Inventory_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_FastArray_Inv_FastArray_h__Script_Inventory_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
