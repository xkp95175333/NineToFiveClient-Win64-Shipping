// WidgetBlueprintGeneratedClass WBP_PostMatch2.WBP_PostMatch2_C
// Size: 0x350 (Inherited: 0x260)
struct UWBP_PostMatch2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Reveal; // 0x268(0x08)
	struct UImage* BackgroundColor; // 0x270(0x08)
	struct UWidgetSwitcher* BgLogoSwitcher; // 0x278(0x08)
	struct UImage* BottomDetail; // 0x280(0x08)
	struct UWBP_Animated_Letters_Label_C* BottomDetailText; // 0x288(0x08)
	struct UWidgetSwitcher* Content; // 0x290(0x08)
	struct UImage* Filter; // 0x298(0x08)
	struct UImage* Grid; // 0x2a0(0x08)
	struct UImage* LeftDetail; // 0x2a8(0x08)
	struct UImage* Logo; // 0x2b0(0x08)
	struct UImage* Logo_2; // 0x2b8(0x08)
	struct UImage* Logo_3; // 0x2c0(0x08)
	struct UImage* RightDetail; // 0x2c8(0x08)
	struct UImage* TopDetail; // 0x2d0(0x08)
	struct UWBP_Animated_Letters_Label_C* TopDetailText1; // 0x2d8(0x08)
	struct UWBP_Animated_Letters_Label_C* TopDetailText2; // 0x2e0(0x08)
	struct UWBP_PostMatch2_Compensation_C* WBP_PostMatch2_Compensation; // 0x2e8(0x08)
	struct UWBP_PostMatch2_Progress_C* WBP_PostMatch2_Progress; // 0x2f0(0x08)
	struct UWBP_PostMatch2_Rewards_C* WBP_PostMatch3_Rewards; // 0x2f8(0x08)
	struct UWBP_SkipTimer_C* WBP_SkipTimer; // 0x300(0x08)
	struct TArray<struct FHWReward> Rewards; // 0x308(0x10)
	struct UHWMatchResults* MatchResults; // 0x318(0x08)
	struct FMulticastInlineDelegate OnClosed; // 0x320(0x10)
	int32_t MatchCredits; // 0x330(0x04)
	int32_t MatchXp; // 0x334(0x04)
	int32_t MatchMaterials; // 0x338(0x04)
	enum class EHWFaction MatchMaterialFaction; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct FMulticastInlineDelegate OnContinueToMatchResults; // 0x340(0x10)

	void GetTotalDuration(float Duration); // Function WBP_PostMatch2.WBP_PostMatch2_C.GetTotalDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Construct(); // Function WBP_PostMatch2.WBP_PostMatch2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void InitCompensation(); // Function WBP_PostMatch2.WBP_PostMatch2_C.InitCompensation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CalculateRewards(); // Function WBP_PostMatch2.WBP_PostMatch2_C.CalculateRewards // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_SkipTimer_K2Node_ComponentBoundEvent_0_OnExpired__DelegateSignature(); // Function WBP_PostMatch2.WBP_PostMatch2_C.BndEvt__WBP_SkipTimer_K2Node_ComponentBoundEvent_0_OnExpired__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_SkipTimer_K2Node_ComponentBoundEvent_1_OnSkipped__DelegateSignature(); // Function WBP_PostMatch2.WBP_PostMatch2_C.BndEvt__WBP_SkipTimer_K2Node_ComponentBoundEvent_1_OnSkipped__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_PostMatch_1Compensation_K2Node_ComponentBoundEvent_2_OnProceed__DelegateSignature(); // Function WBP_PostMatch2.WBP_PostMatch2_C.BndEvt__WBP_PostMatch_1Compensation_K2Node_ComponentBoundEvent_2_OnProceed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void LeaveScreen(); // Function WBP_PostMatch2.WBP_PostMatch2_C.LeaveScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitProgress(); // Function WBP_PostMatch2.WBP_PostMatch2_C.InitProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_PostMatch2_WBP_PostMatch_2Progress_K2Node_ComponentBoundEvent_3_OnProceed__DelegateSignature(bool HasLevelup); // Function WBP_PostMatch2.WBP_PostMatch2_C.BndEvt__WBP_PostMatch2_WBP_PostMatch_2Progress_K2Node_ComponentBoundEvent_3_OnProceed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnFetchLevelupRewards(struct FHWFetchRewardsResponse Response); // Function WBP_PostMatch2.WBP_PostMatch2_C.OnFetchLevelupRewards // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnFetchFail(enum class EHWErrorMessage ErrorMessage); // Function WBP_PostMatch2.WBP_PostMatch2_C.OnFetchFail // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_PostMatch2_WBP_PostMatch_3Rewards_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature(); // Function WBP_PostMatch2.WBP_PostMatch2_C.BndEvt__WBP_PostMatch2_WBP_PostMatch_3Rewards_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnCollect(struct FHWProfileWithCollectedRewardsResponse Response); // Function WBP_PostMatch2.WBP_PostMatch2_C.OnCollect // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_PostMatch2_WBP_PostMatch_3Rewards_K2Node_ComponentBoundEvent_4_OnSequenceComplete__DelegateSignature(); // Function WBP_PostMatch2.WBP_PostMatch2_C.BndEvt__WBP_PostMatch2_WBP_PostMatch_3Rewards_K2Node_ComponentBoundEvent_4_OnSequenceComplete__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_PostMatch2(int32_t EntryPoint); // Function WBP_PostMatch2.WBP_PostMatch2_C.ExecuteUbergraph_WBP_PostMatch2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnContinueToMatchResults__DelegateSignature(struct UHWMatchResults* Results, struct TArray<struct FHWReward> MatchRewards); // Function WBP_PostMatch2.WBP_PostMatch2_C.OnContinueToMatchResults__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClosed__DelegateSignature(); // Function WBP_PostMatch2.WBP_PostMatch2_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

