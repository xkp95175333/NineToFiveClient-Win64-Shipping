// WidgetBlueprintGeneratedClass WBP_MissionRewrdsTooltip.WBP_MissionRewrdsTooltip_C
// Size: 0x2d0 (Inherited: 0x260)
struct UWBP_MissionRewrdsTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Star1; // 0x268(0x08)
	struct UImage* Image_Star2; // 0x270(0x08)
	struct UImage* Image_Star3; // 0x278(0x08)
	struct UListView* Rewards_NoPremium; // 0x280(0x08)
	struct UListView* Rewards_WithPremium; // 0x288(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* WBP_Description; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* WBP_Header; // 0x2a0(0x08)
	struct UWBP_TooltipSectionHeader_C* WBP_TooltipSectionHeader; // 0x2a8(0x08)
	struct UWBP_TooltipSectionHeader_C* WBP_TooltipSectionHeader_2; // 0x2b0(0x08)
	int32_t Stars; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct TArray<struct FString> RewardIds; // 0x2c0(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_MissionRewrdsTooltip.WBP_MissionRewrdsTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_MissionRewrdsTooltip.WBP_MissionRewrdsTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MissionRewrdsTooltip(int32_t EntryPoint); // Function WBP_MissionRewrdsTooltip.WBP_MissionRewrdsTooltip_C.ExecuteUbergraph_WBP_MissionRewrdsTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

