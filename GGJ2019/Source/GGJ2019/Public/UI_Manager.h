// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UI_Manager.generated.h"

UCLASS()
class GGJ2019_API AUI_Manager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUI_Manager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int enemyKilled;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Enemy")
		void KillCount(float value);	
};
