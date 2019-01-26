// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy_Base.generated.h"

class USkeletalMeshComponent;
class AMyNavigationNode_Base;
class AMyNavigationNode_Exit;


UCLASS()
class GGJ2019_API AEnemy_Base : public AActor
{
	GENERATED_BODY()

private:
	bool _alive;
	bool _hasFood;
	float _health;
	float _movementSpeed;
	AActor* _carriedObject;
	ANavigationNode_Base* targetNode;
	FVector fridgePos;
	FVector _exitPos;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Model") 
	USkeletalMeshComponent* _body;

private:
	void CheckDeadStatus();
	void Kill();
	void GoToFridge();
	void TryToTakeFood();
	void Escape();

	float DistanceToMe(AActor* actor);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Navigation")
		void FindNodes();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Navigation")
		void FindExitNodes();
	UFUNCTION(BlueprintCallable, Category = "Navigation")
		void PathUsingNodes(TArray<ANavigationNode_Base*> nodes);
	UFUNCTION(BlueprintCallable, Category = "Navigation")
		void SetExitPositions(TArray<AMyNavigationNode_Exit*> nodes);

public:	
	// Sets default values for this actor's properties
	AEnemy_Base();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Damage(float damage);
};
