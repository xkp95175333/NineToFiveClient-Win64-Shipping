// WidgetBlueprintGeneratedClass WBP_Wallet_Booster_Block.WBP_Wallet_Booster_Block_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_Wallet_Booster_Block_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Animated_Glow; // 0x268(0x08)
	struct UImage* Booster_Glow_Animated; // 0x270(0x08)
	struct UImage* Booster_Icon; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* BoosterAmount; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* BoosterLabel; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* BoosterLabel_2; // 0x290(0x08)
	struct UImage* Divider; // 0x298(0x08)
	struct UImage* Divider_2; // 0x2a0(0x08)
	struct UImage* Image_Booster; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* Timer; // 0x2b0(0x08)
	struct UWBP_MainButton_C* WBP_Activate_Booster; // 0x2b8(0x08)
	struct UWBP_CloseButton_C* WBP_CloseButton; // 0x2c0(0x08)
	struct UWBP_InfoButton_C* WBP_InfoButton; // 0x2c8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2d0(0x08)

	void BP_OnEntryReleased(); // Function WBP_Wallet_Booster_Block.WBP_Wallet_Booster_Block_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Wallet_Booster_Block.WBP_Wallet_Booster_Block_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Wallet_Booster_Block.WBP_Wallet_Booster_Block_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Wallet_Booster_Block.WBP_Wallet_Booster_Block_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Wallet_Booster_Block(int32_t EntryPoint); // Function WBP_Wallet_Booster_Block.WBP_Wallet_Booster_Block_C.ExecuteUbergraph_WBP_Wallet_Booster_Block // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

