// BlueprintGeneratedClass BP_ExplosiveEffectBase.BP_ExplosiveEffectBase_C
// Size: 0x249 (Inherited: 0x220)
struct ABP_ExplosiveEffectBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct UAkAudioEvent* ExplosionSound; // 0x230(0x08)
	struct UParticleSystem* ExplosionParticles; // 0x238(0x08)
	struct UNiagaraSystem* NiagaraParticles; // 0x240(0x08)
	bool UseNiagaraParticles; // 0x248(0x01)

	void ReceiveBeginPlay(); // Function BP_ExplosiveEffectBase.BP_ExplosiveEffectBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ClientOnlyFX(); // Function BP_ExplosiveEffectBase.BP_ExplosiveEffectBase_C.ClientOnlyFX // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_ExplosiveEffectBase(int32_t EntryPoint); // Function BP_ExplosiveEffectBase.BP_ExplosiveEffectBase_C.ExecuteUbergraph_BP_ExplosiveEffectBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

