// WidgetBlueprintGeneratedClass WBP_ImageButton.WBP_ImageButton_C
// Size: 0x2c8 (Inherited: 0x268)
struct UWBP_ImageButton_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* TitleImage; // 0x270(0x08)
	struct UBP_UIStyle_ImageButton_C* Style; // 0x278(0x08)
	struct UTexture2D* Image; // 0x280(0x08)
	struct FMulticastInlineDelegate OnHover; // 0x288(0x10)
	struct FMulticastInlineDelegate OnClick; // 0x298(0x10)
	struct FMargin ImagePadding; // 0x2a8(0x10)
	enum class EHWSelectableButtonPressBehavior Behavior; // 0x2b8(0x01)
	bool Hovered; // 0x2b9(0x01)
	bool Selected; // 0x2ba(0x01)
	char pad_2BB[0x5]; // 0x2bb(0x05)
	struct UAkAudioEvent* ClickSound; // 0x2c0(0x08)

	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ImageButton.WBP_ImageButton_C.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnableButton(); // Function WBP_ImageButton.WBP_ImageButton_C.EnableButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DisableButton(); // Function WBP_ImageButton.WBP_ImageButton_C.DisableButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ImageButton.WBP_ImageButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Looks(); // Function WBP_ImageButton.WBP_ImageButton_C.Set Looks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ImageButton.WBP_ImageButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_ImageButton.WBP_ImageButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ImageButton.WBP_ImageButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_ImageButton.WBP_ImageButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_ImageButton.WBP_ImageButton_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ImageButton(int32_t EntryPoint); // Function WBP_ImageButton.WBP_ImageButton_C.ExecuteUbergraph_WBP_ImageButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnClick__DelegateSignature(struct UWBP_ImageButton_C* Button); // Function WBP_ImageButton.WBP_ImageButton_C.OnClick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnHover__DelegateSignature(bool IsHovered); // Function WBP_ImageButton.WBP_ImageButton_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

