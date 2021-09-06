// WidgetBlueprintGeneratedClass WBP_Rigs_ButtonBackground.WBP_Rigs_ButtonBackground_C
// Size: 0x282 (Inherited: 0x260)
struct UWBP_Rigs_ButtonBackground_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Bottomline; // 0x268(0x08)
	struct UImage* SelectionIndicator; // 0x270(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x278(0x08)
	bool Selected; // 0x280(0x01)
	bool CanHover; // 0x281(0x01)

	void SetIsLast(bool IsLast); // Function WBP_Rigs_ButtonBackground.WBP_Rigs_ButtonBackground_C.SetIsLast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActive(bool IsActive); // Function WBP_Rigs_ButtonBackground.WBP_Rigs_ButtonBackground_C.SetActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetCanHover(bool CanHover); // Function WBP_Rigs_ButtonBackground.WBP_Rigs_ButtonBackground_C.SetCanHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Rigs_ButtonBackground.WBP_Rigs_ButtonBackground_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetSelected(bool IsSelected); // Function WBP_Rigs_ButtonBackground.WBP_Rigs_ButtonBackground_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHoverState(bool IsHover); // Function WBP_Rigs_ButtonBackground.WBP_Rigs_ButtonBackground_C.SetHoverState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_ButtonBackground.WBP_Rigs_ButtonBackground_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_ButtonBackground.WBP_Rigs_ButtonBackground_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_ButtonBackground(int32_t EntryPoint); // Function WBP_Rigs_ButtonBackground.WBP_Rigs_ButtonBackground_C.ExecuteUbergraph_WBP_Rigs_ButtonBackground // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

