// BlueprintGeneratedClass BP_TargetDummy.BP_TargetDummy_C
// Size: 0xe00 (Inherited: 0xdf0)
struct ABP_TargetDummy_C : AHWHumanCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xdf0(0x08)
	bool Ragdolling; // 0xdf8(0x01)
	char pad_DF9[0x3]; // 0xdf9(0x03)
	float RagdollWeight; // 0xdfc(0x04)

	void UpdateRagdoll(float DeltaTime); // Function BP_TargetDummy.BP_TargetDummy_C.UpdateRagdoll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_TargetDummy.BP_TargetDummy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_TargetDummy.BP_TargetDummy_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDeath(enum class EHWDamageType DamageType, struct FHitResult Hit); // Function BP_TargetDummy.BP_TargetDummy_C.OnDeath // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnDeathClient(); // Function BP_TargetDummy.BP_TargetDummy_C.OnDeathClient // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_TargetDummy(int32_t EntryPoint); // Function BP_TargetDummy.BP_TargetDummy_C.ExecuteUbergraph_BP_TargetDummy // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

