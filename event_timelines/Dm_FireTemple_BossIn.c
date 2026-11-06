-------- Event timeline: Dm_FireTemple_BossIn --------
actors: 10
clips: 61
oneshots: 0
cuts: 10
duration: 2831.0
subtimelines: ['Dm_FireTemple_BossIn_Effect', 'Dm_FireTemple_BossIn_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 201.0
x4: 0
params: (none)

Cut: C03
start time: 386.0
x4: 0
params: (none)

Cut: C04
start time: 546.0
x4: 0
params: (none)

Cut: C05
start time: 706.0
x4: 0
params: (none)

Cut: C06
start time: 916.0
x4: 0
params: (none)

Cut: C07
start time: 1056.0
x4: 0
params: (none)

Cut: C08
start time: 1281.0
x4: 0
params: (none)

Cut: C09
start time: 2171.0
x4: 0
params: (none)

Cut: C10
start time: 2521.0
x4: 0
params: (none)


===== Actors =====

Actor: Enemy_DungeonBoss_Volvagia
concurrent clips: 2
actions: ['EventGoOffstageForUser', 'EventPlayASForTimeline', 'EventDungeonBossSetConsiderBattlePresentation']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: true
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_FireTemple_BossIn_Enemy_DungeonBoss_Volvagia.root.as
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_BossIn/Dm_FireTemple_BossIn_Enemy_DungeonBoss_Volvagia/workspace.pp__ModelProject.gyml

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline', 'EventResetToInGameParametersDoF']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

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
UseEventModelAnime: 使用しない

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeInForTimeline', 'EventCloseMapMenu']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_FireTemple_SinkFloor_A_02[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_BossIn/Dm_FireTemple_BossIn_Obj_FireTemple_SinkFloor_A/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_BossIn/Dm_FireTemple_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_BossIn/Dm_FireTemple_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_BossIn/Dm_FireTemple_BossIn_Player_Adult/workspace.pp__ModelProject.gyml

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

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerSoundStartBossBgm']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E Enemy_DungeonBoss_Volvagia - EventGoOffstageForUser (#0, concurrent=0)
               duration: 706.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 201.0
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
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#18, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Obj_FireTemple_SinkFloor_A_02[0] - EventPlayASForTimeline (#21, concurrent=0)
               duration: 201.0
               ASName: C01-Obj_FireTemple_SinkFloor_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 201.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#34, concurrent=0)
               duration: 2522.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 201.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#42, concurrent=1)
               duration: 201.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#44, concurrent=2)
               duration: 201.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
               duration: 201.0
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
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#18, concurrent=0)
[    201.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[    201.0] L Obj_FireTemple_SinkFloor_A_02[0] - EventPlayASForTimeline (#21, concurrent=0)
[    201.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#24, concurrent=0)
[    201.0] L Player_Event[0] - EventPlayASForTimeline (#36, concurrent=0)
[    201.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#42, concurrent=1)
[    201.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#44, concurrent=2)
[    201.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
[    201.0] E Obj_FireTemple_SinkFloor_A_02[0] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 185.0
               ASName: C02-Obj_FireTemple_SinkFloor_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    201.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 185.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    201.0] E Player_Event[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 185.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    201.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
               duration: 185.0
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
[    386.0] L Obj_FireTemple_SinkFloor_A_02[0] - EventPlayASForTimeline (#22, concurrent=0)
[    386.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#25, concurrent=0)
[    386.0] L Player_Event[0] - EventPlayASForTimeline (#37, concurrent=0)
[    386.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
[    386.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 160.0
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
[    386.0] E Obj_FireTemple_SinkFloor_A_02[0] - EventPlayASForTimeline (#23, concurrent=0)
               duration: 160.0
               ASName: C03-Obj_FireTemple_SinkFloor_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    386.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 160.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    386.0] E Player_Event[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 160.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    386.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
               duration: 160.0
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
[    546.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[    546.0] L Obj_FireTemple_SinkFloor_A_02[0] - EventPlayASForTimeline (#23, concurrent=0)
[    546.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#26, concurrent=0)
[    546.0] L Player_Event[0] - EventPlayASForTimeline (#38, concurrent=0)
[    546.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
[    546.0] E Dm_Locator[0] - EventTriggerParticipateEvent (#15, concurrent=0)
               duration: 160.0
[    546.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 160.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    546.0] E Player_Event[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 160.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    546.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
               duration: 160.0
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
[    706.0] L Enemy_DungeonBoss_Volvagia - EventGoOffstageForUser (#0, concurrent=0)
[    706.0] L Dm_Locator[0] - EventTriggerParticipateEvent (#15, concurrent=0)
[    706.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#27, concurrent=0)
[    706.0] L Player_Event[0] - EventPlayASForTimeline (#39, concurrent=0)
[    706.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
[    706.0] E Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#1, concurrent=0)
               duration: 210.0
               ASName: AS-C05-Dm_FireTemple_BossIn_Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[    706.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 210.0
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
[    706.0] E Dm_Locator[0] - EventTriggerParticipateEvent (#16, concurrent=0)
               duration: 210.0
[    706.0] E Dm_Npc_Navi[0] - EventGoOffstageForUser (#28, concurrent=0)
               duration: 210.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[    706.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
               duration: 210.0
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
[    706.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
               duration: 210.0
               Near: 0.10000000149011612
[    916.0] L Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#1, concurrent=0)
[    916.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[    916.0] L Dm_Locator[0] - EventTriggerParticipateEvent (#16, concurrent=0)
[    916.0] L Dm_Npc_Navi[0] - EventGoOffstageForUser (#28, concurrent=0)
[    916.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
[    916.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
[    916.0] E Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#2, concurrent=0)
               duration: 140.0
               ASName: AS-C06-Dm_FireTemple_BossIn_Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[    916.0] E Dm_Npc_Navi[0] - EventGoOffstageForUser (#29, concurrent=0)
               duration: 140.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[    916.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
               duration: 140.0
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
[    916.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
               duration: 140.0
               Near: 0.10000002384185791
[   1056.0] L Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#2, concurrent=0)
[   1056.0] L Dm_Npc_Navi[0] - EventGoOffstageForUser (#29, concurrent=0)
[   1056.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
[   1056.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
[   1056.0] E Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#3, concurrent=0)
               duration: 225.0
               ASName: AS-C07-Dm_FireTemple_BossIn_Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[   1056.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 225.0
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
[   1056.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#30, concurrent=0)
               duration: 225.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1056.0] E Player_Event[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 225.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1056.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
               duration: 225.0
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
[   1281.0] L Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#3, concurrent=0)
[   1281.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   1281.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#30, concurrent=0)
[   1281.0] L Player_Event[0] - EventPlayASForTimeline (#40, concurrent=0)
[   1281.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
[   1281.0] E Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#4, concurrent=0)
               duration: 890.0
               ASName: AS-C08-Dm_FireTemple_BossIn_Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[   1281.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 890.0
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
[   1281.0] E Dm_Npc_Navi[0] - EventGoOffstageForUser (#31, concurrent=0)
               duration: 890.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1281.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
               duration: 890.0
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
[   1281.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
               duration: 890.0
               Near: 0.10000000149011612
[   1519.0] E Enemy_DungeonBoss_Volvagia - EventDungeonBossSetConsiderBattlePresentation (#7, concurrent=1)
               duration: 100.0
[   1519.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#19, concurrent=0)
               duration: 430.0
               DemoNicknamePos: 0
               DemoNicknameType: 1
               InAnimFrame: 110
               IsWaitEnd: false
               NameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Volvagia_Name
               NicknameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Volvagia_Nickname
               OutAnimFrame: 110
[   1550.0] E SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#60, concurrent=0)
               duration: 18.0
               BgmName: BGM_DungeonBoss_Volvagia
[   1568.0] L SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#60, concurrent=0)
[   1619.0] L Enemy_DungeonBoss_Volvagia - EventDungeonBossSetConsiderBattlePresentation (#7, concurrent=1)
[   1949.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#19, concurrent=0)
[   1949.0] E UISystemActor[0] - EventCloseMapMenu (#20, concurrent=0)
               duration: 100.0
               IsWaitClosed: true
               IsWaitEnd: true
[   2049.0] L UISystemActor[0] - EventCloseMapMenu (#20, concurrent=0)
[   2171.0] L Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#4, concurrent=0)
[   2171.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   2171.0] L Dm_Npc_Navi[0] - EventGoOffstageForUser (#31, concurrent=0)
[   2171.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
[   2171.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
[   2171.0] E Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#5, concurrent=0)
               duration: 350.0
               ASName: AS-C09-Dm_FireTemple_BossIn_Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[   2171.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 350.0
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
[   2171.0] E Dm_Npc_Navi[0] - EventGoOffstageForUser (#32, concurrent=0)
               duration: 351.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   2171.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
               duration: 350.0
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
[   2171.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#58, concurrent=1)
               duration: 350.0
               Near: 0.10000002384185791
[   2521.0] L Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#5, concurrent=0)
[   2521.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   2521.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
[   2521.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#58, concurrent=1)
[   2521.0] E Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#6, concurrent=0)
               duration: 310.0
               ASName: AS-C10-Dm_FireTemple_BossIn_Enemy_DungeonBoss_Volvagia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Main
[   2521.0] E PostProcessingActor[0] - EventResetToInGameParametersDoF (#14, concurrent=0)
               duration: 310.0
               IsWaitEnd: true
               TransitionFrame: 0
[   2521.0] E Dm_Locator[0] - EventTriggerParticipateEvent (#17, concurrent=0)
               duration: 310.0
[   2521.0] E Player_Event[0] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 310.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2521.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
               duration: 310.0
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
[   2521.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#59, concurrent=1)
               duration: 310.0
               Near: 0.10000002384185791
[   2522.0] L Dm_Npc_Navi[0] - EventGoOffstageForUser (#32, concurrent=0)
[   2522.0] L Npc_Navi[0] - EventGoOffstageForUser (#34, concurrent=0)
[   2522.0] E Dm_Npc_Navi[0] - EventGoOffstageForUser (#33, concurrent=0)
               duration: 310.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   2522.0] E Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 310.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2522.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#43, concurrent=1)
               duration: 309.0
[   2831.0] L Enemy_DungeonBoss_Volvagia - EventPlayASForTimeline (#6, concurrent=0)
[   2831.0] L PostProcessingActor[0] - EventResetToInGameParametersDoF (#14, concurrent=0)
[   2831.0] L Dm_Locator[0] - EventTriggerParticipateEvent (#17, concurrent=0)
[   2831.0] L Player_Event[0] - EventPlayASForTimeline (#41, concurrent=0)
[   2831.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#43, concurrent=1)
[   2831.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
[   2831.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#59, concurrent=1)
[   2832.0] L Dm_Npc_Navi[0] - EventGoOffstageForUser (#33, concurrent=0)
[   2832.0] L Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
