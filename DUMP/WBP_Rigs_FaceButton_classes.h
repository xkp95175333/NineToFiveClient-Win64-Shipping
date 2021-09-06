// WidgetBlueprintGeneratedClass WBP_Rigs_FaceButton.WBP_Rigs_FaceButton_C
// Size: 0x318 (Inherited: 0x260)
struct UWBP_Rigs_FaceButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* HoverBorder; // 0x268(0x08)
	struct UImage* Image_Face; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_Name; // 0x278(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x280(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x288(0x10)
	struct FHWArmorData FaceData; // 0x298(0x68)
	struct FMulticastInlineDelegate OnHovered; // 0x300(0x10)
	struct FName CharacterId; // 0x310(0x08)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_FaceButton.WBP_Rigs_FaceButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Rigs_FaceButton.WBP_Rigs_FaceButton_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_FaceButton.WBP_Rigs_FaceButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Rigs_FaceButton.WBP_Rigs_FaceButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_FaceButton.WBP_Rigs_FaceButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_FaceButton.WBP_Rigs_FaceButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_FaceButton(int32_t EntryPoint); // Function WBP_Rigs_FaceButton.WBP_Rigs_FaceButton_C.ExecuteUbergraph_WBP_Rigs_FaceButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHovered__DelegateSignature(struct FName CharacterId, bool IsHover); // Function WBP_Rigs_FaceButton.WBP_Rigs_FaceButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FName CharacterId); // Function WBP_Rigs_FaceButton.WBP_Rigs_FaceButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

