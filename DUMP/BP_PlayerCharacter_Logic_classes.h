// BlueprintGeneratedClass BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C
// Size: 0x12e8 (Inherited: 0x1190)
struct ABP_PlayerCharacter_Logic_C : AHWPlayerCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1190(0x08)
	struct USkeletalMeshComponent* Mesh3PFacialHair; // 0x1198(0x08)
	struct USkeletalMeshComponent* Mesh3PHair; // 0x11a0(0x08)
	struct UHWInteractionComponent* Interact_StopBleeding; // 0x11a8(0x08)
	struct UBP_EquipmentEffectsComponent_C* EquipmentEffectsComponent; // 0x11b0(0x08)
	struct UHWDetectableComponent* HWDetectable; // 0x11b8(0x08)
	struct UHWElectronicsComponent* HWElectronics; // 0x11c0(0x08)
	float SpecterVisualsStrength_SpecterStrength_BA40757749757C7AB8F0119B85187EC7; // 0x11c8(0x04)
	enum class ETimelineDirection SpecterVisualsStrength__Direction_BA40757749757C7AB8F0119B85187EC7; // 0x11cc(0x01)
	char pad_11CD[0x3]; // 0x11cd(0x03)
	struct UTimelineComponent* SpecterVisualsStrength; // 0x11d0(0x08)
	int32_t FriendlyHighlightOutlineGroup; // 0x11d8(0x04)
	char pad_11DC[0x4]; // 0x11dc(0x04)
	struct TMap<struct UHWPhysicalMaterial*, struct UParticleSystem*> MeleeParticlesBasedOnMaterial; // 0x11e0(0x50)
	struct TMap<struct UHWPhysicalMaterial*, struct UAkAudioEvent*> MeleeSoundBasedOnMaterial; // 0x1230(0x50)
	int32_t SmokeState; // 0x1280(0x04)
	int32_t GasState; // 0x1284(0x04)
	float BloodBankHealTickDelay; // 0x1288(0x04)
	float BloodBankHealAmount; // 0x128c(0x04)
	float MuscleEnhancerInteractionMultiplier; // 0x1290(0x04)
	char pad_1294[0x4]; // 0x1294(0x04)
	struct UTexture2D* AutoPingIcon; // 0x1298(0x08)
	struct FTimerHandle BloodBankTimer; // 0x12a0(0x08)
	struct FTimerHandle GasPoisonCheckTimer; // 0x12a8(0x08)
	float GasDamageTickInterval; // 0x12b0(0x04)
	float GasDamage; // 0x12b4(0x04)
	float KineticDampenerFallDamageThreshold; // 0x12b8(0x04)
	float KineticDampenerFallDamageMult; // 0x12bc(0x04)
	float KineticDampenerMinDamageDealt; // 0x12c0(0x04)
	char pad_12C4[0x4]; // 0x12c4(0x04)
	struct FTimerHandle ShowElectronicTimer; // 0x12c8(0x08)
	float ShowElectronicRange; // 0x12d0(0x04)
	float ShowElectronicsDuration; // 0x12d4(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> SpecterMatInstances; // 0x12d8(0x10)

	void GetSecondaryTarget(struct FVector SecondaryTarget); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.GetSecondaryTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetPrimaryTarget(struct FVector PrimaryTarget); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.GetPrimaryTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetMyTeam(int32_t MyTeam); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.GetMyTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetUpSpecterMaterials(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.SetUpSpecterMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ScanForDrones(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.ScanForDrones // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleFallDamage(struct FHitResult Hit, float Height); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.HandleFallDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void KineticDampenerLOSCheck(struct AActor* TargetActor, bool IsValid); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.KineticDampenerLOSCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleMuscleEnhancerOnJammed(bool IsJammed); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.HandleMuscleEnhancerOnJammed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DealKineticDampenerDamage(float Range, float Damage, struct FVector ImpactLoc); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.DealKineticDampenerDamage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NewDamagePermissions(struct FHWTeamDamagePermission NewPermissions); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.NewDamagePermissions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnStaticPing(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.SpawnStaticPing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsMissingBlood(struct UHWInjuryComponent* InjuryComp, bool MissingBlood); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.IsMissingBlood // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BloodBankHealCheck(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.BloodBankHealCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CheckAndSpawnSmokeGuard(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.CheckAndSpawnSmokeGuard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FindGasOwner(bool Success, struct AActor* Owner, struct ABP_GasGrenadeEffect_C* GasEffect); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.FindGasOwner // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GasGrenadeDamageCheck(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.GasGrenadeDamageCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateGasState(bool ForceStop, bool State); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.UpdateGasState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ArmorFeatureActivation(enum class EHWArmorFeatureType ArmorFeature, bool Active, float Duration); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.ArmorFeatureActivation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnStaticSilhouette(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.SpawnStaticSilhouette // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayEffectsBasedOnMaterialHit(struct UPhysicalMaterial* MaterialHit, struct FVector Location, struct FRotator Rotation); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.PlayEffectsBasedOnMaterialHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MeleeHitSoundAndVFX(struct TMap<struct AActor*, struct FHWMeleeTargetData> Targets); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.MeleeHitSoundAndVFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnHeavyMeleeHitVFX(struct UParticleSystem* VFX, float VFXZOffset); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.SpawnHeavyMeleeHitVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnLightMeleeHitVFX(struct UParticleSystem* VFX, float VFXZOffset); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.SpawnLightMeleeHitVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpecterVisualsStrength__FinishedFunc(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.SpecterVisualsStrength__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void SpecterVisualsStrength__UpdateFunc(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.SpecterVisualsStrength__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void OnHeavyAttackAborted(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.OnHeavyAttackAborted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHeavyMeleeAttackExecuted(float AnimationSpeed); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.OnHeavyMeleeAttackExecuted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHeavyAttackStarted(float AnimationSpeed); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.OnHeavyAttackStarted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLightMeleeAttackExecuted(float AnimationSpeed); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.OnLightMeleeAttackExecuted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMeleeHitReceived(bool HeavyAttack); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.OnMeleeHitReceived // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMeleeExecuted(struct TMap<struct AActor*, struct FHWMeleeTargetData> Targets); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.OnMeleeExecuted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__HWDetectable_K2Node_ComponentBoundEvent_0_HWDetectionStatusChangedDelegate__DelegateSignature(struct TArray<enum class EHWDetectionStatus> AddedStatuses, struct TArray<enum class EHWDetectionStatus> RemovedStatuses); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.BndEvt__HWDetectable_K2Node_ComponentBoundEvent_0_HWDetectionStatusChangedDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__InjuryComponent_K2Node_ComponentBoundEvent_3_HWVitalityStateDelegate__DelegateSignature(enum class EHWVitalityState State); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.BndEvt__InjuryComponent_K2Node_ComponentBoundEvent_3_HWVitalityStateDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ActivateMuscleEnhancer(bool IsActive); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.ActivateMuscleEnhancer // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnTriggeredBallisticChip(struct AHWHumanCharacter* Shooter); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.BP_OnTriggeredBallisticChip // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGasStateChanged(bool IsActive); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.OnGasStateChanged // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSmokeStateChanged(bool IsActive); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.OnSmokeStateChanged // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__HWElectronics_K2Node_ComponentBoundEvent_2_HWElectronicsJamDelegate__DelegateSignature(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.BndEvt__HWElectronics_K2Node_ComponentBoundEvent_2_HWElectronicsJamDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__HWElectronics_K2Node_ComponentBoundEvent_4_HWElectronicsJamDelegate__DelegateSignature(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.BndEvt__HWElectronics_K2Node_ComponentBoundEvent_4_HWElectronicsJamDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnAnyRemoteTeamInfoUpdated(struct AHWPlayerState* PlayerState); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.OnAnyRemoteTeamInfoUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Interact_StopBleeding_K2Node_ComponentBoundEvent_1_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.BndEvt__Interact_StopBleeding_K2Node_ComponentBoundEvent_1_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Interact_StopBleeding_K2Node_ComponentBoundEvent_5_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.BndEvt__Interact_StopBleeding_K2Node_ComponentBoundEvent_5_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Interact_StopBleeding_K2Node_ComponentBoundEvent_6_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.BndEvt__Interact_StopBleeding_K2Node_ComponentBoundEvent_6_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BP_DealFallDamage(float Height, struct FHitResult Hit); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.BP_DealFallDamage // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnKineticDampenerImpact(float DamageDealt, struct FVector ImpactLocation); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.OnKineticDampenerImpact // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnableTeamHighlight(); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.EnableTeamHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateSmokeState(bool HasSmoke); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.UpdateSmokeState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BP_PlayerCharacter_Logic_EquipmentEffectsComponent_K2Node_ComponentBoundEvent_8_OnPlayerSpecter3PVVisualsChanged__DelegateSignature(bool IsActive); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.BndEvt__BP_PlayerCharacter_Logic_EquipmentEffectsComponent_K2Node_ComponentBoundEvent_8_OnPlayerSpecter3PVVisualsChanged__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_PlayerCharacter_Logic(int32_t EntryPoint); // Function BP_PlayerCharacter_Logic.BP_PlayerCharacter_Logic_C.ExecuteUbergraph_BP_PlayerCharacter_Logic // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

