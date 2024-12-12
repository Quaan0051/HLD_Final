// Fill out your copyright notice in the Description page of Project Settings.


#include "ChainChomp.h"
#include "EnemyConstants.h"
#include "MarioCharacter.h"
#include "PaperFlipbookComponent.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"
#include "CableComponent.h"
#include "Components/BoxComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Math/UnrealMathUtility.h"

AChainChomp::AChainChomp()
{
	AttachPoint = CreateDefaultSubobject<UBoxComponent>("ChainChompAttachPoint");
	AttachPoint->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	AttachPoint->SetCollisionProfileName("OverlapAll");
	AttachPoint->BodyInstance.bLockRotation = true;
	AttachPoint->BodyInstance.bLockTranslation = true;
	RootComponent = AttachPoint;

	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetSimulatePhysics(true);
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->OnComponentHit.AddDynamic(this, &AChainChomp::OnHit);
	BoxComponent->SetupAttachment(RootComponent);

	CableComponent = CreateDefaultSubobject<UCableComponent>("ChainChompCableComponent");
	CableComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CableComponent->SetCollisionProfileName("BlockAllDynamic");
	CableComponent->SetSimulatePhysics(false);
	CableComponent->SetupAttachment(BoxComponent);
	CableComponent->CableLength = 100.0f;

	Chain1 = CreateDefaultSubobject<UPaperSpriteComponent>("SpriteComponent1");
	Chain1->SetCollisionProfileName("NoCollision");
	Chain2 = CreateDefaultSubobject<UPaperSpriteComponent>("SpriteComponent2");
	Chain2->SetCollisionProfileName("NoCollision");
	Chain3 = CreateDefaultSubobject<UPaperSpriteComponent>("SpriteComponent3");
	Chain3->SetCollisionProfileName("NoCollision");
	Chain4 = CreateDefaultSubobject<UPaperSpriteComponent>("SpriteComponent4");
	Chain4->SetCollisionProfileName("NoCollision");

	/*HeadBoxComponent = CreateDefaultSubobject<UBoxComponent>("ChainChompHead");
	HeadBoxComponent->SetCollisionProfileName("BlockAllDynamic");
	HeadBoxComponent->SetSimulatePhysics(true);
	HeadBoxComponent->SetNotifyRigidBodyCollision(true);
	HeadBoxComponent->BodyInstance.bLockXRotation = true;
	HeadBoxComponent->BodyInstance.bLockYRotation = true;
	HeadBoxComponent->BodyInstance.bLockZRotation = true;
	HeadBoxComponent->BodyInstance.bLockYTranslation = true;
	HeadBoxComponent->SetupAttachment(RootComponent);*/

	//ConstraintComponent = CreateDefaultSubobject<UPhysicsConstraintComponent>("ConstraintComponent");
	//ConstraintComponent->SetupAttachment(AttachPoint);

	Type = EEnemyType::ChainChomp;
	Tags.Add("ChainChomp");
}

void AChainChomp::BeginPlay()
{
	Super::BeginPlay();

	SetState(EChainChompState::Idle);
}

