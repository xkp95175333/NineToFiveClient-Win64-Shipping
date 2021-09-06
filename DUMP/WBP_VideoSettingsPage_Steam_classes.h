// WidgetBlueprintGeneratedClass WBP_VideoSettingsPage_Steam.WBP_VideoSettingsPage_Steam_C
// Size: 0x2b0 (Inherited: 0x260)
struct UWBP_VideoSettingsPage_Steam_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* DividerLine; // 0x268(0x08)
	struct UVerticalBox* DLSS; // 0x270(0x08)
	struct UWBP_StyledComboBoxSetting_C* ResolutionButton; // 0x278(0x08)
	struct UWBP_SettingRow_C* ResolutionRow; // 0x280(0x08)
	struct UVerticalBox* Steam; // 0x288(0x08)
	struct UWBP_SectionHeader_C* WBP_SectionHeader1; // 0x290(0x08)
	struct UWBP_SectionHeader_C* WBP_SectionHeader1_2; // 0x298(0x08)
	struct UWBP_SectionHeader_C* WBP_SectionHeader1_3; // 0x2a0(0x08)
	struct UDefaultRadioSelectSetting_C* WindowModeSelector; // 0x2a8(0x08)

	void RefreshResolution(); // Function WBP_VideoSettingsPage_Steam.WBP_VideoSettingsPage_Steam_C.RefreshResolution // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_VideoSettingsPage_Steam.WBP_VideoSettingsPage_Steam_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_VideoSettingsPage_Steam.WBP_VideoSettingsPage_Steam_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_VideoSettingsPage_Steam(int32_t EntryPoint); // Function WBP_VideoSettingsPage_Steam.WBP_VideoSettingsPage_Steam_C.ExecuteUbergraph_WBP_VideoSettingsPage_Steam // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

