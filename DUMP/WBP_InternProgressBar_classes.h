// WidgetBlueprintGeneratedClass WBP_InternProgressBar.WBP_InternProgressBar_C
// Size: 0x320 (Inherited: 0x260)
struct UWBP_InternProgressBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UProgressBar* Delta; // 0x268(0x08)
	struct UButton* HoverButtonLevel_3; // 0x270(0x08)
	struct UButton* HoverButtonLevel_4; // 0x278(0x08)
	struct UButton* HoverButtonLevel_5; // 0x280(0x08)
	struct UButton* HoverButtonLevel_6; // 0x288(0x08)
	struct UButton* HoverButtonLevel_7; // 0x290(0x08)
	struct UButton* HoverButtonLevel_8; // 0x298(0x08)
	struct UButton* HoverButtonLevel_9; // 0x2a0(0x08)
	struct UButton* HoverButtonLevel_10; // 0x2a8(0x08)
	struct UButton* HoverButtonLevel_11; // 0x2b0(0x08)
	struct UButton* HoverButtonLevel_12; // 0x2b8(0x08)
	struct UButton* HoverButtonLevel_13; // 0x2c0(0x08)
	struct UButton* HoverButtonLevel_14; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image_2; // 0x2d8(0x08)
	struct UImage* Image_104; // 0x2e0(0x08)
	struct UProgressBar* Progress; // 0x2e8(0x08)
	bool IsHovering; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FMulticastInlineDelegate OnHoveredOverProgressBar; // 0x2f8(0x10)
	int32_t LastHoveredLevel; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FMulticastInlineDelegate OnUnhoveredOverProgressBar; // 0x310(0x10)

	struct UWidget* Get Hover Button Locked Levels Tool Tip Widget EA(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.Get Hover Button Locked Levels Tool Tip Widget EA // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_2_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_2_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_3_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_3_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_4_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_4_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_5_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_5_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_6_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_6_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_7_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_7_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_8_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_8_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_9_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_9_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_10_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_10_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_3_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_3_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_4_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_4_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_5_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_5_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_6_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_6_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_7_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_8_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_8_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_9_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_9_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_10_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_10_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__WBP_InternProgressBar_HoverButtonLevel_2_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.BndEvt__WBP_InternProgressBar_HoverButtonLevel_2_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_InternProgressBar(int32_t EntryPoint); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.ExecuteUbergraph_WBP_InternProgressBar // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnUnhoveredOverProgressBar__DelegateSignature(); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.OnUnhoveredOverProgressBar__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnHoveredOverProgressBar__DelegateSignature(int32_t Level); // Function WBP_InternProgressBar.WBP_InternProgressBar_C.OnHoveredOverProgressBar__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

