// BlueprintGeneratedClass BP_TargetDummySpawner.BP_TargetDummySpawner_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_TargetDummySpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* SpawnPoint; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct AHWHumanCharacter* Spawned; // 0x240(0x08)
	struct FMulticastInlineDelegate OnSpawnedChanged; // 0x248(0x10)
	struct FFHWTargetDummyParams SpawnParams; // 0x258(0x0c)

	void OnRep_Spawned(); // Function BP_TargetDummySpawner.BP_TargetDummySpawner_C.OnRep_Spawned // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DrawIndicator(); // Function BP_TargetDummySpawner.BP_TargetDummySpawner_C.DrawIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Spawn Dummy with Params(struct FFHWTargetDummyParams Params); // Function BP_TargetDummySpawner.BP_TargetDummySpawner_C.Spawn Dummy with Params // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetFocusLocation(struct FVector Location); // Function BP_TargetDummySpawner.BP_TargetDummySpawner_C.GetFocusLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SpawnDummy(struct AHWHumanCharacter* Spawned); // Function BP_TargetDummySpawner.BP_TargetDummySpawner_C.SpawnDummy // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_TargetDummySpawner.BP_TargetDummySpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_TargetDummySpawner(int32_t EntryPoint); // Function BP_TargetDummySpawner.BP_TargetDummySpawner_C.ExecuteUbergraph_BP_TargetDummySpawner // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnSpawnedChanged__DelegateSignature(struct AHWHumanCharacter* Human); // Function BP_TargetDummySpawner.BP_TargetDummySpawner_C.OnSpawnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