void AChainChomp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Velocity.X >= 0)
	{
		FlipbookComponent->SetRelativeScale3D(FVector(-1.0f, 1.0f, 1.0f));
	}
	else
	{
		FlipbookComponent->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	}

	TArray<FVector> cableLocations;
	CableComponent->GetCableParticleLocations(cableLocations);

	Chain1->SetWorldLocation(cableLocations[0]);
	Chain2->SetWorldLocation(cableLocations[1]);
	Chain3->SetWorldLocation(cableLocations[2]);
	Chain4->SetWorldLocation(cableLocations[3]);


	if (State == EChainChompState::Idle)
	{
		FVector location = BoxComponent->GetComponentLocation();
		location += Velocity * DeltaTime;
		BoxComponent->SetWorldLocation(location);

		FVector anchorLocation = GetActorLocation();
		FVector headLocation = BoxComponent->GetComponentLocation();
		float distanceFromAnchor = sqrt(pow(anchorLocation.X - headLocation.X, 2) + pow(anchorLocation.Z - headLocation.Z, 2));
		if (distanceFromAnchor >= EnemyConstants::ChainChompMaxDistanceFromAnchor)
		{
			if (headLocation.X > anchorLocation.X)
			{
				Velocity.X = -1 * EnemyConstants::ChainChompSpeed;
			}
			else
			{
				Velocity.X = 1 * EnemyConstants::ChainChompSpeed;
			}
			
			DirectionTimer = FMath::FRandRange(EnemyConstants::ChainChompDirectionChangeTimerMin, EnemyConstants::ChainChompDirectionChangeTimerMax);
		}
		else
		{
			DirectionTimer -= DeltaTime;
			if (DirectionTimer <= 0.0f)
			{
				Velocity *= -1;
				DirectionTimer = FMath::FRandRange(EnemyConstants::ChainChompDirectionChangeTimerMin, EnemyConstants::ChainChompDirectionChangeTimerMax);
			}
		}

		FVector marioLocation = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>()->GetActorLocation();
		FVector chainchompLocation = GetActorLocation();
		float distanceToMario = sqrt(pow(marioLocation.X - chainchompLocation.X, 2) + pow(marioLocation.Z - chainchompLocation.Z, 2));
		if (distanceToMario <= EnemyConstants::ChainChompPlayerDetectionRange)
		{
			StateTimer -= DeltaTime;
			if (StateTimer <= 0.0f)
			{
				SetState(EChainChompState::Jumping);
			}
		}
	}
	else if (State == EChainChompState::Jumping)
	{
		FVector anchorLocation = GetActorLocation();
		FVector headLocation = BoxComponent->GetComponentLocation();
		float distanceFromAnchor = sqrt(pow(anchorLocation.X - headLocation.X, 2) + pow(anchorLocation.Z - headLocation.Z, 2));
		if (distanceFromAnchor >= EnemyConstants::ChainChompMaxDistanceFromAnchor)
		{
			StateTimer -= DeltaTime;
			if (StateTimer <= 0.0f)
			{
				FlipbookComponent->SetPlayRate(100.0f);
				SetState(EChainChompState::Idle);
			}
		}
		else
		{
			FVector location = BoxComponent->GetComponentLocation();
			location += Velocity * DeltaTime;
			BoxComponent->SetWorldLocation(location);
		}
	}
}

void AChainChomp::SetState(EChainChompState state)
{
	if (State != state)
	{
		State = state;

		if (State == EChainChompState::Idle)
		{
			BoxComponent->SetEnableGravity(true);
			BoxComponent->SetSimulatePhysics(true);
			FlipbookComponent->SetPlayRate(1.0f);
			Velocity = FVector(1, 0, 0) * EnemyConstants::ChainChompSpeed;
			DirectionTimer = FMath::FRandRange(EnemyConstants::ChainChompDirectionChangeTimerMin, EnemyConstants::ChainChompDirectionChangeTimerMax);
			StateTimer = FMath::FRandRange(EnemyConstants::ChainChompJumpTimerMin, EnemyConstants::ChainChompJumpTimerMax);
		}
		else if (State == EChainChompState::Jumping)
		{
			BoxComponent->SetEnableGravity(false);
			BoxComponent->SetSimulatePhysics(false);

			FVector marioLocation = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>()->GetActorLocation();
			if (marioLocation.X < GetActorLocation().X)
			{
				Velocity.X = -1;
			}
			else
			{
				Velocity.X = 1;
			}

			Velocity.Z = FMath::FRandRange(EnemyConstants::ChainChompJumpHeightMin, EnemyConstants::ChainChompJumpHeightMax);

			Velocity *= EnemyConstants::ChainChompJumpSpeed;

			StateTimer = EnemyConstants::ChainChompJumpHoldDuration;
		}
	}
}

void AChainChomp::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		Cast<AMarioCharacter>(OtherActor)->HandleDamage();
	}
}
