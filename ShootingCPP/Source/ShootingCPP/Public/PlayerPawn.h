// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class SHOOTINGCPP_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	// 박스 충돌체 컴포넌트 변수 선언
	UPROPERTY(EditAnywhere)
		class UBoxComponent* boxComp;   // 박스 콜라이더 컴포넌트 클래스를 가져오는 포인터 변수

	// 스태틱 메시 컴포넌트 변수 선언
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* meshComp;

	// 속력 변수 선언
	UPROPERTY(EditAnywhere)
		float moveSpeed = 500.0f;

	// 총구 위치를 표현하는 Arrow 컴포넌트 변수 생성
	UPROPERTY(EditAnywhere)
		class UArrowComponent* firePosition;

	// 생성할 총알 블루프린트를 담을 변수 생성
	UPROPERTY(EditAnywhere)
		TSubclassOf<class ABullet> bulletFactory;

	// 총알 발사 효과음
	UPROPERTY(EditAnywhere)
		class USoundBase* fireSound;

private:
	// 사용자 키 입력 값을 저장할 변수 선언
	float h;   // 좌우
	float v;   // 상하

	// 사용자 입력 처리 - 입력값을 변수에 저장하는 함수
	void MoveHorizontal(float value);
	void MoveVertical(float value);

	// 총알 발사 입력 처리 함수
	void Fire();
};
