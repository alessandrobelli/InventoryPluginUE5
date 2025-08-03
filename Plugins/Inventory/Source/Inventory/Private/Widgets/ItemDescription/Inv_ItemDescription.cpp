// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/ItemDescription/Inv_ItemDescription.h"

#include "Components/SizeBox.h"

FVector2D UInv_ItemDescription::GetBoxSize() const
{
	return SizeBox->GetDesiredSize();
}

void UInv_ItemDescription::SetVisibility(ESlateVisibility InVisibility)
{
	for (auto Child : GetChildren())
	{
		if (UInv_ItemDescription* ItemDescription = Cast<UInv_ItemDescription>(Child))
		{
			Child->Collapse();
		}
	}
	
	Super::SetVisibility(InVisibility);
	
}
