// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/Fragments/Inv_ItemFragment.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_ItemFragment() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ConsumableFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_GridFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_HealthPotionFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ImageFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_InventoryItemFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ItemFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ManaPotionFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_StackableFragment();
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

// ********** Begin ScriptStruct FInv_ConsumableFragment *******************************************
static_assert(std::is_polymorphic<FInv_ConsumableFragment>() == std::is_polymorphic<FInv_ItemFragment>(), "USTRUCT FInv_ConsumableFragment cannot be polymorphic unless super FInv_ItemFragment is polymorphic");
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
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_ConsumableFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_ItemFragment,
	&NewStructOps,
	"Inv_ConsumableFragment",
	nullptr,
	0,
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
static_assert(std::is_polymorphic<FInv_HealthPotionFragment>() == std::is_polymorphic<FInv_ConsumableFragment>(), "USTRUCT FInv_HealthPotionFragment cannot be polymorphic unless super FInv_ConsumableFragment is polymorphic");
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_HealthPotionFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_HealthPotionFragment, HealAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealAmount_MetaData), NewProp_HealAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::NewProp_HealAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_ConsumableFragment,
	&NewStructOps,
	"Inv_HealthPotionFragment",
	Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::PropPointers),
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
static_assert(std::is_polymorphic<FInv_ManaPotionFragment>() == std::is_polymorphic<FInv_ConsumableFragment>(), "USTRUCT FInv_ManaPotionFragment cannot be polymorphic unless super FInv_ConsumableFragment is polymorphic");
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaAmount_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_ManaPotionFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::NewProp_ManaAmount = { "ManaAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ManaPotionFragment, ManaAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaAmount_MetaData), NewProp_ManaAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::NewProp_ManaAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_ConsumableFragment,
	&NewStructOps,
	"Inv_ManaPotionFragment",
	Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::PropPointers),
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

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Fragments_Inv_ItemFragment_h__Script_Inventory_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInv_ItemFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::NewStructOps, TEXT("Inv_ItemFragment"), &Z_Registration_Info_UScriptStruct_FInv_ItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ItemFragment), 3674159693U) },
		{ FInv_InventoryItemFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_InventoryItemFragment_Statics::NewStructOps, TEXT("Inv_InventoryItemFragment"), &Z_Registration_Info_UScriptStruct_FInv_InventoryItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_InventoryItemFragment), 1034900219U) },
		{ FInv_GridFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_GridFragment_Statics::NewStructOps, TEXT("Inv_GridFragment"), &Z_Registration_Info_UScriptStruct_FInv_GridFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_GridFragment), 2545756036U) },
		{ FInv_ImageFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::NewStructOps, TEXT("Inv_ImageFragment"), &Z_Registration_Info_UScriptStruct_FInv_ImageFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ImageFragment), 3036929295U) },
		{ FInv_TextFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_TextFragment_Statics::NewStructOps, TEXT("Inv_TextFragment"), &Z_Registration_Info_UScriptStruct_FInv_TextFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_TextFragment), 931660015U) },
		{ FInv_StackableFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_StackableFragment_Statics::NewStructOps, TEXT("Inv_StackableFragment"), &Z_Registration_Info_UScriptStruct_FInv_StackableFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_StackableFragment), 1840590513U) },
		{ FInv_ConsumableFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_ConsumableFragment_Statics::NewStructOps, TEXT("Inv_ConsumableFragment"), &Z_Registration_Info_UScriptStruct_FInv_ConsumableFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ConsumableFragment), 3794370278U) },
		{ FInv_HealthPotionFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_HealthPotionFragment_Statics::NewStructOps, TEXT("Inv_HealthPotionFragment"), &Z_Registration_Info_UScriptStruct_FInv_HealthPotionFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_HealthPotionFragment), 1716301268U) },
		{ FInv_ManaPotionFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_ManaPotionFragment_Statics::NewStructOps, TEXT("Inv_ManaPotionFragment"), &Z_Registration_Info_UScriptStruct_FInv_ManaPotionFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ManaPotionFragment), 2025957222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Fragments_Inv_ItemFragment_h__Script_Inventory_531327087(TEXT("/Script/Inventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Fragments_Inv_ItemFragment_h__Script_Inventory_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Fragments_Inv_ItemFragment_h__Script_Inventory_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
