// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/Utils/Inv_WidgetUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_WidgetUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INVENTORY_API UClass* Z_Construct_UClass_UInv_WidgetUtils();
INVENTORY_API UClass* Z_Construct_UClass_UInv_WidgetUtils_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_WidgetUtils Function GetClampedWidgetPosition ***********************
struct Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics
{
	struct Inv_WidgetUtils_eventGetClampedWidgetPosition_Parms
	{
		FVector2D Boundary;
		FVector2D WidgetSize;
		FVector2D MousePosition;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Utils/Inv_WidgetUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boundary_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MousePosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boundary;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MousePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::NewProp_Boundary = { "Boundary", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_WidgetUtils_eventGetClampedWidgetPosition_Parms, Boundary), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boundary_MetaData), NewProp_Boundary_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::NewProp_WidgetSize = { "WidgetSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_WidgetUtils_eventGetClampedWidgetPosition_Parms, WidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetSize_MetaData), NewProp_WidgetSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::NewProp_MousePosition = { "MousePosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_WidgetUtils_eventGetClampedWidgetPosition_Parms, MousePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MousePosition_MetaData), NewProp_MousePosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_WidgetUtils_eventGetClampedWidgetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::NewProp_Boundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::NewProp_WidgetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::NewProp_MousePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_WidgetUtils, nullptr, "GetClampedWidgetPosition", Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::Inv_WidgetUtils_eventGetClampedWidgetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::Inv_WidgetUtils_eventGetClampedWidgetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_WidgetUtils::execGetClampedWidgetPosition)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Boundary);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_WidgetSize);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MousePosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UInv_WidgetUtils::GetClampedWidgetPosition(Z_Param_Out_Boundary,Z_Param_Out_WidgetSize,Z_Param_Out_MousePosition);
	P_NATIVE_END;
}
// ********** End Class UInv_WidgetUtils Function GetClampedWidgetPosition *************************

