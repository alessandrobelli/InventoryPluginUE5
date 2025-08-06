// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Items/Manifest/Inv_ItemManifest.h"
#include "Inv_ItemComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class INVENTORY_API UInv_ItemComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInv_ItemComponent();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void InitItemManifest(FInv_ItemManifest CopyManifest);
	FInv_ItemManifest GetItemManifest() const { return ItemManifest; }
	FInv_ItemManifest& GetItemManifestMutable() { return ItemManifest; }

	FString GetPickupMessage() const { return PickupMessage; }
	void PickedUp();

	UPROPERTY(EditAnywhere, Category = "Pickup Animation", meta = (DisplayName = "Pickup Montage"))
	UAnimMontage* PickupMontage;

	UPROPERTY(EditAnywhere, Category = "Pickup Animation", meta = (DisplayName = "Pickup Sound"))
	USoundBase* PickupSound;

	UPROPERTY(EditAnywhere, Category = "Pickup Animation", meta = (DisplayName = "Playback Rate", ClampMin = "0.1", ClampMax = "5.0", UIMin = "0.1", UIMax = "5.0"))
	float PlaybackRate = 1.0f; // Speed multiplier for the animation

	UPROPERTY(EditAnywhere, Category = "Pickup Animation", meta = (DisplayName = "Animation Delay (Seconds)", ClampMin = "0.0", UIMin = "0.0"))
	float AnimationDelay = 1.0f; // Time to wait before destroying

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void PlayPickupSequence(ACharacter* PickingCharacter);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif


protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "Inventory")
	void OnPickedUp();

private:
	UPROPERTY(Replicated, EditAnywhere, Category = "Inventory")
	FInv_ItemManifest ItemManifest;

	UPROPERTY(EditAnywhere, Category = "Inventory")
	FString PickupMessage;
};
