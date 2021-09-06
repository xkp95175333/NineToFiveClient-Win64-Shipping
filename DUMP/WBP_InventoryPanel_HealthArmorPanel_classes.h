// WidgetBlueprintGeneratedClass WBP_InventoryPanel_HealthArmorPanel.WBP_InventoryPanel_HealthArmorPanel_C
// Size: 0x2f0 (Inherited: 0x260)
struct UWBP_InventoryPanel_HealthArmorPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* Armor; // 0x268(0x08)
	struct UProgressBar* Health; // 0x270(0x08)
	struct FLinearColor ColorArmorFull; // 0x278(0x10)
	struct FLinearColor ColorArmorHigh; // 0x288(0x10)
	struct FLinearColor ColorArmorLow; // 0x298(0x10)
	struct FLinearColor ColorHealthFull; // 0x2a8(0x10)
	struct FLinearColor ColorHealthHigh; // 0x2b8(0x10)
	struct FLinearColor ColorHealthLow; // 0x2c8(0x10)
	float ArmorLowPercentage; // 0x2d8(0x04)
	float HealthLowPercentage; // 0x2dc(0x04)
	struct UHWHumanArmorComponent* ArmorComponent; // 0x2e0(0x08)
	struct UHWInjuryComponent* InjuryComponent; // 0x2e8(0x08)

	void Init(struct UHWHumanArmorComponent* ArmorComponent, struct UHWInjuryComponent* InjuryComponent); // Function WBP_InventoryPanel_HealthArmorPanel.WBP_InventoryPanel_HealthArmorPanel_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetHealthColor(float Amount, bool IsHealth, struct FLinearColor Color); // Function WBP_InventoryPanel_HealthArmorPanel.WBP_InventoryPanel_HealthArmorPanel_C.GetHealthColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateColors(float ArmorPercent, float HealthPercent); // Function WBP_InventoryPanel_HealthArmorPanel.WBP_InventoryPanel_HealthArmorPanel_C.UpdateColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_InventoryPanel_HealthArmorPanel.WBP_InventoryPanel_HealthArmorPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_InventoryPanel_HealthArmorPanel.WBP_InventoryPanel_HealthArmorPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_InventoryPanel_HealthArmorPanel(int32_t EntryPoint); // Function WBP_InventoryPanel_HealthArmorPanel.WBP_InventoryPanel_HealthArmorPanel_C.ExecuteUbergraph_WBP_InventoryPanel_HealthArmorPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

