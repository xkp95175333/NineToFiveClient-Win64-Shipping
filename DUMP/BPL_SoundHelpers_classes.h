// BlueprintGeneratedClass BPL_SoundHelpers.BPL_SoundHelpers_C
// Size: 0x28 (Inherited: 0x28)
struct UBPL_SoundHelpers_C : UBlueprintFunctionLibrary {

	void StopVOByViewId(struct FName ID, struct UObject* __WorldContext); // Function BPL_SoundHelpers.BPL_SoundHelpers_C.StopVOByViewId // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Is FTUESound Played by View(enum class BPE_FTUESoundViews View, struct UObject* __WorldContext, bool Seen); // Function BPL_SoundHelpers.BPL_SoundHelpers_C.Is FTUESound Played by View // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PlayFTUESoundsByView(enum class BPE_FTUESoundViews View, struct UObject* __WorldContext); // Function BPL_SoundHelpers.BPL_SoundHelpers_C.PlayFTUESoundsByView // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsTopMenuButton(struct FName ID, struct UObject* __WorldContext, bool IsTopMenuButton); // Function BPL_SoundHelpers.BPL_SoundHelpers_C.IsTopMenuButton // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PlayUISoundByType(enum class EHW_UISoundType Type, struct UObject* __WorldContext); // Function BPL_SoundHelpers.BPL_SoundHelpers_C.PlayUISoundByType // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

