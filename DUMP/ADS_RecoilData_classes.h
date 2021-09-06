// BlueprintGeneratedClass ADS_RecoilData.ADS_RecoilData_C
// Size: 0x70 (Inherited: 0x28)
struct UADS_RecoilData_C : UObject {
	bool TickRecoilData; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UCurveFloat* Lengths; // 0x30(0x08)
	struct UCurveFloat* Accumulation; // 0x38(0x08)
	struct UCurveVector* RotationCurve; // 0x40(0x08)
	struct UCurveFloat* RotationMultipliers; // 0x48(0x08)
	struct UCurveVector* PositionCurve; // 0x50(0x08)
	struct UCurveFloat* RotationRandomAdd; // 0x58(0x08)
	struct UCurveFloat* PositionMultipliers; // 0x60(0x08)
	struct UCurveFloat* PositionRandomAdd; // 0x68(0x08)
};

