// WidgetBlueprintGeneratedClass WBP_CurrencyCost.WBP_CurrencyCost_C
// Size: 0x2b0 (Inherited: 0x260)
struct UWBP_CurrencyCost_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* Container_2; // 0x268(0x08)
	int32_t CreditsCost; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct UBP_UIStyle_Label_C* TextStyle; // 0x278(0x08)
	bool Use Custom Color; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct FSlateColor Custom Color; // 0x288(0x28)

	void UpdateContents(); // Function WBP_CurrencyCost.WBP_CurrencyCost_C.UpdateContents // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddElement(int32_t Count, struct UTexture2D* Icon); // Function WBP_CurrencyCost.WBP_CurrencyCost_C.AddElement // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetCost(int32_t Credits); // Function WBP_CurrencyCost.WBP_CurrencyCost_C.SetCost // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetCreditsCost(int32_t Credits); // Function WBP_CurrencyCost.WBP_CurrencyCost_C.SetCreditsCost // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_CurrencyCost.WBP_CurrencyCost_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_CurrencyCost(int32_t EntryPoint); // Function WBP_CurrencyCost.WBP_CurrencyCost_C.ExecuteUbergraph_WBP_CurrencyCost // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

