// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/Inv_PlayerController.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Interaction/Inv_Highlightable.h"
#include "InventoryManagement/Components/Inv_InventoryComponent.h"
#include "Items/Components/Inv_ItemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Widgets/HUD/Inv_HUDWidget.h"


AInv_PlayerController::AInv_PlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
	TraceLength = 500.0f; // Default trace length for item interaction
	ItemTraceChannel = ECC_GameTraceChannel1; // Default trace channel for items
}

void AInv_PlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	TraceForItem();
	
}

void AInv_PlayerController::ToggleInventory()
{

	if (!InventoryComponent.IsValid())return;
	InventoryComponent->ToggleInventoryMenu();
	
	
}

void AInv_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (IsValid(Subsystem))
	{
		for (UInputMappingContext* CurrentContext : DefaultIMCs)
		{
			Subsystem->AddMappingContext(CurrentContext, 0);
		}	
	}

	InventoryComponent = FindComponentByClass<UInv_InventoryComponent>();
	
	CreateHUDWidget();
}

void AInv_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);

	EnhancedInputComponent->BindAction(PrimaryInventoryAction, ETriggerEvent::Started, this, &AInv_PlayerController::PrimaryInteract);
	EnhancedInputComponent->BindAction(ToggleInventoryAction, ETriggerEvent::Started, this, &AInv_PlayerController::ToggleInventory);
}

void AInv_PlayerController::PrimaryInteract()
{
	if (!ThisActor.IsValid()) return;
	UInv_ItemComponent* ItemComponent = ThisActor->FindComponentByClass<UInv_ItemComponent>();

	if (!IsValid(ItemComponent) || !InventoryComponent.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("ItemComponent or InventoryComponent is not valid!"));
		return;
	}

	InventoryComponent->TryAddItem(ItemComponent);
}

void AInv_PlayerController::CreateHUDWidget()
{
	if (!IsLocalController()) return;
	HUDWidget = CreateWidget<UInv_HUDWidget>(this, HUDWidgetClass);
	if (IsValid(HUDWidget))
	{
		HUDWidget->AddToViewport();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("HUDWidget is not valid!"));
	}
}

void AInv_PlayerController::TraceForItem()
{
	if (!IsValid(GEngine) || !GEngine->GameViewport)
	{
		UE_LOG(LogTemp, Warning, TEXT("GEngine or GameViewport is not valid!"));
		return;
	}
	FVector2D ViewportSize;
	GEngine->GameViewport->GetViewportSize(ViewportSize);
	const FVector2D Center = ViewportSize / 2.0f;
	FVector TraceStart, Forward;

	if (!UGameplayStatics::DeprojectScreenToWorld(this, Center, TraceStart, Forward)) return;

	const FVector TraceEnd = TraceStart + (Forward * TraceLength);
	FHitResult HitResult;
	GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ItemTraceChannel);

	LastActor = ThisActor;
	ThisActor = HitResult.GetActor();

	if (!ThisActor.IsValid())
	{
		if (IsValid(HUDWidget)) HUDWidget->HidePickupMessage();
		
	}

	if (ThisActor == LastActor) return;
	if (ThisActor.IsValid())
	{
		if (UActorComponent* Highlightable = ThisActor->FindComponentByInterface(UInv_Highlightable::StaticClass()); IsValid(Highlightable))
		{
			IInv_Highlightable::Execute_Highlight(Highlightable);
		}
			
		UInv_ItemComponent* ItemComponent = ThisActor->FindComponentByClass<UInv_ItemComponent>();
		if (!IsValid(ItemComponent))
		{
			UE_LOG(LogTemp, Warning, TEXT("ItemComponent is not valid on actor: %s"), *ThisActor->GetName());
			return;
		}
		if (IsValid(HUDWidget))HUDWidget->ShowPickupMessage(ItemComponent->GetPickupMessage());
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("HUDWidget is not valid!"));
		}
			
		
			
	}

	if (LastActor.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Last Actor: %s"), *LastActor->GetName());
				if (UActorComponent* Highlightable = LastActor->FindComponentByInterface(UInv_Highlightable::StaticClass()); IsValid(Highlightable))
		{
			IInv_Highlightable::Execute_UnHighlight(Highlightable);
		}
	}

	
}
