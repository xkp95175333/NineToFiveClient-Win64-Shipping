// WidgetBlueprintGeneratedClass WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C
// Size: 0x315 (Inherited: 0x260)
struct UWBP_Armory3_ParameterBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* ActualRangeBox; // 0x268(0x08)
	struct USizeBox* AddUpgradeContainer; // 0x270(0x08)
	struct UImage* DottedLine; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* MaxLabel; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* MinLabel; // 0x290(0x08)
	struct UProgressBar* ProgressBarAbove; // 0x298(0x08)
	struct UProgressBar* ProgressBarBelow; // 0x2a0(0x08)
	struct USizeBox* ProgressBars; // 0x2a8(0x08)
	struct UButton* Removebutton; // 0x2b0(0x08)
	struct UButton* Removebutton_2; // 0x2b8(0x08)
	struct USizeBox* RemoveUpgradeContainer; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* ValueText; // 0x2c8(0x08)
	float CurrentValue; // 0x2d0(0x04)
	float MinValue; // 0x2d4(0x04)
	float MaxValue; // 0x2d8(0x04)
	enum class EHWCraftingParameter CurrentParameter; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	float UpgradeOrBonusValue; // 0x2e0(0x04)
	float ComparisonValue; // 0x2e4(0x04)
	bool IsPercentage; // 0x2e8(0x01)
	enum class BPE_Armory_Progress_Bar_Mode DisplayMode; // 0x2e9(0x01)
	bool HasUpgradeButton; // 0x2ea(0x01)
	char pad_2EB[0x5]; // 0x2eb(0x05)
	struct FMulticastInlineDelegate OnAddUpgradeClicked; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnRemoveUpgradeClicked; // 0x300(0x10)
	bool ShowMaxValue; // 0x310(0x01)
	bool ShowActualRange; // 0x311(0x01)
	bool ShowAdd; // 0x312(0x01)
	bool ShowRemove; // 0x313(0x01)
	bool MaximumReached; // 0x314(0x01)

	struct UWidget* CreateParameterTooltip(); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.CreateParameterTooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateUpgradeButtonVisibility(); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.UpdateUpgradeButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetUpgradeButtonsEnabled(bool ShowAdd, bool ShowRemove, bool MaximumReached); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.SetUpgradeButtonsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Default Visibility(); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.Set Default Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowComparisonModeWithParameter(float CompareValue, enum class BPE_UIColors PositiveColor, enum class BPE_UIColors NegativeColor, bool ShowMaximum); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.ShowComparisonModeWithParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowComparisonMode(); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.ShowComparisonMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowDefaultMode(); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.ShowDefaultMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowFixedMode(); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.ShowFixedMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsComparison(); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.IsComparison // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCurrentMode(enum class BPE_Armory_Progress_Bar_Mode Result); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.GetCurrentMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetProgressBarPercent(struct UProgressBar* ProgressBar, float Value, float Min, float Max); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.SetProgressBarPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetParameters(struct UHWWeaponParameter* Param); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.SetParameters // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateWidget(); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.UpdateWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Removebutton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.BndEvt__Removebutton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Removebutton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.BndEvt__Removebutton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_ParameterBar(int32_t EntryPoint); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.ExecuteUbergraph_WBP_Armory3_ParameterBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnRemoveUpgradeClicked__DelegateSignature(enum class EHWCraftingParameter Parameter); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.OnRemoveUpgradeClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAddUpgradeClicked__DelegateSignature(enum class EHWCraftingParameter Parameter); // Function WBP_Armory3_ParameterBar.WBP_Armory3_ParameterBar_C.OnAddUpgradeClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

