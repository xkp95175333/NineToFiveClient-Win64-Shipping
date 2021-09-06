// BlueprintGeneratedClass BP_WeaponCameraComponent.BP_WeaponCameraComponent_C
// Size: 0x1d9 (Inherited: 0xb0)
struct UBP_WeaponCameraComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct AHWWeapon* CurrentWeapon; // 0xb8(0x08)
	struct FTransform CurrentTransform; // 0xc0(0x30)
	struct FTransform InitialTransform; // 0xf0(0x30)
	struct FTransform TargetTransform; // 0x120(0x30)
	struct FRotator CurrentRotation; // 0x150(0x0c)
	struct FRotator TargetRotation; // 0x15c(0x0c)
	struct FVector FullWeaponViewDir; // 0x168(0x0c)
	float LastCameraDistance_FullWeapon; // 0x174(0x04)
	float CameraFOV; // 0x178(0x04)
	float CameraAspect; // 0x17c(0x04)
	struct FVector WeaponCenter; // 0x180(0x0c)
	struct FVector WeaponExtents; // 0x18c(0x0c)
	struct UCameraComponent* CameraComponent; // 0x198(0x08)
	struct FVector2D ViewportOrigin; // 0x1a0(0x08)
	struct FVector2D DefaultViewportSize; // 0x1a8(0x08)
	float PartZoomFactor; // 0x1b0(0x04)
	float PartViewMaxAngleHorizontal; // 0x1b4(0x04)
	float PartViewMaxAngleVertical; // 0x1b8(0x04)
	float AnimTimeRemaining; // 0x1bc(0x04)
	float AnimDuration; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct TScriptInterface<None> BPI_MenuRenderer; // 0x1c8(0x10)
	bool DrawBoundingBox; // 0x1d8(0x01)

	void CenterCamera(); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.CenterCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetFakePartBounds(enum class EHWWeaponPartType PartType, struct FVector Origin, struct FVector Extent); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.GetFakePartBounds // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get Adjusted Viewport Size(bool WeaponCentered, struct FVector2D ViewportSize); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.Get Adjusted Viewport Size // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetMenuRenderer(struct TScriptInterface<None> MenuRenderer); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.SetMenuRenderer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AnimateCurrentTransform(float DeltaTime, struct FTransform Transform); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.AnimateCurrentTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetTargetTransform(struct FTransform TargetTransform, bool Instant); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.SetTargetTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetPositionWithinBoundsFloat(float Pos, float Center, float Extents, float Result); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.GetPositionWithinBoundsFloat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetPositionWithinBounds(struct FVector Pos, struct FVector Center, struct FVector Extents, struct FVector Result); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.GetPositionWithinBounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCameraTransform(struct FTransform Result); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.GetCameraTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void RotateWeapon(struct FRotator Rotation, bool Instant); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.RotateWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetWeaponRotation(bool Instant); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.ResetWeaponRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeapon(struct AHWWeapon* Weapon, struct UShapeComponent* Constraints); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.SetWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZoomToWeaponPart(enum class EHWWeaponPartType Part, bool Instant); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.ZoomToWeaponPart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZoomToWeaponCentered(bool Instant); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.ZoomToWeaponCentered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZoomToWeapon(bool Instant); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.ZoomToWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ForceMipsResident(struct AHWWeapon* Weapon); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.ForceMipsResident // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CalculateCameraAxis(struct FVector Forward, struct FVector Up, struct FVector Right); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.CalculateCameraAxis // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CalculateCamera Transform(struct FVector LookAt, struct FVector CameraDirection, float Distance, bool Center, struct FTransform Result); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.CalculateCamera Transform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CalculateCameraTranslationForViewport(float Distance, struct FVector CameraDirection, struct FVector2D Offset, struct FVector Translation); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.CalculateCameraTranslationForViewport // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Calculate Camera DistanceToFitBox(struct FVector BoxExtents, struct FVector CameraDirection, bool WeaponCentered, float OutDistance); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.Calculate Camera DistanceToFitBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetDistanceFromSize(float Object Size, float FieldOfView, float Result); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.GetDistanceFromSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get Size from Distance(float Distance, float FieldOfView, float Size); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.Get Size from Distance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCameraTransformForPart(struct FVector Target Center, struct FVector TargetExtents, struct FVector Weapon Center, struct FVector WeaponExtents, struct FTransform Result); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.GetCameraTransformForPart // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCameraTransform For Full Weapon(bool Centered, struct FTransform Transform, float Distance); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.GetCameraTransform For Full Weapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_WeaponCameraComponent(int32_t EntryPoint); // Function BP_WeaponCameraComponent.BP_WeaponCameraComponent_C.ExecuteUbergraph_BP_WeaponCameraComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

