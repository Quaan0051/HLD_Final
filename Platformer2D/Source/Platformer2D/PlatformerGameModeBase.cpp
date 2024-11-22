// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformerGameModeBase.h"
#include "PlatformerGameStateBase.h"
#include "MarioPlayerState.h"
#include "MarioCamera.h"
#include "MarioCharacter.h"
#include "MarioTransform.h"
#include "GameConstants.h"
#include "DeadActor.h"
#include "Door.h"
#include "CoinPickup.h"
#include "BreakableBlock.h"
#include "GameFramework/PlayerStart.h"
#include "PaperFlipbookComponent.h"
#include "EngineUtils.h"
#include "PaperTileMapComponent.h"
#include "PaperTileMapActor.h" 
#include "Kismet/GameplayStatics.h" 


APlatformerGameModeBase::APlatformerGameModeBase() :
	Camera(nullptr),
	MarioTransform(nullptr),
	MarioSpawnLocation(),
	DeadMario(nullptr),
	State(EGameState::Unknown),
	MarioPlayerStartLocation(),
	FadeInOutTimer(0.0f),
	FadeHoldTimer(0.0f),
	CoinSwitchDuration(0.0f)
{
	PrimaryActorTick.bCanEverTick = true;
}

void APlatformerGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	Camera = GetWorld()->SpawnActor<AMarioCamera>(AMarioCamera::StaticClass(), FVector(), FRotator(), SpawnParams);

	// Get the PlayerStart Actor and get it's position
	for (TActorIterator<APlayerStart> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		MarioPlayerStartLocation = (*ActorItr)->GetActorLocation();
		MarioSpawnLocation = MarioPlayerStartLocation;
		break;
	}

	// Get the TileMapComponent from the TileMapActor
	UPaperTileMapComponent* tileMapComponent = nullptr;
	for (TActorIterator<APaperTileMapActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		APaperTileMapActor* tileMapActor = Cast<APaperTileMapActor>(*ActorItr);
		if (tileMapActor != nullptr)
		{
			tileMapComponent = tileMapActor->GetRenderComponent();
			break;
		}
	}

	// Set the Camera's tilemap size
	if (tileMapComponent != nullptr)
	{
		int32 mapWidth = 0;
		int32 mapHeight = 0;
		int32 numLayer = 0;
		tileMapComponent->GetMapSize(mapWidth, mapHeight, numLayer);
		Camera->SetTileMapSize(mapWidth, mapHeight);
	}

	SetState(EGameState::FadeHold);
}

void APlatformerGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (State == EGameState::Gameplay)
	{
		if (DeadMario != nullptr)
		{
			if (DeadMario->GetActorLocation().Z < GameConstants::DestroyActorAtZ)
			{
				DeadMario->Destroy();
				DeadMario = nullptr;

				UnpauseActors();
				SetState(EGameState::FadeIn);
			}
		}

		if (CoinSwitchDuration > 0.0f)
		{
			CoinSwitchDuration -= DeltaTime;

			if (CoinSwitchDuration <= 0.0f)
			{
				CoinSwitchDuration = 0.0f;
				EndToggleCoinsAndBlocks();
			}
		}

		// Handle the game timer's countdown
		APlatformerGameStateBase* gameState = GetGameState<APlatformerGameStateBase>();
		if (gameState != nullptr)
		{
			gameState->TimeRemaining -= DeltaTime;

			if (gameState->TimeRemaining < 0.0f)
			{
				gameState->TimeRemaining = 0.0f;

				AMarioCharacter* mario = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>();
				if (mario != nullptr)
				{
					mario->HandleDamage(true);
				}
			}
		}
	}
	else if (State == EGameState::FadeIn)
	{
		FadeInOutTimer -= DeltaTime;

		float elapsed = FMath::Max(0.0f, GameConstants::BlackOverlayFadeInOutDuration - FadeInOutTimer);
		float alpha = elapsed / GameConstants::BlackOverlayFadeInOutDuration;

		APlatformerGameStateBase* gameState = GetGameState<APlatformerGameStateBase>();
		if (gameState != nullptr)
		{
			gameState->BlackOverlayAlpha = alpha;
		}

		if (FadeInOutTimer <= 0.0f)
		{
			FadeInOutTimer = 0.0f;
			SetState(EGameState::FadeHold);
		}
	}
	else if (State == EGameState::FadeHold)
	{
		FadeHoldTimer -= DeltaTime;

		if (FadeHoldTimer <= 0.0f)
		{
			FadeHoldTimer = 0.0f;
			SetState(EGameState::FadeOut);
		}
	}
	else if (State == EGameState::FadeOut)
	{
		FadeInOutTimer -= DeltaTime;

		float elapsed = FMath::Max(0.0f, GameConstants::BlackOverlayFadeInOutDuration - FadeInOutTimer);
		float alpha = 1.0f - (elapsed / GameConstants::BlackOverlayFadeInOutDuration);

		APlatformerGameStateBase* gameState = GetGameState<APlatformerGameStateBase>();
		if (gameState != nullptr)
		{
			gameState->BlackOverlayAlpha = alpha;
		}

		if (FadeInOutTimer <= 0.0f)
		{
			FadeInOutTimer = 0.0f;
			SetState(EGameState::Gameplay);
		}
	}
}

