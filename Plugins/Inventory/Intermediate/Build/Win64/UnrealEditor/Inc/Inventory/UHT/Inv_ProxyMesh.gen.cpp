// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EquipmentManagement/ProxyMesh/Inv_ProxyMesh.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_ProxyMesh() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_AInv_ProxyMesh();
INVENTORY_API UClass* Z_Construct_UClass_AInv_ProxyMesh_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_EquipmentComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInv_ProxyMesh ***********************************************************
void AInv_ProxyMesh::StaticRegisterNativesAInv_ProxyMesh()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInv_ProxyMesh;
UClass* AInv_ProxyMesh::GetPrivateStaticClass()
{
	using TClass = AInv_ProxyMesh;
	if (!Z_Registration_Info_UClass_AInv_ProxyMesh.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_ProxyMesh"),
			Z_Registration_Info_UClass_AInv_ProxyMesh.InnerSingleton,
			StaticRegisterNativesAInv_ProxyMesh,
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
	return Z_Registration_Info_UClass_AInv_ProxyMesh.InnerSingleton;
}
UClass* Z_Construct_UClass_AInv_ProxyMesh_NoRegister()
{
	return AInv_ProxyMesh::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInv_ProxyMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EquipmentManagement/ProxyMesh/Inv_ProxyMesh.h" },
		{ "ModuleRelativePath", "Private/EquipmentManagement/ProxyMesh/Inv_ProxyMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentComponent_MetaData[] = {
		{ "Category", "Inv_ProxyMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/EquipmentManagement/ProxyMesh/Inv_ProxyMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Inv_ProxyMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// this is the proxy mesh we will see in the inventory menu\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/EquipmentManagement/ProxyMesh/Inv_ProxyMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this is the proxy mesh we will see in the inventory menu" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInv_ProxyMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_ProxyMesh_Statics::NewProp_EquipmentComponent = { "EquipmentComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_ProxyMesh, EquipmentComponent), Z_Construct_UClass_UInv_EquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentComponent_MetaData), NewProp_EquipmentComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_ProxyMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_ProxyMesh, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInv_ProxyMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_ProxyMesh_Statics::NewProp_EquipmentComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_ProxyMesh_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_ProxyMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInv_ProxyMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_ProxyMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInv_ProxyMesh_Statics::ClassParams = {
	&AInv_ProxyMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInv_ProxyMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInv_ProxyMesh_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_ProxyMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_AInv_ProxyMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInv_ProxyMesh()
{
	if (!Z_Registration_Info_UClass_AInv_ProxyMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInv_ProxyMesh.OuterSingleton, Z_Construct_UClass_AInv_ProxyMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInv_ProxyMesh.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInv_ProxyMesh);
AInv_ProxyMesh::~AInv_ProxyMesh() {}
// ********** End Class AInv_ProxyMesh *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Private_EquipmentManagement_ProxyMesh_Inv_ProxyMesh_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInv_ProxyMesh, AInv_ProxyMesh::StaticClass, TEXT("AInv_ProxyMesh"), &Z_Registration_Info_UClass_AInv_ProxyMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInv_ProxyMesh), 2931915500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Private_EquipmentManagement_ProxyMesh_Inv_ProxyMesh_h__Script_Inventory_3784447304(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Private_EquipmentManagement_ProxyMesh_Inv_ProxyMesh_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_DemoJob_Plugins_Inventory_Source_Inventory_Private_EquipmentManagement_ProxyMesh_Inv_ProxyMesh_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
