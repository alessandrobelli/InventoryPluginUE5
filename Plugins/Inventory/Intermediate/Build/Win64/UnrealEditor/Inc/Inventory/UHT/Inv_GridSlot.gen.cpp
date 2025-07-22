// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Inventory/GridSlots/Inv_GridSlot.h"
#include "Input/Events.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_GridSlot() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_GridSlot();
INVENTORY_API UClass* Z_Construct_UClass_UInv_GridSlot_NoRegister();
INVENTORY_API UEnum* Z_Construct_UEnum_Inventory_EInv_GridSlotState();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FGridSlotEvent ********************************************************
struct Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics
{
	struct _Script_Inventory_eventGridSlotEvent_Parms
	{
		int32 GridIndex;
		FPointerEvent MouseEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_GridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventGridSlotEvent_Parms, GridIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventGridSlotEvent_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseEvent_MetaData), NewProp_MouseEvent_MetaData) }; // 1462487918
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::NewProp_GridIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::NewProp_MouseEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "GridSlotEvent__DelegateSignature", Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::_Script_Inventory_eventGridSlotEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::_Script_Inventory_eventGridSlotEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_GridSlotEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGridSlotEvent_DelegateWrapper(const FMulticastScriptDelegate& GridSlotEvent, int32 GridIndex, FPointerEvent const& MouseEvent)
{
	struct _Script_Inventory_eventGridSlotEvent_Parms
	{
		int32 GridIndex;
		FPointerEvent MouseEvent;
	};
	_Script_Inventory_eventGridSlotEvent_Parms Parms;
	Parms.GridIndex=GridIndex;
	Parms.MouseEvent=MouseEvent;
	GridSlotEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FGridSlotEvent **********************************************************

// ********** Begin Enum EInv_GridSlotState ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInv_GridSlotState;
static UEnum* EInv_GridSlotState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInv_GridSlotState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInv_GridSlotState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Inventory_EInv_GridSlotState, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("EInv_GridSlotState"));
	}
	return Z_Registration_Info_UEnum_EInv_GridSlotState.OuterSingleton;
}
template<> INVENTORY_API UEnum* StaticEnum<EInv_GridSlotState>()
{
	return EInv_GridSlotState_StaticEnum();
}
struct Z_Construct_UEnum_Inventory_EInv_GridSlotState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GrayedOut.Name", "EInv_GridSlotState::GrayedOut" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_GridSlot.h" },
		{ "Occupied.Name", "EInv_GridSlotState::Occupied" },
		{ "Selected.Name", "EInv_GridSlotState::Selected" },
		{ "Unoccupied.Name", "EInv_GridSlotState::Unoccupied" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInv_GridSlotState::Unoccupied", (int64)EInv_GridSlotState::Unoccupied },
		{ "EInv_GridSlotState::Occupied", (int64)EInv_GridSlotState::Occupied },
		{ "EInv_GridSlotState::Selected", (int64)EInv_GridSlotState::Selected },
		{ "EInv_GridSlotState::GrayedOut", (int64)EInv_GridSlotState::GrayedOut },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Inventory_EInv_GridSlotState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	"EInv_GridSlotState",
	"EInv_GridSlotState",
	Z_Construct_UEnum_Inventory_EInv_GridSlotState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EInv_GridSlotState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EInv_GridSlotState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Inventory_EInv_GridSlotState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Inventory_EInv_GridSlotState()
{
	if (!Z_Registration_Info_UEnum_EInv_GridSlotState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInv_GridSlotState.InnerSingleton, Z_Construct_UEnum_Inventory_EInv_GridSlotState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInv_GridSlotState.InnerSingleton;
}
// ********** End Enum EInv_GridSlotState **********************************************************

// ********** Begin Class UInv_GridSlot Function OnItemPopUpDestruct *******************************
struct Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics
{
	struct Inv_GridSlot_eventOnItemPopUpDestruct_Parms
	{
		UUserWidget* Menu;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_GridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Menu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Menu;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_GridSlot_eventOnItemPopUpDestruct_Parms, Menu), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Menu_MetaData), NewProp_Menu_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics::NewProp_Menu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_GridSlot, nullptr, "OnItemPopUpDestruct", Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics::Inv_GridSlot_eventOnItemPopUpDestruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics::Inv_GridSlot_eventOnItemPopUpDestruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_GridSlot::execOnItemPopUpDestruct)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Menu);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemPopUpDestruct(Z_Param_Menu);
	P_NATIVE_END;
}
// ********** End Class UInv_GridSlot Function OnItemPopUpDestruct *********************************

