// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Global_Variables.h"
#include "Fridge_Base.generated.h"

class UStaticMeshComponent;
class UBoxComponent;

UCLASS()
class GGJ2019_API AFridge_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFridge_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* fridgeMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UBoxComponent* fridgeCollider;

	TArray<FoodTypes> foodInFridge;

	int GetFoodAmount() { return foodInFridge.Num(); }
	FoodTypes RemoveFood();
	void ReplaceFood(FoodTypes food);
	void FridgeEmptied();
	
};
