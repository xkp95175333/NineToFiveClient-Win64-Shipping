// BlueprintGeneratedClass BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C
// Size: 0x1fc (Inherited: 0xb0)
struct UBP_1P_CameraHandlerComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AActor* Owner; // 0xb8(0x08)
	struct USkeletalMeshComponent* Mesh1P_ref; // 0xc0(0x08)
	struct ABP_PlayerCharacter_Anim_C* PlayerCharacterAnim_ref; // 0xc8(0x08)
	struct UAnimInstance* ABP_1P_ref; // 0xd0(0x08)
	struct UCameraComponent* Camera; // 0xd8(0x08)
	struct UCM_1P_Cameramodifier_C* CM_1p_CameraModifier_ref; // 0xe0(0x08)
	float TR_Lenght; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UCurveVector* TranslationCurves; // 0xf0(0x08)
	struct FVector TranslationMultiplier; // 0xf8(0x0c)
	char pad_104[0x4]; // 0x104(0x04)
	struct UCurveVector* RotationCurves; // 0x108(0x08)
	struct FVector RotationMultiplier; // 0x110(0x0c)
	float dTime; // 0x11c(0x04)
	float TR_CurveRunner; // 0x120(0x04)
	bool UseCurvePlayerTick; // 0x124(0x01)
	bool FOV_UseFovPlayer; // 0x125(0x01)
	char pad_126[0x2]; // 0x126(0x02)
	float FOV_CurveRunner; // 0x128(0x04)
	float FOV_Length; // 0x12c(0x04)
	float FOV_Offset; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct UCurveFloat* FOV_Curve; // 0x138(0x08)
	bool FOV_UseFovResetPlayer; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	float FOVResetSpeed; // 0x144(0x04)
	struct UCurveVector* LOOPER_TranslationCurves; // 0x148(0x08)
	bool UseCurveLooperTick; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float LOOPER_CurveRunner; // 0x154(0x04)
	float LOOPER_Time; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct UCurveVector* LOOPER_RotationCurves; // 0x160(0x08)
	bool LOOPER_UsePosition; // 0x168(0x01)
	bool LOOPER_UseRotation; // 0x169(0x01)
	char pad_16A[0x2]; // 0x16a(0x02)
	struct FVector LOOPER_TranslationMultiplier; // 0x16c(0x0c)
	struct FVector LOOPER_RotationMultiplier; // 0x178(0x0c)
	struct FVector CurveLooperPosOffset; // 0x184(0x0c)
	struct FRotator CurveLooperRotOffset; // 0x190(0x0c)
	struct FVector CurvePlayerPosOffset; // 0x19c(0x0c)
	struct FRotator CurvePlayerRotOffset; // 0x1a8(0x0c)
	float SmoothedCameraZ; // 0x1b4(0x04)
	struct FVector OffsetCameraPosition; // 0x1b8(0x0c)
	bool ResetOffsetsTicker; // 0x1c4(0x01)
	char pad_1C5[0x3]; // 0x1c5(0x03)
	float ResetOffsetsSpeed; // 0x1c8(0x04)
	struct FVector ResetterPosStart; // 0x1cc(0x0c)
	struct FRotator ResetterRotStart; // 0x1d8(0x0c)
	float AddToRollAngle; // 0x1e4(0x04)
	float AddToRollSpeed; // 0x1e8(0x04)
	bool AddToRollIsActive; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	struct FRotator AddToRollAngleRotator; // 0x1f0(0x0c)

	void ReceiveTick(float DeltaSeconds); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateCameraModifierFovEvent(float FovOffset); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.UpdateCameraModifierFovEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PlayTimedCurveEvent(float Time, struct UCurveVector* TranslateCurves, struct FVector TranslateMultiplier, struct UCurveVector* RotateCurves, struct FVector RotateMultiplier); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.PlayTimedCurveEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetPlayCurveAnimationEvent(); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.ResetPlayCurveAnimationEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddToFovEvent(float Time, float FOV_Offset, struct UCurveFloat* FOV_Curve); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.AddToFovEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetFovEvent(); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.ResetFovEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetFovOffsetEvent(float FOVResetSpeed); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.ResetFovOffsetEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DisableFovTickEvent(); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.DisableFovTickEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayCurveLooperEvent(float LoopTime, struct UCurveVector* TranlationCurves, struct UCurveVector* RotationCurves, struct FVector TranslationMultiplier, struct FVector RotationMultiplier); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.PlayCurveLooperEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StopCurveLooperEvent(); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.StopCurveLooperEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayShakeEvent(struct UMatineeCameraShake* Shake, float OuterRadius); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.PlayShakeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetOffsetsEvent(float InTime); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.ResetOffsetsEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StopresettingOffsetsEvent(); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.StopresettingOffsetsEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetADSParameterCollection(bool ToggleADS); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.SetADSParameterCollection // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddtoRollEvent(float Angle, float Speed, bool IsActive); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.AddtoRollEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_1P_CameraHandlerComponent(int32_t EntryPoint); // Function BP_1P_CameraHandlerComponent.BP_1P_CameraHandlerComponent_C.ExecuteUbergraph_BP_1P_CameraHandlerComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

