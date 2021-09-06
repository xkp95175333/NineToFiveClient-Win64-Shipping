// BlueprintGeneratedClass BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C
// Size: 0x3b0 (Inherited: 0x2d0)
struct ABP_HardBarricadeExplosive_Placeable_C : AHWPlaceable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UHWDestructibleComponent* HWDestructible; // 0x2d8(0x08)
	struct UParticleSystemComponent* Explo; // 0x2e0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2e8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2f0(0x08)
	struct AHWHumanCharacter* MyInstigator; // 0x2f8(0x08)
	struct FVector FireOrigin; // 0x300(0x0c)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct ABP_HardBarricade_C* InstigatingBarricade; // 0x310(0x08)
	bool HasDetonated; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct TArray<struct ABP_FirestarterFirePool_C*> AllPools; // 0x320(0x10)
	struct TArray<struct ABP_FirestarterFirePool_C*> TempPools; // 0x330(0x10)
	struct TArray<struct ABP_FirestarterFirePool_C*> LastWavePools; // 0x340(0x10)
	float MaxSpreadDepth; // 0x350(0x04)
	float DelayBetweenWaves; // 0x354(0x04)
	float WavesToSpawn; // 0x358(0x04)
	float WaveCounter; // 0x35c(0x04)
	float DamageTickRate; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct AHWHumanCharacter*> Victims; // 0x368(0x10)
	float DamagePerTick; // 0x378(0x04)
	float LifeTime; // 0x37c(0x04)
	struct FString SessionId; // 0x380(0x10)
	struct TArray<struct FVector> PoolLocationSpawnQueue; // 0x390(0x10)
	bool StopProcessingSpawnQueue; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FTimerHandle SpawnQueueTimer; // 0x3a8(0x08)

	void GetOwnerSessionId(struct FString SessionId); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.GetOwnerSessionId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpreadChildren(struct ABP_FirestarterFirePool_C* FromWhatPool, int32_t HowMany, bool SpawnedAtLeastOne, struct TArray<struct ABP_FirestarterFirePool_C*> SpawnedProgeny); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.SpreadChildren // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnFirstPoolIfYouCan(struct FVector Origin, struct ABP_FirestarterFirePool_C* SpawnedPool, bool Spawned); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.SpawnFirstPoolIfYouCan // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UserConstructionScript(); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__HWDestructible_K2Node_ComponentBoundEvent_0_HWDestructibleHitDelegate__DelegateSignature(struct AActor* Instigator, struct FHitResult Hit, struct AActor* DamageDealer, bool Destroyed, int32_t Damage, enum class EHWDamageType DamageType); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.BndEvt__HWDestructible_K2Node_ComponentBoundEvent_0_HWDestructibleHitDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void HandleEffects(); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.HandleEffects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnFirstWave(); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.SpawnFirstWave // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnWave(struct TArray<struct ABP_FirestarterFirePool_C*> ThosePools); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.SpawnWave // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NextWave(); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.NextWave // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ActivateDamageCheck(); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.ActivateDamageCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CheckForDamage(); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.CheckForDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CleanupCheck(); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.CleanupCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ProcessSpawnQueue(); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.ProcessSpawnQueue // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_HardBarricadeExplosive_Placeable(int32_t EntryPoint); // Function BP_HardBarricadeExplosive_Placeable.BP_HardBarricadeExplosive_Placeable_C.ExecuteUbergraph_BP_HardBarricadeExplosive_Placeable // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

