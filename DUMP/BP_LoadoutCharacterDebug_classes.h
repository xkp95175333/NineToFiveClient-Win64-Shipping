// BlueprintGeneratedClass BP_LoadoutCharacterDebug.BP_LoadoutCharacterDebug_C
// Size: 0x2a1 (Inherited: 0x220)
struct ABP_LoadoutCharacterDebug_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* celular_modelo_fbx; // 0x228(0x08)
	struct USkeletalMeshComponent* Player1_3P_BackpackCharm; // 0x230(0x08)
	struct USkeletalMeshComponent* Player1_3P_Backpack; // 0x238(0x08)
	struct USkeletalMeshComponent* Player1_3P_Gloves; // 0x240(0x08)
	struct USkeletalMeshComponent* Player1_3P_Legs; // 0x248(0x08)
	struct USkeletalMeshComponent* Player1_3P_Face; // 0x250(0x08)
	struct USkeletalMeshComponent* Player1_3P_Hair; // 0x258(0x08)
	struct USkeletalMeshComponent* Player1_3P_FacialHair; // 0x260(0x08)
	struct USkeletalMeshComponent* Player1_3P_Head; // 0x268(0x08)
	struct USkeletalMeshComponent* Player1_3P_Chest; // 0x270(0x08)
	struct UHWVisualArmorComponent* HWVisualArmor; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct AHWWeapon* SpawnedWeapon; // 0x288(0x08)
	struct TArray<struct AActor*> PartActors; // 0x290(0x10)
	enum class ELoadoutCharacterPoseType ViewPose; // 0x2a0(0x01)

	struct UMeshComponent* GetArmorMeshComponent(enum class EHWArmorType Type, bool FirstPerson); // Function BP_LoadoutCharacterDebug.BP_LoadoutCharacterDebug_C.GetArmorMeshComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x13c4ca0
	void SpawnWeapon(struct FHWWeaponParts WeaponParts); // Function BP_LoadoutCharacterDebug.BP_LoadoutCharacterDebug_C.SpawnWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UserConstructionScript(); // Function BP_LoadoutCharacterDebug.BP_LoadoutCharacterDebug_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ArmorMeshComponentUpdated(enum class EHWArmorType Type, bool FirstPerson); // Function BP_LoadoutCharacterDebug.BP_LoadoutCharacterDebug_C.ArmorMeshComponentUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ArmorSetUpdated(); // Function BP_LoadoutCharacterDebug.BP_LoadoutCharacterDebug_C.ArmorSetUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_LoadoutCharacterDebug(int32_t EntryPoint); // Function BP_LoadoutCharacterDebug.BP_LoadoutCharacterDebug_C.ExecuteUbergraph_BP_LoadoutCharacterDebug // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

