// Fill out your copyright notice in the Description page of Project Settings.
#include "Enemy_Base.h"
#include "Components/SkeletalMeshComponent.h"
#include "NavigationNode_Base.h"

// Sets default values
AEnemy_Base::AEnemy_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	_alive = true;
	_health = 1;
	_hasFood = false;
	_movementSpeed = 5;
	_carriedObject = nullptr;
	_body = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Body"));
}

// Called when the game starts or when spawned
void AEnemy_Base::BeginPlay()
{
	Super::BeginPlay();
	if (_alive)
	{
		if (!_hasFood)
			GoToFridge(); 
		else
			Escape();
		CheckDeadStatus();
	}
}

// Called every frame
void AEnemy_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (_alive)
	{
		if (!_hasFood)
			GoToFridge();
		else
			Escape();
		CheckDeadStatus();
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

}

void AEnemy_Base::Escape()
{
	FindNodes();
	if (targetNode != nullptr)
	{
		FVector movementDirection = this->GetActorLocation() - targetNode->GetActorLocation();
		movementDirection.Normalize();
		this->SetActorLocation(this->GetActorLocation() + (movementDirection * _movementSpeed));
	}
}

void AEnemy_Base::Damage(float damage)
{
	_health -= damage;
}

void AEnemy_Base::PathUsingNodes(TArray<ANavigationNode_Base*> nodes)
{
	TArray<ANavigationNode_Base*> nodesWithinDistance;
	if (nodes.Num() > 0)
	{
		for (int i = 0; i < nodes.Num(); i++)
		{
			if (DistanceToMe(nodes[i]) > 2 && DistanceToMe(nodes[i]) < 150)
			{
				nodesWithinDistance.Add(nodes[i]);
			}
		}

		if (nodesWithinDistance.Num() > 0)
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