// Fill out your copyright notice in the Description page of Project Settings.

#include "NavigationNode_Crawling.h"

void ANavigationNode_Crawling::BeginPlay()
{
	Super::BeginPlay();
	_nodeType = NodeTypes::Climbing;
}