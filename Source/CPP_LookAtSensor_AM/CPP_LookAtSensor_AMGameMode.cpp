// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_LookAtSensor_AMGameMode.h"
#include "CPP_LookAtSensor_AMCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPP_LookAtSensor_AMGameMode::ACPP_LookAtSensor_AMGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

}
