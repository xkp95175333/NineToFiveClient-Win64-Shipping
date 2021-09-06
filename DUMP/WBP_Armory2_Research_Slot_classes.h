// WidgetBlueprintGeneratedClass WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C
// Size: 0x378 (Inherited: 0x260)
struct UWBP_Armory2_Research_Slot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_MainButton_C* CancelStartButton; // 0x268(0x08)
	struct UWBP_Armory2_Weapon_Model_Card_C* Card; // 0x270(0x08)
	struct UWBP_Armory2_Weapon_Model_Card_C* Card_2; // 0x278(0x08)
	struct UWBP_Armory2_Weapon_Model_Card_C* Card_3; // 0x280(0x08)
	struct UOverlay* CompletedIndicator; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* ConfirmPrompt; // 0x290(0x08)
	struct UWBP_MainButton_C* ConfirmStartButton; // 0x298(0x08)
	struct UOverlay* ConfirmStartPage; // 0x2a0(0x08)
	struct UOverlay* DropTargetBorder; // 0x2a8(0x08)
	struct UBorder* DropTargetBorderFill; // 0x2b0(0x08)
	struct UBorder* DropTargetBorderLine; // 0x2b8(0x08)
	struct UOverlay* EmptyPage; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* EmptySlotLabel; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* EmptySlotLabel_2; // 0x2d0(0x08)
	struct UImage* Image_HighlightBottom; // 0x2d8(0x08)
	struct UImage* Image_HighlightTop; // 0x2e0(0x08)
	struct UImage* Image_OrangeGlow; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* ObjectiveText; // 0x2f0(0x08)
	struct UOverlay* OccupiedPage; // 0x2f8(0x08)
	struct UWidgetSwitcher* PageSwitcher; // 0x300(0x08)
	struct UWBP_MainButton_C* Removebutton; // 0x308(0x08)
	struct UOverlay* RemoveFromSlotPage; // 0x310(0x08)
	struct UWBP_MainButton_C* UpgradeButton; // 0x318(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_235; // 0x320(0x08)
	struct FMulticastInlineDelegate OnRemoveClicked; // 0x328(0x10)
	struct UHWArmoryItem* Item; // 0x338(0x08)
	struct UHWArmoryItem* StartConfirmationItem; // 0x340(0x08)
	int32_t SlotIndex; // 0x348(0x04)
	bool IsUpgradeCompleted; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct UBP_Armory2_DragDropContext_C* DragDropContext; // 0x350(0x08)
	bool IsAnyUpgradePossible; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FMulticastInlineDelegate OnOpenItem; // 0x360(0x10)
	struct UHWArmoryItem* ClaimedItem; // 0x370(0x08)

	void Set Upgrade Possible(bool IsPossible); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.Set Upgrade Possible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnContextDragCanceled(struct UObject* Obj); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.OnContextDragCanceled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnContextDragCompleted(struct UObject* Obj); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.OnContextDragCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnContextDragStarted(struct UObject* Obj); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.OnContextDragStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDragDropContext(struct UBP_Armory2_DragDropContext_C* Context); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.SetDragDropContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Show Drop Target(bool Visible); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.Show Drop Target // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetEmpty(); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.SetEmpty // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetItem(struct UHWArmoryItem* Item); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.SetItem // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateWidget(); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.UpdateWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ConfirmStartWithItem(struct UHWArmoryItem* Item); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.ConfirmStartWithItem // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__NoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ConfirmStartButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.BndEvt__ConfirmStartButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Research_Slot(int32_t EntryPoint); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.ExecuteUbergraph_WBP_Armory2_Research_Slot // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnOpenItem__DelegateSignature(struct UHWArmoryItem* Item); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.OnOpenItem__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRemoveClicked__DelegateSignature(struct FString ItemId); // Function WBP_Armory2_Research_Slot.WBP_Armory2_Research_Slot_C.OnRemoveClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

