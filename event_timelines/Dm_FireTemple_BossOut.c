-------- Event timeline: Dm_FireTemple_BossOut --------
actors: 14
clips: 74
oneshots: 0
cuts: 9
duration: 3235.0
subtimelines: ['Dm_FireTemple_BossOut_Effect', 'Dm_FireTemple_BossOut_Env']
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 385.0
x4: 0
params: (none)

Cut: cut03
start time: 1020.0
x4: 0
params: (none)

Cut: cut04
start time: 1380.0
x4: 0
params: (none)

Cut: cut05
start time: 1480.0
x4: 0
params: (none)

Cut: cut06
start time: 1677.0
x4: 0
params: (none)

Cut: cut07
start time: 2050.0
x4: 0
params: (none)

Cut: cut08
start time: 2250.0
x4: 0
params: (none)

Cut: cut09
start time: 2635.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Enemy_DungeonBoss_Volvagia
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: ''
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_BossOut/Dm_FireTemple_BossOut_Enemy_DungeonBoss_Volvagia/workspace.pp__ModelProject.gyml

Actor: Land_FireTemple_26_Floor_A_02
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -80.25
- 102.5
- 0.0
Rotation:
- 0.0
- 45.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Land_FireTemple_26_LavaFloor_A_01[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventDoNothing']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -80.25
- 102.02999877929688
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_FireTemple_LavaDirty_A_02
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -80.25
- 102.02999877929688
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[1]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: ''
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_BossOut/Dm_FireTemple_BossOut_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventTriggerParticipateEvent']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -80.25
- 102.02999877929688
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_BossOut/Dm_FireTemple_BossOut_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeOutForTimeline', 'EventEventFadeInForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_WarpPoint_A_01[0]
concurrent clips: 1
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -80.25
- 102.02999877929688
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_Heart_Container[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_BossOut/Dm_FireTemple_BossOut_Obj_Heart_Container/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_BossOut/Dm_FireTemple_BossOut_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Navi[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
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
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_BossOut/Dm_FireTemple_BossOut_Player_Adult/workspace.pp__ModelProject.gyml

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


===== Timeline =====

[      0.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#0, concurrent=0)
               duration: 385.0
               ASName: AS-C01-Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[      0.0] E Land_FireTemple_26_Floor_A_02 - EventPlayASForTimeline (#17, concurrent=0)
               duration: 1020.0
               ASName: 'On'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Land_FireTemple_26_LavaFloor_A_01[0] - EventGoOffstageForUser (#19, concurrent=0)
               duration: 1020.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Obj_FireTemple_LavaDirty_A_02 - EventDoNothing (#21, concurrent=0)
               duration: 1020.0
               IsWaitEnd: true
[      0.0] E Dm_Locator[0] - EventTriggerParticipateEvent (#25, concurrent=0)
               duration: 385.0
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
               duration: 110.0
               EndBluarLevel: 1.5
               EndDistance: 20.0
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 20.0
               StartFNumber: 5.0
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#42, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#54, concurrent=0)
               duration: 3235.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#61, concurrent=1)
               duration: 100.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#62, concurrent=2)
               duration: 100.0
               BootsType: 0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
               duration: 385.0
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
[      1.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#9, concurrent=1)
               duration: 384.0
               ASName: AS-C01-Enemy_DungeonBoss_Volvagia-A-0_Material
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: BoneVisible
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#42, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#61, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#62, concurrent=2)
[    110.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
[    110.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 50.0
               EndBluarLevel: 1.5
               EndDistance: 5.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 20.0
               StartFNumber: 5.0
[    160.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
[    160.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 140.0
               EndBluarLevel: 1.5
               EndDistance: 5.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 5.0
               StartFNumber: 15.0
[    300.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
[    300.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 60.0
               EndBluarLevel: 1.5
               EndDistance: 20.0
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 5.0
               StartFNumber: 15.0
[    360.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
[    360.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 25.0
               EndBluarLevel: 1.5
               EndDistance: 20.0
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 20.0
               StartFNumber: 5.0
[    385.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#0, concurrent=0)
[    385.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#9, concurrent=1)
[    385.0] L Dm_Locator[0] - EventTriggerParticipateEvent (#25, concurrent=0)
[    385.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
[    385.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
[    385.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#1, concurrent=0)
               duration: 635.0
               ASName: AS-C02-Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[    385.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#10, concurrent=1)
               duration: 635.0
               ASName: AS-C02-Enemy_DungeonBoss_Volvagia-A-0_Material
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: BoneVisible
[    385.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 635.0
               EndBluarLevel: 1.5
               EndDistance: 20.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 20.0
               StartFNumber: 20.0
[    385.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 635.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    385.0] E Player_Event[0] - EventPlayASForTimeline (#55, concurrent=0)
               duration: 635.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    385.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
               duration: 635.0
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
[   1020.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#1, concurrent=0)
[   1020.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#10, concurrent=1)
[   1020.0] L Land_FireTemple_26_Floor_A_02 - EventPlayASForTimeline (#17, concurrent=0)
[   1020.0] L Land_FireTemple_26_LavaFloor_A_01[0] - EventGoOffstageForUser (#19, concurrent=0)
[   1020.0] L Obj_FireTemple_LavaDirty_A_02 - EventDoNothing (#21, concurrent=0)
[   1020.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
[   1020.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#48, concurrent=0)
[   1020.0] L Player_Event[0] - EventPlayASForTimeline (#55, concurrent=0)
[   1020.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
[   1020.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#2, concurrent=0)
               duration: 360.0
               ASName: AS-C03-Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[   1020.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#11, concurrent=1)
               duration: 360.0
               ASName: AS-C03-Enemy_DungeonBoss_Volvagia-A-0_Material
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: BoneVisible
[   1020.0] E Land_FireTemple_26_Floor_A_02 - EventPlayASForTimeline (#18, concurrent=0)
               duration: 2215.0
               ASName: 'Off'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1020.0] E Land_FireTemple_26_LavaFloor_A_01[0] - EventDoNothing (#20, concurrent=0)
               duration: 2215.0
               IsWaitEnd: true
[   1020.0] E Obj_FireTemple_LavaDirty_A_02 - EventGoOffstageForUser (#22, concurrent=0)
               duration: 2215.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1020.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 360.0
               EndBluarLevel: 2.5
               EndDistance: 15.0
               EndFNumber: 35.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 15.0
               StartFNumber: 35.0
[   1020.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#66, concurrent=0)
               duration: 360.0
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
[   1380.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#2, concurrent=0)
[   1380.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#11, concurrent=1)
[   1380.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
[   1380.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#66, concurrent=0)
[   1380.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#3, concurrent=0)
               duration: 100.0
               ASName: AS-C04-Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[   1380.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#12, concurrent=1)
               duration: 100.0
               ASName: AS-C04-Enemy_DungeonBoss_Volvagia-A-0_Material
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: BoneVisible
[   1380.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 7.0
               EndBluarLevel: 3.0
               EndDistance: 2.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 2.0
               StartFNumber: 15.0
[   1380.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 100.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1380.0] E Player_Event[0] - EventPlayASForTimeline (#56, concurrent=0)
               duration: 100.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1380.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#67, concurrent=0)
               duration: 100.0
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
[   1387.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
[   1387.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#35, concurrent=0)
               duration: 50.0
               EndBluarLevel: 3.0
               EndDistance: 3.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 2.0
               StartFNumber: 15.0
[   1437.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#35, concurrent=0)
[   1437.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#36, concurrent=0)
               duration: 43.0
               EndBluarLevel: 3.0
               EndDistance: 3.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 3.0
               StartFNumber: 15.0
[   1480.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#3, concurrent=0)
[   1480.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#12, concurrent=1)
[   1480.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#36, concurrent=0)
[   1480.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#49, concurrent=0)
[   1480.0] L Player_Event[0] - EventPlayASForTimeline (#56, concurrent=0)
[   1480.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#67, concurrent=0)
[   1480.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#4, concurrent=0)
               duration: 197.0
               ASName: AS-C05-Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[   1480.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#13, concurrent=1)
               duration: 197.0
               ASName: AS-C05-Enemy_DungeonBoss_Volvagia-A-0_Material
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: BoneVisible
[   1480.0] E Dm_Locator[0] - EventTriggerParticipateEvent (#26, concurrent=0)
               duration: 570.0
[   1480.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#37, concurrent=0)
               duration: 197.0
               EndBluarLevel: 1.5
               EndDistance: 10.0
               EndFNumber: 35.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 10.0
               StartFNumber: 35.0
[   1480.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 197.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1480.0] E Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
               duration: 197.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1480.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#68, concurrent=0)
               duration: 197.0
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
[   1677.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#4, concurrent=0)
[   1677.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#13, concurrent=1)
[   1677.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#37, concurrent=0)
[   1677.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#50, concurrent=0)
[   1677.0] L Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
[   1677.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#68, concurrent=0)
[   1677.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#5, concurrent=0)
               duration: 373.0
               ASName: AS-C06-Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[   1677.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#14, concurrent=1)
               duration: 373.0
               ASName: AS-C06-Enemy_DungeonBoss_Volvagia-A-0_Material
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: BoneVisible
[   1677.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#38, concurrent=0)
               duration: 373.0
               EndBluarLevel: 1.5
               EndDistance: 8.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 8.0
               StartFNumber: 20.0
[   1677.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#69, concurrent=0)
               duration: 373.0
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
[   2050.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#5, concurrent=0)
[   2050.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#14, concurrent=1)
[   2050.0] L Dm_Locator[0] - EventTriggerParticipateEvent (#26, concurrent=0)
[   2050.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#38, concurrent=0)
[   2050.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#69, concurrent=0)
[   2050.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#6, concurrent=0)
               duration: 200.0
               ASName: AS-C07-Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[   2050.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#15, concurrent=1)
               duration: 200.0
               ASName: AS-C07-Enemy_DungeonBoss_Volvagia-A-0_Material
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: BoneVisible
[   2050.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#39, concurrent=0)
               duration: 200.0
               EndBluarLevel: 4.5
               EndDistance: 9.0
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 4.5
               StartDistance: 9.0
               StartFNumber: 80.0
[   2050.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 200.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2050.0] E Player_Event[0] - EventPlayASForTimeline (#58, concurrent=0)
               duration: 200.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2050.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#70, concurrent=0)
               duration: 200.0
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
[   2250.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#6, concurrent=0)
[   2250.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#15, concurrent=1)
[   2250.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#39, concurrent=0)
[   2250.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#51, concurrent=0)
[   2250.0] L Player_Event[0] - EventPlayASForTimeline (#58, concurrent=0)
[   2250.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#70, concurrent=0)
[   2250.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#7, concurrent=0)
               duration: 40.0
               ASName: AS-C08-Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[   2250.0] E Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#16, concurrent=1)
               duration: 40.0
               ASName: AS-C08-Enemy_DungeonBoss_Volvagia-A-0_Material
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: BoneVisible
[   2250.0] E Dm_Locator[1] - EventPlayASForTimeline (#23, concurrent=0)
               duration: 385.0
               ASName: C08-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2250.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#40, concurrent=0)
               duration: 385.0
               EndBluarLevel: 1.5
               EndDistance: 5.0
               EndFNumber: 35.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 5.0
               StartFNumber: 35.0
[   2250.0] E Obj_WarpPoint_A_01[0] - EventGoOffstageForUser (#44, concurrent=0)
               duration: 385.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   2250.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 385.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2250.0] E Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
               duration: 385.0
               ASName: C08-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2250.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#71, concurrent=0)
               duration: 385.0
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
[   2250.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#73, concurrent=1)
               duration: 385.0
               Near: 0.10000000149011612
[   2290.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#7, concurrent=0)
[   2290.0] L Dm_Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#16, concurrent=1)
[   2290.0] E Dm_Enemy_DungeonBoss_Volvagia - EventGoOffstageForUser (#8, concurrent=0)
               duration: 345.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   2338.0] E Obj_Heart_Container[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 297.0
               ASName: C08-Obj_Heart_Container-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2635.0] L Dm_Enemy_DungeonBoss_Volvagia - EventGoOffstageForUser (#8, concurrent=0)
[   2635.0] L Dm_Locator[1] - EventPlayASForTimeline (#23, concurrent=0)
[   2635.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#40, concurrent=0)
[   2635.0] L Obj_WarpPoint_A_01[0] - EventGoOffstageForUser (#44, concurrent=0)
[   2635.0] L Obj_Heart_Container[0] - EventPlayASForTimeline (#46, concurrent=0)
[   2635.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#52, concurrent=0)
[   2635.0] L Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
[   2635.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#71, concurrent=0)
[   2635.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#73, concurrent=1)
[   2635.0] E Dm_Locator[1] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 600.0
               ASName: C09-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2635.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#41, concurrent=0)
               duration: 600.0
               EndBluarLevel: 1.5
               EndDistance: 10.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 10.0
               StartFNumber: 15.0
[   2635.0] E Obj_WarpPoint_A_01[0] - EventTriggerParticipateEvent (#45, concurrent=0)
               duration: 600.0
[   2635.0] E Obj_Heart_Container[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 600.0
               ASName: C09-Obj_Heart_Container-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2635.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 600.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2635.0] E Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
               duration: 600.0
               ASName: C09-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2635.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#72, concurrent=0)
               duration: 600.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C09-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3175.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#43, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   3234.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#63, concurrent=2)
               duration: 1.0
[   3235.0] L Land_FireTemple_26_Floor_A_02 - EventPlayASForTimeline (#18, concurrent=0)
[   3235.0] L Land_FireTemple_26_LavaFloor_A_01[0] - EventDoNothing (#20, concurrent=0)
[   3235.0] L Obj_FireTemple_LavaDirty_A_02 - EventGoOffstageForUser (#22, concurrent=0)
[   3235.0] L Dm_Locator[1] - EventPlayASForTimeline (#24, concurrent=0)
[   3235.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#41, concurrent=0)
[   3235.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#43, concurrent=0)
[   3235.0] L Obj_WarpPoint_A_01[0] - EventTriggerParticipateEvent (#45, concurrent=0)
[   3235.0] L Obj_Heart_Container[0] - EventPlayASForTimeline (#47, concurrent=0)
[   3235.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#53, concurrent=0)
[   3235.0] L Npc_Navi[0] - EventGoOffstageForUser (#54, concurrent=0)
[   3235.0] L Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
[   3235.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#63, concurrent=2)
[   3235.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#72, concurrent=0)
