// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFactory.h"
#include "EnemyActor.h"

// Sets default values
AEnemyFactory::AEnemyFactory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyFactory::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyFactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	// UE_LOG(LogTemp, Log, TEXT("ing-"));

	// Enemy ���� �� ��� �ð��� ���� �ð��� �ʰ��ϸ� ��� �ð� �ʱ�ȭ
	if (currentTime > delayTime) {
		currentTime = 0;

		AEnemyActor* spawnActor = GetWorld()
			->SpawnActor<AEnemyActor>(enemy, GetActorLocation(), GetActorRotation());
	}

	else {
		// ��� �ð� ����
		currentTime += DeltaTime;
	}

}

