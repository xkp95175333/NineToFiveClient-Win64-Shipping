// AnimBlueprintGeneratedClass ABP_FlashSilhouette.ABP_FlashSilhouette_C
// Size: 0x609 (Inherited: 0x2c0)
struct UABP_FlashSilhouette_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x2f8(0x1d8)
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0x4d0(0x90)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x560(0xa0)
	struct USkeletalMeshComponent* CharacterReference; // 0x600(0x08)
	bool YOLO; // 0x608(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_FlashSilhouette.ABP_FlashSilhouette_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_FlashSilhouette.ABP_FlashSilhouette_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void HAHA(struct USkeletalMeshComponent* PlayerMesh); // Function ABP_FlashSilhouette.ABP_FlashSilhouette_C.HAHA // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CustomEvent_1(); // Function ABP_FlashSilhouette.ABP_FlashSilhouette_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_ABP_FlashSilhouette(int32_t EntryPoint); // Function ABP_FlashSilhouette.ABP_FlashSilhouette_C.ExecuteUbergraph_ABP_FlashSilhouette // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

