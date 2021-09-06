// WidgetBlueprintGeneratedClass WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C
// Size: 0x3e0 (Inherited: 0x260)
struct UWBP_DebugMenuPage_EditWeapon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Button_C* ClearSelection; // 0x268(0x08)
	struct UComboBoxString* ListBarrel; // 0x270(0x08)
	struct UComboBoxString* ListBarrelAttachment; // 0x278(0x08)
	struct UComboBoxString* ListChargingHandle; // 0x280(0x08)
	struct UComboBoxString* ListCharm; // 0x288(0x08)
	struct UComboBoxString* ListExtraPieces; // 0x290(0x08)
	struct UComboBoxString* ListGrip; // 0x298(0x08)
	struct UComboBoxString* ListHandguard; // 0x2a0(0x08)
	struct UComboBoxString* ListIronsightBack; // 0x2a8(0x08)
	struct UComboBoxString* ListIronsightFront; // 0x2b0(0x08)
	struct UComboBoxString* ListMag; // 0x2b8(0x08)
	struct UComboBoxString* ListMagwell; // 0x2c0(0x08)
	struct UComboBoxString* ListRarity; // 0x2c8(0x08)
	struct UComboBoxString* ListReceiver; // 0x2d0(0x08)
	struct UComboBoxString* ListScope; // 0x2d8(0x08)
	struct UComboBoxString* ListStock; // 0x2e0(0x08)
	struct UComboBoxString* ListUnderbarrel; // 0x2e8(0x08)
	struct UCheckBox* ShowAllWeapons; // 0x2f0(0x08)
	struct UCheckBox* SpawnDefaults; // 0x2f8(0x08)
	struct UWBP_Button_C* UpdateWeapon; // 0x300(0x08)
	struct FHWWeaponParts CachedWeaponData; // 0x308(0xb0)
	struct FMulticastInlineDelegate OnClicked; // 0x3b8(0x10)
	bool DoNotUpdate; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FMulticastInlineDelegate WeaponUpdatedInDbgMenu; // 0x3d0(0x10)

	struct UComboBoxString* GetListWidgetForPart(enum class EHWWeaponPartType PartType); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.GetListWidgetForPart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetSelectedReceiver(struct FName PartId); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.GetSelectedReceiver // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Add Weapon Part(struct FHWWeaponParts Parts, enum class EHWWeaponPartType Type, struct FName PartId, bool IsCosmetic); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.Add Weapon Part // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UComboBoxString* GetComboBoxForPartType(enum class EHWWeaponPartType Index); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.GetComboBoxForPartType // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CreateWeaponParts(struct FHWWeaponParts Parts); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.CreateWeaponParts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetWeaponPartSelections(); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.SetWeaponPartSelections // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateWeaponPartLists(struct FString SelectedReceiver); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.PopulateWeaponPartLists // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PopulateReceiverList(); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.PopulateReceiverList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitEditWeapon(); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.InitEditWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Poop(bool Result); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.Poop // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CustomEvent(bool Result); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ListReceiver_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.BndEvt__ListReceiver_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__UpdateWeapon_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.BndEvt__UpdateWeapon_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ClearSelection_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.BndEvt__ClearSelection_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_DebugMenuPage_EditWeapon_ShowAllWeapons_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.BndEvt__WBP_DebugMenuPage_EditWeapon_ShowAllWeapons_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenuPage_EditWeapon(int32_t EntryPoint); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.ExecuteUbergraph_WBP_DebugMenuPage_EditWeapon // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void WeaponUpdatedInDbgMenu__DelegateSignature(struct FHWWeaponParts WeaponParts); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.WeaponUpdatedInDbgMenu__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(); // Function WBP_DebugMenuPage_EditWeapon.WBP_DebugMenuPage_EditWeapon_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

