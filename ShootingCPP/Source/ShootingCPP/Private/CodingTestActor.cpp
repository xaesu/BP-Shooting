// Fill out your copyright notice in the Description page of Project Settings.


#include "CodingTestActor.h"

// Sets default values
ACodingTestActor::ACodingTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACodingTestActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("%d"), number1);
	UE_LOG(LogTemp, Warning, TEXT("%d"), number2);

	UE_LOG(LogTemp, Warning, TEXT("Add Result : %d"), Add(number1, number2));

	UE_LOG(LogTemp, Warning, TEXT("\n"));

	if (number1 > 10) {
		UE_LOG(LogTemp, Warning, TEXT("number1의 값이 10보다 큽니다!"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("number1의 값이 10보다 작거나 같습니다!"));
	}

	
}

// Called every frame
void ACodingTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ACodingTestActor::Add(int32 n1, int32 n2)
{
	return n1 + n2;
}