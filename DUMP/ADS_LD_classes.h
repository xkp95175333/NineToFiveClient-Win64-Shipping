// BlueprintGeneratedClass ADS_LD.ADS_LD_C
// Size: 0x65 (Inherited: 0x28)
struct UADS_LD_C : UObject {
	struct UCurveFloat* Aimed_HoriVertRoll_RotAngle; // 0x28(0x08)
	struct UCurveFloat* Aimed_HoriVertRoll_RotSpeed; // 0x30(0x08)
	float AimedCrouchMultiplier; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UCurveFloat* Hips_HoriVertRoll_RotAngle; // 0x40(0x08)
	struct UCurveFloat* Hips_HoriVertRoll_RotSpeed; // 0x48(0x08)
	struct UCurveFloat* Hips_HoriVertRoll_TranslationValue; // 0x50(0x08)
	struct UCurveFloat* Hips_HoriVertRoll_TranslationSpeed; // 0x58(0x08)
	float HipsCrouchMultiplier; // 0x60(0x04)
	bool TickLeading; // 0x64(0x01)
};

