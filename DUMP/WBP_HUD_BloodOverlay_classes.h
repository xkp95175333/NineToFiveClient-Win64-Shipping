// WidgetBlueprintGeneratedClass WBP_HUD_BloodOverlay.WBP_HUD_BloodOverlay_C
// Size: 0x280 (Inherited: 0x268)
struct UWBP_HUD_BloodOverlay_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Anim; // 0x270(0x08)
	struct UBorder* Blood; // 0x278(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HUD_BloodOverlay.WBP_HUD_BloodOverlay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_HUD_BloodOverlay(int32_t EntryPoint); // Function WBP_HUD_BloodOverlay.WBP_HUD_BloodOverlay_C.ExecuteUbergraph_WBP_HUD_BloodOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

