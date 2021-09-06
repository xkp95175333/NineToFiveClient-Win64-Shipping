// BlueprintGeneratedClass ADS_PhysicsData.ADS_PhysicsData_C
// Size: 0xa8 (Inherited: 0x28)
struct UADS_PhysicsData_C : UObject {
	struct FHWWeaponAimpointParams SAP_Physics; // 0x28(0x1c)
	char pad_44[0x4]; // 0x44(0x04)
	struct UCurveVector* SAP_Force; // 0x48(0x08)
	struct UCurveFloat* SpringWeaponMass; // 0x50(0x08)
	struct UCurveFloat* FullyAimedTHandLEN; // 0x58(0x08)
	struct UCurveVector* CV_EnterFullyAimedOffset; // 0x60(0x08)
	struct UCurveFloat* IdleAimed; // 0x68(0x08)
	struct UCurveFloat* SpringPOS; // 0x70(0x08)
	struct UCurveFloat* SpringROT; // 0x78(0x08)
	bool TickPhysicsData; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct UCurveFloat* SniperMeshDelay; // 0x88(0x08)
	struct UCurveFloat* ASS_ScopeTypeMultipliers; // 0x90(0x08)
	struct UCurveVector* SAP_AimedStrafeSway; // 0x98(0x08)
	struct UCurveFloat* FullyAimedScopeTypeMults; // 0xa0(0x08)
};

