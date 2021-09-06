// AnimBlueprintGeneratedClass ABP_DRO_AllianceDROMKI.ABP_DRO_AllianceDROMKI_C
// Size: 0xc6c (Inherited: 0x2c0)
struct UABP_DRO_AllianceDROMKI_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x2f8(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x400(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x420(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x440(0x108)
	char pad_548[0x8]; // 0x548(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x550(0x440)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x990(0x108)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xa98(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xb18(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xb48(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xbf8(0x48)
	float UpperPropellerSpin; // 0xc40(0x04)
	char pad_C44[0x4]; // 0xc44(0x04)
	struct ABP_DeathDrone_C* DeathDroneReference; // 0xc48(0x08)
	float LowerPropellerSpin; // 0xc50(0x04)
	struct FVector MeshVelocityWS; // 0xc54(0x0c)
	struct FVector MeshVelocityRootSpace; // 0xc60(0x0c)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_DRO_AllianceDROMKI.ABP_DRO_AllianceDROMKI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DRO_AllianceDROMKI_AnimGraphNode_ModifyBone_7DEA74904E7DAFF712CB4EA2D9F0C96A(); // Function ABP_DRO_AllianceDROMKI.ABP_DRO_AllianceDROMKI_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DRO_AllianceDROMKI_AnimGraphNode_ModifyBone_7DEA74904E7DAFF712CB4EA2D9F0C96A // (BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DRO_AllianceDROMKI_AnimGraphNode_ModifyBone_BD4ECB6041FBC9364D741EADD76B74B2(); // Function ABP_DRO_AllianceDROMKI.ABP_DRO_AllianceDROMKI_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DRO_AllianceDROMKI_AnimGraphNode_ModifyBone_BD4ECB6041FBC9364D741EADD76B74B2 // (BlueprintEvent) // @ game+0x13c4ca0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DRO_AllianceDROMKI_AnimGraphNode_ModifyBone_53A57A8B4734150BD44842AA9CDAA15C(); // Function ABP_DRO_AllianceDROMKI.ABP_DRO_AllianceDROMKI_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DRO_AllianceDROMKI_AnimGraphNode_ModifyBone_53A57A8B4734150BD44842AA9CDAA15C // (BlueprintEvent) // @ game+0x13c4ca0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_DRO_AllianceDROMKI.ABP_DRO_AllianceDROMKI_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BlueprintInitializeAnimation(); // Function ABP_DRO_AllianceDROMKI.ABP_DRO_AllianceDROMKI_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_ABP_DRO_AllianceDROMKI(int32_t EntryPoint); // Function ABP_DRO_AllianceDROMKI.ABP_DRO_AllianceDROMKI_C.ExecuteUbergraph_ABP_DRO_AllianceDROMKI // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

