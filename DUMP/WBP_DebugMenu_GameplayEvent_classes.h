// WidgetBlueprintGeneratedClass WBP_DebugMenu_GameplayEvent.WBP_DebugMenu_GameplayEvent_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_DebugMenu_GameplayEvent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UEditableTextBox* Count; // 0x268(0x08)
	struct UComboBoxString* Event; // 0x270(0x08)
	struct UWBP_Label_C* IndexLabel; // 0x278(0x08)
	struct UComboBoxString* Round; // 0x280(0x08)
	struct UComboBoxString* WeaponUsed; // 0x288(0x08)

	void MakeEvent(struct FHWGameplayEvent Event, bool Valid); // Function WBP_DebugMenu_GameplayEvent.WBP_DebugMenu_GameplayEvent_C.MakeEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_DebugMenu_GameplayEvent.WBP_DebugMenu_GameplayEvent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DebugMenu_GameplayEvent.WBP_DebugMenu_GameplayEvent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenu_GameplayEvent(int32_t EntryPoint); // Function WBP_DebugMenu_GameplayEvent.WBP_DebugMenu_GameplayEvent_C.ExecuteUbergraph_WBP_DebugMenu_GameplayEvent // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

