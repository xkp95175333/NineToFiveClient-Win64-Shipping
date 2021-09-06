// WidgetBlueprintGeneratedClass WBP_Rigs_ArmorSetButton.WBP_Rigs_ArmorSetButton_C
// Size: 0x2c0 (Inherited: 0x260)
struct UWBP_Rigs_ArmorSetButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Manufacturer; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Label_ArmorSetName; // 0x270(0x08)
	struct UWBP_Rigs_ButtonBackground_C* WBP_Rigs_ButtonBackground; // 0x278(0x08)
	struct FText ArmorSetName; // 0x280(0x18)
	enum class EHWVendor Vendor; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x2b0(0x10)

	void Update(); // Function WBP_Rigs_ArmorSetButton.WBP_Rigs_ArmorSetButton_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(struct FText NewName, enum class EHWVendor NewVendor); // Function WBP_Rigs_ArmorSetButton.WBP_Rigs_ArmorSetButton_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_ArmorSetButton.WBP_Rigs_ArmorSetButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_ArmorSetButton.WBP_Rigs_ArmorSetButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_ArmorSetButton.WBP_Rigs_ArmorSetButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_ArmorSetButton.WBP_Rigs_ArmorSetButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_ArmorSetButton(int32_t EntryPoint); // Function WBP_Rigs_ArmorSetButton.WBP_Rigs_ArmorSetButton_C.ExecuteUbergraph_WBP_Rigs_ArmorSetButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHovered__DelegateSignature(bool IsHover); // Function WBP_Rigs_ArmorSetButton.WBP_Rigs_ArmorSetButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct UWBP_Rigs_ArmorSetButton_C* Button); // Function WBP_Rigs_ArmorSetButton.WBP_Rigs_ArmorSetButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

