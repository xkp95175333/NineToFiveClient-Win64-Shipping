// BlueprintGeneratedClass BP_FlashSilhouette.BP_FlashSilhouette_C
// Size: 0x24c (Inherited: 0x220)
struct ABP_FlashSilhouette_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float FadeOut_Opacity_595A7ABB4D7106F63B035099B6C870DD; // 0x238(0x04)
	enum class ETimelineDirection FadeOut__Direction_595A7ABB4D7106F63B035099B6C870DD; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct UTimelineComponent* FadeOut; // 0x240(0x08)
	float PlayRate; // 0x248(0x04)

	void FadeOut__FinishedFunc(); // Function BP_FlashSilhouette.BP_FlashSilhouette_C.FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void FadeOut__UpdateFunc(); // Function BP_FlashSilhouette.BP_FlashSilhouette_C.FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_FlashSilhouette.BP_FlashSilhouette_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_FlashSilhouette(int32_t EntryPoint); // Function BP_FlashSilhouette.BP_FlashSilhouette_C.ExecuteUbergraph_BP_FlashSilhouette // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

