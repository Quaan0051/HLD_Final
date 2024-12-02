// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestionCircle.h"
#include "Components/BoxComponent.h"
#include "PaperSprite.h"
#include "PaperSpriteComponent.h"
#include "PickupConstants.h"
#include "MarioCharacter.h"
#include "MarioCamera.h"
#include "PlatformerGameModeBase.h"

// Sets default values
AQuestionCircle::AQuestionCircle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("QuestionCircleBoxComponent");
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetSimulatePhysics(true);
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->BodyInstance.bLockXRotation = true;
	BoxComponent->BodyInstance.bLockYRotation = true;
	BoxComponent->BodyInstance.bLockZRotation = true;
	BoxComponent->BodyInstance.bLockXTranslation = true;
	BoxComponent->BodyInstance.bLockYTranslation = true;
	BoxComponent->OnComponentHit.AddDynamic(this, &AQuestionCircle::OnHit);
	RootComponent = BoxComponent;

	SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("QuestionCircleSpriteComponent");
	SpriteComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SpriteComponent->SetCollisionProfileName("NoCollision");
	SpriteComponent->SetupAttachment(RootComponent);

	Tags.Add("QuestionCircle");
}

// Called when the game starts or when spawned
void AQuestionCircle::BeginPlay()
{
	Super::BeginPlay();
	
	BoxComponent->AddImpulse(FVector(0,0,1) * PickupConstants::QuestionCircleImpulseStrength);
}

void AQuestionCircle::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		APlatformerGameModeBase* gamemode = GetWorld()->GetAuthGameMode<APlatformerGameModeBase>();
		gamemode->MarioHasWon();
	}
}
