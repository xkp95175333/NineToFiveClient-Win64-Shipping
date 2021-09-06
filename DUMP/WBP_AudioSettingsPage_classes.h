// WidgetBlueprintGeneratedClass WBP_AudioSettingsPage.WBP_AudioSettingsPage_C
// Size: 0x2b8 (Inherited: 0x268)
struct UWBP_AudioSettingsPage_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* DividerLine; // 0x270(0x08)
	struct UWBP_SettingRow_C* SettingVoiceChatDisabled; // 0x278(0x08)
	struct UWBP_SettingRow_C* SettingVoiceChatEnabled; // 0x280(0x08)
	struct UWBP_SettingRow_C* SettingVoiceChatModeDisabled; // 0x288(0x08)
	struct UWBP_SettingRow_C* SettingVoiceChatModeEnabled; // 0x290(0x08)
	struct UDefaultRadioSelectSetting_C* VoiceChatMode; // 0x298(0x08)
	struct UDefaultRadioSelectSetting_C* VoiceChatModeDisabled; // 0x2a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcherVoiceChat; // 0x2a8(0x08)
	struct UWidgetSwitcher* WidgetSwitcherVoiceChatMode; // 0x2b0(0x08)

	void Construct(); // Function WBP_AudioSettingsPage.WBP_AudioSettingsPage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMicrophoneHotplugChanged(bool Value); // Function WBP_AudioSettingsPage.WBP_AudioSettingsPage_C.OnMicrophoneHotplugChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_AudioSettingsPage(int32_t EntryPoint); // Function WBP_AudioSettingsPage.WBP_AudioSettingsPage_C.ExecuteUbergraph_WBP_AudioSettingsPage // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

