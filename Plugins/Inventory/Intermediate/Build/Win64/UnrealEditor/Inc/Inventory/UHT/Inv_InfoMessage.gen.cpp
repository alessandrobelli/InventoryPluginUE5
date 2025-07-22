// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/HUD/Inv_InfoMessage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_InfoMessage() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_InfoMessage();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InfoMessage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_InfoMessage Function MessageHide ************************************
static FName NAME_UInv_InfoMessage_MessageHide = FName(TEXT("MessageHide"));
void UInv_InfoMessage::MessageHide()
{
	UFunction* Func = FindFunctionChecked(NAME_UInv_InfoMessage_MessageHide);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInv_InfoMessage_MessageHide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_InfoMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InfoMessage_MessageHide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InfoMessage, nullptr, "MessageHide", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InfoMessage_MessageHide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InfoMessage_MessageHide_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_InfoMessage_MessageHide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InfoMessage_MessageHide_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInv_InfoMessage Function MessageHide **************************************

// ********** Begin Class UInv_InfoMessage Function MessageShow ************************************
static FName NAME_UInv_InfoMessage_MessageShow = FName(TEXT("MessageShow"));
void UInv_InfoMessage::MessageShow()
{
	UFunction* Func = FindFunctionChecked(NAME_UInv_InfoMessage_MessageShow);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInv_InfoMessage_MessageShow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_InfoMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InfoMessage_MessageShow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InfoMessage, nullptr, "MessageShow", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InfoMessage_MessageShow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InfoMessage_MessageShow_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_InfoMessage_MessageShow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InfoMessage_MessageShow_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInv_InfoMessage Function MessageShow **************************************

// ********** Begin Class UInv_InfoMessage *********************************************************
void UInv_InfoMessage::StaticRegisterNativesUInv_InfoMessage()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_InfoMessage;
UClass* UInv_InfoMessage::GetPrivateStaticClass()
{
	using TClass = UInv_InfoMessage;
	if (!Z_Registration_Info_UClass_UInv_InfoMessage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_InfoMessage"),
			Z_Registration_Info_UClass_UInv_InfoMessage.InnerSingleton,
			StaticRegisterNativesUInv_InfoMessage,
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
	return Z_Registration_Info_UClass_UInv_InfoMessage.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_InfoMessage_NoRegister()
{
	return UInv_InfoMessage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_InfoMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/HUD/Inv_InfoMessage.h" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_InfoMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Message_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_InfoMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageLifeTime_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Widgets/HUD/Inv_InfoMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Message;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MessageLifeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_InfoMessage_MessageHide, "MessageHide" }, // 1406669127
		{ &Z_Construct_UFunction_UInv_InfoMessage_MessageShow, "MessageShow" }, // 297816447
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InfoMessage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InfoMessage_Statics::NewProp_Text_Message = { "Text_Message", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InfoMessage, Text_Message), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Message_MetaData), NewProp_Text_Message_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInv_InfoMessage_Statics::NewProp_MessageLifeTime = { "MessageLifeTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InfoMessage, MessageLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageLifeTime_MetaData), NewProp_MessageLifeTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_InfoMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InfoMessage_Statics::NewProp_Text_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InfoMessage_Statics::NewProp_MessageLifeTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InfoMessage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_InfoMessage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InfoMessage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InfoMessage_Statics::ClassParams = {
	&UInv_InfoMessage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_InfoMessage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InfoMessage_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InfoMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InfoMessage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InfoMessage()
{
	if (!Z_Registration_Info_UClass_UInv_InfoMessage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InfoMessage.OuterSingleton, Z_Construct_UClass_UInv_InfoMessage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InfoMessage.OuterSingleton;
}
UInv_InfoMessage::UInv_InfoMessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InfoMessage);
UInv_InfoMessage::~UInv_InfoMessage() {}
// ********** End Class UInv_InfoMessage ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InfoMessage, UInv_InfoMessage::StaticClass, TEXT("UInv_InfoMessage"), &Z_Registration_Info_UClass_UInv_InfoMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InfoMessage), 868886791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h__Script_Inventory_3825879072(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Widgets_HUD_Inv_InfoMessage_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
