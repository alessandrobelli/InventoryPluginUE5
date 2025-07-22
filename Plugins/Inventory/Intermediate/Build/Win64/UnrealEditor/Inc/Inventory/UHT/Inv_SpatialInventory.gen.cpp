// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Inventory/Spatial/Inv_SpatialInventory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_SpatialInventory() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryBase();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryGrid_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_SpatialInventory();
INVENTORY_API UClass* Z_Construct_UClass_UInv_SpatialInventory_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_SpatialInventory Function SetActiveGrid *****************************
struct Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics
{
	struct Inv_SpatialInventory_eventSetActiveGrid_Parms
	{
		UInv_InventoryGrid* Grid;
		UButton* Button;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_SpatialInventory_eventSetActiveGrid_Parms, Grid), Z_Construct_UClass_UInv_InventoryGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_MetaData), NewProp_Grid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_SpatialInventory_eventSetActiveGrid_Parms, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MetaData), NewProp_Button_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::NewProp_Grid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::NewProp_Button,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_SpatialInventory, nullptr, "SetActiveGrid", Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::Inv_SpatialInventory_eventSetActiveGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::Inv_SpatialInventory_eventSetActiveGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_SpatialInventory::execSetActiveGrid)
{
	P_GET_OBJECT(UInv_InventoryGrid,Z_Param_Grid);
	P_GET_OBJECT(UButton,Z_Param_Button);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveGrid(Z_Param_Grid,Z_Param_Button);
	P_NATIVE_END;
}
// ********** End Class UInv_SpatialInventory Function SetActiveGrid *******************************

// ********** Begin Class UInv_SpatialInventory Function ShowConsumables ***************************
struct Z_Construct_UFunction_UInv_SpatialInventory_ShowConsumables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_SpatialInventory_ShowConsumables_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_SpatialInventory, nullptr, "ShowConsumables", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_SpatialInventory_ShowConsumables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_SpatialInventory_ShowConsumables_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_SpatialInventory_ShowConsumables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_SpatialInventory_ShowConsumables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_SpatialInventory::execShowConsumables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowConsumables();
	P_NATIVE_END;
}
// ********** End Class UInv_SpatialInventory Function ShowConsumables *****************************

// ********** Begin Class UInv_SpatialInventory Function ShowCraftables ****************************
struct Z_Construct_UFunction_UInv_SpatialInventory_ShowCraftables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_SpatialInventory_ShowCraftables_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_SpatialInventory, nullptr, "ShowCraftables", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_SpatialInventory_ShowCraftables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_SpatialInventory_ShowCraftables_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_SpatialInventory_ShowCraftables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_SpatialInventory_ShowCraftables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_SpatialInventory::execShowCraftables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowCraftables();
	P_NATIVE_END;
}
// ********** End Class UInv_SpatialInventory Function ShowCraftables ******************************

// ********** Begin Class UInv_SpatialInventory Function ShowEquippables ***************************
struct Z_Construct_UFunction_UInv_SpatialInventory_ShowEquippables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_SpatialInventory_ShowEquippables_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_SpatialInventory, nullptr, "ShowEquippables", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_SpatialInventory_ShowEquippables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_SpatialInventory_ShowEquippables_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_SpatialInventory_ShowEquippables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_SpatialInventory_ShowEquippables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_SpatialInventory::execShowEquippables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowEquippables();
	P_NATIVE_END;
}
// ********** End Class UInv_SpatialInventory Function ShowEquippables *****************************

