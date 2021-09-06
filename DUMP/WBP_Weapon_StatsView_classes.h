// WidgetBlueprintGeneratedClass WBP_Weapon_StatsView.WBP_Weapon_StatsView_C
// Size: 0x2f8 (Inherited: 0x260)
struct UWBP_Weapon_StatsView_C : UUserWidget {
	struct UImage* Icon_FireMode; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Label_Corporation; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Label_Damage; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_MagSize; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label_Rarity; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Label_RPM; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* Label_Sight; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* Label_WeaponType; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* LabelAimStability; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* LabelMaxRange; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* LabelReloadSpeed; // 0x2b0(0x08)
	struct UImage* Line_4; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* NoiseReductionText; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* OptimalRangeText; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* PrimarySecondaryType; // 0x2d0(0x08)
	struct UVerticalBox* ScopeInfo_DELETE; // 0x2d8(0x08)
	struct UVerticalBox* Stats_View; // 0x2e0(0x08)
	struct UHWWeaponParameters* WeaponParameters; // 0x2e8(0x08)
	struct UHWWeaponParameters* OtherWeaponParameters; // 0x2f0(0x08)

	void SetParameter(struct UWBP_RichTextLabel_C* LabelWidget, enum class EHWCraftingParameter Type); // Function WBP_Weapon_StatsView.WBP_Weapon_StatsView_C.SetParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(struct UHWWeaponParameters* WeaponParameters, struct UHWWeaponParameters* OtherWeaoponParameters, struct FName ReceiverConfigId); // Function WBP_Weapon_StatsView.WBP_Weapon_StatsView_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

