// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryManagement/Inv_InventoryStatics.h"

#include "InventoryManagement/Components/Inv_InventoryComponent.h"
#include "Items/Components/Inv_ItemComponent.h"

UInv_InventoryComponent* UInv_InventoryStatics::GetInventoryComponent(const APlayerController* PlayerController)
{
	if (!IsValid(PlayerController)) return nullptr;

	UInv_InventoryComponent* InventoryComponent = PlayerController->FindComponentByClass<UInv_InventoryComponent>();

	return InventoryComponent;
	
}

EInv_ItemCategory UInv_InventoryStatics::GetItemCategoryFromItemComp(UInv_ItemComponent* ItemComponent)
{
	if (!IsValid(ItemComponent)) return EInv_ItemCategory::None;
	return ItemComponent->GetItemManifest().GetItemCategory();

}
