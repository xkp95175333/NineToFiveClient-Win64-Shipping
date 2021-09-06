// BlueprintGeneratedClass BP_ShopBundleItem.BP_ShopBundleItem_C
// Size: 0xd0 (Inherited: 0x28)
struct UBP_ShopBundleItem_C : UObject {
	struct FHWShopItem ItemData; // 0x28(0x78)
	enum class EHW_ShopItem_Size ItemSize; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FString SubsectionId; // 0xa8(0x10)
	struct FString CampaginId; // 0xb8(0x10)
	bool IsBundleCard; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	int32_t RewardIndex; // 0xcc(0x04)
};

