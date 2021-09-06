// BlueprintGeneratedClass ADS_AimDataBase.ADS_AimDataBase_C
// Size: 0x88 (Inherited: 0x28)
struct UADS_AimDataBase_C : UObject {
	struct UCurveVector* OPA_DOF_FOV; // 0x28(0x08)
	struct UCurveFloat* BOSS; // 0x30(0x08)
	struct UCurveVector* HandPosition; // 0x38(0x08)
	struct FVector HandPosition_Multiplier; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UCurveVector* HandRotation; // 0x50(0x08)
	struct FVector HandRotation_Multiplier; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct UCurveVector* MasterPosition; // 0x68(0x08)
	struct FVector MasterPosition_Multiplier; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UCurveFloat* ShaderFOV1P; // 0x80(0x08)
};

