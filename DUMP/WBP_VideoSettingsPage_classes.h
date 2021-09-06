// WidgetBlueprintGeneratedClass WBP_VideoSettingsPage.WBP_VideoSettingsPage_C
// Size: 0x2a0 (Inherited: 0x268)
struct UWBP_VideoSettingsPage_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetSwitcher* PlatformBasedSwitcher; // 0x270(0x08)
	struct UWBP_VideoSettingsPage_Stadia_C* WBP_VideoSettingsPage_Stadia; // 0x278(0x08)
	struct UWBP_VideoSettingsPage_Steam_C* WBP_VideoSettingsPage_Steam; // 0x280(0x08)
	bool AutoSave; // 0x288(0x01)
	bool AutoApply; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct FMulticastInlineDelegate ApplyChanges; // 0x290(0x10)

	void CancelSettings(); // Function WBP_VideoSettingsPage.WBP_VideoSettingsPage_C.CancelSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Has Unsaved Changes?(bool UnsavedChanges); // Function WBP_VideoSettingsPage.WBP_VideoSettingsPage_C.Has Unsaved Changes? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SaveSettings(); // Function WBP_VideoSettingsPage.WBP_VideoSettingsPage_C.SaveSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateResolutionSelectionVisibility(); // Function WBP_VideoSettingsPage.WBP_VideoSettingsPage_C.UpdateResolutionSelectionVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	bool Get_AutoApplyCheckbox_bIsEnabled_1(); // Function WBP_VideoSettingsPage.WBP_VideoSettingsPage_C.Get_AutoApplyCheckbox_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	bool Get_ApplyButton_bIsEnabled_1(); // Function WBP_VideoSettingsPage.WBP_VideoSettingsPage_C.Get_ApplyButton_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	bool Get_SaveButton_bIsEnabled_1(); // Function WBP_VideoSettingsPage.WBP_VideoSettingsPage_C.Get_SaveButton_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_VideoSettingsPage.WBP_VideoSettingsPage_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_VideoSettingsPage.WBP_VideoSettingsPage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_VideoSettingsPage(int32_t EntryPoint); // Function WBP_VideoSettingsPage.WBP_VideoSettingsPage_C.ExecuteUbergraph_WBP_VideoSettingsPage // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void ApplyChanges__DelegateSignature(struct UUserWidget* OwningActor); // Function WBP_VideoSettingsPage.WBP_VideoSettingsPage_C.ApplyChanges__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

