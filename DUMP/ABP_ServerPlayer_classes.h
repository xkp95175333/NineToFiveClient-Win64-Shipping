// AnimBlueprintGeneratedClass ABP_ServerPlayer.ABP_ServerPlayer_C
// Size: 0x8cc (Inherited: 0x2c0)
struct UABP_ServerPlayer_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x2f8(0x18)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x310(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x418(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x438(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x458(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x560(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x668(0x108)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x770(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x7f0(0xa0)
	struct AHWHumanCharacter* HumanCharacter; // 0x890(0x08)
	bool IsDowned; // 0x898(0x01)
	char pad_899[0x3]; // 0x899(0x03)
	struct FVector Torso_Offset; // 0x89c(0x0c)
	struct FRotator Torso_Rotation; // 0x8a8(0x0c)
	struct FVector Legs_Scale; // 0x8b4(0x0c)
	struct FVector Root_Offset; // 0x8c0(0x0c)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_ServerPlayer.ABP_ServerPlayer_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateProperties(); // Function ABP_ServerPlayer.ABP_ServerPlayer_C.UpdateProperties // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_ServerPlayer.ABP_ServerPlayer_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_ABP_ServerPlayer(int32_t EntryPoint); // Function ABP_ServerPlayer.ABP_ServerPlayer_C.ExecuteUbergraph_ABP_ServerPlayer // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

