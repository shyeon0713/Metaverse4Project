// Fill out your copyright notice in the Description page of Project Settings.


#include "TestAsset1.h"

// Sets default values
ATestAsset1::ATestAsset1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestAsset1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestAsset1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

