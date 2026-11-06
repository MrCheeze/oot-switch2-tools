-------- Event timeline: Dm_Deku_BossOut --------
actors: 11
clips: 32
oneshots: 0
cuts: 6
duration: 2529.0
subtimelines: ['Dm_Deku_BossOut_Effect', 'Dm_Deku_BossOut_Env']
params: (none)

===== Cuts =====

Cut: C01_00
start time: 0.0
x4: 0
params: (none)

Cut: C02_00
start time: 150.0
x4: 0
params: (none)

Cut: C03_00
start time: 454.0
x4: 0
params: (none)

Cut: C03_60
start time: 767.0
x4: 0
params: (none)

Cut: C04_00
start time: 1544.0
x4: 0
params: (none)

Cut: C06_00
start time: 1929.0
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

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: ''

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

Actor: Dm_Npc_Navi
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Deku_BossOut/Dm_Deku_BossOut_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Player_Event
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
EventMemberCreateMethod: 2
ExceptionalBindType: 4
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Deku_BossOut/Dm_Deku_BossOut_Player_Child/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Gohma
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_Deku_BossOut.root.as
UseEventModelAnime: Work/Model/Event/Dm_Deku_BossOut/Dm_Deku_BossOut_Enemy_DungeonBoss_Gohma/workspace.pp__ModelProject.gyml

