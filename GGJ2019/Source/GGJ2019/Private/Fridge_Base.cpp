// Fill out your copyright notice in the Description page of Project Settings.

#include "Fridge_Base.h"


// Sets default values
AFridge_Base::AFridge_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	fridgeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Fridge mesh"));
}

// Called when the game starts or when spawned
void AFridge_Base::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void AFridge_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FoodTypes AFridge_Base::RemoveFood()
{
	FoodTypes foodToTake = foodInFridge[foodInFridge.Num()];
	foodInFridge.Pop();

	if (foodInFridge.Num() == 0)
	{
		FridgeEmptied();
	}

	return foodToTake;
}

void AFridge_Base::ReplaceFood(FoodTypes food)
{
	foodInFridge.Add(food);
}

void AFridge_Base::FridgeEmptied()
{
	//do something
}