#include "EnemyActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

#include "EngineUtils.h"    // 월드 공간의 모든 액터 검색을 위한 헤더파일
#include "PlayerPawn.h"     // 플레이어 추적을 위해 추가

AEnemyActor::AEnemyActor()  // 생성자 함수
{
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	SetRootComponent(boxComp);
	boxComp->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f));

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	meshComp->SetupAttachment(boxComp);
}

void AEnemyActor::BeginPlay()
{
	Super::BeginPlay();

	// 확률을 나타내는 임의의 정수값 추첨
	int32 drawResult = FMath::RandRange(1, 100);

	// 추첨된 값이 추적 확률 변수보다 작거나 같을 때 플레이어를 향해 발사
	if (drawResult <= traceRate) {
		
		// 월드 공간에 APlayerPawn 클래스로 된 액터를 모두 검색
		for (TActorIterator<APlayerPawn> player(GetWorld()); player; ++player)
		{
			// 만일 검색된 액터의 이름에 BP_PlayerPawn 이라는 문구가 포함되어 있다면 플레이어를 향해 위치 설정
			if (player->GetName().Contains(TEXT("BP_PlayerPawn"))) {

				// 플레이어 액터 위치 - 자신의 위치
				dir = player->GetActorLocation() - GetActorLocation();
				// 벡터 좌표 정규화
				dir.Normalize();
			}
		}

	}
	
	else {
		// 추첨된 값이 확률 변수 안에 들어가지 않으면 정면으로 발사
		dir = GetActorForwardVector();
	}
}

void AEnemyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 새로운 위치 좌표 변수 = 현재 위치 + 입력 값 * 속력 * 시간보정
	FVector newLocation = GetActorLocation() + dir * moveSpeed * DeltaTime;
	SetActorLocation(newLocation);
}

