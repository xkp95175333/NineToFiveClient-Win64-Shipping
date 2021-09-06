// WidgetBlueprintGeneratedClass WBP_SingleItem.WBP_SingleItem_C
// Size: 0x30a (Inherited: 0x268)
struct UWBP_SingleItem_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UOverlay* Consumed; // 0x270(0x08)
	struct UOverlay* Default; // 0x278(0x08)
	struct UOverlay* Empty; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* InventoryCount; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* InventoryCount_2; // 0x290(0x08)
	struct UImage* ItemIcon; // 0x298(0x08)
	struct UImage* ItemIcon_2; // 0x2a0(0x08)
	struct UImage* NoItem; // 0x2a8(0x08)
	struct UWidgetSwitcher* States; // 0x2b0(0x08)
	struct UWBP_HUD_PanelBox_Vertical_C* WBP_HUD_PanelBox_Vertical; // 0x2b8(0x08)
	struct UWBP_HUD_PanelBox_Vertical_C* WBP_HUD_PanelBox_Vertical_2; // 0x2c0(0x08)
	struct UWBP_HUD_PanelBox_Vertical_C* WBP_HUD_PanelBox_Vertical_3; // 0x2c8(0x08)
	struct UWBP_KeyPrompt_C* WBP_KeyPrompt; // 0x2d0(0x08)
	struct UWBP_KeyPrompt_C* WBP_KeyPrompt_2; // 0x2d8(0x08)
	struct FLinearColor ColorDisabled; // 0x2e0(0x10)
	struct FLinearColor ColorEnabled; // 0x2f0(0x10)
	struct AHWItemBase* CurrentItem; // 0x300(0x08)
	bool PreviousTriggerable; // 0x308(0x01)
	bool AnimationTriggered; // 0x309(0x01)

	void SetAmount(); // Function WBP_SingleItem.WBP_SingleItem_C.SetAmount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetKeyPrompt(int32_t Slot); // Function WBP_SingleItem.WBP_SingleItem_C.SetKeyPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetItem(struct AHWItemBase* Item); // Function WBP_SingleItem.WBP_SingleItem_C.SetItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_SingleItem.WBP_SingleItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SingleItem.WBP_SingleItem_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_SingleItem(int32_t EntryPoint); // Function WBP_SingleItem.WBP_SingleItem_C.ExecuteUbergraph_WBP_SingleItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

