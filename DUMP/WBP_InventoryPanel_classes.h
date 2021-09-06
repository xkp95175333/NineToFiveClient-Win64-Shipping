// WidgetBlueprintGeneratedClass WBP_InventoryPanel.WBP_InventoryPanel_C
// Size: 0x299 (Inherited: 0x268)
struct UWBP_InventoryPanel_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_HUD_PanelBox_Vertical_C* WBP_HUD_PanelBox_Vertical; // 0x270(0x08)
	struct UWBP_HUD_PanelBox_Vertical_C* WBP_HUD_PanelBox_Vertical_2; // 0x278(0x08)
	struct UWBP_InventoryPanel_HealthArmorPanel_C* WBP_InventoryPanel_HealthArmorPanel; // 0x280(0x08)
	struct UWBP_ItemsPanel_C* WBP_ItemsPanel; // 0x288(0x08)
	struct UWBP_WeaponPanel_C* WBP_WeaponPanel; // 0x290(0x08)
	bool InitForLocalPlayer; // 0x298(0x01)

	void Construct(); // Function WBP_InventoryPanel.WBP_InventoryPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_InventoryPanel(int32_t EntryPoint); // Function WBP_InventoryPanel.WBP_InventoryPanel_C.ExecuteUbergraph_WBP_InventoryPanel // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

