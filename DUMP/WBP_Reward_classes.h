// WidgetBlueprintGeneratedClass WBP_Reward.WBP_Reward_C
// Size: 0x528 (Inherited: 0x260)
struct UWBP_Reward_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Icon; // 0x268(0x08)
	struct UImage* ItemThumbnail; // 0x270(0x08)
	struct UWidgetSwitcher* Label; // 0x278(0x08)
	struct UVerticalBox* Numbers; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Reward_Amount; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* Reward_Type_Name; // 0x290(0x08)
	struct UWBP_Armory3_PartSetIcon_C* SetIcon_Optional; // 0x298(0x08)
	struct UVerticalBox* Text; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* Type1; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* Type2; // 0x2b0(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2b8(0x08)
	struct FHWReward Reward; // 0x2c0(0x268)

	void RewardContainsPart(struct FHWReward Reward, bool Result, enum class EHWWeaponPartType Type); // Function WBP_Reward.WBP_Reward_C.RewardContainsPart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void RewardContainsCode(struct FHWReward Reward, bool Result, enum class EHWRarity Rarity); // Function WBP_Reward.WBP_Reward_C.RewardContainsCode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* GetToolTipWidget_1(); // Function WBP_Reward.WBP_Reward_C.GetToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetReward(struct FHWReward Reward); // Function WBP_Reward.WBP_Reward_C.SetReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateRewardData(); // Function WBP_Reward.WBP_Reward_C.PopulateRewardData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetRewardImage(struct FHWReward Reward, struct UTexture2D* Image); // Function WBP_Reward.WBP_Reward_C.GetRewardImage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FString GetRewardDetails(struct FHWReward Reward, struct FText Title, struct FText Type); // Function WBP_Reward.WBP_Reward_C.GetRewardDetails // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get InventoryItem Details(enum class EHWInventoryItemType InventoryItemType, struct FHWReward Reward, struct FText Title, struct FText Type); // Function WBP_Reward.WBP_Reward_C.Get InventoryItem Details // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Reward.WBP_Reward_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ShowSetIconIfPart(); // Function WBP_Reward.WBP_Reward_C.ShowSetIconIfPart // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Reward(int32_t EntryPoint); // Function WBP_Reward.WBP_Reward_C.ExecuteUbergraph_WBP_Reward // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

