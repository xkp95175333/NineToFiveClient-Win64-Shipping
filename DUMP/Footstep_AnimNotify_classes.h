// BlueprintGeneratedClass Footstep_AnimNotify.Footstep_AnimNotify_C
// Size: 0x4e (Inherited: 0x38)
struct UFootstep_AnimNotify_C : UAnimNotify {
	struct FName AttachPointName; // 0x38(0x08)
	enum class FootstepType FootstepType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float VolumeMultiplier; // 0x44(0x04)
	float PitchMultiplier; // 0x48(0x04)
	bool OverrideMaskCurve; // 0x4c(0x01)
	enum class EHWPhysicalMaterialAudioType CurrentSurface; // 0x4d(0x01)

	void GetElevation(struct UActorComponent* Owner, float DotProduct, float Height, struct AActor* ReturnOwner); // Function Footstep_AnimNotify.Footstep_AnimNotify_C.GetElevation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x13c4ca0
	void HW_FootstepSound(struct USkeletalMeshComponent* MeshComp); // Function Footstep_AnimNotify.Footstep_AnimNotify_C.HW_FootstepSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x13c4ca0
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Footstep_AnimNotify.Footstep_AnimNotify_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x13c4ca0
};

