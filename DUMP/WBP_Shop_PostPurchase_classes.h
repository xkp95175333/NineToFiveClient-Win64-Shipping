// WidgetBlueprintGeneratedClass WBP_Shop_PostPurchase.WBP_Shop_PostPurchase_C
// Size: 0x370 (Inherited: 0x278)
struct UWBP_Shop_PostPurchase_C : UHWRewardPopupWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UWidgetAnimation* Intro; // 0x280(0x08)
	struct UImage* BackgroundColor; // 0x288(0x08)
	struct UImage* BottomDetail; // 0x290(0x08)
	struct UImage* Bottomline; // 0x298(0x08)
	struct UHorizontalBox* BundleItems; // 0x2a0(0x08)
	struct UImage* Filter; // 0x2a8(0x08)
	struct UImage* Grid; // 0x2b0(0x08)
	struct UWBP_PostMatch_Header2_C* Header; // 0x2b8(0x08)
	struct UWBP_MainButton_C* ProceedButton; // 0x2c0(0x08)
	struct UImage* Topline; // 0x2c8(0x08)
	struct UWBP_Shop_PurchasedReward_C* WBP_Shop_PurchasedReward; // 0x2d0(0x08)
	int32_t RevealIndex; // 0x2d8(0x04)
	float CardAnimationOffset; // 0x2dc(0x04)
	struct FMulticastInlineDelegate OnClosed; // 0x2e0(0x10)
	int32_t LevelProgressions; // 0x2f0(0x04)
	int32_t NewLevel; // 0x2f4(0x04)
	struct FHWShopItem ShopItem; // 0x2f8(0x78)

	void Finished_9159D7FF4130B02565EF57B6B7CDCB61(); // Function WBP_Shop_PostPurchase.WBP_Shop_PostPurchase_C.Finished_9159D7FF4130B02565EF57B6B7CDCB61 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Shop_PostPurchase.WBP_Shop_PostPurchase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ProceedButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Shop_PostPurchase.WBP_Shop_PostPurchase_C.BndEvt__ProceedButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Shop_PostPurchase.WBP_Shop_PostPurchase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void RevealNextRewardCard(); // Function WBP_Shop_PostPurchase.WBP_Shop_PostPurchase_C.RevealNextRewardCard // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateItems(); // Function WBP_Shop_PostPurchase.WBP_Shop_PostPurchase_C.CreateItems // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CardsAnimation(); // Function WBP_Shop_PostPurchase.WBP_Shop_PostPurchase_C.CardsAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Print Item Data(); // Function WBP_Shop_PostPurchase.WBP_Shop_PostPurchase_C.Print Item Data // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Shop_PostPurchase(int32_t EntryPoint); // Function WBP_Shop_PostPurchase.WBP_Shop_PostPurchase_C.ExecuteUbergraph_WBP_Shop_PostPurchase // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClosed__DelegateSignature(); // Function WBP_Shop_PostPurchase.WBP_Shop_PostPurchase_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

