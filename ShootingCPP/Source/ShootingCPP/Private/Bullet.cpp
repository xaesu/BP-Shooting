// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// �ڽ� �ݶ��̴� ������Ʈ ����
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));

	// �ݶ��̴� ������Ʈ�� �θ� ������Ʈ�� ����
	SetRootComponent(boxComp);

	// �ڽ� ������Ʈ ������ ����
	boxComp->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f));

	// �ڽ� ������Ʈ ������ ����
	boxComp->SetWorldScale3D(FVector(0.75f, 0.25f, 1.0f));

	// ����ƽ �޽� ������Ʈ ����
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));

	// ����ƽ �޽� ������Ʈ�� �ڽ� �ݶ��̴� ������Ʈ�� �ڽ����� ����
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

	// ���ο� ��ġ ��ǥ ���
	FVector newLocation = GetActorLocation() + GetActorForwardVector() * moveSpeed * DeltaTime;

	// ���ο� ��ġ ��ǥ ����
	SetActorLocation(newLocation);
}

