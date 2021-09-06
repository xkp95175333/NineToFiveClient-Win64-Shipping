// WidgetBlueprintGeneratedClass WBP_Armory3_WeaponPartDismantle.WBP_Armory3_WeaponPartDismantle_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_Armory3_WeaponPartDismantle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* DismantleButton; // 0x268(0x08)
	struct FString ItemId; // 0x270(0x10)
	enum class EHWInventoryItemType Type; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct FMulticastInlineDelegate WeaponPartDismantled; // 0x288(0x10)

	void OnDismantleConfirmed(bool Result); // Function WBP_Armory3_WeaponPartDismantle.WBP_Armory3_WeaponPartDismantle_C.OnDismantleConfirmed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDismantleCompleted(struct FHWResponseBase Response); // Function WBP_Armory3_WeaponPartDismantle.WBP_Armory3_WeaponPartDismantle_C.OnDismantleCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDismantleFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Armory3_WeaponPartDismantle.WBP_Armory3_WeaponPartDismantle_C.OnDismantleFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Button_303_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Armory3_WeaponPartDismantle.WBP_Armory3_WeaponPartDismantle_C.BndEvt__Button_303_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_WeaponPartDismantle(int32_t EntryPoint); // Function WBP_Armory3_WeaponPartDismantle.WBP_Armory3_WeaponPartDismantle_C.ExecuteUbergraph_WBP_Armory3_WeaponPartDismantle // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void WeaponPartDismantled__DelegateSignature(); // Function WBP_Armory3_WeaponPartDismantle.WBP_Armory3_WeaponPartDismantle_C.WeaponPartDismantled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

