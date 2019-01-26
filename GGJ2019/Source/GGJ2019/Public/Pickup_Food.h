// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup_Base.h"
#include "Global_Variables.h"
#include "Pickup_Food.generated.h"

/**
 * 
 */
UCLASS()
class GGJ2019_API APickup_Food : public APickup_Base
{
	GENERATED_BODY()



	FoodTypes foodType = None;

		
	UFUNCTION(BlueprintCallable)
		FoodTypes getFoodType() { return foodType; }

	UFUNCTION(BlueprintCallable)
		void setFoodTypes(FoodTypes food) { foodType = food; }
	
};
