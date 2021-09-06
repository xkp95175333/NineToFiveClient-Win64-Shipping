// WidgetBlueprintGeneratedClass WBP_Armory2_Result_Rarity_Tooltip.WBP_Armory2_Result_Rarity_Tooltip_C
// Size: 0x2a9 (Inherited: 0x260)
struct UWBP_Armory2_Result_Rarity_Tooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* ConditionLabel_2; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* FamiliarityMilestones; // 0x270(0x08)
	struct UImage* Image_168; // 0x278(0x08)
	struct UBorder* RarityColorBox; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* RarityNameLabel; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* RarityNameLabel_2; // 0x290(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* WeaponLabel; // 0x2a0(0x08)
	enum class EHWRarity RarityValue; // 0x2a8(0x01)

	void GetWeaponPartSlotsDescription(enum class EHWWeaponPartType Type1, enum class EHWWeaponPartType Type2, struct FText Result); // Function WBP_Armory2_Result_Rarity_Tooltip.WBP_Armory2_Result_Rarity_Tooltip_C.GetWeaponPartSlotsDescription // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory2_Result_Rarity_Tooltip.WBP_Armory2_Result_Rarity_Tooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Result_Rarity_Tooltip(int32_t EntryPoint); // Function WBP_Armory2_Result_Rarity_Tooltip.WBP_Armory2_Result_Rarity_Tooltip_C.ExecuteUbergraph_WBP_Armory2_Result_Rarity_Tooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

