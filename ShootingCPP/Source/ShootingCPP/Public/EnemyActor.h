#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyActor.generated.h"

UCLASS()
class SHOOTINGCPP_API AEnemyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemyActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere)
		class UBoxComponent* boxComp;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* meshComp;

	// 확률 변수
	UPROPERTY(EditAnywhere)
		int32 traceRate = 50;

	// 속력 변수 선언
	UPROPERTY(EditAnywhere)
		float moveSpeed = 800.0f;

private:
	// 방향 벡터 변수
	FVector dir;
};
  