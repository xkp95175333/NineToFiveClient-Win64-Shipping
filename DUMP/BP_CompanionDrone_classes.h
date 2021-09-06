// BlueprintGeneratedClass BP_CompanionDrone.BP_CompanionDrone_C
// Size: 0x9c3 (Inherited: 0x90b)
struct ABP_CompanionDrone_C : ABP_DeathDrone_C {
	char pad_90B[0x5]; // 0x90b(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x910(0x08)
	struct UParticleSystemComponent* PS_RotorTrace; // 0x918(0x08)
	struct UParticleSystemComponent* PS_RotorTrace3; // 0x920(0x08)
	struct UParticleSystemComponent* PS_RotorTrace2; // 0x928(0x08)
	struct UParticleSystemComponent* PS_RotorTrace1; // 0x930(0x08)
	struct UHWDetectableComponent* HWDetectable; // 0x938(0x08)
	struct UParticleSystemComponent* PS_DroneLights2; // 0x940(0x08)
	struct UParticleSystemComponent* PS_DroneLights; // 0x948(0x08)
	float ZoomTarget; // 0x950(0x04)
	float ZoomSpeed; // 0x954(0x04)
	float ZoomIncrements; // 0x958(0x04)
	float PipMaxFov; // 0x95c(0x04)
	struct FVector2D ZoomMinMax; // 0x960(0x08)
	float DOF_Target; // 0x968(0x04)
	float CompanionMaxRelativeMovementSpeed; // 0x96c(0x04)
	struct TSet<struct AHWCharacter*> HostileSpecters; // 0x970(0x50)
	bool IsSpecterManager; // 0x9c0(0x01)
	bool LastWasControlled; // 0x9c1(0x01)
	bool BoostIsActive; // 0x9c2(0x01)

	void ProcessBoost(); // Function BP_CompanionDrone.BP_CompanionDrone_C.ProcessBoost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UnmarkAsSpecterManager(); // Function BP_CompanionDrone.BP_CompanionDrone_C.UnmarkAsSpecterManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateAllSpecters(); // Function BP_CompanionDrone.BP_CompanionDrone_C.UpdateAllSpecters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateSpecter(struct AHWCharacter* Char, bool State); // Function BP_CompanionDrone.BP_CompanionDrone_C.UpdateSpecter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Mark as Specter Manager(); // Function BP_CompanionDrone.BP_CompanionDrone_C.Mark as Specter Manager // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RestoreRelativeMovementSpeed(); // Function BP_CompanionDrone.BP_CompanionDrone_C.RestoreRelativeMovementSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMaxRelativeMovementSpeed(float RelativeSpeed); // Function BP_CompanionDrone.BP_CompanionDrone_C.SetMaxRelativeMovementSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnRep_ZoomTarget(); // Function BP_CompanionDrone.BP_CompanionDrone_C.OnRep_ZoomTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EnablePIPCapture(bool Enable); // Function BP_CompanionDrone.BP_CompanionDrone_C.EnablePIPCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ProcessZoom(); // Function BP_CompanionDrone.BP_CompanionDrone_C.ProcessZoom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UserConstructionScript(); // Function BP_CompanionDrone.BP_CompanionDrone_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_CompanionDrone.BP_CompanionDrone_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnInteract(struct AHWCharacter* Character); // Function BP_CompanionDrone.BP_CompanionDrone_C.OnInteract // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleDroneDestroyed(); // Function BP_CompanionDrone.BP_CompanionDrone_C.HandleDroneDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_CompanionDrone.BP_CompanionDrone_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void SendZoomTargetToServer(float NewZoomTarget); // Function BP_CompanionDrone.BP_CompanionDrone_C.SendZoomTargetToServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue); // Function BP_CompanionDrone.BP_CompanionDrone_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1 // (BlueprintEvent) // @ game+0x13c4ca0
	void BPEnableCamera(bool Value); // Function BP_CompanionDrone.BP_CompanionDrone_C.BPEnableCamera // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BoostStatusChanged(bool IsOn); // Function BP_CompanionDrone.BP_CompanionDrone_C.BoostStatusChanged // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_CompanionDrone(int32_t EntryPoint); // Function BP_CompanionDrone.BP_CompanionDrone_C.ExecuteUbergraph_BP_CompanionDrone // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

