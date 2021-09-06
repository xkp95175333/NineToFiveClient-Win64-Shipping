// WidgetBlueprintGeneratedClass WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C
// Size: 0x2b0 (Inherited: 0x260)
struct UWBP_Armory3_Code_Card_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Description; // 0x268(0x08)
	struct UImage* Image_BPCode; // 0x270(0x08)
	struct UImage* SelectedBorder; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Title; // 0x280(0x08)
	struct UWBP_Armory3_SellButton_C* WBP_Armory3_SellButton; // 0x288(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x290(0x08)
	struct UHWArmoryWeaponCodeItem* Item; // 0x298(0x08)
	struct FMulticastInlineDelegate OnCodeSold; // 0x2a0(0x10)

	void BP_OnEntryReleased(); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemChanged(struct UHWArmoryWeaponCodeItem* Item); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.OnItemChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSellConfirmed(bool Result); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.OnSellConfirmed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Armory3_SellButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.BndEvt__WBP_Armory3_SellButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnCollected(struct FHWProfileWithCollectedRewardsResponse Response); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.OnCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCollectFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.OnCollectFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_Code_Card(int32_t EntryPoint); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.ExecuteUbergraph_WBP_Armory3_Code_Card // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnCodeSold__DelegateSignature(); // Function WBP_Armory3_Code_Card.WBP_Armory3_Code_Card_C.OnCodeSold__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

