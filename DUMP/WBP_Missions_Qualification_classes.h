// WidgetBlueprintGeneratedClass WBP_Missions_Qualification.WBP_Missions_Qualification_C
// Size: 0x310 (Inherited: 0x270)
struct UWBP_Missions_Qualification_C : UWBP_MenuScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Back-Text; // 0x278(0x08)
	struct UButton* ButtonEsc; // 0x280(0x08)
	struct UOverlay* ESC_Block; // 0x288(0x08)
	struct UHorizontalBox* HorizontalBox_123; // 0x290(0x08)
	struct UImage* Image_90; // 0x298(0x08)
	struct UImage* Image_Back; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* LevelDeltaLabel; // 0x2a8(0x08)
	struct USizeBox* LockIcon; // 0x2b0(0x08)
	struct UImage* NaviBar_2; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* RemainingXpLabel; // 0x2c0(0x08)
	struct UWrapBox* Rewards; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* UnLockLevelLabel; // 0x2d0(0x08)
	struct UWBP_CorporationBadge_C* WBP_CorporationBadge; // 0x2d8(0x08)
	struct UWBP_InternProgressBar_C* WBP_InternProgressBar; // 0x2e0(0x08)
	struct UWBP_Reward_C* WBP_Reward; // 0x2e8(0x08)
	struct UWBP_Reward_C* WBP_Reward_2; // 0x2f0(0x08)
	struct UWBP_Reward_C* WBP_Reward_3; // 0x2f8(0x08)
	struct UWBP_Reward_C* WBP_Reward_4; // 0x300(0x08)
	struct UWBP_ScreenHeader2_C* WBP_ScreenHeader2; // 0x308(0x08)

	void ResetRewardsAndText(); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.ResetRewardsAndText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLevelXText(int32_t Level); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.SetLevelXText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PeekRewards(int32_t Level); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.PeekRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowNextLevelRewards(); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.ShowNextLevelRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowLevelRewards(int32_t Level); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.ShowLevelRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitQualificationScreen(int32_t Points); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.InitQualificationScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitNextLevelRewards(int32_t Points); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.InitNextLevelRewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitLevelProgressBar(int32_t Points); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.InitLevelProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetXPText(int32_t Points); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.SetXPText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnBack(bool IsHandled); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.OnBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ButtonEsc_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.BndEvt__ButtonEsc_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void InitializeScreen(); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.InitializeScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void GotoHubMainPage(); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.GotoHubMainPage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Missions_Qualification_ButtonEsc_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.BndEvt__WBP_Missions_Qualification_ButtonEsc_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Missions_Qualification_ButtonEsc_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.BndEvt__WBP_Missions_Qualification_ButtonEsc_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Missions_Qualification(int32_t EntryPoint); // Function WBP_Missions_Qualification.WBP_Missions_Qualification_C.ExecuteUbergraph_WBP_Missions_Qualification // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

