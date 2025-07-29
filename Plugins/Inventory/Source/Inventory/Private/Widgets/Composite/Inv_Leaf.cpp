// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Composite/Inv_Leaf.h"

void UInv_Leaf::ApplyFunction(FuncType Function)
{
	Function(this);
}
