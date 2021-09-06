// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C
// Size: 0x3d1 (Inherited: 0x260)
struct UWBP_Armory3_WeaponCatalog_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Show; // 0x268(0x08)
	struct UButton* Button_69; // 0x270(0x08)
	struct UImage* Divider; // 0x278(0x08)
	struct UWidgetSwitcher* TabSwitcher; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* Title; // 0x288(0x08)
	struct UWBP_ButtonBar_C* WBP_ButtonBar; // 0x290(0x08)
	struct UWBP_CloseButton_C* WBP_CloseButton_120; // 0x298(0x08)
	struct UListView* WeaponParts; // 0x2a0(0x08)
	struct UListView* WeaponVariations; // 0x2a8(0x08)
	struct FMulticastInlineDelegate CloseCatalog; // 0x2b0(0x10)
	struct UHWArmoryWeaponModel* WeaponModel; // 0x2c0(0x08)
	struct FMulticastInlineDelegate PartClicked; // 0x2c8(0x10)
	int32_t SelectedVariationIndex; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct TMap<struct FString, struct UBP_Armory3_WeaponPart_ListEntry_C*> WeaponPartsMap; // 0x2e0(0x50)
	struct FMulticastInlineDelegate VariationHovered; // 0x330(0x10)
	struct FMulticastInlineDelegate VariationSelected; // 0x340(0x10)
	struct TMap<struct FString, struct UBP_Armory3_WeaponVariation_ListEntry_C*> WeaponVariationsMap; // 0x350(0x50)
	struct FMulticastInlineDelegate WeaponDismantled; // 0x3a0(0x10)
	struct FMulticastInlineDelegate PartDismantled; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnLinkToShopClicked; // 0x3c0(0x10)
	bool ShopLinkAvailable; // 0x3d0(0x01)

	void GetVariationIndex(struct UObject* ItemObject, int32_t Index); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.GetVariationIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetVariationSelection(struct UObject* ItemObject); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.SetVariationSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponPartsButtonText(); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.SetWeaponPartsButtonText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponVariationsTabContent(); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.SetWeaponVariationsTabContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponPartsTabContent(); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.SetWeaponPartsTabContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ShowCatalog(bool DoHide); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.ShowCatalog // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RemoveFromVP(); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.RemoveFromVP // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_ButtonBar_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(struct FBP_NavigationBar_Item Button); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.BndEvt__WBP_ButtonBar_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponParts_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.BndEvt__WeaponParts_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_CloseButton_119_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.BndEvt__WBP_CloseButton_119_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPartDismantled(struct FString ItemId); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.OnPartDismantled // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_68_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.BndEvt__Button_68_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponVariations_K2Node_ComponentBoundEvent_3_OnItemIsHoveredChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsHovered); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.BndEvt__WeaponVariations_K2Node_ComponentBoundEvent_3_OnItemIsHoveredChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponVariations_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsSelected); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.BndEvt__WeaponVariations_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponDismantled(struct FName PartId); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.OnWeaponDismantled // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActiveTab(); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.SetActiveTab // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponParts_K2Node_ComponentBoundEvent_6_OnItemIsHoveredChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsHovered); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.BndEvt__WeaponParts_K2Node_ComponentBoundEvent_6_OnItemIsHoveredChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponCatalog(int32_t EntryPoint); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.ExecuteUbergraph_WBP_Armory3_WeaponCatalog // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnLinkToShopClicked__DelegateSignature(); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.OnLinkToShopClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PartDismantled__DelegateSignature(); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.PartDismantled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponDismantled__DelegateSignature(struct FName VariationPartId); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.WeaponDismantled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void VariationSelected__DelegateSignature(int32_t Index); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.VariationSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void VariationHovered__DelegateSignature(int32_t VariationIndex, bool IsHovered); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.VariationHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PartClicked__DelegateSignature(struct UHWArmoryWeaponPartItem* PartData); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.PartClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CloseCatalog__DelegateSignature(); // Function WBP_Armory3_WeaponCatalog.WBP_Armory3_WeaponCatalog_C.CloseCatalog__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

