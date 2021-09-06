// WidgetBlueprintGeneratedClass WBP_Debug_HumanDamage.WBP_Debug_HumanDamage_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_Debug_HumanDamage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* armorPB; // 0x268(0x08)
	struct UTextBlock* armorTxt; // 0x270(0x08)
	struct UOverlay* downed; // 0x278(0x08)
	struct UProgressBar* downedPB; // 0x280(0x08)
	struct UTextBlock* downedTxt; // 0x288(0x08)
	struct UProgressBar* healthPB; // 0x290(0x08)
	struct UTextBlock* healthTxt; // 0x298(0x08)
	struct AHWHumanCharacter* Human; // 0x2a0(0x08)

	void SetStat(struct UProgressBar* ProgressBar, struct UTextBlock* Text, float Value, float MaxValue, int32_t fractal); // Function WBP_Debug_HumanDamage.WBP_Debug_HumanDamage_C.SetStat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHuman(struct AHWHumanCharacter* Character); // Function WBP_Debug_HumanDamage.WBP_Debug_HumanDamage_C.SetHuman // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Debug_HumanDamage.WBP_Debug_HumanDamage_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Debug_HumanDamage(int32_t EntryPoint); // Function WBP_Debug_HumanDamage.WBP_Debug_HumanDamage_C.ExecuteUbergraph_WBP_Debug_HumanDamage // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