// ********** Begin Class UInv_SpatialInventory ****************************************************
void UInv_SpatialInventory::StaticRegisterNativesUInv_SpatialInventory()
{
	UClass* Class = UInv_SpatialInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetActiveGrid", &UInv_SpatialInventory::execSetActiveGrid },
		{ "ShowConsumables", &UInv_SpatialInventory::execShowConsumables },
		{ "ShowCraftables", &UInv_SpatialInventory::execShowCraftables },
		{ "ShowEquippables", &UInv_SpatialInventory::execShowEquippables },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_SpatialInventory;
UClass* UInv_SpatialInventory::GetPrivateStaticClass()
{
	using TClass = UInv_SpatialInventory;
	if (!Z_Registration_Info_UClass_UInv_SpatialInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_SpatialInventory"),
			Z_Registration_Info_UClass_UInv_SpatialInventory.InnerSingleton,
			StaticRegisterNativesUInv_SpatialInventory,
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
	return Z_Registration_Info_UClass_UInv_SpatialInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_SpatialInventory_NoRegister()
{
	return UInv_SpatialInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_SpatialInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Switcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_Equippables_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_Consumables_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_Craftables_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Equippables_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Consumables_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Craftables_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Switcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid_Equippables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid_Consumables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid_Craftables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Equippables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Consumables;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Craftables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_SpatialInventory_SetActiveGrid, "SetActiveGrid" }, // 3357512524
		{ &Z_Construct_UFunction_UInv_SpatialInventory_ShowConsumables, "ShowConsumables" }, // 3261048372
		{ &Z_Construct_UFunction_UInv_SpatialInventory_ShowCraftables, "ShowCraftables" }, // 1259406804
		{ &Z_Construct_UFunction_UInv_SpatialInventory_ShowEquippables, "ShowEquippables" }, // 2956381750
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_SpatialInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_CanvasPanel = { "CanvasPanel", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SpatialInventory, CanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPanel_MetaData), NewProp_CanvasPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Switcher = { "Switcher", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SpatialInventory, Switcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Switcher_MetaData), NewProp_Switcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Grid_Equippables = { "Grid_Equippables", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SpatialInventory, Grid_Equippables), Z_Construct_UClass_UInv_InventoryGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_Equippables_MetaData), NewProp_Grid_Equippables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Grid_Consumables = { "Grid_Consumables", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SpatialInventory, Grid_Consumables), Z_Construct_UClass_UInv_InventoryGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_Consumables_MetaData), NewProp_Grid_Consumables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Grid_Craftables = { "Grid_Craftables", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SpatialInventory, Grid_Craftables), Z_Construct_UClass_UInv_InventoryGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_Craftables_MetaData), NewProp_Grid_Craftables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Button_Equippables = { "Button_Equippables", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SpatialInventory, Button_Equippables), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Equippables_MetaData), NewProp_Button_Equippables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Button_Consumables = { "Button_Consumables", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SpatialInventory, Button_Consumables), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Consumables_MetaData), NewProp_Button_Consumables_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Button_Craftables = { "Button_Craftables", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_SpatialInventory, Button_Craftables), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Craftables_MetaData), NewProp_Button_Craftables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_SpatialInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_CanvasPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Switcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Grid_Equippables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Grid_Consumables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Grid_Craftables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Button_Equippables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Button_Consumables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_SpatialInventory_Statics::NewProp_Button_Craftables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SpatialInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_SpatialInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInv_InventoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SpatialInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_SpatialInventory_Statics::ClassParams = {
	&UInv_SpatialInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_SpatialInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SpatialInventory_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SpatialInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_SpatialInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_SpatialInventory()
{
	if (!Z_Registration_Info_UClass_UInv_SpatialInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_SpatialInventory.OuterSingleton, Z_Construct_UClass_UInv_SpatialInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_SpatialInventory.OuterSingleton;
}
UInv_SpatialInventory::UInv_SpatialInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_SpatialInventory);
UInv_SpatialInventory::~UInv_SpatialInventory() {}
// ********** End Class UInv_SpatialInventory ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_SpatialInventory, UInv_SpatialInventory::StaticClass, TEXT("UInv_SpatialInventory"), &Z_Registration_Info_UClass_UInv_SpatialInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_SpatialInventory), 2005730300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h__Script_Inventory_2455857925(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
