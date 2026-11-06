-------- Event timeline: Dm_DodongoCave_BossOut --------
actors: 14
clips: 40
oneshots: 0
cuts: 6
duration: 3080.0
subtimelines: ['Dm_DodongoCave_BossOut_Effect', 'Dm_DodongoCave_BossOut_Env']
params: (none)

===== Cuts =====

Cut: C0010
start time: 0.0
x4: 0
params: (none)

Cut: C0020
start time: 300.0
x4: 0
params: (none)

Cut: C0030
start time: 630.0
x4: 0
params: (none)

Cut: C0040
start time: 820.0
x4: 0
params: (none)

Cut: C0050
start time: 1080.0
x4: 0
params: (none)

Cut: C0060
start time: 2310.0
x4: 0
params: (none)


===== Actors =====

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

Actor: GameSystemActor[0]
concurrent clips: 1
actions: ['EventDemoProductSupportComment']
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
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossOut/Dm_DodongoCave_BossOut/workspace.pp__ModelProject.gyml

Actor: Land_DodongoCave_22_Floor_A_01[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 23.999990463256836
- 73.23999786376953
- -63.0
Rotation:
- -180.0
- 0.0
- -180.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_DodongoCave_LavaDirty_A_03
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventDoNothing']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 23.999990463256836
- 73.23999786376953
- -63.0
Rotation:
- -180.0
- 0.0
- -180.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_DodongoCave_LavaDirty_A_02[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 23.999990463256836
- 73.23999786376953
- -63.0
Rotation:
- -180.0
- 0.0
- -180.0
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
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossOut/Dm_DodongoCave_BossOut_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossOut/Dm_DodongoCave_BossOut_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Dodongo
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossOut/Dm_DodongoCave_BossOut_Enemy_DungeonBoss_Dodongo/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily']
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
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossOut/Dm_DodongoCave_BossOut_Player_Child/workspace.pp__ModelProject.gyml

Actor: Obj_Heart_Container[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossOut/Dm_DodongoCave_BossOut_Obj_Heart_Container/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossOut/Dm_DodongoCave_BossOut_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Obj_WarpPoint_A_01[0]
concurrent clips: 1
actions: ['EventTriggerParticipateEvent']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 300.0
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
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#10, concurrent=0)
               duration: 300.0
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
[      0.0] E Land_DodongoCave_22_Floor_A_01[0] - EventGoOffstageForUser (#18, concurrent=0)
               duration: 2310.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Obj_DodongoCave_LavaDirty_A_03 - EventDoNothing (#20, concurrent=0)
               duration: 910.0
               IsWaitEnd: true
[      0.0] E Obj_DodongoCave_LavaDirty_A_02[0] - EventDoNothing (#22, concurrent=0)
               duration: 2310.0
               IsWaitEnd: true
[      0.0] E Npc_Navi - EventGoOffstageForUser (#24, concurrent=0)
               duration: 3080.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#27, concurrent=0)
               duration: 300.0
               ASName: C01-Enemy_DungeonBoss_Dodongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#35, concurrent=1)
               duration: 300.0
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    300.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    300.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#10, concurrent=0)
[    300.0] L Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#27, concurrent=0)
[    300.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#35, concurrent=1)
[    300.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 330.0
               EndBluarLevel: 2.0
               EndDistance: 5.0
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.0
               StartFNumber: 50.0
[    300.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#11, concurrent=0)
               duration: 330.0
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
[    300.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 330.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    300.0] E Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#28, concurrent=0)
               duration: 330.0
               ASName: C02-Enemy_DungeonBoss_Dodongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    300.0] E Player_Event[0] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 330.0
               ASName: C02-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    630.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    630.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#11, concurrent=0)
[    630.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#25, concurrent=0)
[    630.0] L Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#28, concurrent=0)
[    630.0] L Player_Event[0] - EventPlayASForTimeline (#33, concurrent=0)
[    630.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 190.0
               EndBluarLevel: 1.0
               EndDistance: 5.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.0
               StartFNumber: 50.0
[    630.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#12, concurrent=0)
               duration: 190.0
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
[    630.0] E Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#29, concurrent=0)
               duration: 190.0
               ASName: C03-Enemy_DungeonBoss_Dodongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    820.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    820.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#12, concurrent=0)
[    820.0] L Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#29, concurrent=0)
[    820.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 260.0
               EndBluarLevel: 3.0
               EndDistance: 4.0
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 5.0
               StartFNumber: 30.0
[    820.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
               duration: 260.0
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
[    820.0] E Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#30, concurrent=0)
               duration: 260.0
               ASName: C04-Enemy_DungeonBoss_Dodongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    910.0] L Obj_DodongoCave_LavaDirty_A_03 - EventDoNothing (#20, concurrent=0)
[    910.0] E Obj_DodongoCave_LavaDirty_A_03 - EventGoOffstageForUser (#21, concurrent=0)
               duration: 2152.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1080.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   1080.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
[   1080.0] L Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#30, concurrent=0)
[   1080.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 1230.0
               EndBluarLevel: 3.0
               EndDistance: 10.0
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 5.0
               StartFNumber: 25.0
[   1080.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
               duration: 1230.0
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
[   1080.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#16, concurrent=1)
               duration: 1230.0
               Near: 0.30000001192092896
[   1080.0] E Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#31, concurrent=0)
               duration: 1230.0
               ASName: C05-Enemy_DungeonBoss_Dodongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2310.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   2310.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
[   2310.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#16, concurrent=1)
[   2310.0] L Land_DodongoCave_22_Floor_A_01[0] - EventGoOffstageForUser (#18, concurrent=0)
[   2310.0] L Obj_DodongoCave_LavaDirty_A_02[0] - EventDoNothing (#22, concurrent=0)
[   2310.0] L Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#31, concurrent=0)
[   2310.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 249.0
               EndBluarLevel: 0.20000000298023224
               EndDistance: 5.0
               EndFNumber: 1.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.20000000298023224
               StartDistance: 5.0
               StartFNumber: 1.0
[   2310.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
               duration: 770.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C06-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2310.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#17, concurrent=1)
               duration: 770.0
               Near: 0.10000000149011612
[   2310.0] E Land_DodongoCave_22_Floor_A_01[0] - EventDoNothing (#19, concurrent=0)
               duration: 770.0
               IsWaitEnd: true
[   2310.0] E Obj_DodongoCave_LavaDirty_A_02[0] - EventGoOffstageForUser (#23, concurrent=0)
               duration: 770.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   2310.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 770.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2310.0] E Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#32, concurrent=0)
               duration: 770.0
               ASName: C06-Enemy_DungeonBoss_Dodongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2310.0] E Player_Event[0] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 770.0
               ASName: C06-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2310.0] E Obj_Heart_Container[0] - EventGoOffstageForUser (#36, concurrent=0)
               duration: 120.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   2310.0] E Dm_Locator[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 770.0
               ASName: C06-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2430.0] L Obj_Heart_Container[0] - EventGoOffstageForUser (#36, concurrent=0)
[   2430.0] E Obj_Heart_Container[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 650.0
               ASName: C06-Obj_Heart_Container-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2559.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   2559.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 253.0
               EndBluarLevel: 0.800000011920929
               EndDistance: 4.0
               EndFNumber: 11.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.20000000298023224
               StartDistance: 5.0
               StartFNumber: 1.0
[   2812.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   2812.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 268.0
               EndBluarLevel: 0.800000011920929
               EndDistance: 4.0
               EndFNumber: 11.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.800000011920929
               StartDistance: 4.0
               StartFNumber: 11.0
[   2880.0] E Obj_WarpPoint_A_01[0] - EventTriggerParticipateEvent (#39, concurrent=0)
               duration: 200.0
[   3020.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   3062.0] L Obj_DodongoCave_LavaDirty_A_03 - EventGoOffstageForUser (#21, concurrent=0)
[   3080.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[   3080.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   3080.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
[   3080.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#17, concurrent=1)
[   3080.0] L Land_DodongoCave_22_Floor_A_01[0] - EventDoNothing (#19, concurrent=0)
[   3080.0] L Obj_DodongoCave_LavaDirty_A_02[0] - EventGoOffstageForUser (#23, concurrent=0)
[   3080.0] L Npc_Navi - EventGoOffstageForUser (#24, concurrent=0)
[   3080.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#26, concurrent=0)
[   3080.0] L Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#32, concurrent=0)
[   3080.0] L Player_Event[0] - EventPlayASForTimeline (#34, concurrent=0)
[   3080.0] L Obj_Heart_Container[0] - EventPlayASForTimeline (#37, concurrent=0)
[   3080.0] L Dm_Locator[0] - EventPlayASForTimeline (#38, concurrent=0)
[   3080.0] L Obj_WarpPoint_A_01[0] - EventTriggerParticipateEvent (#39, concurrent=0)
