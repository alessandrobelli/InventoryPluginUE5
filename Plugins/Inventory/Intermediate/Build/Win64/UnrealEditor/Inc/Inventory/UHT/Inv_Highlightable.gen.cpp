// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Inv_Highlightable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_Highlightable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Highlightable();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Highlightable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UInv_Highlightable Function Highlight ********************************
void IInv_Highlightable::Highlight()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Highlight instead.");
}
static FName NAME_UInv_Highlightable_Highlight = FName(TEXT("Highlight"));
void IInv_Highlightable::Execute_Highlight(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInv_Highlightable::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInv_Highlightable_Highlight);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInv_Highlightable*)(O->GetNativeInterfaceAddress(UInv_Highlightable::StaticClass())))
	{
		I->Highlight_Implementation();
	}
}
struct Z_Construct_UFunction_UInv_Highlightable_Highlight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|Highlightable" },
		{ "ModuleRelativePath", "Public/Interaction/Inv_Highlightable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_Highlightable_Highlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_Highlightable, nullptr, "Highlight", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_Highlightable_Highlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_Highlightable_Highlight_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_Highlightable_Highlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_Highlightable_Highlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInv_Highlightable::execHighlight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Highlight_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UInv_Highlightable Function Highlight **********************************

// ********** Begin Interface UInv_Highlightable Function UnHighlight ******************************
void IInv_Highlightable::UnHighlight()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnHighlight instead.");
}
static FName NAME_UInv_Highlightable_UnHighlight = FName(TEXT("UnHighlight"));
void IInv_Highlightable::Execute_UnHighlight(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInv_Highlightable::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInv_Highlightable_UnHighlight);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInv_Highlightable*)(O->GetNativeInterfaceAddress(UInv_Highlightable::StaticClass())))
	{
		I->UnHighlight_Implementation();
	}
}
struct Z_Construct_UFunction_UInv_Highlightable_UnHighlight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory|Highlightable" },
		{ "ModuleRelativePath", "Public/Interaction/Inv_Highlightable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_Highlightable_UnHighlight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_Highlightable, nullptr, "UnHighlight", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_Highlightable_UnHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_Highlightable_UnHighlight_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_Highlightable_UnHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_Highlightable_UnHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInv_Highlightable::execUnHighlight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnHighlight_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UInv_Highlightable Function UnHighlight ********************************

// ********** Begin Interface UInv_Highlightable ***************************************************
void UInv_Highlightable::StaticRegisterNativesUInv_Highlightable()
{
	UClass* Class = UInv_Highlightable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Highlight", &IInv_Highlightable::execHighlight },
		{ "UnHighlight", &IInv_Highlightable::execUnHighlight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_Highlightable;
UClass* UInv_Highlightable::GetPrivateStaticClass()
{
	using TClass = UInv_Highlightable;
	if (!Z_Registration_Info_UClass_UInv_Highlightable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_Highlightable"),
			Z_Registration_Info_UClass_UInv_Highlightable.InnerSingleton,
			StaticRegisterNativesUInv_Highlightable,
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
	return Z_Registration_Info_UClass_UInv_Highlightable.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_Highlightable_NoRegister()
{
	return UInv_Highlightable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_Highlightable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/Inv_Highlightable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_Highlightable_Highlight, "Highlight" }, // 962341122
		{ &Z_Construct_UFunction_UInv_Highlightable_UnHighlight, "UnHighlight" }, // 2328001181
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInv_Highlightable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_Highlightable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Highlightable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_Highlightable_Statics::ClassParams = {
	&UInv_Highlightable::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_Highlightable_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_Highlightable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_Highlightable()
{
	if (!Z_Registration_Info_UClass_UInv_Highlightable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_Highlightable.OuterSingleton, Z_Construct_UClass_UInv_Highlightable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_Highlightable.OuterSingleton;
}
UInv_Highlightable::UInv_Highlightable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_Highlightable);
// ********** End Interface UInv_Highlightable *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_Highlightable, UInv_Highlightable::StaticClass, TEXT("UInv_Highlightable"), &Z_Registration_Info_UClass_UInv_Highlightable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_Highlightable), 1820368217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h__Script_Inventory_1922303135(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
