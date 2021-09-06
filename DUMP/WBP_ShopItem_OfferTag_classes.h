// WidgetBlueprintGeneratedClass WBP_ShopItem_OfferTag.WBP_ShopItem_OfferTag_C
// Size: 0x278 (Inherited: 0x260)
struct UWBP_ShopItem_OfferTag_C : UUserWidget {
	struct UBorder* BackgroundColor; // 0x260(0x08)
	struct USizeBox* BoxWithBlockBg; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Text; // 0x270(0x08)

	void SetData(struct FHWShopItem ItemData, bool IsOutOfStock, bool AlreadyOwned); // Function WBP_ShopItem_OfferTag.WBP_ShopItem_OfferTag_C.SetData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(struct FText Text, struct FLinearColor Color, enum class BPE_UIColors TextColor); // Function WBP_ShopItem_OfferTag.WBP_ShopItem_OfferTag_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

