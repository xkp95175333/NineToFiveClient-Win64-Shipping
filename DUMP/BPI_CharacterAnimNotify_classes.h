// BlueprintGeneratedClass BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_CharacterAnimNotify_C : UInterface {

	void RCS_HA_Pull(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.RCS_HA_Pull // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RCS_ReleaseLeftHand(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.RCS_ReleaseLeftHand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RCS_AttachLeftHandToWeapon(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.RCS_AttachLeftHandToWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RCS_LeftHandBack(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.RCS_LeftHandBack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RCS_MagAttachEvent(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.RCS_MagAttachEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RCS_MagRelease(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.RCS_MagRelease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachMagToWeapon(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.AttachMagToWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachMagAbs(bool ToHand); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.AttachMagAbs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AttachMag(bool ToHand); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.AttachMag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DropMagazineEvent(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.DropMagazineEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnDropMagEvent(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.SpawnDropMagEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetOriginalMagVisible(bool Visible); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.SetOriginalMagVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSoundNotifyReceived(enum class EHWWeaponPartSoundType Sound, struct UMeshComponent* Component); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.OnSoundNotifyReceived // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SkipIKREvent(bool Skip); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.SkipIKREvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepRRunMultiEvent(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.StepRRunMultiEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepLRunMultiEvent(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.StepLRunMultiEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepRMultiEvent(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.StepRMultiEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StepLMultiEvent(); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.StepLMultiEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UseOffscreenFillerPoseEvent(bool UseOffscreenFillerPose); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.UseOffscreenFillerPoseEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UseReloadFillerPoseEvent(bool UseReloadFillterPose); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.UseReloadFillerPoseEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadCamShakeEvent(bool IsShaking); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.ReloadCamShakeEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SkipIKLEvent(bool Skip); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.SkipIKLEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AnimNotifyEventUseRightFingers(bool UseRightFingers); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.AnimNotifyEventUseRightFingers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AnimNotifyEventUseLeftFingers(bool UseLeftFingers); // Function BPI_CharacterAnimNotify.BPI_CharacterAnimNotify_C.AnimNotifyEventUseLeftFingers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

