#include "Items/Fragments/Inv_ItemFragment.h"

void FInv_HealthPotionFragment::OnConsume(APlayerController* PC)
{
	// my responsability for my game to implement what I want to do when I consume this item
	// for example, get the ability system component and apply a gameplay effect
	// or call an inteface function onHealing()

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Consumed Health Potion! Healing by: %f"), HealAmount));
}

void FInv_ManaPotionFragment::OnConsume(APlayerController* PC)
{
		// my responsability for my game to implement what I want to do when I consume this item
	// for example, get the ability system component and apply a gameplay effect
	// or call an inteface function onHealing()

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Consumed Mana Potion! Mana replenished by: %f"), ManaAmount));
}
