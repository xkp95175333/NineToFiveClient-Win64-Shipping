// WidgetBlueprintGeneratedClass WBP_ShopCurrency_DetailItem.WBP_ShopCurrency_DetailItem_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_ShopCurrency_DetailItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UImage* DescriptionBg; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* DescriptionText; // 0x278(0x08)
	struct UImage* Icon; // 0x280(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x288(0x08)

	void SetContent(struct FText Description, struct UTexture2D* Texture); // Function WBP_ShopCurrency_DetailItem.WBP_ShopCurrency_DetailItem_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_ShopCurrency_DetailItem.WBP_ShopCurrency_DetailItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ShopCurrency_DetailItem(int32_t EntryPoint); // Function WBP_ShopCurrency_DetailItem.WBP_ShopCurrency_DetailItem_C.ExecuteUbergraph_WBP_ShopCurrency_DetailItem // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

