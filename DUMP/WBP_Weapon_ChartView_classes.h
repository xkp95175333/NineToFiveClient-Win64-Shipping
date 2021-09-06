// WidgetBlueprintGeneratedClass WBP_Weapon_ChartView.WBP_Weapon_ChartView_C
// Size: 0x2c8 (Inherited: 0x260)
struct UWBP_Weapon_ChartView_C : UUserWidget {
	struct UWBP_Armory3_WeaponStat_Min_C* Ammo_ParamValue; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UImage* Background_Extra; // 0x270(0x08)
	struct UImage* Background_Extra_2; // 0x278(0x08)
	struct UWBP_Armory3_WeaponStat_Min_C* Ballistics_ParamValue; // 0x280(0x08)
	struct UHWRadarChartWidget* ComparisonChart; // 0x288(0x08)
	struct USizeBox* ComparisonVariationChartBox; // 0x290(0x08)
	struct UWBP_Armory3_WeaponStat_Min_C* Efficiency_ParamValue; // 0x298(0x08)
	struct UWBP_Armory3_WeaponStat_Min_C* Handling_ParamValue; // 0x2a0(0x08)
	struct UHWRadarChartWidget* RadarChart; // 0x2a8(0x08)
	struct UOverlay* RadarChart_View; // 0x2b0(0x08)
	struct USizeBox* SelectedVariationChartBox; // 0x2b8(0x08)
	struct UWBP_Armory3_WeaponStat_Min_C* Stealth_ParamValue; // 0x2c0(0x08)

	void SetChartData(struct UHWWeaponParameters* WeaponParams, bool IsComparisonChart); // Function WBP_Weapon_ChartView.WBP_Weapon_ChartView_C.SetChartData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(struct UHWWeaponParameters* WeaponParams, struct UHWWeaponParameters* OtherWeaponParams); // Function WBP_Weapon_ChartView.WBP_Weapon_ChartView_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

