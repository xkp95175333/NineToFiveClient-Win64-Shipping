// WidgetBlueprintGeneratedClass WBP_Wallet_Item_Tooltip.WBP_Wallet_Item_Tooltip_C
// Size: 0x2d1 (Inherited: 0x260)
struct UWBP_Wallet_Item_Tooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_TooltipSectionHeader_C* HowToAcquireHeader; // 0x268(0x08)
	struct UListView* HowToAcquireListView; // 0x270(0x08)
	struct UWBP_TooltipSectionHeader_C* HowToSpendHeader; // 0x278(0x08)
	struct UListView* HowToSpendListView; // 0x280(0x08)
	struct UImage* Image_Star1; // 0x288(0x08)
	struct UImage* Image_Star2; // 0x290(0x08)
	struct UImage* Image_Star3; // 0x298(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* WBP_Description; // 0x2a8(0x08)
	struct UWBP_RichTextLabel_C* WBP_Header; // 0x2b0(0x08)
	struct FText HeaderText; // 0x2b8(0x18)
	enum class EHW_CurrencyType WalletItemType; // 0x2d0(0x01)

	void GetHowToAcquireCurrencyTexts(struct TArray<struct FText> HowToAcquireTexts); // Function WBP_Wallet_Item_Tooltip.WBP_Wallet_Item_Tooltip_C.GetHowToAcquireCurrencyTexts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetHowToSpendCurrencyTexts(struct TArray<struct FText> HowToSpendTexts); // Function WBP_Wallet_Item_Tooltip.WBP_Wallet_Item_Tooltip_C.GetHowToSpendCurrencyTexts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Wallet_Item_Tooltip.WBP_Wallet_Item_Tooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Wallet_Item_Tooltip.WBP_Wallet_Item_Tooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Wallet_Item_Tooltip(int32_t EntryPoint); // Function WBP_Wallet_Item_Tooltip.WBP_Wallet_Item_Tooltip_C.ExecuteUbergraph_WBP_Wallet_Item_Tooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

