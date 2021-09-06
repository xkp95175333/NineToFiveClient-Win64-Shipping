// BlueprintGeneratedClass BP_GasGrenadeEffect.BP_GasGrenadeEffect_C
// Size: 0x288 (Inherited: 0x249)
struct ABP_GasGrenadeEffect_C : ABP_ExplosiveEffectBase_C {
	char pad_249[0x7]; // 0x249(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UParticleSystemComponent* PS_GasGrenade_Temp; // 0x258(0x08)
	struct USphereComponent* Sphere; // 0x260(0x08)
	struct UStaticMeshComponent* AreaOfEffect; // 0x268(0x08)
	struct TArray<struct AHWCharacter*> AffectedCharacters; // 0x270(0x10)
	struct ABP_GasGrenade_Spreading_C* InstigatingGasGrenade; // 0x280(0x08)

	void UserConstructionScript(); // Function BP_GasGrenadeEffect.BP_GasGrenadeEffect_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_GasGrenadeEffect.BP_GasGrenadeEffect_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void CheckForFirePools(); // Function BP_GasGrenadeEffect.BP_GasGrenadeEffect_C.CheckForFirePools // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BadaBoomVFX(); // Function BP_GasGrenadeEffect.BP_GasGrenadeEffect_C.BadaBoomVFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AreaOfEffect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_GasGrenadeEffect.BP_GasGrenadeEffect_C.BndEvt__AreaOfEffect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AreaOfEffect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_GasGrenadeEffect.BP_GasGrenadeEffect_C.BndEvt__AreaOfEffect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_GasGrenadeEffect(int32_t EntryPoint); // Function BP_GasGrenadeEffect.BP_GasGrenadeEffect_C.ExecuteUbergraph_BP_GasGrenadeEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