void APlatformerGameModeBase::SetState(EGameState state)
{
	if (State != state)
	{
		State = state;

		if (State == EGameState::Gameplay)
		{
			APlatformerGameStateBase* gameState = GetGameState<APlatformerGameStateBase>();
			if (gameState != nullptr)
				gameState->BlackOverlayAlpha = 0.0f;
		}
		else if (State == EGameState::FadeIn)
		{
			APlatformerGameStateBase* gameState = GetGameState<APlatformerGameStateBase>();
			if (gameState != nullptr)
				gameState->BlackOverlayAlpha = 0.0f;

			FadeInOutTimer = GameConstants::BlackOverlayFadeInOutDuration;
		}
		else if (State == EGameState::FadeHold)
		{
			APlatformerGameStateBase* gameState = GetGameState<APlatformerGameStateBase>();
			if (gameState != nullptr)
				gameState->BlackOverlayAlpha = 1.0f;

			FadeHoldTimer = GameConstants::BlackOverlayFadeHoldDuration;
		}
		else if (State == EGameState::FadeOut)
		{
			APlatformerGameStateBase* gameState = GetGameState<APlatformerGameStateBase>();
			if (gameState != nullptr)
				gameState->BlackOverlayAlpha = 1.0f;

			AMarioCharacter* mario = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>();
			if (mario != nullptr)
			{
				// If Mario died (and not just switching rooms), reset the Time Remaining back
				AMarioPlayerState* playerState = mario->GetPlayerState<AMarioPlayerState>();
				if (playerState != nullptr)
				{
					if (playerState->State == EMarioState::Dead)
					{
						if (gameState != nullptr)
							gameState->TimeRemaining = GameConstants::DefaultGameDuration;
					}
				}

				// Respawn Mario
				mario->Respawn(MarioSpawnLocation);

				// Set the Camera to mario's location
				Camera->SetCameraLocation(FVector2D(MarioSpawnLocation.X, MarioSpawnLocation.Z));
			}

			FadeInOutTimer = GameConstants::BlackOverlayFadeInOutDuration;
		}
	}
}

void APlatformerGameModeBase::ApplyCameraShake()
{
	Camera->ApplyCameraShake();
}

void APlatformerGameModeBase::SpawnMarioTransform(FVector location, EMarioForm oldForm, EMarioForm newForm, EMarioDirection direction)
{
	if (MarioTransform == nullptr)
	{
		PauseActors();

		if (MarioTransformTemplate != nullptr)
		{
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
				FTransform SpawnTransform(location);

				MarioTransform = World->SpawnActor<AMarioTransform>(MarioTransformTemplate, SpawnTransform, SpawnParams);
				MarioTransform->SetFlipbook(oldForm, newForm, direction);
			}
		}
	}
}

void APlatformerGameModeBase::NextRoom(ADoor* door)
{
	MarioSpawnLocation = door->GetActorLocation();
	SetState(EGameState::FadeIn);
}

void APlatformerGameModeBase::OnMarioTransformEnded()
{
	UnpauseActors();

	if (MarioTransform != nullptr)
	{
		MarioTransform->Destroy();
		MarioTransform = nullptr;
	}
}

