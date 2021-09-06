// WidgetBlueprintGeneratedClass WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C
// Size: 0x3e0 (Inherited: 0x268)
struct UWBP_PostMatch2_Rewards_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Reveal; // 0x270(0x08)
	struct UWBP_MainButton_C* BackBtn; // 0x278(0x08)
	struct UBorder* Border_1; // 0x280(0x08)
	struct UImage* BottomDetail; // 0x288(0x08)
	struct UImage* Bottomline; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* CompensationLabel; // 0x298(0x08)
	struct UWBP_MainButton_C* ExitBtn; // 0x2a0(0x08)
	struct USizeBox* ExitButton; // 0x2a8(0x08)
	struct UImage* Icon; // 0x2b0(0x08)
	struct UVerticalBox* MaterialBalance; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* MaterialBalanceAmount; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* MaterialBalanceLabel; // 0x2c8(0x08)
	struct UImage* MaterialIcon; // 0x2d0(0x08)
	struct USizeBox* MissionsButton; // 0x2d8(0x08)
	struct USizeBox* OpenInArmory; // 0x2e0(0x08)
	struct UWBP_MainButton_C* OpenInArmoryButton; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* Optionaldescription; // 0x2f0(0x08)
	struct UButton* RerollBtn; // 0x2f8(0x08)
	struct UWBP_RichTextLabel_C* RerollCostAmount; // 0x300(0x08)
	struct UImage* RerollCostIcon; // 0x308(0x08)
	struct UWidgetSwitcher* RerollEnable; // 0x310(0x08)
	struct UWBP_RichTextLabel_C* RerollLabel; // 0x318(0x08)
	struct UScrollBox* RewardsScroll; // 0x320(0x08)
	struct UImage* Topline; // 0x328(0x08)
	struct UWBP_PostMatch_Reward_C* WBP_PostMatch_Reward; // 0x330(0x08)
	struct UWBP_PostMatch_Reward_C* WBP_PostMatch_Reward_2; // 0x338(0x08)
	struct UWBP_PostMatch_Reward_C* WBP_PostMatch_Reward_3; // 0x340(0x08)
	struct UWBP_PostMatch_Reward_C* WBP_PostMatch_Reward_4; // 0x348(0x08)
	struct UWBP_PostMatch_Reward_C* WBP_PostMatch_Reward_5; // 0x350(0x08)
	bool CanReroll; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct TArray<struct FHWReward> Rewards; // 0x360(0x10)
	struct FMulticastInlineDelegate OnClosed; // 0x370(0x10)
	struct FMulticastInlineDelegate OnSequenceComplete; // 0x380(0x10)
	struct FString MissionId; // 0x390(0x10)
	enum class EHWInventoryItemType Config Type; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FMulticastInlineDelegate OnButtonPressed; // 0x3a8(0x10)
	bool IsMissionReward; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	struct FName PartReceiverId; // 0x3bc(0x08)
	struct FName PartConfigId; // 0x3c4(0x08)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FMulticastInlineDelegate ViewRewardInArmory; // 0x3d0(0x10)

	void GetRerollCost(int32_t Cost, enum class EHWFaction Faction); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.GetRerollCost // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateMaterialBalance(); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.UpdateMaterialBalance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowReward(struct FHWReward Reward, bool Result); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.ShowReward // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(struct FText Title, struct FText Message, bool CanReroll, bool CanOpenItem, struct TArray<struct FHWReward> Rewards, struct FString MissionId); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.Initialize // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ProceedButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.BndEvt__ProceedButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Enter Screen(); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.Enter Screen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RerollBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.BndEvt__RerollBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UpdateRewards(); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.UpdateRewards // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRerollResponse(struct FHWFetchRewardsResponse Response); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.OnRerollResponse // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRerollFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.OnRerollFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RerollBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.BndEvt__RerollBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RerollBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.BndEvt__RerollBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_PostMatch2_Rewards_BackBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.BndEvt__WBP_PostMatch2_Rewards_BackBtn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_PostMatch2_Rewards_OpenInArmoryButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.BndEvt__WBP_PostMatch2_Rewards_OpenInArmoryButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_PostMatch2_Rewards(int32_t EntryPoint); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.ExecuteUbergraph_WBP_PostMatch2_Rewards // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void ViewRewardInArmory__DelegateSignature(struct FName ReceiverPartId, struct FName ConfigId, enum class EHWInventoryItemType ConfigType); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.ViewRewardInArmory__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnButtonPressed__DelegateSignature(enum class EHW_RewardButton Button); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.OnButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSequenceComplete__DelegateSignature(); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.OnSequenceComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClosed__DelegateSignature(); // Function WBP_PostMatch2_Rewards.WBP_PostMatch2_Rewards_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

