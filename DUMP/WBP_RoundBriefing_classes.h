// WidgetBlueprintGeneratedClass WBP_RoundBriefing.WBP_RoundBriefing_C
// Size: 0x318 (Inherited: 0x260)
struct UWBP_RoundBriefing_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* IntroOutro; // 0x268(0x08)
	struct UImage* Background_10; // 0x270(0x08)
	struct UImage* Background_11; // 0x278(0x08)
	struct UImage* BackgroundVideo; // 0x280(0x08)
	struct UWidgetSwitcher* EndOfShift; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* GameMode; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image_81; // 0x2a0(0x08)
	struct UImage* Lines_7; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* Location; // 0x2b0(0x08)
	struct UImage* LockIcon_4; // 0x2b8(0x08)
	struct UImage* LoreDetail; // 0x2c0(0x08)
	struct UWBP_RoundBriefingPhase_C* Phase1; // 0x2c8(0x08)
	struct UWBP_RoundBriefingPhase_C* Phase2; // 0x2d0(0x08)
	struct UWBP_RoundBriefingPhase_C* Phase3; // 0x2d8(0x08)
	struct UWBP_RichTextLabel_C* PhaseTitleLabel_10; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* PhaseTitleLabel_11; // 0x2e8(0x08)
	struct UWBP_SkipTimer_C* SkipTimer; // 0x2f0(0x08)
	struct UImage* TextureOverlay; // 0x2f8(0x08)
	struct FMulticastInlineDelegate OnProceed; // 0x300(0x10)
	struct UMediaPlayer* MediaPlayer; // 0x310(0x08)

	void PlayVoiceOver(); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.PlayVoiceOver // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayOutro(); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.PlayOutro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Get VOAudio(struct FName FlowId, int32_t Round, bool WonLastRound, struct UAkAudioEvent* AudioEvent); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.Get VOAudio // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateActivePhase(); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.UpdateActivePhase // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LeaveScreen(); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.LeaveScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetBackgroundVideo(struct FString MapName, struct FString FlowId, int32_t RoundNumber, struct UPlatformMediaSource* Source); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.GetBackgroundVideo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetRoundSuccess(int32_t Round, bool Success); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.GetRoundSuccess // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateRoundStatus(int32_t Round, struct UWidgetSwitcher* Switcher, struct UWBP_RichTextLabel_C* PhaseDescription); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.UpdateRoundStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdatePhases(); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.UpdatePhases // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Enter Screen(); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.Enter Screen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_SkipTimer_K2Node_ComponentBoundEvent_0_OnSkipped__DelegateSignature(); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.BndEvt__WBP_SkipTimer_K2Node_ComponentBoundEvent_0_OnSkipped__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__SkipTimer_K2Node_ComponentBoundEvent_1_OnExpired__DelegateSignature(); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.BndEvt__SkipTimer_K2Node_ComponentBoundEvent_1_OnExpired__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RoundBriefing(int32_t EntryPoint); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.ExecuteUbergraph_WBP_RoundBriefing // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnProceed__DelegateSignature(bool Skipped); // Function WBP_RoundBriefing.WBP_RoundBriefing_C.OnProceed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

