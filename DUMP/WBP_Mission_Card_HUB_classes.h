// WidgetBlueprintGeneratedClass WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C
// Size: 0x329 (Inherited: 0x260)
struct UWBP_Mission_Card_HUB_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Claim_Icon; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* ClaimReward_Label; // 0x270(0x08)
	struct USizeBox* Completed; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* ConditionDescription; // 0x280(0x08)
	struct UWidgetSwitcher* CorporationBGSwitcher; // 0x288(0x08)
	struct UOverlay* Empty; // 0x290(0x08)
	struct UImage* Farmira; // 0x298(0x08)
	struct UImage* Glow; // 0x2a0(0x08)
	struct UBorder* Hover; // 0x2a8(0x08)
	struct UImage* Mash; // 0x2b0(0x08)
	struct UOverlay* Mission_in_Progress; // 0x2b8(0x08)
	struct UButton* MissionButton; // 0x2c0(0x08)
	struct UImage* NWF; // 0x2c8(0x08)
	struct UImage* Plus_Icon; // 0x2d0(0x08)
	struct UWBP_RichTextLabel_C* ProgressAndTotalCount; // 0x2d8(0x08)
	struct UImage* PulseBG; // 0x2e0(0x08)
	struct UHorizontalBox* Select_Mission; // 0x2e8(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2f0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x2f8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Content; // 0x300(0x08)
	struct UBP_Mission_Item_Data_C* MissionItem; // 0x308(0x08)
	bool bIsClaimable; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct TArray<struct FHWReward> CurrentRewards; // 0x318(0x10)
	bool ShowRewardInWeaponView; // 0x328(0x01)

	void Goto Weapon View(struct FName PartReceiverId, enum class EHWInventoryItemType ConfigType, struct FName PartConfigId); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.Goto Weapon View // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CanRerollRewards(struct TArray<struct FHWReward> Rewards, bool Result); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.CanRerollRewards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetEmpty(); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.SetEmpty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMission(struct UBP_Mission_Item_Data_C* Item); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.SetMission // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Mission_Card_HUB_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.BndEvt__WBP_Mission_Card_HUB_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Mission_Card_HUB_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.BndEvt__WBP_Mission_Card_HUB_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Mission_Card_HUB_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.BndEvt__WBP_Mission_Card_HUB_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnCollect(struct FHWFetchRewardsResponse Response); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.OnCollect // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCollectFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.OnCollectFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCollected(struct FHWProfileWithCollectedRewardsResponse Response); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.OnCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnFinalCollectFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.OnFinalCollectFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRewardPopupClosed(); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.OnRewardPopupClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnViewRewardInArmory(struct FName ReceiverPartId, struct FName ConfigId, enum class EHWInventoryItemType ConfigType); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.OnViewRewardInArmory // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Mission_Card_HUB(int32_t EntryPoint); // Function WBP_Mission_Card_HUB.WBP_Mission_Card_HUB_C.ExecuteUbergraph_WBP_Mission_Card_HUB // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

