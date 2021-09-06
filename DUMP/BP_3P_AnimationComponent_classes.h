// BlueprintGeneratedClass BP_3P_AnimationComponent.BP_3P_AnimationComponent_C
// Size: 0x3d0 (Inherited: 0xb0)
struct UBP_3P_AnimationComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AActor* Owner; // 0xb8(0x08)
	struct ABP_PlayerCharacter_Anim_C* PlayerCharacterAnim_ref; // 0xc0(0x08)
	struct USkeletalMeshComponent* Mesh3P; // 0xc8(0x08)
	struct UAnimInstance* ABP_3P_ref; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FTransform ik_handL_TR; // 0xe0(0x30)
	struct FTransform RELOAD_ik_handR_TR; // 0x110(0x30)
	bool IsReloading; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct AHWWeapon* CurrentWeapon; // 0x148(0x08)
	struct ABP_DroppableMag_C* DroppedMag; // 0x150(0x08)
	struct AHWWeaponPart* PartMag; // 0x158(0x08)
	struct AHWWeaponPart* PartRec; // 0x160(0x08)
	float ReloadTime; // 0x168(0x04)
	bool AttachToHand; // 0x16c(0x01)
	bool IsTrueDroppingMag; // 0x16d(0x01)
	char pad_16E[0x2]; // 0x16e(0x02)
	struct FTransform ik_handRoot_TR_offset; // 0x170(0x30)
	enum class EHW_AnimationWeaponType AnimationWeaponType; // 0x1a0(0x01)
	char pad_1A1[0xf]; // 0x1a1(0x0f)
	struct FTransform HC_ik_handRoot_TR_RIFLE; // 0x1b0(0x30)
	bool CanDropMag; // 0x1e0(0x01)
	char pad_1E1[0xf]; // 0x1e1(0x0f)
	struct FTransform Socket_HandL_grip_TR; // 0x1f0(0x30)
	struct FTransform IKHandLThighLTR; // 0x220(0x30)
	struct FVector RELOAD_IKLeftArmPolePos; // 0x250(0x0c)
	struct FVector RELOAD_IKRightArmPolePos; // 0x25c(0x0c)
	char pad_268[0x8]; // 0x268(0x08)
	struct FTransform IKSpine03TR; // 0x270(0x30)
	bool IsStaticMesh; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UStaticMeshComponent* MagStaticMesh; // 0x2a8(0x08)
	struct USkeletalMeshComponent* MagSkeletalMesh; // 0x2b0(0x08)
	float RecoilDriverMaster; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct UCurveFloat* GunCurve; // 0x2c0(0x08)
	struct UCurveFloat* HeadCurve; // 0x2c8(0x08)
	struct UCurveVector* SpineCurves; // 0x2d0(0x08)
	struct UCurveFloat* HipCurve; // 0x2d8(0x08)
	float Recoil_Gun_Depth; // 0x2e0(0x04)
	float Recoil_Head_Alpha; // 0x2e4(0x04)
	struct FVector Recoil_Spine_Alpha; // 0x2e8(0x0c)
	float Recoil_Hip_Alpha; // 0x2f4(0x04)
	struct FRotator Recoil_Gun; // 0x2f8(0x0c)
	struct FRotator RecoilHead; // 0x304(0x0c)
	struct FRotator RecoilSpine; // 0x310(0x0c)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UCurveVector* Recoil_Multipliers; // 0x320(0x08)
	struct UCurveFloat* Recoil_Depth_Multipliers; // 0x328(0x08)
	struct UCurveVector* Recoil_GunKick; // 0x330(0x08)
	float MC_3P_HandToHipsBlend; // 0x338(0x04)
	struct FRotator HandInHipRotation; // 0x33c(0x0c)
	float EquipTime; // 0x348(0x04)
	float UnEquipTime; // 0x34c(0x04)
	float EquUnEqu3PMASTER; // 0x350(0x04)
	bool IsEquippingDirection; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct UCurveVector* UnEquip_PosOffset; // 0x358(0x08)
	struct FVector UnEquipPosOffset; // 0x360(0x0c)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct UCurveVector* UnEquip_RotOffset; // 0x370(0x08)
	struct FRotator UnEquipRotOffset; // 0x378(0x0c)
	float LeftHandIKBlend; // 0x384(0x04)
	float LeftHandIKTarget; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct FTimerHandle NewVar_1; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)
	struct FTransform EquipHandLSnapShot; // 0x3a0(0x30)

	struct FVector PickCorrectLeftHandSocket(struct USceneComponent* Component, struct FRotator ReturnValue2); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.PickCorrectLeftHandSocket // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	bool NotLocallyControlledAndNotAuthority(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.NotLocallyControlledAndNotAuthority // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CustomEvent_2(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CustomEvent_1(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponEquipStart(struct AHWWeapon* WeaponEquip); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.WeaponEquipStart // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponUnequipStart(struct AHWWeapon* WeaponUnequip); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.WeaponUnequipStart // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponEquipStarted_Event_1(struct AHWWeapon* Weapon); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.OnWeaponEquipStarted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponEquipped0(struct AHWWeapon* Weapon); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.WeaponEquipped0 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Send3PRecoilDrivers_Dispatch_Event_1(float RecoilDriverMaster); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.Send3PRecoilDrivers_Dispatch_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponUnequipStarted_Event_1(struct AHWWeapon* Weapon); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.OnWeaponUnequipStarted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachOrigMagToWeaponEvent(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.AttachOrigMagToWeaponEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachOrigMagToHandABSEvent(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.AttachOrigMagToHandABSEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachOrigMagToHandEvent(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.AttachOrigMagToHandEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetSpawnDropMagEvent(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.ResetSpawnDropMagEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnDropMag(float ReloadTime); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.SpawnDropMag // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetGatesEvent(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.ResetGatesEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetAttachMagToWeapon_Event(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.ResetAttachMagToWeapon_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachMagToWeapon_EventDispatch_Binder(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.AttachMagToWeapon_EventDispatch_Binder // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetAttachMagABS_Event(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.ResetAttachMagABS_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetAttachMag_Event(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.ResetAttachMag_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachOrigMagToHand3PABS_EventDispatch_Binder(bool ToHand); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.AttachOrigMagToHand3PABS_EventDispatch_Binder // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachOrigMagToHandBinder(bool ToHand); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.AttachOrigMagToHandBinder // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetOrigMagVisibleBinder(bool TRUE); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.SetOrigMagVisibleBinder // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetOrigMagVisibleEvent(bool TRUE); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.SetOrigMagVisibleEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MagazineHandlingEvent(bool TRUE, bool AttachToHand, float ReloadTime); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.MagazineHandlingEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DropMagazineEvent(float ReloadTime); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.DropMagazineEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnDropEventBinder(float ReloadTime); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.SpawnDropEventBinder // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DropMagEvent(bool TRUE); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.DropMagEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadEndBinder(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.ReloadEndBinder // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadBeginBinder(); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.ReloadBeginBinder // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_3P_AnimationComponent(int32_t EntryPoint); // Function BP_3P_AnimationComponent.BP_3P_AnimationComponent_C.ExecuteUbergraph_BP_3P_AnimationComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

