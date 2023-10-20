// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Bullet.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
APlayerPawn::APlayerPawn()  //APlayerPawn 클래스의 객체 APlayerPawn 생성 (생성자 함수)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 박스 콜라이더 컴포넌트 생성
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("My Box Component"));

	// 생성한 박스 콜라이더 컴포넌트를 최상단 컴포넌트로 설정
	SetRootComponent(boxComp);

	// 스태틱 메시 컴포넌트 생성
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Static Mesh"));

	// 생성한 스태틱 메시 컴포넌트를 자식 컴포넌트로 설정
	meshComp -> SetupAttachment(boxComp);

	// 박스 콜라이더 사이즈 설정
	FVector boxSize = FVector(50.0f, 50.0f, 50.0f);
	boxComp->SetBoxExtent(boxSize);

	// 총구 위치를 표시할 컴포넌트 생성
	firePosition = CreateDefaultSubobject<UArrowComponent>(TEXT("Fire Position"));

	// 총구 위치 컴포넌트를 박스 콜라이더 컴포넌트의 자식 컴포넌트로 설정
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

	// 입력 값을 담은 변수 h, v를 통해 방향 벡터 생성
	FVector dir = FVector(0, h, v);

	// 방향 벡터 정규화 (단위 길이를 1로 맞춤)
	dir.Normalize();

	// 새로운 위치 좌표 변수 = 현재 위치 + 입력 값 * 속력 * 시간보정
	FVector newLocation = GetActorLocation() + dir * moveSpeed * DeltaTime;

	// 새로운 위치 좌표 값을 현재 위치로 설정
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

// 좌우축 입력 처리 함수
void APlayerPawn::MoveHorizontal(float value)
{
	h = value;
}


// 상하축 입력 처리 함수
void APlayerPawn::MoveVertical(float value)
{
	v = value;
}

// 마우스 왼쪽 버튼 입력 처리 함수
void APlayerPawn::Fire()
{
	// 총알 블루프린트 파일을 firePosition 위치에 생성
	ABullet* bullet = GetWorld()
		->SpawnActor<ABullet>(bulletFactory, firePosition->GetComponentLocation(), firePosition->GetComponentRotation());

	// fireSound 변수에 할당된 음원 파일 실행
	UGameplayStatics::PlaySound2D(GetWorld(), fireSound);
}