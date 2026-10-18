// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomChar.h"

// Sets default values
ACustomChar::ACustomChar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACustomChar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACustomChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACustomChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

