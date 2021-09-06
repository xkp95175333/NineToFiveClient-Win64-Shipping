// WidgetBlueprintGeneratedClass WBP_Missions_Card.WBP_Missions_Card_C
// Size: 0x3d9 (Inherited: 0x260)
struct UWBP_Missions_Card_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BG; // 0x268(0x08)
	struct UImage* BG_3; // 0x270(0x08)
	struct UOverlay* Cancel; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* CancelLabel; // 0x280(0x08)
	struct UWBP_MainButton_C* CancelNoButton; // 0x288(0x08)
	struct UWBP_MainButton_C* CancelYesButton; // 0x290(0x08)
	struct UOverlay* Card; // 0x298(0x08)
	struct UButton* CloseBtn; // 0x2a0(0x08)
	struct UImage* CloseIcon; // 0x2a8(0x08)
	struct UWBP_MainButton_C* CollectBtn_2; // 0x2b0(0x08)
	struct UBorder* CollectReward; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* Condition; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* Condition_3; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* ConditionDescription; // 0x2d0(0x08)
	struct UWidgetSwitcher* Corporation; // 0x2d8(0x08)
	struct UImage* CorporationImage; // 0x2e0(0x08)
	struct UImage* CorporationImage_2; // 0x2e8(0x08)
	struct UImage* CorporationImage_3; // 0x2f0(0x08)
	struct UWBP_RichTextLabel_C* CurrentCount; // 0x2f8(0x08)
	struct UWBP_MainButton_C* DevAddProgressButton1; // 0x300(0x08)
	struct UWBP_MainButton_C* DevAddProgressButton20; // 0x308(0x08)
	struct UImage* Div; // 0x310(0x08)
	struct UImage* Div_2; // 0x318(0x08)
	struct UImage* Div_3; // 0x320(0x08)
	struct UBorder* Empty; // 0x328(0x08)
	struct UOverlay* Farmira; // 0x330(0x08)
	struct UVerticalBox* Footer_Farmira; // 0x338(0x08)
	struct UVerticalBox* Footer_Mash; // 0x340(0x08)
	struct UVerticalBox* Footer_NWF; // 0x348(0x08)
	struct UOverlay* Mash; // 0x350(0x08)
	struct UOverlay* NoCorporation; // 0x358(0x08)
	struct UOverlay* NWF; // 0x360(0x08)
	struct USizeBox* Progress; // 0x368(0x08)
	struct UWBP_CircularProgressBar_C* ProgressBar; // 0x370(0x08)
	struct UWBP_RichTextLabel_C* Reward; // 0x378(0x08)
	struct UWBP_RichTextLabel_C* RewardDescription; // 0x380(0x08)
	struct UBorder* SelectMission; // 0x388(0x08)
	struct UWBP_RichTextLabel_C* SponsoredLabel; // 0x390(0x08)
	struct UWBP_RichTextLabel_C* SponsoredLabel_2; // 0x398(0x08)
	struct UWBP_RichTextLabel_C* SponsoredLabel_3; // 0x3a0(0x08)
	struct UWidgetSwitcher* State; // 0x3a8(0x08)
	struct UWBP_RichTextLabel_C* TotalCount; // 0x3b0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x3b8(0x08)
	struct UBP_Mission_Item_Data_C* MissionItem; // 0x3c0(0x08)
	struct TArray<struct FHWReward> CurrentRewards; // 0x3c8(0x10)
	bool ShowRewardInWeaponView; // 0x3d8(0x01)

	void SetEmpty(); // Function WBP_Missions_Card.WBP_Missions_Card_C.SetEmpty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Goto Weapon View(struct FName PartReceiverId, enum class EHWInventoryItemType ConfigType, struct FName PartConfigId); // Function WBP_Missions_Card.WBP_Missions_Card_C.Goto Weapon View // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CanRerollRewards(struct TArray<struct FHWReward> Rewards, bool Result); // Function WBP_Missions_Card.WBP_Missions_Card_C.CanRerollRewards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetSelectMission(); // Function WBP_Missions_Card.WBP_Missions_Card_C.SetSelectMission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMission(struct UBP_Mission_Item_Data_C* Item); // Function WBP_Missions_Card.WBP_Missions_Card_C.SetMission // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowCancel(); // Function WBP_Missions_Card.WBP_Missions_Card_C.ShowCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_MainButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Missions_Card.WBP_Missions_Card_C.BndEvt__WBP_MainButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CancelYesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Missions_Card.WBP_Missions_Card_C.BndEvt__CancelYesButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CloseBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Missions_Card.WBP_Missions_Card_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__DevAddProgressButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Missions_Card.WBP_Missions_Card_C.BndEvt__DevAddProgressButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__DevAddProgressButton1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Missions_Card.WBP_Missions_Card_C.BndEvt__DevAddProgressButton1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Missions_Card.WBP_Missions_Card_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CollectBtn_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Missions_Card.WBP_Missions_Card_C.BndEvt__CollectBtn_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnCollect(struct FHWFetchRewardsResponse Response); // Function WBP_Missions_Card.WBP_Missions_Card_C.OnCollect // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCollectFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Missions_Card.WBP_Missions_Card_C.OnCollectFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCollected(struct FHWProfileWithCollectedRewardsResponse Response); // Function WBP_Missions_Card.WBP_Missions_Card_C.OnCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnFinalCollectFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Missions_Card.WBP_Missions_Card_C.OnFinalCollectFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRewardPopupClosed(); // Function WBP_Missions_Card.WBP_Missions_Card_C.OnRewardPopupClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CloseBtn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Missions_Card.WBP_Missions_Card_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CloseBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Missions_Card.WBP_Missions_Card_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnViewRewardInArmory(struct FName ReceiverPartId, struct FName ConfigId, enum class EHWInventoryItemType ConfigType); // Function WBP_Missions_Card.WBP_Missions_Card_C.OnViewRewardInArmory // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Missions_Card(int32_t EntryPoint); // Function WBP_Missions_Card.WBP_Missions_Card_C.ExecuteUbergraph_WBP_Missions_Card // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

