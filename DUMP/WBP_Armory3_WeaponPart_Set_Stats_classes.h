// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponPart_Set_Stats.WBP_Armory3_WeaponPart_Set_Stats_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_Armory3_WeaponPart_Set_Stats_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* PartsCollected; // 0x268(0x08)
	struct UImage* Separator; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Stat1; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Stat2; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Stat3; // 0x288(0x08)
	struct UVerticalBox* StatsDescription; // 0x290(0x08)

	void SetContent(struct FText RequiredActivePartsText, bool IsActive, struct FName SetId, bool IsFullSetInfo); // Function WBP_Armory3_WeaponPart_Set_Stats.WBP_Armory3_WeaponPart_Set_Stats_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponPart_Set_Stats(int32_t EntryPoint); // Function WBP_Armory3_WeaponPart_Set_Stats.WBP_Armory3_WeaponPart_Set_Stats_C.ExecuteUbergraph_WBP_Armory3_WeaponPart_Set_Stats // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

