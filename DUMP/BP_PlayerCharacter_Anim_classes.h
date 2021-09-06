// BlueprintGeneratedClass BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C
// Size: 0x26e5 (Inherited: 0x1b79)
struct ABP_PlayerCharacter_Anim_C : ABP_PlayerCharacter_C {
	char pad_1B79[0x7]; // 0x1b79(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b80(0x08)
	struct USceneComponent* IkR_Pole; // 0x1b88(0x08)
	struct USceneComponent* HipsR_Helper; // 0x1b90(0x08)
	struct UBP_1P_AnimationComponent_C* BP_1P_AnimationComponent; // 0x1b98(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x1ba0(0x08)
	struct UBP_AudioComponent_C* BP_AudioComponent; // 0x1ba8(0x08)
	struct USceneComponent* IK3P_PoleLHelper; // 0x1bb0(0x08)
	struct USceneComponent* IK3P_PoleLRotHelper; // 0x1bb8(0x08)
	struct USceneComponent* IK3P_PoleRHelper; // 0x1bc0(0x08)
	struct USceneComponent* IK3P_PoleRRotHelper; // 0x1bc8(0x08)
	struct USceneComponent* IK3P_IKTargetHelper; // 0x1bd0(0x08)
	struct USceneComponent* IK3P_RootRotHelper; // 0x1bd8(0x08)
	struct USceneComponent* IK3P_RootPosHelper; // 0x1be0(0x08)
	struct UArrowComponent* LadderArrowHelper_Other; // 0x1be8(0x08)
	struct UArrowComponent* LadderArrowHelper_Closest; // 0x1bf0(0x08)
	struct USceneComponent* RL_IK3P_RightArmPolePoint; // 0x1bf8(0x08)
	struct USceneComponent* RL_IK3P_RightArmPole; // 0x1c00(0x08)
	struct USceneComponent* RL_IK3P_LeftArmPolePoint; // 0x1c08(0x08)
	struct USceneComponent* RL_IK3P_LeftArmPole; // 0x1c10(0x08)
	struct UBP_3P_AnimationComponent_C* BP_3P_AnimationComponent; // 0x1c18(0x08)
	float TL_StartRun_Runner_2736F4DE412C2CDA387F6F96A84BC6C9; // 0x1c20(0x04)
	enum class ETimelineDirection TL_StartRun__Direction_2736F4DE412C2CDA387F6F96A84BC6C9; // 0x1c24(0x01)
	char pad_1C25[0x3]; // 0x1c25(0x03)
	struct UTimelineComponent* TL_StartRun; // 0x1c28(0x08)
	float TL_StartRunTransition_TL_ToRunTransition_MASTER_93A6BA43455321172F4B078F3A1B2809; // 0x1c30(0x04)
	enum class ETimelineDirection TL_StartRunTransition__Direction_93A6BA43455321172F4B078F3A1B2809; // 0x1c34(0x01)
	char pad_1C35[0x3]; // 0x1c35(0x03)
	struct UTimelineComponent* TL_StartRunTransition; // 0x1c38(0x08)
	float TL_3P_UnEquip_TL_UnEquip_MASTER_9A2606D54E0778C30CFCD3A34D86858E; // 0x1c40(0x04)
	enum class ETimelineDirection TL_3P_UnEquip__Direction_9A2606D54E0778C30CFCD3A34D86858E; // 0x1c44(0x01)
	char pad_1C45[0x3]; // 0x1c45(0x03)
	struct UTimelineComponent* TL_3P_UnEquip; // 0x1c48(0x08)
	float TL_3P_Equip_TL_3PEquipMASTER_634A07AD4A813BB3246E63B2A18267BC; // 0x1c50(0x04)
	enum class ETimelineDirection TL_3P_Equip__Direction_634A07AD4A813BB3246E63B2A18267BC; // 0x1c54(0x01)
	char pad_1C55[0x3]; // 0x1c55(0x03)
	struct UTimelineComponent* TL_3P_Equip; // 0x1c58(0x08)
	float TL_Recoil3PMASTER_TL_Recoil3P_MASTER_C1338B044177A572925A3D9FD939CDE7; // 0x1c60(0x04)
	enum class ETimelineDirection TL_Recoil3PMASTER__Direction_C1338B044177A572925A3D9FD939CDE7; // 0x1c64(0x01)
	char pad_1C65[0x3]; // 0x1c65(0x03)
	struct UTimelineComponent* TL_Recoil3PMASTER; // 0x1c68(0x08)
	float TL_EnterWalking_TL_EnterWalkMASTER_0446211340F6ECAAB3CCDF9E0A6C6895; // 0x1c70(0x04)
	enum class ETimelineDirection TL_EnterWalking__Direction_0446211340F6ECAAB3CCDF9E0A6C6895; // 0x1c74(0x01)
	char pad_1C75[0x3]; // 0x1c75(0x03)
	struct UTimelineComponent* TL_EnterWalking; // 0x1c78(0x08)
	float TL_IdleActionPlayer_TL_IsleActionMASTER_F4E100B84BC840E6306B74B25BAAE679; // 0x1c80(0x04)
	enum class ETimelineDirection TL_IdleActionPlayer__Direction_F4E100B84BC840E6306B74B25BAAE679; // 0x1c84(0x01)
	char pad_1C85[0x3]; // 0x1c85(0x03)
	struct UTimelineComponent* TL_IdleActionPlayer; // 0x1c88(0x08)
	float TL_AttachMag_TL_AttachMag_MASTER_7F5872604667B3E4623AC2813A50627B; // 0x1c90(0x04)
	enum class ETimelineDirection TL_AttachMag__Direction_7F5872604667B3E4623AC2813A50627B; // 0x1c94(0x01)
	char pad_1C95[0x3]; // 0x1c95(0x03)
	struct UTimelineComponent* TL_AttachMag; // 0x1c98(0x08)
	float TL_ARL_GrabNewMag_TL_GrabNewMag_MASTER_D203EC9F4DBE7A0EDED784999F70D96C; // 0x1ca0(0x04)
	enum class ETimelineDirection TL_ARL_GrabNewMag__Direction_D203EC9F4DBE7A0EDED784999F70D96C; // 0x1ca4(0x01)
	char pad_1CA5[0x3]; // 0x1ca5(0x03)
	struct UTimelineComponent* TL_ARL_GrabNewMag; // 0x1ca8(0x08)
	float TL_ARL_ReleaseHand_TL_ReleaseHand_MASTER_5CA4EFC24CD620AD0CD469BFFBEC0201; // 0x1cb0(0x04)
	enum class ETimelineDirection TL_ARL_ReleaseHand__Direction_5CA4EFC24CD620AD0CD469BFFBEC0201; // 0x1cb4(0x01)
	char pad_1CB5[0x3]; // 0x1cb5(0x03)
	struct UTimelineComponent* TL_ARL_ReleaseHand; // 0x1cb8(0x08)
	float TL_ARL_MagRelease_TL_MagRelease_Master_036E7AAF4909621A53089A85FA62BDF5; // 0x1cc0(0x04)
	enum class ETimelineDirection TL_ARL_MagRelease__Direction_036E7AAF4909621A53089A85FA62BDF5; // 0x1cc4(0x01)
	char pad_1CC5[0x3]; // 0x1cc5(0x03)
	struct UTimelineComponent* TL_ARL_MagRelease; // 0x1cc8(0x08)
	float TL_Landing_TL_LandingMaster_8B025C554DA233B6F0D24BB969BF0524; // 0x1cd0(0x04)
	enum class ETimelineDirection TL_Landing__Direction_8B025C554DA233B6F0D24BB969BF0524; // 0x1cd4(0x01)
	char pad_1CD5[0x3]; // 0x1cd5(0x03)
	struct UTimelineComponent* TL_Landing; // 0x1cd8(0x08)
	float MantleTimeline_BlendIn_307CB6F84E26ADE31A4CA5AC9248EEB0; // 0x1ce0(0x04)
	enum class ETimelineDirection MantleTimeline__Direction_307CB6F84E26ADE31A4CA5AC9248EEB0; // 0x1ce4(0x01)
	char pad_1CE5[0x3]; // 0x1ce5(0x03)
	struct UTimelineComponent* MantleTimeline; // 0x1ce8(0x08)
	enum class ALS_MovementState MovementState; // 0x1cf0(0x01)
	enum class ALS_MovementState PrevMovementState; // 0x1cf1(0x01)
	enum class ALS_RotationMode DesiredRotationMode; // 0x1cf2(0x01)
	enum class ALS_MovementAction MovementAction; // 0x1cf3(0x01)
	enum class ALS_RotationMode RotationMode; // 0x1cf4(0x01)
	enum class ALS_Gait DesiredGait; // 0x1cf5(0x01)
	enum class ALS_Gait Gait; // 0x1cf6(0x01)
	enum class ALS_Stance Stance; // 0x1cf7(0x01)
	enum class ALS_ViewMode ViewMode; // 0x1cf8(0x01)
	char pad_1CF9[0x3]; // 0x1cf9(0x03)
	struct FVector PreviousVelocity; // 0x1cfc(0x0c)
	struct FVector Acceleration_1; // 0x1d08(0x0c)
	bool IsMoving_ALS; // 0x1d14(0x01)
	bool HasMovementInput; // 0x1d15(0x01)
	char pad_1D16[0x2]; // 0x1d16(0x02)
	struct FRotator LastVelocityRotation; // 0x1d18(0x0c)
	struct FRotator LastMovementInputRotation; // 0x1d24(0x0c)
	float Speed; // 0x1d30(0x04)
	float MovementInputAmount; // 0x1d34(0x04)
	float PreviousAimYaw; // 0x1d38(0x04)
	struct FRotator TargetRotation; // 0x1d3c(0x0c)
	struct FRotator InAirRotation; // 0x1d48(0x0c)
	float YawOffset; // 0x1d54(0x04)
	struct FDataTableRowHandle MovementModel; // 0x1d58(0x10)
	struct FMovementSettings_State MovementData; // 0x1d68(0xc0)
	struct FMovementSettings CurrentMovementSettings; // 0x1e28(0x20)
	struct FMantle_Params MantleParams; // 0x1e48(0x28)
	struct FALS_ComponentAndTransform MantleLedgeLS; // 0x1e70(0x40)
	struct FTransform MantleTarget; // 0x1eb0(0x30)
	struct FTransform MantleActualStartOffset; // 0x1ee0(0x30)
	struct FTransform MantleAnimatedStartOffset; // 0x1f10(0x30)
	struct FMantle_TraceSettings GroundedTraceSettings; // 0x1f40(0x14)
	struct FMantle_TraceSettings AutomaticTraceSettings; // 0x1f54(0x14)
	struct FMantle_TraceSettings FallingTraceSettings; // 0x1f68(0x14)
	enum class ALS_Stance DesiredStance; // 0x1f7c(0x01)
	char pad_1F7D[0x3]; // 0x1f7d(0x03)
	float DownRate; // 0x1f80(0x04)
	float LookLeftRightRate; // 0x1f84(0x04)
	float AimYawRate; // 0x1f88(0x04)
	enum class ALS_OverlayState OverlayState; // 0x1f8c(0x01)
	char pad_1F8D[0x3]; // 0x1f8d(0x03)
	int32_t TimesPressedStance; // 0x1f90(0x04)
	bool BreakFall; // 0x1f94(0x01)
	bool SprintHeld; // 0x1f95(0x01)
	char pad_1F96[0x2]; // 0x1f96(0x02)
	struct UAnimInstance* ABP_3P; // 0x1f98(0x08)
	bool RagdollOnGround; // 0x1fa0(0x01)
	bool RagdollFaceUp; // 0x1fa1(0x01)
	char pad_1FA2[0x2]; // 0x1fa2(0x02)
	struct FVector LastRagdollVelocity; // 0x1fa4(0x0c)
	float ThirdPersonFOV; // 0x1fb0(0x04)
	float FirstPersonFOV; // 0x1fb4(0x04)
	bool RightShoulder; // 0x1fb8(0x01)
	char pad_1FB9[0x3]; // 0x1fb9(0x03)
	struct FRotator HW_ControlRotation; // 0x1fbc(0x0c)
	bool HW_IsAiming; // 0x1fc8(0x01)
	bool HW_UseVaultMontage; // 0x1fc9(0x01)
	enum class EHW_Anim_LeaningState AnimLeaningState; // 0x1fca(0x01)
	char pad_1FCB[0x1]; // 0x1fcb(0x01)
	struct FVector2D HW_ControlRotAuth; // 0x1fcc(0x08)
	bool HC_DrawALSDebugShapes; // 0x1fd4(0x01)
	char pad_1FD5[0x3]; // 0x1fd5(0x03)
	struct TArray<struct FString> CodePathDiag; // 0x1fd8(0x10)
	float HC_CameraHeight; // 0x1fe8(0x04)
	enum class EHW_1P_AnimationStates MovementState1P; // 0x1fec(0x01)
	char pad_1FED[0x3]; // 0x1fed(0x03)
	float CrouchCurveRunner; // 0x1ff0(0x04)
	char pad_1FF4[0xc]; // 0x1ff4(0x0c)
	struct FTransform CurrentCameraTransform; // 0x2000(0x30)
	struct FVector Mesh1PM_PositionOffset; // 0x2030(0x0c)
	struct FVector Mesh1PM_RotationMultiplier; // 0x203c(0x0c)
	struct FVector Mesh1PM_RotationOffset; // 0x2048(0x0c)
	struct FVector Mesh1PM_PositionMultiplier; // 0x2054(0x0c)
	struct FRotator CachedControlRotation; // 0x2060(0x0c)
	struct FRotator ControlRotationDirection; // 0x206c(0x0c)
	enum class EHW_WalkDirection HW_WalkDirection; // 0x2078(0x01)
	enum class EHW_StrafeDirection HW_StrafeDirection; // 0x2079(0x01)
	enum class EHW_LookDirectionHorizontal HW_LookDirectionHorizontal; // 0x207a(0x01)
	enum class EHW_LookDirectionVertical HW_LookDirectionVertical; // 0x207b(0x01)
	float _roundedRX; // 0x207c(0x04)
	float _roundedRY; // 0x2080(0x04)
	float _roundedRZ; // 0x2084(0x04)
	struct FName CurrentReceiverName; // 0x2088(0x08)
	float SmoothedCameraZ; // 0x2090(0x04)
	struct FVector ReloadCameraShakeMultiplier; // 0x2094(0x0c)
	bool ForceReloadFillerPose; // 0x20a0(0x01)
	bool UseOffscreenFillerPose; // 0x20a1(0x01)
	char pad_20A2[0x2]; // 0x20a2(0x02)
	float MoveForwardValue; // 0x20a4(0x04)
	float MoveRightValue; // 0x20a8(0x04)
	bool HW_IsInLadders; // 0x20ac(0x01)
	enum class EHW_WalkDirection HW_WalkDirectionPrevious; // 0x20ad(0x01)
	enum class EHW_StrafeDirection HW_StrafeDirectionPrevious; // 0x20ae(0x01)
	char pad_20AF[0x1]; // 0x20af(0x01)
	struct FMulticastInlineDelegate EnterMovementForwardDispatch; // 0x20b0(0x10)
	struct FMulticastInlineDelegate EnterMovementBackwardsDispatch; // 0x20c0(0x10)
	struct FMulticastInlineDelegate EnterMovementStopDispatch; // 0x20d0(0x10)
	struct FMulticastInlineDelegate EnterStrafeLeftDispatch; // 0x20e0(0x10)
	struct FMulticastInlineDelegate EnterStrafeRightDispatch; // 0x20f0(0x10)
	struct FMulticastInlineDelegate EnterStrafeStopDispatch; // 0x2100(0x10)
	struct AHWWeapon* CurrentWeapon; // 0x2110(0x08)
	bool IsKeyUPressed; // 0x2118(0x01)
	char pad_2119[0x7]; // 0x2119(0x07)
	struct FTimerHandle NadeTimerHandle; // 0x2120(0x08)
	struct FTimerHandle NadeCookHandle; // 0x2128(0x08)
	struct FTimerHandle NadeCookTimerHandle; // 0x2130(0x08)
	struct FMulticastInlineDelegate NadeIsCookingEventDispatch; // 0x2138(0x10)
	struct FMulticastInlineDelegate NadeIsThrowEventDispatch; // 0x2148(0x10)
	struct FMulticastInlineDelegate NadeIsFailEventDispatch; // 0x2158(0x10)
	struct FMulticastInlineDelegate NadeIsCancelEventDispatch; // 0x2168(0x10)
	bool IsGrenadeInAction; // 0x2178(0x01)
	char pad_2179[0x7]; // 0x2179(0x07)
	struct FTimerHandle NadeCooldownTimerHandle; // 0x2180(0x08)
	bool IsCookable; // 0x2188(0x01)
	char pad_2189[0x7]; // 0x2189(0x07)
	struct FMulticastInlineDelegate LoadNadeDispatch; // 0x2190(0x10)
	struct FTimerHandle NewVar_0_1; // 0x21a0(0x08)
	struct FMulticastInlineDelegate StepLEventDispatch; // 0x21a8(0x10)
	struct FMulticastInlineDelegate StepREventDispatch; // 0x21b8(0x10)
	float HC_AnimatedRunSpeed3P; // 0x21c8(0x04)
	char pad_21CC[0x4]; // 0x21cc(0x04)
	struct FMulticastInlineDelegate EnterFallingDispatch; // 0x21d0(0x10)
	struct FMulticastInlineDelegate ExitFallingDispatch; // 0x21e0(0x10)
	bool HW_IsWalking; // 0x21f0(0x01)
	bool HW_IsWalkingPrevious; // 0x21f1(0x01)
	char pad_21F2[0x6]; // 0x21f2(0x06)
	struct FMulticastInlineDelegate EnterWalkingDispatch; // 0x21f8(0x10)
	struct FMulticastInlineDelegate ExitWalkingDispatch; // 0x2208(0x10)
	struct FMulticastInlineDelegate StepLRunMultiEventDispatch; // 0x2218(0x10)
	struct FMulticastInlineDelegate StepRRunMultiEventDispatch; // 0x2228(0x10)
	float HC_CrouchTimeDown; // 0x2238(0x04)
	float HC_CrouchTimeUp; // 0x223c(0x04)
	struct UCurveFloat* C_CrouchDown; // 0x2240(0x08)
	struct UCurveFloat* C_CrouchUp; // 0x2248(0x08)
	struct FString CurrentWeaponDataName; // 0x2250(0x10)
	float HC_SKCamHeightOffsetHack; // 0x2260(0x04)
	bool HW_IsReloading; // 0x2264(0x01)
	char pad_2265[0x3]; // 0x2265(0x03)
	struct FMulticastInlineDelegate SetOriginalMagHiddenDispatch; // 0x2268(0x10)
	struct FMulticastInlineDelegate SpawnDropMagEventDispatch; // 0x2278(0x10)
	struct FMulticastInlineDelegate DropMagazineEventDispatch; // 0x2288(0x10)
	char pad_2298[0x8]; // 0x2298(0x08)
	struct FTransform Socket_HandL_grip_TR; // 0x22a0(0x30)
	struct FMulticastInlineDelegate SetOriginalMagVisibleDispatch; // 0x22d0(0x10)
	struct ABP_Ladder_C* CurrentLadderRef; // 0x22e0(0x08)
	float HC_LadderPointsGetterFrequency; // 0x22e8(0x04)
	char pad_22EC[0x4]; // 0x22ec(0x04)
	struct FMulticastInlineDelegate LadderEntryEventDispatch; // 0x22f0(0x10)
	struct FMulticastInlineDelegate GetLadderPointsEventDispatch; // 0x2300(0x10)
	struct FMulticastInlineDelegate LadderExitEventDispatch; // 0x2310(0x10)
	struct FMulticastInlineDelegate LadderJumpOffEventDispatch; // 0x2320(0x10)
	struct FMulticastInlineDelegate LadderStatesForABP; // 0x2330(0x10)
	struct FTimerHandle GetLadderPointsHandler; // 0x2340(0x08)
	struct UBP_1P_AnimationComponent_C* BP1PAnimComponentVAR; // 0x2348(0x08)
	enum class EHW_MeleeStates AxeMeleeStates; // 0x2350(0x01)
	char pad_2351[0x7]; // 0x2351(0x07)
	struct UCurveVector* LadderSecondaryHandCurve; // 0x2358(0x08)
	struct UCurveVector* LadderMainHandCurve; // 0x2360(0x08)
	struct FVector RightHandStepConstant; // 0x2368(0x0c)
	struct FVector RightHandStepLinear; // 0x2374(0x0c)
	struct FVector RightHandMaster; // 0x2380(0x0c)
	struct FVector LeftHandStepConstant; // 0x238c(0x0c)
	struct FVector LeftHandStepLinear; // 0x2398(0x0c)
	struct FVector LeftHandMaster; // 0x23a4(0x0c)
	float LadderHandForwardOffset; // 0x23b0(0x04)
	char pad_23B4[0x4]; // 0x23b4(0x04)
	struct ABP_ItemBase_Throwable_C* GrenadeToThrow; // 0x23b8(0x08)
	float LadderHandHeightOffset; // 0x23c0(0x04)
	float LadderStepEvalAsRatio; // 0x23c4(0x04)
	struct FVector LeftHandBeforeOffsets; // 0x23c8(0x0c)
	struct FVector RightHandBeforeOffsets; // 0x23d4(0x0c)
	float LadderLeftHandFingerposeDriver; // 0x23e0(0x04)
	float LadderRightHandFingerposeDriver; // 0x23e4(0x04)
	struct FVector LadderHandOffset; // 0x23e8(0x0c)
	struct FRotator LadderRightHandRotation; // 0x23f4(0x0c)
	struct FRotator LadderLeftHandRotation; // 0x2400(0x0c)
	struct FVector InterpSpotLeft; // 0x240c(0x0c)
	float LadderTPAnimDriver; // 0x2418(0x04)
	char pad_241C[0x4]; // 0x241c(0x04)
	struct TMap<struct ABP_Throwable_C*, struct FThrowableAnimStruct> ThrowableAnims; // 0x2420(0x50)
	struct FThrowableAnimStruct ThrowableAnimStruct; // 0x2470(0x98)
	bool NadeThrown; // 0x2508(0x01)
	bool ThrowIsInLoop; // 0x2509(0x01)
	bool IK3P_IsLeftShoulder; // 0x250a(0x01)
	char pad_250B[0x1]; // 0x250b(0x01)
	struct FVector IK3P_RootPosHelperOfffset; // 0x250c(0x0c)
	enum class EHW_FingerPoses FingerposeL; // 0x2518(0x01)
	enum class EHW_FingerPoses FingerposeR; // 0x2519(0x01)
	char pad_251A[0x6]; // 0x251a(0x06)
	struct FMulticastInlineDelegate SetFingerPoseL_Dispatch; // 0x2520(0x10)
	struct FMulticastInlineDelegate SetFingerPoseR_Dispatch; // 0x2530(0x10)
	float ToRunRunner; // 0x2540(0x04)
	char pad_2544[0x4]; // 0x2544(0x04)
	struct FMulticastInlineDelegate EnterRunDispatch; // 0x2548(0x10)
	struct FMulticastInlineDelegate ExitRunDispatch; // 0x2558(0x10)
	float HC_AllowedTurnAngleWhenLeaning; // 0x2568(0x04)
	char pad_256C[0x4]; // 0x256c(0x04)
	struct FMulticastInlineDelegate AttachMagToHand3P_EventDispatch; // 0x2570(0x10)
	struct FMulticastInlineDelegate AttachMagToHand3PABS_EventDispatch; // 0x2580(0x10)
	struct FMulticastInlineDelegate AttachMagToWeapon_EventDispatch; // 0x2590(0x10)
	float HC_AllowedTurnAngleWhenNotLeaning; // 0x25a0(0x04)
	float OldLeftHandDriver; // 0x25a4(0x04)
	float OldRightHandDriver; // 0x25a8(0x04)
	float LadderSoundTolerance; // 0x25ac(0x04)
	struct UAkAudioEvent* LadderSound1P; // 0x25b0(0x08)
	float HC_IsShootingThresholdTime; // 0x25b8(0x04)
	bool IsDelayedFiring; // 0x25bc(0x01)
	bool IsVaulting; // 0x25bd(0x01)
	bool IsMoving1P; // 0x25be(0x01)
	enum class EHW_1P_AnimationStates MovementState1P_Previous; // 0x25bf(0x01)
	enum class EHW_1P_AnimationStates MovementState1P_Temp; // 0x25c0(0x01)
	bool IsInLadderAction; // 0x25c1(0x01)
	char pad_25C2[0x6]; // 0x25c2(0x06)
	struct FMulticastInlineDelegate EnterMovementState_EventDispatch; // 0x25c8(0x10)
	struct FMulticastInlineDelegate ExitMovementState_EventDispatch; // 0x25d8(0x10)
	float LandingMaster; // 0x25e8(0x04)
	bool InLandingTick; // 0x25ec(0x01)
	char pad_25ED[0x3]; // 0x25ed(0x03)
	struct FMulticastInlineDelegate NadeEquipped_Dispatch; // 0x25f0(0x10)
	struct UHWHeldItemDataObject* HeldItemDataGrenade; // 0x2600(0x08)
	struct FMulticastInlineDelegate MeleeAttack_Dispatch; // 0x2608(0x10)
	struct UADS_ARLData_C* Aimed Reload Data Current PCA; // 0x2618(0x08)
	bool UsesAimedReload; // 0x2620(0x01)
	char pad_2621[0x3]; // 0x2621(0x03)
	struct FVector ARL_RM_Pos; // 0x2624(0x0c)
	struct FRotator ARL_RM_Rotation; // 0x2630(0x0c)
	float MagReleaseMaster; // 0x263c(0x04)
	float ReleaseHandMASTER; // 0x2640(0x04)
	float GrabNewMagMASTER; // 0x2644(0x04)
	float AttachMagMASTER; // 0x2648(0x04)
	char pad_264C[0x4]; // 0x264c(0x04)
	struct TArray<struct UADS_IdleAction_Base_C*> HC_IdleActionsArray; // 0x2650(0x10)
	int32_t IdleActionsLength; // 0x2660(0x04)
	char pad_2664[0x4]; // 0x2664(0x04)
	struct UADS_IdleAction_Base_C* IdleActionCurrent; // 0x2668(0x08)
	float IdleActionMASTER; // 0x2670(0x04)
	bool IsIdle; // 0x2674(0x01)
	char pad_2675[0x3]; // 0x2675(0x03)
	struct FTimerHandle IdleMainLoopHandle; // 0x2678(0x08)
	int32_t IdleActionIDOld; // 0x2680(0x04)
	int32_t IdleActionID; // 0x2684(0x04)
	bool IsInIdleAction; // 0x2688(0x01)
	char pad_2689[0x3]; // 0x2689(0x03)
	float EnterWalkMASTER; // 0x268c(0x04)
	struct UBP_3P_AnimationComponent_C* BP3PAnimationComponentVAR; // 0x2690(0x08)
	struct FMulticastInlineDelegate Send3PRecoilDrivers_Dispatch; // 0x2698(0x10)
	float New Track 0; // 0x26a8(0x04)
	float EquipTime; // 0x26ac(0x04)
	float Equip3PMASTER; // 0x26b0(0x04)
	float UnEquipTime; // 0x26b4(0x04)
	float UnEquip3PMASTER; // 0x26b8(0x04)
	float EquUnEqu3P MASTER; // 0x26bc(0x04)
	struct FMulticastInlineDelegate InspectWeapon_Dispatch; // 0x26c0(0x10)
	float ToRunTransitionMASTER; // 0x26d0(0x04)
	enum class EHW_AnimationWeaponType AnimWeaponType; // 0x26d4(0x01)
	char pad_26D5[0x3]; // 0x26d5(0x03)
	float ToRun_Time_BP; // 0x26d8(0x04)
	float ToRun_TRTime_BP; // 0x26dc(0x04)
	float OffRun_Time_BP; // 0x26e0(0x04)
	bool PrintShakeType; // 0x26e4(0x01)

