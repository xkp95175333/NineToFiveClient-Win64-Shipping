// WidgetBlueprintGeneratedClass WBP_InputSettingsPlatformSwitcher.WBP_InputSettingsPlatformSwitcher_C
// Size: 0x280 (Inherited: 0x260)
struct UWBP_InputSettingsPlatformSwitcher_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetSwitcher* PlatformBasedSwitcher; // 0x268(0x08)
	struct UWBP_InputSettingsPage_Stadia_C* Stadia; // 0x270(0x08)
	struct UWBP_InputSettingsPage_C* Steam; // 0x278(0x08)

	void SaveSettings(); // Function WBP_InputSettingsPlatformSwitcher.WBP_InputSettingsPlatformSwitcher_C.SaveSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelSettings(); // Function WBP_InputSettingsPlatformSwitcher.WBP_InputSettingsPlatformSwitcher_C.CancelSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HasUnSavedChanges(bool UnsavedChanges); // Function WBP_InputSettingsPlatformSwitcher.WBP_InputSettingsPlatformSwitcher_C.HasUnSavedChanges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Construct(); // Function WBP_InputSettingsPlatformSwitcher.WBP_InputSettingsPlatformSwitcher_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_InputSettingsPlatformSwitcher(int32_t EntryPoint); // Function WBP_InputSettingsPlatformSwitcher.WBP_InputSettingsPlatformSwitcher_C.ExecuteUbergraph_WBP_InputSettingsPlatformSwitcher // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

