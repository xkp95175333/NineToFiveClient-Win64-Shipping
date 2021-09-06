// WidgetBlueprintGeneratedClass WBP_LanguageSettingsPage.WBP_LanguageSettingsPage_C
// Size: 0x2b8 (Inherited: 0x268)
struct UWBP_LanguageSettingsPage_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCheckBox* BlockRequests; // 0x270(0x08)
	struct UImage* DividerLine; // 0x278(0x08)
	struct UCheckBox* FriendlistConsentCheckBox; // 0x280(0x08)
	struct UWBP_SettingRow_C* FriendlistConsentRow; // 0x288(0x08)
	struct UWBP_StyledComboBoxSetting_C* LanguageButton; // 0x290(0x08)
	struct UWBP_SectionHeader_C* LanguageHeader; // 0x298(0x08)
	struct UWBP_SettingRow_C* LanguageRow; // 0x2a0(0x08)
	struct UWBP_SectionHeader_C* PrivacyHeader; // 0x2a8(0x08)
	struct UHWGameUserSettings* HWGameUserSettings; // 0x2b0(0x08)

	void CancelGameSpecificSettings(); // Function WBP_LanguageSettingsPage.WBP_LanguageSettingsPage_C.CancelGameSpecificSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CancelStadiaFriendConsentValue(); // Function WBP_LanguageSettingsPage.WBP_LanguageSettingsPage_C.CancelStadiaFriendConsentValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SaveGameSpecificSettings(); // Function WBP_LanguageSettingsPage.WBP_LanguageSettingsPage_C.SaveGameSpecificSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SaveStadiaFriendConsentValue(); // Function WBP_LanguageSettingsPage.WBP_LanguageSettingsPage_C.SaveStadiaFriendConsentValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HasStadiaFriendsConsentValueChanged(bool ValueChanged); // Function WBP_LanguageSettingsPage.WBP_LanguageSettingsPage_C.HasStadiaFriendsConsentValueChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Cancel Block Friend Request Settings(); // Function WBP_LanguageSettingsPage.WBP_LanguageSettingsPage_C.Cancel Block Friend Request Settings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HasBlockFriendRequestValueChanged(bool changed); // Function WBP_LanguageSettingsPage.WBP_LanguageSettingsPage_C.HasBlockFriendRequestValueChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SaveBlockFriendRequestValue(); // Function WBP_LanguageSettingsPage.WBP_LanguageSettingsPage_C.SaveBlockFriendRequestValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_LanguageSettingsPage.WBP_LanguageSettingsPage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetBlockFriendRequestState(); // Function WBP_LanguageSettingsPage.WBP_LanguageSettingsPage_C.SetBlockFriendRequestState // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_LanguageSettingsPage(int32_t EntryPoint); // Function WBP_LanguageSettingsPage.WBP_LanguageSettingsPage_C.ExecuteUbergraph_WBP_LanguageSettingsPage // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

