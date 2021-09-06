// WidgetBlueprintGeneratedClass WBP_ShopSubSection.WBP_ShopSubsection_C
// Size: 0x388 (Inherited: 0x268)
struct UWBP_ShopSubsection_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* Border_1; // 0x270(0x08)
	struct UImage* Grid_Pattern; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Heading; // 0x280(0x08)
	struct UVerticalBox* Layouts; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* Timer; // 0x290(0x08)
	struct UImage* TimerIcon; // 0x298(0x08)
	struct UOverlay* TimerOL; // 0x2a0(0x08)
	struct UWBP_ShopLayout_Base_C* WBP_ShopLayout_Base; // 0x2a8(0x08)
	struct TMap<struct FString, struct UWBP_ShopLayout_Base_C*> LayoutMap; // 0x2b0(0x50)
	struct FHWShopCampaign CampaignData; // 0x300(0x58)
	struct FMulticastInlineDelegate CampaignExpired; // 0x358(0x10)
	struct FMulticastInlineDelegate ItemClicked; // 0x368(0x10)
	bool LowTimerHighlighted; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UBP_ShopSubsection_C* ShopSubsection; // 0x380(0x08)

	void GetCampaignId(struct FString ID); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.GetCampaignId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetCampaignInfo(); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.SetCampaignInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetLayout(struct FString LayoutId, struct UWBP_ShopLayout_Base_C* LayoutClass); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.GetLayout // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetContent(); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnEntryReleased(); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ShowCampaignTimer(); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.ShowCampaignTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateTimer(); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.UpdateTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ShopSubsection(int32_t EntryPoint); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.ExecuteUbergraph_WBP_ShopSubsection // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void ItemClicked__DelegateSignature(struct FHWShopItem Item); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.ItemClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CampaignExpired__DelegateSignature(struct FString CampaignId); // Function WBP_ShopSubSection.WBP_ShopSubsection_C.CampaignExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

