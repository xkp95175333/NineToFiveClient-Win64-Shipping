// WidgetBlueprintGeneratedClass WBP_Rigs_WeaponPopover.WBP_Rigs_WeaponPopover_C
// Size: 0x2e8 (Inherited: 0x260)
struct UWBP_Rigs_WeaponPopover_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Label_Name; // 0x268(0x08)
	struct UImage* Line; // 0x270(0x08)
	struct UImage* Line_2; // 0x278(0x08)
	struct UImage* Line_3; // 0x280(0x08)
	struct UWBP_Armory3_WeaponSets_C* WBP_Armory3_WeaponSets; // 0x288(0x08)
	struct UWBP_Box_C* WBP_Box_52; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_10; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_170; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_287; // 0x2a8(0x08)
	struct UWBP_Weapon_ChartView_C* WBP_Weapon_ChartView; // 0x2b0(0x08)
	struct UWBP_Weapon_StatsView_C* WBP_Weapon_StatsView; // 0x2b8(0x08)
	struct UImage* WeaponImage; // 0x2c0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_MainContent; // 0x2c8(0x08)
	struct UHWWeaponParameters* WeaponParameters; // 0x2d0(0x08)
	struct FTimerHandle KeyHoldTimer; // 0x2d8(0x08)
	struct UHWWeaponParameters* OtherWeaponParameter; // 0x2e0(0x08)

	void SwitchView(bool ShowStatsView); // Function WBP_Rigs_WeaponPopover.WBP_Rigs_WeaponPopover_C.SwitchView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetParameter(struct UWBP_RichTextLabel_C* Label, enum class EHWCraftingParameter Type, struct UProgressBar* Bar, bool IsComparison); // Function WBP_Rigs_WeaponPopover.WBP_Rigs_WeaponPopover_C.SetParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(struct UWBP_Rigs_WeaponListItem_C* ListItem, struct UHWWeaponParameters* OtherWeapon); // Function WBP_Rigs_WeaponPopover.WBP_Rigs_WeaponPopover_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Rigs_WeaponPopover.WBP_Rigs_WeaponPopover_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_WeaponPopover(int32_t EntryPoint); // Function WBP_Rigs_WeaponPopover.WBP_Rigs_WeaponPopover_C.ExecuteUbergraph_WBP_Rigs_WeaponPopover // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

