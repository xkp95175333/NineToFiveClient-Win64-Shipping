// AnimBlueprintGeneratedClass ABP_RewardCrate.ABP_RewardCrate_C
// Size: 0xf78 (Inherited: 0x2c0)
struct UABP_RewardCrate_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3c0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x410(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x438(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x460(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x4e0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x510(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x590(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x5c0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x640(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x670(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x6f0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x720(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x7a0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x7d0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x850(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x880(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x900(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x930(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x9b0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x9e0(0xb0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0xa90(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xb98(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xbb8(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xbd8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xce0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xde8(0x108)
	enum class HWEnum_RewardCrateStates States; // 0xef0(0x01)
	char pad_EF1[0x7]; // 0xef1(0x07)
	struct UAnimSequenceBase* Anim_IDLE_CLOSED; // 0xef8(0x08)
	struct ABP_RewardCrate_C* BPRewardCrateREF; // 0xf00(0x08)
	struct UAnimSequenceBase* Anim_OPEN_LITTLE; // 0xf08(0x08)
	struct UAnimSequenceBase* Anim_OPEN_BIG; // 0xf10(0x08)
	struct UAnimSequenceBase* Anim_OPEN_LITTLE_IDLE; // 0xf18(0x08)
	struct FMulticastInlineDelegate LB_EnteredAnticipation_Dispatch; // 0xf20(0x10)
	struct FRotator LidShake; // 0xf30(0x0c)
	struct FRotator TiltShakeL; // 0xf3c(0x0c)
	struct FRotator TiltShakeR; // 0xf48(0x0c)
	float CogUD; // 0xf54(0x04)
	float ProgCurve; // 0xf58(0x04)
	char pad_F5C[0x4]; // 0xf5c(0x04)
	struct UAnimSequenceBase* OPEN_IDLE; // 0xf60(0x08)
	struct FMulticastInlineDelegate OpenFinishedEventDispatch; // 0xf68(0x10)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_RewardCrate.ABP_RewardCrate_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_ModifyBone_5930F6B84F8DBD6E384AA59A02D72F32(); // Function ABP_RewardCrate.ABP_RewardCrate_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_ModifyBone_5930F6B84F8DBD6E384AA59A02D72F32 // (BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_671C20A74B33C85A1D66208633C13A64(); // Function ABP_RewardCrate.ABP_RewardCrate_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_671C20A74B33C85A1D66208633C13A64 // (BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_B6C4C2444F7850263D6E7A9C37A30822(); // Function ABP_RewardCrate.ABP_RewardCrate_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_B6C4C2444F7850263D6E7A9C37A30822 // (BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_DD7A5E224294433FDDD39EA437D20AEE(); // Function ABP_RewardCrate.ABP_RewardCrate_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_DD7A5E224294433FDDD39EA437D20AEE // (BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_041C14674D1D3B51123FB390BC4383CC(); // Function ABP_RewardCrate.ABP_RewardCrate_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_041C14674D1D3B51123FB390BC4383CC // (BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_10E69256476968EC23F1CD8C59B14160(); // Function ABP_RewardCrate.ABP_RewardCrate_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_10E69256476968EC23F1CD8C59B14160 // (BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_AFFF62CF465C24A705C402AE73ADE736(); // Function ABP_RewardCrate.ABP_RewardCrate_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_AFFF62CF465C24A705C402AE73ADE736 // (BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_DBAB08644DCCA162D076E3858FB4CEB6(); // Function ABP_RewardCrate.ABP_RewardCrate_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_DBAB08644DCCA162D076E3858FB4CEB6 // (BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_90B0C986456794B22AA6CBA7BD6BFCA7(); // Function ABP_RewardCrate.ABP_RewardCrate_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_90B0C986456794B22AA6CBA7BD6BFCA7 // (BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_EC7A4D68468BA3B812D848B87082113C(); // Function ABP_RewardCrate.ABP_RewardCrate_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RewardCrate_AnimGraphNode_TransitionResult_EC7A4D68468BA3B812D848B87082113C // (BlueprintEvent) // @ game+0x13c4ca0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_RewardCrate.ABP_RewardCrate_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BlueprintBeginPlay(); // Function ABP_RewardCrate.ABP_RewardCrate_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void AnimNotify_LB_EnterAnticipation(); // Function ABP_RewardCrate.ABP_RewardCrate_C.AnimNotify_LB_EnterAnticipation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AnimNotify_AN_OpenFinished(); // Function ABP_RewardCrate.ABP_RewardCrate_C.AnimNotify_AN_OpenFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_ABP_RewardCrate(int32_t EntryPoint); // Function ABP_RewardCrate.ABP_RewardCrate_C.ExecuteUbergraph_ABP_RewardCrate // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OpenFinishedEventDispatch__DelegateSignature(); // Function ABP_RewardCrate.ABP_RewardCrate_C.OpenFinishedEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LB_EnteredAnticipation_Dispatch__DelegateSignature(); // Function ABP_RewardCrate.ABP_RewardCrate_C.LB_EnteredAnticipation_Dispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

