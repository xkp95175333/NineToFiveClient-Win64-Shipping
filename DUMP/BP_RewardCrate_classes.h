// BlueprintGeneratedClass BP_RewardCrate.BP_RewardCrate_C
// Size: 0x2a5 (Inherited: 0x220)
struct ABP_RewardCrate_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct URectLightComponent* RectLight; // 0x228(0x08)
	struct UNiagaraComponent* RewardParticle_Open; // 0x230(0x08)
	struct UNiagaraComponent* RewardParticle; // 0x238(0x08)
	struct USkeletalMeshComponent* SK_Reward_Crates_BaseSK; // 0x240(0x08)
	struct USceneComponent* Scene; // 0x248(0x08)
	float FadeOut_NewTrack_0_40288DB548E997B4923EEE90FB1CFD22; // 0x250(0x04)
	enum class ETimelineDirection FadeOut__Direction_40288DB548E997B4923EEE90FB1CFD22; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* FadeOut; // 0x258(0x08)
	float VFXupdate_NewTrack_0_FAE6557D4BC681CE45F007A2B4DDEB3B; // 0x260(0x04)
	enum class ETimelineDirection VFXupdate__Direction_FAE6557D4BC681CE45F007A2B4DDEB3B; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UTimelineComponent* VFXupdate; // 0x268(0x08)
	float TL_Anticipation_TiltProgression_35739CF9409433A63D6FE7A689640C23; // 0x270(0x04)
	float TL_Anticipation_ProgressionCurve_35739CF9409433A63D6FE7A689640C23; // 0x274(0x04)
	enum class ETimelineDirection TL_Anticipation__Direction_35739CF9409433A63D6FE7A689640C23; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct UTimelineComponent* TL_Anticipation; // 0x280(0x08)
	enum class HWEnum_RewardCrateTypes RewardCrateType; // 0x288(0x01)
	enum class EHWRarity RewardCrateRarity; // 0x289(0x01)
	enum class HWEnum_RewardCrateStates RewardCrateStates; // 0x28a(0x01)
	char pad_28B[0x1]; // 0x28b(0x01)
	float AnticipationLengthSeconds; // 0x28c(0x04)
	float LidShake; // 0x290(0x04)
	struct FVector2D TiltShakes; // 0x294(0x08)
	float CogUD; // 0x29c(0x04)
	float ProgressionCurve; // 0x2a0(0x04)
	bool Opening; // 0x2a4(0x01)

	void UserConstructionScript(); // Function BP_RewardCrate.BP_RewardCrate_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TL_Anticipation__FinishedFunc(); // Function BP_RewardCrate.BP_RewardCrate_C.TL_Anticipation__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void TL_Anticipation__UpdateFunc(); // Function BP_RewardCrate.BP_RewardCrate_C.TL_Anticipation__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void VFXupdate__FinishedFunc(); // Function BP_RewardCrate.BP_RewardCrate_C.VFXupdate__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void VFXupdate__UpdateFunc(); // Function BP_RewardCrate.BP_RewardCrate_C.VFXupdate__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void FadeOut__FinishedFunc(); // Function BP_RewardCrate.BP_RewardCrate_C.FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void FadeOut__UpdateFunc(); // Function BP_RewardCrate.BP_RewardCrate_C.FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void OpenLittleEvent(); // Function BP_RewardCrate.BP_RewardCrate_C.OpenLittleEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OpenBig(); // Function BP_RewardCrate.BP_RewardCrate_C.OpenBig // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetMeshesAndMaterials_Event(); // Function BP_RewardCrate.BP_RewardCrate_C.SetMeshesAndMaterials_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void _enteredanticipation(); // Function BP_RewardCrate.BP_RewardCrate_C._enteredanticipation // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AnticipationEvent(); // Function BP_RewardCrate.BP_RewardCrate_C.AnticipationEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InitLootBoxEvent(); // Function BP_RewardCrate.BP_RewardCrate_C.InitLootBoxEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Close(); // Function BP_RewardCrate.BP_RewardCrate_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetValues(); // Function BP_RewardCrate.BP_RewardCrate_C.ResetValues // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Opened_Event(); // Function BP_RewardCrate.BP_RewardCrate_C.Opened_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_RewardCrate.BP_RewardCrate_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void PlayOpenVFX(); // Function BP_RewardCrate.BP_RewardCrate_C.PlayOpenVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ActivateLittleVFX(); // Function BP_RewardCrate.BP_RewardCrate_C.ActivateLittleVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DeactivateLittleVFX(); // Function BP_RewardCrate.BP_RewardCrate_C.DeactivateLittleVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_RewardCrate.BP_RewardCrate_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_RewardCrate(int32_t EntryPoint); // Function BP_RewardCrate.BP_RewardCrate_C.ExecuteUbergraph_BP_RewardCrate // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

