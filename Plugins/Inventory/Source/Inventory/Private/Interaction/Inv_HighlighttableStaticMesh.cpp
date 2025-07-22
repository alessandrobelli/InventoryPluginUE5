// Fill out your copyright notice in the Description page of Project Settings.


#include "Interaction/Inv_HighlighttableStaticMesh.h"

void UInv_HighlighttableStaticMesh::Highlight_Implementation()
{
	SetOverlayMaterial(HighlightMaterial);
	
}

void UInv_HighlighttableStaticMesh::UnHighlight_Implementation()
{
	SetOverlayMaterial(nullptr);
}
