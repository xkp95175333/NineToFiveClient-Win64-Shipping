// WidgetBlueprintGeneratedClass WBP_Shop_PurchasedReward.WBP_Shop_PurchasedReward_C
// Size: 0x304 (Inherited: 0x260)
struct UWBP_Shop_PurchasedReward_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Reward_Reveal; // 0x268(0x08)
	struct UImage* Image; // 0x270(0x08)
	struct UImage* Image_145; // 0x278(0x08)
	struct UWBP_ShopItem_New_C* WBP_ShopItem; // 0x280(0x08)
	struct FHWShopItem RewardItem; // 0x288(0x78)
	int32_t RewardIndex; // 0x300(0x04)

	void Construct(); // Function WBP_Shop_PurchasedReward.WBP_Shop_PurchasedReward_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Shop_PurchasedReward(int32_t EntryPoint); // Function WBP_Shop_PurchasedReward.WBP_Shop_PurchasedReward_C.ExecuteUbergraph_WBP_Shop_PurchasedReward // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

