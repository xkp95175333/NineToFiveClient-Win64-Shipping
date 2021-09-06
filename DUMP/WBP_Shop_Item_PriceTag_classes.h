// WidgetBlueprintGeneratedClass WBP_Shop_Item_PriceTag.WBP_Shop_Item_PriceTag_C
// Size: 0x2ed (Inherited: 0x260)
struct UWBP_Shop_Item_PriceTag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* Actual; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* ActualPrice; // 0x270(0x08)
	struct UHorizontalBox* Offered; // 0x278(0x08)
	struct UImage* OfferedPriceImage; // 0x280(0x08)
	struct UImage* OriginalPriceIMage; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* PriceOnOffer; // 0x290(0x08)
	struct UHorizontalBox* PricesContainer; // 0x298(0x08)
	struct UScaleBox* ScaleBox_1; // 0x2a0(0x08)
	struct USpacer* Spacer_49; // 0x2a8(0x08)
	struct UImage* StrikeThrough; // 0x2b0(0x08)
	struct FText OfferedPrice; // 0x2b8(0x18)
	struct FText OriginalPrice; // 0x2d0(0x18)
	float Scale; // 0x2e8(0x04)
	enum class EHorizontalAlignment HorizontalAllignment; // 0x2ec(0x01)

	void SetDismantleOffer(int32_t Credits, int32_t Materials, enum class EHWFaction Faction); // Function WBP_Shop_Item_PriceTag.WBP_Shop_Item_PriceTag_C.SetDismantleOffer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPrice(struct FText Offered, struct FText Original, enum class EHWCurrencyType CurrencyType); // Function WBP_Shop_Item_PriceTag.WBP_Shop_Item_PriceTag_C.SetPrice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateScaleAndAllignment(); // Function WBP_Shop_Item_PriceTag.WBP_Shop_Item_PriceTag_C.UpdateScaleAndAllignment // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Shop_Item_PriceTag.WBP_Shop_Item_PriceTag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Shop_Item_PriceTag(int32_t EntryPoint); // Function WBP_Shop_Item_PriceTag.WBP_Shop_Item_PriceTag_C.ExecuteUbergraph_WBP_Shop_Item_PriceTag // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

