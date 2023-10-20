#include "EnemyActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

#include "EngineUtils.h"    // ���� ������ ��� ���� �˻��� ���� �������
#include "PlayerPawn.h"     // �÷��̾� ������ ���� �߰�

AEnemyActor::AEnemyActor()  // ������ �Լ�
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

	// Ȯ���� ��Ÿ���� ������ ������ ��÷
	int32 drawResult = FMath::RandRange(1, 100);

	// ��÷�� ���� ���� Ȯ�� �������� �۰ų� ���� �� �÷��̾ ���� �߻�
	if (drawResult <= traceRate) {
		
		// ���� ������ APlayerPawn Ŭ������ �� ���͸� ��� �˻�
		for (TActorIterator<APlayerPawn> player(GetWorld()); player; ++player)
		{
			// ���� �˻��� ������ �̸��� BP_PlayerPawn �̶�� ������ ���ԵǾ� �ִٸ� �÷��̾ ���� ��ġ ����
			if (player->GetName().Contains(TEXT("BP_PlayerPawn"))) {

				// �÷��̾� ���� ��ġ - �ڽ��� ��ġ
				dir = player->GetActorLocation() - GetActorLocation();
				// ���� ��ǥ ����ȭ
				dir.Normalize();
			}
		}

	}
	
	else {
		// ��÷�� ���� Ȯ�� ���� �ȿ� ���� ������ �������� �߻�
		dir = GetActorForwardVector();
	}
}

void AEnemyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ���ο� ��ġ ��ǥ ���� = ���� ��ġ + �Է� �� * �ӷ� * �ð�����
	FVector newLocation = GetActorLocation() + dir * moveSpeed * DeltaTime;
	SetActorLocation(newLocation);
}

