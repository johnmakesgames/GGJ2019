// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup_Base.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class GGJ2019_API APickup_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup_Base();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* pickupCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* baseMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool pickupActive;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
