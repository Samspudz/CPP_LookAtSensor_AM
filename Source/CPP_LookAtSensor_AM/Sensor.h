// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sensor.generated.h"

UCLASS()
class CPP_LOOKATSENSOR_AM_API ASensor : public AActor
{
	GENERATED_BODY()

		UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		UMeshComponent* Mesh;

		UPROPERTY(EditAnywhere)
		float threshold;
		
		UPROPERTY(EditAnywhere)
		AActor* Player;

		UPROPERTY(EditAnywhere)
		float lineDist = 1;

public:	
	// Sets default values for this actor's properties
	ASensor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