void APlatformerGameModeBase::MarioHasDied(bool spawnDeadMario)
{
	// Get Mario's player state and decrease the Lives value by one
	AMarioCharacter* mario = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>();
	if (mario != nullptr)
	{
		AMarioPlayerState* playerState = mario->GetPlayerState<AMarioPlayerState>();
		if (playerState != nullptr)
		{
			if (playerState->Lives > 0)
			{
				playerState->Lives--;


				// Do we spawn dead mario or not?
				if (spawnDeadMario)
				{
					SpawnDeadMario(mario->GetActorLocation());
				}
				else
				{
					// If not fade out immediately
					SetState(EGameState::FadeIn);
				}
			}
			else
			{
				APlatformerGameStateBase* gameState = GetGameState<APlatformerGameStateBase>();
				if (gameState != nullptr)
				{
					gameState->IsGameOver = true;
				}
			}
		}
	}
}

void APlatformerGameModeBase::OnCoinSwitch()
{
	CoinSwitchDuration = GameConstants::BreakableBlockCoinSwitchDuration;
	BeginToggleCoinsAndBlocks();
}

void APlatformerGameModeBase::SpawnDeadMario(FVector location)
{
	if (DeadMario == nullptr)
	{
		PauseActors();

		if (DeadMarioTemplate != nullptr)
		{
			UWorld* const world = GetWorld();
			if (world != nullptr)
			{
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
				FTransform SpawnTransform(location);

				DeadMario = world->SpawnActor<ADeadActor>(DeadMarioTemplate, SpawnTransform, SpawnParams);
			}
		}
	}
}

void APlatformerGameModeBase::BeginToggleCoinsAndBlocks()
{
	TArray<AActor*> coinPickupActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACoinPickup::StaticClass(), coinPickupActors);

	TArray<AActor*> breakableBlockActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABreakableBlock::StaticClass(), breakableBlockActors);

	for (auto actor : coinPickupActors)
	{
		FVector location = actor->GetActorLocation();
		actor->Destroy();

		GetWorld()->SpawnActor<ABreakableBlock>(BreakableBlockTemplate, location, FRotator(0.0f, 0.0f, 0.0f));
	}

	for (auto actor : breakableBlockActors)
	{
		if (Cast<ABreakableBlock>(actor)->CanTransformToCoin())
		{
			FVector location = actor->GetActorLocation();
			actor->Destroy();

			ACoinPickup* coinPickup = GetWorld()->SpawnActor<ACoinPickup>(CoinPickupTemplate, location, FRotator(0.0f, 0.0f, 0.0f));
			coinPickup->UseStaticCoin();
		}
	}
}

void APlatformerGameModeBase::EndToggleCoinsAndBlocks()
{
	TArray<AActor*> coinPickupActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACoinPickup::StaticClass(), coinPickupActors);

	TArray<AActor*> breakableBlockActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABreakableBlock::StaticClass(), breakableBlockActors);

	for (auto actor : coinPickupActors)
	{
		FVector location = actor->GetActorLocation();
		actor->Destroy();

		GetWorld()->SpawnActor<ABreakableBlock>(BreakableBlockTemplate, location, FRotator(0.0f, 0.0f, 0.0f));
	}

	for (auto actor : breakableBlockActors)
	{
		if (Cast<ABreakableBlock>(actor)->CanTransformToCoin())
		{
			FVector location = actor->GetActorLocation();
			actor->Destroy();
			GetWorld()->SpawnActor<ACoinPickup>(CoinPickupTemplate, location, FRotator(0.0f, 0.0f, 0.0f));
		}
	}
}

void APlatformerGameModeBase::PauseActors()
{
	for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		AActor* actor = *ActorItr;
		actor->CustomTimeDilation = 0.0f;

		if (actor->ActorHasTag("MarioCharacter"))
		{
			AMarioCharacter* mario = Cast<AMarioCharacter>(actor);
			mario->GetSprite()->SetVisibility(false);
		}
	}
}

void APlatformerGameModeBase::UnpauseActors()
{
	for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		AActor* actor = *ActorItr;
		actor->CustomTimeDilation = 1.0f;

		if (actor->ActorHasTag("MarioCharacter"))
		{
			AMarioCharacter* mario = Cast<AMarioCharacter>(actor);
			mario->GetSprite()->SetVisibility(true);
		}
	}
}
