// BlueprintGeneratedClass BP_FireStarter_ParticleSystem.BP_FireStarter_ParticleSystem_C
// Size: 0x24c (Inherited: 0x220)
struct ABP_FireStarter_ParticleSystem_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UNiagaraComponent* Niagara; // 0x228(0x08)
	struct UDecalComponent* Decal; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct FVector FireCenter; // 0x240(0x0c)

	void UserConstructionScript(); // Function BP_FireStarter_ParticleSystem.BP_FireStarter_ParticleSystem_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_FireStarter_ParticleSystem.BP_FireStarter_ParticleSystem_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void Destroy(); // Function BP_FireStarter_ParticleSystem.BP_FireStarter_ParticleSystem_C.Destroy // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_FireStarter_ParticleSystem(int32_t EntryPoint); // Function BP_FireStarter_ParticleSystem.BP_FireStarter_ParticleSystem_C.ExecuteUbergraph_BP_FireStarter_ParticleSystem // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

