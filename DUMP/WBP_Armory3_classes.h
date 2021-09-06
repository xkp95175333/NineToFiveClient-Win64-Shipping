// WidgetBlueprintGeneratedClass WBP_Armory3.WBP_Armory3_C
// Size: 0x290 (Inherited: 0x270)
struct UWBP_Armory3_C : UWBP_MenuScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetSwitcher* ArmoryScreenSwitcher; // 0x278(0x08)
	struct UWBP_Armory3_Main_C* WBP_Armory3_Main; // 0x280(0x08)
	struct UWBP_Armory3_WeaponView_C* WBP_Armory3_WeaponView; // 0x288(0x08)

	void OnBack(bool IsHandled); // Function WBP_Armory3.WBP_Armory3_C.OnBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Armory3_WeaponView_K2Node_ComponentBoundEvent_2_BackToArmoryMainScreen__DelegateSignature(); // Function WBP_Armory3.WBP_Armory3_C.BndEvt__WBP_Armory3_WeaponView_K2Node_ComponentBoundEvent_2_BackToArmoryMainScreen__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Armory3_Main_K2Node_ComponentBoundEvent_0_MoveToWeaponView__DelegateSignature(struct UHWArmoryWeaponModel* WeaponModel); // Function WBP_Armory3.WBP_Armory3_C.BndEvt__WBP_Armory3_Main_K2Node_ComponentBoundEvent_0_MoveToWeaponView__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OpenWeaponFromLoadout(struct UHWArmoryWeaponVariation* WeaponVariation); // Function WBP_Armory3.WBP_Armory3_C.OpenWeaponFromLoadout // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OpenWeaponModel(bool OpenedFromLoadout, struct UHWArmoryWeaponModel* WeaponModel); // Function WBP_Armory3.WBP_Armory3_C.OpenWeaponModel // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeScreen(); // Function WBP_Armory3.WBP_Armory3_C.InitializeScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3(int32_t EntryPoint); // Function WBP_Armory3.WBP_Armory3_C.ExecuteUbergraph_WBP_Armory3 // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