// ********** Begin Class UInv_GridSlot ************************************************************
void UInv_GridSlot::StaticRegisterNativesUInv_GridSlot()
{
	UClass* Class = UInv_GridSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnItemPopUpDestruct", &UInv_GridSlot::execOnItemPopUpDestruct },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_GridSlot;
UClass* UInv_GridSlot::GetPrivateStaticClass()
{
	using TClass = UInv_GridSlot;
	if (!Z_Registration_Info_UClass_UInv_GridSlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_GridSlot"),
			Z_Registration_Info_UClass_UInv_GridSlot.InnerSingleton,
			StaticRegisterNativesUInv_GridSlot,
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
	return Z_Registration_Info_UClass_UInv_GridSlot.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_GridSlot_NoRegister()
{
	return UInv_GridSlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_GridSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/Inventory/GridSlots/Inv_GridSlot.h" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_GridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_GridSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_GridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_Unoccupied_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_GridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_Occupied_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_GridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_Selected_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_GridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_GrayedOut_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/GridSlots/Inv_GridSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_GridSlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush_Unoccupied;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush_Occupied;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush_Selected;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush_GrayedOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_GridSlot_OnItemPopUpDestruct, "OnItemPopUpDestruct" }, // 1208529902
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_GridSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Image_GridSlot = { "Image_GridSlot", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_GridSlot, Image_GridSlot), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_GridSlot_MetaData), NewProp_Image_GridSlot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Brush_Unoccupied = { "Brush_Unoccupied", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_GridSlot, Brush_Unoccupied), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_Unoccupied_MetaData), NewProp_Brush_Unoccupied_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Brush_Occupied = { "Brush_Occupied", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_GridSlot, Brush_Occupied), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_Occupied_MetaData), NewProp_Brush_Occupied_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Brush_Selected = { "Brush_Selected", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_GridSlot, Brush_Selected), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_Selected_MetaData), NewProp_Brush_Selected_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Brush_GrayedOut = { "Brush_GrayedOut", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_GridSlot, Brush_GrayedOut), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_GrayedOut_MetaData), NewProp_Brush_GrayedOut_MetaData) }; // 963227394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_GridSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Image_GridSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Brush_Unoccupied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Brush_Occupied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Brush_Selected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Brush_GrayedOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_GridSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_GridSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_GridSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_GridSlot_Statics::ClassParams = {
	&UInv_GridSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_GridSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_GridSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_GridSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_GridSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_GridSlot()
{
	if (!Z_Registration_Info_UClass_UInv_GridSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_GridSlot.OuterSingleton, Z_Construct_UClass_UInv_GridSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_GridSlot.OuterSingleton;
}
UInv_GridSlot::UInv_GridSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_GridSlot);
UInv_GridSlot::~UInv_GridSlot() {}
// ********** End Class UInv_GridSlot **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h__Script_Inventory_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInv_GridSlotState_StaticEnum, TEXT("EInv_GridSlotState"), &Z_Registration_Info_UEnum_EInv_GridSlotState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3012323043U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_GridSlot, UInv_GridSlot::StaticClass, TEXT("UInv_GridSlot"), &Z_Registration_Info_UClass_UInv_GridSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_GridSlot), 2512446247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h__Script_Inventory_2357006917(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h__Script_Inventory_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_GridSlots_Inv_GridSlot_h__Script_Inventory_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
