// WidgetBlueprintGeneratedClass WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C
// Size: 0x3c0 (Inherited: 0x260)
struct UWBP_Rigs_RigListItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Border_1; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Label_RigName; // 0x270(0x08)
	struct UMenuAnchor* MenuAnchor_301; // 0x278(0x08)
	struct UOverlay* ScreenBlank; // 0x280(0x08)
	struct UOverlay* ScreenCreateNew; // 0x288(0x08)
	struct UOverlay* ScreenLoadout; // 0x290(0x08)
	struct UImage* SelectionIndicator; // 0x298(0x08)
	struct UButton* ShowOptionsButton; // 0x2a0(0x08)
	struct UImage* ShowOptionsIMage; // 0x2a8(0x08)
	struct UWidgetSwitcher* Switcher; // 0x2b0(0x08)
	struct UWBP_Rigs_ButtonBackground_C* WBP_Rigs_ButtonBackground; // 0x2b8(0x08)
	struct UWBP_Rigs_ButtonBackground_C* WBP_Rigs_ButtonBackground_2; // 0x2c0(0x08)
	bool IsSelected; // 0x2c8(0x01)
	bool IsFirstEmpty; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct FString RigName; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnHover; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnSelectedRigRenamed; // 0x300(0x10)
	struct FHWLoadoutData LoadoutData; // 0x310(0x88)
	int32_t MaxRigsAllowed; // 0x398(0x04)
	int32_t TotalRigs; // 0x39c(0x04)
	struct FMulticastInlineDelegate OnCreateNewRig; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnDeleteRig; // 0x3b0(0x10)

	void UpdateSelection(bool IsSelected); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.UpdateSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UUserWidget* OnGetUserMenuContent_1(); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnGetUserMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetBackgroundColor(bool IsHover); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OpenOptionsMenu(); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OpenOptionsMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CloseOptionsMenu(); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.CloseOptionsMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MenuAnchor_300_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.BndEvt__MenuAnchor_300_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void RenameRig(); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.RenameRig // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRigRenamed(struct FString Result); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnRigRenamed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRigRenameSucceeded(struct FHWResponseBase Response); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnRigRenameSucceeded // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRigRenameFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnRigRenameFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetRigName(); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.SetRigName // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void DuplicateRig(); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.DuplicateRig // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ShowOptionsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.BndEvt__ShowOptionsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ShowOptionsButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.BndEvt__ShowOptionsButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ShowOptionsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.BndEvt__ShowOptionsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ShowDeleteConfirmationPopup(); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.ShowDeleteConfirmationPopup // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopupCallback(bool Result); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.PopupCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ErrorPopupCallback(bool Result); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.ErrorPopupCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_RigListItem(int32_t EntryPoint); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.ExecuteUbergraph_WBP_Rigs_RigListItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnDeleteRig__DelegateSignature(struct FString RigName); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnDeleteRig__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCreateNewRig__DelegateSignature(struct FString RigName, bool Duplicating); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnCreateNewRig__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSelectedRigRenamed__DelegateSignature(struct FString NewRigName); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnSelectedRigRenamed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnHover__DelegateSignature(struct FString LoadoutId); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct FString RigName); // Function WBP_Rigs_RigListItem.WBP_Rigs_RigListItem_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

