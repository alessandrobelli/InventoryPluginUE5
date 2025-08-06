// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShooterBulletCounterUI.generated.h"

UCLASS(abstract)
class DEMOJOB_API UShooterBulletCounterUI : public UUserWidget
{
	GENERATED_BODY()

public:
	UShooterBulletCounterUI(const FObjectInitializer& ObjectInitializer);
};