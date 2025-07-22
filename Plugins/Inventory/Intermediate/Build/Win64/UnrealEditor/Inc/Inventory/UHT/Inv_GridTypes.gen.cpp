// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/Inv_GridTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_GridTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
INVENTORY_API UEnum* Z_Construct_UEnum_Inventory_EInv_ItemCategory();
INVENTORY_API UEnum* Z_Construct_UEnum_Inventory_EInv_TileQuadrant();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailability();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_SpaceQueryResult();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_TileParameters();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EInv_ItemCategory *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInv_ItemCategory;
static UEnum* EInv_ItemCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInv_ItemCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInv_ItemCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Inventory_EInv_ItemCategory, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("EInv_ItemCategory"));
	}
	return Z_Registration_Info_UEnum_EInv_ItemCategory.OuterSingleton;
}
template<> INVENTORY_API UEnum* StaticEnum<EInv_ItemCategory>()
{
	return EInv_ItemCategory_StaticEnum();
}
struct Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Consumable.Name", "EInv_ItemCategory::Consumable" },
		{ "Craftable.Name", "EInv_ItemCategory::Craftable" },
		{ "Equippable.Name", "EInv_ItemCategory::Equippable" },
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
		{ "None.Name", "EInv_ItemCategory::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInv_ItemCategory::Equippable", (int64)EInv_ItemCategory::Equippable },
		{ "EInv_ItemCategory::Consumable", (int64)EInv_ItemCategory::Consumable },
		{ "EInv_ItemCategory::Craftable", (int64)EInv_ItemCategory::Craftable },
		{ "EInv_ItemCategory::None", (int64)EInv_ItemCategory::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	"EInv_ItemCategory",
	"EInv_ItemCategory",
	Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Inventory_EInv_ItemCategory()
{
	if (!Z_Registration_Info_UEnum_EInv_ItemCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInv_ItemCategory.InnerSingleton, Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInv_ItemCategory.InnerSingleton;
}
// ********** End Enum EInv_ItemCategory ***********************************************************

// ********** Begin ScriptStruct FInv_SlotAvailability *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_SlotAvailability;
class UScriptStruct* FInv_SlotAvailability::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_SlotAvailability, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_SlotAvailability"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_SlotAvailability>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	&NewStructOps,
	"Inv_SlotAvailability",
	nullptr,
	0,
	sizeof(FInv_SlotAvailability),
	alignof(FInv_SlotAvailability),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailability()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.InnerSingleton, Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.InnerSingleton;
}
// ********** End ScriptStruct FInv_SlotAvailability ***********************************************

// ********** Begin ScriptStruct FInv_SlotAvailabilityResult ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult;
class UScriptStruct* FInv_SlotAvailabilityResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_SlotAvailabilityResult"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_SlotAvailabilityResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	&NewStructOps,
	"Inv_SlotAvailabilityResult",
	nullptr,
	0,
	sizeof(FInv_SlotAvailabilityResult),
	alignof(FInv_SlotAvailabilityResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.InnerSingleton, Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.InnerSingleton;
}
// ********** End ScriptStruct FInv_SlotAvailabilityResult *****************************************

// ********** Begin Enum EInv_TileQuadrant *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInv_TileQuadrant;
static UEnum* EInv_TileQuadrant_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInv_TileQuadrant.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInv_TileQuadrant.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Inventory_EInv_TileQuadrant, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("EInv_TileQuadrant"));
	}
	return Z_Registration_Info_UEnum_EInv_TileQuadrant.OuterSingleton;
}
template<> INVENTORY_API UEnum* StaticEnum<EInv_TileQuadrant>()
{
	return EInv_TileQuadrant_StaticEnum();
}
struct Z_Construct_UEnum_Inventory_EInv_TileQuadrant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BottomLeft.Name", "EInv_TileQuadrant::BottomLeft" },
		{ "BottomRight.Name", "EInv_TileQuadrant::BottomRight" },
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
		{ "None.Name", "EInv_TileQuadrant::None" },
		{ "TopLeft.Name", "EInv_TileQuadrant::TopLeft" },
		{ "TopRight.Name", "EInv_TileQuadrant::TopRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInv_TileQuadrant::TopLeft", (int64)EInv_TileQuadrant::TopLeft },
		{ "EInv_TileQuadrant::TopRight", (int64)EInv_TileQuadrant::TopRight },
		{ "EInv_TileQuadrant::BottomLeft", (int64)EInv_TileQuadrant::BottomLeft },
		{ "EInv_TileQuadrant::BottomRight", (int64)EInv_TileQuadrant::BottomRight },
		{ "EInv_TileQuadrant::None", (int64)EInv_TileQuadrant::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Inventory_EInv_TileQuadrant_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	"EInv_TileQuadrant",
	"EInv_TileQuadrant",
	Z_Construct_UEnum_Inventory_EInv_TileQuadrant_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EInv_TileQuadrant_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EInv_TileQuadrant_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Inventory_EInv_TileQuadrant_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Inventory_EInv_TileQuadrant()
{
	if (!Z_Registration_Info_UEnum_EInv_TileQuadrant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInv_TileQuadrant.InnerSingleton, Z_Construct_UEnum_Inventory_EInv_TileQuadrant_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInv_TileQuadrant.InnerSingleton;
}
// ********** End Enum EInv_TileQuadrant ***********************************************************

// ********** Begin ScriptStruct FInv_TileParameters ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_TileParameters;
class UScriptStruct* FInv_TileParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_TileParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_TileParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_TileParameters, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_TileParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_TileParameters.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_TileParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileCoordinates_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileIndex_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileQuadrant_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoordinates;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TileQuadrant_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TileQuadrant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_TileParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_TileParameters_Statics::NewProp_TileCoordinates = { "TileCoordinates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_TileParameters, TileCoordinates), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileCoordinates_MetaData), NewProp_TileCoordinates_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInv_TileParameters_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_TileParameters, TileIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIndex_MetaData), NewProp_TileIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInv_TileParameters_Statics::NewProp_TileQuadrant_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInv_TileParameters_Statics::NewProp_TileQuadrant = { "TileQuadrant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_TileParameters, TileQuadrant), Z_Construct_UEnum_Inventory_EInv_TileQuadrant, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileQuadrant_MetaData), NewProp_TileQuadrant_MetaData) }; // 2337047521
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_TileParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_TileParameters_Statics::NewProp_TileCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_TileParameters_Statics::NewProp_TileIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_TileParameters_Statics::NewProp_TileQuadrant_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_TileParameters_Statics::NewProp_TileQuadrant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_TileParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_TileParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	&NewStructOps,
	"Inv_TileParameters",
	Z_Construct_UScriptStruct_FInv_TileParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_TileParameters_Statics::PropPointers),
	sizeof(FInv_TileParameters),
	alignof(FInv_TileParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_TileParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_TileParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_TileParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_TileParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_TileParameters.InnerSingleton, Z_Construct_UScriptStruct_FInv_TileParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_TileParameters.InnerSingleton;
}
// ********** End ScriptStruct FInv_TileParameters *************************************************

