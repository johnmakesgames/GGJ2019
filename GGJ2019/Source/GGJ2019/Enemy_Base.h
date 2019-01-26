// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Global_Variables.h"
#include "Enemy_Base.generated.h"

class USkeletalMeshComponent;
class UCapsuleComponent;
class AMyNavigationNode_Base;
class AMyNavigationNode_Exit;
class AFridge_Base;

UCLASS()
class GGJ2019_API AEnemy_Base : public AActor
{
	GENERATED_BODY()

private:
	bool _alive;
	bool _hasFood;
	float _health;
	float _movementSpeed;
	ANavigationNode_Base* targetNode;
	FVector fridgePos;
	FVector _exitPos;
	FoodTypes _carriedFood;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Model")
		AActor* _carriedObject;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
		float _rotationAmountZ;


private:
	void CheckDeadStatus();
	void Kill();
	void GoToFridge();
	void TryToTakeFood();
	void Escape();
	void UpdateRotation();
	float DistanceToMe(AActor* actor);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Navigation")
		void FindNodes();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Navigation")
		void FindExitNodes();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Food Theft")
		void GetFridge();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Rotation")
		void RotateFromTheta(float theta);
	UFUNCTION(BlueprintCallable, Category = "Navigation")
		void PathUsingNodes(TArray<ANavigationNode_Base*> nodes);
	UFUNCTION(BlueprintCallable, Category = "Navigation")
		void SetExitPositions(TArray<AMyNavigationNode_Exit*> nodes);
	UFUNCTION(BlueprintCallable, Category = "Food Theft")
		void TakeFood(AFridge_Base* fridge);
	UFUNCTION(BlueprintCallable, Category = "Food Theft")
		bool GetHasFood() { return _hasFood; };

public:	
	// Sets default values for this actor's properties
	AEnemy_Base();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Damage(float damage);
};
