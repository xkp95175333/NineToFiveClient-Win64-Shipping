// WidgetBlueprintGeneratedClass WBP_RoundResults2_PhasesEnd.WBP_RoundResults2_PhasesEnd_C
// Size: 0x304 (Inherited: 0x260)
struct UWBP_RoundResults2_PhasesEnd_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* BonusAmount; // 0x268(0x08)
	struct UImage* BonusImage; // 0x270(0x08)
	struct USizeBox* BonusReward; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* BonusText; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Credits; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* Image_2; // 0x298(0x08)
	struct UImage* Image_3; // 0x2a0(0x08)
	struct UImage* Image_5; // 0x2a8(0x08)
	struct UImage* Image_6; // 0x2b0(0x08)
	struct UImage* Image_145; // 0x2b8(0x08)
	struct UVerticalBox* ShiftTotal; // 0x2c0(0x08)
	struct UWidgetSwitcher* SubtitleSwitcher; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x2d0(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_9; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* Xp; // 0x2e8(0x08)
	bool MatchEnd; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	int32_t TotalXp; // 0x2f4(0x04)
	int32_t TotalCredits; // 0x2f8(0x04)
	enum class EHWRewardType BonusRewardType; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	int32_t BonusRewardAmount; // 0x300(0x04)

	void Construct(); // Function WBP_RoundResults2_PhasesEnd.WBP_RoundResults2_PhasesEnd_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RoundResults2_PhasesEnd(int32_t EntryPoint); // Function WBP_RoundResults2_PhasesEnd.WBP_RoundResults2_PhasesEnd_C.ExecuteUbergraph_WBP_RoundResults2_PhasesEnd // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

