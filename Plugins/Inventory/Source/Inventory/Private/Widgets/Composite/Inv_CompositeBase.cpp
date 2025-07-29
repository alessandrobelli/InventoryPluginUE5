// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Composite/Inv_CompositeBase.h"

void UInv_CompositeBase::Collapse()
{
	SetVisibility(ESlateVisibility::Collapsed);
}

void UInv_CompositeBase::Expand()
{
	SetVisibility(ESlateVisibility::Visible);
}
