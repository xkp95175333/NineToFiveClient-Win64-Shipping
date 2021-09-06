// BlueprintGeneratedClass ADS_RD.ADS_RD_C
// Size: 0xa8 (Inherited: 0x28)
struct UADS_RD_C : UObject {
	float Speed_Multiplier; // 0x28(0x04)
	float BleedRollToAimpoint; // 0x2c(0x04)
	struct UCurveVector* ToPosition; // 0x30(0x08)
	struct FVector ToPosition_Multiplier; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct UCurveVector* ToRotation; // 0x48(0x08)
	struct FVector ToRotation_Multiplier; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FWalksCurves1P_Struct LeftStep; // 0x60(0x18)
	struct UCurveFloat* LeftStep_Multipliers; // 0x78(0x08)
	struct FWalksCurves1P_Struct RightStep; // 0x80(0x18)
	struct UCurveFloat* RightStep_Multipliers; // 0x98(0x08)
	struct UCurveFloat* OffsetsPosRot; // 0xa0(0x08)
};