Actor: GameSystemActor[0]
concurrent clips: 1
actions: ['EventDemoProductSupportComment']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_Heart_Container[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Deku_BossOut/Dm_Deku_BossOut_Obj_Heart_Container/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[1]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: ''
UseEventModelAnime: Work/Model/Event/Dm_Deku_BossOut/Dm_Deku_BossOut_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Obj_WarpPoint_A_01[WarpPoint_InsideTheDekuTree_01]
concurrent clips: 1
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 21.026630401611328
- 47.0
- 67.59456634521484
Rotation:
- 0.0
- -110.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 1
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
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#2, concurrent=0)
               duration: 150.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#8, concurrent=1)
               duration: 150.0
               Near: 0.20000000298023224
[      0.0] E Npc_Navi - EventGoOffstageForUser (#13, concurrent=0)
               duration: 2529.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Player_Event - EventTriggerChemicalRequestDryTemporarily (#20, concurrent=1)
               duration: 100.0
[      0.0] E Enemy_DungeonBoss_Gohma - EventPlayASForTimeline (#21, concurrent=0)
               duration: 150.0
               ASName: AS-C01_00-Enemy_DungeonBoss_Gohma-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Locator[0] - EventDoNothing (#31, concurrent=0)
               duration: 2529.0
               IsWaitEnd: true
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    100.0] L Player_Event - EventTriggerChemicalRequestDryTemporarily (#20, concurrent=1)
[    150.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#2, concurrent=0)
[    150.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#8, concurrent=1)
[    150.0] L Enemy_DungeonBoss_Gohma - EventPlayASForTimeline (#21, concurrent=0)
[    150.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#3, concurrent=0)
               duration: 304.0
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
[    150.0] E Enemy_DungeonBoss_Gohma - EventPlayASForTimeline (#22, concurrent=0)
               duration: 304.0
               ASName: AS-C02_00-Enemy_DungeonBoss_Gohma-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    454.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#3, concurrent=0)
[    454.0] L Enemy_DungeonBoss_Gohma - EventPlayASForTimeline (#22, concurrent=0)
[    454.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#4, concurrent=0)
               duration: 313.0
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
[    454.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#9, concurrent=1)
               duration: 313.0
               Near: 0.10000000149011612
[    454.0] E Enemy_DungeonBoss_Gohma - EventPlayASForTimeline (#23, concurrent=0)
               duration: 313.0
               ASName: AS-C03_00-Enemy_DungeonBoss_Gohma-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    767.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#4, concurrent=0)
[    767.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#9, concurrent=1)
[    767.0] L Enemy_DungeonBoss_Gohma - EventPlayASForTimeline (#23, concurrent=0)
[    767.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#5, concurrent=0)
               duration: 777.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03_60-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    767.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#10, concurrent=1)
               duration: 777.0
               Near: 0.10000000149011612
[    767.0] E Dm_Npc_Navi - EventPlayASForTimeline (#14, concurrent=0)
               duration: 777.0
               ASName: C03_60-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    767.0] E Player_Event - EventPlayASForTimeline (#17, concurrent=0)
               duration: 777.0
               ASName: C03_60-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1544.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#5, concurrent=0)
[   1544.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#10, concurrent=1)
[   1544.0] L Dm_Npc_Navi - EventPlayASForTimeline (#14, concurrent=0)
[   1544.0] L Player_Event - EventPlayASForTimeline (#17, concurrent=0)
[   1544.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#6, concurrent=0)
               duration: 385.0
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
[   1544.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#11, concurrent=1)
               duration: 385.0
               Near: 0.10000000149011612
[   1544.0] E Dm_Npc_Navi - EventPlayASForTimeline (#15, concurrent=0)
               duration: 385.0
               ASName: C04_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1544.0] E Player_Event - EventPlayASForTimeline (#18, concurrent=0)
               duration: 385.0
               ASName: C04_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1544.0] E Obj_Heart_Container[0] - EventGoOffstageForUser (#24, concurrent=0)
               duration: 90.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1544.0] E Dm_Locator[1] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 385.0
               ASName: C04_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1544.0] E Obj_WarpPoint_A_01[WarpPoint_InsideTheDekuTree_01] - EventGoOffstageForUser (#29, concurrent=0)
               duration: 416.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1634.0] L Obj_Heart_Container[0] - EventGoOffstageForUser (#24, concurrent=0)
[   1634.0] E Obj_Heart_Container[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 295.0
               ASName: C04_00-Obj_Heart_Container-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1929.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#6, concurrent=0)
[   1929.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#11, concurrent=1)
[   1929.0] L Dm_Npc_Navi - EventPlayASForTimeline (#15, concurrent=0)
[   1929.0] L Player_Event - EventPlayASForTimeline (#18, concurrent=0)
[   1929.0] L Obj_Heart_Container[0] - EventPlayASForTimeline (#25, concurrent=0)
[   1929.0] L Dm_Locator[1] - EventPlayASForTimeline (#27, concurrent=0)
[   1929.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#7, concurrent=0)
               duration: 600.0
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
[   1929.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#12, concurrent=1)
               duration: 600.0
               Near: 0.10000000149011612
[   1929.0] E Dm_Npc_Navi - EventPlayASForTimeline (#16, concurrent=0)
               duration: 600.0
               ASName: C06_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1929.0] E Player_Event - EventPlayASForTimeline (#19, concurrent=0)
               duration: 600.0
               ASName: C06_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1929.0] E Obj_Heart_Container[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 600.0
               ASName: C06_00-Obj_Heart_Container-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1929.0] E Dm_Locator[1] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 600.0
               ASName: C06_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1960.0] L Obj_WarpPoint_A_01[WarpPoint_InsideTheDekuTree_01] - EventGoOffstageForUser (#29, concurrent=0)
[   1960.0] E Obj_WarpPoint_A_01[WarpPoint_InsideTheDekuTree_01] - EventTriggerParticipateEvent (#30, concurrent=0)
               duration: 569.0
[   2469.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   2529.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[   2529.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#7, concurrent=0)
[   2529.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#12, concurrent=1)
[   2529.0] L Npc_Navi - EventGoOffstageForUser (#13, concurrent=0)
[   2529.0] L Dm_Npc_Navi - EventPlayASForTimeline (#16, concurrent=0)
[   2529.0] L Player_Event - EventPlayASForTimeline (#19, concurrent=0)
[   2529.0] L Obj_Heart_Container[0] - EventPlayASForTimeline (#26, concurrent=0)
[   2529.0] L Dm_Locator[1] - EventPlayASForTimeline (#28, concurrent=0)
[   2529.0] L Obj_WarpPoint_A_01[WarpPoint_InsideTheDekuTree_01] - EventTriggerParticipateEvent (#30, concurrent=0)
[   2529.0] L Dm_Locator[0] - EventDoNothing (#31, concurrent=0)
