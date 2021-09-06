// WidgetBlueprintGeneratedClass WBP_SettingRow.WBP_SettingRow_C
// Size: 0x2b9 (Inherited: 0x268)
struct UWBP_SettingRow_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* AlternatingRowBorder_Dark; // 0x270(0x08)
	struct UBorder* AlternatingRowBorder_Light; // 0x278(0x08)
	struct USizeBox* ContentSize; // 0x280(0x08)
	struct UTextBlock* Labeltext; // 0x288(0x08)
	struct UNamedSlot* SettingContent; // 0x290(0x08)
	struct FText Label; // 0x298(0x18)
	int32_t Index; // 0x2b0(0x04)
	float MinDesiredWidth; // 0x2b4(0x04)
	bool IsQuickSetting; // 0x2b8(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_SettingRow.WBP_SettingRow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_SettingRow(int32_t EntryPoint); // Function WBP_SettingRow.WBP_SettingRow_C.ExecuteUbergraph_WBP_SettingRow // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

