// WidgetBlueprintGeneratedClass WBP_Rigs_ItemButton.WBP_Rigs_ItemButton_C
// Size: 0x2cc (Inherited: 0x260)
struct UWBP_Rigs_ItemButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Rigs_ButtonBackground_C* Background; // 0x268(0x08)
	struct UImage* Image_Item; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_ItemCategory; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label_ItemCount; // 0x280(0x08)
	struct FName ItemId; // 0x288(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x290(0x10)
	struct FString ItemCategory; // 0x2a0(0x10)
	int32_t ItemCount; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FMulticastInlineDelegate OnHover; // 0x2b8(0x10)
	int32_t SlotIdx; // 0x2c8(0x04)

	void SetData(struct FName ItemId); // Function WBP_Rigs_ItemButton.WBP_Rigs_ItemButton_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Rigs_ItemButton.WBP_Rigs_ItemButton_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_ItemButton.WBP_Rigs_ItemButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_ItemButton.WBP_Rigs_ItemButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_ItemButton.WBP_Rigs_ItemButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_ItemButton.WBP_Rigs_ItemButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_ItemButton(int32_t EntryPoint); // Function WBP_Rigs_ItemButton.WBP_Rigs_ItemButton_C.ExecuteUbergraph_WBP_Rigs_ItemButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHover__DelegateSignature(bool IsHover, struct FName ItemId); // Function WBP_Rigs_ItemButton.WBP_Rigs_ItemButton_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FString ItemCategory, struct UWBP_Rigs_ItemButton_C* Button); // Function WBP_Rigs_ItemButton.WBP_Rigs_ItemButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

