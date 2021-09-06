// AnimBlueprintGeneratedClass ABP_MerlinCompanionMKI.ABP_MerlinCompanionMKI_C
// Size: 0x1210 (Inherited: 0x2c0)
struct UABP_MerlinCompanionMKI_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13; // 0x2f8(0x108)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x400(0x80)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x480(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4a0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0x4c0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0x5c8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0x6d0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x7d8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x8e0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x9e8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0xaf0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0xbf8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0xd00(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xe08(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xf10(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1018(0x108)
	float PropellerRotation; // 0x1120(0x04)
	struct FRotator PropellerRotator; // 0x1124(0x0c)
	struct ABP_CompanionDrone_C* BP_ref; // 0x1130(0x08)
	float HC_MaxVelocity; // 0x1138(0x04)
	float FwdBack; // 0x113c(0x04)
	float LeftRight; // 0x1140(0x04)
	float UpDown; // 0x1144(0x04)
	struct FRotator CogRot; // 0x1148(0x0c)
	float IsStationary; // 0x1154(0x04)
	float VelocityVectorLength; // 0x1158(0x04)
	struct FVector CogPos; // 0x115c(0x0c)
	struct USkeletalMeshComponent* SK_ref; // 0x1168(0x08)
	struct FRotator PoleFL; // 0x1170(0x0c)
	char pad_117C[0x4]; // 0x117c(0x04)
	struct FTransform CogJntLocalTR; // 0x1180(0x30)
	struct FRotator PoleFR; // 0x11b0(0x0c)
	struct FRotator PoleBL; // 0x11bc(0x0c)
	struct FRotator PoleBR; // 0x11c8(0x0c)
	float HC_PoleBaseAngleMoving; // 0x11d4(0x04)
	float IsStationaryReactive; // 0x11d8(0x04)
	struct FRotator MotorFL; // 0x11dc(0x0c)
	float HC_PoleBaseAngleStationary; // 0x11e8(0x04)
	struct FRotator MotorFR; // 0x11ec(0x0c)
	struct FRotator MotorBL; // 0x11f8(0x0c)
	struct FRotator MotorBR; // 0x1204(0x0c)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_MerlinCompanionMKI.ABP_MerlinCompanionMKI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SinLerpGenerator(float Freq, float Forza, float NoiseSeed, float NoiseFreq, float NoiseForza, float Out); // Function ABP_MerlinCompanionMKI.ABP_MerlinCompanionMKI_C.SinLerpGenerator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_MerlinCompanionMKI.ABP_MerlinCompanionMKI_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BlueprintInitializeAnimation(); // Function ABP_MerlinCompanionMKI.ABP_MerlinCompanionMKI_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PropellerRotationEvent(); // Function ABP_MerlinCompanionMKI.ABP_MerlinCompanionMKI_C.PropellerRotationEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_ABP_MerlinCompanionMKI(int32_t EntryPoint); // Function ABP_MerlinCompanionMKI.ABP_MerlinCompanionMKI_C.ExecuteUbergraph_ABP_MerlinCompanionMKI // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

