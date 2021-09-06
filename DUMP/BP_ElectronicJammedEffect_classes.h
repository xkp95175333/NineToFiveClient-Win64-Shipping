// BlueprintGeneratedClass BP_ElectronicJammedEffect.BP_ElectronicJammedEffect_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_ElectronicJammedEffect_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct UNiagaraComponent* SpawnedEffect; // 0x230(0x08)

	void DestroyEffect(struct AActor* DestroyedActor); // Function BP_ElectronicJammedEffect.BP_ElectronicJammedEffect_C.DestroyEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_ElectronicJammedEffect.BP_ElectronicJammedEffect_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_ElectronicJammedEffect(int32_t EntryPoint); // Function BP_ElectronicJammedEffect.BP_ElectronicJammedEffect_C.ExecuteUbergraph_BP_ElectronicJammedEffect // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

