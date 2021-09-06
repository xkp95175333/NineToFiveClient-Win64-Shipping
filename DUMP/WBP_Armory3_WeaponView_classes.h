// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C
// Size: 0x411 (Inherited: 0x268)
struct UWBP_Armory3_WeaponView_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* ShowCatalog; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Back-Text; // 0x278(0x08)
	struct UButton* BackButton; // 0x280(0x08)
	struct UImage* Background; // 0x288(0x08)
	struct UWBP_Armory3_WeaponView_Details_C* DetailsPanel; // 0x290(0x08)
	struct UImage* FactionLogo; // 0x298(0x08)
	struct UImage* Image_2; // 0x2a0(0x08)
	struct UImage* Image_3; // 0x2a8(0x08)
	struct UImage* Image_Back; // 0x2b0(0x08)
	struct UImage* Left_line; // 0x2b8(0x08)
	struct UImage* LeftArrow; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* LoadingText; // 0x2c8(0x08)
	struct USizeBox* LowerButtons; // 0x2d0(0x08)
	struct UWBP_MainButton_C* ManageParametersButton; // 0x2d8(0x08)
	struct UButton* NextVariationButton; // 0x2e0(0x08)
	struct UWBP_RichTextLabel_C* NextVariationNumberText; // 0x2e8(0x08)
	struct UWBP_RichTextLabel_C* Not_Acquired; // 0x2f0(0x08)
	struct UImage* NotAcquired_Background; // 0x2f8(0x08)
	struct UImage* NotAcquired_Background_2; // 0x300(0x08)
	struct UOverlay* NotAcquiredState; // 0x308(0x08)
	struct UWBP_MainButton_C* OpenCatalogButton; // 0x310(0x08)
	struct UImage* OpenInLoadout-Icon; // 0x318(0x08)
	struct UWBP_RichTextLabel_C* OpenInLoadout-Text; // 0x320(0x08)
	struct UButton* OpenInLoadoutButton; // 0x328(0x08)
	struct UWBP_Armory3_ParameterView_C* ParameterView; // 0x330(0x08)
	struct UWBP_Armory3_WeaponPartPicker_C* PartPickerView; // 0x338(0x08)
	struct UButton* PreviousVariationButton; // 0x340(0x08)
	struct UWBP_RichTextLabel_C* PreviousVariationNumberText; // 0x348(0x08)
	struct UImage* Rename-Icon; // 0x350(0x08)
	struct UWBP_RichTextLabel_C* Rename-Text; // 0x358(0x08)
	struct UButton* RenameWeaponButton; // 0x360(0x08)
	struct UImage* Right_Line; // 0x368(0x08)
	struct UImage* RightArrow; // 0x370(0x08)
	struct UImage* Separator1; // 0x378(0x08)
	struct UImage* Separator2; // 0x380(0x08)
	struct UVerticalBox* Status; // 0x388(0x08)
	struct UHorizontalBox* TagsBox; // 0x390(0x08)
	struct UWidgetSwitcher* ViewSwitcher; // 0x398(0x08)
	struct UWBP_NavigationBar_Separator_C* WBP_NavigationBar_Separator; // 0x3a0(0x08)
	struct UWBP_NavigationBar_Separator_C* WBP_NavigationBar_Separator_2; // 0x3a8(0x08)
	struct UWBP_Armory3_Weapon3DView_C* Weapon3DView; // 0x3b0(0x08)
	struct UWBP_RichTextLabel_C* WeaponCategoryTag; // 0x3b8(0x08)
	struct UWBP_RichTextLabel_C* WeaponNameTag; // 0x3c0(0x08)
	struct UWBP_RichTextLabel_C* WeaponTypeName; // 0x3c8(0x08)
	struct UOverlay* WeaponView; // 0x3d0(0x08)
	struct UHWArmoryWeaponModel* WeaponModel; // 0x3d8(0x08)
	struct FMulticastInlineDelegate BackToArmoryMainScreen; // 0x3e0(0x10)
	bool IsCatalogOpened; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct UWBP_Armory3_WeaponCatalog_C* WeaponCatalog; // 0x3f8(0x08)
	int32_t CurrentVariationIndex; // 0x400(0x04)
	int32_t MoveToVariationIndex; // 0x404(0x04)
	int32_t StoredWidgetIndex; // 0x408(0x04)
	bool Acquired; // 0x40c(0x01)
	bool OpenedFromLoadout; // 0x40d(0x01)
	bool IsCatalogAvailable; // 0x40e(0x01)
	bool IsRenderingThumbnails; // 0x40f(0x01)
	bool IsInParameterView; // 0x410(0x01)

	void OnStoreFixedLoadoutFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.OnStoreFixedLoadoutFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnStoreFixedLoadoutCompleted(struct FHWResponseBase Response); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.OnStoreFixedLoadoutCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Fix Up MultitaskerLoadouts After Weapon Change(int32_t WeaponsChanged); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.Fix Up MultitaskerLoadouts After Weapon Change // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetDefaultPartForWeaponSlot(struct FString WeaponID, enum class EHWWeaponPartType PartType, bool Found, struct FString PartItemId); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.GetDefaultPartForWeaponSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetSelectedVariation(int32_t SelectedVariationIndex); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.SetSelectedVariation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetVariationIndexByWeaponId(struct FString WeaponItemId, bool Found, int32_t Index); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.GetVariationIndexByWeaponId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetCurrentWeaponInfo(struct FHWWeaponInfo Info); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.GetCurrentWeaponInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetQuickVariationAccessButtons(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.SetQuickVariationAccessButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OpenPartPicker(enum class EHWWeaponPartType PartType); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.OpenPartPicker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContent(struct UHWArmoryWeaponModel* WeaponModel, bool Refresh3DView); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateHeader(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.UpdateHeader // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OpenInLoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__OpenInLoadoutButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OpenInLoadoutButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__OpenInLoadoutButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RenameWeaponButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__RenameWeaponButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RenameWeaponButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__RenameWeaponButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_MainButton_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__WBP_MainButton_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OpenCatalog(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.OpenCatalog // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CloseCatalog(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.CloseCatalog // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClosePartPicker(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.ClosePartPicker // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Weapon3DView_K2Node_ComponentBoundEvent_10_WeaponPartClicked__DelegateSignature(enum class EHWWeaponPartType WeaponPart); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__Weapon3DView_K2Node_ComponentBoundEvent_10_WeaponPartClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ManageParametersButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__ManageParametersButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ParameterView_K2Node_ComponentBoundEvent_12_OnClosed__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__ParameterView_K2Node_ComponentBoundEvent_12_OnClosed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PartPickerView_K2Node_ComponentBoundEvent_14_OnPartSelected__DelegateSignature(struct UHWArmoryWeaponPartItem* Item); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__PartPickerView_K2Node_ComponentBoundEvent_14_OnPartSelected__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PartPickerView_K2Node_ComponentBoundEvent_15_OnClose__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__PartPickerView_K2Node_ComponentBoundEvent_15_OnClose__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OpenInLoadoutButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__OpenInLoadoutButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RenameWeaponButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__RenameWeaponButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnRenameTextEntered(struct FString Result); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.OnRenameTextEntered // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Weapon3DView_K2Node_ComponentBoundEvent_13_ManualRotationModeChanged__DelegateSignature(bool IsRotating); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__Weapon3DView_K2Node_ComponentBoundEvent_13_ManualRotationModeChanged__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PartPickerView_K2Node_ComponentBoundEvent_16_OnPartUninstalled__DelegateSignature(enum class EHWWeaponPartType PartType); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__PartPickerView_K2Node_ComponentBoundEvent_16_OnPartUninstalled__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void VariationHoverChanged(int32_t VariationIndex, bool IsHovered); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.VariationHoverChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SelectedVariationChanged(int32_t Index); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.SelectedVariationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PreviousVariationButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__PreviousVariationButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__NextVariationButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__NextVariationButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void PrintVariations(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.PrintVariations // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void VariationDismantled(struct FName VariationItemId); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.VariationDismantled // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void RefreshView(bool Refresh3DView); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.RefreshView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__PartPickerView_K2Node_ComponentBoundEvent_19_OnPartHovered__DelegateSignature(struct UHWArmoryWeaponPartItem* Item, bool IsHovered); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__PartPickerView_K2Node_ComponentBoundEvent_19_OnPartHovered__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void MoveToLoadout(struct FString Result); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.MoveToLoadout // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PartDismantled(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.PartDismantled // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RefreshWeapon3DView(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.RefreshWeapon3DView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetOpenedFromLoadout(bool Value); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.SetOpenedFromLoadout // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToWeaponInShop(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.GoToWeaponInShop // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BackToArmoryMain(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BackToArmoryMain // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GotoParametersView(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.GotoParametersView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClosePanel(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.ClosePanel // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClosePartPickerAndResetWeaponView(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.ClosePartPickerAndResetWeaponView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CloseParameterView(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.CloseParameterView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OpenPartPickerFromCatalogue(struct UHWArmoryWeaponPartItem* PartData); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.OpenPartPickerFromCatalogue // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Callback(bool Result); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.Callback // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InstallPart(struct UHWArmoryWeaponPartItem* Part); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.InstallPart // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Armory3_WeaponView_Weapon3DView_K2Node_ComponentBoundEvent_20_ThumbnailRenderStateChanged__DelegateSignature(bool IsRendering); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BndEvt__WBP_Armory3_WeaponView_Weapon3DView_K2Node_ComponentBoundEvent_20_ThumbnailRenderStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void UpdateBackgroundVisibility(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.UpdateBackgroundVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnBackCalled(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.OnBackCalled // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponView(int32_t EntryPoint); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.ExecuteUbergraph_WBP_Armory3_WeaponView // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void BackToArmoryMainScreen__DelegateSignature(); // Function WBP_Armory3_WeaponView.WBP_Armory3_WeaponView_C.BackToArmoryMainScreen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

