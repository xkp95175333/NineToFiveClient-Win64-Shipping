// WidgetBlueprintGeneratedClass WBP_Reward_Grouped.WBP_Reward_Grouped_C
// Size: 0x2c4 (Inherited: 0x260)
struct UWBP_Reward_Grouped_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Baseplate; // 0x268(0x08)
	struct UVerticalBox* Content; // 0x270(0x08)
	struct UImage* Icon; // 0x278(0x08)
	struct UImage* ImageOverlay; // 0x280(0x08)
	struct UBorder* Rarity; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* RewardQuantity; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* Type; // 0x298(0x08)
	struct UTexture2D* Image; // 0x2a0(0x08)
	struct FText Reward _Type; // 0x2a8(0x18)
	int32_t Reward_Quantity; // 0x2c0(0x04)

	void PreConstruct(bool IsDesignTime); // Function WBP_Reward_Grouped.WBP_Reward_Grouped_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Reward_Grouped(int32_t EntryPoint); // Function WBP_Reward_Grouped.WBP_Reward_Grouped_C.ExecuteUbergraph_WBP_Reward_Grouped // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

