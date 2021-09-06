// WidgetBlueprintGeneratedClass WBP_Popup.WBP_Popup_C
// Size: 0x2f8 (Inherited: 0x290)
struct UWBP_Popup_C : UHWGenericPopupWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWBP_MainButton_C* CancelButton; // 0x298(0x08)
	struct UComboBoxString* ComboBox; // 0x2a0(0x08)
	struct UWBP_RichTextLabel_C* ContentLabel; // 0x2a8(0x08)
	struct UBorder* Input_Border; // 0x2b0(0x08)
	struct UEditableText* InputField; // 0x2b8(0x08)
	struct UWBP_MainButton_C* OkButton; // 0x2c0(0x08)
	struct UHorizontalBox* RewardsContainer; // 0x2c8(0x08)
	struct USizeBox* Sizer; // 0x2d0(0x08)
	struct UWBP_RichTextLabel_C* TitleLabel; // 0x2d8(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2e0(0x08)
	struct UWBP_Shop_Item_PriceTag_C* WBP_Shop_Item_PriceTag; // 0x2e8(0x08)
	float Width; // 0x2f0(0x04)
	float Height; // 0x2f4(0x04)

	void OnBack(bool IsHandled); // Function WBP_Popup.WBP_Popup_C.OnBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetRewardPopupTexts(struct TArray<struct FHWReward> Array, struct FText Title, struct FText Description, struct FText Button, struct FText OutTitle, struct FText OutDescription, struct FText OutButton); // Function WBP_Popup.WBP_Popup_C.GetRewardPopupTexts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ClosePopup(); // Function WBP_Popup.WBP_Popup_C.ClosePopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__OkButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Popup.WBP_Popup_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_Popup.WBP_Popup_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void InitializeMessagePopup(struct FText Title, struct FText Message, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style, bool isOneOptionPopup, enum class ETextJustify Justification); // Function WBP_Popup.WBP_Popup_C.InitializeMessagePopup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeInputPopup(struct FText Title, struct FText Message, struct FString InputText, struct TArray<struct FText> InputOptions, enum class EHWGenericPopupInputType InputType, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style); // Function WBP_Popup.WBP_Popup_C.InitializeInputPopup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize Elements(struct FText Title, struct FText Message, struct FText Ok, struct FText Cancel, enum class EHWGenericPopupStyle Style, enum class ETextJustify Justify); // Function WBP_Popup.WBP_Popup_C.Initialize Elements // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Popup.WBP_Popup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void HandleEsc(); // Function WBP_Popup.WBP_Popup_C.HandleEsc // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__InputField_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_Popup.WBP_Popup_C.BndEvt__InputField_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__InputField_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // Function WBP_Popup.WBP_Popup_C.BndEvt__InputField_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void InitializePurchasePopup(struct FText Title, struct FText Message, struct FString OfferedPrice, struct FString ActualPrice, enum class EHWCurrencyType CurrencyType, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style); // Function WBP_Popup.WBP_Popup_C.InitializePurchasePopup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeRewardsPopup(struct TArray<struct FHWReward> Rewards, struct FText Title, struct FText Message, struct FText CollectButtonTitle); // Function WBP_Popup.WBP_Popup_C.InitializeRewardsPopup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void Error(enum class EHWErrorMessage ErrorMessage); // Function WBP_Popup.WBP_Popup_C.Error // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Done(struct FHWProfileWithCollectedRewardsResponse Response); // Function WBP_Popup.WBP_Popup_C.Done // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FollowUpCollectionDone(bool Result); // Function WBP_Popup.WBP_Popup_C.FollowUpCollectionDone // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeDismantlePopup(struct FText Title, struct FText Message, int32_t Credits, int32_t Materials, enum class EHWFaction Faction, struct FText OkButtonTitle, struct FText CancelButtonTitle, enum class EHWGenericPopupStyle Style); // Function WBP_Popup.WBP_Popup_C.InitializeDismantlePopup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Popup(int32_t EntryPoint); // Function WBP_Popup.WBP_Popup_C.ExecuteUbergraph_WBP_Popup // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

