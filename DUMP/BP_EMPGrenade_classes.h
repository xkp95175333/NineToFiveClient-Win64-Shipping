// BlueprintGeneratedClass BP_EMPGrenade.BP_EMPGrenade_C
// Size: 0x3a0 (Inherited: 0x380)
struct ABP_EMPGrenade_C : ABP_ExplosiveThrowable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	float ElectronicDamageAmount; // 0x388(0x04)
	float DeviceJamDuration; // 0x38c(0x04)
	float HumanJamDuration; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct UPostProcessComponent* TutorialEMPPostProcess; // 0x398(0x08)

	void GetItemId(struct FName ID); // Function BP_EMPGrenade.BP_EMPGrenade_C.GetItemId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleElectronics(struct TArray<struct UHWElectronicsComponent*> Electronics); // Function BP_EMPGrenade.BP_EMPGrenade_C.HandleElectronics // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_EMPGrenade(int32_t EntryPoint); // Function BP_EMPGrenade.BP_EMPGrenade_C.ExecuteUbergraph_BP_EMPGrenade // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

