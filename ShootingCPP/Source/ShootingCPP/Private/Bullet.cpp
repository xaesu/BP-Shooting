// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// 박스 콜라이더 컴포넌트 생성
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));

	// 콜라이더 컴포넌트를 부모 오브젝트로 설정
	SetRootComponent(boxComp);

	// 박스 컴포넌트 사이즈 설정
	boxComp->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f));

	// 박스 컴포넌트 스케일 조정
	boxComp->SetWorldScale3D(FVector(0.75f, 0.25f, 1.0f));

	// 스태틱 메쉬 컴포넌트 생성
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));

	// 스태틱 메쉬 컴포넌트를 박스 콜라이더 컴포넌트의 자식으로 설정
	meshComp->SetupAttachment(boxComp);

}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 새로운 위치 좌표 계산
	FVector newLocation = GetActorLocation() + GetActorForwardVector() * moveSpeed * DeltaTime;

	// 새로운 위치 좌표 설정
	SetActorLocation(newLocation);
}

