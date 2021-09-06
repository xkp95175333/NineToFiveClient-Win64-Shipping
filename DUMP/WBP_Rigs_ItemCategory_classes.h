// WidgetBlueprintGeneratedClass WBP_Rigs_ItemCategory.WBP_Rigs_ItemCategory_C
// Size: 0x2ac (Inherited: 0x260)
struct UWBP_Rigs_ItemCategory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* AlreadyEquipped; // 0x268(0x08)
	struct UWBP_Rigs_ButtonBackground_C* Background; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_CategoryName; // 0x278(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x280(0x10)
	struct FString ItemCategory; // 0x290(0x10)
	int32_t SlotIndex; // 0x2a0(0x04)
	bool IsLast; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	int32_t AlreadyInSlotIdx; // 0x2a8(0x04)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_ItemCategory.WBP_Rigs_ItemCategory_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_ItemCategory.WBP_Rigs_ItemCategory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Rigs_ItemCategory.WBP_Rigs_ItemCategory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateSelection(bool Visible, struct FText SelectedItem); // Function WBP_Rigs_ItemCategory.WBP_Rigs_ItemCategory_C.UpdateSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_ItemCategory.WBP_Rigs_ItemCategory_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_ItemCategory.WBP_Rigs_ItemCategory_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_ItemCategory(int32_t EntryPoint); // Function WBP_Rigs_ItemCategory.WBP_Rigs_ItemCategory_C.ExecuteUbergraph_WBP_Rigs_ItemCategory // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FString ItemCategory, int32_t SlotIdx); // Function WBP_Rigs_ItemCategory.WBP_Rigs_ItemCategory_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

