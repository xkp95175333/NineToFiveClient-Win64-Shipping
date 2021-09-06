// WidgetBlueprintGeneratedClass WBP_QuickMap.WBP_QuickMap_C
// Size: 0x280 (Inherited: 0x260)
struct UWBP_QuickMap_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Map_Reveal; // 0x268(0x08)
	struct UImage* DiagLines; // 0x270(0x08)
	struct UWBP_Map_C* Map; // 0x278(0x08)

	void Construct(); // Function WBP_QuickMap.WBP_QuickMap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ToggleMap(bool IsShown); // Function WBP_QuickMap.WBP_QuickMap_C.ToggleMap // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HideQuickMap(); // Function WBP_QuickMap.WBP_QuickMap_C.HideQuickMap // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RefreshMarkers(struct AHWPlayerController* Controller, struct AHWMapMarker* UpdatedMarker); // Function WBP_QuickMap.WBP_QuickMap_C.RefreshMarkers // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__Map_K2Node_ComponentBoundEvent_0_MarkerClickedDispatcher__DelegateSignature(struct AActor* Instance); // Function WBP_QuickMap.WBP_QuickMap_C.BndEvt__Map_K2Node_ComponentBoundEvent_0_MarkerClickedDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_QuickMap(int32_t EntryPoint); // Function WBP_QuickMap.WBP_QuickMap_C.ExecuteUbergraph_WBP_QuickMap // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

