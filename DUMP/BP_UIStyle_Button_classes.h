// BlueprintGeneratedClass BP_UIStyle_Button.BP_UIStyle_Button_C
// Size: 0x624 (Inherited: 0x28)
struct UBP_UIStyle_Button_C : UObject {
	struct FButtonStyle ButtonStyleDefault; // 0x28(0x278)
	struct FButtonStyle ButtonStyleSelected; // 0x2a0(0x278)
	bool ForceUpperCase; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct FSlateColor Border; // 0x520(0x28)
	float BorderSize; // 0x548(0x04)
	enum class ETextJustify TextJustification; // 0x54c(0x01)
	char pad_54D[0x3]; // 0x54d(0x03)
	struct FSlateColor ImageColorNormal; // 0x550(0x28)
	struct FSlateColor ImageColorHover; // 0x578(0x28)
	struct FSlateColor ImageColorSelected; // 0x5a0(0x28)
	struct FSlateColor ImageColorDisabled; // 0x5c8(0x28)
	struct FDataTableRowHandle RichTextStyle; // 0x5f0(0x10)
	struct FDataTableRowHandle RichTextStyleSelected; // 0x600(0x10)
	struct FDataTableRowHandle RichTextStyleHover; // 0x610(0x10)
	int32_t Height; // 0x620(0x04)
};

