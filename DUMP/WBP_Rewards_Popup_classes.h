// WidgetBlueprintGeneratedClass WBP_Rewards_Popup.WBP_Rewards_Popup_C
// Size: 0x309 (Inherited: 0x260)
struct UWBP_Rewards_Popup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Reveal; // 0x268(0x08)
	struct UImage* BackgroundColor; // 0x270(0x08)
	struct UImage* BackgroundStarterPack; // 0x278(0x08)
	struct UImage* BottomDetail; // 0x280(0x08)
	struct UWBP_Animated_Letters_Label_C* BottomDetailText; // 0x288(0x08)
	struct UImage* Filter; // 0x290(0x08)
	struct UImage* Grid; // 0x298(0x08)
	struct UImage* LeftDetail; // 0x2a0(0x08)
	struct UImage* LoadingAnim; // 0x2a8(0x08)
	struct UOverlay* OVL_Wait; // 0x2b0(0x08)
	struct UWBP_PostMatch2_Rewards_C* Rewards; // 0x2b8(0x08)
	struct UImage* RightDetail; // 0x2c0(0x08)
	struct UImage* TopDetail; // 0x2c8(0x08)
	struct UWBP_Animated_Letters_Label_C* TopDetailText1; // 0x2d0(0x08)
	struct UWBP_Animated_Letters_Label_C* TopDetailText2; // 0x2d8(0x08)
	struct FMulticastInlineDelegate OnClosed; // 0x2e0(0x10)
	bool Tutorial; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FMulticastInlineDelegate ViewRewardInArmory; // 0x2f8(0x10)
	enum class EHW_RewardButton PressedButton; // 0x308(0x01)

	void GetWeaponFromProfile(bool PrimaryWeapon, struct FString ID); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.GetWeaponFromProfile // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetStarterPackMode(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.SetStarterPackMode // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRewardButtonPressed(enum class EHW_RewardButton Button); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.OnRewardButtonPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Rewards_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.BndEvt__Rewards_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpsertComplete(struct FHWResponseBase Response); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.OnUpsertComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpsertFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.OnUpsertFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Close(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCollected(struct FHWProfileWithCollectedRewardsResponse Response); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.OnCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnCollectFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.OnCollectFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Create Loadout Clicked(struct UWBP_MainButton_C* Button); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.Create Loadout Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Skip Loadout Clicked(struct UWBP_MainButton_C* Button); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.Skip Loadout Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_Rewards_Popup_Rewards_K2Node_ComponentBoundEvent_1_ViewRewardInArmory__DelegateSignature(struct FName ReceiverPartId, struct FName ConfigId, enum class EHWInventoryItemType ConfigType); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.BndEvt__WBP_Rewards_Popup_Rewards_K2Node_ComponentBoundEvent_1_ViewRewardInArmory__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rewards_Popup(int32_t EntryPoint); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.ExecuteUbergraph_WBP_Rewards_Popup // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void ViewRewardInArmory__DelegateSignature(struct FName ReceiverPartId, struct FName ConfigId, enum class EHWInventoryItemType ConfigType); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.ViewRewardInArmory__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClosed__DelegateSignature(); // Function WBP_Rewards_Popup.WBP_Rewards_Popup_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

