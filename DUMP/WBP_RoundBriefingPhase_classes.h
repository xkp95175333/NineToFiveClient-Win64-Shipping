// WidgetBlueprintGeneratedClass WBP_RoundBriefingPhase.WBP_RoundBriefingPhase_C
// Size: 0x304 (Inherited: 0x260)
struct UWBP_RoundBriefingPhase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* SetCompletedAnim; // 0x268(0x08)
	struct UWidgetAnimation* SetCurrentAnim; // 0x270(0x08)
	struct UImage* Background; // 0x278(0x08)
	struct UImage* Background_2; // 0x280(0x08)
	struct UImage* Background_3; // 0x288(0x08)
	struct UBorder* BlockColor_2; // 0x290(0x08)
	struct UImage* Complete_Lines; // 0x298(0x08)
	struct UImage* DescriptionLeftDetail; // 0x2a0(0x08)
	struct UImage* DescriptionRightDetail; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* DescriptionText; // 0x2b0(0x08)
	struct UImage* Lines; // 0x2b8(0x08)
	struct UImage* LockIcon; // 0x2c0(0x08)
	struct UVerticalBox* PhaseActive; // 0x2c8(0x08)
	struct UVerticalBox* PhaseComplete; // 0x2d0(0x08)
	struct UWBP_RichTextLabel_C* PhaseComplete_Label; // 0x2d8(0x08)
	struct UVerticalBox* PhaseLocked; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* PhaseTitleLabel; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* PhaseTitleLabel_3; // 0x2f0(0x08)
	struct UWidgetSwitcher* Switcher; // 0x2f8(0x08)
	int32_t Phase; // 0x300(0x04)

	void GetPhaseTitle(struct FText Title); // Function WBP_RoundBriefingPhase.WBP_RoundBriefingPhase_C.GetPhaseTitle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetLocked(); // Function WBP_RoundBriefingPhase.WBP_RoundBriefingPhase_C.SetLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActive(struct FText Description); // Function WBP_RoundBriefingPhase.WBP_RoundBriefingPhase_C.SetActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetCompleted(bool Success, bool PlayAnimation); // Function WBP_RoundBriefingPhase.WBP_RoundBriefingPhase_C.SetCompleted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_RoundBriefingPhase.WBP_RoundBriefingPhase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RoundBriefingPhase(int32_t EntryPoint); // Function WBP_RoundBriefingPhase.WBP_RoundBriefingPhase_C.ExecuteUbergraph_WBP_RoundBriefingPhase // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