	void BPI_Get_CameraParameters(float TP_FOV, float FP_FOV, bool RightShoulder); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BPI_Get_CameraParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Get_3P_TraceParams(struct FVector TraceOrigin, float TraceRadius, enum class ETraceTypeQuery TraceChannel); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BPI_Get_3P_TraceParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FTransform BPI_Get_3P_PivotTarget(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BPI_Get_3P_PivotTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FVector BPI_Get_FP_CameraTarget(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BPI_Get_FP_CameraTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BPI_Get_EssentialValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementState PrevMovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode RotationMode, enum class ALS_Gait ActualGait, enum class ALS_Stance ActualStance, enum class ALS_ViewMode ViewMode, enum class ALS_OverlayState OverlayState); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BPI_Get_CurrentStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	bool IsOpticalAndAiming(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.IsOpticalAndAiming // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FVector ApplyLadderHandOffset(struct FVector ApplyTo, struct FVector BeforeOffsetPos, struct FRotator Rotation); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ApplyLadderHandOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void LadderGetHandPositions(struct UCurveVector* Curve, float EvaluationDistance, float DistanceBetweenSteps, float EvaluationPointWorldSpace, float YOffset, struct FVector StepConstant, struct FVector StepLinear); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.LadderGetHandPositions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderPointTesting(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.LadderPointTesting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_GetLadderPoints(float PlayerZ, struct ABP_Ladder_C* CurrentLadder, bool DeBugs, struct FVector ClosestLadderWS, struct FVector OtherLadderWS, float DistBetween, struct FRotator LadderPointRotationWS, float DistToLastHandle); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_GetLadderPoints // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_Offset1PMesh(struct FVector LocationOffset, struct FRotator RotationOffset); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_Offset1PMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCurrentCameraHeight(float CurrentHeight_norm, float InverseCurrentHeight_norm); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetCurrentCameraHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetAimAndFireState(bool aiming, float AimingBlend, bool isFiring, bool IsAutomatic, bool IsHipfiring, bool IsAimFiring); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetAimAndFireState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HW_CodePath(struct FString Path); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_CodePath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateLocallyControlledRotation(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.UpdateLocallyControlledRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update Control Rotation(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.Update Control Rotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetEMovementMode(enum class EHW_MovementMode Mode); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetEMovementMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HW_Debug_RotationMode(struct FString Value); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_Debug_RotationMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HW_Debug_StanceInfo(struct FString Value); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_Debug_StanceInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HW_Debug_GaitInfo(struct FString Value); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_Debug_GaitInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HW_Debug_MovementSpeedInfo(struct FString Value); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_Debug_MovementSpeedInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetMovementMode(enum class EHW_MovementMode Mode); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetMovementMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_OnWeaponFired(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_OnWeaponFired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_UpdateAiming(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_UpdateAiming // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_Temp_ExitLadder(bool ClimbedUp, struct AActor* Ladder); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_Temp_ExitLadder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_Temp_EnterLadder(struct AActor* NewLadder); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_Temp_EnterLadder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_Temp_Vault(struct FHWVaultResult VaultResult); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_Temp_Vault // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_GetControlRotation(struct FRotator Result); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_GetControlRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HW_OnWeaponEqupped(struct AHWWeapon* Weapon); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_OnWeaponEqupped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_ChooseGroundFriction(float Value); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_ChooseGroundFriction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HW_ChooseMaxAcceleration(float Value); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_ChooseMaxAcceleration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HW_UpdateMovementSettings(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_UpdateMovementSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Above(float Offset, struct FVector Result); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.Above // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HW_SetALSOverlay(enum class ALS_OverlayState Value); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_SetALSOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW Set Aiming(bool Value); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW Set Aiming // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_AttachCamera_3p(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_AttachCamera_3p // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_PrintDebugValues(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_PrintDebugValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UAnimMontage* GetGetUpAnimation(bool RagdollFaceUp); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetGetUpAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UAnimMontage* GetRollAnimation(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetRollAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	float GetMappedSpeed(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetMappedSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	bool CanUpdateMovingRotation(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.CanUpdateMovingRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnOverlayStateChanged(enum class ALS_OverlayState NewOverlayState); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnOverlayStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnViewModeChanged(enum class ALS_ViewMode NewViewMode); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnViewModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnGaitChanged(enum class ALS_Gait NewActualGait); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnGaitChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRotationModeChanged(enum class ALS_RotationMode NewRotationMode); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnRotationModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnStanceChanged(enum class ALS_Stance NewStance); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnStanceChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMovementActionChanged(enum class ALS_MovementAction NewMovementAction); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnMovementActionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMovementStateChanged(enum class ALS_MovementState NewMovementState); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnMovementStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCharacterMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnCharacterMovementModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void On Begin Play(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.On Begin Play // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	float GetAnimCurveValue(struct FName CurveName); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetAnimCurveValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	enum class EDrawDebugTrace GetTraceDebugType(enum class EDrawDebugTrace ShowTraceType); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetTraceDebugType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetActorLocationDuringRagdoll(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SetActorLocationDuringRagdoll // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RagdollUpdate(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.RagdollUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RagdollEnd(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.RagdollEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RagdollStart(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.RagdollStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FVector CalculateAcceleration(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.CalculateAcceleration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FVector GetCapsuleLocationFromBase(struct FVector BaseLocation, float ZOffset); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetCapsuleLocationFromBase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FVector GetCalpsuleBaseLocation(float ZOffset); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetCalpsuleBaseLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void RightVector(struct FVector ForwardVector, struct FVector RightVector); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.RightVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FMantle_Asset GetMantleAsset(enum class MantleType MantleType); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetMantleAsset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CapsuleHasRoomCheck(struct UCapsuleComponent* Capsule, struct FVector TargetLocation, float HeightOffset, float RadiusOffset, enum class EDrawDebugTrace DebugType, bool HasRoom); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.CapsuleHasRoomCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void MantleUpdate(float BlendIn); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.MantleUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MantleEnd(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.MantleEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MantleStart(float MantleHeight, struct FALS_ComponentAndTransform MantleLedgeWS, enum class MantleType MantleType); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.MantleStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DrawDebugShapes(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.DrawDebugShapes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FixDiagonalGamepadValues(float Y in, float X in, float Y Out, float X Out); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.FixDiagonalGamepadValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FVector GetPlayerMovementInput(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetPlayerMovementInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void MantleCheck(struct FMantle_TraceSettings Trace Settings, enum class EDrawDebugTrace DebugType, bool Vault); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.MantleCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	float CalculateGroundedRotationRate(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.CalculateGroundedRotationRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	bool SetActorLocationAndRotation(UpdateTarget)(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, bool bTeleport, struct FHitResult SweepHitResult); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SetActorLocationAndRotation(UpdateTarget) // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LimitRotation(float AimYawMin, float AimYawMax, float InterpSpeed); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.LimitRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CanSprint(bool CanSprint); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.CanSprint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetActualGait(enum class ALS_Gait AllowedGait, enum class ALS_Gait ActualGait); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetActualGait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetAllowedGait(enum class ALS_Gait AllowedGait); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetAllowedGait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetTargetMovementSettings(struct FMovementSettings MovementSettings); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetTargetMovementSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateDynamicMovementSettings(enum class ALS_Gait AllowedGait); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.UpdateDynamicMovementSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateCharacterMovement(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.UpdateCharacterMovement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMovementModel(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SetMovementModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SmoothCharacterRotation(struct FRotator Target, float TargetInterpSpeed(Const), float ActorInterpSpeed(Smooth)); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SmoothCharacterRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateInAirRotation(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.UpdateInAirRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateGroundedRotation(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.UpdateGroundedRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CacheValues(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.CacheValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetEssentialValues(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SetEssentialValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayerMovementInput(bool IsForwardAxis, float Value); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.PlayerMovementInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TL_3P_UnEquip__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_3P_UnEquip__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_3P_UnEquip__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_3P_UnEquip__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_3P_Equip__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_3P_Equip__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_3P_Equip__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_3P_Equip__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_StartRunTransition__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_StartRunTransition__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_StartRunTransition__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_StartRunTransition__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_StartRun__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_StartRun__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_StartRun__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_StartRun__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_Recoil3PMASTER__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_Recoil3PMASTER__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_Recoil3PMASTER__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_Recoil3PMASTER__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_Landing__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_Landing__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_Landing__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_Landing__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_EnterWalking__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_EnterWalking__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_EnterWalking__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_EnterWalking__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_AttachMag__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_AttachMag__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_AttachMag__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_AttachMag__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_ARL_GrabNewMag__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_ARL_GrabNewMag__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_ARL_GrabNewMag__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_ARL_GrabNewMag__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_ARL_ReleaseHand__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_ARL_ReleaseHand__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_ARL_ReleaseHand__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_ARL_ReleaseHand__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_ARL_MagRelease__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_ARL_MagRelease__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_ARL_MagRelease__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_ARL_MagRelease__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_IdleActionPlayer__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_IdleActionPlayer__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_IdleActionPlayer__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.TL_IdleActionPlayer__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void MantleTimeline__FinishedFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.MantleTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void MantleTimeline__UpdateFunc(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.MantleTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void InpActEvt_Run_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.InpActEvt_Run_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x13c4ca0
	void InpActEvt_Run_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.InpActEvt_Run_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x13c4ca0
	void InpActEvt_Aim_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.InpActEvt_Aim_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x13c4ca0
	void InpActEvt_Aim_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.InpActEvt_Aim_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x13c4ca0
	void OnBeginSpectateCharacter(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnBeginSpectateCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEndSpectateCharacter(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnEndSpectateCharacter // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void InspectWeapon(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.InspectWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRoundStateSet(enum class EHWRoundState State); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnRoundStateSet // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void EnterLadderBPI(struct AActor* LadderActor); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterLadderBPI // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OwningClientStartLaddering_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OwningClientStartLaddering_Event // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnExitLadder(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnExitLadder // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnEnterLadder(struct AActor* LadderActor); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnEnterLadder // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OwningClientLadderJumpOffEvent(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OwningClientLadderJumpOffEvent // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetLadderPointsEvent(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetLadderPointsEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLadderJumpOff(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnLadderJumpOff // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OwningClientAttachedToLadders(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OwningClientAttachedToLadders // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OwningClientLadderExitEvent(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OwningClientLadderExitEvent // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LaddersEvent2(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.LaddersEvent2 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLadderFinished(bool ClimbedUp, struct AActor* LadderActor); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnLadderFinished // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void VaultResultBPI(struct FHWVaultResult VaultResult, struct FHWVaultMontagePlayerData MontagePlayerData); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.VaultResultBPI // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OwningClientVaultEventHack(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OwningClientVaultEventHack // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponUnEquipStrted(struct AHWWeapon* UnequippedWeapon); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnWeaponUnEquipStrted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MeleeBeginDelegate_Event_1(enum class EHWMeleeType MeleeType); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.MeleeBeginDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponEquipStrted(struct AHWWeapon* EquippedWeapon); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnWeaponEquipStrted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_ReloadEnd(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_ReloadEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_ReloadBegin(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_ReloadBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponStateChanged(enum class EHWWeaponState PrevState, enum class EHWWeaponState NewState); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnWeaponStateChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__FiringComponent_K2Node_ComponentBoundEvent_0_HWWeaponDelegate__DelegateSignature(struct AHWWeapon* Weapon); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BndEvt__FiringComponent_K2Node_ComponentBoundEvent_0_HWWeaponDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnSprintIntoDestructible(struct AActor* Actor); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnSprintIntoDestructible // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ToRunCooldownEvent(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ToRunCooldownEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EndRun_1P(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EndRun_1P // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StartRun_1P(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.StartRun_1P // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachMagToWeapon(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.AttachMagToWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachMagAbs(bool ToHand); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.AttachMagAbs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetOriginalMagVisible(bool Visible); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SetOriginalMagVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnDropMagEvent(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SpawnDropMagEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DropMagazineEvent(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.DropMagazineEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachMag(bool ToHand); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.AttachMag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSoundNotifyReceived(enum class EHWWeaponPartSoundType Sound, struct UMeshComponent* Component); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnSoundNotifyReceived // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SkipIKREvent(bool Skip); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SkipIKREvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepLRunMultiEvent(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.StepLRunMultiEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UseOffscreenFillerPoseEvent(bool UseOffscreenFillerPose); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.UseOffscreenFillerPoseEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepLMultiEvent(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.StepLMultiEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepRMultiEvent(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.StepRMultiEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AnimNotifyEventUseLeftFingers(bool UseLeftFingers); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.AnimNotifyEventUseLeftFingers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AnimNotifyEventUseRightFingers(bool UseRightFingers); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.AnimNotifyEventUseRightFingers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SkipIKLEvent(bool Skip); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SkipIKLEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadCamShakeEvent(bool IsShaking); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ReloadCamShakeEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UseReloadFillerPoseEvent(bool UseReloadFillterPose); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.UseReloadFillerPoseEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepRRunMultiEvent(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.StepRRunMultiEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AN_SetFingerPoseR(enum class EHW_FingerPoses Pose); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.AN_SetFingerPoseR // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AN_SetFingerPoseL(enum class EHW_FingerPoses Pose); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.AN_SetFingerPoseL // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EndAim_1P(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EndAim_1P // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StartAim_1P(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.StartAim_1P // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__FiringComponent_K2Node_ComponentBoundEvent_1_HWWeaponDelegate__DelegateSignature(struct AHWWeapon* Weapon); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BndEvt__FiringComponent_K2Node_ComponentBoundEvent_1_HWWeaponDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExitWalking(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitWalking // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterWalking(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterWalking // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterStrafeStop(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterStrafeStop // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterStrafeLeft(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterStrafeLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterStrafeRight(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterStrafeRight // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterMovementStop(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterMovementStop // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterMovementBackwards(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterMovementBackwards // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterMovementForward(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterMovementForward // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NadeEquipped(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.NadeEquipped // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ThrowAnim(struct ABP_ItemBase_Throwable_C* Throwable); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ThrowAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BeginThrowEnd(struct ABP_ItemBase_Throwable_C* Throwable); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BeginThrowEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MulticastThrowAnim(struct ABP_ItemBase_Throwable_C* Throwable); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.MulticastThrowAnim // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HW_OnBeginPlay(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.HW_OnBeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ThrowFinished(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ThrowFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ThrowNotify(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ThrowNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_0_HWUseThrowableSignature__DelegateSignature(struct AHWItemBase* Item); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_0_HWUseThrowableSignature__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExitLanding_event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitLanding_event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterLanding_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterLanding_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitFalling(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitFalling // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterFalling(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterFalling // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterWalkingTransitionEvent(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterWalkingTransitionEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RCS_HA_Pull(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.RCS_HA_Pull // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadCamShakeMulti_Event(enum class Enum_ReloadActionType Type); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ReloadCamShakeMulti_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AimedReloadMulti_Event(enum class Enum_ReloadActionType Type); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.AimedReloadMulti_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RCS_ReleaseLeftHand(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.RCS_ReleaseLeftHand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RCS_MagRelease(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.RCS_MagRelease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RCS_MagAttachEvent(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.RCS_MagAttachEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RCS_LeftHandBack(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.RCS_LeftHandBack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RCS_AttachLeftHandToWeapon(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.RCS_AttachLeftHandToWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MC_SetControlRotation(struct FRotator Value); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.MC_SetControlRotation // (Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponUnequipStarted_Event_1(struct AHWWeapon* Weapon); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnWeaponUnequipStarted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponEquipStarted_Event_1(struct AHWWeapon* Weapon); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnWeaponEquipStarted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnReloadEnd_Event_1(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnReloadEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnReloadBegin_Event_1(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnReloadBegin_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetIdleAction(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ResetIdleAction // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IdleActionsMainLoop(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.IdleActionsMainLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IdleActionInterrupted(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.IdleActionInterrupted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IdleActionEvent(bool IsIdle); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.IdleActionEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ProcNewIdleAction(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ProcNewIdleAction // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitIdleActionStates(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.InitIdleActionStates // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BeginRun(bool ResetSprintTimer); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BeginRun // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void MoveForward(float Value); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.MoveForward // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void MoveRight(float Value); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.MoveRight // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void EndRun(bool bForced); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EndRun // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BeginAimWithMulticast(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BeginAimWithMulticast // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EndAimWithMulticast(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EndAimWithMulticast // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BP_PlayerCharacter_Anim_Interact_StopBleeding_K2Node_ComponentBoundEvent_4_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BndEvt__BP_PlayerCharacter_Anim_Interact_StopBleeding_K2Node_ComponentBoundEvent_4_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BP_PlayerCharacter_Anim_Interact_StopBleeding_K2Node_ComponentBoundEvent_5_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BndEvt__BP_PlayerCharacter_Anim_Interact_StopBleeding_K2Node_ComponentBoundEvent_5_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BP_PlayerCharacter_Anim_Interact_StopBleeding_K2Node_ComponentBoundEvent_6_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BndEvt__BP_PlayerCharacter_Anim_Interact_StopBleeding_K2Node_ComponentBoundEvent_6_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_5(float AxisValue); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_5 // (BlueprintEvent) // @ game+0x13c4ca0
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_6(float AxisValue); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_6 // (BlueprintEvent) // @ game+0x13c4ca0
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_7(float AxisValue); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_7 // (BlueprintEvent) // @ game+0x13c4ca0
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_8(float AxisValue); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_8 // (BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SendYaw(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SendYaw // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ServerReceiveYaw(float NewParam); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ServerReceiveYaw // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitialIdleDelay_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.InitialIdleDelay_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitRunning_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitRunning_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitVaulting_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitVaulting_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitFalling_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitFalling_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitClimbing_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitClimbing_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitInteracting_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitInteracting_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitDowned_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitDowned_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitDead_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitDead_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterDead_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterDead_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitWalking_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitWalking_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterFalling_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterFalling_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterVaulting_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterVaulting_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterRunning_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterRunning_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterClimbing_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterClimbing_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterInteracting_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterInteracting_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterDowned_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterDowned_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterWalking_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterWalking_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitIdle_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitIdle_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterIdle_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterIdle_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterExitMovementStates_Event(enum class EHW_1P_AnimationStates NewState, enum class EHW_1P_AnimationStates PreviousState); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterExitMovementStates_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetIsVaultingAnimState_EventMC(bool IsVaulting); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SetIsVaultingAnimState_EventMC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetIsVaultingAnimState_Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SetIsVaultingAnimState_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FinishVault(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.FinishVault // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.K2_OnStartCrouch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.K2_OnEndCrouch // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnJumped(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnJumped // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnLanded(struct FHitResult Hit); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Breakfall Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.Breakfall Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Roll Event(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.Roll Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Set_RotationMode(enum class ALS_RotationMode NewRotationMode); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Set_Gait(enum class ALS_Gait NewGait); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Set_ViewMode(enum class ALS_ViewMode NewViewMode); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_PlayerCharacter_Anim(int32_t EntryPoint); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExecuteUbergraph_BP_PlayerCharacter_Anim // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void InspectWeapon_Dispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.InspectWeapon_Dispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Send3PRecoilDrivers_Dispatch__DelegateSignature(float RecoilDriverMaster); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.Send3PRecoilDrivers_Dispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MeleeAttack_Dispatch__DelegateSignature(enum class EHWMeleeType MeleeType); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.MeleeAttack_Dispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NadeEquipped_Dispatch__DelegateSignature(struct FThrowableAnimStruct ThrowableAnimStruct, struct UHWHeldItemDataObject* HeldItemDataClass); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.NadeEquipped_Dispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitMovementState_EventDispatch__DelegateSignature(enum class EHW_1P_AnimationStates ExitState); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitMovementState_EventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterMovementState_EventDispatch__DelegateSignature(enum class EHW_1P_AnimationStates EnterState); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterMovementState_EventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachMagToWeapon_EventDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.AttachMagToWeapon_EventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachMagToHand3PABS_EventDispatch__DelegateSignature(bool ToHand); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.AttachMagToHand3PABS_EventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachMagToHand3P_EventDispatch__DelegateSignature(bool ToHand); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.AttachMagToHand3P_EventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitRunDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitRunDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterRunDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterRunDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetFingerPoseR_Dispatch__DelegateSignature(enum class EHW_FingerPoses Pose); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SetFingerPoseR_Dispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetFingerPoseL_Dispatch__DelegateSignature(enum class EHW_FingerPoses Pose); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SetFingerPoseL_Dispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderStatesForABP__DelegateSignature(bool IsInLadders); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.LadderStatesForABP__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderJumpOffEventDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.LadderJumpOffEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderExitEventDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.LadderExitEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderEntryEventDispatch__DelegateSignature(struct ABP_Ladder_C* CurrentLadder); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.LadderEntryEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetLadderPointsEventDispatch__DelegateSignature(struct FVector ClosestLadderPointPosWS, struct FVector OtherLadderPointPosWS, float DistanceBetweenLadderPoints, struct FRotator LadderPointsRotationWS, float PlayerZOmLadderGrid); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.GetLadderPointsEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetOriginalMagVisibleDispatch__DelegateSignature(bool TRUE); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SetOriginalMagVisibleDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DropMagazineEventDispatch__DelegateSignature(float ReloadTime); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.DropMagazineEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnDropMagEventDispatch__DelegateSignature(float ReloadTime); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SpawnDropMagEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetOriginalMagHiddenDispatch__DelegateSignature(bool TRUE); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.SetOriginalMagHiddenDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepRRunMultiEventDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.StepRRunMultiEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepLRunMultiEventDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.StepLRunMultiEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitWalkingDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitWalkingDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterWalkingDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterWalkingDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExitFallingDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.ExitFallingDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterFallingDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterFallingDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepREventDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.StepREventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepLEventDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.StepLEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LoadNadeDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.LoadNadeDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NadeIsCancelEventDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.NadeIsCancelEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NadeIsFailEventDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.NadeIsFailEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NadeIsThrowEventDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.NadeIsThrowEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NadeIsCookingEventDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.NadeIsCookingEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterStrafeStopDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterStrafeStopDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterStrafeRightDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterStrafeRightDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterStrafeLeftDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterStrafeLeftDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterMovementStopDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterMovementStopDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterMovementBackwardsDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterMovementBackwardsDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterMovementForwardDispatch__DelegateSignature(); // Function BP_PlayerCharacter_Anim.BP_PlayerCharacter_Anim_C.EnterMovementForwardDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

