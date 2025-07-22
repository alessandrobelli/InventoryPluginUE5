// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/Components/Inv_ItemComponent.h"
#include "Items/Manifest/Inv_ItemManifest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_ItemComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ItemManifest();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_ItemComponent Function OnPickedUp ***********************************
static FName NAME_UInv_ItemComponent_OnPickedUp = FName(TEXT("OnPickedUp"));
void UInv_ItemComponent::OnPickedUp()
{
	UFunction* Func = FindFunctionChecked(NAME_UInv_ItemComponent_OnPickedUp);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInv_ItemComponent_OnPickedUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_ItemComponent_OnPickedUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_ItemComponent, nullptr, "OnPickedUp", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_ItemComponent_OnPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_ItemComponent_OnPickedUp_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInv_ItemComponent_OnPickedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_ItemComponent_OnPickedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInv_ItemComponent Function OnPickedUp *************************************

// ********** Begin Class UInv_ItemComponent *******************************************************
void UInv_ItemComponent::StaticRegisterNativesUInv_ItemComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_ItemComponent;
UClass* UInv_ItemComponent::GetPrivateStaticClass()
{
	using TClass = UInv_ItemComponent;
	if (!Z_Registration_Info_UClass_UInv_ItemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_ItemComponent"),
			Z_Registration_Info_UClass_UInv_ItemComponent.InnerSingleton,
			StaticRegisterNativesUInv_ItemComponent,
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
	return Z_Registration_Info_UClass_UInv_ItemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister()
{
	return UInv_ItemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_ItemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Items/Components/Inv_ItemComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemManifest_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMessage_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemManifest;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PickupMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_ItemComponent_OnPickedUp, "OnPickedUp" }, // 3736317109
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_ItemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_ItemManifest = { "ItemManifest", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemComponent, ItemManifest), Z_Construct_UScriptStruct_FInv_ItemManifest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemManifest_MetaData), NewProp_ItemManifest_MetaData) }; // 1014103942
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PickupMessage = { "PickupMessage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemComponent, PickupMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMessage_MetaData), NewProp_PickupMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_ItemManifest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PickupMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_ItemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_ItemComponent_Statics::ClassParams = {
	&UInv_ItemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_ItemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_ItemComponent()
{
	if (!Z_Registration_Info_UClass_UInv_ItemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_ItemComponent.OuterSingleton, Z_Construct_UClass_UInv_ItemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_ItemComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UInv_ItemComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_ItemManifest(TEXT("ItemManifest"));
	const bool bIsValid = true
		&& Name_ItemManifest == ClassReps[(int32)ENetFields_Private::ItemManifest].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInv_ItemComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_ItemComponent);
UInv_ItemComponent::~UInv_ItemComponent() {}
// ********** End Class UInv_ItemComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_ItemComponent, UInv_ItemComponent::StaticClass, TEXT("UInv_ItemComponent"), &Z_Registration_Info_UClass_UInv_ItemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_ItemComponent), 1615052057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h__Script_Inventory_3025691783(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
