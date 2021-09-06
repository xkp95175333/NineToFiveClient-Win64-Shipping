// WidgetBlueprintGeneratedClass WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C
// Size: 0x300 (Inherited: 0x260)
struct UWBP_Armory2_Parameter_Bar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* AddUpgradeBorder; // 0x268(0x08)
	struct UWBP_ImageButton_C* AddUpgradeButton; // 0x270(0x08)
	struct USizeBox* AddUpgradeContainer; // 0x278(0x08)
	struct UImage* DottedLine; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Label; // 0x288(0x08)
	struct UProgressBar* ProgressBarAbove; // 0x290(0x08)
	struct UProgressBar* ProgressBarBelow; // 0x298(0x08)
	struct USizeBox* ProgressBars; // 0x2a0(0x08)
	struct UWBP_ImageButton_C* RemoveUpgradeButton; // 0x2a8(0x08)
	struct USizeBox* RemoveUpgradeContainer; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* ValueText; // 0x2b8(0x08)
	float CurrentValue; // 0x2c0(0x04)
	float MinValue; // 0x2c4(0x04)
	float MaxValue; // 0x2c8(0x04)
	enum class EHWCraftingParameter CurrentParameter; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	float UpgradeOrBonusValue; // 0x2d0(0x04)
	float ComparisonValue; // 0x2d4(0x04)
	bool IsPercentage; // 0x2d8(0x01)
	enum class BPE_Armory_Progress_Bar_Mode DisplayMode; // 0x2d9(0x01)
	bool HasUpgradeButton; // 0x2da(0x01)
	char pad_2DB[0x5]; // 0x2db(0x05)
	struct FMulticastInlineDelegate OnAddUpgradeClicked; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnRemoveUpgradeClicked; // 0x2f0(0x10)

	void SetAddUpgradeHighlighted(bool Enabled); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.SetAddUpgradeHighlighted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetUpgradeButtonsEnabled(bool ShowAdd, bool ShowRemove, bool MaximumReached); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.SetUpgradeButtonsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Default Visibility(); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.Set Default Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowComparisonModeWithParameter(float CompareValue, enum class BPE_UIColors PositiveColor, enum class BPE_UIColors NegativeColor, bool ShowMaximum); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.ShowComparisonModeWithParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowComparisonMode(); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.ShowComparisonMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowDefaultMode(); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.ShowDefaultMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowFixedMode(); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.ShowFixedMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsComparison(); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.IsComparison // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCurrentMode(enum class BPE_Armory_Progress_Bar_Mode Result); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.GetCurrentMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetProgressBarPercent(struct UProgressBar* ProgressBar, float Value, float Min, float Max); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.SetProgressBarPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetParameters(struct UHWWeaponParameter* Param); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.SetParameters // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateWidget(); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.UpdateWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RemoveUpgradeButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.BndEvt__RemoveUpgradeButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Parameter_Bar(int32_t EntryPoint); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.ExecuteUbergraph_WBP_Armory2_Parameter_Bar // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnRemoveUpgradeClicked__DelegateSignature(enum class EHWCraftingParameter Parameter); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.OnRemoveUpgradeClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAddUpgradeClicked__DelegateSignature(enum class EHWCraftingParameter Parameter); // Function WBP_Armory2_Parameter_Bar.WBP_Armory2_Parameter_Bar_C.OnAddUpgradeClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

