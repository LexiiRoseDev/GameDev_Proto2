// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMyCharacter::Move(const FInputActionValue& Value)
{
	const FVector2D MovementValue = Value.Get<FVector2D>();
	
	if (Controller)
	{
		const FVector Right = GetActorRightVector();
		AddMovementInput(Right, MovementValue.Y);
		
		const FVector Forward = GetActorForwardVector();
		AddMovementInput(Forward, MovementValue.X);
	}
}


// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	checkf(GEngine != nullptr, TEXT("Can only be used in EnhancedInputComponent"));
	
	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	
	if (PlayerController)
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (Subsystem)
		{
			Subsystem->AddMappingContext(PlayerControlContext, 0);
		}
	}
	
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("MyCharacter Online!"));
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	if (EnhancedInputComponent)
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
	}
}

