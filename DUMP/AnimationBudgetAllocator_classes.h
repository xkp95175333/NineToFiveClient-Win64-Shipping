// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters InParameters); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0xb376c0
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xb37600
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0xf00 (Inherited: 0xed0)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent {
	char pad_ED0[0x20]; // 0xed0(0x20)
	char bAutoRegisterWithBudgetAllocator : 1; // 0xef0(0x01)
	char bAutoCalculateSignificance : 1; // 0xef0(0x01)
	char bShouldUseActorRenderedFlag : 1; // 0xef0(0x01)
	char pad_EF0_3 : 5; // 0xef0(0x01)
	char pad_EF1[0xf]; // 0xef1(0x0f)

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator // (Final|Native|Public|BlueprintCallable) // @ game+0xb37860
};

