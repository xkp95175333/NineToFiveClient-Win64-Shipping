// WidgetBlueprintGeneratedClass WBP_Armory3_SellButton.WBP_Armory3_SellButton_C
// Size: 0x319 (Inherited: 0x260)
struct UWBP_Armory3_SellButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_Sell; // 0x268(0x08)
	struct UImage* Image_Sell; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x278(0x08)
	bool Available; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct FText Hint_Text; // 0x288(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x2a0(0x10)
	bool IsWeaponPart; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FString ItemId; // 0x2b8(0x10)
	struct FMulticastInlineDelegate WeaponPartDismantled; // 0x2c8(0x10)
	struct FMulticastInlineDelegate WeaponDismantled; // 0x2d8(0x10)
	bool IsWeaponCode; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FString ReceiverId; // 0x2f0(0x10)
	bool IsPartInstalled; // 0x300(0x01)
	enum class EHWWeaponPartType PartType; // 0x301(0x01)
	char pad_302[0x6]; // 0x302(0x06)
	struct FString DefaultPartItemId; // 0x308(0x10)
	enum class EHWRarity Rarity; // 0x318(0x01)

	void SetWeaponPartSellContent(struct FText HintText, struct FString PartItemId, bool IsInstalled, struct FString ReceiverItemId, bool IsAvailable, enum class EHWWeaponPartType PartType); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.SetWeaponPartSellContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponOrCodeSellContent(struct FString WeaponItemId, struct FText Hint, bool IsAvailable, bool IsWeaponCode); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.SetWeaponOrCodeSellContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Content(struct FText HintText, bool IsAvailable, bool IsWeaponPart, bool IsWeaponCode, struct FString ItemId, bool IsInstalled); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.Set Content // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set availability(bool Avaialable); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.Set availability // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Sell_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.BndEvt__Button_Sell_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Sell(); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.Sell // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDismantleConfirmed(bool Result); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.OnDismantleConfirmed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDismantleCompleted(struct FHWResponseBase Response); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.OnDismantleCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDismantleFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.OnDismantleFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Sell_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.BndEvt__Button_Sell_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Sell_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.BndEvt__Button_Sell_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Collecting reward(struct FHWProfileWithCollectedRewardsResponse Response); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.Collecting reward // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_SellButton(int32_t EntryPoint); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.ExecuteUbergraph_WBP_Armory3_SellButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void WeaponDismantled__DelegateSignature(); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.WeaponDismantled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponPartDismantled__DelegateSignature(); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.WeaponPartDismantled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(); // Function WBP_Armory3_SellButton.WBP_Armory3_SellButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

