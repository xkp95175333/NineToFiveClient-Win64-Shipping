// WidgetBlueprintGeneratedClass WBP_RoundResults2_PlayerTag.WBP_RoundResults2_PlayerTag_C
// Size: 0x338 (Inherited: 0x260)
struct UWBP_RoundResults2_PlayerTag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UOverlay* AddFriend; // 0x268(0x08)
	struct UButton* AddFriendButton; // 0x270(0x08)
	struct UWidgetSwitcher* ButtonSwitcher; // 0x278(0x08)
	struct UOverlay* Default; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* DetailsLabel; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* Image_2; // 0x298(0x08)
	struct UImage* Image_3; // 0x2a0(0x08)
	struct UOverlay* KickPlayer; // 0x2a8(0x08)
	struct UButton* KickPlayerButton; // 0x2b0(0x08)
	struct USizeBox* Me; // 0x2b8(0x08)
	struct UWBP_RichTextLabel_C* MyName; // 0x2c0(0x08)
	struct UWBP_RichTextLabel_C* MyTitle; // 0x2c8(0x08)
	struct UWBP_RichTextLabel_C* Name; // 0x2d0(0x08)
	struct USizeBox* Player; // 0x2d8(0x08)
	struct UBorder* PlayerColor; // 0x2e0(0x08)
	struct UBorder* PlayerColor_2; // 0x2e8(0x08)
	struct UImage* PlayerIcon; // 0x2f0(0x08)
	struct UImage* PlayerIcon_2; // 0x2f8(0x08)
	struct UImage* Shadow; // 0x300(0x08)
	struct UImage* Shadow_2; // 0x308(0x08)
	struct UWidgetSwitcher* Switcher; // 0x310(0x08)
	struct FString PlayerId; // 0x318(0x10)
	struct FString PlayerName; // 0x328(0x10)

	void SetName(bool IsMe, struct FString Name, int32_t PlayerNumber, struct FString PlayerId); // Function WBP_RoundResults2_PlayerTag.WBP_RoundResults2_PlayerTag_C.SetName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__KickPlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RoundResults2_PlayerTag.WBP_RoundResults2_PlayerTag_C.BndEvt__KickPlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RoundResults2_PlayerTag.WBP_RoundResults2_PlayerTag_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendRequestSent(struct FHWResponseBase Response); // Function WBP_RoundResults2_PlayerTag.WBP_RoundResults2_PlayerTag_C.OnFriendRequestSent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSendFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_RoundResults2_PlayerTag.WBP_RoundResults2_PlayerTag_C.OnSendFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoNothing(bool Result); // Function WBP_RoundResults2_PlayerTag.WBP_RoundResults2_PlayerTag_C.DoNothing // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoNothing2(bool Result); // Function WBP_RoundResults2_PlayerTag.WBP_RoundResults2_PlayerTag_C.DoNothing2 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_RoundResults2_PlayerTag(int32_t EntryPoint); // Function WBP_RoundResults2_PlayerTag.WBP_RoundResults2_PlayerTag_C.ExecuteUbergraph_WBP_RoundResults2_PlayerTag // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

