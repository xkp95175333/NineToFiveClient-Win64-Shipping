// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponParameters_Tab.WBP_Armory3_WeaponParameters_Tab_C
// Size: 0x2c8 (Inherited: 0x260)
struct UWBP_Armory3_WeaponParameters_Tab_C : UUserWidget {
	struct UWBP_Armory3_WeaponStat_C* Ammo; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UWBP_Armory3_WeaponStat_C* Ballistics; // 0x270(0x08)
	struct UHWRadarChartWidget* ComparisonChart; // 0x278(0x08)
	struct USizeBox* ComparisonVariationChartBox; // 0x280(0x08)
	struct UWBP_Armory3_WeaponStat_C* Efficiency; // 0x288(0x08)
	struct UWBP_Armory3_WeaponStat_C* Handling; // 0x290(0x08)
	struct UHWRadarChartWidget* RadarChart; // 0x298(0x08)
	struct USizeBox* SelectedVariationChartBox; // 0x2a0(0x08)
	struct UWBP_Armory3_WeaponStat_C* Stealth; // 0x2a8(0x08)
	struct UWBP_Armory3_WeaponSets_Info_C* WBP_Armory3_WeaponSets_Info; // 0x2b0(0x08)
	bool IsWeaponAcquired; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UHWArmoryWeaponVariation* Variation; // 0x2c0(0x08)

	void GetWeaponParameters(struct FName PartId, struct UHWWeaponParameters* Parameters); // Function WBP_Armory3_WeaponParameters_Tab.WBP_Armory3_WeaponParameters_Tab_C.GetWeaponParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetStatsColor(bool IsComparison, enum class BPE_UIColors TextColor); // Function WBP_Armory3_WeaponParameters_Tab.WBP_Armory3_WeaponParameters_Tab_C.GetStatsColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetChart(bool IsComparison, struct UHWRadarChartWidget* RadarChart); // Function WBP_Armory3_WeaponParameters_Tab.WBP_Armory3_WeaponParameters_Tab_C.GetChart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetContent(int32_t VariationIndex, bool IsComparison, struct UHWArmoryWeaponModel* WeaponModel); // Function WBP_Armory3_WeaponParameters_Tab.WBP_Armory3_WeaponParameters_Tab_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

