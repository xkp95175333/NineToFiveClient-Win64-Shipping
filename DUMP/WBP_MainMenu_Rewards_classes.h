// WidgetBlueprintGeneratedClass WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C
// Size: 0x2f8 (Inherited: 0x278)
struct UWBP_MainMenu_Rewards_C : UHWRewardPopupWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct TArray<struct FHWRewardGroup> Queue; // 0x280(0x10)
	struct FHWRewardGroup CurrentEntry; // 0x290(0x18)
	struct FText Title; // 0x2a8(0x18)
	struct FText Message; // 0x2c0(0x18)
	struct FText CollectTitle; // 0x2d8(0x18)
	struct UWBP_RoundResults2_C* ResultsWidget; // 0x2f0(0x08)

	void IsNewPlayerRewards(enum class EHWRewardSource Source, bool Result); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.IsNewPlayerRewards // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetRewardsTitle(enum class EHWRewardSource Source, struct FText Title); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.GetRewardsTitle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void AddToQueue(struct TArray<struct FHWRewardGroup> Rewards); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.AddToQueue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShouldShowReward(struct FHWRewardGroup RewardGroup, bool Show); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.ShouldShowReward // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void TakeFromQueue(bool HasReward, struct FHWRewardGroup Reward); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.TakeFromQueue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowNext(); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.ShowNext // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCollectCompleted(struct FHWProfileWithCollectedRewardsResponse Response); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.OnCollectCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCollectFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.OnCollectFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeWithRewards(struct TArray<struct FHWReward> Rewards, struct FText Title, struct FText Message, struct FText CollectButtonTitle); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.InitializeWithRewards // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnResultsClosed(); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.OnResultsClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMatchResults(struct UHWMatchResults* MatchResults, struct TArray<struct FHWReward> MatchRewards); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.ShowMatchResults // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAdditionalFetchComplete(struct FHWFetchRewardsResponse Response); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.OnAdditionalFetchComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAdditionalFetchFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.OnAdditionalFetchFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRewardsClosed(); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.OnRewardsClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MainMenu_Rewards(int32_t EntryPoint); // Function WBP_MainMenu_Rewards.WBP_MainMenu_Rewards_C.ExecuteUbergraph_WBP_MainMenu_Rewards // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