// ********** Begin ScriptStruct FInv_SpaceQueryResult *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_SpaceQueryResult;
class UScriptStruct* FInv_SpaceQueryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SpaceQueryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_SpaceQueryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_SpaceQueryResult, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_SpaceQueryResult"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_SpaceQueryResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_SpaceQueryResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_SpaceQueryResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_SpaceQueryResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	&NewStructOps,
	"Inv_SpaceQueryResult",
	nullptr,
	0,
	sizeof(FInv_SpaceQueryResult),
	alignof(FInv_SpaceQueryResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_SpaceQueryResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_SpaceQueryResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_SpaceQueryResult()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SpaceQueryResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_SpaceQueryResult.InnerSingleton, Z_Construct_UScriptStruct_FInv_SpaceQueryResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_SpaceQueryResult.InnerSingleton;
}
// ********** End ScriptStruct FInv_SpaceQueryResult ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h__Script_Inventory_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInv_ItemCategory_StaticEnum, TEXT("EInv_ItemCategory"), &Z_Registration_Info_UEnum_EInv_ItemCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4149887105U) },
		{ EInv_TileQuadrant_StaticEnum, TEXT("EInv_TileQuadrant"), &Z_Registration_Info_UEnum_EInv_TileQuadrant, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2337047521U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInv_SlotAvailability::StaticStruct, Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::NewStructOps, TEXT("Inv_SlotAvailability"), &Z_Registration_Info_UScriptStruct_FInv_SlotAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_SlotAvailability), 1719608740U) },
		{ FInv_SlotAvailabilityResult::StaticStruct, Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::NewStructOps, TEXT("Inv_SlotAvailabilityResult"), &Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_SlotAvailabilityResult), 412004226U) },
		{ FInv_TileParameters::StaticStruct, Z_Construct_UScriptStruct_FInv_TileParameters_Statics::NewStructOps, TEXT("Inv_TileParameters"), &Z_Registration_Info_UScriptStruct_FInv_TileParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_TileParameters), 726636375U) },
		{ FInv_SpaceQueryResult::StaticStruct, Z_Construct_UScriptStruct_FInv_SpaceQueryResult_Statics::NewStructOps, TEXT("Inv_SpaceQueryResult"), &Z_Registration_Info_UScriptStruct_FInv_SpaceQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_SpaceQueryResult), 2963758254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h__Script_Inventory_3645493718(TEXT("/Script/Inventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h__Script_Inventory_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h__Script_Inventory_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h__Script_Inventory_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h__Script_Inventory_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
