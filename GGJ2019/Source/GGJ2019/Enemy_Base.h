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
class AUI_Manager;

UCLASS()
class GGJ2019_API AEnemy_Base : public AActor
{
	GENERATED_BODY()

private:
	bool _alive;
	bool _hasFood;
	bool _checkedFridge;
	float _health;
	float _movementSpeed;
	ANavigationNode_Base* targetNode;
	FVector fridgePos;
	FVector _exitPos;
	FoodTypes _carriedFood;
	AUI_Manager* UI;
	float _deathCurrentFrame;
	bool _crawling;
	bool _climbing;
	bool _walking;

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
	void CheckFoodStatus();
	void UpdateMovementType();
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
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Food Theft")
		void StartHoldingFood(FoodTypes food);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Food Theft")
		void DropFoodFood(FoodTypes food);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Rotation")
		void RotateFromTheta(float theta);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "UI")
		void GetUIManager();
	UFUNCTION(BlueprintCallable, Category = "Navigation")
		void PathUsingNodes(TArray<ANavigationNode_Base*> nodes);
	UFUNCTION(BlueprintCallable, Category = "Navigation")
		void SetExitPositions(TArray<AMyNavigationNode_Exit*> nodes);
	UFUNCTION(BlueprintCallable, Category = "Food Theft")
		void TakeFood(AFridge_Base* fridge);
	UFUNCTION(BlueprintCallable, Category = "Food Theft")
		bool GetHasFood() { return _hasFood; };
	UFUNCTION(BlueprintCallable, Category = "UI")
		void GiveUI(AUI_Manager* UI);
	UFUNCTION(BlueprintCallable, Category = "Animations")
		bool GetAliveStatus() { return _alive; };
	UFUNCTION(BlueprintCallable, Category = "Animations")
		float GetDeathFrame() { return _deathCurrentFrame; };
	UFUNCTION(BlueprintCallable, Category = "Animations")
		bool GetCrawlingStatus() { return _crawling; };
	UFUNCTION(BlueprintCallable, Category = "Animations")
		bool GetClimbingStatus() { return _climbing; };


public:	
	// Sets default values for this actor's properties
	AEnemy_Base();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Damage(float damage);
};
