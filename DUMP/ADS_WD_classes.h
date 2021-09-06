// BlueprintGeneratedClass ADS_WD.ADS_WD_C
// Size: 0xc8 (Inherited: 0x28)
struct UADS_WD_C : UObject {
	float Speed_Multiplier; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FWalksCurves1P_Struct LeftStep; // 0x30(0x18)
	struct FVector Position_Multiplier_L; // 0x48(0x0c)
	struct FVector Rotation_Multiplier_L; // 0x54(0x0c)
	struct FVector Sway_Multiplier_L; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FWalksCurves1P_Struct RightStep; // 0x70(0x18)
	struct FVector Position_Multiplier_R; // 0x88(0x0c)
	struct FVector Rotation_Multiplier_R; // 0x94(0x0c)
	struct FVector Sway_Multiplier_R; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UCurveVector* EnterWalkPos; // 0xb0(0x08)
	struct UCurveVector* EnterWalkRot; // 0xb8(0x08)
	struct UCurveFloat* EnterWalkMultipliers; // 0xc0(0x08)
};

