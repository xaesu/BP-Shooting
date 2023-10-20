// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Bullet.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
APlayerPawn::APlayerPawn()  //APlayerPawn Ŭ������ ��ü APlayerPawn ���� (������ �Լ�)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// �ڽ� �ݶ��̴� ������Ʈ ����
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("My Box Component"));

	// ������ �ڽ� �ݶ��̴� ������Ʈ�� �ֻ�� ������Ʈ�� ����
	SetRootComponent(boxComp);

	// ����ƽ �޽� ������Ʈ ����
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Static Mesh"));

	// ������ ����ƽ �޽� ������Ʈ�� �ڽ� ������Ʈ�� ����
	meshComp -> SetupAttachment(boxComp);

	// �ڽ� �ݶ��̴� ������ ����
	FVector boxSize = FVector(50.0f, 50.0f, 50.0f);
	boxComp->SetBoxExtent(boxSize);

	// �ѱ� ��ġ�� ǥ���� ������Ʈ ����
	firePosition = CreateDefaultSubobject<UArrowComponent>(TEXT("Fire Position"));

	// �ѱ� ��ġ ������Ʈ�� �ڽ� �ݶ��̴� ������Ʈ�� �ڽ� ������Ʈ�� ����
	firePosition->SetupAttachment(boxComp);

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// �Է� ���� ���� ���� h, v�� ���� ���� ���� ����
	FVector dir = FVector(0, h, v);

	// ���� ���� ����ȭ (���� ���̸� 1�� ����)
	dir.Normalize();

	// ���ο� ��ġ ��ǥ ���� = ���� ��ġ + �Է� �� * �ӷ� * �ð�����
	FVector newLocation = GetActorLocation() + dir * moveSpeed * DeltaTime;

	// ���ο� ��ġ ��ǥ ���� ���� ��ġ�� ����
	SetActorLocation(newLocation);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Horizontal", this, &APlayerPawn::MoveHorizontal);
	PlayerInputComponent->BindAxis("Vertical", this, &APlayerPawn::MoveVertical);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APlayerPawn::Fire);
}

// �¿��� �Է� ó�� �Լ�
void APlayerPawn::MoveHorizontal(float value)
{
	h = value;
}


// ������ �Է� ó�� �Լ�
void APlayerPawn::MoveVertical(float value)
{
	v = value;
}

// ���콺 ���� ��ư �Է� ó�� �Լ�
void APlayerPawn::Fire()
{
	// �Ѿ� �������Ʈ ������ firePosition ��ġ�� ����
	ABullet* bullet = GetWorld()
		->SpawnActor<ABullet>(bulletFactory, firePosition->GetComponentLocation(), firePosition->GetComponentRotation());

	// fireSound ������ �Ҵ�� ���� ���� ����
	UGameplayStatics::PlaySound2D(GetWorld(), fireSound);
}