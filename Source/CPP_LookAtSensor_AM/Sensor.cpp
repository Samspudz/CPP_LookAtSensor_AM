// Fill out your copyright notice in the Description page of Project Settings.


#include "Sensor.h"

// Sets default values
ASensor::ASensor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetOnlyOwnerSee(true);
	Mesh->bCastDynamicShadow = false;
	Mesh->CastShadow = false;
	Mesh->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
}

// Called when the game starts or when spawned
void ASensor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASensor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector center = GetActorLocation();
	FVector playerPos = Player->GetActorLocation();
	FVector playerLookDir = playerPos + (Player->GetActorForwardVector() * lineDist);
	FVector playerToTriggerDir = center - playerPos;

	float lookAt = FVector::DotProduct(playerToTriggerDir, playerLookDir);

	bool isLooking = lookAt >= threshold;

	if (isLooking)
	{
		DrawDebugLine(GetWorld(), playerPos, playerPos + playerLookDir, FColor::Emerald);
	}
	else
	{
		DrawDebugLine(GetWorld(), playerPos, playerPos + playerLookDir, FColor::Red);
	}

	DrawDebugLine(GetWorld(), center, playerPos, FColor::Yellow);
	
}

