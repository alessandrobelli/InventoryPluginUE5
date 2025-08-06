// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/Inv_PlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_PlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_AInv_PlayerController();
INVENTORY_API UClass* Z_Construct_UClass_AInv_PlayerController_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_HUDWidget_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInv_PlayerController Function ToggleInventory ***************************
struct Z_Construct_UFunction_AInv_PlayerController_ToggleInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInv_PlayerController_ToggleInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInv_PlayerController, nullptr, "ToggleInventory", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInv_PlayerController_ToggleInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInv_PlayerController_ToggleInventory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AInv_PlayerController_ToggleInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInv_PlayerController_ToggleInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInv_PlayerController::execToggleInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleInventory();
	P_NATIVE_END;
}
// ********** End Class AInv_PlayerController Function ToggleInventory *****************************

// ********** Begin Class AInv_PlayerController ****************************************************
void AInv_PlayerController::StaticRegisterNativesAInv_PlayerController()
{
	UClass* Class = AInv_PlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToggleInventory", &AInv_PlayerController::execToggleInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInv_PlayerController;
UClass* AInv_PlayerController::GetPrivateStaticClass()
{
	using TClass = AInv_PlayerController;
	if (!Z_Registration_Info_UClass_AInv_PlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_PlayerController"),
			Z_Registration_Info_UClass_AInv_PlayerController.InnerSingleton,
			StaticRegisterNativesAInv_PlayerController,
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
	return Z_Registration_Info_UClass_AInv_PlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AInv_PlayerController_NoRegister()
{
	return AInv_PlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInv_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/Inv_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIMCs_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryInventoryAction_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleInventoryAction_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTraceChannel_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingPickupComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultIMCs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultIMCs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryInventoryAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleInventoryAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TraceLength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemTraceChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingPickupComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInv_PlayerController_ToggleInventory, "ToggleInventory" }, // 2049556057
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInv_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_DefaultIMCs_Inner = { "DefaultIMCs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_DefaultIMCs = { "DefaultIMCs", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, DefaultIMCs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultIMCs_MetaData), NewProp_DefaultIMCs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_PrimaryInventoryAction = { "PrimaryInventoryAction", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, PrimaryInventoryAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryInventoryAction_MetaData), NewProp_PrimaryInventoryAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_ToggleInventoryAction = { "ToggleInventoryAction", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, ToggleInventoryAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleInventoryAction_MetaData), NewProp_ToggleInventoryAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_HUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, HUDWidget), Z_Construct_UClass_UInv_HUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidget_MetaData), NewProp_HUDWidget_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, TraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceLength_MetaData), NewProp_TraceLength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_ItemTraceChannel = { "ItemTraceChannel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, ItemTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTraceChannel_MetaData), NewProp_ItemTraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_PendingPickupComponent = { "PendingPickupComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, PendingPickupComponent), Z_Construct_UClass_UInv_ItemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingPickupComponent_MetaData), NewProp_PendingPickupComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_DefaultIMCs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_DefaultIMCs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_PrimaryInventoryAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_ToggleInventoryAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_HUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_TraceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_ItemTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_PendingPickupComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInv_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInv_PlayerController_Statics::ClassParams = {
	&AInv_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AInv_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInv_PlayerController()
{
	if (!Z_Registration_Info_UClass_AInv_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInv_PlayerController.OuterSingleton, Z_Construct_UClass_AInv_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInv_PlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInv_PlayerController);
AInv_PlayerController::~AInv_PlayerController() {}
// ********** End Class AInv_PlayerController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInv_PlayerController, AInv_PlayerController::StaticClass, TEXT("AInv_PlayerController"), &Z_Registration_Info_UClass_AInv_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInv_PlayerController), 2709433369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h__Script_Inventory_3751461300(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
