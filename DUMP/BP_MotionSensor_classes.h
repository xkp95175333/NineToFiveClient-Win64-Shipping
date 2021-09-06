// BlueprintGeneratedClass BP_MotionSensor.BP_MotionSensor_C
// Size: 0x37a (Inherited: 0x305)
struct ABP_MotionSensor_C : ABP_Throwable_C {
	char pad_305[0x3]; // 0x305(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct USphereComponent* SphereCollision; // 0x310(0x08)
	struct UBP_ElectronicsComponent_C* BP_ElectronicsComponent; // 0x318(0x08)
	struct UBP_InteractionComponent_ItemPickUp_C* BP_InteractionComponent_ItemPickUp; // 0x320(0x08)
	struct UPointLightComponent* PointLight_BlinkingRed; // 0x328(0x08)
	struct UPostProcessComponent* PP_MotionSensor; // 0x330(0x08)
	struct UHWDestructibleComponent* HWDestructible; // 0x338(0x08)
	float PingInterval; // 0x340(0x04)
	float MotionSensorLifeTime; // 0x344(0x04)
	float PingDuration; // 0x348(0x04)
	float SenseRadius; // 0x34c(0x04)
	bool LineCheckTargets; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct UMaterialInstanceDynamic* EffectMaterialRef; // 0x358(0x08)
	struct TArray<struct ABP_MotionSensor_C*> TeamSensorsInLevel; // 0x360(0x10)
	struct USoundBase* Sound; // 0x370(0x08)
	bool EnemyInRange; // 0x378(0x01)
	bool Jammed; // 0x379(0x01)

	void SendTriggerEvent(struct AActor* Actor); // Function BP_MotionSensor.BP_MotionSensor_C.SendTriggerEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SendPickupEvent(); // Function BP_MotionSensor.BP_MotionSensor_C.SendPickupEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SendDestroyEvent(struct AActor* Instigator); // Function BP_MotionSensor.BP_MotionSensor_C.SendDestroyEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetController(struct AHWPlayerController* AsHWPlayer Controller); // Function BP_MotionSensor.BP_MotionSensor_C.GetController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayBeep(); // Function BP_MotionSensor.BP_MotionSensor_C.PlayBeep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetScannerEffect(); // Function BP_MotionSensor.BP_MotionSensor_C.SetScannerEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayClientDestroyEffect(); // Function BP_MotionSensor.BP_MotionSensor_C.PlayClientDestroyEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	bool TeamCheck(struct AActor* Character, int32_t Team); // Function BP_MotionSensor.BP_MotionSensor_C.TeamCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnPing(); // Function BP_MotionSensor.BP_MotionSensor_C.SpawnPing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	bool GetPlayersInRadius(struct TArray<struct AActor*> OutActors); // Function BP_MotionSensor.BP_MotionSensor_C.GetPlayersInRadius // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleTracking(); // Function BP_MotionSensor.BP_MotionSensor_C.HandleTracking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetTracking(struct FDelegate Delegate); // Function BP_MotionSensor.BP_MotionSensor_C.SetTracking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ThrowableStuck(); // Function BP_MotionSensor.BP_MotionSensor_C.ThrowableStuck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StartTracking(); // Function BP_MotionSensor.BP_MotionSensor_C.StartTracking // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowEnemies(); // Function BP_MotionSensor.BP_MotionSensor_C.ShowEnemies // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__HWDestructible_K2Node_ComponentBoundEvent_0_HWDestructibleHitDelegate__DelegateSignature(struct AActor* Instigator, struct FHitResult Hit, struct AActor* DamageDealer, bool Destroyed, int32_t Damage, enum class EHWDamageType DamageType); // Function BP_MotionSensor.BP_MotionSensor_C.BndEvt__HWDestructible_K2Node_ComponentBoundEvent_0_HWDestructibleHitDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BP_InteractionComponent_ItemPickUp_K2Node_ComponentBoundEvent_1_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_MotionSensor.BP_MotionSensor_C.BndEvt__BP_InteractionComponent_ItemPickUp_K2Node_ComponentBoundEvent_1_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BP_ElectronicsComponent_K2Node_ComponentBoundEvent_5_HWElectronicsHitDelegate__DelegateSignature(struct AActor* Instigator, struct AActor* DamageDealer, bool Destroyed, float Damage); // Function BP_MotionSensor.BP_MotionSensor_C.BndEvt__BP_ElectronicsComponent_K2Node_ComponentBoundEvent_5_HWElectronicsHitDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BP_ElectronicsComponent_K2Node_ComponentBoundEvent_2_HWElectronicsJammedByDelegate__DelegateSignature(struct FString OwnerSessionId); // Function BP_MotionSensor.BP_MotionSensor_C.BndEvt__BP_ElectronicsComponent_K2Node_ComponentBoundEvent_2_HWElectronicsJammedByDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_MotionSensor(int32_t EntryPoint); // Function BP_MotionSensor.BP_MotionSensor_C.ExecuteUbergraph_BP_MotionSensor // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

