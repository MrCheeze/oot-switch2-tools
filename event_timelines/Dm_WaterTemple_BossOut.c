-------- Event timeline: Dm_WaterTemple_BossOut --------
actors: 12
clips: 49
oneshots: 0
cuts: 8
duration: 2591.0
subtimelines: ['Dm_WaterTemple_BossOut_Effect', 'Dm_WaterTemple_BossOut_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 304.0
x4: 0
params: (none)

Cut: cut03
start time: 669.0
x4: 0
params: (none)

Cut: cut04
start time: 1009.0
x4: 0
params: (none)

Cut: cut05
start time: 1124.0
x4: 0
params: (none)

Cut: cut06
start time: 1534.0
x4: 0
params: (none)

Cut: cut07
start time: 1630.0
x4: 0
params: (none)

Cut: cut08
start time: 1990.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Locator[1]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_WarpPoint_A_01[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -4.509343147277832
- 124.46199798583984
- -91.81143188476562
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

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Land_WaterTemple_WaterPlane_A_01[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_BossOut/Dm_WaterTemple_BossOut_Dm_Land_WaterTemple_WaterPlane_A/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Morpha[BossDefeat]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_BossOut/Dm_WaterTemple_BossOut_Enemy_DungeonBoss_Morpha/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_BossOut/Dm_WaterTemple_BossOut_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Obj_Heart_Container[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_BossOut/Dm_WaterTemple_BossOut_Obj_Heart_Container/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
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
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_BossOut/Dm_WaterTemple_BossOut_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_BossOut/Dm_WaterTemple_BossOut_Npc_Navi/workspace.pp__ModelProject.gyml

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


===== Timeline =====

[      0.0] E Dm_Locator[1] - EventDoNothing (#0, concurrent=0)
               duration: 2591.0
               IsWaitEnd: true
[      0.0] E Obj_WarpPoint_A_01[0] - EventGoOffstageForUser (#1, concurrent=0)
               duration: 1990.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#3, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 304.0
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
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
               duration: 304.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#21, concurrent=1)
               duration: 304.0
               Near: 0.10000000149011612
[      0.0] E Dm_Land_WaterTemple_WaterPlane_A_01[0] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 304.0
               ASName: C01-Dm_Land_WaterTemple_WaterPlane_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 304.0
               ASName: C01_00-Enemy_DungeonBoss_Morpha-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Obj_Heart_Container[0] - EventGoOffstageForUser (#41, concurrent=0)
               duration: 1810.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Player_Event[0] - EventGoOffstageForUser (#44, concurrent=0)
               duration: 1990.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventGoOffstageForUser (#46, concurrent=0)
               duration: 1990.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Npc_Navi - EventGoOffstageForUser (#48, concurrent=0)
               duration: 2591.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#3, concurrent=0)
[    304.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[    304.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
[    304.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#21, concurrent=1)
[    304.0] L Dm_Land_WaterTemple_WaterPlane_A_01[0] - EventPlayASForTimeline (#29, concurrent=0)
[    304.0] L Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#33, concurrent=0)
[    304.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 365.0
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
[    304.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
               duration: 365.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C02_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    304.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#22, concurrent=1)
               duration: 365.0
               Near: 0.10000000149011612
[    304.0] E Dm_Land_WaterTemple_WaterPlane_A_01[0] - EventPlayASForTimeline (#30, concurrent=0)
               duration: 365.0
               ASName: C02-Dm_Land_WaterTemple_WaterPlane_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    304.0] E Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 365.0
               ASName: C02_00-Enemy_DungeonBoss_Morpha-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    669.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[    669.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
[    669.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#22, concurrent=1)
[    669.0] L Dm_Land_WaterTemple_WaterPlane_A_01[0] - EventPlayASForTimeline (#30, concurrent=0)
[    669.0] L Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#34, concurrent=0)
[    669.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 340.0
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
[    669.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
               duration: 340.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    669.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#23, concurrent=1)
               duration: 340.0
               Near: 0.10000000149011612
[    669.0] E Dm_Land_WaterTemple_WaterPlane_A_01[0] - EventPlayASForTimeline (#31, concurrent=0)
               duration: 340.0
               ASName: C03-Dm_Land_WaterTemple_WaterPlane_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    669.0] E Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 340.0
               ASName: C03_00-Enemy_DungeonBoss_Morpha-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1009.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   1009.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
[   1009.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#23, concurrent=1)
[   1009.0] L Dm_Land_WaterTemple_WaterPlane_A_01[0] - EventPlayASForTimeline (#31, concurrent=0)
[   1009.0] L Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#35, concurrent=0)
[   1009.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 115.0
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
[   1009.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
               duration: 115.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C04_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1009.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#24, concurrent=1)
               duration: 115.0
               Near: 0.10000000149011612
[   1009.0] E Dm_Land_WaterTemple_WaterPlane_A_01[0] - EventGoOffstageForUser (#32, concurrent=0)
               duration: 1582.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1009.0] E Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 115.0
               ASName: C04_00-Enemy_DungeonBoss_Morpha-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1124.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   1124.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
[   1124.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#24, concurrent=1)
[   1124.0] L Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#36, concurrent=0)
[   1124.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 410.0
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
[   1124.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
               duration: 410.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C05_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1124.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#25, concurrent=1)
               duration: 410.0
               Near: 0.10000000149011612
[   1124.0] E Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 277.0
               ASName: C05_00-Enemy_DungeonBoss_Morpha-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1401.0] L Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#37, concurrent=0)
[   1401.0] E Enemy_DungeonBoss_Morpha[BossDefeat] - EventGoOffstageForUser (#38, concurrent=0)
               duration: 1190.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1534.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   1534.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
[   1534.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#25, concurrent=1)
[   1534.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 96.0
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
[   1534.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
               duration: 96.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C06_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1534.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#26, concurrent=1)
               duration: 96.0
               Near: 0.10000000149011612
[   1630.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   1630.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
[   1630.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#26, concurrent=1)
[   1630.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 360.0
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
[   1630.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#19, concurrent=0)
               duration: 360.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C07_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1630.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#27, concurrent=1)
               duration: 360.0
               Near: 0.10000000149011612
[   1630.0] E Dm_Locator[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 360.0
               ASName: C07-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1810.0] L Obj_Heart_Container[0] - EventGoOffstageForUser (#41, concurrent=0)
[   1810.0] E Obj_Heart_Container[0] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 180.0
               ASName: C07_00-Obj_Heart_Container-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1990.0] L Obj_WarpPoint_A_01[0] - EventGoOffstageForUser (#1, concurrent=0)
[   1990.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   1990.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#19, concurrent=0)
[   1990.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#27, concurrent=1)
[   1990.0] L Dm_Locator[0] - EventPlayASForTimeline (#39, concurrent=0)
[   1990.0] L Obj_Heart_Container[0] - EventPlayASForTimeline (#42, concurrent=0)
[   1990.0] L Player_Event[0] - EventGoOffstageForUser (#44, concurrent=0)
[   1990.0] L Dm_Npc_Navi[0] - EventGoOffstageForUser (#46, concurrent=0)
[   1990.0] E Obj_WarpPoint_A_01[0] - EventTriggerParticipateEvent (#2, concurrent=0)
               duration: 601.0
[   1990.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 601.0
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
[   1990.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
               duration: 601.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C08_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1990.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#28, concurrent=1)
               duration: 601.0
               Near: 0.10000000149011612
[   1990.0] E Dm_Locator[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 601.0
               ASName: C08-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1990.0] E Obj_Heart_Container[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 601.0
               ASName: C08_00-Obj_Heart_Container-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1990.0] E Player_Event[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 601.0
               ASName: C08-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1990.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 601.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2531.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#4, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   2591.0] L Dm_Locator[1] - EventDoNothing (#0, concurrent=0)
[   2591.0] L Obj_WarpPoint_A_01[0] - EventTriggerParticipateEvent (#2, concurrent=0)
[   2591.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#4, concurrent=0)
[   2591.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   2591.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
[   2591.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#28, concurrent=1)
[   2591.0] L Dm_Land_WaterTemple_WaterPlane_A_01[0] - EventGoOffstageForUser (#32, concurrent=0)
[   2591.0] L Enemy_DungeonBoss_Morpha[BossDefeat] - EventGoOffstageForUser (#38, concurrent=0)
[   2591.0] L Dm_Locator[0] - EventPlayASForTimeline (#40, concurrent=0)
[   2591.0] L Obj_Heart_Container[0] - EventPlayASForTimeline (#43, concurrent=0)
[   2591.0] L Player_Event[0] - EventPlayASForTimeline (#45, concurrent=0)
[   2591.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#47, concurrent=0)
[   2591.0] L Npc_Navi - EventGoOffstageForUser (#48, concurrent=0)
