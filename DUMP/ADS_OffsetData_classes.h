// BlueprintGeneratedClass ADS_OffsetData.ADS_OffsetData_C
// Size: 0x58 (Inherited: 0x28)
struct UADS_OffsetData_C : UObject {
	struct UCurveFloat* Rolls_Offset; // 0x28(0x08)
	struct UCurveFloat* Hips_Offset; // 0x30(0x08)
	struct UCurveFloat* AimedForward_Offset; // 0x38(0x08)
	bool TickOffsetData; // 0x40(0x01)
	bool PrintScopeBounds; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct UCurveVector* LargeScopeOffsetCurve; // 0x48(0x08)
	struct UCurveFloat* Shader1P_Values; // 0x50(0x08)
};

