// WidgetBlueprintGeneratedClass WBP_PostMatch_Reward.WBP_PostMatch_Reward_C
// Size: 0x4f8 (Inherited: 0x260)
struct UWBP_PostMatch_Reward_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Reward_Reveal; // 0x268(0x08)
	struct UImage* Image; // 0x270(0x08)
	struct UImage* Image_145; // 0x278(0x08)
	struct UOverlay* ToolTipOL; // 0x280(0x08)
	struct UWBP_Reward_C* WBP_Reward; // 0x288(0x08)
	struct FHWReward Reward; // 0x290(0x268)

	struct UWidget* Get_ToolTipOL_ToolTipWidget_1(); // Function WBP_PostMatch_Reward.WBP_PostMatch_Reward_C.Get_ToolTipOL_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Construct(); // Function WBP_PostMatch_Reward.WBP_PostMatch_Reward_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ShowAnimation(float StartDelay); // Function WBP_PostMatch_Reward.WBP_PostMatch_Reward_C.ShowAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_PostMatch_Reward(int32_t EntryPoint); // Function WBP_PostMatch_Reward.WBP_PostMatch_Reward_C.ExecuteUbergraph_WBP_PostMatch_Reward // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

