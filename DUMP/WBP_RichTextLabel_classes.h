// WidgetBlueprintGeneratedClass WBP_RichTextLabel.WBP_RichTextLabel_C
// Size: 0x2d4 (Inherited: 0x260)
struct UWBP_RichTextLabel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct URichTextBlock* Text; // 0x268(0x08)
	struct FDataTableRowHandle Style; // 0x270(0x10)
	int32_t FontSize; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FText Content; // 0x288(0x18)
	enum class BPE_UIColors Color; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FMulticastInlineDelegate OnHoverChanged; // 0x2a8(0x10)
	bool WordWrap; // 0x2b8(0x01)
	enum class ETextJustify Justification; // 0x2b9(0x01)
	char pad_2BA[0x2]; // 0x2ba(0x02)
	struct FLinearColor DropShadowColorAndOpacity; // 0x2bc(0x10)
	struct FVector2D DropShadowOffset; // 0x2cc(0x08)

	void GetText(struct FText Text); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.GetText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Reset To Font Library Style(); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.Reset To Font Library Style // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetJustification(enum class ETextJustify Justification); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.SetJustification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetFontSize(int32_t Size); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.SetFontSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetStyle(struct FDataTableRowHandle Style); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetColor(enum class BPE_UIColors Content); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReadStyle(struct FHWLabelStyleRow Style); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.ReadStyle // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetText(struct FText Content); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void FixObsoleteStyleReferences(); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.FixObsoleteStyleReferences // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseKeyboardInput(); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.OnMouseKeyboardInput // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnGamepadInput(); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.OnGamepadInput // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RichTextLabel(int32_t EntryPoint); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.ExecuteUbergraph_WBP_RichTextLabel // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHoverChanged__DelegateSignature(bool IsHovered); // Function WBP_RichTextLabel.WBP_RichTextLabel_C.OnHoverChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

