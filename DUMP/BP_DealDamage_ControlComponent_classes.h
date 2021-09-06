// BlueprintGeneratedClass BP_DealDamage_ControlComponent.BP_DealDamage_ControlComponent_C
// Size: 0xb8 (Inherited: 0xb0)
struct UBP_DealDamage_ControlComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)

	void Log Usage(struct AHWCharacter* Target, struct FHWHumanDamageResult DamageResult); // Function BP_DealDamage_ControlComponent.BP_DealDamage_ControlComponent_C.Log Usage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ServerDealDamage(struct AHWHumanCharacter* DamageTarget, enum class EHWDamageType DamageType, float DamageValue, bool SeparateArmorAndHealth, float OptionalArmorValue, enum class EHWBodypart Bodypart, bool CanStartBleeding, bool SkipDownedState); // Function BP_DealDamage_ControlComponent.BP_DealDamage_ControlComponent_C.ServerDealDamage // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_DealDamage_ControlComponent(int32_t EntryPoint); // Function BP_DealDamage_ControlComponent.BP_DealDamage_ControlComponent_C.ExecuteUbergraph_BP_DealDamage_ControlComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

