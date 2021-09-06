// WidgetBlueprintGeneratedClass WBP_Tutorial_ClickIndicator.WBP_Tutorial_ClickIndicator_C
// Size: 0x2e9 (Inherited: 0x260)
struct UWBP_Tutorial_ClickIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* ClickPromptLeft; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* ClickPromptRight; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* ClickPromptUp; // 0x278(0x08)
	struct UImage* Image; // 0x280(0x08)
	struct UImage* Image_4; // 0x288(0x08)
	struct UImage* Image_127; // 0x290(0x08)
	struct UWidgetSwitcher* ModeSwitcher; // 0x298(0x08)
	struct UHorizontalBox* PointLeft; // 0x2a0(0x08)
	struct UHorizontalBox* PointRight; // 0x2a8(0x08)
	struct UVerticalBox* PointUp; // 0x2b0(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2b8(0x08)
	struct UWBP_Box_C* WBP_Box_3; // 0x2c0(0x08)
	struct UWBP_Box_C* WBP_Box_5; // 0x2c8(0x08)
	struct UWBP_Tutorial_ClickIndicator_Animation_C* WBP_Tutorial_ClickIndicator_Animation; // 0x2d0(0x08)
	struct UWBP_Tutorial_ClickIndicator_Animation_C* WBP_Tutorial_ClickIndicator_Animation_2; // 0x2d8(0x08)
	struct UWBP_Tutorial_ClickIndicator_Animation_C* WBP_Tutorial_ClickIndicator_Animation_3; // 0x2e0(0x08)
	enum class BPE_ClickIndicatorType Type; // 0x2e8(0x01)

	void SetText(struct FText Text, enum class BPE_ClickIndicatorType IndicatorType); // Function WBP_Tutorial_ClickIndicator.WBP_Tutorial_ClickIndicator_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDefault(enum class BPE_ClickIndicatorType IndicatorType); // Function WBP_Tutorial_ClickIndicator.WBP_Tutorial_ClickIndicator_C.SetDefault // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ChangeType(enum class BPE_ClickIndicatorType Type); // Function WBP_Tutorial_ClickIndicator.WBP_Tutorial_ClickIndicator_C.ChangeType // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Tutorial_ClickIndicator(int32_t EntryPoint); // Function WBP_Tutorial_ClickIndicator.WBP_Tutorial_ClickIndicator_C.ExecuteUbergraph_WBP_Tutorial_ClickIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

