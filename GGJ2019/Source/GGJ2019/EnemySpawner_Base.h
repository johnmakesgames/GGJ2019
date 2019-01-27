// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/GameEngine.h"
#include "EnemySpawner_Base.generated.h"

UCLASS()
class GGJ2019_API AEnemySpawner_Base : public AActor
{
	GENERATED_BODY()
private:
	float _maxCooldown;
	float _minCooldown;
	float _cooldown;

public:	
	enum enemies{ DIMPLES };
	enemies _enemyToSpawn;
	bool _active;
	float _totalSpawnedEnemies;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawning")
		float _secondsTillActive;
	// Sets default values for this actor's properties
	AEnemySpawner_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Spawning")
		void SpawnDimples();
};
