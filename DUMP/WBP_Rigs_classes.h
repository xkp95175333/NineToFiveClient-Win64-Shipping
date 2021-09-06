// WidgetBlueprintGeneratedClass WBP_Rigs.WBP_Rigs_C
// Size: 0x991 (Inherited: 0x270)
struct UWBP_Rigs_C : UWBP_MenuScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWBP_Rigs_ArmorSetButton_C* ArmorSetButton; // 0x278(0x08)
	struct UHorizontalBox* AssPanel; // 0x280(0x08)
	struct UBorder* Border_159; // 0x288(0x08)
	struct UWBP_Button_C* Button_Briefing; // 0x290(0x08)
	struct UWBP_MainButton_C* Button_CancelAccessoryCategorySelection; // 0x298(0x08)
	struct UWBP_MainButton_C* Button_CancelAccessoryItemSelection; // 0x2a0(0x08)
	struct UWBP_MainButton_C* Button_CancelArmorBadgeSelection; // 0x2a8(0x08)
	struct UWBP_MainButton_C* Button_CancelArmorModCategorySelection_2; // 0x2b0(0x08)
	struct UWBP_MainButton_C* Button_CancelArmorSetSelection; // 0x2b8(0x08)
	struct UWBP_MainButton_C* Button_CancelArmorSkinSelection; // 0x2c0(0x08)
	struct UWBP_MainButton_C* Button_CancelASSSelection; // 0x2c8(0x08)
	struct UWBP_MainButton_C* Button_CancelCharacterMain; // 0x2d0(0x08)
	struct UWBP_MainButton_C* Button_CancelCharacterMain_2; // 0x2d8(0x08)
	struct UWBP_MainButton_C* Button_CancelDroneAbilitySelection; // 0x2e0(0x08)
	struct UWBP_MainButton_C* Button_CancelFaceSelect; // 0x2e8(0x08)
	struct UWBP_MainButton_C* Button_CancelItemCategorySelect; // 0x2f0(0x08)
	struct UWBP_MainButton_C* Button_CancelItemSelect; // 0x2f8(0x08)
	struct UWBP_MainButton_C* Button_CancelWeaponCategorySelect; // 0x300(0x08)
	struct UWBP_MainButton_C* Button_CancelWeaponSelect; // 0x308(0x08)
	struct UWBP_MainButton_C* Button_Rename; // 0x310(0x08)
	struct UWBP_Button_C* Button_Rigs; // 0x318(0x08)
	struct UWBP_Button_C* Button_Save; // 0x320(0x08)
	struct UWBP_MainButton_C* Button_SaveAsNew; // 0x328(0x08)
	struct UWBP_Rigs_CharacterSlotButton_C* Button_SelectAccessories; // 0x330(0x08)
	struct UWBP_Rigs_CharacterSlotButton_C* Button_SelectArmorMods; // 0x338(0x08)
	struct UWBP_Rigs_CharacterSlotButton_C* Button_SelectFace; // 0x340(0x08)
	struct UWBP_Rigs_ItemCategory_C* CategoryArmorBadges; // 0x348(0x08)
	struct UWBP_Rigs_ItemCategory_C* CategoryArmorSkins; // 0x350(0x08)
	struct UWBP_Rigs_ItemCategory_C* CategoryBackpackBadges; // 0x358(0x08)
	struct UWBP_Rigs_ItemCategory_C* CategoryBackpackCharms; // 0x360(0x08)
	struct UWBP_Rigs_ItemCategory_C* CategoryBackpacks; // 0x368(0x08)
	struct UWBP_Rigs_DroneAbilityButton_C* CompanionAbilityActive; // 0x370(0x08)
	struct UBorder* DebugDirtyMarker; // 0x378(0x08)
	struct UImage* DiagLines; // 0x380(0x08)
	struct UImage* Divider; // 0x388(0x08)
	struct UImage* Divider_top; // 0x390(0x08)
	struct UHorizontalBox* HB_BriefingRigsButtons; // 0x398(0x08)
	struct UWBP_SectionHeaderBlack_C* Header_Armor; // 0x3a0(0x08)
	struct UWBP_SectionHeaderBlack_C* Header_ASS; // 0x3a8(0x08)
	struct UWBP_SectionHeaderBlack_C* Header_Companion; // 0x3b0(0x08)
	struct UWBP_SectionHeaderBlack_C* Header_Items; // 0x3b8(0x08)
	struct UWBP_RichTextLabel_C* Header_SelectWeapon; // 0x3c0(0x08)
	struct UWBP_RichTextLabel_C* Header_SelectWeaponType; // 0x3c8(0x08)
	struct UWBP_SectionHeaderBlack_C* Header_Weapons; // 0x3d0(0x08)
	struct UImage* Image_6; // 0x3d8(0x08)
	struct UImage* Image_7; // 0x3e0(0x08)
	struct UImage* Image_50; // 0x3e8(0x08)
	struct UImage* Image_96; // 0x3f0(0x08)
	struct UScrollBox* ItemSelectionItems; // 0x3f8(0x08)
	struct UWBP_Rigs_ItemButton_C* ItemSlot1; // 0x400(0x08)
	struct UWBP_Rigs_ItemButton_C* ItemSlot2; // 0x408(0x08)
	struct UWBP_Rigs_ItemButton_C* ItemSlot3; // 0x410(0x08)
	struct UWBP_RichTextLabel_C* Label_ItemCategorySlotInfo; // 0x418(0x08)
	struct UWBP_RichTextLabel_C* Label_ItemSelectionHeader; // 0x420(0x08)
	struct UWBP_RichTextLabel_C* Label_ItemSelectionHeader_4; // 0x428(0x08)
	struct UWBP_RichTextLabel_C* Label_ItemSelectionHeader_7; // 0x430(0x08)
	struct UWBP_RichTextLabel_C* Label_ItemSlotInfo; // 0x438(0x08)
	struct UWBP_RichTextLabel_C* Label_Loadoutname; // 0x440(0x08)
	struct UWidgetSwitcher* MainSwitcher; // 0x448(0x08)
	struct UMenuAnchor* MenuAnchor_Accessories_2; // 0x450(0x08)
	struct UMenuAnchor* MenuAnchor_AccessoryCategories; // 0x458(0x08)
	struct UMenuAnchor* MenuAnchor_ArmorBadges; // 0x460(0x08)
	struct UMenuAnchor* MenuAnchor_ArmorModCategories_2; // 0x468(0x08)
	struct UMenuAnchor* MenuAnchor_ArmorSetButton; // 0x470(0x08)
	struct UMenuAnchor* MenuAnchor_ArmorSets; // 0x478(0x08)
	struct UMenuAnchor* MenuAnchor_ArmorSkins; // 0x480(0x08)
	struct UMenuAnchor* MenuAnchor_AssCompanion; // 0x488(0x08)
	struct UMenuAnchor* MenuAnchor_AssList; // 0x490(0x08)
	struct UMenuAnchor* MenuAnchor_CharacterCustomization; // 0x498(0x08)
	struct UMenuAnchor* MenuAnchor_DroneAbilityButtons; // 0x4a0(0x08)
	struct UMenuAnchor* MenuAnchor_DroneAbilityList; // 0x4a8(0x08)
	struct UMenuAnchor* MenuAnchor_ItemList; // 0x4b0(0x08)
	struct UMenuAnchor* MenuAnchor_Items; // 0x4b8(0x08)
	struct UMenuAnchor* MenuAnchor_Primary; // 0x4c0(0x08)
	struct UMenuAnchor* MenuAnchor_Secondary; // 0x4c8(0x08)
	struct UMenuAnchor* MenuAnchor_VoiceSelection; // 0x4d0(0x08)
	struct UMenuAnchor* MenuAnchor_WeaponPopover; // 0x4d8(0x08)
	struct UWBP_RichTextLabel_C* NumRigs; // 0x4e0(0x08)
	struct UWBP_RichTextLabel_C* ObjectivesTitle; // 0x4e8(0x08)
	struct UCanvasPanel* Panel_CharacterArea; // 0x4f0(0x08)
	struct UCanvasPanel* Panel_CustomizationButtons; // 0x4f8(0x08)
	struct UScrollBox* RigList; // 0x500(0x08)
	struct UThrobber* SaveIndicator; // 0x508(0x08)
	struct UScrollBox* SB_AccessoryCategoriesList; // 0x510(0x08)
	struct UScrollBox* SB_AccessoryItemsList; // 0x518(0x08)
	struct UScrollBox* SB_ArmorBadgesList; // 0x520(0x08)
	struct UScrollBox* SB_ArmorModCategories; // 0x528(0x08)
	struct UScrollBox* SB_ArmorSetList; // 0x530(0x08)
	struct UScrollBox* SB_ArmorSkinList; // 0x538(0x08)
	struct UScrollBox* SB_ASSList; // 0x540(0x08)
	struct UScrollBox* SB_CharacterCustomizationCategories; // 0x548(0x08)
	struct UScrollBox* SB_DroneAbility; // 0x550(0x08)
	struct UScrollBox* SB_ItemCategories; // 0x558(0x08)
	struct UScrollBox* SB_VoiceSelection; // 0x560(0x08)
	struct UScrollBox* SB_WeaponCategoriesPrimary; // 0x568(0x08)
	struct UScrollBox* SB_WeaponCategoriesSecondary; // 0x570(0x08)
	struct UScrollBox* SB_Weapons; // 0x578(0x08)
	struct UVerticalBox* Screen_AccessoryCategorySelection; // 0x580(0x08)
	struct UVerticalBox* Screen_AccessoryItemSelection; // 0x588(0x08)
	struct UVerticalBox* Screen_ArmorBadgeSelection; // 0x590(0x08)
	struct UVerticalBox* Screen_ArmorModCategorySelection; // 0x598(0x08)
	struct UVerticalBox* Screen_ArmorSetSelection; // 0x5a0(0x08)
	struct UVerticalBox* Screen_ArmorSkinSelection; // 0x5a8(0x08)
	struct UVerticalBox* Screen_ASSSelection; // 0x5b0(0x08)
	struct UVerticalBox* Screen_CharacterCustomization; // 0x5b8(0x08)
	struct UVerticalBox* Screen_DroneAbilitySelection; // 0x5c0(0x08)
	struct UVerticalBox* Screen_FaceSelection; // 0x5c8(0x08)
	struct UVerticalBox* Screen_ItemCategorySelect; // 0x5d0(0x08)
	struct UVerticalBox* Screen_ItemSelection; // 0x5d8(0x08)
	struct UVerticalBox* Screen_LoadoutContents; // 0x5e0(0x08)
	struct UVerticalBox* Screen_VoiceSelection; // 0x5e8(0x08)
	struct UVerticalBox* Screen_WeaponCategorySelect; // 0x5f0(0x08)
	struct UVerticalBox* Screen_WeaponSelection; // 0x5f8(0x08)
	struct UVerticalBox* Section_ASS; // 0x600(0x08)
	struct UVerticalBox* Section_Companion; // 0x608(0x08)
	struct UVerticalBox* Section_Items; // 0x610(0x08)
	struct UWidgetSwitcher* SwitcherBriefingRigs; // 0x618(0x08)
	struct UWidgetSwitcher* SwitcherWeaponCategory; // 0x620(0x08)
	struct UVerticalBox* VB_Briefing; // 0x628(0x08)
	struct UVerticalBox* VB_Objectives; // 0x630(0x08)
	struct UVerticalBox* VB_RightPanel; // 0x638(0x08)
	struct UVerticalBox* VB_Rigs; // 0x640(0x08)
	struct UWrapBox* WB_Faces; // 0x648(0x08)
	struct UWBP_Map_C* WBP_Map; // 0x650(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x658(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_3; // 0x660(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_4; // 0x668(0x08)
	struct UWBP_Rigs_AssButton_C* WBP_Rigs_AssButton; // 0x670(0x08)
	struct UWBP_Rigs_AssButton_C* WBP_Rigs_AssButton_2; // 0x678(0x08)
	struct UWBP_Rigs_AssButton_C* WBP_Rigs_AssButton_3; // 0x680(0x08)
	struct UWBP_Rigs_CharacterCustomizationListItem_C* WBP_Rigs_CharacterCustomization_Face; // 0x688(0x08)
	struct UWBP_Rigs_CharacterCustomizationListItem_C* WBP_Rigs_CharacterCustomization_Voice; // 0x690(0x08)
	struct UWBP_Rigs_VoiceListItem_C* WBP_Rigs_VoiceListItem; // 0x698(0x08)
	struct UWBP_Rigs_VoiceListItem_C* WBP_Rigs_VoiceListItem_2; // 0x6a0(0x08)
	struct UWBP_Rigs_WeaponSettingsButton_C* WBP_Rigs_WeaponSettingsButton_Primary; // 0x6a8(0x08)
	struct UWBP_Rigs_WeaponSettingsButton_C* WBP_Rigs_WeaponSettingsButton_Secondary; // 0x6b0(0x08)
	struct UWBP_Rigs_WeaponButton_C* WeaponPrimary; // 0x6b8(0x08)
	struct UWBP_Rigs_WeaponButton_C* WeaponSecondary; // 0x6c0(0x08)
	int32_t MaxRigs; // 0x6c8(0x04)
	char pad_6CC[0x4]; // 0x6cc(0x04)
	struct FHWLoadoutData LoadoutData; // 0x6d0(0x88)
	struct FHWLoadoutData OrigLoadoutData; // 0x758(0x88)
	struct FName HoveredArmorSetId; // 0x7e0(0x08)
	bool SelectingPrimaryWeapon; // 0x7e8(0x01)
	char pad_7E9[0x7]; // 0x7e9(0x07)
	struct UWBP_Rigs_WeaponListItem_C* HoveredWeaponItem; // 0x7f0(0x08)
	char CurrentAssSlot; // 0x7f8(0x01)
	char pad_7F9[0x3]; // 0x7f9(0x03)
	int32_t CurrentAssSlotIndex; // 0x7fc(0x04)
	struct FHWLoadoutData NewLoadoutData; // 0x800(0x88)
	bool IsInMainView; // 0x888(0x01)
	char pad_889[0x7]; // 0x889(0x07)
	struct TArray<struct FString> CraftedWeaponsOneHanded; // 0x890(0x10)
	struct TArray<struct FString> CraftedWeaponsAll; // 0x8a0(0x10)
	struct UHWGameData* Data; // 0x8b0(0x08)
	struct UHWPlayerProfile* PlayerProfile; // 0x8b8(0x08)
	struct FName HoveredItemId; // 0x8c0(0x08)
	bool IsDirty; // 0x8c8(0x01)
	bool IsSaving; // 0x8c9(0x01)
	bool IsInPrematch; // 0x8ca(0x01)
	char pad_8CB[0x1]; // 0x8cb(0x01)
	struct FName HoveredAssId; // 0x8cc(0x08)
	struct FName HoveredDroneAbilityId; // 0x8d4(0x08)
	char pad_8DC[0x4]; // 0x8dc(0x04)
	struct FMulticastInlineDelegate OnLoadoutUpdated; // 0x8e0(0x10)
	struct UWBP_Armory2_Popup_Weapon_C* WeaponPopup; // 0x8f0(0x08)
	bool CreateNextLoadoutAsEmpty; // 0x8f8(0x01)
	char pad_8F9[0x7]; // 0x8f9(0x07)
	struct TArray<struct UWidget*> MenuStack; // 0x900(0x10)
	bool InWeaponFlow; // 0x910(0x01)
	char pad_911[0x7]; // 0x911(0x07)
	struct FTimerHandle WeaponPopOverTimer; // 0x918(0x08)
	struct UWBP_Rigs_WeaponPopover_C* WeaponPopOverWidget; // 0x920(0x08)
	struct TMap<struct FString, struct UWBP_Rigs_RigListItem_C*> PopulatedRigListItems; // 0x928(0x50)
	bool DuplicateRig; // 0x978(0x01)
	char pad_979[0x7]; // 0x979(0x07)
	struct FString DuplicatingRigName; // 0x980(0x10)
	bool RefreshSelectionAfterLoad; // 0x990(0x01)

	void GetWeaponIdsSortedByName(struct TArray<struct FString> ItemIDs, struct TMap<struct FString, struct FString> WeaponIdByName); // Function WBP_Rigs.WBP_Rigs_C.GetWeaponIdsSortedByName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnArmorSetListHovered(struct FName ArmorSetId, bool IsHover); // Function WBP_Rigs.WBP_Rigs_C.OnArmorSetListHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsInTutorial(bool Result); // Function WBP_Rigs.WBP_Rigs_C.IsInTutorial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PlayEquipingSound(enum class EHWInventoryItemType Type, struct FName ArmorSetId); // Function WBP_Rigs.WBP_Rigs_C.PlayEquipingSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSelectedArmorFeatureByType(enum class EHWArmorType Type, struct FName ItemId); // Function WBP_Rigs.WBP_Rigs_C.GetSelectedArmorFeatureByType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnDeleteRig(struct FString RigName); // Function WBP_Rigs.WBP_Rigs_C.OnDeleteRig // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetDefaultWeapons(struct FString Primary, struct FString Secondary); // Function WBP_Rigs.WBP_Rigs_C.GetDefaultWeapons // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PopulateVoiceList(); // Function WBP_Rigs.WBP_Rigs_C.PopulateVoiceList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs.WBP_Rigs_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetRigSelection(); // Function WBP_Rigs.WBP_Rigs_C.ResetRigSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetFirstRigListItem(struct UWBP_Rigs_RigListItem_C* Item, bool IsEmpty); // Function WBP_Rigs.WBP_Rigs_C.GetFirstRigListItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct FEventReply OnClickingOnBackground(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs.WBP_Rigs_C.OnClickingOnBackground // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopView(); // Function WBP_Rigs.WBP_Rigs_C.PopView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnBack(bool IsHandled); // Function WBP_Rigs.WBP_Rigs_C.OnBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetItemKeyInfo(int32_t SlotIdx, struct FText Text); // Function WBP_Rigs.WBP_Rigs_C.GetItemKeyInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetWeaponFromProfile(bool PrimaryWeapon, struct FString WeaponID); // Function WBP_Rigs.WBP_Rigs_C.GetWeaponFromProfile // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnTutorialSkipped(int32_t StepSkipped); // Function WBP_Rigs.WBP_Rigs_C.OnTutorialSkipped // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CloseAllPopovers(); // Function WBP_Rigs.WBP_Rigs_C.CloseAllPopovers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Create Empty Loadout(); // Function WBP_Rigs.WBP_Rigs_C.Set Create Empty Loadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GoToWeaponFlow(struct FString Weapon Item Id, struct FText TitleText); // Function WBP_Rigs.WBP_Rigs_C.GoToWeaponFlow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCosmeticItemHovered(struct FName ItemId, enum class EHWArmorType Type, bool IsHovered); // Function WBP_Rigs.WBP_Rigs_C.OnCosmeticItemHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWidgetLocation(struct UWidget* Widget, struct FVector2D Location, struct FVector2D Offset); // Function WBP_Rigs.WBP_Rigs_C.SetWidgetLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateSlotLocations(); // Function WBP_Rigs.WBP_Rigs_C.UpdateSlotLocations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetArmorSetInLoadout(struct FHWLoadoutData Loadout, struct FName ArmorSetId); // Function WBP_Rigs.WBP_Rigs_C.SetArmorSetInLoadout // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorSkinSelected(struct FName ArmorSetId); // Function WBP_Rigs.WBP_Rigs_C.OnArmorSkinSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateAndAddArmorSkinItem(struct FHWArmorSetData ArmorSetData, bool Unlocked, bool Selected, bool IsLast); // Function WBP_Rigs.WBP_Rigs_C.CreateAndAddArmorSkinItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateArmorSkinList(struct FName ForcedArmorsetId); // Function WBP_Rigs.WBP_Rigs_C.PopulateArmorSkinList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BroadcastLoadoutChange(); // Function WBP_Rigs.WBP_Rigs_C.BroadcastLoadoutChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCosmeticItemSelected(struct FName ID, enum class EHWArmorType Type); // Function WBP_Rigs.WBP_Rigs_C.OnCosmeticItemSelected // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Create and Add Cosmetic Item(struct FHWArmorData ArmorData, enum class EHWArmorType ArmorType, bool Selected, bool Locked, bool IsLast, struct UScrollBox* Container); // Function WBP_Rigs.WBP_Rigs_C.Create and Add Cosmetic Item // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateCosmeticItemsList(enum class EHWArmorType ItemType, struct UScrollBox* Container); // Function WBP_Rigs.WBP_Rigs_C.PopulateCosmeticItemsList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCharacterHovered(struct FName CharacterId, bool IsHover); // Function WBP_Rigs.WBP_Rigs_C.OnCharacterHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCharacterSelected(struct FName CharacterId); // Function WBP_Rigs.WBP_Rigs_C.OnCharacterSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateFaceList(); // Function WBP_Rigs.WBP_Rigs_C.PopulateFaceList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetRenderView(enum class BPE_MenuRenderView View); // Function WBP_Rigs.WBP_Rigs_C.SetRenderView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetVisibleSections(int32_t NumSections); // Function WBP_Rigs.WBP_Rigs_C.SetVisibleSections // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Get First Empty Rig List Item(struct UWBP_Rigs_RigListItem_C* Item); // Function WBP_Rigs.WBP_Rigs_C.Get First Empty Rig List Item // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CreateAndAddASSItem(struct FHWArmorFeatureData Data, bool IsLast); // Function WBP_Rigs.WBP_Rigs_C.CreateAndAddASSItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateAndAddItemListItem(struct FHWItemData ItemData, int32_t SlotIdx, bool IsLast); // Function WBP_Rigs.WBP_Rigs_C.CreateAndAddItemListItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateAndAddArmorSetItem(struct FHWArmorSetBaseData ArmorSetData, bool Unlocked, bool Selected, bool IsLast); // Function WBP_Rigs.WBP_Rigs_C.CreateAndAddArmorSetItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSetSelectedLoadoutFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Rigs.WBP_Rigs_C.OnSetSelectedLoadoutFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSetSelectedLoadoutSucceeded(struct FHWResponseBase Response); // Function WBP_Rigs.WBP_Rigs_C.OnSetSelectedLoadoutSucceeded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemCategorySelected(struct FString ItemCategory, int32_t SlotIdx); // Function WBP_Rigs.WBP_Rigs_C.OnItemCategorySelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowItemCategories(int32_t SlotIdx); // Function WBP_Rigs.WBP_Rigs_C.ShowItemCategories // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetObjectives(struct TArray<struct FText> Objectives); // Function WBP_Rigs.WBP_Rigs_C.SetObjectives // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCreateRigFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Rigs.WBP_Rigs_C.OnCreateRigFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCreateRigSucceeded(struct FHWResponseBase Response); // Function WBP_Rigs.WBP_Rigs_C.OnCreateRigSucceeded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetNameForNewRig(struct FString RigName, struct FString Name); // Function WBP_Rigs.WBP_Rigs_C.GetNameForNewRig // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnAssListHovered(bool IsHover, struct FName AssId); // Function WBP_Rigs.WBP_Rigs_C.OnAssListHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* OnOpenAssPopover(); // Function WBP_Rigs.WBP_Rigs_C.OnOpenAssPopover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnAssButtonHovered(bool IsHover, struct FName AssId); // Function WBP_Rigs.WBP_Rigs_C.OnAssButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorSkinHovered(struct FName ArmorSetId, bool IsHover); // Function WBP_Rigs.WBP_Rigs_C.OnArmorSkinHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* OnShowArmorSetListPopover(); // Function WBP_Rigs.WBP_Rigs_C.OnShowArmorSetListPopover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCreateNewRig(struct FString RigName); // Function WBP_Rigs.WBP_Rigs_C.OnCreateNewRig // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateNewRig(); // Function WBP_Rigs.WBP_Rigs_C.CreateNewRig // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowSaveIndicator(bool Visible); // Function WBP_Rigs.WBP_Rigs_C.ShowSaveIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetDirty(); // Function WBP_Rigs.WBP_Rigs_C.ResetDirty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CheckAndSaveIfDirty(); // Function WBP_Rigs.WBP_Rigs_C.CheckAndSaveIfDirty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLoadoutSaveFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Rigs.WBP_Rigs_C.OnLoadoutSaveFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLoadoutSaveSucceeded(struct FHWResponseBase Response); // Function WBP_Rigs.WBP_Rigs_C.OnLoadoutSaveSucceeded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SaveLoadout(); // Function WBP_Rigs.WBP_Rigs_C.SaveLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemListItemHovered(bool IsHover, struct FName ItemId); // Function WBP_Rigs.WBP_Rigs_C.OnItemListItemHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* OnOpenItemPopover(); // Function WBP_Rigs.WBP_Rigs_C.OnOpenItemPopover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* OnShowSecondaryWeaponPopover(); // Function WBP_Rigs.WBP_Rigs_C.OnShowSecondaryWeaponPopover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* OnShowPrimaryWeaponPopover(); // Function WBP_Rigs.WBP_Rigs_C.OnShowPrimaryWeaponPopover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PopulateDroneAbilityList(struct FName CurrentId); // Function WBP_Rigs.WBP_Rigs_C.PopulateDroneAbilityList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* OnOpenDroneAbilityPopover(); // Function WBP_Rigs.WBP_Rigs_C.OnOpenDroneAbilityPopover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnDroneAbilitySelected(struct FName AbilityId); // Function WBP_Rigs.WBP_Rigs_C.OnDroneAbilitySelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDroneAbilityListHover(bool IsHover, struct FName AbilityId); // Function WBP_Rigs.WBP_Rigs_C.OnDroneAbilityListHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateAndAddDroneAbilityItem(struct FHWDroneAbilityData AbilityData, bool IsSelected, bool IsLast); // Function WBP_Rigs.WBP_Rigs_C.CreateAndAddDroneAbilityItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateAssList(struct FName CurrentAss); // Function WBP_Rigs.WBP_Rigs_C.PopulateAssList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssSelected(struct FName AssId); // Function WBP_Rigs.WBP_Rigs_C.OnAssSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnAssButtonClicked(int32_t Index, enum class EHWArmorFeatureType AssType, struct FName AssId, struct UWBP_Rigs_AssButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.OnAssButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* OnShowWeaponPopover(); // Function WBP_Rigs.WBP_Rigs_C.OnShowWeaponPopover // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnWeaponSelected(struct FString ReceiverId); // Function WBP_Rigs.WBP_Rigs_C.OnWeaponSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponHovered(bool Hovered, struct UWBP_Rigs_WeaponListItem_C* ListItem); // Function WBP_Rigs.WBP_Rigs_C.OnWeaponHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponCategorySelected(enum class EHWWeaponType WeaponType); // Function WBP_Rigs.WBP_Rigs_C.OnWeaponCategorySelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateWeaponList(enum class EHWWeaponType WeaponType, bool OnlyOneHanded); // Function WBP_Rigs.WBP_Rigs_C.PopulateWeaponList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateWeaponCategory(struct UPanelWidget* Container, bool OneHandedOnly); // Function WBP_Rigs.WBP_Rigs_C.PopulateWeaponCategory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UWidget* OnShowArmorListPopover(); // Function WBP_Rigs.WBP_Rigs_C.OnShowArmorListPopover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct UWidget* OnShowArmorSetPopover(); // Function WBP_Rigs.WBP_Rigs_C.OnShowArmorSetPopover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnArmorSetButtonHovered(struct FName ArmorSetId, bool IsHover); // Function WBP_Rigs.WBP_Rigs_C.OnArmorSetButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnArmorSetSelected(struct FName ArmorSetId); // Function WBP_Rigs.WBP_Rigs_C.OnArmorSetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateArmorSetList(struct FName AllIds); // Function WBP_Rigs.WBP_Rigs_C.PopulateArmorSetList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetView(struct UWidget* TargetWidget, bool GoBack, bool LoadoutChanged); // Function WBP_Rigs.WBP_Rigs_C.SetView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HideItemList(); // Function WBP_Rigs.WBP_Rigs_C.HideItemList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateItemList(struct FString ItemCategory, int32_t SlotIdx); // Function WBP_Rigs.WBP_Rigs_C.PopulateItemList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemSelected(struct FName ItemId, int32_t SlotIdx); // Function WBP_Rigs.WBP_Rigs_C.OnItemSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateAsses(struct TArray<struct FName> AssList, int32_t AvailableSlots); // Function WBP_Rigs.WBP_Rigs_C.UpdateAsses // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDataFromId(struct FString RigId); // Function WBP_Rigs.WBP_Rigs_C.SetDataFromId // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(struct FHWLoadoutData Data, bool PreviewOnly); // Function WBP_Rigs.WBP_Rigs_C.Update // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetData(bool PreviewOnly, struct FHWLoadoutData Data); // Function WBP_Rigs.WBP_Rigs_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(); // Function WBP_Rigs.WBP_Rigs_C.Initialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Populate Weapon Categories(); // Function WBP_Rigs.WBP_Rigs_C.Populate Weapon Categories // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateWeaponPopoverWidget(struct FString ReceiverItemId, bool Primary, struct UWBP_Rigs_WeaponPopover_C* OutputPin); // Function WBP_Rigs.WBP_Rigs_C.CreateWeaponPopoverWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateRigList(); // Function WBP_Rigs.WBP_Rigs_C.PopulateRigList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateRigData(struct FString LoadoutId); // Function WBP_Rigs.WBP_Rigs_C.PopulateRigData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRigSelected(struct FString RigName); // Function WBP_Rigs.WBP_Rigs_C.OnRigSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void On Rig Hover(struct FString ArmorSetId); // Function WBP_Rigs.WBP_Rigs_C.On Rig Hover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelWeaponSelect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelWeaponSelect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CompanionAbilityActive_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(struct UWBP_Rigs_DroneAbilityButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__CompanionAbilityActive_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelASSSelection_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelASSSelection_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelASSSelection_1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelASSSelection_1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature(bool IsHover); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponSecondary_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature(bool IsHover); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__WeaponSecondary_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Rename_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_Rename_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnRigRenamed(struct FString Result); // Function WBP_Rigs.WBP_Rigs_C.OnRigRenamed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ItemSlot1_K2Node_ComponentBoundEvent_19_OnHover__DelegateSignature(bool IsHover, struct FName ItemId); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__ItemSlot1_K2Node_ComponentBoundEvent_19_OnHover__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ItemSlot2_K2Node_ComponentBoundEvent_20_OnHover__DelegateSignature(bool IsHover, struct FName ItemId); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__ItemSlot2_K2Node_ComponentBoundEvent_20_OnHover__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ItemSlot3_K2Node_ComponentBoundEvent_21_OnHover__DelegateSignature(bool IsHover, struct FName ItemId); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__ItemSlot3_K2Node_ComponentBoundEvent_21_OnHover__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ArmorSetButton_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature(bool IsHover); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__ArmorSetButton_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Briefing_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_Briefing_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_Rigs_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_Rigs_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ArmorSetButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(struct UWBP_Rigs_ArmorSetButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__ArmorSetButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnRigRenameSucceeded(struct FHWResponseBase Response); // Function WBP_Rigs.WBP_Rigs_C.OnRigRenameSucceeded // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRigRenameFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Rigs.WBP_Rigs_C.OnRigRenameFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelWeaponCategorySelect_2_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelWeaponCategorySelect_2_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Rigs.WBP_Rigs_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__WBP_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelWeaponCategorySelect_3_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelWeaponCategorySelect_3_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_SelectBackpack_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature(struct UWBP_Rigs_CharacterSlotButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_SelectBackpack_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelBackpackSelection_1_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelBackpackSelection_1_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Backpacks_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature(struct FString ItemCategory, int32_t SlotIdx); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Backpacks_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CategoryBackpackCharms_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature(struct FString ItemCategory, int32_t SlotIdx); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__CategoryBackpackCharms_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CategoryBackpackBadges_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature(struct FString ItemCategory, int32_t SlotIdx); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__CategoryBackpackBadges_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelBackpackItemSelection_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelBackpackItemSelection_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CompanionAbilityActive_K2Node_ComponentBoundEvent_31_OnHover__DelegateSignature(bool IsHover, struct FName AbilityId); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__CompanionAbilityActive_K2Node_ComponentBoundEvent_31_OnHover__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CategoryArmorSkins_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature(struct FString ItemCategory, int32_t SlotIdx); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__CategoryArmorSkins_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CategoryArmorBadges_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature(struct FString ItemCategory, int32_t SlotIdx); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__CategoryArmorBadges_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Rigs.WBP_Rigs_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelArmorSetSelection_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelArmorSetSelection_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Rigs.WBP_Rigs_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ItemSlot3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct FString ItemCategory, struct UWBP_Rigs_ItemButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__ItemSlot3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelAccessoryItemSelection_1_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelAccessoryItemSelection_1_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelAccessoryItemSelection_2_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelAccessoryItemSelection_2_K2Node_ComponentBoundEvent_43_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_SelectArmorMods_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(struct UWBP_Rigs_CharacterSlotButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_SelectArmorMods_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelArmorModCategorySelection_1_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelArmorModCategorySelection_1_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ItemSlot2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct FString ItemCategory, struct UWBP_Rigs_ItemButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__ItemSlot2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Rigs.WBP_Rigs_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ItemSlot1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct FString ItemCategory, struct UWBP_Rigs_ItemButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__ItemSlot1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnRemovingArmoryFromViewport(Flow)(); // Function WBP_Rigs.WBP_Rigs_C.OnRemovingArmoryFromViewport(Flow) // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_Rigs.WBP_Rigs_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeScreen(); // Function WBP_Rigs.WBP_Rigs_C.InitializeScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelWeaponCategorySelect_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelWeaponCategorySelect_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelWeaponCategorySelect_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelWeaponCategorySelect_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Rigs_WeaponSettingsButton_Secondary_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__WBP_Rigs_WeaponSettingsButton_Secondary_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Rigs_WeaponSettingsButton_Primary_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature(); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__WBP_Rigs_WeaponSettingsButton_Primary_K2Node_ComponentBoundEvent_44_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void RigRenamed(struct FString RigNewName); // Function WBP_Rigs.WBP_Rigs_C.RigRenamed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowStatsViewOnWeaponPopOver(); // Function WBP_Rigs.WBP_Rigs_C.ShowStatsViewOnWeaponPopOver // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowWeaponStats(); // Function WBP_Rigs.WBP_Rigs_C.ShowWeaponStats // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowWeaponChartViewInPopover(); // Function WBP_Rigs.WBP_Rigs_C.ShowWeaponChartViewInPopover // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ListenInputForWeaponPopOver(); // Function WBP_Rigs.WBP_Rigs_C.ListenInputForWeaponPopOver // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelCharacterMain_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelCharacterMain_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Rigs_CharacterCustomizationListItem_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature(); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__WBP_Rigs_CharacterCustomizationListItem_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_CancelCharacterMain_1_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature(struct UWBP_MainButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__Button_CancelCharacterMain_1_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Rigs_CharacterCustomizationListItem_139_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature(); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__WBP_Rigs_CharacterCustomizationListItem_139_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void CharacterVoiceSelected(struct FName VoiceId); // Function WBP_Rigs.WBP_Rigs_C.CharacterVoiceSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCharacterVoiceSelected(struct FHWResponseBase Response); // Function WBP_Rigs.WBP_Rigs_C.OnCharacterVoiceSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCharacterVoiceSelectionFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Rigs.WBP_Rigs_C.OnCharacterVoiceSelectionFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DeleteLoadout(struct FString RigName); // Function WBP_Rigs.WBP_Rigs_C.DeleteLoadout // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDeleteLoadoutSuccess(struct FHWResponseBase Response); // Function WBP_Rigs.WBP_Rigs_C.OnDeleteLoadoutSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDeleteLoadoutFailure(enum class EHWErrorMessage ErrorMessage); // Function WBP_Rigs.WBP_Rigs_C.OnDeleteLoadoutFailure // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponSecondary_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_Rigs_WeaponButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__WeaponSecondary_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Rigs.WBP_Rigs_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateSkinSelectedTexts(); // Function WBP_Rigs.WBP_Rigs_C.UpdateSkinSelectedTexts // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateCosmeticItemSelectedText(enum class EHWArmorType Type); // Function WBP_Rigs.WBP_Rigs_C.UpdateCosmeticItemSelectedText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayFTUESound(); // Function WBP_Rigs.WBP_Rigs_C.PlayFTUESound // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Rigs_WeaponButton_C* Button); // Function WBP_Rigs.WBP_Rigs_C.BndEvt__WeaponPrimary_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Rigs.WBP_Rigs_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ShowPopupForCreatingNewRig(struct FString Name); // Function WBP_Rigs.WBP_Rigs_C.ShowPopupForCreatingNewRig // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CallCreateNewRig(struct FString Result); // Function WBP_Rigs.WBP_Rigs_C.CallCreateNewRig // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCreateNewRigClicked(struct FString Name, bool Duplicating); // Function WBP_Rigs.WBP_Rigs_C.OnCreateNewRigClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ErrorPopupCallback(bool Result); // Function WBP_Rigs.WBP_Rigs_C.ErrorPopupCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Rigs.WBP_Rigs_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs(int32_t EntryPoint); // Function WBP_Rigs.WBP_Rigs_C.ExecuteUbergraph_WBP_Rigs // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnLoadoutUpdated__DelegateSignature(struct FHWLoadoutData Loadout); // Function WBP_Rigs.WBP_Rigs_C.OnLoadoutUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

