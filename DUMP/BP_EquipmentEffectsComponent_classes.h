// BlueprintGeneratedClass BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C
// Size: 0x158 (Inherited: 0xd0)
struct UBP_EquipmentEffectsComponent_C : UHWPlayerEffectsComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	bool SpecterSystemEffect; // 0xd8(0x01)
	bool SmokeEffect; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
	struct FMulticastInlineDelegate OnPlayerGasStateChanged; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnPlayerSmokeStateChanged; // 0xf0(0x10)
	int32_t FireState; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FMulticastInlineDelegate OnPlayerFireStateChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnPlayerSpecterStateChanged; // 0x118(0x10)
	bool JammedEffect; // 0x128(0x01)
	bool GasEffect; // 0x129(0x01)
	char pad_12A[0x6]; // 0x12a(0x06)
	struct FTimerHandle SpecterResetTimer; // 0x130(0x08)
	struct FMulticastInlineDelegate OnPlayerSpecter3PVVisualsChanged; // 0x138(0x10)
	struct UPostProcessComponent* TutorialEMPPostProcess; // 0x148(0x08)
	struct FTimerHandle TutorialEMPResetTimer; // 0x150(0x08)

	void ResetSpecterState(); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.ResetSpecterState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateSpecterState(bool IsOn, float Duration); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.UpdateSpecterState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateFireState(bool State); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.UpdateFireState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDispatchMyFireStateChanged(bool IsActive); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.OnDispatchMyFireStateChanged // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDispatchMySpecterStateChanged(bool IsActive); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.OnDispatchMySpecterStateChanged // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnDispatchMySpecter3PVVisualsChanged(bool IsActive); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.OnDispatchMySpecter3PVVisualsChanged // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTutorialEMPEffect(); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.OnTutorialEMPEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTutorialResetEMP(); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.OnTutorialResetEMP // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_EquipmentEffectsComponent(int32_t EntryPoint); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.ExecuteUbergraph_BP_EquipmentEffectsComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnPlayerSpecter3PVVisualsChanged__DelegateSignature(bool IsActive); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.OnPlayerSpecter3PVVisualsChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerSpecterStateChanged__DelegateSignature(bool IsActive); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.OnPlayerSpecterStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerFireStateChanged__DelegateSignature(bool IsActive); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.OnPlayerFireStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerSmokeStateChanged__DelegateSignature(bool IsActive); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.OnPlayerSmokeStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerGasStateChanged__DelegateSignature(bool IsActive); // Function BP_EquipmentEffectsComponent.BP_EquipmentEffectsComponent_C.OnPlayerGasStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

