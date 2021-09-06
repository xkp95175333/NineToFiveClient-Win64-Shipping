// BlueprintGeneratedClass BP_FirestarterFirePool.BP_FirestarterFirePool_C
// Size: 0x270 (Inherited: 0x220)
struct ABP_FirestarterFirePool_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* ParticleSystemLocation; // 0x228(0x08)
	struct USphereComponent* SphereRadius; // 0x230(0x08)
	struct USceneComponent* SpreadCheckLocationBottom; // 0x238(0x08)
	struct UStaticMeshComponent* CylinderCollision; // 0x240(0x08)
	struct USceneComponent* SpreadCheckLocation; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct FTimerHandle OwnerCheckTimer; // 0x258(0x08)
	struct ABP_FireStarter_ParticleSystem_C* ParticleSystem; // 0x260(0x08)
	struct FTimerHandle FireCheckTimer; // 0x268(0x08)

	void SpawnParticleSystemWithRandomOffset(struct FVector Where, struct AActor* Owner, struct AHWHumanCharacter* InstigatingPawn, struct ABP_FireStarter_ParticleSystem_C* ParticleSystem); // Function BP_FirestarterFirePool.BP_FirestarterFirePool_C.SpawnParticleSystemWithRandomOffset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_FirestarterFirePool.BP_FirestarterFirePool_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void CheckForOwner(); // Function BP_FirestarterFirePool.BP_FirestarterFirePool_C.CheckForOwner // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DestroyMyself(); // Function BP_FirestarterFirePool.BP_FirestarterFirePool_C.DestroyMyself // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ActivateVFX(); // Function BP_FirestarterFirePool.BP_FirestarterFirePool_C.ActivateVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DisableEmitter(); // Function BP_FirestarterFirePool.BP_FirestarterFirePool_C.DisableEmitter // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CeaseExisting(); // Function BP_FirestarterFirePool.BP_FirestarterFirePool_C.CeaseExisting // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DeactivateCollision(); // Function BP_FirestarterFirePool.BP_FirestarterFirePool_C.DeactivateCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CheckForSmoke(); // Function BP_FirestarterFirePool.BP_FirestarterFirePool_C.CheckForSmoke // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_FirestarterFirePool.BP_FirestarterFirePool_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_FirestarterFirePool.BP_FirestarterFirePool_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_FirestarterFirePool(int32_t EntryPoint); // Function BP_FirestarterFirePool.BP_FirestarterFirePool_C.ExecuteUbergraph_BP_FirestarterFirePool // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

