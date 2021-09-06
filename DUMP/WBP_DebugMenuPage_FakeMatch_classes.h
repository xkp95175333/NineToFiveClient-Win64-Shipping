// WidgetBlueprintGeneratedClass WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C
// Size: 0x430 (Inherited: 0x260)
struct UWBP_DebugMenuPage_FakeMatch_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Button_C* AddCustomEvent; // 0x268(0x08)
	struct UWBP_Button_C* AddFlow; // 0x270(0x08)
	struct UCheckBox* AsOneMathCheckbox; // 0x278(0x08)
	struct UCheckBox* CollectAfterEachCheckbox; // 0x280(0x08)
	struct UVerticalBox* CustomEventsContainer; // 0x288(0x08)
	struct UVerticalBox* Events; // 0x290(0x08)
	struct UVerticalBox* FlowSettingsContainer; // 0x298(0x08)
	struct UComboBoxString* LoadoutsCombo; // 0x2a0(0x08)
	struct USlider* MaxBudget; // 0x2a8(0x08)
	struct USlider* MinBudget; // 0x2b0(0x08)
	struct UEditableText* NumMatches; // 0x2b8(0x08)
	struct UEditableText* PrimaryArmorDMG; // 0x2c0(0x08)
	struct UEditableText* PrimaryBodyDMG; // 0x2c8(0x08)
	struct UWBP_Button_C* Random; // 0x2d0(0x08)
	struct UEditableText* SecondaryArmorDMG; // 0x2d8(0x08)
	struct UEditableText* SecondaryBodyDMG; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_12; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_14; // 0x2f0(0x08)
	struct UTextBlock* TextBlock_1171; // 0x2f8(0x08)
	struct UWBP_Button_C* WBP_Button; // 0x300(0x08)
	struct UWBP_DebugMenu_FakeMatchFlowSettings_C* WBP_DebugMenu_FakeMatchFlowSettings; // 0x308(0x08)
	struct UWBP_DebugMenu_GameplayEvent_C* WBP_DebugMenu_GameplayEvent; // 0x310(0x08)
	struct UWBP_DebugMenu_GameplayEvent_C* WBP_DebugMenu_GameplayEvent_265; // 0x318(0x08)
	struct USlider* WinRate; // 0x320(0x08)
	struct UWBP_Button_C* WithEvents; // 0x328(0x08)
	struct UEditableText* NewVar_1; // 0x330(0x08)
	int32_t TimesWon; // 0x338(0x04)
	int32_t TotalKills; // 0x33c(0x04)
	int32_t TotalAssists; // 0x340(0x04)
	int32_t TotalDroneKills; // 0x344(0x04)
	int32_t TotalDevicesDestroyed; // 0x348(0x04)
	int32_t TotalTeamSupport; // 0x34c(0x04)
	int32_t TotalTimesWon; // 0x350(0x04)
	int32_t TotalCreditsFromBudget; // 0x354(0x04)
	struct TArray<struct FHWFakeMatchFlowSettings> FlowSettings; // 0x358(0x10)
	struct TArray<struct FHWFakeMatchSimulationEvent> EventData; // 0x368(0x10)
	int32_t AsOneMatchInt; // 0x378(0x04)
	enum class EHWGameplayEventType NewVar_2; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	struct TArray<struct FHWFakeMatchWeaponUsage> WeaponUsage; // 0x380(0x10)
	int32_t CollectAfterEachInt; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FMulticastInlineDelegate OnClosed; // 0x398(0x10)
	struct FHWLoadoutData SelectedLoadout; // 0x3a8(0x88)

	struct UWBP_DebugMenu_FakeMatchCustomEventSettings_C* CreateCustomEvent(enum class EHWGameplayEventType InitEvent); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.CreateCustomEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetGameplayEventTypeFromName(struct FString EventName, enum class EHWGameplayEventType EnumValue); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.GetGameplayEventTypeFromName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FText MaxBudgetBind(); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.MaxBudgetBind // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FText MinBudgetBind(); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.MinBudgetBind // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FText WinRateBind(); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.WinRateBind // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetEvents(struct TArray<struct FHWGameplayEvent> Events); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.GetEvents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BndEvt__WBP_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.BndEvt__WBP_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void DoMatch(struct TArray<struct FHWGameplayEvent> Events); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.DoMatch // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WithEvents_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.BndEvt__WithEvents_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.BndEvt__WBP_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddFlow_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.BndEvt__AddFlow_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MaxBudget_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.BndEvt__MaxBudget_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MinBudget_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.BndEvt__MinBudget_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__NumMatches_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.BndEvt__NumMatches_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddCustomEvent_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.BndEvt__AddCustomEvent_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenuPage_FakeMatch(int32_t EntryPoint); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.ExecuteUbergraph_WBP_DebugMenuPage_FakeMatch // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClosed__DelegateSignature(); // Function WBP_DebugMenuPage_FakeMatch.WBP_DebugMenuPage_FakeMatch_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

