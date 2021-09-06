// BlueprintGeneratedClass BPI_CharacterAnim.BPI_CharacterAnim_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_CharacterAnim_C : UInterface {

	void GetMovementMode(enum class EHW_MovementMode Mode); // Function BPI_CharacterAnim.BPI_CharacterAnim_C.GetMovementMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_InterruptMontage(); // Function BPI_CharacterAnim.BPI_CharacterAnim_C.BPI_InterruptMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Play_PlacingItem(); // Function BPI_CharacterAnim.BPI_CharacterAnim_C.BPI_Play_PlacingItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Play_Bandaging(struct UAnimMontage* montage_1p, struct UAnimMontage* monteage_3p); // Function BPI_CharacterAnim.BPI_CharacterAnim_C.BPI_Play_Bandaging // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_SwitchWeaponTicker(float Evaluator, float AlphaFromCurve, float SwitchTime); // Function BPI_CharacterAnim.BPI_CharacterAnim_C.BPI_SwitchWeaponTicker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_SwitchWeaponType(enum class EHW_Anim_WeaponSwitchType WeaponSwitchTypeNew, enum class EHW_Anim_WeaponSwitchType WeaponSwitchTypeOld); // Function BPI_CharacterAnim.BPI_CharacterAnim_C.BPI_SwitchWeaponType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Firing(bool IsHipFire); // Function BPI_CharacterAnim.BPI_CharacterAnim_C.BPI_Firing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_Leaning(enum class EHW_Anim_LeaningState LeaningState); // Function BPI_CharacterAnim.BPI_CharacterAnim_C.BPI_Leaning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_HitReactionInit(struct FVector HitDirection, float HeadAngle, float Spine03Angle, float Spine02Angle); // Function BPI_CharacterAnim.BPI_CharacterAnim_C.BPI_HitReactionInit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_HitReaction(struct FVector HitReactionAlphas); // Function BPI_CharacterAnim.BPI_CharacterAnim_C.BPI_HitReaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BPI_RecoilCurveValueEvent(float GunAlphaCurve, struct FVector SpineAlphaCurves, float HeadAlphaCurve, float GunAngle, float HeadAngle, float SpineAngle, float WeaponZOffset, struct FVector HipZOffset, float HipZOffsetAlpha); // Function BPI_CharacterAnim.BPI_CharacterAnim_C.BPI_RecoilCurveValueEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetIsDead(bool Value); // Function BPI_CharacterAnim.BPI_CharacterAnim_C.GetIsDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x13c4ca0
};

