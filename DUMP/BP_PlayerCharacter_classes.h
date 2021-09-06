// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// Size: 0x1b79 (Inherited: 0x12e8)
struct ABP_PlayerCharacter_C : ABP_PlayerCharacter_Logic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x12e8(0x08)
	struct UPostProcessComponent* PostProcess_CameraDOF_Optical; // 0x12f0(0x08)
	struct UPostProcessComponent* PostProcess_Burn; // 0x12f8(0x08)
	struct UPostProcessComponent* PostProcess_Smoke; // 0x1300(0x08)
	struct UPostProcessComponent* PostProcess_Gas; // 0x1308(0x08)
	struct UPostProcessComponent* PostProcess_SpecterSystem; // 0x1310(0x08)
	struct USphereComponent* PostProcessVolume; // 0x1318(0x08)
	struct UBP_1P_CameraHandlerComponent_C* BP_1P_CameraHandlerComponent; // 0x1320(0x08)
	struct USpotLightComponent* 1PFill; // 0x1328(0x08)
	struct USpotLightComponent* 1PRim; // 0x1330(0x08)
	struct UPostProcessComponent* PostProcess_Bandage; // 0x1338(0x08)
	struct UPostProcessComponent* PostProcess_FlashDrone; // 0x1340(0x08)
	struct USceneCaptureComponent2D* SC_FlashBang; // 0x1348(0x08)
	struct UPostProcessComponent* PostProcess_JammedEffect; // 0x1350(0x08)
	struct UPostProcessComponent* PostProcess_FlashMine; // 0x1358(0x08)
	struct UChildActorComponent* Footstep_Sound_Emitter_BelowGround; // 0x1360(0x08)
	struct UPostProcessComponent* PostProcess_CombatEnhancer; // 0x1368(0x08)
	struct USpotLightComponent* FillerSpotLight; // 0x1370(0x08)
	struct UPostProcessComponent* PostProcess_CameraDOF_NonOptical; // 0x1378(0x08)
	struct UPostProcessComponent* PostProcess_Suppress; // 0x1380(0x08)
	struct UPostProcessComponent* PostProcess_FlashBangBlind; // 0x1388(0x08)
	struct UPostProcessComponent* PostProcess_Hit_Injured; // 0x1390(0x08)
	struct UPostProcessComponent* PostProcess_Bleeding; // 0x1398(0x08)
	float TL_Vault_TL_CameraZ_375C12CB44AA6E7AAD17E58E7AE1FBF1; // 0x13a0(0x04)
	float TL_Vault_TL_AimDotOpa_375C12CB44AA6E7AAD17E58E7AE1FBF1; // 0x13a4(0x04)
	float TL_Vault_TL_VaultMaster_375C12CB44AA6E7AAD17E58E7AE1FBF1; // 0x13a8(0x04)
	enum class ETimelineDirection TL_Vault__Direction_375C12CB44AA6E7AAD17E58E7AE1FBF1; // 0x13ac(0x01)
	char pad_13AD[0x3]; // 0x13ad(0x03)
	struct UTimelineComponent* TL_Vault; // 0x13b0(0x08)
	float FlashMineTL_FlashMineIntensity_57EF21464CCCB4C4F190758FBBD8B7EF; // 0x13b8(0x04)
	enum class ETimelineDirection FlashMineTL__Direction_57EF21464CCCB4C4F190758FBBD8B7EF; // 0x13bc(0x01)
	char pad_13BD[0x3]; // 0x13bd(0x03)
	struct UTimelineComponent* FlashMineTL; // 0x13c0(0x08)
	float DroneFlashTL_DroneFlashIntensity_B23F404C462DE2C7FA3E639A9FAC6BC7; // 0x13c8(0x04)
	enum class ETimelineDirection DroneFlashTL__Direction_B23F404C462DE2C7FA3E639A9FAC6BC7; // 0x13cc(0x01)
	char pad_13CD[0x3]; // 0x13cd(0x03)
	struct UTimelineComponent* DroneFlashTL; // 0x13d0(0x08)
	float TL_ADS_CamToAim_ToFov_BD63526447FE06B894F32584F4C39E35; // 0x13d8(0x04)
	enum class ETimelineDirection TL_ADS_CamToAim__Direction_BD63526447FE06B894F32584F4C39E35; // 0x13dc(0x01)
	char pad_13DD[0x3]; // 0x13dd(0x03)
	struct UTimelineComponent* TL_ADS_CamToAim; // 0x13e0(0x08)
	float Flash_FlashFloat_47E2ABF8465DF056B53D248F6353EDCF; // 0x13e8(0x04)
	enum class ETimelineDirection Flash__Direction_47E2ABF8465DF056B53D248F6353EDCF; // 0x13ec(0x01)
	char pad_13ED[0x3]; // 0x13ed(0x03)
	struct UTimelineComponent* Flash; // 0x13f0(0x08)
	float Hit_Injury_TL_BlendWeight_CurveFloat_2D0A47BA4083C7FB02C642A2F5772B80; // 0x13f8(0x04)
	float Hit_Injury_TL_InjuryHitFloat_2D0A47BA4083C7FB02C642A2F5772B80; // 0x13fc(0x04)
	enum class ETimelineDirection Hit_Injury_TL__Direction_2D0A47BA4083C7FB02C642A2F5772B80; // 0x1400(0x01)
	char pad_1401[0x7]; // 0x1401(0x07)
	struct UTimelineComponent* Hit_Injury_TL; // 0x1408(0x08)
	bool ShouldSprint; // 0x1410(0x01)
	char pad_1411[0x3]; // 0x1411(0x03)
	float AimYawDelta; // 0x1414(0x04)
	float VelocityDifference; // 0x1418(0x04)
	float CharacterRotationDifference; // 0x141c(0x04)
	float Direction; // 0x1420(0x04)
	float WalkingSpeed; // 0x1424(0x04)
	float RunningSpeed; // 0x1428(0x04)
	float SprintingSpeed; // 0x142c(0x04)
	float CrouchingSpeed; // 0x1430(0x04)
	float WalkingAcceleration; // 0x1434(0x04)
	float RunningAcceleration; // 0x1438(0x04)
	float WalkingDeceleration; // 0x143c(0x04)
	float RunningDeceleration; // 0x1440(0x04)
	float WalkingGroundFriction; // 0x1444(0x04)
	float RunningGroundFriction; // 0x1448(0x04)
	struct FRotator JumpRotation; // 0x144c(0x0c)
	float RotationOffset; // 0x1458(0x04)
	float RotationRateMultiplier; // 0x145c(0x04)
	float ForwardAxisValue; // 0x1460(0x04)
	float RightAxisValue; // 0x1464(0x04)
	bool IsAimingState; // 0x1468(0x01)
	char pad_1469[0x3]; // 0x1469(0x03)
	struct FName FirstPersonCameraSocket; // 0x146c(0x08)
	char pad_1474[0x4]; // 0x1474(0x04)
	struct UCurveFloat* CameraLerpCurve; // 0x1478(0x08)
	bool ShowTraces; // 0x1480(0x01)
	char pad_1481[0x3]; // 0x1481(0x03)
	struct FName PelvisBone; // 0x1484(0x08)
	struct FName RagdollPoseSnapshot; // 0x148c(0x08)
	struct FVector RagdollVelocity; // 0x1494(0x0c)
	struct FTransform FPCamStart_TR; // 0x14a0(0x30)
	struct FTransform CamJointTR; // 0x14d0(0x30)
	struct FTransform FPCamEnd_TR; // 0x1500(0x30)
	float CamToAnimCam_speed; // 0x1530(0x04)
	float CamToBPCam_speed; // 0x1534(0x04)
	char pad_1538[0x8]; // 0x1538(0x08)
	struct FTransform FPCamEnd_RootSpaceTR; // 0x1540(0x30)
	float FovWorld; // 0x1570(0x04)
	float FovWorldAiming; // 0x1574(0x04)
	float CamToAimSpeed; // 0x1578(0x04)
	struct FRotator FPCamStartRotation; // 0x157c(0x0c)
	float BleedRate; // 0x1588(0x04)
	char pad_158C[0x4]; // 0x158c(0x04)
	struct UMaterialInstanceDynamic* PP_DM_Injury_Ref; // 0x1590(0x08)
	float Panini_1PFov; // 0x1598(0x04)
	float Panini_1PFovD; // 0x159c(0x04)
	float SimpleRecoil_LR; // 0x15a0(0x04)
	float SimpleRecoil_UD; // 0x15a4(0x04)
	float DownRate_Current; // 0x15a8(0x04)
	float RightRate_Current; // 0x15ac(0x04)
	float SimpleRecoilKickRotation; // 0x15b0(0x04)
	float SimpleRecoilKick; // 0x15b4(0x04)
	float FovWeaponHip; // 0x15b8(0x04)
	float FovWeaponAim; // 0x15bc(0x04)
	struct UTextureRenderTarget* OpticalScopeRTTexture; // 0x15c0(0x08)
	float FovWeaponSnipers; // 0x15c8(0x04)
	float CrouchCamSpeed; // 0x15cc(0x04)
	float CrouchHeight; // 0x15d0(0x04)
	enum class EHWWeaponType CurrentWeaponType; // 0x15d4(0x01)
	char pad_15D5[0x3]; // 0x15d5(0x03)
	float TimeBetweenShots; // 0x15d8(0x04)
	enum class EHWWeaponFireMode FireMode; // 0x15dc(0x01)
	char pad_15DD[0x3]; // 0x15dd(0x03)
	int32_t BulletsPerBurst; // 0x15e0(0x04)
	float RecoilMultiplierWalking; // 0x15e4(0x04)
	float RecoilMultiplierHipFiring; // 0x15e8(0x04)
	float RecoilMultiplierCrouching; // 0x15ec(0x04)
	float AimSpeed; // 0x15f0(0x04)
	float WeaponFOVTemporaryOverride; // 0x15f4(0x04)
	struct FString WeaponGlass_MatSlot_Name; // 0x15f8(0x10)
	int32_t WeaponSlotNR; // 0x1608(0x04)
	float SuppressionMultiplier; // 0x160c(0x04)
	float SuppressionPerShot; // 0x1610(0x04)
	struct FVector AimPointOffset; // 0x1614(0x0c)
	float FP_Camera_Height_Actual; // 0x1620(0x04)
	struct FVector AimHandRotationMult; // 0x1624(0x0c)
	struct TArray<struct UMaterialInterface*> BloodSplatDecalsArray; // 0x1630(0x10)
	bool IsBleeding; // 0x1640(0x01)
	char pad_1641[0x7]; // 0x1641(0x07)
	struct FTimerHandle BleedTimerHandle; // 0x1648(0x08)
	float BleedDecalBaseSpeed; // 0x1650(0x04)
	bool IsDead; // 0x1654(0x01)
	char pad_1655[0x3]; // 0x1655(0x03)
	float AnimRecoil_IKCloserWhenShooting; // 0x1658(0x04)
	bool OutlinesOn; // 0x165c(0x01)
	char pad_165D[0x3]; // 0x165d(0x03)
	struct FVector CalculatedRecoilVector; // 0x1660(0x0c)
	struct FRotator CalculatedRecoilKickRotation; // 0x166c(0x0c)
	struct FTimerHandle AnimRecoilIsToClose_Handle; // 0x1678(0x08)
	struct FTimerHandle AnimRecoilIsOffClose_Handle; // 0x1680(0x08)
	struct UCameraModifier* CameraModifier; // 0x1688(0x08)
	struct FVector CalculatedRecoilVectorWithAimShootOffset; // 0x1690(0x0c)
	bool IsAutomatic; // 0x169c(0x01)
	char pad_169D[0x3]; // 0x169d(0x03)
	float CalculatedCameraFOV; // 0x16a0(0x04)
	char pad_16A4[0x4]; // 0x16a4(0x04)
	struct UMaterialInstanceDynamic* OpticalScopeMateral; // 0x16a8(0x08)
	float FP_Camera_DefaultHeight; // 0x16b0(0x04)
	bool IsCurrentlyFiring; // 0x16b4(0x01)
	bool IsOptical; // 0x16b5(0x01)
	char pad_16B6[0x2]; // 0x16b6(0x02)
	float AimZRotWalk; // 0x16b8(0x04)
	float AimZRotWalkCurrent; // 0x16bc(0x04)
	float AimZUpWalk; // 0x16c0(0x04)
	float AimZUpWalkCurrent; // 0x16c4(0x04)
	float AimWalkClampedVelocity; // 0x16c8(0x04)
	float AimWalkClampedVelocityLerped; // 0x16cc(0x04)
	struct FTimerHandle Timer_StartCoughing; // 0x16d0(0x08)
	struct TArray<struct FRotator> LookingRotationBuffer; // 0x16d8(0x10)
	struct ABP_BackPack_C* BackPackRef; // 0x16e8(0x08)
	bool inRagdoll; // 0x16f0(0x01)
	char pad_16F1[0x7]; // 0x16f1(0x07)
	struct TMap<enum class EHWArmorType, struct UMaterialInstance*> ArmorMaterialMap; // 0x16f8(0x50)
	struct USkeletalMeshComponent* MeshToProcess; // 0x1748(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> ArmorMaterialsHead; // 0x1750(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> ArmorMaterialsChest; // 0x1760(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> ArmorMaterialsLegs; // 0x1770(0x10)
	float RTScopeCheckWallDistance; // 0x1780(0x04)
	float AimingBlend; // 0x1784(0x04)
	struct FMulticastInlineDelegate OnWeaponEquippedEvent; // 0x1788(0x10)
	struct FRotator AimHandRotation; // 0x1798(0x0c)
	struct FVector DofTargetPosition; // 0x17a4(0x0c)
	struct FVector AimPointOffsetCheck; // 0x17b0(0x0c)
	float AimRootDistanceFromAimPoint; // 0x17bc(0x04)
	enum class EHWWeaponPartType LeftHandGripPartData; // 0x17c0(0x01)
	char pad_17C1[0x7]; // 0x17c1(0x07)
	struct AHWWeaponPart* PartWithLhandsocket; // 0x17c8(0x08)
	struct FVector TickedLeftHandSocketPos; // 0x17d0(0x0c)
	struct FRotator TickedLeftHandSocketRot; // 0x17dc(0x0c)
	struct FRotator TickedLeftHandSocketRot_WS; // 0x17e8(0x0c)
	float HipsOverrideFromADSComponent; // 0x17f4(0x04)
	float AimADSComponentOverride; // 0x17f8(0x04)
	struct FRotator HW_ControlRotationCached; // 0x17fc(0x0c)
	struct FRotator HW_ControlRotationDelta; // 0x1808(0x0c)
	struct FVector HW_ControlRotationDeltaVector; // 0x1814(0x0c)
	float HW_ControlRotationVectorLength; // 0x1820(0x04)
	bool ActivePP; // 0x1824(0x01)
	char pad_1825[0x3]; // 0x1825(0x03)
	float BleedProgress; // 0x1828(0x04)
	bool HasBackpack; // 0x182c(0x01)
	char pad_182D[0x3]; // 0x182d(0x03)
	float BurnSmokeGas; // 0x1830(0x04)
	char pad_1834[0x4]; // 0x1834(0x04)
	struct FHWHeldItemAnimation DefaultUnequipAnimation; // 0x1838(0x58)
	struct FHWHeldItemAnimation EquipAnimation; // 0x1890(0x58)
	struct FHWHeldItemAnimation UnequipAnimation; // 0x18e8(0x58)
	struct FHWHeldItemAnimation IdleAnim; // 0x1940(0x58)
	bool OnlyUnequipIfAborted; // 0x1998(0x01)
	bool DoIdleAnim; // 0x1999(0x01)
	bool UseInteractionMultiplier; // 0x199a(0x01)
	char pad_199B[0x5]; // 0x199b(0x05)
	struct TArray<enum class EHWActionType> ThrowActionDisables; // 0x19a0(0x10)
	enum class HandItemDisableTypes HandItemDisableType; // 0x19b0(0x01)
	char pad_19B1[0x7]; // 0x19b1(0x07)
	struct TMap<enum class HandItemDisableTypes, struct FActionTypeMapArray> HandItemDisablesPerType; // 0x19b8(0x50)
	struct TArray<enum class EHWActionType> HandItemDisables; // 0x1a08(0x10)
	float GamepadInputHorizontalBoost; // 0x1a18(0x04)
	float AimBlendMasterLinear; // 0x1a1c(0x04)
	struct UCurveVector* OPA DOF FOV; // 0x1a20(0x08)
	float WorldFovBlendFromCurve; // 0x1a28(0x04)
	float DofPPBlendFromCurve; // 0x1a2c(0x04)
	float AimDotOpacityBlendFromCurve; // 0x1a30(0x04)
	struct FName RootBone; // 0x1a34(0x08)
	enum class EHWDamageType LastHitDamage; // 0x1a3c(0x01)
	char pad_1A3D[0x3]; // 0x1a3d(0x03)
	struct FHitResult LastHitResult; // 0x1a40(0x8c)
	char pad_1ACC[0x4]; // 0x1acc(0x04)
	struct TArray<enum class EHWActionType> HandItemAdditionalDisables; // 0x1ad0(0x10)
	float Shader1PBlendFromCurve; // 0x1ae0(0x04)
	char pad_1AE4[0x4]; // 0x1ae4(0x04)
	struct UCurveVector* C_OPA_DOF_FOV; // 0x1ae8(0x08)
	struct UCurveFloat* C_ShaderFOV; // 0x1af0(0x08)
	enum class EHW_1P_AnimationScopeType AnimScopeType; // 0x1af8(0x01)
	enum class ETimelineDirection AimDirection; // 0x1af9(0x01)
	char pad_1AFA[0x6]; // 0x1afa(0x06)
	struct UADS_AAA_Base_C* ADSDataCurrent; // 0x1b00(0x08)
	struct UADS_AimDataBase_C* ADS_AimDataCurrent; // 0x1b08(0x08)
	struct UADS_AimDataBase_C* ADS_AimDataCurrent_1; // 0x1b10(0x08)
	struct FTimerHandle FlinchOnArmorHitHandle; // 0x1b18(0x08)
	bool CanFlinch; // 0x1b20(0x01)
	char pad_1B21[0x3]; // 0x1b21(0x03)
	float HC_VaultTime; // 0x1b24(0x04)
	float VaultMaster; // 0x1b28(0x04)
	struct FVector VaultMeshRelativeLocation; // 0x1b2c(0x0c)
	bool HasAimMesh; // 0x1b38(0x01)
	bool AimMeshVisible; // 0x1b39(0x01)
	char pad_1B3A[0x2]; // 0x1b3a(0x02)
	float LeanAngleForReticule; // 0x1b3c(0x04)
	bool Is Melee Weapon; // 0x1b40(0x01)
	char pad_1B41[0x7]; // 0x1b41(0x07)
	struct UCurveFloat* C_HeldItemFov; // 0x1b48(0x08)
	struct FMulticastInlineDelegate EquipMelee_Dispatch; // 0x1b50(0x10)
	struct FMulticastInlineDelegate UnEquipMelee_Dispatch; // 0x1b60(0x10)
	float VaultTime; // 0x1b70(0x04)
	int32_t Vfx Tag; // 0x1b74(0x04)
	bool RagdollHasFinished; // 0x1b78(0x01)

	void GetMovementMode(enum class EHW_MovementMode Mode); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetMovementMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetIsDead(bool Value); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x13c4ca0
	void GetExplosionVisibilityTargets(struct TArray<struct FVector> Targets); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetExplosionVisibilityTargets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Init 3p Visibility Component(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Init 3p Visibility Component // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleGamepadAimInput(float InputX, float InputY, float DeadZone, float ExponentNormal, float ExponentADS, float SensitivityMult, float SensitivityMultADS, float TurnRate, float OutputX, float OutputY); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.HandleGamepadAimInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetGamepadHorizontalBoost(float InputIn, float BoostThreshold, float Acceleration, float MaxBoost); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGamepadHorizontalBoost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EndThrowActionDisables(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.EndThrowActionDisables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DisableActionsDuringThrow(int32_t Slot); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableActionsDuringThrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ScaleHandItemAnimPlayRate(bool ShouldScaleWithInteraction, struct FHWHeldItemAnimation Anim); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ScaleHandItemAnimPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderOutMontage(struct ABP_Ladder_C* Ladder, bool ClimbedUp); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.LadderOutMontage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TempLadderTrace(struct FVector Start, struct FVector GoodLocationForCharacter); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TempLadderTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MakeLadderEntryAnimData(struct FVector EndLocation, struct FRotator EndRotation, struct FRotator EndControlRotation, struct UAnimMontage* Montage3P, bool FromTop, struct FHWMontageData MontageStruct); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MakeLadderEntryAnimData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void VaultMontage(struct FHWVaultResult VaultResult, struct FHWVaultMontagePlayerData MontageData); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.VaultMontage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsAimingEnabled(bool Value); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsAimingEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ApplyImpulseFromLastShot(enum class EHWDamageType Selection, struct FHitResult Hit); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyImpulseFromLastShot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRep_isDead(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_isDead // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetIsDead(bool Value); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetIsDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsActionEnabled(enum class EHWActionType Action, bool Value); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsActionEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdatePlayerZCoordRTPC(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlayerZCoordRTPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetLookData(struct FVector2D lookRate, float rightAxis); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetAimHandRotation(struct FRotator Value); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAimHandRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetFPCamera_CS(struct FTransform ComponentTransform); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFPCamera_CS // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetFPCamera_WS(struct FTransform WorldTransform); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFPCamera_WS // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetRecoilState(struct FVector Offset, struct FRotator Rotation); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetRecoilState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetArmorPartMaterialDestroyed(enum class EHWArmorType ArmorPart, bool Destroyed, float DestroyedValue); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetArmorPartMaterialDestroyed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddArmorMaterials(enum class EHWArmorType ArmorPart); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddArmorMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetLadderAnimValues(struct ABP_Ladder_C* Ladder, struct FVector RelocateLocation, struct FRotator RelocateRotation, struct FRotator RelocateControlRotation, struct UAnimMontage* Montage3P, bool FromTop); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLadderAnimValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponHasOpticalScope(bool Result); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.WeaponHasOpticalScope // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ResetPostProcessValues(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetPostProcessValues // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CalcWeaponAimDepthOffset(float Offset); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalcWeaponAimDepthOffset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ConvertSecondsToTLSpeed(float Seconds, struct UTimelineComponent* Timeline, float Speed); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ConvertSecondsToTLSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ComponentTRSpaceSwitcher(struct USceneComponent* Component, bool Mesh1P, struct FName ToSocketSpaceName, struct FTransform NewTransform); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ComponentTRSpaceSwitcher // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetWeaponPartSocketPR(enum class EHWWeaponPartType Type, struct FName SocketName, bool GetPosition, bool GetRotation, bool SetToSpace, bool Mesh1P, struct FName ToSocketSpace, enum class ERelativeTransformSpace TransformSpace, bool DeBug, struct FVector Position, struct FRotator Rotation); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponPartSocketPR // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UserConstructionScript(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TL_Vault__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TL_Vault__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_Vault__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TL_Vault__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_ADS_CamToAim__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TL_ADS_CamToAim__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_ADS_CamToAim__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TL_ADS_CamToAim__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_ADS_CamToAim__TL_AimMeshOnEvent__EventFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.TL_ADS_CamToAim__TL_AimMeshOnEvent__EventFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void FlashMineTL__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.FlashMineTL__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void FlashMineTL__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.FlashMineTL__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void DroneFlashTL__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.DroneFlashTL__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void DroneFlashTL__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.DroneFlashTL__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Flash__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Flash__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Flash__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Flash__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Hit_Injury_TL__FinishedFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hit_Injury_TL__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Hit_Injury_TL__UpdateFunc(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hit_Injury_TL__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void BPI_RecoilCurveValueEvent(float GunAlphaCurve, struct FVector SpineAlphaCurves, float HeadAlphaCurve, float GunAngle, float HeadAngle, float SpineAngle, float WeaponZOffset, struct FVector HipZOffset, float HipZOffsetAlpha); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BPI_RecoilCurveValueEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_HitReaction(struct FVector HitReactionAlphas); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BPI_HitReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_HitReactionInit(struct FVector HitDirection, float HeadAngle, float Spine03Angle, float Spine02Angle); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BPI_HitReactionInit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Leaning(enum class EHW_Anim_LeaningState LeaningState); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BPI_Leaning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Firing(bool IsHipFire); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BPI_Firing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_SwitchWeaponType(enum class EHW_Anim_WeaponSwitchType WeaponSwitchTypeNew, enum class EHW_Anim_WeaponSwitchType WeaponSwitchTypeOld); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BPI_SwitchWeaponType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_SwitchWeaponTicker(float Evaluator, float AlphaFromCurve, float SwitchTime); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BPI_SwitchWeaponTicker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelHudPromptText(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.CancelHudPromptText // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeatureActivated(enum class EHWArmorFeatureType Feature, bool Active, float Duration); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnArmorFeatureActivated // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorFeaturesChanged(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnArmorFeaturesChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedControllerChanged(struct UHWCameraFeedProviderComponent* Camera); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCameraFeedControllerChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCameraFeedsUpdated(struct TArray<struct UHWCameraFeedProviderComponent*> Cameras); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCameraFeedsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnCloseMap(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCloseMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnCombatCompanionStatusChanged(bool Available); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCombatCompanionStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneJammed(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDroneJammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDronePossessed(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDronePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneUnjammed(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDroneUnjammed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterSpectateMode(bool DroneSelect, bool ShowDeathScreen); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEnterSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitSpectateMode(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnExitSpectateMode // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHideProgressBar(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnHideProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitReceived(struct FHWPlayerHitReceivedParams Params); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnHitReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitScored(struct FHWPlayerHitScoredParams Params); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnHitScored // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemEnterView(struct UHWInteractionComponent* Item); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnInteractionItemEnterView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteractionItemExitView(struct UHWInteractionComponent* Item); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnInteractionItemExitView // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMetaMessageReceived(struct FHWMetaMessageData Message, float ShowDuration); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMetaMessageReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotificationTextUpdated(struct FText NewText, struct FLinearColor UpperTextColor, bool UseAnimationUpper, struct FText NewNotificationTextLower, struct FLinearColor LowerTextColor, bool UseAnimationLower, float Duration); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnNotificationTextUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyDeathDroneDestroyed(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnNotifyDeathDroneDestroyed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveChanged(struct FText NewObjective, bool UseAnimation, bool PlaySound); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnObjectiveChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveDataChanged(struct FHWRoundObjectivesData ObjectiveData); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnObjectiveDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnObjectiveItemsUpdated(struct TArray<struct FNameAndCount> Items); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnObjectiveItemsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnOpenMap(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnOpenMap // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDisconnected(struct FString SessionId); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPlayerDisconnected // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDowned(struct FString KillerId, struct FString VictimId, bool WasHeadShot); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPlayerDowned // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerKilled(struct FString KillerId, struct FString VictimId, bool WasKilledByDrone, struct FName KillerItemId, enum class EHWDamageType DamageType, bool WasHeadShot, enum class EHWWeaponType WeaponType, struct TArray<struct FString> Assists, struct AActor* DamageDealer, struct FName BleedCausedByDamageDealer, enum class EHWDamageType BleedCausedByDamageType); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPlayerKilled // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStateSetForCharacter(struct AHWCharacter* Character); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPlayerStateSetForCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPossess(struct AHWCharacter* PosessedCharacter); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReconnectingPlayersUpdated(struct TArray<struct FString> ReconnectingPlayers); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnReconnectingPlayersUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundCleanup(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRoundCleanup // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundIntroDataChanged(struct FHWRoundIntroData RoundIntroData); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRoundIntroDataChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnShowProgressBar(float Duration, enum class EHWProgressBarType BarType); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnShowProgressBar // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutChanged(struct FString PlayerId, struct FString Primary, struct FString Secondary, int32_t PrimaryTier, int32_t SecondaryTier, int32_t ArmorTier, struct FName Consumable, struct FName Throwable, struct FName Placeable); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnTeammateLoadoutChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateLoadoutDataChanged(int32_t CharIndex, struct FHWLoadoutData LoadoutData); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnTeammateLoadoutDataChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeammateProfileChanged(struct FString PlayerId, struct FHWPlayerPublicProfile Profile); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnTeammateProfileChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamReadyStateChanged(struct TArray<struct FString> Ids); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnTeamReadyStateChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnTeamScoreUpdated(struct FHWTeamScoreData Score); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnTeamScoreUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHudPromptText(struct FText Text, float DisplayDuration); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetHudPromptText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void DroneFlash_PlayerEffect(struct AHWCharacter* EffectInstigator, float Duration); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.DroneFlash_PlayerEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Flashbang_PlayerEffect(struct AHWCharacter* EffectInstigator); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Flashbang_PlayerEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Suppression_PlayerEffect(struct AHWCharacter* EffectInstigator, struct AHWWeapon* Weapon); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Suppression_PlayerEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FlashMine_PlayerEffect(struct AHWCharacter* EffectInstigator); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.FlashMine_PlayerEffect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LookUp(float Value); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.LookUp // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Turn(float Value); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Turn // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BeginAim(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BeginAim // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void EndAim(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.EndAim // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BeginFire(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BeginFire // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void EndFire(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.EndFire // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void MulticastBeginFire(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MulticastBeginFire // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MulticastEndFire(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MulticastEndFire // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MulticastBeginAim(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MulticastBeginAim // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MulticastEndAim(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MulticastEndAim // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Play_PlacingItem(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BPI_Play_PlacingItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Play_Bandaging(struct UAnimMontage* montage_1p, struct UAnimMontage* monteage_3p); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BPI_Play_Bandaging // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_InterruptMontage(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BPI_InterruptMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetDelayEvent(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetDelayEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetIsAiming(bool ALS_Aiming); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetIsAiming // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BeginAimWithMulticast(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BeginAimWithMulticast // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EndAimWithMulticast(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.EndAimWithMulticast // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void VaultResultBPI(struct FHWVaultResult VaultResult, struct FHWVaultMontagePlayerData MontagePlayerData); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.VaultResultBPI // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnBeginVaultBPI(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnBeginVaultBPI // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void RestartPlaceDisables(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.RestartPlaceDisables // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void SetPlayerFOV1P(bool Enabled); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetPlayerFOV1P // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetCamerasFOV_Event(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCamerasFOV_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorPartSet(enum class EHWArmorType ArmorType); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnArmorPartSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnFirstPersonHandsSet(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnFirstPersonHandsSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ReviveComponent_K2Node_ComponentBoundEvent_1_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__ReviveComponent_K2Node_ComponentBoundEvent_1_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ReviveComponent_K2Node_ComponentBoundEvent_2_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__ReviveComponent_K2Node_ComponentBoundEvent_2_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ReviveComponent_K2Node_ComponentBoundEvent_3_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__ReviveComponent_K2Node_ComponentBoundEvent_3_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnStartCrouch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnEndCrouch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnReviveSFXEvent(struct UAkAudioEvent* AkEvent); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnReviveSFXEvent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DebugRagdoll(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugRagdoll // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDead(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDead // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StopRagdollSimulation(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopRagdollSimulation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void To_RagDoll(MultiCast_W_DamageType)(enum class EHWDamageType DamageType, struct FHitResult HitInfo); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.To_RagDoll(MultiCast_W_DamageType) // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateWeaponFOVParameter(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateWeaponFOVParameter // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToAimEvent(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.GoToAimEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetCameraToDefaultFOV(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCameraToDefaultFOV // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetArmorHitTimer(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetArmorHitTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Flinch(enum class EHW_FlinchType FlinchType); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Flinch // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLocalPlayerFireStateChanged(bool IsActive); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLocalPlayerFireStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLocalPlayerPossessed(bool SpecterStatus, bool SmokeStatus, bool FireStatus, bool GasStatus); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLocalPlayerPossessed // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceivePossessed(struct AController* NewController); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__InjuryComponent_K2Node_ComponentBoundEvent_0_HWInjuryReceivedDelegate__DelegateSignature(struct FHWInjuryReceivedParams Params); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__InjuryComponent_K2Node_ComponentBoundEvent_0_HWInjuryReceivedDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorDamaged(struct FHitResult Hit, struct FHWCommonDamageResult DamageResult); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnArmorDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorDestroyed(enum class EHWBodypart Bodypart, struct FHitResult Hit); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnArmorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ArmorComponent_K2Node_ComponentBoundEvent_0_HWHumanArmorHitDelegate__DelegateSignature(struct FHWHumanArmorHitParams Params); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__ArmorComponent_K2Node_ComponentBoundEvent_0_HWHumanArmorHitDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__EquipmentEffectsComponent_K2Node_ComponentBoundEvent_4_OnPlayerSpecterStateChanged__DelegateSignature(bool IsActive); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__EquipmentEffectsComponent_K2Node_ComponentBoundEvent_4_OnPlayerSpecterStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__EquipmentEffectsComponent_K2Node_ComponentBoundEvent_6_OnPlayerFireStateChanged__DelegateSignature(bool IsActive); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__EquipmentEffectsComponent_K2Node_ComponentBoundEvent_6_OnPlayerFireStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ActivatePP(bool Active); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ActivatePP // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSmokeStateChanged(bool IsActive); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSmokeStateChanged // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnGasStateChanged(bool IsActive); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnGasStateChanged // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__HWElectronics_K2Node_ComponentBoundEvent_1_HWElectronicsJamDelegate__DelegateSignature(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HWElectronics_K2Node_ComponentBoundEvent_1_HWElectronicsJamDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__HWElectronics_K2Node_ComponentBoundEvent_0_HWElectronicsJamDelegate__DelegateSignature(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HWElectronics_K2Node_ComponentBoundEvent_0_HWElectronicsJamDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Bandage_Local_Deactivate(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Bandage_Local_Deactivate // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Bandage_Local(float Duration); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Bandage_Local // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClientJammed(bool Jammed); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientJammed // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UnJammed_Local(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnJammed_Local // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Jammed_Local(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Jammed_Local // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FlashMineEffect_Local(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.FlashMineEffect_Local // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DroneFlash(float DurationMultiplier, float Intensity); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.DroneFlash // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CombatEnhancer_Local_Deactivate(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.CombatEnhancer_Local_Deactivate // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CombatEnhancer_Local(float Duration); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.CombatEnhancer_Local // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SuppressionEventMelee(struct AActor* Actor); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SuppressionEventMelee // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InjuryBloodSplat(struct FHitResult HitResult); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.InjuryBloodSplat // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SuppressionEventLocal(struct AActor* Actor); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SuppressionEventLocal // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnStatusEffectApplied(enum class EHWPlayerStatusEffectType Effect, struct FVector Position, struct AActor* DamageDealer, float Duration, float Intensity); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnStatusEffectApplied // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FlashBangLocal(float PlayRate); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.FlashBangLocal // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Hit_Injury_Local(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hit_Injury_Local // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CE_BurnSmokeGas(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.CE_BurnSmokeGas // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetBleedPostProcessLocal(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBleedPostProcessLocal // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BleedingSpawnDecalTimer(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BleedingSpawnDecalTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Draw_ExplosionHitPoints(struct TArray<struct FVector> locaitons); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.Draw_ExplosionHitPoints // (Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StartCoughing(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartCoughing // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void smokeCoghing(bool ShouldCough); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.smokeCoghing // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveItemAndClearDisables(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveItemAndClearDisables // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IdleAnimFinish(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.IdleAnimFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UnequipAnimFinish(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipAnimFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandItemUnequip(bool OverrideAnimation, struct FHWHeldItemAnimation OverriddenWith); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.HandItemUnequip // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EquipAnimFinish(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipAnimFinish // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayHandItemAnimation(struct USkeletalMesh* InSkeletalMesh, struct UStaticMesh* InMesh, enum class EHWUnequipType WeaponUnequipType, float DesiredFOV, struct FHWHeldItemAnimation Equip, struct FHWHeldItemAnimation Unequip, bool UseDefaultUnequipAnim, bool OnlyUnequipIfAborted, bool DoIdleAnim, struct FHWHeldItemAnimation IdleAnim, bool UseInteractionMultiplier, enum class HandItemDisableTypes HandItemDisableType); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayHandItemAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClientCleanupPostProcess(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnClientCleanupPostProcess // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDeathDelayed(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDeathDelayed // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDeath(enum class EHWDamageType DamageType, struct FHitResult Hit); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDeath // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ServerUnequipBackpack(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerUnequipBackpack // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ServerEquipBackpack(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerEquipBackpack // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MC_UnequipBackPack(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MC_UnequipBackPack // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MC_EquipBackPack(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.MC_EquipBackPack // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UnEquipMeleeEvent(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnEquipMeleeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EquipMeleeEvent(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipMeleeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__FiringComponent_K2Node_ComponentBoundEvent_0_HWCharacterDelegate__DelegateSignature(struct AHWWeapon* Weapon); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__FiringComponent_K2Node_ComponentBoundEvent_0_HWCharacterDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void UnEquipMelee_Dispatch__DelegateSignature(); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnEquipMelee_Dispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EquipMelee_Dispatch__DelegateSignature(struct UHeldItemData_Base_C* HeldItemData); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipMelee_Dispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponEquippedEvent__DelegateSignature(struct AHWWeapon* CurrentWeapon, struct FVector AimPointOffset, float AimRootDistanceFromAimPoint, struct FVector LeftHandIKPos, struct FRotator LeftHandIKRot, enum class EHWWeaponPartType LeftHandPart, float AimDepthOffset); // Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnWeaponEquippedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

