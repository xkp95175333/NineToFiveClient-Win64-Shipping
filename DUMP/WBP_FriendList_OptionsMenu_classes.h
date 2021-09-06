// WidgetBlueprintGeneratedClass WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C
// Size: 0x3b0 (Inherited: 0x260)
struct UWBP_FriendList_OptionsMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USizeBox* AddFriend; // 0x268(0x08)
	struct UButton* AddFriendButton; // 0x270(0x08)
	struct UImage* AddIcon; // 0x278(0x08)
	struct UImage* Background; // 0x280(0x08)
	struct USizeBox* BlockPlayer; // 0x288(0x08)
	struct UButton* BlockPlayerButton; // 0x290(0x08)
	struct UImage* BlockPlayerIcon; // 0x298(0x08)
	struct UWBP_RichTextLabel_C* BlockPlayerText; // 0x2a0(0x08)
	struct UImage* DeclineIcon; // 0x2a8(0x08)
	struct USizeBox* DeclineRequest; // 0x2b0(0x08)
	struct UButton* DeclineRequestButton; // 0x2b8(0x08)
	struct UImage* Divider; // 0x2c0(0x08)
	struct UImage* Divider_2; // 0x2c8(0x08)
	struct UImage* Divider_3; // 0x2d0(0x08)
	struct UImage* Divider_4; // 0x2d8(0x08)
	struct UImage* Divider_5; // 0x2e0(0x08)
	struct UImage* Divider_6; // 0x2e8(0x08)
	struct UImage* Divider_7; // 0x2f0(0x08)
	struct USizeBox* RemoveFriend; // 0x2f8(0x08)
	struct UButton* RemoveFriendButton; // 0x300(0x08)
	struct UImage* RemoveFromFriendsIcon; // 0x308(0x08)
	struct USizeBox* UnblockPlayer; // 0x310(0x08)
	struct UButton* UnBlockPlayerButton; // 0x318(0x08)
	struct UImage* UnBlockPlayerIcon; // 0x320(0x08)
	struct UWBP_RichTextLabel_C* UnBlockPlayerText; // 0x328(0x08)
	struct USizeBox* Viewplatformprofile; // 0x330(0x08)
	struct UButton* ViewPlatformProfileButton_2; // 0x338(0x08)
	struct UImage* ViewPlatformProfileIcon; // 0x340(0x08)
	struct UWBP_RichTextLabel_C* ViewPlatformProfileText; // 0x348(0x08)
	struct USizeBox* Viewprofile; // 0x350(0x08)
	struct UButton* ViewProfileButton; // 0x358(0x08)
	struct UImage* ViewProfileIcon; // 0x360(0x08)
	struct UWBP_RichTextLabel_C* ViewProfileText; // 0x368(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x370(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_2; // 0x378(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel_4; // 0x380(0x08)
	struct FMulticastInlineDelegate OnClose; // 0x388(0x10)
	struct UBP_FriendList_Entry_Data_C* Data; // 0x398(0x08)
	struct FMulticastInlineDelegate OnRequestDeclined; // 0x3a0(0x10)

	void BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void OnFriendRequestSent(struct FHWResponseBase Response); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.OnFriendRequestSent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSendFailed(enum class EHWErrorMessage ErrorMessage); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.OnSendFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoNothing(bool Result); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.DoNothing // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoNothing2(bool Result); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.DoNothing2 // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__ViewPlatformProfileButton_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.BndEvt__ViewPlatformProfileButton_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BlockPlayerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.BndEvt__BlockPlayerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__UnBlockPlayerButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.BndEvt__UnBlockPlayerButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void CustomEvent(bool Result); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__RemoveFriendButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.BndEvt__RemoveFriendButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__DeclineRequestButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.BndEvt__DeclineRequestButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_FriendList_OptionsMenu(int32_t EntryPoint); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.ExecuteUbergraph_WBP_FriendList_OptionsMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnRequestDeclined__DelegateSignature(); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.OnRequestDeclined__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClose__DelegateSignature(); // Function WBP_FriendList_OptionsMenu.WBP_FriendList_OptionsMenu_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

