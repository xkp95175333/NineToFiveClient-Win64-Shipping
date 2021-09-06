// WidgetBlueprintGeneratedClass WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C
// Size: 0x381 (Inherited: 0x260)
struct UWBP_PostMatch2_Progress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Outro; // 0x268(0x08)
	struct UWidgetAnimation* LevelUp_Anim; // 0x270(0x08)
	struct UWidgetAnimation* NoLevelUp_Anim; // 0x278(0x08)
	struct UWidgetAnimation* Reveal; // 0x280(0x08)
	struct UWBP_Animated_Progress_Bar_C* AddedProgress; // 0x288(0x08)
	struct UImage* Background_3; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* CompensationLabel; // 0x298(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* CurrentLevelLabel; // 0x2a8(0x08)
	struct UWBP_Animated_Progress_Bar_C* CurrentProgress; // 0x2b0(0x08)
	struct UWBP_Animated_Letters_Label_C* ExperienceValue; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image_43; // 0x2c8(0x08)
	struct UWBP_Animated_Letters_Label_C* Label_2; // 0x2d0(0x08)
	struct UWBP_Animated_Letters_Label_C* LevelLabel; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* LevelMax; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* LevelUpLabel; // 0x2e8(0x08)
	struct UWBP_Animated_Progress_Bar_C* LevelUpProgress; // 0x2f0(0x08)
	struct UWBP_RichTextLabel_C* NewLevelBigLabel; // 0x2f8(0x08)
	struct UWidgetSwitcher* NewLevelLabel; // 0x300(0x08)
	struct UWBP_RichTextLabel_C* NextLevelLabel; // 0x308(0x08)
	struct UVerticalBox* PlayerLevel; // 0x310(0x08)
	struct UImage* PlusDetail; // 0x318(0x08)
	struct UImage* PlusDetail_2; // 0x320(0x08)
	struct UWBP_RichTextLabel_C* Slash; // 0x328(0x08)
	struct UImage* TopDetail_2; // 0x330(0x08)
	struct UWBP_Animated_Letters_Label_C* XpAmount; // 0x338(0x08)
	struct FMulticastInlineDelegate OnProceed; // 0x340(0x10)
	int32_t XpGained; // 0x350(0x04)
	int32_t PreviousXp; // 0x354(0x04)
	int32_t PreviousLevel; // 0x358(0x04)
	int32_t CurrentLevelStart; // 0x35c(0x04)
	enum class EHWFaction Faction; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	int32_t PointsInLevel; // 0x364(0x04)
	int32_t PointsForNextLevel; // 0x368(0x04)
	int32_t MaxLevel; // 0x36c(0x04)
	bool HasLevelup; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	int32_t PointsForLevelAfterNext; // 0x374(0x04)
	struct UAkAudioEvent* XPGainedEvent; // 0x378(0x08)
	bool Skipped; // 0x380(0x01)

	void SequenceEvent__ENTRYPOINTWBP_PostMatch2_Progress_5(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.SequenceEvent__ENTRYPOINTWBP_PostMatch2_Progress_5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SequenceEvent__ENTRYPOINTWBP_PostMatch2_Progress_4(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.SequenceEvent__ENTRYPOINTWBP_PostMatch2_Progress_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SequenceEvent__ENTRYPOINTWBP_PostMatch2_Progress_3(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.SequenceEvent__ENTRYPOINTWBP_PostMatch2_Progress_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SequenceEvent__ENTRYPOINTWBP_PostMatch2_Progress_2(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.SequenceEvent__ENTRYPOINTWBP_PostMatch2_Progress_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SequenceEvent__ENTRYPOINTWBP_PostMatch2_Progress_1(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.SequenceEvent__ENTRYPOINTWBP_PostMatch2_Progress_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeProgressBar(struct UWBP_Animated_Progress_Bar_C* Bar, float Min, float Max, float Start, float End); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.InitializeProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLevelUp_Minor(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.OnLevelUp_Minor // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLevelUp_Major(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.OnLevelUp_Major // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void XPGainedStart(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.XPGainedStart // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void XPGainedStop(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.XPGainedStop // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PostMatchSkipped(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.PostMatchSkipped // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnterScreen(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.EnterScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(int32_t XpGainedAmount); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DebugInitialize(enum class EHWFaction Faction, int32_t XpGained, int32_t PreviousXp, int32_t PreviousLevel, int32_t PointsInLevel, int32_t PointsForNextLevel, int32_t MaxLevel); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.DebugInitialize // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeWidgets(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.InitializeWidgets // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowNextLevelProgress(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.ShowNextLevelProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlaySequence(); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.PlaySequence // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_PostMatch2_Progress(int32_t EntryPoint); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.ExecuteUbergraph_WBP_PostMatch2_Progress // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnProceed__DelegateSignature(bool HasLevelup); // Function WBP_PostMatch2_Progress.WBP_PostMatch2_Progress_C.OnProceed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

