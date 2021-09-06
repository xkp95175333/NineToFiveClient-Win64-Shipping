// WidgetBlueprintGeneratedClass WBP_DiscountTag.WBP_DiscountTag_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_DiscountTag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* DiscountAmount; // 0x268(0x08)
	struct UImage* SelectionIndicator; // 0x270(0x08)
	struct USizeBox* SizeBox_33; // 0x278(0x08)
	enum class BPE_UIColors Color; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct FDataTableRowHandle Style; // 0x288(0x10)
	int32_t Discount; // 0x298(0x04)
	bool IsDiscounted?; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	float Width; // 0x2a0(0x04)
	float Height; // 0x2a4(0x04)
	struct FMargin TextPadding; // 0x2a8(0x10)

	void SetDiscount(int32_t DiscountPercentage); // Function WBP_DiscountTag.WBP_DiscountTag_C.SetDiscount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_DiscountTag.WBP_DiscountTag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DiscountTag.WBP_DiscountTag_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DiscountTag(int32_t EntryPoint); // Function WBP_DiscountTag.WBP_DiscountTag_C.ExecuteUbergraph_WBP_DiscountTag // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

