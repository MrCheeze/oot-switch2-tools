-------- Event timeline: Dm_SpiritTemple_0030 --------
actors: 13
clips: 65
oneshots: 0
cuts: 7
duration: 2779.0
subtimelines: ['Dm_SpiritTemple_0030_Effect', 'Dm_SpiritTemple_0030_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 960.0
x4: 0
params: (none)

Cut: C03
start time: 1140.0
x4: 0
params: (none)

Cut: C04
start time: 1630.0
x4: 0
params: (none)

Cut: C05
start time: 1720.0
x4: 0
params: (none)

Cut: C06
start time: 2010.0
x4: 0
params: (none)

Cut: C07
start time: 2530.0
x4: 0
params: (none)


===== Actors =====

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerSoundStopBGM', 'EventTriggerSoundStartBossBgm', 'EventSoundReleaseDucking']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline']
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
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0030/Dm_SpiritTemple_0030/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0030/Dm_SpiritTemple_0030_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0030/Dm_SpiritTemple_0030_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetModelAlpha']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_0030_Enemy_DungeonBoss_Kotake.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0030/Dm_SpiritTemple_0030_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetModelAlpha']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_0030_Enemy_DungeonBoss_Koume.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0030/Dm_SpiritTemple_0030_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Twinrova
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventDungeonBossSetConsiderBattlePresentation']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0030/Dm_SpiritTemple_0030_Enemy_DungeonBoss_Twinrova/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0030/Dm_SpiritTemple_0030_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0030/Dm_SpiritTemple_0030_Dm_Locator/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#3, concurrent=0)
               duration: 120.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 960.0
               EndBluarLevel: 1.100000023841858
               EndDistance: 2.0
               EndFNumber: 200.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.100000023841858
               StartDistance: 2.0
               StartFNumber: 200.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
               duration: 960.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#31, concurrent=1)
               duration: 960.0
               Near: 0.20000000298023224
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 960.0
               ASName: C01_00-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#41, concurrent=1)
               duration: 960.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#42, concurrent=2)
               duration: 2530.0
               BootsType: 0
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 960.0
               ASName: C01_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 960.0
               ASName: AS-C01_00-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 960.0
               ASName: AS-C01_00-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#60, concurrent=0)
               duration: 2530.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Locator[0] - EventPlayASForTimeline (#62, concurrent=0)
               duration: 960.0
               ASName: C01_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    120.0] L UISystemActor[0] - EventEventFadeInForTimeline (#3, concurrent=0)
[    166.0] E VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
               duration: 241.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0030:Dm_SpiritTemple_0030_Text_000_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[    407.0] L VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
[    428.0] E VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
               duration: 245.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0030:Dm_SpiritTemple_0030_Text_001_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[    492.0] E SoundSystemActor[0] - EventTriggerSoundStopBGM (#0, concurrent=0)
               duration: 100.0
               BGMName: BGM_DungeonBoss_KotakeKoume
               IsUseSuspendFade: false
[    592.0] L SoundSystemActor[0] - EventTriggerSoundStopBGM (#0, concurrent=0)
[    673.0] L VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
[    729.0] E Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventTriggerSetModelAlpha (#50, concurrent=1)
               duration: 411.0
               Alpha: 0.0
[    729.0] E Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventTriggerSetModelAlpha (#53, concurrent=1)
               duration: 411.0
               Alpha: 0.0
[    813.0] E VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
               duration: 131.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0030:Dm_SpiritTemple_0030_Text_002_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[    944.0] L VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
[    960.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[    960.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
[    960.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#31, concurrent=1)
[    960.0] L Player_Event[0] - EventPlayASForTimeline (#36, concurrent=0)
[    960.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#41, concurrent=1)
[    960.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#44, concurrent=0)
[    960.0] L Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventPlayASForTimeline (#48, concurrent=0)
[    960.0] L Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventPlayASForTimeline (#51, concurrent=0)
[    960.0] L Dm_Locator[0] - EventPlayASForTimeline (#62, concurrent=0)
[    960.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 180.0
               EndBluarLevel: 1.5
               EndDistance: 18.5
               EndFNumber: 14.399999618530273
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 18.5
               StartFNumber: 14.399999618530273
[    960.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
               duration: 180.0
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
[    960.0] E Player_Event[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 180.0
               ASName: C02_00-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    960.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 180.0
               ASName: C02_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    960.0] E Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 180.0
               ASName: AS-C02_00-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    960.0] E Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 180.0
               ASName: AS-C02_00-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    960.0] E Dm_Locator[0] - EventPlayASForTimeline (#63, concurrent=0)
               duration: 180.0
               ASName: C02_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    976.0] E VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
               duration: 134.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0030:Dm_SpiritTemple_0030_Text_003_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   1110.0] L VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
[   1140.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   1140.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
[   1140.0] L Player_Event[0] - EventPlayASForTimeline (#37, concurrent=0)
[   1140.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#45, concurrent=0)
[   1140.0] L Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventPlayASForTimeline (#49, concurrent=0)
[   1140.0] L Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventTriggerSetModelAlpha (#50, concurrent=1)
[   1140.0] L Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventPlayASForTimeline (#52, concurrent=0)
[   1140.0] L Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventTriggerSetModelAlpha (#53, concurrent=1)
[   1140.0] L Dm_Locator[0] - EventPlayASForTimeline (#63, concurrent=0)
[   1140.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 141.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 2.5
               EndFNumber: 27.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 2.5
               StartFNumber: 27.0
[   1140.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
               duration: 490.0
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
[   1140.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#32, concurrent=1)
               duration: 490.0
               Near: 0.20000000298023224
[   1140.0] E Player_Event[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 490.0
               ASName: C03_00-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1140.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 490.0
               ASName: C03_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1140.0] E Dm_Locator[0] - EventPlayASForTimeline (#64, concurrent=0)
               duration: 490.0
               ASName: C03_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1257.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 221.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0030:Dm_SpiritTemple_0030_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_KotakeKoume
[   1257.0] E VoicePlayActor[1] - EventStartVoice (#12, concurrent=0)
               duration: 221.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0030:Dm_SpiritTemple_0030_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_KotakeKoume
[   1281.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   1281.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 167.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 2.5
               EndFNumber: 27.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 2.5
               StartFNumber: 27.0
[   1398.0] E Enemy_DungeonBoss_Twinrova - EventPlayASForTimeline (#54, concurrent=0)
               duration: 232.0
               ASName: C03_00-Enemy_DungeonBoss_Twinrova-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1448.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   1448.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 48.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 6.0
               EndFNumber: 27.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 2.5
               StartFNumber: 27.0
[   1478.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[   1478.0] L VoicePlayActor[1] - EventStartVoice (#12, concurrent=0)
[   1496.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   1496.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 48.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 8.0
               EndFNumber: 27.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 6.0
               StartFNumber: 27.0
[   1502.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 126.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0030:Dm_SpiritTemple_0030_Text_007_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Twinrova
[   1507.0] E SoundSystemActor[0] - EventSoundReleaseDucking (#1, concurrent=0)
               duration: 3.0
               DuckingName: Dm:Bgm下げ
               DuckingName2: ''
               DuckingName3: ''
               IsClearRefCount: false
               IsImmediately: true
[   1510.0] L SoundSystemActor[0] - EventSoundReleaseDucking (#1, concurrent=0)
[   1510.0] E SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#2, concurrent=0)
               duration: 89.0
               BgmName: BGM_DungeonBoss
[   1510.0] E Enemy_DungeonBoss_Twinrova - EventDungeonBossSetConsiderBattlePresentation (#59, concurrent=1)
               duration: 89.0
[   1544.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   1544.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 86.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 8.0
               EndFNumber: 27.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 8.0
               StartFNumber: 27.0
[   1599.0] L SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#2, concurrent=0)
[   1599.0] L Enemy_DungeonBoss_Twinrova - EventDungeonBossSetConsiderBattlePresentation (#59, concurrent=1)
[   1628.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[   1630.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   1630.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
[   1630.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#32, concurrent=1)
[   1630.0] L Player_Event[0] - EventPlayASForTimeline (#38, concurrent=0)
[   1630.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#46, concurrent=0)
[   1630.0] L Enemy_DungeonBoss_Twinrova - EventPlayASForTimeline (#54, concurrent=0)
[   1630.0] L Dm_Locator[0] - EventPlayASForTimeline (#64, concurrent=0)
[   1630.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 88.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0030:Dm_SpiritTemple_0030_Text_006_b
               OffsetFrame: 30
               Speaker: Player_Adult
[   1630.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 90.0
               EndBluarLevel: 3.0
               EndDistance: 0.8820000290870667
               EndFNumber: 113.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 0.8820000290870667
               StartFNumber: 113.0
[   1630.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
               duration: 90.0
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
[   1630.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#33, concurrent=1)
               duration: 90.0
               Near: 0.20000000298023224
[   1630.0] E Player_Event[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 90.0
               ASName: C04_00-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1630.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 90.0
               ASName: C04_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1630.0] E Enemy_DungeonBoss_Twinrova - EventPlayASForTimeline (#55, concurrent=0)
               duration: 90.0
               ASName: C04_00-Enemy_DungeonBoss_Twinrova-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1718.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[   1720.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   1720.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
[   1720.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#33, concurrent=1)
[   1720.0] L Player_Event[0] - EventPlayASForTimeline (#39, concurrent=0)
[   1720.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#47, concurrent=0)
[   1720.0] L Enemy_DungeonBoss_Twinrova - EventPlayASForTimeline (#55, concurrent=0)
[   1720.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 290.0
               EndBluarLevel: 2.299999952316284
               EndDistance: 5.5
               EndFNumber: 8.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.299999952316284
               StartDistance: 5.5
               StartFNumber: 8.0
[   1720.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
               duration: 290.0
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
[   1720.0] E Enemy_DungeonBoss_Twinrova - EventPlayASForTimeline (#56, concurrent=0)
               duration: 290.0
               ASName: C05_00-Enemy_DungeonBoss_Twinrova-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2006.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 337.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0030:Dm_SpiritTemple_0030_Text_008_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Twinrova
[   2010.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   2010.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
[   2010.0] L Enemy_DungeonBoss_Twinrova - EventPlayASForTimeline (#56, concurrent=0)
[   2010.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 520.0
               EndBluarLevel: 2.4000000953674316
               EndDistance: 12.100000381469727
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.4000000953674316
               StartDistance: 12.100000381469727
               StartFNumber: 25.0
[   2010.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
               duration: 520.0
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
[   2010.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#34, concurrent=1)
               duration: 520.0
               Near: 0.20000000298023224
[   2010.0] E Enemy_DungeonBoss_Twinrova - EventPlayASForTimeline (#57, concurrent=0)
               duration: 520.0
               ASName: C06_00-Enemy_DungeonBoss_Twinrova-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2343.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   2530.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   2530.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
[   2530.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#34, concurrent=1)
[   2530.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#42, concurrent=2)
[   2530.0] L Enemy_DungeonBoss_Twinrova - EventPlayASForTimeline (#57, concurrent=0)
[   2530.0] L Npc_Navi - EventGoOffstageForUser (#60, concurrent=0)
[   2530.0] E PostProcessingActor[0] - EventResetToInGameParametersDoF (#23, concurrent=0)
               duration: 249.0
               IsWaitEnd: true
               TransitionFrame: 0
[   2530.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
               duration: 249.0
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
[   2530.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#35, concurrent=1)
               duration: 249.0
               Near: 0.10000000149011612
[   2530.0] E Player_Event[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 249.0
               ASName: C07_00-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2530.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#43, concurrent=2)
               duration: 249.0
[   2530.0] E Enemy_DungeonBoss_Twinrova - EventPlayASForTimeline (#58, concurrent=0)
               duration: 249.0
               ASName: C07_00-Enemy_DungeonBoss_Twinrova-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2530.0] E Npc_Navi - EventPlayASForTimeline (#61, concurrent=0)
               duration: 249.0
               ASName: C07_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2779.0] L PostProcessingActor[0] - EventResetToInGameParametersDoF (#23, concurrent=0)
[   2779.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
[   2779.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#35, concurrent=1)
[   2779.0] L Player_Event[0] - EventPlayASForTimeline (#40, concurrent=0)
[   2779.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#43, concurrent=2)
[   2779.0] L Enemy_DungeonBoss_Twinrova - EventPlayASForTimeline (#58, concurrent=0)
[   2779.0] L Npc_Navi - EventPlayASForTimeline (#61, concurrent=0)
