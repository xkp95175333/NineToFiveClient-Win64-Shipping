// WidgetBlueprintGeneratedClass WBP_TeamInfoArmorFeaturePanel.WBP_TeamInfoArmorFeaturePanel_C
// Size: 0x2b0 (Inherited: 0x268)
struct UWBP_TeamInfoArmorFeaturePanel_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UProgressBar* ArmorBar; // 0x270(0x08)
	struct UImage* Background; // 0x278(0x08)
	struct UImage* BleedIcon; // 0x280(0x08)
	struct UProgressBar* HealthBar; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* OutOfAmmo; // 0x290(0x08)
	struct UHWHumanArmorComponent* ArmorComp; // 0x298(0x08)
	struct UHWInjuryComponent* InjuryComp; // 0x2a0(0x08)
	struct UHWFiringComponent* FiringComp; // 0x2a8(0x08)

	bool IsAmmoLow(); // Function WBP_TeamInfoArmorFeaturePanel.WBP_TeamInfoArmorFeaturePanel_C.IsAmmoLow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetPlayer(struct AHWPlayerState* PlayerState); // Function WBP_TeamInfoArmorFeaturePanel.WBP_TeamInfoArmorFeaturePanel_C.SetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_TeamInfoArmorFeaturePanel.WBP_TeamInfoArmorFeaturePanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_TeamInfoArmorFeaturePanel(int32_t EntryPoint); // Function WBP_TeamInfoArmorFeaturePanel.WBP_TeamInfoArmorFeaturePanel_C.ExecuteUbergraph_WBP_TeamInfoArmorFeaturePanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

