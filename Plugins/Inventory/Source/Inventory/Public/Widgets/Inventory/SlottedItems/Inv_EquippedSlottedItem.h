// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Inv_SlottedItem.h"
#include "Inv_EquippedSlottedItem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEquippedSlottedItemClicked, UInv_EquippedSlottedItem*, SlottedItem);

/**
 * 
 */
UCLASS()
class INVENTORY_API UInv_EquippedSlottedItem : public UInv_SlottedItem
{
	GENERATED_BODY()

public:
	virtual FReply NativeOnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	
	void SetEquipmentTypeTag(const FGameplayTag& Tag){EquipmentTypeTag = Tag;}
	FGameplayTag GetEquipmentTypeTag() const{return EquipmentTypeTag;}

	FEquippedSlottedItemClicked OnEquippedSlottedItemClicked;

private:
	
	UPROPERTY()
	FGameplayTag EquipmentTypeTag;
};
