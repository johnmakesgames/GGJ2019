// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fridge_Base.generated.h"
//#include "GGJ2019/Public/Globals.h"

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

	//remove food
	//replace food
	//all types of food in fridge
	//amount of food in the fridge

	UFUNCTION(BlueprintCallable)
		void PlaceFoodInTheFridge();
	
};
