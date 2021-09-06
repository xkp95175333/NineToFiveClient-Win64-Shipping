// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponInfo_Tab.WBP_Armory3_WeaponInfo_Tab_C
// Size: 0x2d0 (Inherited: 0x260)
struct UWBP_Armory3_WeaponInfo_Tab_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Description; // 0x268(0x08)
	struct UWBP_SectionHeaderBlack_C* DescriptionHeader; // 0x270(0x08)
	struct UMenuAnchor* MenuAnchor_105; // 0x278(0x08)
	struct UWBP_Armory3_WeaponStatistic_C* Statistics_2; // 0x280(0x08)
	struct UWBP_Armory3_WeaponStatistic_C* Statistics_3; // 0x288(0x08)
	struct UWBP_Armory3_WeaponStatistic_C* Statistics_4; // 0x290(0x08)
	struct UWBP_Armory3_WeaponStatistic_C* Statistics_5; // 0x298(0x08)
	struct UWBP_SectionHeaderBlack_C* StatisticsHeader; // 0x2a0(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2a8(0x08)
	struct UWBP_Item_Tag_Container_C* WBP_Item_Tag_Container; // 0x2b0(0x08)
	enum class EHW_WeaponVariaitonStats StatsHovered; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct FString ItemId; // 0x2c0(0x10)

	void SetContent(bool IsWeaponAcquired, struct FText WeaponDescription, struct FString ItemId); // Function WBP_Armory3_WeaponInfo_Tab.WBP_Armory3_WeaponInfo_Tab_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UUserWidget* OnGetUserMenuContent_1(); // Function WBP_Armory3_WeaponInfo_Tab.WBP_Armory3_WeaponInfo_Tab_C.OnGetUserMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateStatistics(bool IsWeaponAcquired); // Function WBP_Armory3_WeaponInfo_Tab.WBP_Armory3_WeaponInfo_Tab_C.UpdateStatistics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnStatisticHovered(bool Hovered, enum class EHW_WeaponVariaitonStats StatHovered); // Function WBP_Armory3_WeaponInfo_Tab.WBP_Armory3_WeaponInfo_Tab_C.OnStatisticHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponInfo_Tab(int32_t EntryPoint); // Function WBP_Armory3_WeaponInfo_Tab.WBP_Armory3_WeaponInfo_Tab_C.ExecuteUbergraph_WBP_Armory3_WeaponInfo_Tab // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

