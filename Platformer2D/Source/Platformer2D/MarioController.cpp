// Fill out your copyright notice in the Description page of Project Settings.


#include "MarioController.h"
#include "MarioCharacter.h"
#include "MarioPlayerState.h"
#include "PlatformerGameModeBase.h"
#include "InputAction.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h" 


AMarioController::AMarioController() :
	InputMappingContext(nullptr),
	MoveInputAction(nullptr),
	RunInputAction(nullptr),
	JumpInputAction(nullptr),
	DuckInputAction(nullptr),
	UpInputAction(nullptr),
	MarioCharacter(nullptr),
	MarioPlayerState(nullptr),
	InputSubsystem(nullptr)
{

}

void AMarioController::BeginPlay()
{
	Super::BeginPlay();

	MarioPlayerState = Cast<AMarioPlayerState>(PlayerState);

	InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (InputSubsystem != nullptr)
		InputSubsystem->AddMappingContext(InputMappingContext, 0);
}

void AMarioController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	MarioCharacter = Cast<AMarioCharacter>(aPawn);
}

void AMarioController::OnUnPossess()
{
	Super::OnUnPossess();

	MarioCharacter = nullptr;
}

void AMarioController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	if (EnhancedInputComponent != nullptr)
	{
		EnhancedInputComponent->BindAction(MoveInputAction, ETriggerEvent::Triggered, this, &AMarioController::OnMove);
		EnhancedInputComponent->BindAction(MoveInputAction, ETriggerEvent::Completed, this, &AMarioController::OnMoveReleased);

		EnhancedInputComponent->BindAction(RunInputAction, ETriggerEvent::Started, this, &AMarioController::OnRunPressed);
		EnhancedInputComponent->BindAction(RunInputAction, ETriggerEvent::Completed, this, &AMarioController::OnRunReleased);

		EnhancedInputComponent->BindAction(JumpInputAction, ETriggerEvent::Started, this, &AMarioController::OnJumpPressed);
		EnhancedInputComponent->BindAction(JumpInputAction, ETriggerEvent::Completed, this, &AMarioController::OnJumpReleased);

		EnhancedInputComponent->BindAction(DuckInputAction, ETriggerEvent::Started, this, &AMarioController::OnDuckPressed);
		EnhancedInputComponent->BindAction(DuckInputAction, ETriggerEvent::Completed, this, &AMarioController::OnDuckReleased);

		EnhancedInputComponent->BindAction(UpInputAction, ETriggerEvent::Started, this, &AMarioController::OnUpPressed);
	}
}

float AMarioController::GetMoveValue()
{
	if (InputSubsystem != nullptr)
	{
		FInputActionValue InputActionValue = InputSubsystem->GetPlayerInput()->GetActionValue(MoveInputAction);
		return InputActionValue.Get<float>();
	}
	return 0.0f;
}

bool AMarioController::IsRunPressed()
{
	if (InputSubsystem != nullptr)
	{
		FInputActionValue InputActionValue = InputSubsystem->GetPlayerInput()->GetActionValue(RunInputAction);
		return InputActionValue.Get<bool>();
	}
	return false;
}

bool AMarioController::IsJumpPressed()
{
	if (InputSubsystem != nullptr)
	{
		FInputActionValue InputActionValue = InputSubsystem->GetPlayerInput()->GetActionValue(JumpInputAction);
		return InputActionValue.Get<bool>();
	}
	return false;
}

bool AMarioController::IsDuckPressed()
{
	if (InputSubsystem != nullptr)
	{
		FInputActionValue InputActionValue = InputSubsystem->GetPlayerInput()->GetActionValue(DuckInputAction);
		return InputActionValue.Get<bool>();
	}
	return false;
}

bool AMarioController::IsUpPressed()
{
	if (InputSubsystem != nullptr)
	{
		FInputActionValue InputActionValue = InputSubsystem->GetPlayerInput()->GetActionValue(UpInputAction);
		return InputActionValue.Get<bool>();
	}
	return false;
}

void AMarioController::OnMove(const struct FInputActionValue& Value)
{
	float Direction = Value.Get<float>();

	if (MarioCharacter != nullptr && MarioPlayerState != nullptr && MarioPlayerState->IsDead() == false)
	{
		if (MarioPlayerState->State != EMarioState::Ducking)
		{
			if (MarioPlayerState->IsOnGround)
				MarioCharacter->ApplyStateChange(EMarioState::Walking);

			MarioCharacter->AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Direction);

			if (MarioPlayerState->DirectionScalar() != Direction && MarioPlayerState->IsRunning)
			{
				MarioPlayerState->RunningMeter -= 4;
				if (MarioPlayerState->RunningMeter < 0)
					MarioPlayerState->RunningMeter = 0;
			}

			if (Direction < 0.0f)
			{
				SetControlRotation(FRotator(0.0, 180.0f, 0.0f));
				MarioPlayerState->Direction = EMarioDirection::Left;
			}
			else if (Direction > 0.0f)
			{
				SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
				MarioPlayerState->Direction = EMarioDirection::Right;
			}
		}
	}
}

void AMarioController::OnMoveReleased(const struct FInputActionValue& Value)
{
	if (MarioCharacter != nullptr && MarioPlayerState != nullptr && MarioPlayerState->IsDead() == false)
	{
		if (MarioPlayerState->IsOnGround && MarioPlayerState->State != EMarioState::Ducking)
		{
			MarioCharacter->ApplyStateChange(EMarioState::Idle);
		}
	}
}

void AMarioController::OnRunPressed(const struct FInputActionValue& Value)
{
	if (MarioCharacter != nullptr && MarioPlayerState->IsDead() == false)
		MarioCharacter->Run();
}

void AMarioController::OnRunReleased(const struct FInputActionValue& Value)
{
	if (MarioCharacter != nullptr && MarioPlayerState->IsDead() == false)
		MarioCharacter->StopRunning();
}

void AMarioController::OnJumpPressed(const struct FInputActionValue& Value)
{
	if (MarioCharacter != nullptr && MarioPlayerState->IsDead() == false)
		MarioCharacter->Jump();
}

void AMarioController::OnJumpReleased(const struct FInputActionValue& Value)
{
	if (MarioCharacter != nullptr && MarioPlayerState->IsDead() == false)
		MarioCharacter->StopJumping();
}

void AMarioController::OnDuckPressed(const struct FInputActionValue& Value)
{
	if (MarioCharacter != nullptr && MarioPlayerState->IsDead() == false)
		MarioCharacter->Duck();
}

void AMarioController::OnDuckReleased(const struct FInputActionValue& Value)
{
	if (MarioCharacter != nullptr && MarioPlayerState->IsDead() == false)
		MarioCharacter->StopDucking();
}

void AMarioController::OnUpPressed(const FInputActionValue& Value)
{
	if (MarioCharacter != nullptr && MarioPlayerState->IsDead() == false)
		MarioCharacter->TryDoor();
}