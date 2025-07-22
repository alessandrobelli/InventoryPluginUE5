// Copyright Epic Games, Inc. All Rights Reserved.


#include "DemoJobPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "DemoJobCameraManager.h"

ADemoJobPlayerController::ADemoJobPlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = ADemoJobCameraManager::StaticClass();
}

void ADemoJobPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
		{
			Subsystem->AddMappingContext(CurrentContext, 0);
		}
	}
}
