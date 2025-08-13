// Copyright Epic Games, Inc. All Rights Reserved.


#include "ShooterCharacter.h"
#include "EnhancedInputComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"
#include "Camera/CameraComponent.h"
#include "Player/Inv_PlayerController.h"

AShooterCharacter::AShooterCharacter()
{
	// configure movement
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 600.0f, 0.0f);
}

void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();

	// initialize sprint meter to max
	SprintMeter = SprintTime;

	// Initialize the walk speed with weight multiplier
	if (UCharacterMovementComponent* MovementComp = GetCharacterMovement())
	{
		float WeightMultiplier = 1.0f;
		if (AInv_PlayerController* InvPC = Cast<AInv_PlayerController>(GetController()))
		{
			WeightMultiplier = InvPC->GetWeightSpeedMultiplier();
		}
		
		float AdjustedWalkSpeed = WalkSpeed * WeightMultiplier;
		MovementComp->MaxWalkSpeed = AdjustedWalkSpeed;
		
		UE_LOG(LogTemp, Warning, TEXT("Initial walk speed set to: %f (base: %f, weight multiplier: %f)"), 
			AdjustedWalkSpeed, WalkSpeed, WeightMultiplier);
	}

	// start the sprint tick timer
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(SprintTimer, this, &AShooterCharacter::SprintFixedTick, SprintFixedTickTime, true);
	}
}

void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// base class handles move, aim and jump inputs
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Sprinting
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &AShooterCharacter::DoStartSprint);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &AShooterCharacter::DoEndSprint);
	}

}

void AShooterCharacter::DoStartSprint()
{
	// Debug log
	UE_LOG(LogTemp, Warning, TEXT("DoStartSprint called"));
	
	// set the sprinting flag
	bSprinting = true;

	// are we out of recovery mode?
	if (!bRecovering)
	{
		// Get weight multiplier from player controller
		float WeightMultiplier = 1.0f;
		if (AInv_PlayerController* InvPC = Cast<AInv_PlayerController>(GetController()))
		{
			WeightMultiplier = InvPC->GetWeightSpeedMultiplier();
		}
		
		// set the sprint walk speed with weight penalty
		float AdjustedSprintSpeed = SprintSpeed * WeightMultiplier;
		GetCharacterMovement()->MaxWalkSpeed = AdjustedSprintSpeed;

		// call the sprint state changed delegate
		OnSprintStateChanged.Broadcast(true);
		
		// Debug log
		UE_LOG(LogTemp, Warning, TEXT("Sprint speed set to: %f (base: %f, weight multiplier: %f)"), 
			AdjustedSprintSpeed, SprintSpeed, WeightMultiplier);
	}

}

void AShooterCharacter::DoEndSprint()
{
	// set the sprinting flag
	bSprinting = false;

	// are we out of recovery mode?
	if (!bRecovering)
	{
		// Get weight multiplier from player controller
		float WeightMultiplier = 1.0f;
		if (AInv_PlayerController* InvPC = Cast<AInv_PlayerController>(GetController()))
		{
			WeightMultiplier = InvPC->GetWeightSpeedMultiplier();
		}
		
		// set the default walk speed with weight penalty
		float AdjustedWalkSpeed = WalkSpeed * WeightMultiplier;
		GetCharacterMovement()->MaxWalkSpeed = AdjustedWalkSpeed;

		// call the sprint state changed delegate
		OnSprintStateChanged.Broadcast(false);
	}
}

void AShooterCharacter::SprintFixedTick()
{
	// are we out of recovery and still have stamina?
	if (bSprinting && !bRecovering)
	{

		// do we still have meter to burn?
		if (SprintMeter > 0.0f)
		{
			// update the sprint meter
			SprintMeter = FMath::Max(SprintMeter - SprintFixedTickTime, 0.0f);

			// have we run out of stamina?
			if (SprintMeter <= 0.0f)
			{
				// raise the recovering flag
				bRecovering = true;

				// Get weight multiplier from player controller
				float WeightMultiplier = 1.0f;
				if (AInv_PlayerController* InvPC = Cast<AInv_PlayerController>(GetController()))
				{
					WeightMultiplier = InvPC->GetWeightSpeedMultiplier();
				}
				
				// set the recovering walk speed with weight penalty
				float AdjustedRecoveringSpeed = RecoveringWalkSpeed * WeightMultiplier;
				GetCharacterMovement()->MaxWalkSpeed = AdjustedRecoveringSpeed;
			}
		}
		
	} else {

		// recover stamina
		SprintMeter = FMath::Min(SprintMeter + SprintFixedTickTime, SprintTime);

		if (SprintMeter >= SprintTime)
		{
			// lower the recovering flag
			bRecovering = false;

			// Get weight multiplier from player controller
			float WeightMultiplier = 1.0f;
			if (AInv_PlayerController* InvPC = Cast<AInv_PlayerController>(GetController()))
			{
				WeightMultiplier = InvPC->GetWeightSpeedMultiplier();
			}
			
			// set the walk or sprint speed depending on whether the sprint button is down
			float BaseSpeed = bSprinting ? SprintSpeed : WalkSpeed;
			float AdjustedSpeed = BaseSpeed * WeightMultiplier;
			GetCharacterMovement()->MaxWalkSpeed = AdjustedSpeed;

			// update the sprint state depending on whether the button is down or not
			OnSprintStateChanged.Broadcast(bSprinting);
		}

	}

	// broadcast the sprint meter updated delegate
	OnSprintMeterUpdated.Broadcast(SprintMeter / SprintTime);

}
