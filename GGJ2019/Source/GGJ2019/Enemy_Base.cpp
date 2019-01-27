// Fill out your copyright notice in the Description page of Project Settings.
#include "Enemy_Base.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "NavigationNode_Base.h"
#include "MyNavigationNode_Exit.h"
#include "Fridge_Base.h"
#include "UI_Manager.h"
#include "Engine/GameEngine.h"

// Sets default values
AEnemy_Base::AEnemy_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	_alive = true;
	_health = 1;
	_hasFood = false;
	_movementSpeed = 1.5f;
	_carriedObject = nullptr;
	fridgePos = FVector(-237.0, 156.0, 17.0);
	_exitPos = FVector(9999, 9999, 9999);
	_carriedFood = FoodTypes::None;
	_rotationAmountZ = 0;
	_deathCurrentFrame = 0.0f;
	_crawling = false;
	_climbing = false;
}

// Called when the game starts or when spawned
void AEnemy_Base::BeginPlay()
{
	Super::BeginPlay();
	GetUIManager();
}

// Called every frame
void AEnemy_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (_alive)
	{
		GoToFridge();
		TryToTakeFood();
		Escape();
		CheckFoodStatus();
		UpdateRotation();
	}
	else
	{
		_deathCurrentFrame++;
	}
}

void AEnemy_Base::CheckDeadStatus()
{
	if (_health <= 0)
	{
		_health = 0;
		Kill();
	}
}

void AEnemy_Base::Kill()
{
	_alive = false;
	UI->KillCount(1);
	//change the _body to the splodge
}

void AEnemy_Base::GoToFridge()
{
	FindNodes();
	if (targetNode != nullptr)
	{
		FVector movementDirection = targetNode->GetActorLocation() - this->GetActorLocation();
		movementDirection.Normalize();
		this->SetActorLocation(this->GetActorLocation() + (movementDirection * _movementSpeed));
	}
}

void AEnemy_Base::TryToTakeFood()
{
	if (!_hasFood)
	{
		FVector distanceFromFridge;
		distanceFromFridge.X = FMath::Abs(fridgePos.X - this->GetActorLocation().X);
		distanceFromFridge.Y = FMath::Abs(fridgePos.Y - this->GetActorLocation().Y);
		distanceFromFridge.Z = FMath::Abs(fridgePos.Z - this->GetActorLocation().Z);
		float distance = FMath::Sqrt(FMath::Pow(distanceFromFridge.X, 2) + FMath::Pow(distanceFromFridge.Y, 2) + FMath::Pow(distanceFromFridge.Z, 2));
		if (distance < 50)
		{
			GetFridge();
			CheckFoodStatus();
			FindExitNodes();
			_checkedFridge = true;
		}
	}
}

void AEnemy_Base::Escape()
{
	if (_hasFood)
	{
		_movementSpeed = 1.5f;
		FVector distanceFromExit;
		distanceFromExit.X = FMath::Abs(_exitPos.X - this->GetActorLocation().X);
		distanceFromExit.Y = FMath::Abs(_exitPos.Y - this->GetActorLocation().Y);
		distanceFromExit.Z = FMath::Abs(_exitPos.Z - this->GetActorLocation().Z);
		float distance = FMath::Sqrt(FMath::Pow(distanceFromExit.X, 2) + FMath::Pow(distanceFromExit.Y, 2) + FMath::Pow(distanceFromExit.Z, 2));
		if (distance < 50)
		{
			Destroy();
		}
	}
}

void AEnemy_Base::Damage(float damage)
{
	_health -= damage;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "I have taken damage!");
}

void AEnemy_Base::PathUsingNodes(TArray<ANavigationNode_Base*> nodes)
{
	TArray<ANavigationNode_Base*> nodesWithinDistance;
	if (nodes.Num() > 0)
	{
		for (int i = 0; i < nodes.Num(); i++)
		{
			if (DistanceToMe(nodes[i]) > 2 && DistanceToMe(nodes[i]) < 200)
			{
				nodesWithinDistance.Add(nodes[i]);
			}
		}

		if (nodesWithinDistance.Num() > 0)
		{
			if (!_checkedFridge)
			{
				ANavigationNode_Base* currentBest;
				currentBest = nodesWithinDistance[0];
				for (int i = 1; i < nodesWithinDistance.Num(); i++)
				{
					if (nodesWithinDistance[i]->GetDistanceToFridge() < currentBest->GetDistanceToFridge())
					{
						currentBest = nodesWithinDistance[i];
					}
				}
				targetNode = currentBest;
			}
			else
			{
				ANavigationNode_Base* currentBest;
				currentBest = nodesWithinDistance[0];
				for (int i = 1; i < nodesWithinDistance.Num(); i++)
				{
					if (nodesWithinDistance[i]->GetDistanceToPoint(_exitPos) < currentBest->GetDistanceToPoint(_exitPos))
					{
						currentBest = nodesWithinDistance[i];
					}
				}
				targetNode = currentBest;
			}
		}
	}
}

void AEnemy_Base::SetExitPositions(TArray<AMyNavigationNode_Exit*> nodes)
{
	int exit = FMath::FRandRange(0, nodes.Num());
	_exitPos = nodes[exit]->GetActorLocation();
}

void AEnemy_Base::TakeFood(AFridge_Base* fridge)
{
	_carriedFood = fridge->RemoveFood();
	StartHoldingFood(_carriedFood);
}

void AEnemy_Base::UpdateRotation()
{
	FVector forward = this->GetActorForwardVector();
	FVector movementDirection = targetNode->GetActorLocation() - this->GetActorLocation();
	//FVector movementDirection = fridgePos - this->GetActorLocation();

	float forwardMag = FMath::Sqrt(FMath::Pow(forward.X,2) + FMath::Pow(forward.Y, 2) + FMath::Pow(forward.Z, 2));
	float directionMag = FMath::Sqrt(FMath::Pow(movementDirection.X, 2) + FMath::Pow(movementDirection.Y, 2) + FMath::Pow(movementDirection.Z, 2));
	float dot = ((forward.X * movementDirection.X) + (forward.Y * movementDirection.Y) + (forward.Z * movementDirection.Z));
	float theta = FMath::Acos(dot / (forwardMag * directionMag));
	//theta *= (180 / 3.14);
	//float thetaDeg = theta * (180 / 3.14);
	theta = FMath::RadiansToDegrees(theta);

	if (theta > 25.0f)
	{
		/*if (movementDirection.Y < forward.Y)
			theta = -theta;*/
		theta /= 100;
		RotateFromTheta(5);
	}
	
}

float AEnemy_Base::DistanceToMe(AActor* actor)
{
	FVector distance;
	distance.X = FMath::Abs(actor->GetActorLocation().X - this->GetActorLocation().X);
	distance.Y = FMath::Abs(actor->GetActorLocation().Y - this->GetActorLocation().Y);
	distance.Z = FMath::Abs(actor->GetActorLocation().Z - this->GetActorLocation().Z);
	return FMath::Sqrt(FMath::Pow(distance.X, 2) + FMath::Pow(distance.Y, 2) + FMath::Pow(distance.Z, 2));
}

void AEnemy_Base::GiveUI(AUI_Manager* UI)
{
	this->UI = UI;
}

void AEnemy_Base::CheckFoodStatus()
{
	if (_carriedFood != FoodTypes::None)
	{
		_hasFood = true;
	}
	else
	{
		_hasFood = false;
	}
}

void AEnemy_Base::UpdateMovementType()
{
	switch (targetNode->_nodeType)
	{
	default:
		break;
	}
}