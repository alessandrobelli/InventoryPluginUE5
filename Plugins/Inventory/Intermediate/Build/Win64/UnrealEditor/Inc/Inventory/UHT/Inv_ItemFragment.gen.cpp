// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/Fragments/Inv_ItemFragment.h"
#include "GameplayTagContainer.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_ItemFragment() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORY_API UClass* Z_Construct_UClass_AInv_EquipActor_NoRegister();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ConsumableFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ConsumeModifier();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_EquipmentFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_EquipModifier();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_GridFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_HealthPotionFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ImageFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_InventoryItemFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ItemFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_LabeledNumberFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ManaPotionFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_StackableFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_StrengthModifier();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_TextFragment();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInv_ItemFragment *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_ItemFragment;
class UScriptStruct* FInv_ItemFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ItemFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_ItemFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_ItemFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_ItemFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_ItemFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_ItemFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentTag_MetaData[] = {
		{ "Categories", "FragmentTags" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FragmentTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_ItemFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::NewProp_FragmentTag = { "FragmentTag", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ItemFragment, FragmentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentTag_MetaData), NewProp_FragmentTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::NewProp_FragmentTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	&NewStructOps,
	"Inv_ItemFragment",
	Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::PropPointers),
	sizeof(FInv_ItemFragment),
	alignof(FInv_ItemFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_ItemFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ItemFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_ItemFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_ItemFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_ItemFragment ***************************************************

// ********** Begin ScriptStruct FInv_InventoryItemFragment ****************************************
static_assert(std::is_polymorphic<FInv_InventoryItemFragment>() == std::is_polymorphic<FInv_ItemFragment>(), "USTRUCT FInv_InventoryItemFragment cannot be polymorphic unless super FInv_ItemFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_InventoryItemFragment;
class UScriptStruct* FInv_InventoryItemFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_InventoryItemFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_InventoryItemFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_InventoryItemFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_InventoryItemFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_InventoryItemFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_InventoryItemFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Item Fragment specifically for assimilation into a widget.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Item Fragment specifically for assimilation into a widget." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_InventoryItemFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_InventoryItemFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_ItemFragment,
	&NewStructOps,
	"Inv_InventoryItemFragment",
	nullptr,
	0,
	sizeof(FInv_InventoryItemFragment),
	alignof(FInv_InventoryItemFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_InventoryItemFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_InventoryItemFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_InventoryItemFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_InventoryItemFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_InventoryItemFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_InventoryItemFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_InventoryItemFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_InventoryItemFragment ******************************************

// ********** Begin ScriptStruct FInv_GridFragment *************************************************
static_assert(std::is_polymorphic<FInv_GridFragment>() == std::is_polymorphic<FInv_ItemFragment>(), "USTRUCT FInv_GridFragment cannot be polymorphic unless super FInv_ItemFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_GridFragment;
class UScriptStruct* FInv_GridFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_GridFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_GridFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_GridFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_GridFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_GridFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_GridFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPadding_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_GridFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_GridFragment_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_GridFragment, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInv_GridFragment_Statics::NewProp_GridPadding = { "GridPadding", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_GridFragment, GridPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPadding_MetaData), NewProp_GridPadding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_GridFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_GridFragment_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_GridFragment_Statics::NewProp_GridPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_GridFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_GridFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_ItemFragment,
	&NewStructOps,
	"Inv_GridFragment",
	Z_Construct_UScriptStruct_FInv_GridFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_GridFragment_Statics::PropPointers),
	sizeof(FInv_GridFragment),
	alignof(FInv_GridFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_GridFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_GridFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_GridFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_GridFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_GridFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_GridFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_GridFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_GridFragment ***************************************************

// ********** Begin ScriptStruct FInv_ImageFragment ************************************************
static_assert(std::is_polymorphic<FInv_ImageFragment>() == std::is_polymorphic<FInv_InventoryItemFragment>(), "USTRUCT FInv_ImageFragment cannot be polymorphic unless super FInv_InventoryItemFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_ImageFragment;
class UScriptStruct* FInv_ImageFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ImageFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_ImageFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_ImageFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_ImageFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_ImageFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_ImageFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconDimensions_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconDimensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_ImageFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ImageFragment, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::NewProp_IconDimensions = { "IconDimensions", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ImageFragment, IconDimensions), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconDimensions_MetaData), NewProp_IconDimensions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::NewProp_IconDimensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_InventoryItemFragment,
	&NewStructOps,
	"Inv_ImageFragment",
	Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::PropPointers),
	sizeof(FInv_ImageFragment),
	alignof(FInv_ImageFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_ImageFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ImageFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_ImageFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_ImageFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_ImageFragment **************************************************

// ********** Begin ScriptStruct FInv_TextFragment *************************************************
static_assert(std::is_polymorphic<FInv_TextFragment>() == std::is_polymorphic<FInv_InventoryItemFragment>(), "USTRUCT FInv_TextFragment cannot be polymorphic unless super FInv_InventoryItemFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_TextFragment;
class UScriptStruct* FInv_TextFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_TextFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_TextFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_TextFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_TextFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_TextFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_TextFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentText_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_FragmentText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_TextFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInv_TextFragment_Statics::NewProp_FragmentText = { "FragmentText", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_TextFragment, FragmentText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentText_MetaData), NewProp_FragmentText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_TextFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_TextFragment_Statics::NewProp_FragmentText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_TextFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_TextFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_InventoryItemFragment,
	&NewStructOps,
	"Inv_TextFragment",
	Z_Construct_UScriptStruct_FInv_TextFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_TextFragment_Statics::PropPointers),
	sizeof(FInv_TextFragment),
	alignof(FInv_TextFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_TextFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_TextFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_TextFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_TextFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_TextFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_TextFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_TextFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_TextFragment ***************************************************

// ********** Begin ScriptStruct FInv_LabeledNumberFragment ****************************************
static_assert(std::is_polymorphic<FInv_LabeledNumberFragment>() == std::is_polymorphic<FInv_InventoryItemFragment>(), "USTRUCT FInv_LabeledNumberFragment cannot be polymorphic unless super FInv_InventoryItemFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_LabeledNumberFragment;
class UScriptStruct* FInv_LabeledNumberFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_LabeledNumberFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_LabeledNumberFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_LabeledNumberFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_LabeledNumberFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_LabeledNumberFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Label_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollapseLabel_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCollapseValue_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFractionalDigits_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFractionalDigits_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text_Label;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static void NewProp_bCollapseLabel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapseLabel;
	static void NewProp_bCollapseValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapseValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinFractionalDigits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFractionalDigits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_LabeledNumberFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_Text_Label = { "Text_Label", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_LabeledNumberFragment, Text_Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Label_MetaData), NewProp_Text_Label_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_LabeledNumberFragment, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_LabeledNumberFragment, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_LabeledNumberFragment, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
void Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_bCollapseLabel_SetBit(void* Obj)
{
	((FInv_LabeledNumberFragment*)Obj)->bCollapseLabel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_bCollapseLabel = { "bCollapseLabel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInv_LabeledNumberFragment), &Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_bCollapseLabel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollapseLabel_MetaData), NewProp_bCollapseLabel_MetaData) };
void Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_bCollapseValue_SetBit(void* Obj)
{
	((FInv_LabeledNumberFragment*)Obj)->bCollapseValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_bCollapseValue = { "bCollapseValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInv_LabeledNumberFragment), &Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_bCollapseValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCollapseValue_MetaData), NewProp_bCollapseValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_MinFractionalDigits = { "MinFractionalDigits", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_LabeledNumberFragment, MinFractionalDigits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFractionalDigits_MetaData), NewProp_MinFractionalDigits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_MaxFractionalDigits = { "MaxFractionalDigits", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_LabeledNumberFragment, MaxFractionalDigits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFractionalDigits_MetaData), NewProp_MaxFractionalDigits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_Text_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_bCollapseLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_bCollapseValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_MinFractionalDigits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewProp_MaxFractionalDigits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_InventoryItemFragment,
	&NewStructOps,
	"Inv_LabeledNumberFragment",
	Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::PropPointers),
	sizeof(FInv_LabeledNumberFragment),
	alignof(FInv_LabeledNumberFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_LabeledNumberFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_LabeledNumberFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_LabeledNumberFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_LabeledNumberFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_LabeledNumberFragment ******************************************

// ********** Begin ScriptStruct FInv_StackableFragment ********************************************
static_assert(std::is_polymorphic<FInv_StackableFragment>() == std::is_polymorphic<FInv_ItemFragment>(), "USTRUCT FInv_StackableFragment cannot be polymorphic unless super FInv_ItemFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_StackableFragment;
class UScriptStruct* FInv_StackableFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_StackableFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_StackableFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_StackableFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_StackableFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_StackableFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_StackableFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// how many stack I get when I pick up this item\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how many stack I get when I pick up this item" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_StackableFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_StackableFragment, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_StackableFragment, StackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackCount_MetaData), NewProp_StackCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_ItemFragment,
	&NewStructOps,
	"Inv_StackableFragment",
	Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::PropPointers),
	sizeof(FInv_StackableFragment),
	alignof(FInv_StackableFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_StackableFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_StackableFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_StackableFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_StackableFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_StackableFragment **********************************************

// ********** Begin ScriptStruct FInv_ConsumeModifier **********************************************
static_assert(std::is_polymorphic<FInv_ConsumeModifier>() == std::is_polymorphic<FInv_LabeledNumberFragment>(), "USTRUCT FInv_ConsumeModifier cannot be polymorphic unless super FInv_LabeledNumberFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_ConsumeModifier;
class UScriptStruct* FInv_ConsumeModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ConsumeModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_ConsumeModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_ConsumeModifier, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_ConsumeModifier"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_ConsumeModifier.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_ConsumeModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Consume fragments\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consume fragments" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_ConsumeModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_ConsumeModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_LabeledNumberFragment,
	&NewStructOps,
	"Inv_ConsumeModifier",
	nullptr,
	0,
	sizeof(FInv_ConsumeModifier),
	alignof(FInv_ConsumeModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ConsumeModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_ConsumeModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_ConsumeModifier()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ConsumeModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_ConsumeModifier.InnerSingleton, Z_Construct_UScriptStruct_FInv_ConsumeModifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_ConsumeModifier.InnerSingleton;
}
// ********** End ScriptStruct FInv_ConsumeModifier ************************************************

// ********** Begin ScriptStruct FInv_ConsumableFragment *******************************************
static_assert(std::is_polymorphic<FInv_ConsumableFragment>() == std::is_polymorphic<FInv_InventoryItemFragment>(), "USTRUCT FInv_ConsumableFragment cannot be polymorphic unless super FInv_InventoryItemFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_ConsumableFragment;
class UScriptStruct* FInv_ConsumableFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ConsumableFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_ConsumableFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_ConsumableFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_ConsumableFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_ConsumableFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeModifiers_MetaData[] = {
		{ "BaseStruct", "/Script/Inventory.Inv_ConsumeModifier" },
		{ "Category", "Inventory" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumeModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConsumeModifiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_ConsumableFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::NewProp_ConsumeModifiers_Inner = { "ConsumeModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 1627169465
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::NewProp_ConsumeModifiers = { "ConsumeModifiers", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ConsumableFragment, ConsumeModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumeModifiers_MetaData), NewProp_ConsumeModifiers_MetaData) }; // 1627169465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::NewProp_ConsumeModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::NewProp_ConsumeModifiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_InventoryItemFragment,
	&NewStructOps,
	"Inv_ConsumableFragment",
	Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::PropPointers),
	sizeof(FInv_ConsumableFragment),
	alignof(FInv_ConsumableFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_ConsumableFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ConsumableFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_ConsumableFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_ConsumableFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_ConsumableFragment *********************************************

// ********** Begin ScriptStruct FInv_HealthPotionFragment *****************************************
static_assert(std::is_polymorphic<FInv_HealthPotionFragment>() == std::is_polymorphic<FInv_ConsumeModifier>(), "USTRUCT FInv_HealthPotionFragment cannot be polymorphic unless super FInv_ConsumeModifier is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_HealthPotionFragment;
class UScriptStruct* FInv_HealthPotionFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_HealthPotionFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_HealthPotionFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_HealthPotionFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_HealthPotionFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_HealthPotionFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_HealthPotionFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_ConsumeModifier,
	&NewStructOps,
	"Inv_HealthPotionFragment",
	nullptr,
	0,
	sizeof(FInv_HealthPotionFragment),
	alignof(FInv_HealthPotionFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_HealthPotionFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_HealthPotionFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_HealthPotionFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_HealthPotionFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_HealthPotionFragment *******************************************

// ********** Begin ScriptStruct FInv_ManaPotionFragment *******************************************
static_assert(std::is_polymorphic<FInv_ManaPotionFragment>() == std::is_polymorphic<FInv_ConsumeModifier>(), "USTRUCT FInv_ManaPotionFragment cannot be polymorphic unless super FInv_ConsumeModifier is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_ManaPotionFragment;
class UScriptStruct* FInv_ManaPotionFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ManaPotionFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_ManaPotionFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_ManaPotionFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_ManaPotionFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_ManaPotionFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_ManaPotionFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_ConsumeModifier,
	&NewStructOps,
	"Inv_ManaPotionFragment",
	nullptr,
	0,
	sizeof(FInv_ManaPotionFragment),
	alignof(FInv_ManaPotionFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_ManaPotionFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ManaPotionFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_ManaPotionFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_ManaPotionFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_ManaPotionFragment *********************************************

// ********** Begin ScriptStruct FInv_EquipModifier ************************************************
static_assert(std::is_polymorphic<FInv_EquipModifier>() == std::is_polymorphic<FInv_LabeledNumberFragment>(), "USTRUCT FInv_EquipModifier cannot be polymorphic unless super FInv_LabeledNumberFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_EquipModifier;
class UScriptStruct* FInv_EquipModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_EquipModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_EquipModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_EquipModifier, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_EquipModifier"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_EquipModifier.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_EquipModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Equipment\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equipment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_EquipModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_EquipModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_LabeledNumberFragment,
	&NewStructOps,
	"Inv_EquipModifier",
	nullptr,
	0,
	sizeof(FInv_EquipModifier),
	alignof(FInv_EquipModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_EquipModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_EquipModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_EquipModifier()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_EquipModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_EquipModifier.InnerSingleton, Z_Construct_UScriptStruct_FInv_EquipModifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_EquipModifier.InnerSingleton;
}
// ********** End ScriptStruct FInv_EquipModifier **************************************************

// ********** Begin ScriptStruct FInv_StrengthModifier *********************************************
static_assert(std::is_polymorphic<FInv_StrengthModifier>() == std::is_polymorphic<FInv_EquipModifier>(), "USTRUCT FInv_StrengthModifier cannot be polymorphic unless super FInv_EquipModifier is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_StrengthModifier;
class UScriptStruct* FInv_StrengthModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_StrengthModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_StrengthModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_StrengthModifier, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_StrengthModifier"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_StrengthModifier.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_StrengthModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_StrengthModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_StrengthModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_EquipModifier,
	&NewStructOps,
	"Inv_StrengthModifier",
	nullptr,
	0,
	sizeof(FInv_StrengthModifier),
	alignof(FInv_StrengthModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_StrengthModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_StrengthModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_StrengthModifier()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_StrengthModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_StrengthModifier.InnerSingleton, Z_Construct_UScriptStruct_FInv_StrengthModifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_StrengthModifier.InnerSingleton;
}
// ********** End ScriptStruct FInv_StrengthModifier ***********************************************

// ********** Begin ScriptStruct FInv_EquipmentFragment ********************************************
static_assert(std::is_polymorphic<FInv_EquipmentFragment>() == std::is_polymorphic<FInv_InventoryItemFragment>(), "USTRUCT FInv_EquipmentFragment cannot be polymorphic unless super FInv_InventoryItemFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_EquipmentFragment;
class UScriptStruct* FInv_EquipmentFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_EquipmentFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_EquipmentFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_EquipmentFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_EquipmentFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_EquipmentFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipModifiers_MetaData[] = {
		{ "BaseStruct", "/Script/Inventory.Inv_EquipModifier" },
		{ "Category", "Inventory" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipActorClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketAttachPoint_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentType_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipModifiers;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipActorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketAttachPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_EquipmentFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::NewProp_EquipModifiers_Inner = { "EquipModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 1627169465
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::NewProp_EquipModifiers = { "EquipModifiers", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_EquipmentFragment, EquipModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipModifiers_MetaData), NewProp_EquipModifiers_MetaData) }; // 1627169465
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::NewProp_EquipActorClass = { "EquipActorClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_EquipmentFragment, EquipActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AInv_EquipActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipActorClass_MetaData), NewProp_EquipActorClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::NewProp_SocketAttachPoint = { "SocketAttachPoint", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_EquipmentFragment, SocketAttachPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketAttachPoint_MetaData), NewProp_SocketAttachPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::NewProp_EquipmentType = { "EquipmentType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_EquipmentFragment, EquipmentType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentType_MetaData), NewProp_EquipmentType_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::NewProp_EquipModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::NewProp_EquipModifiers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::NewProp_EquipActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::NewProp_SocketAttachPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::NewProp_EquipmentType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_InventoryItemFragment,
	&NewStructOps,
	"Inv_EquipmentFragment",
	Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::PropPointers),
	sizeof(FInv_EquipmentFragment),
	alignof(FInv_EquipmentFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_EquipmentFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_EquipmentFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_EquipmentFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_EquipmentFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_EquipmentFragment **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Fragments_Inv_ItemFragment_h__Script_Inventory_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInv_ItemFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::NewStructOps, TEXT("Inv_ItemFragment"), &Z_Registration_Info_UScriptStruct_FInv_ItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ItemFragment), 3674159693U) },
		{ FInv_InventoryItemFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_InventoryItemFragment_Statics::NewStructOps, TEXT("Inv_InventoryItemFragment"), &Z_Registration_Info_UScriptStruct_FInv_InventoryItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_InventoryItemFragment), 1034900219U) },
		{ FInv_GridFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_GridFragment_Statics::NewStructOps, TEXT("Inv_GridFragment"), &Z_Registration_Info_UScriptStruct_FInv_GridFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_GridFragment), 2545756036U) },
		{ FInv_ImageFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::NewStructOps, TEXT("Inv_ImageFragment"), &Z_Registration_Info_UScriptStruct_FInv_ImageFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ImageFragment), 3036929295U) },
		{ FInv_TextFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_TextFragment_Statics::NewStructOps, TEXT("Inv_TextFragment"), &Z_Registration_Info_UScriptStruct_FInv_TextFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_TextFragment), 931660015U) },
		{ FInv_LabeledNumberFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_LabeledNumberFragment_Statics::NewStructOps, TEXT("Inv_LabeledNumberFragment"), &Z_Registration_Info_UScriptStruct_FInv_LabeledNumberFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_LabeledNumberFragment), 68500857U) },
		{ FInv_StackableFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::NewStructOps, TEXT("Inv_StackableFragment"), &Z_Registration_Info_UScriptStruct_FInv_StackableFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_StackableFragment), 1840590513U) },
		{ FInv_ConsumeModifier::StaticStruct, Z_Construct_UScriptStruct_FInv_ConsumeModifier_Statics::NewStructOps, TEXT("Inv_ConsumeModifier"), &Z_Registration_Info_UScriptStruct_FInv_ConsumeModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ConsumeModifier), 1505686392U) },
		{ FInv_ConsumableFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::NewStructOps, TEXT("Inv_ConsumableFragment"), &Z_Registration_Info_UScriptStruct_FInv_ConsumableFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ConsumableFragment), 2862455537U) },
		{ FInv_HealthPotionFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::NewStructOps, TEXT("Inv_HealthPotionFragment"), &Z_Registration_Info_UScriptStruct_FInv_HealthPotionFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_HealthPotionFragment), 248010701U) },
		{ FInv_ManaPotionFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::NewStructOps, TEXT("Inv_ManaPotionFragment"), &Z_Registration_Info_UScriptStruct_FInv_ManaPotionFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ManaPotionFragment), 1941754996U) },
		{ FInv_EquipModifier::StaticStruct, Z_Construct_UScriptStruct_FInv_EquipModifier_Statics::NewStructOps, TEXT("Inv_EquipModifier"), &Z_Registration_Info_UScriptStruct_FInv_EquipModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_EquipModifier), 4161311634U) },
		{ FInv_StrengthModifier::StaticStruct, Z_Construct_UScriptStruct_FInv_StrengthModifier_Statics::NewStructOps, TEXT("Inv_StrengthModifier"), &Z_Registration_Info_UScriptStruct_FInv_StrengthModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_StrengthModifier), 3794266459U) },
		{ FInv_EquipmentFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_EquipmentFragment_Statics::NewStructOps, TEXT("Inv_EquipmentFragment"), &Z_Registration_Info_UScriptStruct_FInv_EquipmentFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_EquipmentFragment), 1789478632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Fragments_Inv_ItemFragment_h__Script_Inventory_3069293457(TEXT("/Script/Inventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Fragments_Inv_ItemFragment_h__Script_Inventory_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Fragments_Inv_ItemFragment_h__Script_Inventory_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
