// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryManagement/Inv_InventoryStatics.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_InventoryStatics() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryComponent_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryStatics();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryStatics_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister();
INVENTORY_API UEnum* Z_Construct_UEnum_Inventory_EInv_ItemCategory();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_InventoryStatics Function GetInventoryComponent *********************
struct Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics
{
	struct Inv_InventoryStatics_eventGetInventoryComponent_Parms
	{
		const APlayerController* PlayerController;
		UInv_InventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Inv_InventoryStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryStatics_eventGetInventoryComponent_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryStatics_eventGetInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UInv_InventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryStatics, nullptr, "GetInventoryComponent", Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::Inv_InventoryStatics_eventGetInventoryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::Inv_InventoryStatics_eventGetInventoryComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryStatics::execGetInventoryComponent)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInv_InventoryComponent**)Z_Param__Result=UInv_InventoryStatics::GetInventoryComponent(Z_Param_PlayerController);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryStatics Function GetInventoryComponent ***********************

// ********** Begin Class UInv_InventoryStatics Function GetItemCategoryFromItemComp ***************
struct Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics
{
	struct Inv_InventoryStatics_eventGetItemCategoryFromItemComp_Parms
	{
		UInv_ItemComponent* ItemComponent;
		EInv_ItemCategory ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Inv_InventoryStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::NewProp_ItemComponent = { "ItemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryStatics_eventGetItemCategoryFromItemComp_Parms, ItemComponent), Z_Construct_UClass_UInv_ItemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemComponent_MetaData), NewProp_ItemComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryStatics_eventGetItemCategoryFromItemComp_Parms, ReturnValue), Z_Construct_UEnum_Inventory_EInv_ItemCategory, METADATA_PARAMS(0, nullptr) }; // 4149887105
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::NewProp_ItemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryStatics, nullptr, "GetItemCategoryFromItemComp", Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::Inv_InventoryStatics_eventGetItemCategoryFromItemComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::Inv_InventoryStatics_eventGetItemCategoryFromItemComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryStatics::execGetItemCategoryFromItemComp)
{
	P_GET_OBJECT(UInv_ItemComponent,Z_Param_ItemComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EInv_ItemCategory*)Z_Param__Result=UInv_InventoryStatics::GetItemCategoryFromItemComp(Z_Param_ItemComponent);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryStatics Function GetItemCategoryFromItemComp *****************

// ********** Begin Class UInv_InventoryStatics Function ItemHovered *******************************
struct Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics
{
	struct Inv_InventoryStatics_eventItemHovered_Parms
	{
		APlayerController* PC;
		UInv_InventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Inv_InventoryStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryStatics_eventItemHovered_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryStatics_eventItemHovered_Parms, Item), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::NewProp_PC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryStatics, nullptr, "ItemHovered", Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::Inv_InventoryStatics_eventItemHovered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::Inv_InventoryStatics_eventItemHovered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryStatics::execItemHovered)
{
	P_GET_OBJECT(APlayerController,Z_Param_PC);
	P_GET_OBJECT(UInv_InventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInv_InventoryStatics::ItemHovered(Z_Param_PC,Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryStatics Function ItemHovered *********************************

// ********** Begin Class UInv_InventoryStatics Function ItemUnhovered *****************************
struct Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics
{
	struct Inv_InventoryStatics_eventItemUnhovered_Parms
	{
		APlayerController* PC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Inv_InventoryStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryStatics_eventItemUnhovered_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics::NewProp_PC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryStatics, nullptr, "ItemUnhovered", Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics::Inv_InventoryStatics_eventItemUnhovered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics::Inv_InventoryStatics_eventItemUnhovered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryStatics::execItemUnhovered)
{
	P_GET_OBJECT(APlayerController,Z_Param_PC);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInv_InventoryStatics::ItemUnhovered(Z_Param_PC);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryStatics Function ItemUnhovered *******************************

// ********** Begin Class UInv_InventoryStatics ****************************************************
void UInv_InventoryStatics::StaticRegisterNativesUInv_InventoryStatics()
{
	UClass* Class = UInv_InventoryStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInventoryComponent", &UInv_InventoryStatics::execGetInventoryComponent },
		{ "GetItemCategoryFromItemComp", &UInv_InventoryStatics::execGetItemCategoryFromItemComp },
		{ "ItemHovered", &UInv_InventoryStatics::execItemHovered },
		{ "ItemUnhovered", &UInv_InventoryStatics::execItemUnhovered },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_InventoryStatics;
UClass* UInv_InventoryStatics::GetPrivateStaticClass()
{
	using TClass = UInv_InventoryStatics;
	if (!Z_Registration_Info_UClass_UInv_InventoryStatics.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_InventoryStatics"),
			Z_Registration_Info_UClass_UInv_InventoryStatics.InnerSingleton,
			StaticRegisterNativesUInv_InventoryStatics,
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
	return Z_Registration_Info_UClass_UInv_InventoryStatics.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_InventoryStatics_NoRegister()
{
	return UInv_InventoryStatics::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_InventoryStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InventoryManagement/Inv_InventoryStatics.h" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Inv_InventoryStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent, "GetInventoryComponent" }, // 3914320705
		{ &Z_Construct_UFunction_UInv_InventoryStatics_GetItemCategoryFromItemComp, "GetItemCategoryFromItemComp" }, // 2384041858
		{ &Z_Construct_UFunction_UInv_InventoryStatics_ItemHovered, "ItemHovered" }, // 2815612186
		{ &Z_Construct_UFunction_UInv_InventoryStatics_ItemUnhovered, "ItemUnhovered" }, // 1612261093
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InventoryStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_InventoryStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InventoryStatics_Statics::ClassParams = {
	&UInv_InventoryStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InventoryStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InventoryStatics()
{
	if (!Z_Registration_Info_UClass_UInv_InventoryStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InventoryStatics.OuterSingleton, Z_Construct_UClass_UInv_InventoryStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InventoryStatics.OuterSingleton;
}
UInv_InventoryStatics::UInv_InventoryStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InventoryStatics);
UInv_InventoryStatics::~UInv_InventoryStatics() {}
// ********** End Class UInv_InventoryStatics ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Inv_InventoryStatics_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InventoryStatics, UInv_InventoryStatics::StaticClass, TEXT("UInv_InventoryStatics"), &Z_Registration_Info_UClass_UInv_InventoryStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InventoryStatics), 1110581762U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Inv_InventoryStatics_h__Script_Inventory_668257065(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Inv_InventoryStatics_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Inv_InventoryStatics_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
