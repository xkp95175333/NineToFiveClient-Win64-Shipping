// BlueprintGeneratedClass CM_1P_Cameramodifier.CM_1P_Cameramodifier_C
// Size: 0x64 (Inherited: 0x48)
struct UCM_1P_Cameramodifier_C : UCameraModifier {
	struct FVector PositionOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	float FovOffset; // 0x60(0x04)

	void BlueprintModifyCamera(float DeltaTime, struct FVector ViewLocation, struct FRotator ViewRotation, float FOV, struct FVector NewViewLocation, struct FRotator NewViewRotation, float NewFOV); // Function CM_1P_Cameramodifier.CM_1P_Cameramodifier_C.BlueprintModifyCamera // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

