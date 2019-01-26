// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemySpawner_Base.h"
#include "Enemy_Base.h"

// Sets default values
AEnemySpawner_Base::AEnemySpawner_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	_maxCooldown = 30;
	_minCooldown = 2;
	_cooldown = 0;
	_active = true;
	_totalSpawnedEnemies = 0;
}

// Called when the game starts or when spawned
void AEnemySpawner_Base::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnemySpawner_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (_active)
	{
		if (_cooldown > 0)
		{
			_cooldown -= DeltaTime;
		}
		else if (_cooldown <= 0)
		{
			switch (_enemyToSpawn)
			{
			case AEnemySpawner_Base::DIMPLES:
				SpawnDimples();
				break;
			default:
				break;
			}
			_cooldown = _maxCooldown;
			_totalSpawnedEnemies++;
		}
	}
	
	if (FMath::FRandRange(1, 3) < 2)
	{
		_maxCooldown += _totalSpawnedEnemies / FMath::FRandRange(4000, 10000);
	}
	else
	{
		_maxCooldown -= _totalSpawnedEnemies / FMath::FRandRange(800, 7000);
	}
	FString TheFloatStr = FString::SanitizeFloat(_maxCooldown);
	//GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Red, *TheFloatStr);

	if (FMath::FRandRange(0, 1000) < 1)
	{
		SpawnDimples();
	}

	if (_maxCooldown < _minCooldown)
	{
		_maxCooldown = _minCooldown;
	}
}

