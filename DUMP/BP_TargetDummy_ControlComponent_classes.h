// BlueprintGeneratedClass BP_TargetDummy_ControlComponent.BP_TargetDummy_ControlComponent_C
// Size: 0xc8 (Inherited: 0xb0)
struct UBP_TargetDummy_ControlComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct ABP_TargetDummySpawner_C* FocusedSpawner; // 0xb8(0x08)
	struct ABP_TargetDummySpawner_C* CustomSpawner; // 0xc0(0x08)

	void GetFocusedSpawner(struct ABP_TargetDummySpawner_C* FocusedSpawner); // Function BP_TargetDummy_ControlComponent.BP_TargetDummy_ControlComponent_C.GetFocusedSpawner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SpawnDummy(struct FFHWTargetDummyParams Params); // Function BP_TargetDummy_ControlComponent.BP_TargetDummy_ControlComponent_C.SpawnDummy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void MoveCustomSpawner(); // Function BP_TargetDummy_ControlComponent.BP_TargetDummy_ControlComponent_C.MoveCustomSpawner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetFocusedSpawner(struct ABP_TargetDummySpawner_C* spawner); // Function BP_TargetDummy_ControlComponent.BP_TargetDummy_ControlComponent_C.SetFocusedSpawner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Get Valid Spawner Location(bool Valid, struct FVector Location); // Function BP_TargetDummy_ControlComponent.BP_TargetDummy_ControlComponent_C.Get Valid Spawner Location // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ServerSpawnDummy(struct FFHWTargetDummyParams Params); // Function BP_TargetDummy_ControlComponent.BP_TargetDummy_ControlComponent_C.ServerSpawnDummy // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ServeMoveCustomSpawner(struct FVector Location); // Function BP_TargetDummy_ControlComponent.BP_TargetDummy_ControlComponent_C.ServeMoveCustomSpawner // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ServerSpawnCustomSpawner(struct FVector Location); // Function BP_TargetDummy_ControlComponent.BP_TargetDummy_ControlComponent_C.ServerSpawnCustomSpawner // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ServerSetFocusedSpawner(struct ABP_TargetDummySpawner_C* FocusedSpawner); // Function BP_TargetDummy_ControlComponent.BP_TargetDummy_ControlComponent_C.ServerSetFocusedSpawner // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ServerReviveDummy(); // Function BP_TargetDummy_ControlComponent.BP_TargetDummy_ControlComponent_C.ServerReviveDummy // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_TargetDummy_ControlComponent(int32_t EntryPoint); // Function BP_TargetDummy_ControlComponent.BP_TargetDummy_ControlComponent_C.ExecuteUbergraph_BP_TargetDummy_ControlComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

