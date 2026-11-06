-------- Event timeline: Dm_InsideGanonCastle_BossIn --------
actors: 15
clips: 211
oneshots: 0
cuts: 31
duration: 9068.0
subtimelines: ['Dm_InsideGanonCastle_BossIn_Effect', 'Dm_InsideGanonCastle_BossIn_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 719.0
x4: 0
params: (none)

Cut: cut03
start time: 898.0
x4: 0
params: (none)

Cut: cut04
start time: 1077.0
x4: 0
params: (none)

Cut: cut05
start time: 1321.0
x4: 0
params: (none)

Cut: cut06
start time: 1675.0
x4: 0
params: (none)

Cut: cut07
start time: 1809.0
x4: 0
params: (none)

Cut: cut08
start time: 2064.0
x4: 0
params: (none)

Cut: cut09
start time: 2393.0
x4: 0
params: (none)

Cut: cut10
start time: 2627.0
x4: 0
params: (none)

Cut: cut11
start time: 2956.0
x4: 0
params: (none)

Cut: cut12
start time: 3091.0
x4: 0
params: (none)

Cut: cut13
start time: 3150.0
x4: 0
params: (none)

Cut: cut14
start time: 3209.0
x4: 0
params: (none)

Cut: cut15
start time: 3314.0
x4: 0
params: (none)

Cut: cut16
start time: 3783.0
x4: 0
params: (none)

Cut: cut17
start time: 4022.0
x4: 0
params: (none)

Cut: cut18
start time: 4201.0
x4: 0
params: (none)

Cut: cut19
start time: 4521.0
x4: 0
params: (none)

Cut: cut20
start time: 4715.0
x4: 0
params: (none)

Cut: cut21
start time: 5044.0
x4: 0
params: (none)

Cut: cut22
start time: 5394.0
x4: 0
params: (none)

Cut: cut23
start time: 5949.0
x4: 0
params: (none)

Cut: cut24
start time: 6613.0
x4: 0
params: (none)

Cut: cut25
start time: 6733.0
x4: 0
params: (none)

Cut: cut26
start time: 7362.0
x4: 0
params: (none)

Cut: cut27
start time: 7492.0
x4: 0
params: (none)

Cut: cut28
start time: 7690.0
x4: 0
params: (none)

Cut: cut29
start time: 7799.0
x4: 0
params: (none)

Cut: cut30
start time: 7989.0
x4: 0
params: (none)

Cut: cut31
start time: 8278.0
x4: 0
params: (none)


===== Actors =====

Actor: Enemy_DungeonBoss_Ganondorf
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventDungeonBossSetConsiderBattlePresentation']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 0.0
- 0.0
- 0.0
UseEventAS: Work/AS/Root/Event/Dm_InsideGanonCastle_BossIn_Npc_Gerudo_Ganondorf.root.as
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossIn/Dm_InsideGanonCastle_BossIn_Dm_Npc_Gerudo_Ganondorf/workspace.pp__ModelProject.gyml

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeInForTimeline', 'EventOpenHeartGaugeAndRecoverForTimeline']
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

Actor: VoicePlayActor[1]
concurrent clips: 1
actions: ['EventStartVoice']
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

Actor: Player_Event[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerPlayerRestoreBootsChange']
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
UseEventAS: Work/AS/Root/Event/Dm_InsideGanonCastle_BossIn_Player_Adult.root.as
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossIn/Dm_InsideGanonCastle_BossIn_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Zelda_Adult[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_InsideGanonCastle_BossIn_Npc_Hylia_WU_Zelda_Adult.root.as
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossIn/Dm_InsideGanonCastle_BossIn_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Navi[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventTriggerSetNaviAppear']
params: EventMemberCreateMethod: 0
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
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossIn/Dm_InsideGanonCastle_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerSoundStartBossBgm']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossIn/Dm_InsideGanonCastle_BossIn_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[Light]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossIn/Dm_InsideGanonCastle_BossIn_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Land_InsideGanonCastle_A_05[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossIn/Dm_InsideGanonCastle_BossIn_Dm_Land_InsideGanonCastle_A/workspace.pp__ModelProject.gyml

Actor: Land_InsideGanonCastle_Room26_A_06
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent']
params: EventMemberCreateMethod: 2
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
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossIn/Dm_InsideGanonCastle_BossIn/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#0, concurrent=0)
               duration: 719.0
               ASName: C01
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#23, concurrent=0)
               duration: 90.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#59, concurrent=0)
               duration: 719.0
               EndBluarLevel: 2.0
               EndDistance: 20.0
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 20.0
               StartFNumber: 80.0
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#99, concurrent=0)
               duration: 719.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#110, concurrent=1)
               duration: 100.0
               BootsType: 0
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#121, concurrent=0)
               duration: 8287.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#123, concurrent=0)
               duration: 719.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#139, concurrent=0)
               duration: 719.0
               ASName: C01-Dm_Land_InsideGanonCastle_A-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Land_InsideGanonCastle_Room26_A_06 - EventGoOffstageForUser (#151, concurrent=0)
               duration: 7989.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#153, concurrent=0)
               duration: 719.0
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
[      1.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#112, concurrent=0)
               duration: 718.0
               ASName: C01
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      1.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#184, concurrent=1)
               duration: 718.0
               Near: 0.10000000149011612
[     90.0] L UISystemActor[0] - EventEventFadeInForTimeline (#23, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#110, concurrent=1)
[    719.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#0, concurrent=0)
[    719.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#59, concurrent=0)
[    719.0] L Player_Event[0] - EventPlayASForTimeline (#99, concurrent=0)
[    719.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#112, concurrent=0)
[    719.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#123, concurrent=0)
[    719.0] L Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#139, concurrent=0)
[    719.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#153, concurrent=0)
[    719.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#184, concurrent=1)
[    719.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#60, concurrent=0)
               duration: 179.0
               EndBluarLevel: 3.0
               EndDistance: 1.850000023841858
               EndFNumber: 600.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.850000023841858
               StartFNumber: 600.0
[    719.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#113, concurrent=0)
               duration: 179.0
               ASName: C02
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    719.0] E Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#140, concurrent=0)
               duration: 358.0
               ASName: C02-Dm_Land_InsideGanonCastle_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    719.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#154, concurrent=0)
               duration: 179.0
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
[    719.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#185, concurrent=1)
               duration: 179.0
               Near: 0.10000000149011612
[    888.0] E VoicePlayActor[0] - EventStartVoice (#26, concurrent=0)
               duration: 146.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[    898.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#60, concurrent=0)
[    898.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#113, concurrent=0)
[    898.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#154, concurrent=0)
[    898.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#185, concurrent=1)
[    898.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#61, concurrent=0)
               duration: 179.0
               EndBluarLevel: 1.7999999523162842
               EndDistance: 1.5
               EndFNumber: 75.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.7999999523162842
               StartDistance: 1.5
               StartFNumber: 75.0
[    898.0] E Player_Event[0] - EventPlayASForTimeline (#100, concurrent=0)
               duration: 179.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    898.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#124, concurrent=0)
               duration: 179.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    898.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#155, concurrent=0)
               duration: 179.0
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
[    898.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#186, concurrent=1)
               duration: 179.0
               Near: 0.10000000149011612
[   1034.0] L VoicePlayActor[0] - EventStartVoice (#26, concurrent=0)
[   1077.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#61, concurrent=0)
[   1077.0] L Player_Event[0] - EventPlayASForTimeline (#100, concurrent=0)
[   1077.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#124, concurrent=0)
[   1077.0] L Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#140, concurrent=0)
[   1077.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#155, concurrent=0)
[   1077.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#186, concurrent=1)
[   1077.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#1, concurrent=0)
               duration: 244.0
               ASName: C04
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1077.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#62, concurrent=0)
               duration: 244.0
               EndBluarLevel: 0.0
               EndDistance: 11.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 11.0
               StartFNumber: 15.0
[   1077.0] E Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#141, concurrent=0)
               duration: 244.0
               ASName: C04-Dm_Land_InsideGanonCastle_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1077.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#156, concurrent=0)
               duration: 244.0
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
[   1077.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#187, concurrent=1)
               duration: 244.0
               Near: 0.10000000149011612
[   1321.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#1, concurrent=0)
[   1321.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#62, concurrent=0)
[   1321.0] L Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#141, concurrent=0)
[   1321.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#156, concurrent=0)
[   1321.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#187, concurrent=1)
[   1321.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#63, concurrent=0)
               duration: 354.0
               EndBluarLevel: 1.7999999523162842
               EndDistance: 1.4500000476837158
               EndFNumber: 275.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.7999999523162842
               StartDistance: 1.4500000476837158
               StartFNumber: 275.0
[   1321.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#114, concurrent=0)
               duration: 354.0
               ASName: C05
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1321.0] E Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#142, concurrent=0)
               duration: 1072.0
               ASName: C02-Dm_Land_InsideGanonCastle_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1321.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#157, concurrent=0)
               duration: 354.0
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
[   1321.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#188, concurrent=1)
               duration: 354.0
               Near: 0.10000000149011612
[   1351.0] E VoicePlayActor[0] - EventStartVoice (#27, concurrent=0)
               duration: 124.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1475.0] L VoicePlayActor[0] - EventStartVoice (#27, concurrent=0)
[   1506.0] E VoicePlayActor[0] - EventStartVoice (#28, concurrent=0)
               duration: 82.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1588.0] L VoicePlayActor[0] - EventStartVoice (#28, concurrent=0)
[   1675.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#63, concurrent=0)
[   1675.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#114, concurrent=0)
[   1675.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#157, concurrent=0)
[   1675.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#188, concurrent=1)
[   1675.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#64, concurrent=0)
               duration: 134.0
               EndBluarLevel: 0.0
               EndDistance: 1.7999999523162842
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.7999999523162842
               StartFNumber: 70.0
[   1675.0] E Player_Event[0] - EventPlayASForTimeline (#101, concurrent=0)
               duration: 134.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1675.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#125, concurrent=0)
               duration: 134.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1675.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#158, concurrent=0)
               duration: 134.0
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
[   1675.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#189, concurrent=1)
               duration: 134.0
               Near: 0.10000000149011612
[   1706.0] E VoicePlayActor[0] - EventStartVoice (#29, concurrent=0)
               duration: 62.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_005_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1768.0] L VoicePlayActor[0] - EventStartVoice (#29, concurrent=0)
[   1809.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#64, concurrent=0)
[   1809.0] L Player_Event[0] - EventPlayASForTimeline (#101, concurrent=0)
[   1809.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#125, concurrent=0)
[   1809.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#158, concurrent=0)
[   1809.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#189, concurrent=1)
[   1809.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#65, concurrent=0)
               duration: 255.0
               EndBluarLevel: 2.5
               EndDistance: 0.75
               EndFNumber: 240.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 0.75
               StartFNumber: 240.0
[   1809.0] E Player_Event[0] - EventPlayASForTimeline (#102, concurrent=0)
               duration: 255.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1809.0] E Dm_Locator[0] - EventPlayASForTimeline (#132, concurrent=0)
               duration: 255.0
               ASName: C07-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1809.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#159, concurrent=0)
               duration: 255.0
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
[   1809.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#190, concurrent=1)
               duration: 255.0
               Near: 0.10000000149011612
[   2053.0] E VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
               duration: 60.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_006_b
               OffsetFrame: 30
               Speaker: Player_Event
[   2064.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#65, concurrent=0)
[   2064.0] L Player_Event[0] - EventPlayASForTimeline (#102, concurrent=0)
[   2064.0] L Dm_Locator[0] - EventPlayASForTimeline (#132, concurrent=0)
[   2064.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#159, concurrent=0)
[   2064.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#190, concurrent=1)
[   2064.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#66, concurrent=0)
               duration: 329.0
               EndBluarLevel: 0.0
               EndDistance: 3.0
               EndFNumber: 45.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.0
               StartFNumber: 45.0
[   2064.0] E Player_Event[0] - EventPlayASForTimeline (#103, concurrent=0)
               duration: 329.0
               ASName: C08
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2064.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#126, concurrent=0)
               duration: 329.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2064.0] E Dm_Locator[0] - EventPlayASForTimeline (#133, concurrent=0)
               duration: 329.0
               ASName: C08-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2064.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#160, concurrent=0)
               duration: 329.0
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
[   2064.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#191, concurrent=1)
               duration: 329.0
               Near: 0.10000000149011612
[   2113.0] L VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
[   2143.0] E VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
               duration: 77.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_007_b
               OffsetFrame: 30
               Speaker: Player_Event
[   2162.0] E UISystemActor[0] - EventOpenHeartGaugeAndRecoverForTimeline (#24, concurrent=0)
               duration: 231.0
               IsWaitEnd: true
               StartRecoverFrame: 60.0
[   2220.0] L VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
[   2278.0] E VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
               duration: 57.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_006_c
               OffsetFrame: 30
               Speaker: Player_Event
[   2335.0] L VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
[   2393.0] L UISystemActor[0] - EventOpenHeartGaugeAndRecoverForTimeline (#24, concurrent=0)
[   2393.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#66, concurrent=0)
[   2393.0] L Player_Event[0] - EventPlayASForTimeline (#103, concurrent=0)
[   2393.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#126, concurrent=0)
[   2393.0] L Dm_Locator[0] - EventPlayASForTimeline (#133, concurrent=0)
[   2393.0] L Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#142, concurrent=0)
[   2393.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#160, concurrent=0)
[   2393.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#191, concurrent=1)
[   2393.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#2, concurrent=0)
               duration: 234.0
               ASName: C09
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2393.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#67, concurrent=0)
               duration: 234.0
               EndBluarLevel: 2.0
               EndDistance: 1.7000000476837158
               EndFNumber: 75.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.7000000476837158
               StartFNumber: 75.0
[   2393.0] E Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#143, concurrent=0)
               duration: 234.0
               ASName: C09-Dm_Land_InsideGanonCastle_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2393.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#161, concurrent=0)
               duration: 234.0
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
[   2393.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#192, concurrent=1)
               duration: 234.0
               Near: 0.10000000149011612
[   2627.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#2, concurrent=0)
[   2627.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#67, concurrent=0)
[   2627.0] L Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#143, concurrent=0)
[   2627.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#161, concurrent=0)
[   2627.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#192, concurrent=1)
[   2627.0] E VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
               duration: 150.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   2627.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#68, concurrent=0)
               duration: 329.0
               EndBluarLevel: 2.0
               EndDistance: 1.399999976158142
               EndFNumber: 200.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.399999976158142
               StartFNumber: 200.0
[   2627.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#115, concurrent=0)
               duration: 329.0
               ASName: C10
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2627.0] E Dm_Locator[0] - EventPlayASForTimeline (#134, concurrent=0)
               duration: 329.0
               ASName: C10-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2627.0] E Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#144, concurrent=0)
               duration: 329.0
               ASName: C01-Dm_Land_InsideGanonCastle_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2627.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#162, concurrent=0)
               duration: 329.0
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
[   2627.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#193, concurrent=1)
               duration: 329.0
               Near: 0.10000000149011612
[   2777.0] L VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
[   2807.0] E VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
               duration: 52.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   2859.0] L VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
[   2956.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#68, concurrent=0)
[   2956.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#115, concurrent=0)
[   2956.0] L Dm_Locator[0] - EventPlayASForTimeline (#134, concurrent=0)
[   2956.0] L Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#144, concurrent=0)
[   2956.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#162, concurrent=0)
[   2956.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#193, concurrent=1)
[   2956.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#3, concurrent=0)
               duration: 135.0
               ASName: C11
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2956.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#69, concurrent=0)
               duration: 135.0
               EndBluarLevel: 0.0
               EndDistance: 2.5999999046325684
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.5999999046325684
               StartFNumber: 50.0
[   2956.0] E Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#145, concurrent=0)
               duration: 135.0
               ASName: C11-Dm_Land_InsideGanonCastle_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2956.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#163, concurrent=0)
               duration: 135.0
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
[   2956.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#194, concurrent=1)
               duration: 135.0
               Near: 0.10000000149011612
[   3091.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#3, concurrent=0)
[   3091.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#69, concurrent=0)
[   3091.0] L Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#145, concurrent=0)
[   3091.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#163, concurrent=0)
[   3091.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#194, concurrent=1)
[   3091.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#4, concurrent=0)
               duration: 59.0
               ASName: C12
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3091.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#70, concurrent=0)
               duration: 59.0
               EndBluarLevel: 2.0
               EndDistance: 0.6499999761581421
               EndFNumber: 195.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.2000000476837158
               StartFNumber: 85.0
[   3091.0] E Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#146, concurrent=0)
               duration: 59.0
               ASName: C12-Dm_Land_InsideGanonCastle_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3091.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#164, concurrent=0)
               duration: 59.0
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
[   3091.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#195, concurrent=1)
               duration: 59.0
               Near: 0.10000000149011612
[   3150.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#4, concurrent=0)
[   3150.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#70, concurrent=0)
[   3150.0] L Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#146, concurrent=0)
[   3150.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#164, concurrent=0)
[   3150.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#195, concurrent=1)
[   3150.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#5, concurrent=0)
               duration: 59.0
               ASName: C13
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3150.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#71, concurrent=0)
               duration: 59.0
               EndBluarLevel: 2.0
               EndDistance: 0.3499999940395355
               EndFNumber: 1400.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.5
               StartFNumber: 1000.0
[   3150.0] E Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#147, concurrent=0)
               duration: 59.0
               ASName: C13-Dm_Land_InsideGanonCastle_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3150.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#165, concurrent=0)
               duration: 59.0
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
[   3150.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#196, concurrent=1)
               duration: 59.0
               Near: 0.10000000149011612
[   3209.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#5, concurrent=0)
[   3209.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#71, concurrent=0)
[   3209.0] L Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#147, concurrent=0)
[   3209.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#165, concurrent=0)
[   3209.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#196, concurrent=1)
[   3209.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#6, concurrent=0)
               duration: 105.0
               ASName: C13a
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3209.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#72, concurrent=0)
               duration: 105.0
               EndBluarLevel: 2.5
               EndDistance: 1.100000023841858
               EndFNumber: 130.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 1.100000023841858
               StartFNumber: 130.0
[   3209.0] E Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#148, concurrent=0)
               duration: 105.0
               ASName: C13a-Dm_Land_InsideGanonCastle_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3209.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#166, concurrent=0)
               duration: 105.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C13a-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3209.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#197, concurrent=1)
               duration: 105.0
               Near: 0.10000000149011612
[   3314.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#6, concurrent=0)
[   3314.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#72, concurrent=0)
[   3314.0] L Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#148, concurrent=0)
[   3314.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#166, concurrent=0)
[   3314.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#197, concurrent=1)
[   3314.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#7, concurrent=0)
               duration: 469.0
               ASName: C14
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3314.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#73, concurrent=0)
               duration: 469.0
               EndBluarLevel: 1.25
               EndDistance: 1.399999976158142
               EndFNumber: 105.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2519999742507935
               StartDistance: 1.399999976158142
               StartFNumber: 105.0
[   3314.0] E Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#149, concurrent=0)
               duration: 469.0
               ASName: C14-Dm_Land_InsideGanonCastle_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3314.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#167, concurrent=0)
               duration: 469.0
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
[   3314.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#198, concurrent=1)
               duration: 469.0
               Near: 0.10000000149011612
[   3783.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#7, concurrent=0)
[   3783.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#73, concurrent=0)
[   3783.0] L Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#149, concurrent=0)
[   3783.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#167, concurrent=0)
[   3783.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#198, concurrent=1)
[   3783.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#8, concurrent=0)
               duration: 239.0
               ASName: C15
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3783.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#74, concurrent=0)
               duration: 239.0
               EndBluarLevel: 1.0
               EndDistance: 11.0
               EndFNumber: 2.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 11.0
               StartFNumber: 2.0
[   3783.0] E Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#150, concurrent=0)
               duration: 4206.0
               ASName: C02-Dm_Land_InsideGanonCastle_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3783.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#168, concurrent=0)
               duration: 239.0
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
[   3783.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#199, concurrent=1)
               duration: 239.0
               Near: 0.10000000149011612
[   4022.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#8, concurrent=0)
[   4022.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#74, concurrent=0)
[   4022.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#168, concurrent=0)
[   4022.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#199, concurrent=1)
[   4022.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#9, concurrent=0)
               duration: 179.0
               ASName: C16
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4022.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#75, concurrent=0)
               duration: 179.0
               EndBluarLevel: 1.5
               EndDistance: 1.25
               EndFNumber: 110.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.25
               StartFNumber: 110.0
[   4022.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#169, concurrent=0)
               duration: 179.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C16-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4022.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#200, concurrent=1)
               duration: 179.0
               Near: 0.10000000149011612
[   4024.0] E VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
               duration: 128.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_010_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   4152.0] L VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
[   4201.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#9, concurrent=0)
[   4201.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#75, concurrent=0)
[   4201.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#169, concurrent=0)
[   4201.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#200, concurrent=1)
[   4201.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#10, concurrent=0)
               duration: 320.0
               ASName: C17
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4201.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#76, concurrent=0)
               duration: 320.0
               EndBluarLevel: 0.0
               EndDistance: 8.5
               EndFNumber: 9.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 8.5
               StartFNumber: 9.0
[   4201.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#170, concurrent=0)
               duration: 320.0
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
[   4201.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#201, concurrent=1)
               duration: 320.0
               Near: 0.10000000149011612
[   4206.0] E VoicePlayActor[0] - EventStartVoice (#36, concurrent=0)
               duration: 263.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_011_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   4469.0] L VoicePlayActor[0] - EventStartVoice (#36, concurrent=0)
[   4521.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#10, concurrent=0)
[   4521.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#76, concurrent=0)
[   4521.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#170, concurrent=0)
[   4521.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#201, concurrent=1)
[   4521.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#11, concurrent=0)
               duration: 194.0
               ASName: C17a
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4521.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#77, concurrent=0)
               duration: 194.0
               EndBluarLevel: 0.0
               EndDistance: 0.7200000286102295
               EndFNumber: 190.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.7200000286102295
               StartFNumber: 190.0
[   4521.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#171, concurrent=0)
               duration: 194.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C17a-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4521.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#202, concurrent=1)
               duration: 194.0
               Near: 0.10000000149011612
[   4531.0] E VoicePlayActor[0] - EventStartVoice (#37, concurrent=0)
               duration: 156.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_012_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   4687.0] L VoicePlayActor[0] - EventStartVoice (#37, concurrent=0)
[   4703.0] E VoicePlayActor[0] - EventStartVoice (#38, concurrent=0)
               duration: 296.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_013_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   4715.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#11, concurrent=0)
[   4715.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#77, concurrent=0)
[   4715.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#171, concurrent=0)
[   4715.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#202, concurrent=1)
[   4715.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#12, concurrent=0)
               duration: 329.0
               ASName: C18
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4715.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#78, concurrent=0)
               duration: 329.0
               EndBluarLevel: 0.0
               EndDistance: 1.7000000476837158
               EndFNumber: 31.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.7000000476837158
               StartFNumber: 31.0
[   4715.0] E Player_Event[0] - EventPlayASForTimeline (#104, concurrent=0)
               duration: 329.0
               ASName: C18-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4715.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#116, concurrent=0)
               duration: 329.0
               ASName: C18
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4715.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#127, concurrent=0)
               duration: 329.0
               ASName: C18-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4715.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#172, concurrent=0)
               duration: 329.0
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
[   4715.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#203, concurrent=1)
               duration: 329.0
               Near: 0.10000000149011612
[   4999.0] L VoicePlayActor[0] - EventStartVoice (#38, concurrent=0)
[   5029.0] E VoicePlayActor[0] - EventStartVoice (#39, concurrent=0)
               duration: 316.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_014_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   5044.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#12, concurrent=0)
[   5044.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#78, concurrent=0)
[   5044.0] L Player_Event[0] - EventPlayASForTimeline (#104, concurrent=0)
[   5044.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#116, concurrent=0)
[   5044.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#127, concurrent=0)
[   5044.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#172, concurrent=0)
[   5044.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#203, concurrent=1)
[   5044.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#13, concurrent=0)
               duration: 350.0
               ASName: C19
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5044.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#79, concurrent=0)
               duration: 164.0
               EndBluarLevel: 2.0
               EndDistance: 1.5
               EndFNumber: 125.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 1.0
               StartBluarLevel: 2.0
               StartDistance: 1.5
               StartFNumber: 125.0
[   5044.0] E Player_Event[0] - EventPlayASForTimeline (#105, concurrent=0)
               duration: 350.0
               ASName: C19-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5044.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#128, concurrent=0)
               duration: 350.0
               ASName: C19-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5044.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#173, concurrent=0)
               duration: 350.0
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
[   5044.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#204, concurrent=1)
               duration: 350.0
               Near: 0.10000000149011612
[   5208.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#79, concurrent=0)
[   5208.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#80, concurrent=0)
               duration: 35.0
               EndBluarLevel: 2.0
               EndDistance: 16.0
               EndFNumber: 14.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 1.0
               StartBluarLevel: 2.0
               StartDistance: 1.5
               StartFNumber: 125.0
[   5243.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#80, concurrent=0)
[   5243.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#81, concurrent=0)
               duration: 151.0
               EndBluarLevel: 2.0
               EndDistance: 16.0
               EndFNumber: 14.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 1.0
               StartBluarLevel: 2.0
               StartDistance: 16.0
               StartFNumber: 14.0
[   5345.0] L VoicePlayActor[0] - EventStartVoice (#39, concurrent=0)
[   5384.0] E VoicePlayActor[0] - EventStartVoice (#40, concurrent=0)
               duration: 149.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_015_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   5394.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#13, concurrent=0)
[   5394.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#81, concurrent=0)
[   5394.0] L Player_Event[0] - EventPlayASForTimeline (#105, concurrent=0)
[   5394.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#128, concurrent=0)
[   5394.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#173, concurrent=0)
[   5394.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#204, concurrent=1)
[   5394.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#14, concurrent=0)
               duration: 555.0
               ASName: C20
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5394.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#82, concurrent=0)
               duration: 555.0
               EndBluarLevel: 6.0
               EndDistance: 5.5
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 6.0
               StartDistance: 5.5
               StartFNumber: 80.0
[   5394.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#174, concurrent=0)
               duration: 555.0
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
[   5394.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#205, concurrent=1)
               duration: 555.0
               Near: 0.10000000149011612
[   5533.0] L VoicePlayActor[0] - EventStartVoice (#40, concurrent=0)
[   5541.0] E VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
               duration: 263.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_016_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   5804.0] L VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
[   5949.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#14, concurrent=0)
[   5949.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#82, concurrent=0)
[   5949.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#174, concurrent=0)
[   5949.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#205, concurrent=1)
[   5949.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#15, concurrent=0)
               duration: 664.0
               ASName: C21
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5949.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#83, concurrent=0)
               duration: 3.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 40.0
[   5949.0] E Dm_Locator[0] - EventPlayASForTimeline (#135, concurrent=0)
               duration: 664.0
               ASName: C21-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5949.0] E Dm_Locator[Light] - EventPlayASForTimeline (#138, concurrent=0)
               duration: 664.0
               ASName: C21-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: ''
[   5949.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#175, concurrent=0)
               duration: 664.0
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
[   5949.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#206, concurrent=1)
               duration: 664.0
               Near: 0.10000000149011612
[   5952.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#83, concurrent=0)
[   5952.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#84, concurrent=0)
               duration: 661.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 40.0
[   6004.0] E VoicePlayActor[0] - EventStartVoice (#42, concurrent=0)
               duration: 212.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_017_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   6216.0] L VoicePlayActor[0] - EventStartVoice (#42, concurrent=0)
[   6273.0] E VoicePlayActor[0] - EventStartVoice (#43, concurrent=0)
               duration: 137.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_018_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   6410.0] L VoicePlayActor[0] - EventStartVoice (#43, concurrent=0)
[   6543.0] E VoicePlayActor[0] - EventStartVoice (#44, concurrent=0)
               duration: 55.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_018_c
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   6598.0] L VoicePlayActor[0] - EventStartVoice (#44, concurrent=0)
[   6598.0] E VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
               duration: 61.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_019_b
               OffsetFrame: 30
               Speaker: Player_Event
[   6613.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#15, concurrent=0)
[   6613.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#84, concurrent=0)
[   6613.0] L Dm_Locator[0] - EventPlayASForTimeline (#135, concurrent=0)
[   6613.0] L Dm_Locator[Light] - EventPlayASForTimeline (#138, concurrent=0)
[   6613.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#175, concurrent=0)
[   6613.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#206, concurrent=1)
[   6613.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#16, concurrent=0)
               duration: 120.0
               ASName: C22
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6613.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#85, concurrent=0)
               duration: 120.0
               EndBluarLevel: 1.0
               EndDistance: 4.0
               EndFNumber: 200.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 4.0
               StartFNumber: 200.0
[   6613.0] E Player_Event[0] - EventPlayASForTimeline (#106, concurrent=0)
               duration: 120.0
               ASName: C22-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6613.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#129, concurrent=0)
               duration: 120.0
               ASName: C22-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6613.0] E Dm_Locator[0] - EventPlayASForTimeline (#136, concurrent=0)
               duration: 120.0
               ASName: C22-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6613.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#176, concurrent=0)
               duration: 120.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C22-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6613.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#207, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[   6659.0] L VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
[   6705.0] E VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
               duration: 134.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_020_c
               OffsetFrame: 30
               Speaker: Npc_Navi
[   6733.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#16, concurrent=0)
[   6733.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#85, concurrent=0)
[   6733.0] L Player_Event[0] - EventPlayASForTimeline (#106, concurrent=0)
[   6733.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#129, concurrent=0)
[   6733.0] L Dm_Locator[0] - EventPlayASForTimeline (#136, concurrent=0)
[   6733.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#176, concurrent=0)
[   6733.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#207, concurrent=1)
[   6733.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#86, concurrent=0)
               duration: 629.0
               EndBluarLevel: 3.0
               EndDistance: 1.2000000476837158
               EndFNumber: 300.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 1.0
               StartBluarLevel: 3.0
               StartDistance: 1.2000000476837158
               StartFNumber: 300.0
[   6733.0] E Player_Event[0] - EventPlayASForTimeline (#107, concurrent=0)
               duration: 629.0
               ASName: C23-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6733.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#130, concurrent=0)
               duration: 629.0
               ASName: C23-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6733.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#177, concurrent=0)
               duration: 629.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C23-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6733.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#208, concurrent=1)
               duration: 629.0
               Near: 0.10000000149011612
[   6839.0] L VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
[   6839.0] E VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
               duration: 99.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_023_c
               OffsetFrame: 30
               Speaker: Npc_Navi
[   6938.0] L VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
[   6938.0] E VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
               duration: 219.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_023_d
               OffsetFrame: 30
               Speaker: Npc_Navi
[   7157.0] L VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
[   7157.0] E VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
               duration: 126.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_023_e
               OffsetFrame: 30
               Speaker: Npc_Navi
[   7283.0] L VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
[   7362.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#86, concurrent=0)
[   7362.0] L Player_Event[0] - EventPlayASForTimeline (#107, concurrent=0)
[   7362.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#130, concurrent=0)
[   7362.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#177, concurrent=0)
[   7362.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#208, concurrent=1)
[   7362.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#17, concurrent=0)
               duration: 130.0
               ASName: C24
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7362.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#87, concurrent=0)
               duration: 130.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 20.0
[   7362.0] E Dm_Locator[0] - EventPlayASForTimeline (#137, concurrent=0)
               duration: 130.0
               ASName: C24-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7362.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#178, concurrent=0)
               duration: 130.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C24-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   7492.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#17, concurrent=0)
[   7492.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#87, concurrent=0)
[   7492.0] L Dm_Locator[0] - EventPlayASForTimeline (#137, concurrent=0)
[   7492.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#178, concurrent=0)
[   7492.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#18, concurrent=0)
               duration: 198.0
               ASName: C25
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7492.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#88, concurrent=0)
               duration: 91.0
               EndBluarLevel: 2.0
               EndDistance: 6.0
               EndFNumber: 12.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.0
               StartFNumber: 150.0
[   7492.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#117, concurrent=0)
               duration: 198.0
               ASName: C25
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7492.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#179, concurrent=0)
               duration: 198.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C25-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   7495.0] E VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
               duration: 53.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_024_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   7548.0] L VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
[   7583.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#88, concurrent=0)
[   7583.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#89, concurrent=0)
               duration: 107.0
               EndBluarLevel: 2.0
               EndDistance: 6.0
               EndFNumber: 12.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 6.0
               StartFNumber: 12.0
[   7618.0] E VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
               duration: 58.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_025_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   7676.0] L VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
[   7690.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#18, concurrent=0)
[   7690.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#89, concurrent=0)
[   7690.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#117, concurrent=0)
[   7690.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#179, concurrent=0)
[   7690.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#19, concurrent=0)
               duration: 109.0
               ASName: C26
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7690.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#90, concurrent=0)
               duration: 109.0
               EndBluarLevel: 2.0
               EndDistance: 6.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: false
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 1.0
               StartBluarLevel: 2.0
               StartDistance: 6.5
               StartFNumber: 20.0
[   7690.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#118, concurrent=0)
               duration: 109.0
               ASName: C26
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7690.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#180, concurrent=0)
               duration: 109.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C26-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   7703.0] E VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
               duration: 226.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_026_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   7799.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#19, concurrent=0)
[   7799.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#90, concurrent=0)
[   7799.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#118, concurrent=0)
[   7799.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#180, concurrent=0)
[   7799.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#91, concurrent=0)
               duration: 190.0
               EndBluarLevel: 3.0
               EndDistance: 1.350000023841858
               EndFNumber: 110.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.350000023841858
               StartFNumber: 110.0
[   7799.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#119, concurrent=0)
               duration: 190.0
               ASName: C27
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7799.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#181, concurrent=0)
               duration: 190.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C27-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   7799.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#209, concurrent=1)
               duration: 190.0
               Near: 0.10000000149011612
[   7929.0] L VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
[   7929.0] E VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
               duration: 131.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_027_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   7959.0] E VoicePlayActor[1] - EventStartVoice (#57, concurrent=0)
               duration: 57.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_028_b
               OffsetFrame: 30
               Speaker: Player_Event
[   7989.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#91, concurrent=0)
[   7989.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#119, concurrent=0)
[   7989.0] L Dm_Land_InsideGanonCastle_A_05[0] - EventPlayASForTimeline (#150, concurrent=0)
[   7989.0] L Land_InsideGanonCastle_Room26_A_06 - EventGoOffstageForUser (#151, concurrent=0)
[   7989.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#181, concurrent=0)
[   7989.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#209, concurrent=1)
[   7989.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#20, concurrent=0)
               duration: 289.0
               ASName: C28
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7989.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#92, concurrent=0)
               duration: 129.0
               EndBluarLevel: 3.0
               EndDistance: 5.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 5.0
               StartFNumber: 50.0
[   7989.0] E Player_Event[0] - EventPlayASForTimeline (#108, concurrent=0)
               duration: 289.0
               ASName: C28-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7989.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#120, concurrent=0)
               duration: 289.0
               ASName: C28
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7989.0] E Land_InsideGanonCastle_Room26_A_06 - EventTriggerParticipateEvent (#152, concurrent=0)
               duration: 1079.0
[   7989.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#182, concurrent=0)
               duration: 289.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C28-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   8016.0] L VoicePlayActor[1] - EventStartVoice (#57, concurrent=0)
[   8060.0] L VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
[   8068.0] E VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
               duration: 187.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_027_c
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   8100.0] E VoicePlayActor[1] - EventStartVoice (#58, concurrent=0)
               duration: 73.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_029_b
               OffsetFrame: 30
               Speaker: Player_Event
[   8118.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#92, concurrent=0)
[   8118.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#93, concurrent=0)
               duration: 30.0
               EndBluarLevel: 3.0
               EndDistance: 20.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 5.0
               StartFNumber: 50.0
[   8148.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#93, concurrent=0)
[   8148.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#94, concurrent=0)
               duration: 130.0
               EndBluarLevel: 3.0
               EndDistance: 20.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 20.0
               StartFNumber: 10.0
[   8173.0] L VoicePlayActor[1] - EventStartVoice (#58, concurrent=0)
[   8255.0] L VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
[   8268.0] E VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
               duration: 72.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_030_ab
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   8278.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#20, concurrent=0)
[   8278.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#94, concurrent=0)
[   8278.0] L Player_Event[0] - EventPlayASForTimeline (#108, concurrent=0)
[   8278.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#120, concurrent=0)
[   8278.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#182, concurrent=0)
[   8278.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#21, concurrent=0)
               duration: 790.0
               ASName: C29
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8278.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#95, concurrent=0)
               duration: 120.0
               EndBluarLevel: 3.0
               EndDistance: 4.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 4.0
               StartFNumber: 20.0
[   8278.0] E Player_Event[0] - EventPlayASForTimeline (#109, concurrent=0)
               duration: 790.0
               ASName: C29-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8278.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#111, concurrent=1)
               duration: 790.0
[   8278.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#183, concurrent=0)
               duration: 790.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C29-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   8278.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#210, concurrent=1)
               duration: 9.0
               Near: 0.10000000149011612
[   8287.0] L Npc_Navi[0] - EventGoOffstageForUser (#121, concurrent=0)
[   8287.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#210, concurrent=1)
[   8287.0] E Npc_Navi[0] - EventTriggerSetNaviAppear (#122, concurrent=0)
               duration: 100.0
               IsAppear: false
[   8340.0] L VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
[   8387.0] L Npc_Navi[0] - EventTriggerSetNaviAppear (#122, concurrent=0)
[   8398.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#95, concurrent=0)
[   8398.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#96, concurrent=0)
               duration: 141.0
               EndBluarLevel: 2.0
               EndDistance: 4.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 4.0
               StartFNumber: 20.0
[   8398.0] E SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#131, concurrent=0)
               duration: 100.0
               BgmName: BGM_DungeonBoss_Ganondorf
[   8495.0] E Enemy_DungeonBoss_Ganondorf - EventDungeonBossSetConsiderBattlePresentation (#22, concurrent=1)
               duration: 100.0
[   8495.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#25, concurrent=0)
               duration: 250.0
               DemoNicknamePos: 0
               DemoNicknameType: 1
               InAnimFrame: 45
               IsWaitEnd: true
               NameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Ganondorf_Name
               NicknameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Ganondorf_Nickname
               OutAnimFrame: 45
[   8498.0] L SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#131, concurrent=0)
[   8539.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#96, concurrent=0)
[   8539.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#97, concurrent=0)
               duration: 345.0
               EndBluarLevel: 2.0
               EndDistance: 4.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.0
               StartFNumber: 15.0
[   8595.0] L Enemy_DungeonBoss_Ganondorf - EventDungeonBossSetConsiderBattlePresentation (#22, concurrent=1)
[   8745.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#25, concurrent=0)
[   8750.0] E VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
               duration: 70.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossIn:Dm_InsideGanonCastle_BossIn_Text_030_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   8820.0] L VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
[   8884.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#97, concurrent=0)
[   8884.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#98, concurrent=0)
               duration: 184.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.0
               StartFNumber: 15.0
[   9068.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#21, concurrent=0)
[   9068.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#98, concurrent=0)
[   9068.0] L Player_Event[0] - EventPlayASForTimeline (#109, concurrent=0)
[   9068.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#111, concurrent=1)
[   9068.0] L Land_InsideGanonCastle_Room26_A_06 - EventTriggerParticipateEvent (#152, concurrent=0)
[   9068.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#183, concurrent=0)
