// WidgetBlueprintGeneratedClass WBP_Armory2_UpgradeMultiplier_Tooltip.WBP_Armory2_UpgradeMultiplier_Tooltip_C
// Size: 0x2c9 (Inherited: 0x260)
struct UWBP_Armory2_UpgradeMultiplier_Tooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* WBP_Description; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* WBP_Header; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* WBP_Stage1; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* WBP_Stage1_Multiplier; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* WBP_Stage2; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* WBP_Stage2_Multiplier; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* WBP_Stage3; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* WBP_Stage3_Multiplier; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* WBP_Stage4; // 0x2b0(0x08)
	struct UWBP_RichTextLabel_C* WBP_Stage4_Multiplier; // 0x2b8(0x08)
	struct UHWArmoryItem* BlueprintArmoryItem; // 0x2c0(0x08)
	enum class EHWFaction Faction; // 0x2c8(0x01)

	void Construct(); // Function WBP_Armory2_UpgradeMultiplier_Tooltip.WBP_Armory2_UpgradeMultiplier_Tooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_UpgradeMultiplier_Tooltip(int32_t EntryPoint); // Function WBP_Armory2_UpgradeMultiplier_Tooltip.WBP_Armory2_UpgradeMultiplier_Tooltip_C.ExecuteUbergraph_WBP_Armory2_UpgradeMultiplier_Tooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

