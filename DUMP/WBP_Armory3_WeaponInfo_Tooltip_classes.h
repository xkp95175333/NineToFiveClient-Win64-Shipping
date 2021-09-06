// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponInfo_Tooltip.WBP_Armory3_WeaponInfo_Tooltip_C
// Size: 0x289 (Inherited: 0x260)
struct UWBP_Armory3_WeaponInfo_Tooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Description; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Header; // 0x270(0x08)
	struct UImage* Icon; // 0x278(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x280(0x08)
	enum class EHW_WeaponVariaitonStats Stats; // 0x288(0x01)

	void Construct(); // Function WBP_Armory3_WeaponInfo_Tooltip.WBP_Armory3_WeaponInfo_Tooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponInfo_Tooltip(int32_t EntryPoint); // Function WBP_Armory3_WeaponInfo_Tooltip.WBP_Armory3_WeaponInfo_Tooltip_C.ExecuteUbergraph_WBP_Armory3_WeaponInfo_Tooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

