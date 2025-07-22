// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/ItemPopUp/Inv_ItemPopUp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_ItemPopUp() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemPopUp();
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemPopUp_NoRegister();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature();
INVENTORY_API UFunction* Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FPopUpMenuSplit *******************************************************
struct Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics
{
	struct _Script_Inventory_eventPopUpMenuSplit_Parms
	{
		int32 SplitAmount;
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The item popup widget shows up when right-clicking an item in the inventory grid.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The item popup widget shows up when right-clicking an item in the inventory grid." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplitAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::NewProp_SplitAmount = { "SplitAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventPopUpMenuSplit_Parms, SplitAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventPopUpMenuSplit_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::NewProp_SplitAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "PopUpMenuSplit__DelegateSignature", Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::_Script_Inventory_eventPopUpMenuSplit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::_Script_Inventory_eventPopUpMenuSplit_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_PopUpMenuSplit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPopUpMenuSplit_DelegateWrapper(const FScriptDelegate& PopUpMenuSplit, int32 SplitAmount, int32 Index)
{
	struct _Script_Inventory_eventPopUpMenuSplit_Parms
	{
		int32 SplitAmount;
		int32 Index;
	};
	_Script_Inventory_eventPopUpMenuSplit_Parms Parms;
	Parms.SplitAmount=SplitAmount;
	Parms.Index=Index;
	PopUpMenuSplit.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FPopUpMenuSplit *********************************************************

// ********** Begin Delegate FPopUpMenuDrop ********************************************************
struct Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics
{
	struct _Script_Inventory_eventPopUpMenuDrop_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventPopUpMenuDrop_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "PopUpMenuDrop__DelegateSignature", Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics::_Script_Inventory_eventPopUpMenuDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics::_Script_Inventory_eventPopUpMenuDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_PopUpMenuDrop__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPopUpMenuDrop_DelegateWrapper(const FScriptDelegate& PopUpMenuDrop, int32 Index)
{
	struct _Script_Inventory_eventPopUpMenuDrop_Parms
	{
		int32 Index;
	};
	_Script_Inventory_eventPopUpMenuDrop_Parms Parms;
	Parms.Index=Index;
	PopUpMenuDrop.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FPopUpMenuDrop **********************************************************

// ********** Begin Delegate FPopUpMenuConsume *****************************************************
struct Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics
{
	struct _Script_Inventory_eventPopUpMenuConsume_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inventory_eventPopUpMenuConsume_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Inventory, nullptr, "PopUpMenuConsume__DelegateSignature", Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics::_Script_Inventory_eventPopUpMenuConsume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics::_Script_Inventory_eventPopUpMenuConsume_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inventory_PopUpMenuConsume__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPopUpMenuConsume_DelegateWrapper(const FScriptDelegate& PopUpMenuConsume, int32 Index)
{
	struct _Script_Inventory_eventPopUpMenuConsume_Parms
	{
		int32 Index;
	};
	_Script_Inventory_eventPopUpMenuConsume_Parms Parms;
	Parms.Index=Index;
	PopUpMenuConsume.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FPopUpMenuConsume *******************************************************

// ********** Begin Class UInv_ItemPopUp Function ConsumeButtonClicked *****************************
struct Z_Construct_UFunction_UInv_ItemPopUp_ConsumeButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_ItemPopUp_ConsumeButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_ItemPopUp, nullptr, "ConsumeButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_ItemPopUp_ConsumeButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_ItemPopUp_ConsumeButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_ItemPopUp_ConsumeButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_ItemPopUp_ConsumeButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_ItemPopUp::execConsumeButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsumeButtonClicked();
	P_NATIVE_END;
}
// ********** End Class UInv_ItemPopUp Function ConsumeButtonClicked *******************************

// ********** Begin Class UInv_ItemPopUp Function DropButtonClicked ********************************
struct Z_Construct_UFunction_UInv_ItemPopUp_DropButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_ItemPopUp_DropButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_ItemPopUp, nullptr, "DropButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_ItemPopUp_DropButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_ItemPopUp_DropButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_ItemPopUp_DropButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_ItemPopUp_DropButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_ItemPopUp::execDropButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropButtonClicked();
	P_NATIVE_END;
}
// ********** End Class UInv_ItemPopUp Function DropButtonClicked **********************************

// ********** Begin Class UInv_ItemPopUp Function SliderValueChanged *******************************
struct Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics
{
	struct Inv_ItemPopUp_eventSliderValueChanged_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_ItemPopUp_eventSliderValueChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_ItemPopUp, nullptr, "SliderValueChanged", Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics::Inv_ItemPopUp_eventSliderValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics::Inv_ItemPopUp_eventSliderValueChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_ItemPopUp::execSliderValueChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SliderValueChanged(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UInv_ItemPopUp Function SliderValueChanged *********************************

// ********** Begin Class UInv_ItemPopUp Function SplitButtonClicked *******************************
struct Z_Construct_UFunction_UInv_ItemPopUp_SplitButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_ItemPopUp_SplitButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_ItemPopUp, nullptr, "SplitButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_ItemPopUp_SplitButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_ItemPopUp_SplitButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_ItemPopUp_SplitButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_ItemPopUp_SplitButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_ItemPopUp::execSplitButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SplitButtonClicked();
	P_NATIVE_END;
}
// ********** End Class UInv_ItemPopUp Function SplitButtonClicked *********************************

// ********** Begin Class UInv_ItemPopUp ***********************************************************
void UInv_ItemPopUp::StaticRegisterNativesUInv_ItemPopUp()
{
	UClass* Class = UInv_ItemPopUp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConsumeButtonClicked", &UInv_ItemPopUp::execConsumeButtonClicked },
		{ "DropButtonClicked", &UInv_ItemPopUp::execDropButtonClicked },
		{ "SliderValueChanged", &UInv_ItemPopUp::execSliderValueChanged },
		{ "SplitButtonClicked", &UInv_ItemPopUp::execSplitButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_ItemPopUp;
UClass* UInv_ItemPopUp::GetPrivateStaticClass()
{
	using TClass = UInv_ItemPopUp;
	if (!Z_Registration_Info_UClass_UInv_ItemPopUp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_ItemPopUp"),
			Z_Registration_Info_UClass_UInv_ItemPopUp.InnerSingleton,
			StaticRegisterNativesUInv_ItemPopUp,
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
	return Z_Registration_Info_UClass_UInv_ItemPopUp.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_ItemPopUp_NoRegister()
{
	return UInv_ItemPopUp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_ItemPopUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/ItemPopUp/Inv_ItemPopUp.h" },
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Split_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Drop_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Consume_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slider_Split_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_SplitAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBox_Root_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ItemPopUp/Inv_ItemPopUp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Split;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Drop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Consume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider_Split;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_SplitAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SizeBox_Root;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_ItemPopUp_ConsumeButtonClicked, "ConsumeButtonClicked" }, // 1782831278
		{ &Z_Construct_UFunction_UInv_ItemPopUp_DropButtonClicked, "DropButtonClicked" }, // 1398816076
		{ &Z_Construct_UFunction_UInv_ItemPopUp_SliderValueChanged, "SliderValueChanged" }, // 1163934330
		{ &Z_Construct_UFunction_UInv_ItemPopUp_SplitButtonClicked, "SplitButtonClicked" }, // 2752337744
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_ItemPopUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_ItemPopUp_Statics::NewProp_Button_Split = { "Button_Split", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemPopUp, Button_Split), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Split_MetaData), NewProp_Button_Split_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_ItemPopUp_Statics::NewProp_Button_Drop = { "Button_Drop", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemPopUp, Button_Drop), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Drop_MetaData), NewProp_Button_Drop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_ItemPopUp_Statics::NewProp_Button_Consume = { "Button_Consume", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemPopUp, Button_Consume), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Consume_MetaData), NewProp_Button_Consume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_ItemPopUp_Statics::NewProp_Slider_Split = { "Slider_Split", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemPopUp, Slider_Split), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slider_Split_MetaData), NewProp_Slider_Split_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_ItemPopUp_Statics::NewProp_Text_SplitAmount = { "Text_SplitAmount", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemPopUp, Text_SplitAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_SplitAmount_MetaData), NewProp_Text_SplitAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_ItemPopUp_Statics::NewProp_SizeBox_Root = { "SizeBox_Root", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemPopUp, SizeBox_Root), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBox_Root_MetaData), NewProp_SizeBox_Root_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_ItemPopUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemPopUp_Statics::NewProp_Button_Split,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemPopUp_Statics::NewProp_Button_Drop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemPopUp_Statics::NewProp_Button_Consume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemPopUp_Statics::NewProp_Slider_Split,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemPopUp_Statics::NewProp_Text_SplitAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemPopUp_Statics::NewProp_SizeBox_Root,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemPopUp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_ItemPopUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemPopUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_ItemPopUp_Statics::ClassParams = {
	&UInv_ItemPopUp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_ItemPopUp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemPopUp_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemPopUp_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_ItemPopUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_ItemPopUp()
{
	if (!Z_Registration_Info_UClass_UInv_ItemPopUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_ItemPopUp.OuterSingleton, Z_Construct_UClass_UInv_ItemPopUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_ItemPopUp.OuterSingleton;
}
UInv_ItemPopUp::UInv_ItemPopUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_ItemPopUp);
UInv_ItemPopUp::~UInv_ItemPopUp() {}
// ********** End Class UInv_ItemPopUp *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_ItemPopUp, UInv_ItemPopUp::StaticClass, TEXT("UInv_ItemPopUp"), &Z_Registration_Info_UClass_UInv_ItemPopUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_ItemPopUp), 814329181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h__Script_Inventory_2775712486(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_ItemPopUp_Inv_ItemPopUp_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
