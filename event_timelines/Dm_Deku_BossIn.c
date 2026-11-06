-------- Event timeline: Dm_Deku_BossIn --------
actors: 7
clips: 18
oneshots: 0
cuts: 3
duration: 1144.0
subtimelines: ['Dm_Deku_BossIn_Effect', 'Dm_Deku_BossIn_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 203.0
x4: 0
params: (none)

Cut: cut03
start time: 342.0
x4: 0
params: (none)


===== Actors =====

Actor: Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Deku_BossIn/Dm_Deku_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

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
actions: ['EventShowDemoNicknameUIForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Enemy_DungeonBoss_Gohma
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventDungeonBossSetConsiderBattlePresentation']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Deku_BossIn/Dm_Deku_BossIn_Enemy_DungeonBoss_Gohma/workspace.pp__ModelProject.gyml

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
UseEventAS: ''
UseEventModelAnime: Work/Model/Event/Dm_Deku_BossIn/Dm_Deku_BossIn_Player_Child/workspace.pp__ModelProject.gyml

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerSoundStartBossBgm']
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


===== Timeline =====

[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
               duration: 203.0
               EndBluarLevel: 2.869999885559082
               EndDistance: 1.7000000476837158
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.869999885559082
               StartDistance: 1.7000000476837158
               StartFNumber: 20.0
[      0.0] E Enemy_DungeonBoss_Gohma - EventPlayASForTimeline (#6, concurrent=0)
               duration: 203.0
               ASName: C01-Enemy_DungeonBoss_Gohma-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
               duration: 203.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: false
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    203.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
[    203.0] L Enemy_DungeonBoss_Gohma - EventPlayASForTimeline (#6, concurrent=0)
[    203.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
[    203.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 93.0
               EndBluarLevel: 2.869999885559082
               EndDistance: 6.300000190734863
               EndFNumber: 20.100000381469727
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.869999885559082
               StartDistance: 6.300000190734863
               StartFNumber: 20.100000381469727
[    203.0] E Enemy_DungeonBoss_Gohma - EventPlayASForTimeline (#7, concurrent=0)
               duration: 139.0
               ASName: C02-Enemy_DungeonBoss_Gohma-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    203.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
               duration: 139.0
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
[    203.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#16, concurrent=1)
               duration: 139.0
               Near: 0.10000000149011612
[    296.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    296.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 46.0
               EndBluarLevel: 2.869999885559082
               EndDistance: 1.5
               EndFNumber: 14.600000381469727
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.869999885559082
               StartDistance: 6.300000190734863
               StartFNumber: 14.600000381469727
[    342.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    342.0] L Enemy_DungeonBoss_Gohma - EventPlayASForTimeline (#7, concurrent=0)
[    342.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
[    342.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#16, concurrent=1)
[    342.0] E Npc_Navi[0] - EventPlayASForTimeline (#0, concurrent=0)
               duration: 802.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    342.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 802.0
               EndBluarLevel: 0.0
               EndDistance: 1.5
               EndFNumber: 14.600000381469727
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 6.300000190734863
               StartFNumber: 14.600000381469727
[    342.0] E Enemy_DungeonBoss_Gohma - EventPlayASForTimeline (#8, concurrent=0)
               duration: 802.0
               ASName: C03-Enemy_DungeonBoss_Gohma-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    342.0] E Player_Event - EventPlayASForTimeline (#10, concurrent=0)
               duration: 802.0
               ASName: C03-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    342.0] E Player_Event - EventTriggerChemicalRequestDryTemporarily (#11, concurrent=1)
               duration: 100.0
[    342.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
               duration: 802.0
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
[    342.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#17, concurrent=1)
               duration: 802.0
               Near: 0.10000000149011612
[    442.0] L Player_Event - EventTriggerChemicalRequestDryTemporarily (#11, concurrent=1)
[    724.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#5, concurrent=0)
               duration: 430.0
               DemoNicknamePos: 0
               DemoNicknameType: 1
               InAnimFrame: 110
               IsWaitEnd: true
               NameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Gohma_Name
               NicknameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Gohma_Nickname
               OutAnimFrame: 110
[    724.0] E Enemy_DungeonBoss_Gohma - EventDungeonBossSetConsiderBattlePresentation (#9, concurrent=1)
               duration: 16.0
[    724.0] E SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#12, concurrent=0)
               duration: 16.0
               BgmName: BGM_DungeonBoss
[    740.0] L Enemy_DungeonBoss_Gohma - EventDungeonBossSetConsiderBattlePresentation (#9, concurrent=1)
[    740.0] L SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#12, concurrent=0)
[   1144.0] L Npc_Navi[0] - EventPlayASForTimeline (#0, concurrent=0)
[   1144.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   1144.0] L Enemy_DungeonBoss_Gohma - EventPlayASForTimeline (#8, concurrent=0)
[   1144.0] L Player_Event - EventPlayASForTimeline (#10, concurrent=0)
[   1144.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
[   1144.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#17, concurrent=1)
[   1154.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#5, concurrent=0)
