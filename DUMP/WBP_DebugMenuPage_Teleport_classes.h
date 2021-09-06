// WidgetBlueprintGeneratedClass WBP_DebugMenuPage_Teleport.WBP_DebugMenuPage_Teleport_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_DebugMenuPage_Teleport_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* targetList; // 0x268(0x08)
	struct UWBP_Button_C* TeleportOtherButton; // 0x270(0x08)
	struct UWBP_Button_C* WBP_Button; // 0x278(0x08)
	struct UWBP_Label_C* WBP_Label; // 0x280(0x08)

	void OnTeleportClicked(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Teleport.WBP_DebugMenuPage_Teleport_C.OnTeleportClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Refresh(); // Function WBP_DebugMenuPage_Teleport.WBP_DebugMenuPage_Teleport_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_DebugMenuPage_Teleport.WBP_DebugMenuPage_Teleport_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__TeleportOtherButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWBP_Button_C* Button); // Function WBP_DebugMenuPage_Teleport.WBP_DebugMenuPage_Teleport_C.BndEvt__TeleportOtherButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DebugMenuPage_Teleport(int32_t EntryPoint); // Function WBP_DebugMenuPage_Teleport.WBP_DebugMenuPage_Teleport_C.ExecuteUbergraph_WBP_DebugMenuPage_Teleport // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

