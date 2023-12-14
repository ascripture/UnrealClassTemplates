// MyActor.cpp

#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
     // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Initialize components and set default values
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
    Super::BeginPlay();
    
    // Initialization code here
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Frame-specific code here
}
