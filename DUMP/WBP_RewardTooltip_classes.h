// WidgetBlueprintGeneratedClass WBP_RewardTooltip.WBP_RewardTooltip_C
// Size: 0x558 (Inherited: 0x260)
struct UWBP_RewardTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Armory3_ParameterGroup_C* CodeView; // 0x268(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_Name; // 0x278(0x08)
	struct UImage* Line; // 0x280(0x08)
	struct UImage* Line_2; // 0x288(0x08)
	struct UImage* Line_3; // 0x290(0x08)
	struct UWBP_Armory3_WeaponPart_Tooltip_C* PartView; // 0x298(0x08)
	struct UWBP_Armory3_WeaponSets_C* WBP_Armory3_WeaponSets; // 0x2a0(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_10; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_170; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_287; // 0x2c0(0x08)
	struct UWBP_Weapon_ChartView_C* WBP_Weapon_ChartView; // 0x2c8(0x08)
	struct UWBP_Weapon_StatsView_C* WBP_Weapon_StatsView; // 0x2d0(0x08)
	struct UWidgetSwitcher* WeaponStatsSwitcher; // 0x2d8(0x08)
	struct USizeBox* WeaponViewBox; // 0x2e0(0x08)
	struct FHWReward RewardData; // 0x2e8(0x268)
	struct FTimerHandle WeaponStatsTimer; // 0x550(0x08)

	void Set Content for Weapon Part(); // Function WBP_RewardTooltip.WBP_RewardTooltip_C.Set Content for Weapon Part // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContentForWeapon(); // Function WBP_RewardTooltip.WBP_RewardTooltip_C.SetContentForWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContentForCode(); // Function WBP_RewardTooltip.WBP_RewardTooltip_C.SetContentForCode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(struct FHWReward Reward, enum class EHWInventoryItemType Type); // Function WBP_RewardTooltip.WBP_RewardTooltip_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_RewardTooltip.WBP_RewardTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnPressShowStatsView(); // Function WBP_RewardTooltip.WBP_RewardTooltip_C.OnPressShowStatsView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowWeaponStatsView(); // Function WBP_RewardTooltip.WBP_RewardTooltip_C.ShowWeaponStatsView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowWeaponChartView(); // Function WBP_RewardTooltip.WBP_RewardTooltip_C.ShowWeaponChartView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RewardTooltip(int32_t EntryPoint); // Function WBP_RewardTooltip.WBP_RewardTooltip_C.ExecuteUbergraph_WBP_RewardTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

