// BlueprintGeneratedClass BP_1P_AnimationComponent.BP_1P_AnimationComponent_C
// Size: 0xd4c (Inherited: 0xb0)
struct UBP_1P_AnimationComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AActor* Owner; // 0xb8(0x08)
	struct ABP_PlayerCharacter_Anim_C* PlayerCharacterAnim_ref; // 0xc0(0x08)
	struct UAnimInstance* ABP_1P_ref; // 0xc8(0x08)
	struct FVector AimPointOffsetFromIkHandGun; // 0xd0(0x0c)
	float WeaponAimrootDepthFromCamera; // 0xdc(0x04)
	struct FVector IKR_PositionFromAimpoint; // 0xe0(0x0c)
	struct FVector MASTER_positionOffset; // 0xec(0x0c)
	struct FVector IKHandGun_LocationWithOffset; // 0xf8(0x0c)
	char pad_104[0x4]; // 0x104(0x04)
	struct FMulticastInlineDelegate SetADSDataDispatch; // 0x108(0x10)
	struct FVector Spine02_Location; // 0x118(0x0c)
	struct FVector IkHandRootLocationFINAL; // 0x124(0x0c)
	struct FVector OffsetAim_data; // 0x130(0x0c)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct USkeletalMeshComponent* Mesh1P_ref; // 0x140(0x08)
	struct FVector HandLPoleLocationWithOffset; // 0x148(0x0c)
	struct FVector HandRPoleLocationWithOffset; // 0x154(0x0c)
	float UnAimSpeed; // 0x160(0x04)
	float AimDirectionAlpha; // 0x164(0x04)
	bool AimDirection; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	struct FRotator WristRIKRotator; // 0x16c(0x0c)
	struct AHWWeaponPart* HWAimpointPart; // 0x178(0x08)
	struct FVector2D Aimed_LeadingHoriVertAngle; // 0x180(0x08)
	float AimedLeadingVerticalSpeed; // 0x188(0x04)
	float HipsLeadingHoriSpeed; // 0x18c(0x04)
	float HipsLeadingPointOffset; // 0x190(0x04)
	bool TickGate; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	struct FVector AimPointTo_IK_Offset_original; // 0x198(0x0c)
	struct FRotator MASTER_rotationOffset; // 0x1a4(0x0c)
	struct AHWWeapon* CurrentWeapon; // 0x1b0(0x08)
	struct FVector IKR_AimedLocationFromCamera; // 0x1b8(0x0c)
	struct FVector AimpointPositionFromIKR; // 0x1c4(0x0c)
	struct FVector2D HipsLeadingHoriVertAngle; // 0x1d0(0x08)
	float RecoilRunner; // 0x1d8(0x04)
	float RecoilRunnerTarget; // 0x1dc(0x04)
	float RecoilLengthManual; // 0x1e0(0x04)
	float TimeBetweenShots; // 0x1e4(0x04)
	struct FRotator RecoilRotatorOffset; // 0x1e8(0x0c)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct UCurveVector* RecoilRotCurves; // 0x1f8(0x08)
	bool GetRecoilLengthFromTimeBetweenShots; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	float RecoilLengthActual; // 0x204(0x04)
	bool IsInRecoil; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	struct FVector HipsRecoilRotMult; // 0x20c(0x0c)
	float AimedRecoilRoll; // 0x218(0x04)
	struct FVector AimedRecoilRotMult; // 0x21c(0x0c)
	struct FVector RecoilPositionOffset; // 0x228(0x0c)
	char pad_234[0x4]; // 0x234(0x04)
	struct UCurveVector* RecoilPosCurves; // 0x238(0x08)
	struct FVector AimedRecoilPosMult; // 0x240(0x0c)
	struct FVector HipsRecoilPosMult; // 0x24c(0x0c)
	bool DebugPrintOriginalTBS; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float OriginalTBS; // 0x25c(0x04)
	struct FVector RecoilAimedRandomizedADD; // 0x260(0x0c)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct TArray<struct FVector> AimedRecoilRotADD; // 0x270(0x10)
	struct FVector RecoilHipsRandomizedRotADD; // 0x280(0x0c)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct TArray<struct FVector> HipsRecoilRotADD; // 0x290(0x10)
	enum class EHW_AnimationWeaponType AnimationWeaponType; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	struct FVector2D LeadingHipsHoriVertTranslation; // 0x2a4(0x08)
	float RA_LerpedYOffset; // 0x2ac(0x04)
	float RA_SpeedToMax; // 0x2b0(0x04)
	float RA_DistanceHips; // 0x2b4(0x04)
	float RA_DistanceAimed; // 0x2b8(0x04)
	float RA_SpeedToZero; // 0x2bc(0x04)
	struct UCurveFloat* RA_MovementCurvetoZero; // 0x2c0(0x08)
	struct UCurveFloat* RA_MovementCurvetoMax; // 0x2c8(0x08)
	bool IsDelayedShooting1P; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	struct FRotator RA_CalculatedRotation; // 0x2d4(0x0c)
	struct FVector RA_AccumulatedRecoilCalculated; // 0x2e0(0x0c)
	float RA_AccumulatedRecoilOffset; // 0x2ec(0x04)
	float CrouchStaticRollOffsetActual; // 0x2f0(0x04)
	float CrouchTimeDown; // 0x2f4(0x04)
	float CrouchTimeUp; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UCurveFloat* C_CrouchDown; // 0x300(0x08)
	struct UCurveFloat* C_CrouchUp; // 0x308(0x08)
	struct FMulticastInlineDelegate SetADSIsInitDispatch; // 0x310(0x10)
	bool IsResetOffsets; // 0x320(0x01)
	bool DebugPrintAimTime; // 0x321(0x01)
	char pad_322[0x2]; // 0x322(0x02)
	float OriginalAimTime; // 0x324(0x04)
	bool IsDelayedEndAim; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct UCurveVector* tmp_aimedwalkcurve; // 0x330(0x08)
	struct FVector tmp_aimedwalk; // 0x338(0x0c)
	char pad_344[0x4]; // 0x344(0x04)
	struct AHWWeaponPart* HW_AimRootPart; // 0x348(0x08)
	enum class EHW_1P_AnimationScopeType EHW_AnimationScopeType; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	struct FVector LeftHandIKLocationOffset; // 0x354(0x0c)
	struct FRotator LeftHandIKRotationOffset; // 0x360(0x0c)
	float UnAimTime; // 0x36c(0x04)
	float LEAN_Ratio; // 0x370(0x04)
	float LeanRollAimed; // 0x374(0x04)
	struct FVector LeanPositionOffset; // 0x378(0x0c)
	enum class EHW_WalkDirection WalkDirection; // 0x384(0x01)
	enum class EHW_StrafeDirection StrafeDirection; // 0x385(0x01)
	char pad_386[0x2]; // 0x386(0x02)
	struct FVector MovementStrafeLeading_ACTUAL; // 0x388(0x0c)
	enum class EHW_LookDirectionHorizontal LookHori; // 0x394(0x01)
	enum class EHW_LookDirectionVertical LookVert; // 0x395(0x01)
	char pad_396[0x2]; // 0x396(0x02)
	struct FVector MovementWalkLeading_ACTUAL; // 0x398(0x0c)
	float LerpedAimedRotationScalerHori; // 0x3a4(0x04)
	struct UCurveFloat* LeadingRotationCurve; // 0x3a8(0x08)
	float LerpedAimedRotationScalerVert; // 0x3b0(0x04)
	struct FVector StaticPositionOfAimpointFromWeaponRoot; // 0x3b4(0x0c)
	struct FVector2D AimedLeadingActual; // 0x3c0(0x08)
	float HipsLeadingVertSpeed; // 0x3c8(0x04)
	float AimedLeadingHoriSpeed; // 0x3cc(0x04)
	struct FVector MasterPositionOffsettCalculatedAroundAimpoint; // 0x3d0(0x0c)
	struct FVector2D AimedLeadingActual_cached; // 0x3dc(0x08)
	float AimAnimSpeed; // 0x3e4(0x04)
	float AimBlendSpeed; // 0x3e8(0x04)
	float AimDirectionAnimAlpha; // 0x3ec(0x04)
	bool IfWeaponpartMissingUseADSParamsOverride; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	struct FVector ScopeSizeRelatedOffsetReference; // 0x3f4(0x0c)
	bool PrintScopeSizeRelatedDebugInfo; // 0x400(0x01)
	bool UseScopeSizeRelatedOffsetter; // 0x401(0x01)
	char pad_402[0x2]; // 0x402(0x02)
	struct FVector ScopeBounds; // 0x404(0x0c)
	struct FVector ScopeSizeRelatedOffsetActual; // 0x410(0x0c)
	struct FVector ScopeRelatedOffsetMultiplier; // 0x41c(0x0c)
	float ReloadTime; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UCurveFloat* C_LeanVertical; // 0x430(0x08)
	float StrafeLeadingAimedRoll; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UCurveFloat* C_LeadingAimedRoll; // 0x440(0x08)
	struct FTimerHandle DelayedAimEventHandle; // 0x448(0x08)
	struct UBP_1P_CameraHandlerComponent_C* CameraHandler_ref; // 0x450(0x08)
	float EnterStrafeRightTarget; // 0x458(0x04)
	struct FRotator MasterRotationAIMPOINT; // 0x45c(0x0c)
	char pad_468[0x8]; // 0x468(0x08)
	struct FTransform MasterTR_AfterAimpointRelated; // 0x470(0x30)
	struct FVector WalkHipsStepOffsetActual; // 0x4a0(0x0c)
	struct FRotator WalkHipsStepRotOffsetActual; // 0x4ac(0x0c)
	struct FVector WalkHipsStepOffsetCached; // 0x4b8(0x0c)
	struct FRotator WalkHipsStepRotOffsetCached; // 0x4c4(0x0c)
	bool StepBigSwayTick; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	float WalksBigSwayRunner; // 0x4d4(0x04)
	struct FVector WalksBigSway; // 0x4d8(0x0c)
	struct FVector FallingPos; // 0x4e4(0x0c)
	struct FRotator FallingRot; // 0x4f0(0x0c)
	bool IsFalling; // 0x4fc(0x01)
	bool IsLandingTick; // 0x4fd(0x01)
	char pad_4FE[0x2]; // 0x4fe(0x02)
	float LandingRunner; // 0x500(0x04)
	struct FVector HIPS_LandingDip; // 0x504(0x0c)
	float HC_LandingAnimLength; // 0x510(0x04)
	char pad_514[0x4]; // 0x514(0x04)
	struct FLandingCurves1P_Struct LandingCurves; // 0x518(0x10)
	struct FRotator HIPS_LandingRot; // 0x528(0x0c)
	char pad_534[0xc]; // 0x534(0x0c)
	struct FTransform SnapShotStartAim; // 0x540(0x30)
	struct FVector WalkOffsPosAimedL; // 0x570(0x0c)
	struct FRotator WalkOffsRotAimedL; // 0x57c(0x0c)
	float StepTimeWalkAimed; // 0x588(0x04)
	struct FVector WalkOffsPosAimedR; // 0x58c(0x0c)
	struct FRotator WalkOffsRotAimedR; // 0x598(0x0c)
	float SmoothedVelocity; // 0x5a4(0x04)
	float ToRunTransitionTime; // 0x5a8(0x04)
	float OffRunTransitionTime; // 0x5ac(0x04)
	struct FVector RunOffsetPos; // 0x5b0(0x0c)
	struct FRotator RunOffsetRotDownRollRight; // 0x5bc(0x0c)
	float RunStateRunner; // 0x5c8(0x04)
	float RunRunnerStepLA; // 0x5cc(0x04)
	float StepTimeRun; // 0x5d0(0x04)
	float RunRunnerStepRA; // 0x5d4(0x04)
	struct FVector RunTransitionSmoother; // 0x5d8(0x0c)
	struct FVector RunRotationSmoother; // 0x5e4(0x0c)
	bool StepLRunTickA; // 0x5f0(0x01)
	bool StepLRunTickB; // 0x5f1(0x01)
	bool StepRRunTickA; // 0x5f2(0x01)
	bool StepRRunTickB; // 0x5f3(0x01)
	float RunRunnerStepRB; // 0x5f4(0x04)
	float RunRunnerStepLB; // 0x5f8(0x04)
	bool StepLTickB; // 0x5fc(0x01)
	bool StepRTickB; // 0x5fd(0x01)
	char pad_5FE[0x2]; // 0x5fe(0x02)
	float WalksRunnerStepLB; // 0x600(0x04)
	float WalksRunnerStepRB; // 0x604(0x04)
	enum class EHW_StepType StepType; // 0x608(0x01)
	bool StepAimedLTickA; // 0x609(0x01)
	bool StepAimedLTickB; // 0x60a(0x01)
	bool StepAimedRTickA; // 0x60b(0x01)
	bool StepAimedRTickB; // 0x60c(0x01)
	char pad_60D[0x3]; // 0x60d(0x03)
	float WalksRunnerStepAimedLA; // 0x610(0x04)
	float WalksRunnerStepAimedLB; // 0x614(0x04)
	float WalksRunnerStepAimedRA; // 0x618(0x04)
	float WalksRunnerStepAimedRB; // 0x61c(0x04)
	struct FVector WalkDirectionPoseChangeTransOffsetActual; // 0x620(0x0c)
	struct FVector WalkDirectionPoseChangeOffsetLerped; // 0x62c(0x0c)
	struct FRotator WalkDirectionPoseChangeRotOffsetActual; // 0x638(0x0c)
	struct FRotator MovementStrafeLeadingROT_ACTUAL; // 0x644(0x0c)
	float HC_WalkOffsetDown; // 0x650(0x04)
	float HC_ToWalkTransitionSpeed; // 0x654(0x04)
	float HC_OffWalkTransitionSpeed; // 0x658(0x04)
	float HC_ToStrafeTransitionSpeed; // 0x65c(0x04)
	float WalkDirectionalMultiplier; // 0x660(0x04)
	float StepLRandom; // 0x664(0x04)
	float StepRRandom; // 0x668(0x04)
	float WalkOffHipsSpeed; // 0x66c(0x04)
	bool TickHipsWalk; // 0x670(0x01)
	bool ShouldAimedWalk; // 0x671(0x01)
	char pad_672[0x2]; // 0x672(0x02)
	struct FRotator WalkPoseOffset; // 0x674(0x0c)
	float HC_BleedWalkRotWhenShooting; // 0x680(0x04)
	float HC_BleedWalkPosWhenShooting; // 0x684(0x04)
	bool IsReloading; // 0x688(0x01)
	char pad_689[0x7]; // 0x689(0x07)
	struct UCurveVector* CV_CrouchDownPosition_LFU; // 0x690(0x08)
	float CrouchRunner; // 0x698(0x04)
	struct FVector CrouchPositionOffset; // 0x69c(0x0c)
	struct UCurveVector* CV_CrouchUpPosition_LFU; // 0x6a8(0x08)
	float HC_Crouchovertime; // 0x6b0(0x04)
	struct FVector CrouchPosOffsDownTR; // 0x6b4(0x0c)
	struct FVector CrouchPosOffsUpTR; // 0x6c0(0x0c)
	struct FRotator StaticRollOffset; // 0x6cc(0x0c)
	struct UCurveVector* CV_CrouchDownPosition_DRRight; // 0x6d8(0x08)
	struct FRotator CrouchRotOffsDownTR; // 0x6e0(0x0c)
	char pad_6EC[0x4]; // 0x6ec(0x04)
	struct UCurveVector* CV_CrouchUpPosition_DRRight; // 0x6f0(0x08)
	struct FRotator CrouchRotOffsUpTR; // 0x6f8(0x0c)
	struct FRotator CrouchTransitionRotOffs; // 0x704(0x0c)
	float WalkDirectionPoseMult; // 0x710(0x04)
	float IsOpticalAimedRecoilMult; // 0x714(0x04)
	bool IsOptical; // 0x718(0x01)
	char pad_719[0x3]; // 0x719(0x03)
	float RunTransitionScaleMult; // 0x71c(0x04)
	float IsFallingBlend; // 0x720(0x04)
	float LandingDipRotRunner; // 0x724(0x04)
	float LandingBlend; // 0x728(0x04)
	float FallingStartTime; // 0x72c(0x04)
	float ResetOffsetsSpeed; // 0x730(0x04)
	float HipsWalkBlenderLinear; // 0x734(0x04)
	float HipsWalkBlenderEased; // 0x738(0x04)
	struct FVector HIPS_WalkStepL_PosMult_actual; // 0x73c(0x0c)
	struct FVector HIPS_WalkStepL_RotMult_actual; // 0x748(0x0c)
	struct FVector HIPS_WalkStepR_PosMult_actual; // 0x754(0x0c)
	struct FVector HIPS_WalkStepR_RotMult_actual; // 0x760(0x0c)
	bool DirectionalLeadingActive; // 0x76c(0x01)
	char pad_76D[0x3]; // 0x76d(0x03)
	float DirLeadingBlenderLinear; // 0x770(0x04)
	struct FVector HipsLeadingTROffs; // 0x774(0x0c)
	struct FRotator HipsLeadingRotOffs; // 0x780(0x0c)
	bool NotAiming; // 0x78c(0x01)
	char pad_78D[0x3]; // 0x78d(0x03)
	float hipsLeadingDeltaRotHoriVelSmoothed; // 0x790(0x04)
	float hipsLeadingDeltaRotYVelSmoothed; // 0x794(0x04)
	struct FVector ReloadFillerPoseSmoothed; // 0x798(0x0c)
	float ReloadOffsetBlendCurveValue; // 0x7a4(0x04)
	struct FVector ReloadOffsetLFU; // 0x7a8(0x0c)
	char pad_7B4[0x4]; // 0x7b4(0x04)
	struct ABP_Ladder_C* CurrentLadder; // 0x7b8(0x08)
	struct TArray<struct FVector> HandLLadderPositions; // 0x7c0(0x10)
	float LeadingIsCrouchedMultiplier; // 0x7d0(0x04)
	float AimedLeadingRollActual; // 0x7d4(0x04)
	struct TArray<struct FWalksCurves1P_Struct> StepCurvesHipsL; // 0x7d8(0x10)
	struct TArray<float> StepRunnersL; // 0x7e8(0x10)
	struct TArray<struct FWalksCurves1P_Struct> StepCurvesHipsR; // 0x7f8(0x10)
	struct TArray<float> StepRunnersR; // 0x808(0x10)
	struct TArray<struct FWalksCurves1P_Struct> StepRunCurvesHipsL; // 0x818(0x10)
	struct TArray<float> StepRunRunnersL; // 0x828(0x10)
	struct TArray<struct FWalksCurves1P_Struct> StepRunCurvesHipsR; // 0x838(0x10)
	struct TArray<float> StepRunRunnersR; // 0x848(0x10)
	float HipsRunBlenderLinear; // 0x858(0x04)
	float HipsRunBlenderEased; // 0x85c(0x04)
	float ToRunTransitionBlender; // 0x860(0x04)
	char pad_864[0x4]; // 0x864(0x04)
	struct TArray<struct FWalksCurves1P_Struct> StepAimedWalkCurvesL; // 0x868(0x10)
	struct TArray<float> StepAimedWalkRunnersL; // 0x878(0x10)
	struct TArray<struct FWalksCurves1P_Struct> StepAimedWalkCurvesR; // 0x888(0x10)
	struct TArray<float> StepAimedWalkRunnersR; // 0x898(0x10)
	float HA_AimedRoll; // 0x8a8(0x04)
	float HA_Aimed_Depth; // 0x8ac(0x04)
	float HC_StaticRollInterpSpeed; // 0x8b0(0x04)
	bool HasMeleeWeaponInHand; // 0x8b4(0x01)
	bool IsHandItemVisible; // 0x8b5(0x01)
	char pad_8B6[0x2]; // 0x8b6(0x02)
	float HC_IsShootingThresholdTime; // 0x8b8(0x04)
	struct FVector HipsIdleTROffs; // 0x8bc(0x0c)
	struct FRotator HipsIdleROTOffs; // 0x8c8(0x0c)
	struct FVector IdleStepPosOffset; // 0x8d4(0x0c)
	struct FRotator IdleStepRotOffset; // 0x8e0(0x0c)
	float tmpIdleAimStep; // 0x8ec(0x04)
	struct FVector AimIntersection; // 0x8f0(0x0c)
	struct FVector IdleWhileAimingVector; // 0x8fc(0x0c)
	struct FRotator MovementWalkLeadingROT_ACTUAL; // 0x908(0x0c)
	struct FVector MovementWalkLeading_tmp; // 0x914(0x0c)
	struct FVector MovementStrafeLeading_tmp; // 0x920(0x0c)
	struct FRotator MovementStrafeLeadingROT_tmp; // 0x92c(0x0c)
	struct FRotator MovementWalkLeadingROT_tmp; // 0x938(0x0c)
	struct FVector LerpedRunSidewaysOffsetV; // 0x944(0x0c)
	struct FRotator LerpedRunSidewaysOffsetR; // 0x950(0x0c)
	float RunRollForAimpoint; // 0x95c(0x04)
	struct FVectorSpringState SS_HipsLeadingPos; // 0x960(0x18)
	struct FVectorSpringState SS_HipsLeadingRot; // 0x978(0x18)
	struct FVectorSpringState SS_WalkRot; // 0x990(0x18)
	struct FVectorSpringState SS_WalkPos; // 0x9a8(0x18)
	float HC_SpringDeltaThreshold; // 0x9c0(0x04)
	struct FRotator ToAimIKRot_Transition; // 0x9c4(0x0c)
	struct FVector MasterToAimPos; // 0x9d0(0x0c)
	struct FVector ToAimIKPos; // 0x9dc(0x0c)
	struct FVector SniperAimingMeshOffset; // 0x9e8(0x0c)
	struct FVector SniperAimingMeshOffset_cached; // 0x9f4(0x0c)
	float LerpedYawForSniMeshOffs; // 0xa00(0x04)
	float LerpedPitchForSniMeshOffs; // 0xa04(0x04)
	float Aimed_SpringEnabledFromCurve; // 0xa08(0x04)
	float EnterRightStrafeBlend; // 0xa0c(0x04)
	float EnterLeftStrafeBlend; // 0xa10(0x04)
	float EnterStrafeLeftTarget; // 0xa14(0x04)
	bool ShouldEnterAimedStrafeLeft; // 0xa18(0x01)
	bool ShouldEnterAimedStrafeRight; // 0xa19(0x01)
	char pad_A1A[0x6]; // 0xa1a(0x06)
	struct UCurveFloat* AimedStrafeForceAccent; // 0xa20(0x08)
	float StrafeRandRight; // 0xa28(0x04)
	float StrafeRandLeft; // 0xa2c(0x04)
	struct UADS_AAA_Base_C* ADSDataCurrent1PComp; // 0xa30(0x08)
	struct UADS_AimDataBase_C* ADS_AimDataCurrent1PComp; // 0xa38(0x08)
	struct UADS_LD_C* ADSLeadingDataRotation; // 0xa40(0x08)
	struct FVector ADS_MO_StrafeLeft; // 0xa48(0x0c)
	char pad_A54[0x4]; // 0xa54(0x04)
	struct UADS_MO_C* ADSLeadingDataMoving; // 0xa58(0x08)
	struct FVector ADS_MO_StrafeRight; // 0xa60(0x0c)
	struct FVector ADS_MO_Forward; // 0xa6c(0x0c)
	struct FVector ADS_MO_Backwards; // 0xa78(0x0c)
	struct FVector ADS_LD_Forward; // 0xa84(0x0c)
	struct FVector ADS_LD_Backwards; // 0xa90(0x0c)
	struct FVector ADS_LD_Left; // 0xa9c(0x0c)
	struct FVector ADS_LD_Right; // 0xaa8(0x0c)
	float ADS_MO_CrouchedMultiplier; // 0xab4(0x04)
	float ADS_LeadingPosTR_Speed; // 0xab8(0x04)
	float ADS_LeadingPosROT_Speed; // 0xabc(0x04)
	struct UADS_RecoilData_C* ADSRecoilData; // 0xac0(0x08)
	float AimedRecoilLengthMult; // 0xac8(0x04)
	float AimBlendMasterLinearCachedAtTime; // 0xacc(0x04)
	bool IsFullyAimedSway; // 0xad0(0x01)
	char pad_AD1[0x7]; // 0xad1(0x07)
	struct FTimerHandle FullyAimedSway_Handle; // 0xad8(0x08)
	float FullyAimedSwayLength; // 0xae0(0x04)
	float ShiftingAimpointForceY; // 0xae4(0x04)
	float ShiftingAimpointForceX; // 0xae8(0x04)
	float Spring_WeaponMass; // 0xaec(0x04)
	float SpringPOS_CriticalDampingFactor_FromDATA; // 0xaf0(0x04)
	float SpringPOS_Stiffness; // 0xaf4(0x04)
	float SpringROT_CriticalDampingFactor_FromDATA; // 0xaf8(0x04)
	float SpringROT_Stiffness; // 0xafc(0x04)
	float FullyAimedThreshold; // 0xb00(0x04)
	char pad_B04[0x4]; // 0xb04(0x04)
	struct UADS_PhysicsData_C* ADSPhysicsData; // 0xb08(0x08)
	float CharacterMappedVelocityZ; // 0xb10(0x04)
	float FpsIndependentPitch; // 0xb14(0x04)
	float FpsIndependentYaw; // 0xb18(0x04)
	float ADS_SniperMeshDelayPitch; // 0xb1c(0x04)
	float ADS_SniperMeshDelayYaw; // 0xb20(0x04)
	float ADS_SniperMeshDelaySpeed; // 0xb24(0x04)
	float FullyAimedSwayRunner; // 0xb28(0x04)
	struct FVector FullyAimedSwayValues; // 0xb2c(0x0c)
	float AimedStrafeSwayRunnerL; // 0xb38(0x04)
	struct FVector AimedStrafeSwayValues; // 0xb3c(0x0c)
	struct FVector AimedStrafeSwayValuesL; // 0xb48(0x0c)
	float AimedStrafeSwayRunnerR; // 0xb54(0x04)
	struct FVector AimedStrafeSwayValuesR; // 0xb58(0x0c)
	char pad_B64[0x4]; // 0xb64(0x04)
	struct UADS_VDL_C* ADS_VaultDropLandingData; // 0xb68(0x08)
	struct FVector VaultPosHips; // 0xb70(0x0c)
	struct FVector VaultRotAimed; // 0xb7c(0x0c)
	struct FVector VaultPosAimed; // 0xb88(0x0c)
	struct FRotator VaultRotHips; // 0xb94(0x0c)
	float CharacterVelocityVectorLen; // 0xba0(0x04)
	float AimedRotRL; // 0xba4(0x04)
	float AimedRollRL; // 0xba8(0x04)
	float AimedRotDU; // 0xbac(0x04)
	float AimedDepth; // 0xbb0(0x04)
	char pad_BB4[0x4]; // 0xbb4(0x04)
	struct UADS_OffsetData_C* ADS_OffsetDataCurrent; // 0xbb8(0x08)
	float Shader1P_Hips; // 0xbc0(0x04)
	float Shader1P_AimedIro; // 0xbc4(0x04)
	float Shader1P_AimedNorm; // 0xbc8(0x04)
	float Shader1P_AimedSni; // 0xbcc(0x04)
	float GenericOffInterpSpeed; // 0xbd0(0x04)
	bool SpringDisabled; // 0xbd4(0x01)
	char pad_BD5[0x3]; // 0xbd5(0x03)
	float SpringLerpRunnerTime; // 0xbd8(0x04)
	float Critical Damping Factor POS ACTUAL; // 0xbdc(0x04)
	float Critical Damping Factor ROT ACTUAL; // 0xbe0(0x04)
	float SpringLerpPOS_RunnerTarget; // 0xbe4(0x04)
	float SpringLerp_RunnerTarget; // 0xbe8(0x04)
	float SpringBlend; // 0xbec(0x04)
	struct FVector HipsLeanOffsetPOS; // 0xbf0(0x0c)
	char pad_BFC[0x4]; // 0xbfc(0x04)
	struct UCurveFloat* C_Lean_MultPOS; // 0xc00(0x08)
	float LEAN_RatioAnim; // 0xc08(0x04)
	float SAP_AimedFallingForceY; // 0xc0c(0x04)
	float SAP_AimedFallingForceX; // 0xc10(0x04)
	float AP_AimedFalling; // 0xc14(0x04)
	bool IsInEquipProcess; // 0xc18(0x01)
	char pad_C19[0x3]; // 0xc19(0x03)
	float LandingTime; // 0xc1c(0x04)
	float CalculatedDropTime; // 0xc20(0x04)
	float SAP_AIM_LandingRotForceY; // 0xc24(0x04)
	float AP_AimedLandingUD; // 0xc28(0x04)
	float AP_AimedLandingROLL; // 0xc2c(0x04)
	struct UHeldItemData_MeleeAxe_C* HeldItemDataMeleeCurrent; // 0xc30(0x08)
	struct FVector HI_Offset_FromData; // 0xc38(0x0c)
	struct FVector MeleePosOffset; // 0xc44(0x0c)
	struct FVector HandRPoleLocationFromCurve; // 0xc50(0x0c)
	struct FVector HandLPoleLocationFromCurve; // 0xc5c(0x0c)
	struct FVector IKHandGun_LocationFromCurves; // 0xc68(0x0c)
	struct FVector Melee_MASTER_IkPos; // 0xc74(0x0c)
	struct UHeldItemData_Base_C* MeleeDataClassCurrent; // 0xc80(0x08)
	struct UADS_ARLData_C* ADS_AimedReloadData; // 0xc88(0x08)
	struct FVector ARL_Position_Final; // 0xc90(0x0c)
	struct FRotator ARL_Rotation_Final; // 0xc9c(0x0c)
	struct FVector IdleActionPosition; // 0xca8(0x0c)
	struct FRotator IdleActionRotation; // 0xcb4(0x0c)
	float HipsLeadingRollAngle; // 0xcc0(0x04)
	float HipsLeadingTranslateDepth; // 0xcc4(0x04)
	struct UAnimMontage* InspectWeaponMontage; // 0xcc8(0x08)
	struct FVector HA1P_UD; // 0xcd0(0x0c)
	bool IsHeldItemActive1PComp; // 0xcdc(0x01)
	char pad_CDD[0x3]; // 0xcdd(0x03)
	struct FVector HeldItemOffset_Usable; // 0xce0(0x0c)
	struct FVector hugels; // 0xcec(0x0c)
	bool LockAimPointReticuleToAimRoot; // 0xcf8(0x01)
	bool IsInAimedLanding; // 0xcf9(0x01)
	char pad_CFA[0x2]; // 0xcfa(0x02)
	float AimedIdleSwayX; // 0xcfc(0x04)
	float AimedIdleSwayY; // 0xd00(0x04)
	bool CanIdleActions; // 0xd04(0x01)
	char pad_D05[0x3]; // 0xd05(0x03)
	struct FTimerHandle CanDoIdleActionsTimerHandle; // 0xd08(0x08)
	struct FVector MeshOffsTmp; // 0xd10(0x0c)
	float IsInRecoilBlend; // 0xd1c(0x04)
	float IsInRecoilBlendTmp; // 0xd20(0x04)
	struct FVector LeanNerfSpring; // 0xd24(0x0c)
	struct UCurveFloat* C_LeanNerfSpring; // 0xd30(0x08)
	struct FVector LeanNerfMeshOffs; // 0xd38(0x0c)
	float LeanNerfRandomFloatX; // 0xd44(0x04)
	float LeanNerfRandomFloatY; // 0xd48(0x04)

	void GetLeadingData(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.GetLeadingData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IdleMovement(float Position_Forza, float Position_Freq, float Rotation_Forza, float Rotation_Freq, float GlobalScalePosition, float GlobalScaleRotation); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.IdleMovement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetAimedReloadCurveValues(struct UCurveVector* CV_Pos, struct UCurveVector* CV_Rot, float InTime, struct UCurveFloat* C_Mult, float Multiplier_Pos, float Multiplier_Rot, struct FVector OutPos, struct FRotator OutRot); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.GetAimedReloadCurveValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHipsLeaningOffsets(float Interp Speed, struct FVector InVec, bool ZeroOut); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.SetHipsLeaningOffsets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetOffsetsData(bool Tick New Offset Data, struct FVector PositionOffsets, float AimedDepthOffset, float RollHips, float RollCrouched, struct UCurveVector* Large Scope Offset Curve, bool Print Scope Bounds); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.GetOffsetsData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShouldDoRunStuff(bool Yes); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ShouldDoRunStuff // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	bool ShouldHipsWalkForPositionals(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ShouldHipsWalkForPositionals // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	bool ShouldRun(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ShouldRun // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FVector HW_VectorSpringInterp(struct FVector Current, struct FVector Target, struct FVectorSpringState SpringState, float Stiffness, float CriticalDampingFactor, float Mass); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.HW_VectorSpringInterp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	bool ShouldHipsWalk(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ShouldHipsWalk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FRotator HW_RotatorSpringInterp(struct FRotator Current, struct FRotator Target, struct FVectorSpringState SpringState, float Stiffness, float CriticalDampingFactor, float Mass); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.HW_RotatorSpringInterp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	bool IsShootingOrAiming(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.IsShootingOrAiming // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FRotator ZeroRotatorIfShootingAimingRun(struct FRotator V); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZeroRotatorIfShootingAimingRun // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FVector ZeroVectorIfShootingAimingRun(struct FVector V); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZeroVectorIfShootingAimingRun // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetShakes(struct UMatineeCameraShake* WalkStepL, struct UMatineeCameraShake* WalkStepR, struct UMatineeCameraShake* Per Shot Hips, struct UMatineeCameraShake* Per Shot Aimed, struct UMatineeCameraShake* Run Step L, struct UMatineeCameraShake* Run Step R); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.GetShakes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetPositionalDirectionLeans(struct FVector Location, struct FRotator Rotation, bool  Strafe); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.SetPositionalDirectionLeans // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	float IdleStepsGenerator(float Freq, float Forza, float ReturnValue2, float ReturnValue3); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.IdleStepsGenerator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	float GetSecondsWithSeed(float Seed); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.GetSecondsWithSeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	bool CurrentWeaponIsMeleeOrInvalid(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.CurrentWeaponIsMeleeOrInvalid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void AddAimedWalkStepCurveR(struct FWalksCurves1P_Struct Curves); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.AddAimedWalkStepCurveR // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddAimedWalkStepCurveL(struct FWalksCurves1P_Struct Curves); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.AddAimedWalkStepCurveL // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddRunStepCurveR(struct FWalksCurves1P_Struct Curves); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.AddRunStepCurveR // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddRunStepCurveL(struct FWalksCurves1P_Struct Curves); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.AddRunStepCurveL // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	float HW_GetWalkDirectionalMultiplier(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.HW_GetWalkDirectionalMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void AddStepCurveR(struct FWalksCurves1P_Struct Curves); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.AddStepCurveR // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddStepCurveL(struct FWalksCurves1P_Struct Curves); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.AddStepCurveL // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_NewWalkCurveCalculations(struct TArray<struct FWalksCurves1P_Struct> Curves, struct TArray<float> Runners, float SpeedMultiplier, struct FVector BaseCurveMultiplier, struct FVector BigSwayMultiplier, struct FVector RotationMultiplier, struct FTransform OutPosition); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.HW_NewWalkCurveCalculations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_GetLeftHandIKAttachmentTR(struct FName InSocketName); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.HW_GetLeftHandIKAttachmentTR // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_SingleStep(struct FWalksCurves1P_Struct Curves, float InTime, struct FVector PosMult, struct FVector RotMult, bool IsLeft, struct FVector StepPosOut, struct FRotator StepRotOut); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.HW_SingleStep // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_FinterpConstantByBool(float TickerVar, float TrueTime, float FalseTime, bool Direction, bool DeBugs); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.HW_FinterpConstantByBool // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCharacterMappedVelocity(float InRangeMax, float Mapped); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.GetCharacterMappedVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCharacterVelocityVectorLen(float VelocityLength); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.GetCharacterVelocityVectorLen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CalculateStepAnimations(bool IsLeft, bool StepTickerA, bool StepTickerB, float StepTime, struct FVector PositionMultiplier, struct FVector RotationMultiplier, struct FWalksCurves1P_Struct WalksCurves, float WalksRunnerA, float WalksRunnerB, enum class EEasingFunc Function, float BlendExp, struct FVector StepOutPosA, struct FRotator StepOutRotA, struct FVector StepOutPosB, struct FRotator StepOutRotB); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.CalculateStepAnimations // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetFpsIndependentDeltaRotationVelocity(float Pitch, float Yaw); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.GetFpsIndependentDeltaRotationVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void RecoilCalculations(float AimedRecoilRoll, struct FVector RecoilPosOffset, struct FRotator RecoilRotOffset); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.RecoilCalculations // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCameraHeight(struct FVector OutVector, float Z); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.GetCameraHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCam_CS(struct FVector ComponentTransform_Location); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.GetCam_CS // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get_HandLPole_Curves(bool DeBugs, struct FVector Location_CS); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.Get_HandLPole_Curves // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get_HandRPole_Curves(bool DeBugs, struct FVector Location_CS); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.Get_HandRPole_Curves // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get_Spine02_Curves(struct FVector Location_CS); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.Get_Spine02_Curves // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get_IkHandGun_Curves(struct FVector Location_CS); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.Get_IkHandGun_Curves // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnNotifyEnd_82CE8DD64789B3EE4C1B44B0CEA605E1(struct FName NotifyName); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.OnNotifyEnd_82CE8DD64789B3EE4C1B44B0CEA605E1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnNotifyBegin_82CE8DD64789B3EE4C1B44B0CEA605E1(struct FName NotifyName); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.OnNotifyBegin_82CE8DD64789B3EE4C1B44B0CEA605E1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnInterrupted_82CE8DD64789B3EE4C1B44B0CEA605E1(struct FName NotifyName); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.OnInterrupted_82CE8DD64789B3EE4C1B44B0CEA605E1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnBlendOut_82CE8DD64789B3EE4C1B44B0CEA605E1(struct FName NotifyName); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.OnBlendOut_82CE8DD64789B3EE4C1B44B0CEA605E1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCompleted_82CE8DD64789B3EE4C1B44B0CEA605E1(struct FName NotifyName); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.OnCompleted_82CE8DD64789B3EE4C1B44B0CEA605E1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_HipsIdle_Event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_HipsIdle_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_AimIdle(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_AimIdle // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_HipsVault_Event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_HipsVault_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_AimVault_Event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_AimVault_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_HipsWalk_Event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_HipsWalk_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_AimWalk_Event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_AimWalk_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_HipsLeading(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_HipsLeading // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_AimLeading(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_AimLeading // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_HipsCrouch(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_HipsCrouch // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_AimCrouch(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_AimCrouch // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_LeanAimed(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_LeanAimed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_LeanHips(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_LeanHips // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_ALL_Event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_ALL_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_Running(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_Running // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_AIMLanding(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_AIMLanding // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_HIPSLanding(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_HIPSLanding // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO HipsFalling(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO HipsFalling // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_AimFalling(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_AimFalling // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZO_IdleActions_Event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ZO_IdleActions_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CanIdleActions_Event(bool CanIdleActions); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.CanIdleActions_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpringControl_Event(bool SetEnabled, float InTime); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.SpringControl_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LandingEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.LandingEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StartFallingEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.StartFallingEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void InitADS_event(struct AHWWeapon* CurrentWeapon); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.InitADS_event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UnEquipMelee0(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.UnEquipMelee0 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EquipMelee0(struct UHeldItemData_Base_C* HeldItemData); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EquipMelee0 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ItemUnequipped_Event_1(struct UHWHeldItemDataObject* DataObject); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ItemUnequipped_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ItemEquipped_Event_1(struct UHWHeldItemDataObject* DataObject); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ItemEquipped_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ItemCleared_Event_1(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ItemCleared_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandItemVisibilityChangedEvent(bool NewVisibility); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.HandItemVisibilityChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadBeginEventTransition(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ReloadBeginEventTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadEndEventTransition(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ReloadEndEventTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitMovementState0(enum class EHW_1P_AnimationStates ExitState); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ExitMovementState0 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderJumpOff_1(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.LadderJumpOff_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderExit_1(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.LadderExit_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EntryLadder_1(struct ABP_Ladder_C* CurrentLadder); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EntryLadder_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderIntermediate(struct FVector ClosestLadderPointPosWS, struct FVector OtherLadderPointPosWS, float DistanceBetweenLadderPoints, struct FRotator LadderPointsRotationWS, float PlayerZOmLadderGrid); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.LadderIntermediate // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterMovementState0(enum class EHW_1P_AnimationStates EnterState); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EnterMovementState0 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TR_EnterStrafeRight(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.TR_EnterStrafeRight // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TR_EnterStrafeLeft(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.TR_EnterStrafeLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TR_EnterStrafeStop(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.TR_EnterStrafeStop // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TR_EnterStop(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.TR_EnterStop // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TR_EnterBackWards(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.TR_EnterBackWards // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TR_EnterForward(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.TR_EnterForward // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepRunEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.StepRunEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepLRunEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.StepLRunEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepREvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.StepREvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepLEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.StepLEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponFired(struct AHWWeapon* Weapon); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.WeaponFired // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InspectWeapon_Dispatch_Event_1(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.InspectWeapon_Dispatch_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DisableMelee(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.DisableMelee // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitMelee(struct UHeldItemData_Base_C* BaseClass); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.InitMelee // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UnEquipStart0(struct AHWWeapon* Weapon); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.UnEquipStart0 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponEquipFinished(struct AHWWeapon* Weapon); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.WeaponEquipFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Bind(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.Bind // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Unbind(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.Unbind // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Bind&Refresh(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.Bind&Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponUnequipped0(struct AHWWeapon* Weapon); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.WeaponUnequipped0 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponEquipped(struct AHWWeapon* Weapon); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.WeaponEquipped // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CanIdleActionsTimed_Event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.CanIdleActionsTimed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ADS_DispatchCaller(struct FVector IKHandGun_Location, struct FVector IKHandRoot_Location, struct FVector Spine02_Location, struct FVector IkHandLJointTarget_Location, struct FVector IkHandRJointTarget_Location, struct FRotator WristRotator, struct FVector IkHandLOffset_Location, struct FRotator IkHandLOffset_Rotation); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ADS_DispatchCaller // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ADSIsInit(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ADSIsInit // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadEndEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ReloadEndEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadBegin(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ReloadBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EquipHeldItem_Event(struct UHWHeldItemDataObject* HeldItemClass); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EquipHeldItem_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitRunEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ExitRunEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterRunEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EnterRunEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepLRunMultiEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.StepLRunMultiEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepRRunMultiEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.StepRRunMultiEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitWalk(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ExitWalk // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterWalk(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EnterWalk // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetLandingTickEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ResetLandingTickEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepRMultiEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.StepRMultiEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepLMultiEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.StepLMultiEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EndEnterStrafeLeft_event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EndEnterStrafeLeft_event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EndEnterStrafeRight_event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EndEnterStrafeRight_event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterStrafeSTOP_event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EnterStrafeSTOP_event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterStrafeLEFT_event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EnterStrafeLEFT_event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterStrafeRIGHT_event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EnterStrafeRIGHT_event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterSTOP_event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EnterSTOP_event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterBACK_event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EnterBACK_event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterFWD_event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EnterFWD_event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RecoilOverEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.RecoilOverEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponFiredEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.WeaponFiredEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TimedFullyAimedSway_Event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.TimedFullyAimedSway_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitFullyAimed_Event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ExitFullyAimed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterFullyAimed_Event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.EnterFullyAimed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DelayedEndAimEvent(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.DelayedEndAimEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnEndAim(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.OnEndAim // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnBeginAim_event(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.OnBeginAim_event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClimbingExit(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ClimbingExit // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClimbingEntry(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ClimbingEntry // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderJumpOff(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.LadderJumpOff // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderExit(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.LadderExit // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderEntryInLadders(struct ABP_Ladder_C* CurrentLadder); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.LadderEntryInLadders // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderPointsEvent(struct FVector ClosestLadderPointPosWS, struct FVector OtherLadderPointPosWS, float DistanceBetweenLadderPoints, struct FRotator LadderPointsRotWS, float DistanceToLastHandle); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.LadderPointsEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_1P_AnimationComponent(int32_t EntryPoint); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.ExecuteUbergraph_BP_1P_AnimationComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void SetADSIsInitDispatch__DelegateSignature(); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.SetADSIsInitDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetADSDataDispatch__DelegateSignature(struct FVector IKHandGun_Location, struct FVector IKHandRoot_Location, struct FVector Spine02_Location, struct FVector IkHandLJointTarget_Location, struct FVector IkHandRJointTarget_Location, struct FRotator WristRotator, struct FVector IkHandLOffset_Location, struct FRotator IkHandLOffset_Rotation); // Function BP_1P_AnimationComponent.BP_1P_AnimationComponent_C.SetADSDataDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

