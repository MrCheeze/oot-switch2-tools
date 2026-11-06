-------- Event timeline: Dm_LakeHrl_0020 --------
actors: 16
clips: 113
oneshots: 0
cuts: 20
duration: 6231.0
subtimelines: ['Dm_LakeHrl_0020_Effect', 'Dm_LakeHrl_0020_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 410.0
x4: 0
params: (none)

Cut: cut03
start time: 572.0
x4: 0
params: (none)

Cut: cut04
start time: 962.0
x4: 0
params: (none)

Cut: cut05
start time: 1026.0
x4: 0
params: (none)

Cut: cut06
start time: 1452.0
x4: 0
params: (none)

Cut: cut07
start time: 1849.0
x4: 0
params: (none)

Cut: cut08
start time: 2150.0
x4: 0
params: (none)

Cut: cut10
start time: 2420.0
x4: 0
params: (none)

Cut: cut11
start time: 2660.0
x4: 0
params: (none)

Cut: cut12
start time: 2960.0
x4: 0
params: (none)

Cut: cut13
start time: 3350.0
x4: 0
params: (none)

Cut: cut14
start time: 3951.0
x4: 0
params: (none)

Cut: cut15
start time: 4241.0
x4: 0
params: (none)

Cut: cut17
start time: 4591.0
x4: 0
params: (none)

Cut: cut18
start time: 4922.0
x4: 0
params: (none)

Cut: cut18-05
start time: 5228.0
x4: 0
params: (none)

Cut: cut19
start time: 5449.0
x4: 0
params: (none)

Cut: cut20
start time: 5609.0
x4: 0
params: (none)

Cut: cut21
start time: 5850.0
x4: 0
params: (none)


===== Actors =====

Actor: Land_LakeHrl_FieldProp_A_01[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -145.8000030517578
- 127.5
- 446.0570068359375
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[1]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -137.6999969482422
- 125.0
- 445.5
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Land_LakeHrl_Ice_A_01
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -139.0030059814453
- 124.28970336914062
- 446.7538146972656
Rotation:
- 9.000000318337698e-06
- -41.683998107910156
- -9.000000318337698e-06
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_LakeHrl_Ice_A_01
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -139.0
- 124.29000091552734
- 446.75
Rotation:
- 0.0
- -41.683998107910156
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_LakeHrl_Ice_A_02[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_LakeHrl_0020/Dm_LakeHrl_0020_Obj_LakeHrl_Ice_A/workspace.pp__ModelProject.gyml

Actor: Dm_Land_LakeHrl_WaterPlane_A_01[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_LakeHrl_0020/Dm_LakeHrl_0020_Dm_Land_LakeHrl_WaterPlane_A/workspace.pp__ModelProject.gyml

Actor: PostProcessingActor[99]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: VoicePlayActor[0]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerPlayerRestoreBootsChange']
params: BindTargetActorNameComponent: Player
EquipmentUser_ArmorHead: ''
EquipmentUser_ArmorLower: ''
EquipmentUser_ArmorUpper: ''
EquipmentUser_Bow: ''
EquipmentUser_Bow_EquipmentState: 0
EquipmentUser_Shield: ''
EquipmentUser_Shield_EquipmentState: 0
EquipmentUser_Weapon: ''
EquipmentUser_Weapon_EquipmentState: 0
EventMemberCreateMethod: 0
ExceptionalBindType: 4
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_LakeHrl_0020/Dm_LakeHrl_0020_Player_Adult/workspace.pp__ModelProject.gyml

Actor: EventWorldManagerController[2]
concurrent clips: 1
actions: ['Event_SetFoliageTurfParamForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_LakeHrl_0020/Dm_LakeHrl_0020_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Sheik_Adult[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_LakeHrl_0020/Dm_LakeHrl_0020_Npc_Hylia_WU_Sheik/workspace.pp__ModelProject.gyml

Actor: EventCamera[0]
concurrent clips: 1
actions: ['EventMoveCameraAnimationInstructions']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventCamera[1]
concurrent clips: 1
actions: ['EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E Dm_Locator[1] - EventDoNothing (#1, concurrent=0)
               duration: 6231.0
               IsWaitEnd: true
[      0.0] E Land_LakeHrl_Ice_A_01 - EventDoNothing (#2, concurrent=0)
               duration: 4241.0
               IsWaitEnd: true
[      0.0] E Obj_LakeHrl_Ice_A_01 - EventDoNothing (#4, concurrent=0)
               duration: 910.0
               IsWaitEnd: true
[      0.0] E Obj_LakeHrl_Ice_A_02[0] - EventGoOffstageForUser (#6, concurrent=0)
               duration: 910.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Land_LakeHrl_WaterPlane_A_01[0] - EventGoOffstageForUser (#11, concurrent=0)
               duration: 1849.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 410.0
               EndBluarLevel: 0.75
               EndDistance: 10.800000190734863
               EndFNumber: 10.699999809265137
               IsAutoFocalDist: false
               IsEnableDofFarCancel: true
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.75
               StartDistance: 10.800000190734863
               StartFNumber: 10.699999809265137
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#48, concurrent=0)
               duration: 120.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#60, concurrent=1)
               duration: 100.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#61, concurrent=2)
               duration: 100.0
               BootsType: 0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#65, concurrent=0)
               duration: 6231.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#89, concurrent=0)
               duration: 410.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#60, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#61, concurrent=2)
[    120.0] L UISystemActor[0] - EventEventFadeInForTimeline (#48, concurrent=0)
[    410.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#17, concurrent=0)
[    410.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#89, concurrent=0)
[    410.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 162.0
               EndBluarLevel: 3.0
               EndDistance: 55.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 55.0
               StartFNumber: 20.0
[    410.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#90, concurrent=0)
               duration: 162.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C02-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    572.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#18, concurrent=0)
[    572.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#90, concurrent=0)
[    572.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 390.0
               EndBluarLevel: 1.0
               EndDistance: 55.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 55.0
               StartFNumber: 20.0
[    572.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#91, concurrent=0)
               duration: 390.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    910.0] L Obj_LakeHrl_Ice_A_01 - EventDoNothing (#4, concurrent=0)
[    910.0] L Obj_LakeHrl_Ice_A_02[0] - EventGoOffstageForUser (#6, concurrent=0)
[    910.0] E Obj_LakeHrl_Ice_A_01 - EventGoOffstageForUser (#5, concurrent=0)
               duration: 5321.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[    910.0] E Obj_LakeHrl_Ice_A_02[0] - EventPlayASForTimeline (#7, concurrent=0)
               duration: 52.0
               ASName: C03-Obj_LakeHrl_Ice_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    962.0] L Obj_LakeHrl_Ice_A_02[0] - EventPlayASForTimeline (#7, concurrent=0)
[    962.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#19, concurrent=0)
[    962.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#91, concurrent=0)
[    962.0] E Obj_LakeHrl_Ice_A_02[0] - EventPlayASForTimeline (#8, concurrent=0)
               duration: 64.0
               ASName: C04-Obj_LakeHrl_Ice_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    962.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 64.0
               EndBluarLevel: 0.0
               EndDistance: 0.0
               EndFNumber: 0.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.0
               StartFNumber: 0.0
[    962.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#92, concurrent=0)
               duration: 64.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C04-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1026.0] L Obj_LakeHrl_Ice_A_02[0] - EventPlayASForTimeline (#8, concurrent=0)
[   1026.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#20, concurrent=0)
[   1026.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#92, concurrent=0)
[   1026.0] E Obj_LakeHrl_Ice_A_02[0] - EventPlayASForTimeline (#9, concurrent=0)
               duration: 426.0
               ASName: C05-Obj_LakeHrl_Ice_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1026.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 426.0
               EndBluarLevel: 0.0
               EndDistance: 0.0
               EndFNumber: 0.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.0
               StartFNumber: 0.0
[   1026.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#93, concurrent=0)
               duration: 426.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C05-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1452.0] L Obj_LakeHrl_Ice_A_02[0] - EventPlayASForTimeline (#9, concurrent=0)
[   1452.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#21, concurrent=0)
[   1452.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#93, concurrent=0)
[   1452.0] E Obj_LakeHrl_Ice_A_02[0] - EventGoOffstageForUser (#10, concurrent=0)
               duration: 4779.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1452.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 397.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 47.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: false
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 47.0
[   1452.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#75, concurrent=0)
               duration: 397.0
               ASName: C06-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1452.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#94, concurrent=0)
               duration: 397.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: 1.0
               RootType: 1
               SceneName: C06-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1466.0] E VoicePlayActor[0] - EventStartVoice (#37, concurrent=0)
               duration: 492.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_LakeHrl_0020:Dm_LakeHrl_0020_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   1849.0] L Dm_Land_LakeHrl_WaterPlane_A_01[0] - EventGoOffstageForUser (#11, concurrent=0)
[   1849.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#22, concurrent=0)
[   1849.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#75, concurrent=0)
[   1849.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#94, concurrent=0)
[   1849.0] E Dm_Land_LakeHrl_WaterPlane_A_01[0] - EventPlayASForTimeline (#12, concurrent=0)
               duration: 301.0
               ASName: C07-Dm_Land_LakeHrl_WaterPlane_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1849.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 301.0
               EndBluarLevel: 0.0
               EndDistance: 3.0
               EndFNumber: 47.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: true
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.0
               StartFNumber: 47.0
[   1849.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#76, concurrent=0)
               duration: 301.0
               ASName: C07-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1849.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#95, concurrent=0)
               duration: 301.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C07-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1958.0] L VoicePlayActor[0] - EventStartVoice (#37, concurrent=0)
[   2150.0] L Dm_Land_LakeHrl_WaterPlane_A_01[0] - EventPlayASForTimeline (#12, concurrent=0)
[   2150.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#23, concurrent=0)
[   2150.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#76, concurrent=0)
[   2150.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#95, concurrent=0)
[   2150.0] E Dm_Land_LakeHrl_WaterPlane_A_01[0] - EventPlayASForTimeline (#13, concurrent=0)
               duration: 270.0
               ASName: C08-Dm_Land_LakeHrl_WaterPlane_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2150.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 270.0
               EndBluarLevel: 1.0
               EndDistance: 8.5
               EndFNumber: 63.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 8.5
               StartFNumber: 63.0
[   2150.0] E Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 270.0
               ASName: C08-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2150.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#66, concurrent=0)
               duration: 270.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2150.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#77, concurrent=0)
               duration: 270.0
               ASName: C08-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2150.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#96, concurrent=0)
               duration: 270.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C08-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2420.0] L Dm_Land_LakeHrl_WaterPlane_A_01[0] - EventPlayASForTimeline (#13, concurrent=0)
[   2420.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#24, concurrent=0)
[   2420.0] L Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
[   2420.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#66, concurrent=0)
[   2420.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#77, concurrent=0)
[   2420.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#96, concurrent=0)
[   2420.0] E Dm_Land_LakeHrl_WaterPlane_A_01[0] - EventPlayASForTimeline (#14, concurrent=0)
               duration: 240.0
               ASName: C10-Dm_Land_LakeHrl_WaterPlane_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2420.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 240.0
               EndBluarLevel: 1.5
               EndDistance: 8.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 8.0
               StartFNumber: 50.0
[   2420.0] E Player_Event[0] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 240.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2420.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 240.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2420.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#78, concurrent=0)
               duration: 240.0
               ASName: C10-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2420.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#97, concurrent=0)
               duration: 240.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C10-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2444.0] E VoicePlayActor[0] - EventStartVoice (#38, concurrent=0)
               duration: 178.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_LakeHrl_0020:Dm_LakeHrl_0020_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2622.0] L VoicePlayActor[0] - EventStartVoice (#38, concurrent=0)
[   2660.0] L Dm_Land_LakeHrl_WaterPlane_A_01[0] - EventPlayASForTimeline (#14, concurrent=0)
[   2660.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#25, concurrent=0)
[   2660.0] L Player_Event[0] - EventPlayASForTimeline (#51, concurrent=0)
[   2660.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#67, concurrent=0)
[   2660.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#78, concurrent=0)
[   2660.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#97, concurrent=0)
[   2660.0] E Dm_Land_LakeHrl_WaterPlane_A_01[0] - EventPlayASForTimeline (#15, concurrent=0)
               duration: 300.0
               ASName: C11-Dm_Land_LakeHrl_WaterPlane_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2660.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 300.0
               EndBluarLevel: 3.0
               EndDistance: 16.0
               EndFNumber: 135.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 16.0
               StartFNumber: 135.0
[   2660.0] E Player_Event[0] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 300.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2660.0] E EventWorldManagerController[2] - Event_SetFoliageTurfParamForTimeline (#63, concurrent=0)
               duration: 300.0
               DisableFarShortening: true
               FarPow: 1.0
               IsWaitEnd: true
               LOD_Dist_LowTree0: 30.0
               LOD_Dist_LowTree1: 135.0
               LOD_Dist_Ornament: 35.0
               Len1Poly: 0.20000000298023224
               MaxDist_Ornament: 100.0
               ModifyLOD: false
               VanishEnd: 65.0
               VanishStart: 25.0
[   2660.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#68, concurrent=0)
               duration: 300.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2660.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#79, concurrent=0)
               duration: 300.0
               ASName: C11-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2660.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#98, concurrent=0)
               duration: 300.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C11-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2960.0] L Dm_Land_LakeHrl_WaterPlane_A_01[0] - EventPlayASForTimeline (#15, concurrent=0)
[   2960.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#26, concurrent=0)
[   2960.0] L Player_Event[0] - EventPlayASForTimeline (#52, concurrent=0)
[   2960.0] L EventWorldManagerController[2] - Event_SetFoliageTurfParamForTimeline (#63, concurrent=0)
[   2960.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#68, concurrent=0)
[   2960.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#79, concurrent=0)
[   2960.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#98, concurrent=0)
[   2960.0] E Dm_Land_LakeHrl_WaterPlane_A_01[0] - EventPlayASForTimeline (#16, concurrent=0)
               duration: 3271.0
               ASName: C12-Dm_Land_LakeHrl_WaterPlane_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2960.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#27, concurrent=0)
               duration: 390.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: false
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 25.0
[   2960.0] E Player_Event[0] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 390.0
               ASName: C12-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2960.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#80, concurrent=0)
               duration: 390.0
               ASName: C12-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2960.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#99, concurrent=0)
               duration: 390.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C12-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2960.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#109, concurrent=0)
               duration: 390.0
               Near: 0.5
[   2984.0] E VoicePlayActor[0] - EventStartVoice (#39, concurrent=0)
               duration: 218.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_LakeHrl_0020:Dm_LakeHrl_0020_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   3202.0] L VoicePlayActor[0] - EventStartVoice (#39, concurrent=0)
[   3244.0] E VoicePlayActor[0] - EventStartVoice (#40, concurrent=0)
               duration: 95.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_LakeHrl_0020:Dm_LakeHrl_0020_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   3339.0] L VoicePlayActor[0] - EventStartVoice (#40, concurrent=0)
[   3350.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#27, concurrent=0)
[   3350.0] L Player_Event[0] - EventPlayASForTimeline (#53, concurrent=0)
[   3350.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#80, concurrent=0)
[   3350.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#99, concurrent=0)
[   3350.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#109, concurrent=0)
[   3350.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 601.0
               EndBluarLevel: 2.299999952316284
               EndDistance: 1.5
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.299999952316284
               StartDistance: 1.5
               StartFNumber: 100.0
[   3350.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#81, concurrent=0)
               duration: 601.0
               ASName: C13-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3350.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#100, concurrent=0)
               duration: 601.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C13-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3380.0] E VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
               duration: 563.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_LakeHrl_0020:Dm_LakeHrl_0020_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   3943.0] L VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
[   3951.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#28, concurrent=0)
[   3951.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#81, concurrent=0)
[   3951.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#100, concurrent=0)
[   3951.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 290.0
               EndBluarLevel: 1.7000000476837158
               EndDistance: 5.0
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.7000000476837158
               StartDistance: 5.0
               StartFNumber: 25.0
[   3951.0] E Player_Event[0] - EventPlayASForTimeline (#54, concurrent=0)
               duration: 290.0
               ASName: C14-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3951.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#69, concurrent=0)
               duration: 290.0
               ASName: C14-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3951.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#82, concurrent=0)
               duration: 290.0
               ASName: C14-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3951.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#101, concurrent=0)
               duration: 290.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C14-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4034.0] E VoicePlayActor[0] - EventStartVoice (#42, concurrent=0)
               duration: 186.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_LakeHrl_0020:Dm_LakeHrl_0020_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   4220.0] L VoicePlayActor[0] - EventStartVoice (#42, concurrent=0)
[   4220.0] E VoicePlayActor[0] - EventStartVoice (#43, concurrent=0)
               duration: 298.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_LakeHrl_0020:Dm_LakeHrl_0020_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   4241.0] L Land_LakeHrl_Ice_A_01 - EventDoNothing (#2, concurrent=0)
[   4241.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#29, concurrent=0)
[   4241.0] L Player_Event[0] - EventPlayASForTimeline (#54, concurrent=0)
[   4241.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#69, concurrent=0)
[   4241.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#82, concurrent=0)
[   4241.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#101, concurrent=0)
[   4241.0] E Land_LakeHrl_FieldProp_A_01[0] - EventDoNothing (#0, concurrent=0)
               duration: 350.0
               IsWaitEnd: true
[   4241.0] E Land_LakeHrl_Ice_A_01 - EventGoOffstageForUser (#3, concurrent=0)
               duration: 1990.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   4241.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 350.0
               EndBluarLevel: 3.0
               EndDistance: 16.0
               EndFNumber: 135.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 16.0
               StartFNumber: 135.0
[   4241.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#102, concurrent=0)
               duration: 350.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C15-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4518.0] L VoicePlayActor[0] - EventStartVoice (#43, concurrent=0)
[   4591.0] L Land_LakeHrl_FieldProp_A_01[0] - EventDoNothing (#0, concurrent=0)
[   4591.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#30, concurrent=0)
[   4591.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#102, concurrent=0)
[   4591.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 331.0
               EndBluarLevel: 1.0
               EndDistance: 16.0
               EndFNumber: 5.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 16.0
               StartFNumber: 5.5
[   4591.0] E Player_Event[0] - EventPlayASForTimeline (#55, concurrent=0)
               duration: 331.0
               ASName: C17-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4591.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#70, concurrent=0)
               duration: 331.0
               ASName: C17-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4591.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#83, concurrent=0)
               duration: 331.0
               ASName: C17-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4591.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#103, concurrent=0)
               duration: 331.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C17-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4592.0] E VoicePlayActor[0] - EventStartVoice (#44, concurrent=0)
               duration: 559.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_LakeHrl_0020:Dm_LakeHrl_0020_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   4922.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#31, concurrent=0)
[   4922.0] L Player_Event[0] - EventPlayASForTimeline (#55, concurrent=0)
[   4922.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#70, concurrent=0)
[   4922.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#83, concurrent=0)
[   4922.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#103, concurrent=0)
[   4922.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 306.0
               EndBluarLevel: 0.0
               EndDistance: 0.0
               EndFNumber: 0.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.0
               StartFNumber: 0.0
[   4922.0] E Player_Event[0] - EventPlayASForTimeline (#56, concurrent=0)
               duration: 306.0
               ASName: C18-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4922.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#71, concurrent=0)
               duration: 306.0
               ASName: C18-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4922.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#84, concurrent=0)
               duration: 306.0
               ASName: C18-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4922.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#104, concurrent=0)
               duration: 306.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C18-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4922.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#110, concurrent=0)
               duration: 306.0
               Near: 0.5
[   5151.0] L VoicePlayActor[0] - EventStartVoice (#44, concurrent=0)
[   5228.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#32, concurrent=0)
[   5228.0] L Player_Event[0] - EventPlayASForTimeline (#56, concurrent=0)
[   5228.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#71, concurrent=0)
[   5228.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#84, concurrent=0)
[   5228.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#104, concurrent=0)
[   5228.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#110, concurrent=0)
[   5228.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 221.0
               EndBluarLevel: 1.5
               EndDistance: 2.0
               EndFNumber: 65.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 2.0
               StartFNumber: 65.0
[   5228.0] E Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
               duration: 221.0
               ASName: C18-05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5228.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#72, concurrent=0)
               duration: 221.0
               ASName: C18-05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5228.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#85, concurrent=0)
               duration: 221.0
               ASName: C18-05-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5228.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#105, concurrent=0)
               duration: 221.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C18-05-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5228.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#111, concurrent=0)
               duration: 221.0
               Near: 0.5
[   5449.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#33, concurrent=0)
[   5449.0] L Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
[   5449.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#72, concurrent=0)
[   5449.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#85, concurrent=0)
[   5449.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#105, concurrent=0)
[   5449.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#111, concurrent=0)
[   5449.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 160.0
               EndBluarLevel: 1.5
               EndDistance: 1.399999976158142
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.399999976158142
               StartFNumber: 60.0
[   5449.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 160.0
               ASName: C19-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5449.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#106, concurrent=0)
               duration: 160.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C19-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5449.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#112, concurrent=0)
               duration: 160.0
               Near: 0.10000000149011612
[   5609.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#34, concurrent=0)
[   5609.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#86, concurrent=0)
[   5609.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#106, concurrent=0)
[   5609.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#112, concurrent=0)
[   5609.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#35, concurrent=0)
               duration: 241.0
               EndBluarLevel: 2.5
               EndDistance: 3.5999999046325684
               EndFNumber: 68.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 3.5999999046325684
               StartFNumber: 68.0
[   5609.0] E Player_Event[0] - EventPlayASForTimeline (#58, concurrent=0)
               duration: 241.0
               ASName: C20-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5609.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
               duration: 241.0
               ASName: C20-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5609.0] E Npc_Hylia_Sheik_Adult[0] - EventGoOffstageForUser (#87, concurrent=0)
               duration: 241.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   5609.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#107, concurrent=0)
               duration: 241.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C20-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5684.0] E VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
               duration: 81.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_LakeHrl_0020:Dm_LakeHrl_0020_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   5765.0] L VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
[   5765.0] E VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
               duration: 73.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_LakeHrl_0020:Dm_LakeHrl_0020_Text_009_b
               OffsetFrame: 30
               Speaker: Player_Event
[   5838.0] L VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
[   5850.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#35, concurrent=0)
[   5850.0] L Player_Event[0] - EventPlayASForTimeline (#58, concurrent=0)
[   5850.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
[   5850.0] L Npc_Hylia_Sheik_Adult[0] - EventGoOffstageForUser (#87, concurrent=0)
[   5850.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#107, concurrent=0)
[   5850.0] E PostProcessingActor[99] - EventSetDoFForTimeline (#36, concurrent=0)
               duration: 381.0
               EndBluarLevel: 1.0
               EndDistance: 65.0
               EndFNumber: 13.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 65.0
               StartFNumber: 13.0
[   5850.0] E Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
               duration: 381.0
               ASName: C21-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5850.0] E EventWorldManagerController[2] - Event_SetFoliageTurfParamForTimeline (#64, concurrent=0)
               duration: 381.0
               DisableFarShortening: true
               FarPow: 1.0
               IsWaitEnd: true
               LOD_Dist_LowTree0: 30.0
               LOD_Dist_LowTree1: 135.0
               LOD_Dist_Ornament: 35.0
               Len1Poly: 0.20000000298023224
               MaxDist_Ornament: 100.0
               ModifyLOD: false
               VanishEnd: 65.0
               VanishStart: 25.0
[   5850.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 381.0
               ASName: C21-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5850.0] E Npc_Hylia_Sheik_Adult[0] - EventGoOffstageForUser (#88, concurrent=0)
               duration: 381.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   5850.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#108, concurrent=0)
               duration: 381.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C21-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5876.0] E VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
               duration: 321.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_LakeHrl_0020:Dm_LakeHrl_0020_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   6171.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#49, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   6197.0] L VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
[   6230.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#62, concurrent=2)
               duration: 1.0
[   6231.0] L Dm_Locator[1] - EventDoNothing (#1, concurrent=0)
[   6231.0] L Land_LakeHrl_Ice_A_01 - EventGoOffstageForUser (#3, concurrent=0)
[   6231.0] L Obj_LakeHrl_Ice_A_01 - EventGoOffstageForUser (#5, concurrent=0)
[   6231.0] L Obj_LakeHrl_Ice_A_02[0] - EventGoOffstageForUser (#10, concurrent=0)
[   6231.0] L Dm_Land_LakeHrl_WaterPlane_A_01[0] - EventPlayASForTimeline (#16, concurrent=0)
[   6231.0] L PostProcessingActor[99] - EventSetDoFForTimeline (#36, concurrent=0)
[   6231.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#49, concurrent=0)
[   6231.0] L Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
[   6231.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#62, concurrent=2)
[   6231.0] L EventWorldManagerController[2] - Event_SetFoliageTurfParamForTimeline (#64, concurrent=0)
[   6231.0] L Npc_Navi - EventGoOffstageForUser (#65, concurrent=0)
[   6231.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
[   6231.0] L Npc_Hylia_Sheik_Adult[0] - EventGoOffstageForUser (#88, concurrent=0)
[   6231.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#108, concurrent=0)
