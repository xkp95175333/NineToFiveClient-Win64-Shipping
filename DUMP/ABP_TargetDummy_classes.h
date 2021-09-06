// AnimBlueprintGeneratedClass ABP_TargetDummy.ABP_TargetDummy_C
// Size: 0x4c9 (Inherited: 0x2f0)
struct UABP_TargetDummy_C : UHWAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2f8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x328(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3a8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x428(0xa0)
	enum class EHWVitalityState Vitality; // 0x4c8(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_TargetDummy.ABP_TargetDummy_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TargetDummy_AnimGraphNode_BlendListByBool_900E44914179472E41A9B3A00E49AE81(); // Function ABP_TargetDummy.ABP_TargetDummy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TargetDummy_AnimGraphNode_BlendListByBool_900E44914179472E41A9B3A00E49AE81 // (BlueprintEvent) // @ game+0x13c4ca0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_TargetDummy.ABP_TargetDummy_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_ABP_TargetDummy(int32_t EntryPoint); // Function ABP_TargetDummy.ABP_TargetDummy_C.ExecuteUbergraph_ABP_TargetDummy // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

