// BlueprintGeneratedClass BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C
// Size: 0x4d0 (Inherited: 0x380)
struct ABP_GasGrenade_Spreading_C : ABP_ExplosiveThrowable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct FVector InitialSpreadDirection; // 0x388(0x0c)
	struct FVector SpreadDirection; // 0x394(0x0c)
	struct FRotator SeedRotator; // 0x3a0(0x0c)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct AHWHumanCharacter* MyInstigator; // 0x3b0(0x08)
	float SpreadDepth; // 0x3b8(0x04)
	struct FVector AncestralOrigin; // 0x3bc(0x0c)
	float MinimalSpreadDistance; // 0x3c8(0x04)
	float DuplicateCheckRadius; // 0x3cc(0x04)
	int32_t ClusterCounter; // 0x3d0(0x04)
	int32_t MaxClusters; // 0x3d4(0x04)
	struct TMap<struct UNiagaraComponent*, struct FVector> SystemsAndTargetLocations; // 0x3d8(0x50)
	struct TMap<struct UNiagaraComponent*, float> SystemsAndOffsets; // 0x428(0x50)
	struct TMap<struct FVector, float> LocationsAndTimeLeft; // 0x478(0x50)
	float InitialZOffset; // 0x4c8(0x04)
	float EffectLifeSpan; // 0x4cc(0x04)

	void IsSpawnPossible(struct FVector WhereToSpawn, bool IsPossible); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.IsSpawnPossible // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnDetonationEffect(); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.SpawnDetonationEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HideDespawnThrowable(); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.HideDespawnThrowable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetDamageOrigin(struct FVector Origin); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.GetDamageOrigin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Detonate(); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.Detonate // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HideThrowableMesh(); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.HideThrowableMesh // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnSpreadNext(); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.OnSpreadNext // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClientSpawnTelegraphSystem(struct FVector OriginLocation, struct FVector EndLocation); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.OnClientSpawnTelegraphSystem // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDelayNextSpawn(); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.OnDelayNextSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSmallSpawnSFX(); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.OnSmallSpawnSFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnBeginDissipate(); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.OnBeginDissipate // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_GasGrenade_Spreading(int32_t EntryPoint); // Function BP_GasGrenade_Spreading.BP_GasGrenade_Spreading_C.ExecuteUbergraph_BP_GasGrenade_Spreading // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

