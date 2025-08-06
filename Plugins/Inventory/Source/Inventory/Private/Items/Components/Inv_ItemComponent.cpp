// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Components/Inv_ItemComponent.h"

#include "Net/UnrealNetwork.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Animation/AnimInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "TimerManager.h"


// Sets default values for this component's properties
UInv_ItemComponent::UInv_ItemComponent(): PickupMontage(nullptr), PickupSound(nullptr)
{
	PrimaryComponentTick.bCanEverTick = false;

	PickupMessage = TEXT("E to pick up item");

	// ...
}

void UInv_ItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, ItemManifest);
}

void UInv_ItemComponent::InitItemManifest(FInv_ItemManifest CopyManifest)
{
	ItemManifest = CopyManifest;
}

void UInv_ItemComponent::PickedUp()
{
	OnPickedUp();
	GetOwner()->Destroy();
}

void UInv_ItemComponent::PlayPickupSequence(ACharacter* PickingCharacter)
{
	if (!PickingCharacter)
	{
		return;
	}

	// Play animation montage if set
	if (PickupMontage)
	{
		if (UAnimInstance* AnimInstance = PickingCharacter->GetMesh()->GetAnimInstance())
		{
			// Play the montage with the specified playback rate
			AnimInstance->Montage_Play(PickupMontage, PlaybackRate);
			
			// Disable movement during animation
			if (UCharacterMovementComponent* MovementComp = PickingCharacter->GetCharacterMovement())
			{
				MovementComp->DisableMovement();
				
				// Re-enable movement after animation delay
				FTimerHandle EnableTimer;
				GetWorld()->GetTimerManager().SetTimer(EnableTimer, 
					[MovementComp]() {
						if (MovementComp)
						{
							MovementComp->SetMovementMode(MOVE_Walking);
						}
					}, 
					AnimationDelay, false);
			}
		}
	}
	
	// Play sound at pickup location
	if (PickupSound && GetOwner())
	{
		UGameplayStatics::PlaySoundAtLocation(this, PickupSound, GetOwner()->GetActorLocation());
	}
	
	// Call blueprint event for additional effects (particles, etc.)
	OnPickedUp();
}

#if WITH_EDITOR
void UInv_ItemComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	if (PropertyChangedEvent.Property != nullptr)
	{
		const FName PropertyName = PropertyChangedEvent.Property->GetFName();
		
		// When PickupMontage or PlaybackRate is changed, automatically update the AnimationDelay
		if (PropertyName == GET_MEMBER_NAME_CHECKED(UInv_ItemComponent, PickupMontage) ||
		    PropertyName == GET_MEMBER_NAME_CHECKED(UInv_ItemComponent, PlaybackRate))
		{
			if (PickupMontage && PlaybackRate > 0.0f)
			{
				// Get the montage play length and adjust for playback rate
				float MontageLength = PickupMontage->GetPlayLength();
				float AdjustedLength = MontageLength / PlaybackRate;
				
				// Set the animation delay to match the adjusted duration
				AnimationDelay = AdjustedLength;
				
				// Log the change
				UE_LOG(LogTemp, Warning, TEXT("Pickup Animation: Auto-set delay to %.2f seconds (base: %.2f, rate: %.2fx, montage: %s)"), 
					AdjustedLength, MontageLength, PlaybackRate, *PickupMontage->GetName());
			}
		}
	}
}
#endif




