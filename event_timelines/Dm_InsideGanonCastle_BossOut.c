-------- Event timeline: Dm_InsideGanonCastle_BossOut --------
actors: 14
clips: 98
oneshots: 0
cuts: 13
duration: 3483.0
subtimelines: ['Dm_InsideGanonCastle_BossOut_Effect', 'Dm_InsideGanonCastle_BossOut_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 460.0
x4: 0
params: (none)

Cut: cut03
start time: 610.0
x4: 0
params: (none)

Cut: cut04
start time: 999.0
x4: 0
params: (none)

Cut: cut05
start time: 1288.0
x4: 0
params: (none)

Cut: cut06
start time: 1592.0
x4: 0
params: (none)

Cut: cut07
start time: 1682.0
x4: 0
params: (none)

Cut: cut08
start time: 1881.0
x4: 0
params: (none)

Cut: cut09
start time: 2014.0
x4: 0
params: (none)

Cut: cut10
start time: 2189.0
x4: 0
params: (none)

Cut: cut11
start time: 2544.0
x4: 0
params: (none)

Cut: cut12
start time: 2724.0
x4: 0
params: (none)

Cut: cut13
start time: 2973.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Land_InsideGanonCastle_A_02[1]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossOut/Dm_InsideGanonCastle_BossOut_Dm_Land_InsideGanonCastle_A/workspace.pp__ModelProject.gyml

Actor: Dm_Land_InsideGanonCastle_A_02[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossOut/Dm_InsideGanonCastle_BossOut_Dm_Land_InsideGanonCastle_A/workspace.pp__ModelProject.gyml

Actor: Dm_Land_InsideGanonCastle_A_01[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossOut/Dm_InsideGanonCastle_BossOut_Dm_Land_InsideGanonCastle_A/workspace.pp__ModelProject.gyml

Actor: Weapon_Sword_Master[0]
concurrent clips: 1
actions: ['EventModelBind']
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

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossOut/Dm_InsideGanonCastle_BossOut_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Land_InsideGanonCastle_A_03[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventTriggerParticipateEvent']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_InsideGanonCastle_BossOut_Dm_Land_InsideGanonCastle_A_03.root.as
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossOut/Dm_InsideGanonCastle_BossOut_Dm_Land_InsideGanonCastle_A/workspace.pp__ModelProject.gyml

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossOut/Dm_InsideGanonCastle_BossOut/workspace.pp__ModelProject.gyml

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

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossOut/Dm_InsideGanonCastle_BossOut_Npc_Navi/workspace.pp__ModelProject.gyml

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
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossOut/Dm_InsideGanonCastle_BossOut_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Ganondorf
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 0.0
- 0.0
- 0.0
UseEventAS: Work/AS/Root/Event/Dm_InsideGanonCastle_BossOut_Npc_Gerudo_GEU_Ganondorf_Child.root.as
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_BossOut/Dm_InsideGanonCastle_BossOut_Npc_Gerudo_GEU_Ganondorf_Child/workspace.pp__ModelProject.gyml

Actor: VoicePlayActor[0]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#0, concurrent=0)
               duration: 30.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.0
               StartFNumber: 70.0
[      0.0] E Dm_Land_InsideGanonCastle_A_01[0] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 2189.0
               ASName: C01-Dm_Land_InsideGanonCastle_A_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#33, concurrent=0)
               duration: 15.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Dm_Locator[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 460.0
               ASName: C01-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Land_InsideGanonCastle_A_03[0] - EventTriggerParticipateEvent (#37, concurrent=0)
               duration: 2189.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
               duration: 460.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
               duration: 100.0
               Near: 0.10000000149011612
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#59, concurrent=0)
               duration: 3483.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#70, concurrent=1)
               duration: 100.0
               BootsType: 0
[      0.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#72, concurrent=0)
               duration: 460.0
               ASName: C01-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E VoicePlayActor[0] - EventStartVoice (#84, concurrent=0)
               duration: 160.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_000_b
               OffsetFrame: 0
               Speaker: Enemy_DungeonBoss_Ganondorf
[     15.0] L UISystemActor[0] - EventEventFadeInForTimeline (#33, concurrent=0)
[     30.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#0, concurrent=0)
[     30.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
               duration: 50.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 50.0
[     80.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
[     80.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 20.0
               EndBluarLevel: 2.0
               EndDistance: 1.0
               EndFNumber: 75.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 50.0
[    100.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    100.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#70, concurrent=1)
[    100.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 360.0
               EndBluarLevel: 2.0
               EndDistance: 1.0
               EndFNumber: 75.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.0
               StartFNumber: 75.0
[    160.0] L VoicePlayActor[0] - EventStartVoice (#84, concurrent=0)
[    165.0] E VoicePlayActor[0] - EventStartVoice (#85, concurrent=0)
               duration: 130.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_001_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[    295.0] L VoicePlayActor[0] - EventStartVoice (#85, concurrent=0)
[    327.0] E VoicePlayActor[0] - EventStartVoice (#86, concurrent=0)
               duration: 89.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_002_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[    416.0] L VoicePlayActor[0] - EventStartVoice (#86, concurrent=0)
[    443.0] E VoicePlayActor[0] - EventStartVoice (#87, concurrent=0)
               duration: 195.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_003_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[    460.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    460.0] L Dm_Locator[0] - EventPlayASForTimeline (#35, concurrent=0)
[    460.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
[    460.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#72, concurrent=0)
[    460.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 150.0
               EndBluarLevel: 0.0
               EndDistance: 4.0
               EndFNumber: 9.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 4.0
               StartFNumber: 9.0
[    460.0] E Weapon_Sword_Master[0] - EventModelBind (#32, concurrent=0)
               duration: 2923.0
               ActorName: Player_Event
               BoneName: Weapon_L
               InstanceName: ''
               IsWaitEnd: true
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[    460.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
               duration: 150.0
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
[    460.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#60, concurrent=0)
               duration: 150.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    460.0] E Player_Event[0] - EventPlayASForTimeline (#64, concurrent=0)
               duration: 150.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    460.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#73, concurrent=0)
               duration: 150.0
               ASName: C02-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    610.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    610.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
[    610.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#60, concurrent=0)
[    610.0] L Player_Event[0] - EventPlayASForTimeline (#64, concurrent=0)
[    610.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#73, concurrent=0)
[    610.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 389.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 65.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 65.0
[    610.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
               duration: 389.0
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
[    610.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#74, concurrent=0)
               duration: 389.0
               ASName: C03-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    638.0] L VoicePlayActor[0] - EventStartVoice (#87, concurrent=0)
[    639.0] E VoicePlayActor[0] - EventStartVoice (#88, concurrent=0)
               duration: 93.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_004_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[    732.0] L VoicePlayActor[0] - EventStartVoice (#88, concurrent=0)
[    739.0] E VoicePlayActor[0] - EventStartVoice (#89, concurrent=0)
               duration: 273.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_005_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[    999.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[    999.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
[    999.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#74, concurrent=0)
[    999.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 289.0
               EndBluarLevel: 0.0
               EndDistance: 5.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 5.0
               StartFNumber: 15.0
[    999.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
               duration: 289.0
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
[    999.0] E Player_Event[0] - EventPlayASForTimeline (#65, concurrent=0)
               duration: 289.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    999.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#75, concurrent=0)
               duration: 289.0
               ASName: C04-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1012.0] L VoicePlayActor[0] - EventStartVoice (#89, concurrent=0)
[   1028.0] E VoicePlayActor[0] - EventStartVoice (#90, concurrent=0)
               duration: 254.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_006_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   1282.0] L VoicePlayActor[0] - EventStartVoice (#90, concurrent=0)
[   1282.0] E VoicePlayActor[0] - EventStartVoice (#91, concurrent=0)
               duration: 103.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_007_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   1288.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1288.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
[   1288.0] L Player_Event[0] - EventPlayASForTimeline (#65, concurrent=0)
[   1288.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#75, concurrent=0)
[   1288.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 304.0
               EndBluarLevel: 0.0
               EndDistance: 1.25
               EndFNumber: 55.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.25
               StartFNumber: 55.0
[   1288.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
               duration: 304.0
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
[   1288.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#76, concurrent=0)
               duration: 304.0
               ASName: C05-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1385.0] L VoicePlayActor[0] - EventStartVoice (#91, concurrent=0)
[   1402.0] E VoicePlayActor[0] - EventStartVoice (#92, concurrent=0)
               duration: 170.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_008_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   1572.0] L VoicePlayActor[0] - EventStartVoice (#92, concurrent=0)
[   1572.0] E VoicePlayActor[0] - EventStartVoice (#93, concurrent=0)
               duration: 89.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_009_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   1592.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   1592.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
[   1592.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#76, concurrent=0)
[   1592.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 90.0
               EndBluarLevel: 2.0
               EndDistance: 0.7400000095367432
               EndFNumber: 200.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.7400000095367432
               StartFNumber: 200.0
[   1592.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
               duration: 90.0
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
[   1592.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
               duration: 90.0
               Near: 0.10000000149011612
[   1592.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#77, concurrent=0)
               duration: 90.0
               ASName: C06-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1661.0] L VoicePlayActor[0] - EventStartVoice (#93, concurrent=0)
[   1661.0] E VoicePlayActor[0] - EventStartVoice (#94, concurrent=0)
               duration: 258.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_010_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   1682.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   1682.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
[   1682.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
[   1682.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#77, concurrent=0)
[   1682.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 62.0
               EndBluarLevel: 2.0
               EndDistance: 1.2000000476837158
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.2000000476837158
               StartFNumber: 50.0
[   1682.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
               duration: 199.0
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
[   1682.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
               duration: 199.0
               Near: 0.10000000149011612
[   1682.0] E Player_Event[0] - EventPlayASForTimeline (#66, concurrent=0)
               duration: 199.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1682.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#78, concurrent=0)
               duration: 199.0
               ASName: C07
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1744.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   1744.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 22.0
               EndBluarLevel: 0.0
               EndDistance: 4.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.2000000476837158
               StartFNumber: 50.0
[   1766.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   1766.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 115.0
               EndBluarLevel: 0.0
               EndDistance: 4.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 4.0
               StartFNumber: 15.0
[   1881.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   1881.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
[   1881.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
[   1881.0] L Player_Event[0] - EventPlayASForTimeline (#66, concurrent=0)
[   1881.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#78, concurrent=0)
[   1881.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 133.0
               EndBluarLevel: 0.0
               EndDistance: 15.0
               EndFNumber: 4.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 15.0
               StartFNumber: 4.0
[   1881.0] E Dm_Locator[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 1602.0
               ASName: C07-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1881.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
               duration: 133.0
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
[   1881.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#61, concurrent=0)
               duration: 133.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1881.0] E Player_Event[0] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 133.0
               ASName: C08-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1881.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#79, concurrent=0)
               duration: 133.0
               ASName: C08
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1919.0] L VoicePlayActor[0] - EventStartVoice (#94, concurrent=0)
[   1948.0] E VoicePlayActor[0] - EventStartVoice (#95, concurrent=0)
               duration: 211.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_011_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   2014.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   2014.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
[   2014.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#61, concurrent=0)
[   2014.0] L Player_Event[0] - EventPlayASForTimeline (#67, concurrent=0)
[   2014.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#79, concurrent=0)
[   2014.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 175.0
               EndBluarLevel: 2.0
               EndDistance: 2.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.5
               StartFNumber: 30.0
[   2014.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
               duration: 175.0
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
[   2014.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#80, concurrent=0)
               duration: 175.0
               ASName: C09
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2159.0] L VoicePlayActor[0] - EventStartVoice (#95, concurrent=0)
[   2159.0] E VoicePlayActor[0] - EventStartVoice (#96, concurrent=0)
               duration: 160.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2189.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   2189.0] L Dm_Land_InsideGanonCastle_A_01[0] - EventPlayASForTimeline (#27, concurrent=0)
[   2189.0] L Dm_Land_InsideGanonCastle_A_03[0] - EventTriggerParticipateEvent (#37, concurrent=0)
[   2189.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
[   2189.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#80, concurrent=0)
[   2189.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 355.0
               EndBluarLevel: 0.0
               EndDistance: 3.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.5
               StartFNumber: 20.0
[   2189.0] E Dm_Land_InsideGanonCastle_A_02[1] - EventPlayASForTimeline (#19, concurrent=0)
               duration: 355.0
               ASName: C10-Dm_Land_InsideGanonCastle_A_02-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2189.0] E Dm_Land_InsideGanonCastle_A_02[0] - EventPlayASForTimeline (#23, concurrent=0)
               duration: 355.0
               ASName: C10-Dm_Land_InsideGanonCastle_A_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2189.0] E Dm_Land_InsideGanonCastle_A_01[0] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 355.0
               ASName: C10-Dm_Land_InsideGanonCastle_A_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2189.0] E Dm_Land_InsideGanonCastle_A_03[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 355.0
               ASName: C10
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2189.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
               duration: 355.0
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
[   2189.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#62, concurrent=0)
               duration: 355.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2189.0] E Player_Event[0] - EventPlayASForTimeline (#68, concurrent=0)
               duration: 355.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2189.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#81, concurrent=0)
               duration: 355.0
               ASName: C10
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2319.0] L VoicePlayActor[0] - EventStartVoice (#96, concurrent=0)
[   2544.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   2544.0] L Dm_Land_InsideGanonCastle_A_02[1] - EventPlayASForTimeline (#19, concurrent=0)
[   2544.0] L Dm_Land_InsideGanonCastle_A_02[0] - EventPlayASForTimeline (#23, concurrent=0)
[   2544.0] L Dm_Land_InsideGanonCastle_A_01[0] - EventPlayASForTimeline (#28, concurrent=0)
[   2544.0] L Dm_Land_InsideGanonCastle_A_03[0] - EventPlayASForTimeline (#38, concurrent=0)
[   2544.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
[   2544.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#62, concurrent=0)
[   2544.0] L Player_Event[0] - EventPlayASForTimeline (#68, concurrent=0)
[   2544.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#81, concurrent=0)
[   2544.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 180.0
               EndBluarLevel: 0.0
               EndDistance: 10.0
               EndFNumber: 3.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 10.0
               StartFNumber: 3.5
[   2544.0] E Dm_Land_InsideGanonCastle_A_02[1] - EventPlayASForTimeline (#20, concurrent=0)
               duration: 180.0
               ASName: C11-Dm_Land_InsideGanonCastle_A_02-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2544.0] E Dm_Land_InsideGanonCastle_A_02[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 180.0
               ASName: C11-Dm_Land_InsideGanonCastle_A_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2544.0] E Dm_Land_InsideGanonCastle_A_01[0] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 180.0
               ASName: C11-Dm_Land_InsideGanonCastle_A_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2544.0] E Dm_Land_InsideGanonCastle_A_03[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 180.0
               ASName: C11
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2544.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
               duration: 180.0
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
[   2544.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#63, concurrent=0)
               duration: 180.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2544.0] E Player_Event[0] - EventPlayASForTimeline (#69, concurrent=0)
               duration: 180.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2544.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#82, concurrent=0)
               duration: 180.0
               ASName: C11
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2724.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   2724.0] L Dm_Land_InsideGanonCastle_A_02[1] - EventPlayASForTimeline (#20, concurrent=0)
[   2724.0] L Dm_Land_InsideGanonCastle_A_02[0] - EventPlayASForTimeline (#24, concurrent=0)
[   2724.0] L Dm_Land_InsideGanonCastle_A_01[0] - EventPlayASForTimeline (#29, concurrent=0)
[   2724.0] L Dm_Land_InsideGanonCastle_A_03[0] - EventPlayASForTimeline (#39, concurrent=0)
[   2724.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
[   2724.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#63, concurrent=0)
[   2724.0] L Player_Event[0] - EventPlayASForTimeline (#69, concurrent=0)
[   2724.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#82, concurrent=0)
[   2724.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 249.0
               EndBluarLevel: 0.0
               EndDistance: 10.0
               EndFNumber: 3.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 10.0
               StartFNumber: 3.0
[   2724.0] E Dm_Land_InsideGanonCastle_A_02[1] - EventPlayASForTimeline (#21, concurrent=0)
               duration: 249.0
               ASName: C12-Dm_Land_InsideGanonCastle_A_02-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2724.0] E Dm_Land_InsideGanonCastle_A_02[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 249.0
               ASName: C12-Dm_Land_InsideGanonCastle_A_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2724.0] E Dm_Land_InsideGanonCastle_A_01[0] - EventPlayASForTimeline (#30, concurrent=0)
               duration: 249.0
               ASName: C12-Dm_Land_InsideGanonCastle_A_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2724.0] E Dm_Land_InsideGanonCastle_A_03[0] - EventTriggerParticipateEvent (#40, concurrent=0)
               duration: 249.0
[   2724.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
               duration: 249.0
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
[   2963.0] E VoicePlayActor[0] - EventStartVoice (#97, concurrent=0)
               duration: 518.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_BossOut:Dm_InsideGanonCastle_BossOut_Text_013_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganondorf
[   2973.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   2973.0] L Dm_Land_InsideGanonCastle_A_02[1] - EventPlayASForTimeline (#21, concurrent=0)
[   2973.0] L Dm_Land_InsideGanonCastle_A_02[0] - EventPlayASForTimeline (#25, concurrent=0)
[   2973.0] L Dm_Land_InsideGanonCastle_A_01[0] - EventPlayASForTimeline (#30, concurrent=0)
[   2973.0] L Dm_Land_InsideGanonCastle_A_03[0] - EventTriggerParticipateEvent (#40, concurrent=0)
[   2973.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
[   2973.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 402.0
               EndBluarLevel: 0.0
               EndDistance: 0.75
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 5.0
               StartFNumber: 10.0
[   2973.0] E Dm_Land_InsideGanonCastle_A_02[1] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 510.0
               ASName: C13-Dm_Land_InsideGanonCastle_A_02-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2973.0] E Dm_Land_InsideGanonCastle_A_02[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 510.0
               ASName: C13-Dm_Land_InsideGanonCastle_A_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2973.0] E Dm_Land_InsideGanonCastle_A_01[0] - EventPlayASForTimeline (#31, concurrent=0)
               duration: 510.0
               ASName: C13-Dm_Land_InsideGanonCastle_A_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2973.0] E Dm_Land_InsideGanonCastle_A_03[0] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 510.0
               ASName: C13
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2973.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
               duration: 510.0
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
[   2973.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#58, concurrent=1)
               duration: 510.0
               Near: 0.10000000149011612
[   2973.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#71, concurrent=1)
               duration: 510.0
[   2973.0] E Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#83, concurrent=0)
               duration: 510.0
               ASName: C13
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3375.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   3375.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 108.0
               EndBluarLevel: 2.0
               EndDistance: 0.75
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.75
               StartFNumber: 120.0
[   3383.0] L Weapon_Sword_Master[0] - EventModelBind (#32, concurrent=0)
[   3383.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#34, concurrent=0)
               duration: 100.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   3481.0] L VoicePlayActor[0] - EventStartVoice (#97, concurrent=0)
[   3483.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   3483.0] L Dm_Land_InsideGanonCastle_A_02[1] - EventPlayASForTimeline (#22, concurrent=0)
[   3483.0] L Dm_Land_InsideGanonCastle_A_02[0] - EventPlayASForTimeline (#26, concurrent=0)
[   3483.0] L Dm_Land_InsideGanonCastle_A_01[0] - EventPlayASForTimeline (#31, concurrent=0)
[   3483.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#34, concurrent=0)
[   3483.0] L Dm_Locator[0] - EventPlayASForTimeline (#36, concurrent=0)
[   3483.0] L Dm_Land_InsideGanonCastle_A_03[0] - EventPlayASForTimeline (#41, concurrent=0)
[   3483.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
[   3483.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#58, concurrent=1)
[   3483.0] L Npc_Navi[0] - EventGoOffstageForUser (#59, concurrent=0)
[   3483.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#71, concurrent=1)
[   3483.0] L Enemy_DungeonBoss_Ganondorf - EventPlayASForTimeline (#83, concurrent=0)
