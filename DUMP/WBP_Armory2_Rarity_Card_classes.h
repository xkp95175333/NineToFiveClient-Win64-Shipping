// WidgetBlueprintGeneratedClass WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C
// Size: 0x2ab (Inherited: 0x260)
struct UWBP_Armory2_Rarity_Card_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* CardButton; // 0x268(0x08)
	struct UImage* CardImage; // 0x270(0x08)
	struct UImage* RarityIndicator; // 0x278(0x08)
	enum class EHWRarity CurrentBlueprintRarity; // 0x280(0x01)
	enum class EHWRarity Rarity; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	struct FLinearColor DefaultPlusButtonColor; // 0x284(0x10)
	char pad_294[0x4]; // 0x294(0x04)
	struct FMulticastInlineDelegate OnClicked; // 0x298(0x10)
	bool CanBeClicked; // 0x2a8(0x01)
	bool ShowNextRarityAsLocked; // 0x2a9(0x01)
	bool ShowAllRaritiesAsLocked; // 0x2aa(0x01)

	void HideRarityIndicator(); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.HideRarityIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowRarityIndicator(); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.ShowRarityIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetRarityComparison(enum class EHWRarityComparisonType Result); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.GetRarityComparison // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateWidget(); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.UpdateWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetBlueprintRarity(enum class EHWRarity Rarity); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.SetBlueprintRarity // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetSimpleRarity(enum class EHWRarity Rarity); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.SetSimpleRarity // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void SetNextRarityLocked(bool Locked); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.SetNextRarityLocked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetAllRaritiesLocked(bool Locked); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.SetAllRaritiesLocked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Rarity_Card(int32_t EntryPoint); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.ExecuteUbergraph_WBP_Armory2_Rarity_Card // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(enum class EHWRarity Rarity); // Function WBP_Armory2_Rarity_Card.WBP_Armory2_Rarity_Card_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

