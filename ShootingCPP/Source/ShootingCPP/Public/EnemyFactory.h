// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyFactory.generated.h"

UCLASS()
class SHOOTINGCPP_API AEnemyFactory : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyFactory();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//  액터 생성 간격을 설정할 변수
	UPROPERTY(EditAnywhere)
		float delayTime = 0.2f;

	// Enemy 블루 프린트를 생성할 변수
	UPROPERTY(EditAnywhere)
		TSubclassOf<class AEnemyActor> enemy;

private:

	// 경과 시간을 측정할 변수
	float currentTime = 0;

};
