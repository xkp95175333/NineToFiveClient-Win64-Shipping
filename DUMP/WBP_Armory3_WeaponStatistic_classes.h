// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponStatistic.WBP_Armory3_WeaponStatistic_C
// Size: 0x2c8 (Inherited: 0x260)
struct UWBP_Armory3_WeaponStatistic_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Bracket_Left; // 0x268(0x08)
	struct UImage* Bracket_Right; // 0x270(0x08)
	struct UImage* Icon; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Number; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* SpecialMessage; // 0x290(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x298(0x08)
	struct FMulticastInlineDelegate OnHoverChanged; // 0x2a0(0x10)
	enum class EHW_WeaponVariaitonStats WeaponStat; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FString WeaponItemId; // 0x2b8(0x10)

	void GetValue(struct FText Value); // Function WBP_Armory3_WeaponStatistic.WBP_Armory3_WeaponStatistic_C.GetValue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetContent(bool IsWeaponAcquired, struct FString WeaponItemId); // Function WBP_Armory3_WeaponStatistic.WBP_Armory3_WeaponStatistic_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_WeaponStatistic.WBP_Armory3_WeaponStatistic_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Armory3_WeaponStatistic.WBP_Armory3_WeaponStatistic_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponStatistic(int32_t EntryPoint); // Function WBP_Armory3_WeaponStatistic.WBP_Armory3_WeaponStatistic_C.ExecuteUbergraph_WBP_Armory3_WeaponStatistic // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHoverChanged__DelegateSignature(bool Hovered, enum class EHW_WeaponVariaitonStats Statistic); // Function WBP_Armory3_WeaponStatistic.WBP_Armory3_WeaponStatistic_C.OnHoverChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

