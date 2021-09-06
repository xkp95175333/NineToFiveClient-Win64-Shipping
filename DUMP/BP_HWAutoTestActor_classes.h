// BlueprintGeneratedClass BP_HWAutoTestActor.BP_HWAutoTestActor_C
// Size: 0x298 (Inherited: 0x220)
struct ABP_HWAutoTestActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct UWBP_Rigs_C* Rigs; // 0x230(0x08)
	int32_t CurrentStep; // 0x238(0x04)
	struct FName LevelName; // 0x23c(0x08)
	char pad_244[0x4]; // 0x244(0x04)
	struct FString ExpectedItem; // 0x248(0x10)
	struct FString ErrorsString; // 0x258(0x10)
	struct FString ExpectedWeapon; // 0x268(0x10)
	struct FString OptionsFromPreset; // 0x278(0x10)
	struct UWBP_Armory2_Popup_Weapon_C* PopupWeapon; // 0x288(0x08)
	bool lol1; // 0x290(0x01)
	bool lol2; // 0x291(0x01)
	char pad_292[0x2]; // 0x292(0x02)
	float DelayTime; // 0x294(0x04)

	void ParseEnvironment(struct FString ParsedEnv); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.ParseEnvironment // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ParseUserName(struct FString ParsedName); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.ParseUserName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteNextTest(); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.ExecuteNextTest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReloadLevel(struct FString Options); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.ReloadLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CloseTutorialTooltip(); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.CloseTutorialTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Assert String Value(struct FString AssertName, struct FString Expected, struct FString Actual, bool Passed); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.Assert String Value // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BlueprintRarityUprageNextStep(); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.BlueprintRarityUprageNextStep // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnBlueprintRarityUpgradeTestCompleted(bool Result); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.OnBlueprintRarityUpgradeTestCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void LoadoutTutorialNextStep(); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.LoadoutTutorialNextStep // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void VerifyLoadoutTutorial(); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.VerifyLoadoutTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnLoadoutTestCompleted(bool Result); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.OnLoadoutTestCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateSucceeded(struct FHWResponseBase Response); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.OnUpdateSucceeded // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnUpdateFailed(enum class EHWErrorMessage ErrorMessage); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.OnUpdateFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FinalizeTest(); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.FinalizeTest // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EmptyEvent(bool Result); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.EmptyEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSingleTestFinalized(bool Result); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.OnSingleTestFinalized // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnTestFinalized(bool Result); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.OnTestFinalized // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnBeginPlay(bool Result); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.OnBeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_HWAutoTestActor(int32_t EntryPoint); // Function BP_HWAutoTestActor.BP_HWAutoTestActor_C.ExecuteUbergraph_BP_HWAutoTestActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

