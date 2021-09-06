// BlueprintGeneratedClass BP_Firestarter.BP_Firestarter_C
// Size: 0x451 (Inherited: 0x380)
struct ABP_Firestarter_C : ABP_ExplosiveThrowable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct ABP_FirestarterFirePool_C* InitialPool; // 0x388(0x08)
	struct FVector InitialSpreadDirection; // 0x390(0x0c)
	struct FVector SpreadDirection; // 0x39c(0x0c)
	struct FRotator SeedRotator; // 0x3a8(0x0c)
	float LifeTime; // 0x3b4(0x04)
	float SpreadingLifetime; // 0x3b8(0x04)
	int32_t NumberOfWaves; // 0x3bc(0x04)
	struct TArray<struct ABP_FirestarterFirePool_C*> AllPoolsInTheUniverse; // 0x3c0(0x10)
	struct TArray<struct ABP_FirestarterFirePool_C*> MostRecentWaveOfPools; // 0x3d0(0x10)
	struct TArray<struct ABP_FirestarterFirePool_C*> PreviousWaveOfPools; // 0x3e0(0x10)
	struct TArray<struct FVector> PoolLocationSpawnQueue; // 0x3f0(0x10)
	int32_t CurrentWaveIndex; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)
	struct AHWHumanCharacter* MyInstigator; // 0x408(0x08)
	float DamageTickRate; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct TArray<struct AHWHumanCharacter*> Victims; // 0x418(0x10)
	float SpreadDepth; // 0x428(0x04)
	struct FVector AncestralOrigin; // 0x42c(0x0c)
	struct FTimerHandle SpawnQueueTimer; // 0x438(0x08)
	bool StopProcessingSpawnQueue; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	float DamagePerTick; // 0x444(0x04)
	struct FTimerHandle ExtinguishCheckTimer; // 0x448(0x08)
	bool AtLeastOnePoolValid; // 0x450(0x01)

	void DecideSpawnChance(int32_t WaveCount, bool Spawn); // Function BP_Firestarter.BP_Firestarter_C.DecideSpawnChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Spread Children(struct ABP_FirestarterFirePool_C* FromWhatPool, struct AHWHumanCharacter* Instigator, int32_t HowManyToSpread, bool SpawnedAtLeastOne, struct TArray<struct ABP_FirestarterFirePool_Secondary_C*> SpawnedChildren); // Function BP_Firestarter.BP_Firestarter_C.Spread Children // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HideDespawnThrowable(); // Function BP_Firestarter.BP_Firestarter_C.HideDespawnThrowable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitialSpread(struct FVector WhereToSpread, struct USceneComponent* FromWhatLocation, bool Spawned); // Function BP_Firestarter.BP_Firestarter_C.InitialSpread // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetDamageOrigin(struct FVector Origin); // Function BP_Firestarter.BP_Firestarter_C.GetDamageOrigin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Detonate(); // Function BP_Firestarter.BP_Firestarter_C.Detonate // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnSeedWave(); // Function BP_Firestarter.BP_Firestarter_C.SpawnSeedWave // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnWaveOfFire(int32_t WaveIndex); // Function BP_Firestarter.BP_Firestarter_C.SpawnWaveOfFire // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnFirstWave(); // Function BP_Firestarter.BP_Firestarter_C.SpawnFirstWave // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CleanupCheck(); // Function BP_Firestarter.BP_Firestarter_C.CleanupCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CheckForDamage(); // Function BP_Firestarter.BP_Firestarter_C.CheckForDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HideThrowableMesh(); // Function BP_Firestarter.BP_Firestarter_C.HideThrowableMesh // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ProcessSpawnQueue(); // Function BP_Firestarter.BP_Firestarter_C.ProcessSpawnQueue // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnQueueEvent(); // Function BP_Firestarter.BP_Firestarter_C.SpawnQueueEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NextWave(); // Function BP_Firestarter.BP_Firestarter_C.NextWave // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FireIntensityChanged(float Intensity); // Function BP_Firestarter.BP_Firestarter_C.FireIntensityChanged // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_Firestarter.BP_Firestarter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayFuse(); // Function BP_Firestarter.BP_Firestarter_C.OnPlayFuse // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnableBurningSound(bool IsEnabled); // Function BP_Firestarter.BP_Firestarter_C.OnEnableBurningSound // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCheckIfExtinguished(); // Function BP_Firestarter.BP_Firestarter_C.OnCheckIfExtinguished // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Firestarter(int32_t EntryPoint); // Function BP_Firestarter.BP_Firestarter_C.ExecuteUbergraph_BP_Firestarter // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

