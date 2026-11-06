-------- Event timeline: Dm_WaterTemple_BossIn --------
actors: 11
clips: 48
oneshots: 0
cuts: 6
duration: 1783.0
subtimelines: ['Dm_WaterTemple_BossIn_Effect', 'Dm_WaterTemple_BossIn_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 300.0
x4: 0
params: (none)

Cut: cut03
start time: 600.0
x4: 0
params: (none)

Cut: cut04
start time: 784.0
x4: 0
params: (none)

Cut: cut05
start time: 1124.0
x4: 0
params: (none)

Cut: cut06
start time: 1488.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: ''
UseEventModelAnime: ''

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
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeInForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline', 'EventResetToInGameParametersDoF']
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
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_BossIn/Dm_WaterTemple_BossIn_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_BossIn/Dm_WaterTemple_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_BossIn/Dm_WaterTemple_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Morpha[BossDefeat]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventDungeonBossSetConsiderBattlePresentation']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_BossIn/Dm_WaterTemple_BossIn_Enemy_DungeonBoss_Morpha/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Morpha_Tentacle[BossIn]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_BossIn/Dm_WaterTemple_BossIn_Enemy_DungeonBoss_Morpha_Tentacle/workspace.pp__ModelProject.gyml

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

[      0.0] E Dm_Locator[0] - EventDoNothing (#0, concurrent=0)
               duration: 1783.0
               IsWaitEnd: true
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#5, concurrent=0)
               duration: 15.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
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
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#19, concurrent=1)
               duration: 300.0
               Near: 0.10000000149011612
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 300.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#30, concurrent=1)
               duration: 100.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#31, concurrent=2)
               duration: 100.0
               BootsType: 0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#33, concurrent=0)
               duration: 1488.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 300.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     15.0] L UISystemActor[0] - EventEventFadeInForTimeline (#5, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#30, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#31, concurrent=2)
[    300.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[    300.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
[    300.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#19, concurrent=1)
[    300.0] L Player_Event[0] - EventPlayASForTimeline (#25, concurrent=0)
[    300.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
[    300.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
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
[    300.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
               duration: 300.0
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
[    300.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#20, concurrent=1)
               duration: 300.0
               Near: 0.10000000149011612
[    300.0] E Player_Event[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 300.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    300.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 300.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    300.0] E Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 300.0
               ASName: C02-Enemy_DungeonBoss_Morpha-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    600.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[    600.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
[    600.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#20, concurrent=1)
[    600.0] L Player_Event[0] - EventPlayASForTimeline (#26, concurrent=0)
[    600.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
[    600.0] L Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#39, concurrent=0)
[    600.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 184.0
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
[    600.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
               duration: 184.0
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
[    600.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#21, concurrent=1)
               duration: 184.0
               Near: 0.10000000149011612
[    600.0] E Player_Event[0] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 184.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    600.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 184.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    666.0] E VoicePlayActor[0] - EventStartVoice (#1, concurrent=0)
               duration: 68.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_WaterTemple_BossIn:Dm_WaterTemple_BossIn_Text_001_b
               OffsetFrame: 30
               Speaker: Player_Event
[    734.0] L VoicePlayActor[0] - EventStartVoice (#1, concurrent=0)
[    783.0] E VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
               duration: 92.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_WaterTemple_BossIn:Dm_WaterTemple_BossIn_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[    784.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[    784.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
[    784.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#21, concurrent=1)
[    784.0] L Player_Event[0] - EventPlayASForTimeline (#27, concurrent=0)
[    784.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#37, concurrent=0)
[    784.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
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
[    784.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
               duration: 340.0
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
[    784.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#22, concurrent=1)
               duration: 340.0
               Near: 0.10000000149011612
[    784.0] E Player_Event[0] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 340.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    784.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 340.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    784.0] E Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 340.0
               ASName: C04-Enemy_DungeonBoss_Morpha-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    784.0] E Enemy_DungeonBoss_Morpha_Tentacle[BossIn] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 340.0
               ASName: C04-Enemy_DungeonBoss_Morpha_Tentacle-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    875.0] L VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
[    937.0] E VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
               duration: 74.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_WaterTemple_BossIn:Dm_WaterTemple_BossIn_Text_003_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1011.0] L VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
[   1124.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   1124.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
[   1124.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#22, concurrent=1)
[   1124.0] L Player_Event[0] - EventPlayASForTimeline (#28, concurrent=0)
[   1124.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#38, concurrent=0)
[   1124.0] L Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#40, concurrent=0)
[   1124.0] L Enemy_DungeonBoss_Morpha_Tentacle[BossIn] - EventPlayASForTimeline (#44, concurrent=0)
[   1124.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 364.0
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
               duration: 364.0
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
[   1124.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#23, concurrent=1)
               duration: 364.0
               Near: 0.10000000149011612
[   1124.0] E Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 364.0
               ASName: C05-Enemy_DungeonBoss_Morpha-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1124.0] E Enemy_DungeonBoss_Morpha_Tentacle[BossIn] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 364.0
               ASName: C05-Enemy_DungeonBoss_Morpha_Tentacle-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1143.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#6, concurrent=0)
               duration: 430.0
               DemoNicknamePos: 0
               DemoNicknameType: 1
               InAnimFrame: 110
               IsWaitEnd: true
               NameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Morpha_Name
               NicknameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Morpha_Nickname
               OutAnimFrame: 110
[   1143.0] E Enemy_DungeonBoss_Morpha[BossDefeat] - EventDungeonBossSetConsiderBattlePresentation (#43, concurrent=1)
               duration: 15.0
[   1143.0] E SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#47, concurrent=0)
               duration: 15.0
               BgmName: BGM_DungeonBoss
[   1158.0] L Enemy_DungeonBoss_Morpha[BossDefeat] - EventDungeonBossSetConsiderBattlePresentation (#43, concurrent=1)
[   1158.0] L SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#47, concurrent=0)
[   1388.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#32, concurrent=2)
               duration: 100.0
[   1488.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   1488.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
[   1488.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#23, concurrent=1)
[   1488.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#32, concurrent=2)
[   1488.0] L Npc_Navi - EventGoOffstageForUser (#33, concurrent=0)
[   1488.0] L Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#41, concurrent=0)
[   1488.0] L Enemy_DungeonBoss_Morpha_Tentacle[BossIn] - EventPlayASForTimeline (#45, concurrent=0)
[   1488.0] E PostProcessingActor[0] - EventResetToInGameParametersDoF (#12, concurrent=0)
               duration: 295.0
               IsWaitEnd: true
               TransitionFrame: 0
[   1488.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
               duration: 295.0
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
[   1488.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#24, concurrent=1)
               duration: 295.0
               Near: 0.10000000149011612
[   1488.0] E Player_Event[0] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 295.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1488.0] E Npc_Navi - EventPlayASForTimeline (#34, concurrent=0)
               duration: 295.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1488.0] E Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 295.0
               ASName: C06-Enemy_DungeonBoss_Morpha-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1488.0] E Enemy_DungeonBoss_Morpha_Tentacle[BossIn] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 295.0
               ASName: C06-Enemy_DungeonBoss_Morpha_Tentacle-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1568.0] E VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
               duration: 74.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_WaterTemple_BossIn:Dm_WaterTemple_BossIn_Text_004_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1573.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#6, concurrent=0)
[   1642.0] L VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
[   1783.0] L Dm_Locator[0] - EventDoNothing (#0, concurrent=0)
[   1783.0] L PostProcessingActor[0] - EventResetToInGameParametersDoF (#12, concurrent=0)
[   1783.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
[   1783.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#24, concurrent=1)
[   1783.0] L Player_Event[0] - EventPlayASForTimeline (#29, concurrent=0)
[   1783.0] L Npc_Navi - EventPlayASForTimeline (#34, concurrent=0)
[   1783.0] L Enemy_DungeonBoss_Morpha[BossDefeat] - EventPlayASForTimeline (#42, concurrent=0)
[   1783.0] L Enemy_DungeonBoss_Morpha_Tentacle[BossIn] - EventPlayASForTimeline (#46, concurrent=0)
