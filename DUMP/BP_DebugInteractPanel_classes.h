// BlueprintGeneratedClass BP_DebugInteractPanel.BP_DebugInteractPanel_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_DebugInteractPanel_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* UserLocation; // 0x228(0x08)
	struct UStaticMeshComponent* Base; // 0x230(0x08)
	struct UStaticMeshComponent* keypad; // 0x238(0x08)
	struct USphereComponent* Sphere; // 0x240(0x08)
	struct UHWInteractionComponent* HWInteraction; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	struct FText Prompt; // 0x258(0x18)
	struct FMulticastInlineDelegate OnInteract; // 0x270(0x10)

	void GetUserLocation(struct FVector Value); // Function BP_DebugInteractPanel.BP_DebugInteractPanel_C.GetUserLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x13c4ca0
	void OnPanelInteract(struct AHWCharacter* Character); // Function BP_DebugInteractPanel.BP_DebugInteractPanel_C.OnPanelInteract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_DebugInteractPanel.BP_DebugInteractPanel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__HWInteraction_K2Node_ComponentBoundEvent_0_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_DebugInteractPanel.BP_DebugInteractPanel_C.BndEvt__HWInteraction_K2Node_ComponentBoundEvent_0_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_DebugInteractPanel(int32_t EntryPoint); // Function BP_DebugInteractPanel.BP_DebugInteractPanel_C.ExecuteUbergraph_BP_DebugInteractPanel // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void OnInteract__DelegateSignature(struct AHWCharacter* Character); // Function BP_DebugInteractPanel.BP_DebugInteractPanel_C.OnInteract__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

