// WidgetBlueprintGeneratedClass WBP_DebugMenu_FakeMatchCustomEventSettings.WBP_DebugMenu_FakeMatchCustomEventSettings_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_DebugMenu_FakeMatchCustomEventSettings_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UComboBoxString* Event; // 0x268(0x08)
	struct UComboBoxString* Extra; // 0x270(0x08)
	struct UEditableText* MaxCount; // 0x278(0x08)
	struct UEditableText* MinCount; // 0x280(0x08)
	struct UWBP_Button_C* WBP_Button; // 0x288(0x08)
	int32_t MinCountInt; // 0x290(0x04)
	int32_t MaxCountInt; // 0x294(0x04)

	void BndEvt__WBP_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenu_FakeMatchCustomEventSettings.WBP_DebugMenu_FakeMatchCustomEventSettings_C.BndEvt__WBP_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MinCount_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_DebugMenu_FakeMatchCustomEventSettings.WBP_DebugMenu_FakeMatchCustomEventSettings_C.BndEvt__MinCount_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__MaxCount_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_DebugMenu_FakeMatchCustomEventSettings.WBP_DebugMenu_FakeMatchCustomEventSettings_C.BndEvt__MaxCount_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenu_FakeMatchCustomEventSettings(int32_t EntryPoint); // Function WBP_DebugMenu_FakeMatchCustomEventSettings.WBP_DebugMenu_FakeMatchCustomEventSettings_C.ExecuteUbergraph_WBP_DebugMenu_FakeMatchCustomEventSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

