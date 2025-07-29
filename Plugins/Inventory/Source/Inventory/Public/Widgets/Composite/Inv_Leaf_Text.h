// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Inv_Leaf.h"
#include "Inv_Leaf_Text.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class INVENTORY_API UInv_Leaf_Text : public UInv_Leaf
{
	GENERATED_BODY()
public:
	
	void SetText(const FText& Text) const;
virtual void NativePreConstruct() override;

	
private:

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UTextBlock> Text_LeafText;

	UPROPERTY(EditAnywhere, Category="Inventory")
	int32 FontSize{12};
};
