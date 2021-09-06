// WidgetBlueprintGeneratedClass WBP_InputRow.WBP_InputRow_C
// Size: 0x2d1 (Inherited: 0x268)
struct UWBP_InputRow_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* AlternatingRowBorder; // 0x270(0x08)
	struct UBorder* AlternatingRowBorder_Dark; // 0x278(0x08)
	struct UBorder* AlternatingRowBorder_Light; // 0x280(0x08)
	struct UNamedSlot* Content1; // 0x288(0x08)
	struct UNamedSlot* Content2; // 0x290(0x08)
	struct UTextBlock* Labeltext; // 0x298(0x08)
	struct UTextBlock* LabelText_HOLDTO; // 0x2a0(0x08)
	struct UTextBlock* LabelText_TOGGLETO; // 0x2a8(0x08)
	struct FText Label; // 0x2b0(0x18)
	int32_t Index; // 0x2c8(0x04)
	float MinDesiredWidth; // 0x2cc(0x04)
	enum class HoldToggleEnum HoldType; // 0x2d0(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_InputRow.WBP_InputRow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_InputRow(int32_t EntryPoint); // Function WBP_InputRow.WBP_InputRow_C.ExecuteUbergraph_WBP_InputRow // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

