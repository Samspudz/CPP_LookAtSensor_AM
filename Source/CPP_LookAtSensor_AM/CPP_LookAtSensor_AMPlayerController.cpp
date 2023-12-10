// Copyright Epic Games, Inc. All Rights Reserved.


#include "CPP_LookAtSensor_AMPlayerController.h"
#include "EnhancedInputSubsystems.h"

void ACPP_LookAtSensor_AMPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);

		UE_LOG(LogTemp, Warning, TEXT("BeginPlay"));
	}
}