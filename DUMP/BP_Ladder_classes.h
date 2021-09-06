// BlueprintGeneratedClass BP_Ladder.BP_Ladder_C
// Size: 0x31c (Inherited: 0x220)
struct ABP_Ladder_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* LastHandle_Pos; // 0x228(0x08)
	struct UNavLinkComponent* NavLink; // 0x230(0x08)
	struct UBP_InteractionComponent_Ladder_C* BP_InteractionComponent_Ladder; // 0x238(0x08)
	struct UArrowComponent* Arrow; // 0x240(0x08)
	struct UArrowComponent* Arrow1; // 0x248(0x08)
	struct USceneComponent* Top_OutPosition; // 0x250(0x08)
	struct USceneComponent* Top_RailPosition; // 0x258(0x08)
	struct USceneComponent* Bottom_OutPosition; // 0x260(0x08)
	struct USceneComponent* Bottom_RailPosition; // 0x268(0x08)
	struct UBoxComponent* InteractionBox; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	struct FMulticastInlineDelegate SetFlyingMode; // 0x280(0x10)
	struct FMulticastInlineDelegate ClientOnInteract; // 0x290(0x10)
	struct FVector Progress; // 0x2a0(0x0c)
	float ClimbStartTime; // 0x2ac(0x04)
	struct AHWHumanCharacter* Climber; // 0x2b0(0x08)
	struct FVector LookDirection; // 0x2b8(0x0c)
	bool GoingUp; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	float LaddersGenHeight; // 0x2c8(0x04)
	bool AddRailings; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	float LaddersHeight; // 0x2d0(0x04)
	bool isLadderRailingPieceAUsed; // 0x2d4(0x01)
	bool isLadderFirstPieceUsed; // 0x2d5(0x01)
	char pad_2D6[0x2]; // 0x2d6(0x02)
	float LadderDurationSecondsPerM; // 0x2d8(0x04)
	float CharacterCapsuleHalfHeight; // 0x2dc(0x04)
	struct FVector BottomOutPos; // 0x2e0(0x0c)
	struct FVector BottomRailPos; // 0x2ec(0x0c)
	struct FVector TopOutPos; // 0x2f8(0x0c)
	struct FVector TopRailPos; // 0x304(0x0c)
	float TopOutZOffset; // 0x310(0x04)
	bool DebugDraw; // 0x314(0x01)
	bool SmallerInteractionBox; // 0x315(0x01)
	char pad_316[0x2]; // 0x316(0x02)
	float MaxDrawDistance; // 0x318(0x04)

	void DrawFunctionalData(); // Function BP_Ladder.BP_Ladder_C.DrawFunctionalData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLadderOutPos(); // Function BP_Ladder.BP_Ladder_C.SetLadderOutPos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetNavLinkPositions(); // Function BP_Ladder.BP_Ladder_C.SetNavLinkPositions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLadderInteractionDuration(); // Function BP_Ladder.BP_Ladder_C.SetLadderInteractionDuration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StopLadderMovement(bool snapToOutPosition, struct APawn* Character); // Function BP_Ladder.BP_Ladder_C.StopLadderMovement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LadderGenHeightIncrement(float IncrementValue); // Function BP_Ladder.BP_Ladder_C.LadderGenHeightIncrement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UserConstructionScript(); // Function BP_Ladder.BP_Ladder_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_Ladder.BP_Ladder_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_Ladder.BP_Ladder_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BP_InteractionComponent_Ladder_K2Node_ComponentBoundEvent_3_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_Ladder.BP_Ladder_C.BndEvt__BP_InteractionComponent_Ladder_K2Node_ComponentBoundEvent_3_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BP_InteractionComponent_Ladder_K2Node_ComponentBoundEvent_2_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_Ladder.BP_Ladder_C.BndEvt__BP_InteractionComponent_Ladder_K2Node_ComponentBoundEvent_2_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__BP_InteractionComponent_Ladder_K2Node_ComponentBoundEvent_0_HWInteractionDelegate__DelegateSignature(struct AHWCharacter* Character); // Function BP_Ladder.BP_Ladder_C.BndEvt__BP_InteractionComponent_Ladder_K2Node_ComponentBoundEvent_0_HWInteractionDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Ladder(int32_t EntryPoint); // Function BP_Ladder.BP_Ladder_C.ExecuteUbergraph_BP_Ladder // (Final|UbergraphFunction) // @ game+0x13c4ca0
	void ClientOnInteract__DelegateSignature(); // Function BP_Ladder.BP_Ladder_C.ClientOnInteract__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetFlyingMode__DelegateSignature(); // Function BP_Ladder.BP_Ladder_C.SetFlyingMode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

