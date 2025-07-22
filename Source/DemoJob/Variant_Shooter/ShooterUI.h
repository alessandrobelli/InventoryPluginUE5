// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ShooterCharacter.h"
#include "Blueprint/UserWidget.h"
#include "Widgets/HUD/Inv_HUDWidget.h"
#include "ShooterUI.generated.h"

/**
 *  Simple scoreboard UI for a first person shooter game
 */
UCLASS(abstract)
class DEMOJOB_API UShooterUI : public UUserWidget
{
	GENERATED_BODY()
	
public:


	/** Sets up delegate listeners for the passed character */
	void SetupCharacter(AShooterCharacter* ShooterCharacter);

	/** Called when the character's sprint meter is updated */
	UFUNCTION()
	void OnSprintMeterUpdated(float Percent);

	/** Called when the character's sprint state changes */
	UFUNCTION()
	void OnSprintStateChanged(bool bSprinting);

protected:

	/** Passes control to Blueprint to update the sprint meter widgets */
	UFUNCTION(BlueprintImplementableEvent, Category="Shooter", meta=(DisplayName = "Sprint Meter Updated"))
	void BP_SprintMeterUpdated(float Percent);

	/** Passes control to Blueprint to update the sprint meter status */
	UFUNCTION(BlueprintImplementableEvent, Category="Shooter", meta=(DisplayName = "Sprint State Changed"))
	void BP_SprintStateChanged(bool bSprinting);
};
