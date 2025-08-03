// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentManagement/Components/Inv_EquipmentComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_EquipmentComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORY_API UClass* Z_Construct_UClass_AInv_EquipActor_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_EquipmentComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInv_EquipmentComponent_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_EquipmentComponent Function OnItemEquipped **************************
struct Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics
{
	struct Inv_EquipmentComponent_eventOnItemEquipped_Parms
	{
		UInv_InventoryItem* EquippedItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagement/Components/Inv_EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics::NewProp_EquippedItem = { "EquippedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_EquipmentComponent_eventOnItemEquipped_Parms, EquippedItem), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics::NewProp_EquippedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_EquipmentComponent, nullptr, "OnItemEquipped", Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics::Inv_EquipmentComponent_eventOnItemEquipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics::Inv_EquipmentComponent_eventOnItemEquipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_EquipmentComponent::execOnItemEquipped)
{
	P_GET_OBJECT(UInv_InventoryItem,Z_Param_EquippedItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemEquipped(Z_Param_EquippedItem);
	P_NATIVE_END;
}
// ********** End Class UInv_EquipmentComponent Function OnItemEquipped ****************************

// ********** Begin Class UInv_EquipmentComponent Function OnItemUnequipped ************************
struct Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics
{
	struct Inv_EquipmentComponent_eventOnItemUnequipped_Parms
	{
		UInv_InventoryItem* UnequippedItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagement/Components/Inv_EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnequippedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics::NewProp_UnequippedItem = { "UnequippedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_EquipmentComponent_eventOnItemUnequipped_Parms, UnequippedItem), Z_Construct_UClass_UInv_InventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics::NewProp_UnequippedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_EquipmentComponent, nullptr, "OnItemUnequipped", Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics::Inv_EquipmentComponent_eventOnItemUnequipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics::Inv_EquipmentComponent_eventOnItemUnequipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_EquipmentComponent::execOnItemUnequipped)
{
	P_GET_OBJECT(UInv_InventoryItem,Z_Param_UnequippedItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemUnequipped(Z_Param_UnequippedItem);
	P_NATIVE_END;
}
// ********** End Class UInv_EquipmentComponent Function OnItemUnequipped **************************

// ********** Begin Class UInv_EquipmentComponent Function OnPossessedPawnChanged ******************
struct Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics
{
	struct Inv_EquipmentComponent_eventOnPossessedPawnChanged_Parms
	{
		APawn* OldPawn;
		APawn* NewPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagement/Components/Inv_EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_EquipmentComponent_eventOnPossessedPawnChanged_Parms, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_EquipmentComponent_eventOnPossessedPawnChanged_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::NewProp_OldPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::NewProp_NewPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_EquipmentComponent, nullptr, "OnPossessedPawnChanged", Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::Inv_EquipmentComponent_eventOnPossessedPawnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::Inv_EquipmentComponent_eventOnPossessedPawnChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_EquipmentComponent::execOnPossessedPawnChanged)
{
	P_GET_OBJECT(APawn,Z_Param_OldPawn);
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPossessedPawnChanged(Z_Param_OldPawn,Z_Param_NewPawn);
	P_NATIVE_END;
}
// ********** End Class UInv_EquipmentComponent Function OnPossessedPawnChanged ********************

// ********** Begin Class UInv_EquipmentComponent **************************************************
void UInv_EquipmentComponent::StaticRegisterNativesUInv_EquipmentComponent()
{
	UClass* Class = UInv_EquipmentComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnItemEquipped", &UInv_EquipmentComponent::execOnItemEquipped },
		{ "OnItemUnequipped", &UInv_EquipmentComponent::execOnItemUnequipped },
		{ "OnPossessedPawnChanged", &UInv_EquipmentComponent::execOnPossessedPawnChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_EquipmentComponent;
UClass* UInv_EquipmentComponent::GetPrivateStaticClass()
{
	using TClass = UInv_EquipmentComponent;
	if (!Z_Registration_Info_UClass_UInv_EquipmentComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_EquipmentComponent"),
			Z_Registration_Info_UClass_UInv_EquipmentComponent.InnerSingleton,
			StaticRegisterNativesUInv_EquipmentComponent,
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
	return Z_Registration_Info_UClass_UInv_EquipmentComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_EquipmentComponent_NoRegister()
{
	return UInv_EquipmentComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_EquipmentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EquipmentManagement/Components/Inv_EquipmentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EquipmentManagement/Components/Inv_EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentManagement/Components/Inv_EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EquippedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_EquipmentComponent_OnItemEquipped, "OnItemEquipped" }, // 3287280656
		{ &Z_Construct_UFunction_UInv_EquipmentComponent_OnItemUnequipped, "OnItemUnequipped" }, // 1917453890
		{ &Z_Construct_UFunction_UInv_EquipmentComponent_OnPossessedPawnChanged, "OnPossessedPawnChanged" }, // 2464403030
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_EquipmentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_EquipmentComponent_Statics::NewProp_EquippedActors_Inner = { "EquippedActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AInv_EquipActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInv_EquipmentComponent_Statics::NewProp_EquippedActors = { "EquippedActors", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_EquipmentComponent, EquippedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedActors_MetaData), NewProp_EquippedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_EquipmentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_EquipmentComponent_Statics::NewProp_EquippedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_EquipmentComponent_Statics::NewProp_EquippedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_EquipmentComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_EquipmentComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_EquipmentComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_EquipmentComponent_Statics::ClassParams = {
	&UInv_EquipmentComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_EquipmentComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_EquipmentComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_EquipmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_EquipmentComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_EquipmentComponent()
{
	if (!Z_Registration_Info_UClass_UInv_EquipmentComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_EquipmentComponent.OuterSingleton, Z_Construct_UClass_UInv_EquipmentComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_EquipmentComponent.OuterSingleton;
}
UInv_EquipmentComponent::UInv_EquipmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_EquipmentComponent);
UInv_EquipmentComponent::~UInv_EquipmentComponent() {}
// ********** End Class UInv_EquipmentComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_EquipmentComponent, UInv_EquipmentComponent::StaticClass, TEXT("UInv_EquipmentComponent"), &Z_Registration_Info_UClass_UInv_EquipmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_EquipmentComponent), 1723580098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h__Script_Inventory_3418733976(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_EquipmentManagement_Components_Inv_EquipmentComponent_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
