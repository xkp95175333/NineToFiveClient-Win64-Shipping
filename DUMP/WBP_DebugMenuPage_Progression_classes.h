// WidgetBlueprintGeneratedClass WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C
// Size: 0x2c1 (Inherited: 0x260)
struct UWBP_DebugMenuPage_Progression_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Button_C* Add1000XP; // 0x268(0x08)
	struct UWBP_Button_C* AddCustomXPButton; // 0x270(0x08)
	struct UWBP_Button_C* AddXPToNextLevel; // 0x278(0x08)
	struct UEditableText* CustomXPAmount; // 0x280(0x08)
	struct UWBP_Button_C* FakeReward1; // 0x288(0x08)
	struct UWBP_Button_C* FakeReward2; // 0x290(0x08)
	struct UWBP_Button_C* FetchRewards; // 0x298(0x08)
	struct UWBP_Button_C* RefreshCampaigns; // 0x2a0(0x08)
	struct UWBP_Button_C* RefreshMissions; // 0x2a8(0x08)
	struct FMulticastInlineDelegate OnClosed; // 0x2b0(0x10)
	bool ShouldReload; // 0x2c0(0x01)

	void GetXpToNextLvl(int32_t XpToNextLevel); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.GetXpToNextLvl // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCurrentXp(int32_t CurrentXp); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.GetCurrentXp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BndEvt__WBP_DebugMenuPage_Progression_Add1000XP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.BndEvt__WBP_DebugMenuPage_Progression_Add1000XP_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_DebugMenuPage_Progression_CustomXPAmount_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.BndEvt__WBP_DebugMenuPage_Progression_CustomXPAmount_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_DebugMenuPage_Progression_AddCustomXPButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.BndEvt__WBP_DebugMenuPage_Progression_AddCustomXPButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_DebugMenuPage_Progression_FakeReward1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.BndEvt__WBP_DebugMenuPage_Progression_FakeReward1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_DebugMenuPage_Progression_FakeReward2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.BndEvt__WBP_DebugMenuPage_Progression_FakeReward2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_DebugMenuPage_Progression_AddProgression_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.BndEvt__WBP_DebugMenuPage_Progression_AddProgression_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_DebugMenuPage_Progression_FetchRewards_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.BndEvt__WBP_DebugMenuPage_Progression_FetchRewards_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void DoNothing1(enum class EHWErrorMessage ErrorMessage); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.DoNothing1 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoNothing2(bool Result); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.DoNothing2 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_DebugMenuPage_Progression_RefreshMissions_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.BndEvt__WBP_DebugMenuPage_Progression_RefreshMissions_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_DebugMenuPage_Progression_RefreshCampaigns_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.BndEvt__WBP_DebugMenuPage_Progression_RefreshCampaigns_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void DoFetchRewards(); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.DoFetchRewards // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenuPage_Progression(int32_t EntryPoint); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.ExecuteUbergraph_WBP_DebugMenuPage_Progression // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClosed__DelegateSignature(); // Function WBP_DebugMenuPage_Progression.WBP_DebugMenuPage_Progression_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

