// BlueprintGeneratedClass BP_DeathDrone.BP_DeathDrone_C
// Size: 0x90b (Inherited: 0x880)
struct ABP_DeathDrone_C : AHWDroneCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UParticleSystemComponent* PS_DroneAttack; // 0x888(0x08)
	struct UAkComponent* Ak_Audio_Emitter; // 0x890(0x08)
	struct UNiagaraComponent* NS_DroneAttack; // 0x898(0x08)
	struct UPostProcessComponent* PostProcess_Drone; // 0x8a0(0x08)
	struct FName SocketName; // 0x8a8(0x08)
	struct AActor* DroneExplosionEffect; // 0x8b0(0x08)
	float UpperPropellerSpinCurrent; // 0x8b8(0x04)
	float PROPELLER_SPIN_DEFAULT; // 0x8bc(0x04)
	float LowerPropellerSpinCurrent; // 0x8c0(0x04)
	struct FVector MeshVelocityWS; // 0x8c4(0x0c)
	struct FVector MeshVelocityRootSpace; // 0x8d0(0x0c)
	float MinHoverHeight; // 0x8dc(0x04)
	float MinHoverSlowdownStartDistance; // 0x8e0(0x04)
	float HighHoverHeight; // 0x8e4(0x04)
	float HighHoverSlowdownStartDistance; // 0x8e8(0x04)
	float VerticalInput; // 0x8ec(0x04)
	float HoverSlowfallCurrent; // 0x8f0(0x04)
	float TimeToMaxFallSpeed; // 0x8f4(0x04)
	struct AActor* LastHitInstigator; // 0x8f8(0x08)
	struct AActor* LastHitDealer; // 0x900(0x08)
	bool LastHitElectronic; // 0x908(0x01)
	bool IsRotatingX; // 0x909(0x01)
	bool IsRotatingY; // 0x90a(0x01)

	void HandleRotationAudioRTPC(float RotX, float RotY); // Function BP_DeathDrone.BP_DeathDrone_C.HandleRotationAudioRTPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateSlowFall(bool Falling); // Function BP_DeathDrone.BP_DeathDrone_C.UpdateSlowFall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetHoverInput(float Value, float ScaleValue); // Function BP_DeathDrone.BP_DeathDrone_C.GetHoverInput // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleAudioRTPC(); // Function BP_DeathDrone.BP_DeathDrone_C.HandleAudioRTPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ScaleXYWhileFlying(); // Function BP_DeathDrone.BP_DeathDrone_C.ScaleXYWhileFlying // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnAbility(struct UObject* Class); // Function BP_DeathDrone.BP_DeathDrone_C.SpawnAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_DeathDrone.BP_DeathDrone_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void HandleDroneDestroyed(); // Function BP_DeathDrone.BP_DeathDrone_C.HandleDroneDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayDroneSound(bool ShouldFly); // Function BP_DeathDrone.BP_DeathDrone_C.PlayDroneSound // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ElectronicsComponent_K2Node_ComponentBoundEvent_3_HWElectronicsJamDelegate__DelegateSignature(); // Function BP_DeathDrone.BP_DeathDrone_C.BndEvt__ElectronicsComponent_K2Node_ComponentBoundEvent_3_HWElectronicsJamDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ElectronicsComponent_K2Node_ComponentBoundEvent_4_HWElectronicsJamDelegate__DelegateSignature(); // Function BP_DeathDrone.BP_DeathDrone_C.BndEvt__ElectronicsComponent_K2Node_ComponentBoundEvent_4_HWElectronicsJamDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_DeathDrone.BP_DeathDrone_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void DroneHitEffect(struct FHitResult HitResult); // Function BP_DeathDrone.BP_DeathDrone_C.DroneHitEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DroneHitElectronicEffect(); // Function BP_DeathDrone.BP_DeathDrone_C.DroneHitElectronicEffect // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceivePossessed(struct AController* NewController); // Function BP_DeathDrone.BP_DeathDrone_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void MulticastOnHitReaction(int32_t HitrRandom); // Function BP_DeathDrone.BP_DeathDrone_C.MulticastOnHitReaction // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnExplodingDrone(struct FTransform TransformExplosion); // Function BP_DeathDrone.BP_DeathDrone_C.OnExplodingDrone // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_DeathDrone.BP_DeathDrone_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneHPDepleted(); // Function BP_DeathDrone.BP_DeathDrone_C.OnDroneHPDepleted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_HWDestructibleHitDelegate__DelegateSignature(struct AActor* Instigator, struct FHitResult Hit, struct AActor* DamageDealer, bool Destroyed, int32_t Damage, enum class EHWDamageType DamageType); // Function BP_DeathDrone.BP_DeathDrone_C.BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_0_HWDestructibleHitDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ElectronicsComponent_K2Node_ComponentBoundEvent_6_HWElectronicsHitDelegate__DelegateSignature(struct AActor* Instigator, struct AActor* DamageDealer, bool Destroyed, float Damage); // Function BP_DeathDrone.BP_DeathDrone_C.BndEvt__ElectronicsComponent_K2Node_ComponentBoundEvent_6_HWElectronicsHitDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneActivateSFX(bool IsActive, struct AController* DroneController); // Function BP_DeathDrone.BP_DeathDrone_C.OnDroneActivateSFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveUnpossessed(struct AController* OldController); // Function BP_DeathDrone.BP_DeathDrone_C.ReceiveUnpossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_DeathDrone(int32_t EntryPoint); // Function BP_DeathDrone.BP_DeathDrone_C.ExecuteUbergraph_BP_DeathDrone // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

