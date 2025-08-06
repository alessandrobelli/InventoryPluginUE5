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
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
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

// ********** Begin Class UInv_ItemComponent Function PlayPickupSequence ***************************
struct Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics
{
	struct Inv_ItemComponent_eventPlayPickupSequence_Parms
	{
		ACharacter* PickingCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time to wait before destroying\n" },
#endif
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time to wait before destroying" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickingCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics::NewProp_PickingCharacter = { "PickingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_ItemComponent_eventPlayPickupSequence_Parms, PickingCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics::NewProp_PickingCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_ItemComponent, nullptr, "PlayPickupSequence", Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics::Inv_ItemComponent_eventPlayPickupSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics::Inv_ItemComponent_eventPlayPickupSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_ItemComponent::execPlayPickupSequence)
{
	P_GET_OBJECT(ACharacter,Z_Param_PickingCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayPickupSequence(Z_Param_PickingCharacter);
	P_NATIVE_END;
}
// ********** End Class UInv_ItemComponent Function PlayPickupSequence *****************************

// ********** Begin Class UInv_ItemComponent *******************************************************
void UInv_ItemComponent::StaticRegisterNativesUInv_ItemComponent()
{
	UClass* Class = UInv_ItemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayPickupSequence", &UInv_ItemComponent::execPlayPickupSequence },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMontage_MetaData[] = {
		{ "Category", "Pickup Animation" },
		{ "DisplayName", "Pickup Montage" },
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[] = {
		{ "Category", "Pickup Animation" },
		{ "DisplayName", "Pickup Sound" },
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackRate_MetaData[] = {
		{ "Category", "Pickup Animation" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Playback Rate" },
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationDelay_MetaData[] = {
		{ "Category", "Pickup Animation" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed multiplier for the animation\n" },
#endif
		{ "DisplayName", "Animation Delay (Seconds)" },
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed multiplier for the animation" },
#endif
		{ "UIMin", "0.0" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationDelay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemManifest;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PickupMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_ItemComponent_OnPickedUp, "OnPickedUp" }, // 3736317109
		{ &Z_Construct_UFunction_UInv_ItemComponent_PlayPickupSequence, "PlayPickupSequence" }, // 781349349
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_ItemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PickupMontage = { "PickupMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemComponent, PickupMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMontage_MetaData), NewProp_PickupMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemComponent, PickupSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSound_MetaData), NewProp_PickupSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PlaybackRate = { "PlaybackRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemComponent, PlaybackRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackRate_MetaData), NewProp_PlaybackRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_AnimationDelay = { "AnimationDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemComponent, AnimationDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationDelay_MetaData), NewProp_AnimationDelay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_ItemManifest = { "ItemManifest", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemComponent, ItemManifest), Z_Construct_UScriptStruct_FInv_ItemManifest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemManifest_MetaData), NewProp_ItemManifest_MetaData) }; // 3041624405
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PickupMessage = { "PickupMessage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemComponent, PickupMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMessage_MetaData), NewProp_PickupMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PickupMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PickupSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PlaybackRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_AnimationDelay,
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
		{ Z_Construct_UClass_UInv_ItemComponent, UInv_ItemComponent::StaticClass, TEXT("UInv_ItemComponent"), &Z_Registration_Info_UClass_UInv_ItemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_ItemComponent), 2806547874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h__Script_Inventory_3270237424(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
