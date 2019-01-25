// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup_Base.generated.h"

class USphereComponent;
//class UBoxComponent;

UCLASS()
class GGJ2019_API APickup_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup_Base();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* pickupCollider;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//UBoxComponent* damageCollider;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//bool damageActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool pickupActive;

	//UFUNCTION(BlueprintCallable)
		//void OnWeaponBeginOverlap(TArray<AActor*> actor);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
