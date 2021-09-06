// WidgetBlueprintGeneratedClass WBP_Armory2_Rarity_Tooltip.WBP_Armory2_Rarity_Tooltip_C
// Size: 0x2de (Inherited: 0x260)
struct UWBP_Armory2_Rarity_Tooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* ConditionLabel; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* ConditionLabel_2; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* CraftedSlotsLabel; // 0x278(0x08)
	struct USizeBox* Divider2; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* EpicCraftingBonusLabel; // 0x288(0x08)
	struct UImage* EpicIcon; // 0x290(0x08)
	struct UVerticalBox* Footer; // 0x298(0x08)
	struct UImage* LockIcon; // 0x2a0(0x08)
	struct UBorder* RarityColorBox; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* RarityNameLabel; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* RarityStatus; // 0x2b8(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* WeaponLabel; // 0x2c8(0x08)
	enum class EHWRarity RarityValue; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	struct FName WeaponPartId; // 0x2d4(0x08)
	enum class EHWRarityComparisonType RelativeRarity; // 0x2dc(0x01)
	enum class EHWVendor ItemVendor; // 0x2dd(0x01)

	void MakeSlotText(enum class EHWWeaponPartType Part1, enum class EHWWeaponPartType Part2); // Function WBP_Armory2_Rarity_Tooltip.WBP_Armory2_Rarity_Tooltip_C.MakeSlotText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateFooter(); // Function WBP_Armory2_Rarity_Tooltip.WBP_Armory2_Rarity_Tooltip_C.UpdateFooter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory2_Rarity_Tooltip.WBP_Armory2_Rarity_Tooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Rarity_Tooltip(int32_t EntryPoint); // Function WBP_Armory2_Rarity_Tooltip.WBP_Armory2_Rarity_Tooltip_C.ExecuteUbergraph_WBP_Armory2_Rarity_Tooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