// ********** Begin Class UInv_WidgetUtils Function GetWidgetPosition ******************************
struct Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics
{
	struct Inv_WidgetUtils_eventGetWidgetPosition_Parms
	{
		UWidget* Widget;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Utils/Inv_WidgetUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_WidgetUtils_eventGetWidgetPosition_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_WidgetUtils_eventGetWidgetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_WidgetUtils, nullptr, "GetWidgetPosition", Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::Inv_WidgetUtils_eventGetWidgetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::Inv_WidgetUtils_eventGetWidgetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_WidgetUtils::execGetWidgetPosition)
{
	P_GET_OBJECT(UWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UInv_WidgetUtils::GetWidgetPosition(Z_Param_Widget);
	P_NATIVE_END;
}
// ********** End Class UInv_WidgetUtils Function GetWidgetPosition ********************************

// ********** Begin Class UInv_WidgetUtils Function GetWidgetSize **********************************
struct Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics
{
	struct Inv_WidgetUtils_eventGetWidgetSize_Parms
	{
		UWidget* Widget;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Utils/Inv_WidgetUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_WidgetUtils_eventGetWidgetSize_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_WidgetUtils_eventGetWidgetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_WidgetUtils, nullptr, "GetWidgetSize", Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::Inv_WidgetUtils_eventGetWidgetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::Inv_WidgetUtils_eventGetWidgetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_WidgetUtils::execGetWidgetSize)
{
	P_GET_OBJECT(UWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UInv_WidgetUtils::GetWidgetSize(Z_Param_Widget);
	P_NATIVE_END;
}
// ********** End Class UInv_WidgetUtils Function GetWidgetSize ************************************

// ********** Begin Class UInv_WidgetUtils Function IsWithinBounds *********************************
struct Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics
{
	struct Inv_WidgetUtils_eventIsWithinBounds_Parms
	{
		FVector2D BoundaryPos;
		FVector2D WidgetSize;
		FVector2D MousePos;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/Utils/Inv_WidgetUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MousePos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundaryPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MousePos;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::NewProp_BoundaryPos = { "BoundaryPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_WidgetUtils_eventIsWithinBounds_Parms, BoundaryPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundaryPos_MetaData), NewProp_BoundaryPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::NewProp_WidgetSize = { "WidgetSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_WidgetUtils_eventIsWithinBounds_Parms, WidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetSize_MetaData), NewProp_WidgetSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::NewProp_MousePos = { "MousePos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_WidgetUtils_eventIsWithinBounds_Parms, MousePos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MousePos_MetaData), NewProp_MousePos_MetaData) };
void Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Inv_WidgetUtils_eventIsWithinBounds_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Inv_WidgetUtils_eventIsWithinBounds_Parms), &Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::NewProp_BoundaryPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::NewProp_WidgetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::NewProp_MousePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_WidgetUtils, nullptr, "IsWithinBounds", Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::Inv_WidgetUtils_eventIsWithinBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::Inv_WidgetUtils_eventIsWithinBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_WidgetUtils::execIsWithinBounds)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_BoundaryPos);
	P_GET_STRUCT(FVector2D,Z_Param_WidgetSize);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MousePos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInv_WidgetUtils::IsWithinBounds(Z_Param_Out_BoundaryPos,Z_Param_WidgetSize,Z_Param_Out_MousePos);
	P_NATIVE_END;
}
// ********** End Class UInv_WidgetUtils Function IsWithinBounds ***********************************

// ********** Begin Class UInv_WidgetUtils *********************************************************
void UInv_WidgetUtils::StaticRegisterNativesUInv_WidgetUtils()
{
	UClass* Class = UInv_WidgetUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetClampedWidgetPosition", &UInv_WidgetUtils::execGetClampedWidgetPosition },
		{ "GetWidgetPosition", &UInv_WidgetUtils::execGetWidgetPosition },
		{ "GetWidgetSize", &UInv_WidgetUtils::execGetWidgetSize },
		{ "IsWithinBounds", &UInv_WidgetUtils::execIsWithinBounds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_WidgetUtils;
UClass* UInv_WidgetUtils::GetPrivateStaticClass()
{
	using TClass = UInv_WidgetUtils;
	if (!Z_Registration_Info_UClass_UInv_WidgetUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_WidgetUtils"),
			Z_Registration_Info_UClass_UInv_WidgetUtils.InnerSingleton,
			StaticRegisterNativesUInv_WidgetUtils,
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
	return Z_Registration_Info_UClass_UInv_WidgetUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_WidgetUtils_NoRegister()
{
	return UInv_WidgetUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_WidgetUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Utils/Inv_WidgetUtils.h" },
		{ "ModuleRelativePath", "Public/Widgets/Utils/Inv_WidgetUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_WidgetUtils_GetClampedWidgetPosition, "GetClampedWidgetPosition" }, // 2248028290
		{ &Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetPosition, "GetWidgetPosition" }, // 1398263135
		{ &Z_Construct_UFunction_UInv_WidgetUtils_GetWidgetSize, "GetWidgetSize" }, // 991486032
		{ &Z_Construct_UFunction_UInv_WidgetUtils_IsWithinBounds, "IsWithinBounds" }, // 2304087942
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_WidgetUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_WidgetUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_WidgetUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_WidgetUtils_Statics::ClassParams = {
	&UInv_WidgetUtils::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_WidgetUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_WidgetUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_WidgetUtils()
{
	if (!Z_Registration_Info_UClass_UInv_WidgetUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_WidgetUtils.OuterSingleton, Z_Construct_UClass_UInv_WidgetUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_WidgetUtils.OuterSingleton;
}
UInv_WidgetUtils::UInv_WidgetUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_WidgetUtils);
UInv_WidgetUtils::~UInv_WidgetUtils() {}
// ********** End Class UInv_WidgetUtils ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_WidgetUtils, UInv_WidgetUtils::StaticClass, TEXT("UInv_WidgetUtils"), &Z_Registration_Info_UClass_UInv_WidgetUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_WidgetUtils), 19114837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h__Script_Inventory_3175103720(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_Utils_Inv_WidgetUtils_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
