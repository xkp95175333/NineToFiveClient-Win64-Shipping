// BlueprintGeneratedClass AnimNotify_PlayAKSound.AnimNotify_PlayAKSound_C
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_PlayAKSound_C : UAnimNotify {
	bool 1P; // 0x38(0x01)
	bool 3P; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct UAkAudioEvent* AkEvent; // 0x40(0x08)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_PlayAKSound.AnimNotify_PlayAKSound_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x13c4ca0
};

