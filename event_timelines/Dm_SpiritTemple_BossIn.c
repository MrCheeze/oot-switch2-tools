-------- Event timeline: Dm_SpiritTemple_BossIn --------
actors: 17
clips: 66
oneshots: 0
cuts: 6
duration: 4405.0
subtimelines: ['Dm_SpiritTemple_BossIn_Effect', 'Dm_SpiritTemple_BossIn_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 1320.0
x4: 0
params: (none)

Cut: C03
start time: 2520.0
x4: 0
params: (none)

Cut: C04
start time: 3500.0
x4: 0
params: (none)

Cut: C05
start time: 3740.0
x4: 0
params: (none)

Cut: C07
start time: 3805.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Locator[A]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossIn/Dm_SpiritTemple_BossIn_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[B]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossIn/Dm_SpiritTemple_BossIn_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[C]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: ''

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerSoundStartBossBgm']
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
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossIn/Dm_SpiritTemple_BossIn/workspace.pp__ModelProject.gyml

Actor: GameSystemActor[0]
concurrent clips: 1
actions: ['EventDemoProductSupportComment']
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
actions: []
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventDungeonBossSetConsiderBattlePresentation']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_BossIn.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossIn/Dm_SpiritTemple_BossIn_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventDungeonBossSetConsiderBattlePresentation']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_BossIn.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossIn/Dm_SpiritTemple_BossIn_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Kotake[Kotake]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_BossIn.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossIn/Dm_SpiritTemple_BossIn_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Koume[Koume]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_BossIn.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossIn/Dm_SpiritTemple_BossIn_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossIn/Dm_SpiritTemple_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossIn/Dm_SpiritTemple_BossIn_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossIn/Dm_SpiritTemple_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E Dm_Locator[A] - EventPlayASForTimeline (#0, concurrent=0)
               duration: 1320.0
               ASName: C01-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Locator[B] - EventPlayASForTimeline (#3, concurrent=0)
               duration: 1320.0
               ASName: C01-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Locator[C] - EventDoNothing (#6, concurrent=0)
               duration: 4405.0
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 871.0
               EndBluarLevel: 1.0
               EndDistance: 3.0
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.0
               StartFNumber: 80.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
               duration: 1320.0
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
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#32, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#54, concurrent=0)
               duration: 1320.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
               duration: 1320.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#61, concurrent=1)
               duration: 100.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#62, concurrent=2)
               duration: 100.0
               BootsType: 0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#64, concurrent=0)
               duration: 3805.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#32, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#61, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#62, concurrent=2)
[    127.0] E VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
               duration: 167.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossIn:Dm_SpiritTemple_BossIn_Text_000_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[    294.0] L VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
[    329.0] E VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
               duration: 173.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossIn:Dm_SpiritTemple_BossIn_Text_001_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[    502.0] L VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
[    535.0] E VoicePlayActor[0] - EventStartVoice (#36, concurrent=0)
               duration: 235.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossIn:Dm_SpiritTemple_BossIn_Text_002_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[    770.0] L VoicePlayActor[0] - EventStartVoice (#36, concurrent=0)
[    770.0] E VoicePlayActor[0] - EventStartVoice (#37, concurrent=0)
               duration: 488.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossIn:Dm_SpiritTemple_BossIn_Text_003_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[    871.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[    871.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 449.0
               EndBluarLevel: 1.0
               EndDistance: 3.0
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.0
               StartFNumber: 80.0
[   1258.0] L VoicePlayActor[0] - EventStartVoice (#37, concurrent=0)
[   1320.0] L Dm_Locator[A] - EventPlayASForTimeline (#0, concurrent=0)
[   1320.0] L Dm_Locator[B] - EventPlayASForTimeline (#3, concurrent=0)
[   1320.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   1320.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
[   1320.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#54, concurrent=0)
[   1320.0] L Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
[   1320.0] E Dm_Locator[B] - EventPlayASForTimeline (#4, concurrent=0)
               duration: 1200.0
               ASName: C02-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1320.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 149.0
               EndBluarLevel: 1.0
               EndDistance: 5.0
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.0
               StartFNumber: 25.0
[   1320.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
               duration: 1200.0
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
[   1320.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#29, concurrent=1)
               duration: 1200.0
               Near: 0.10000000149011612
[   1320.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 930.0
               ASName: AS-C02-Npc_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1469.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   1469.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 18.0
               EndBluarLevel: 1.0
               EndDistance: 5.0
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.0
               StartFNumber: 25.0
[   1487.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   1487.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 611.0
               EndBluarLevel: 1.0
               EndDistance: 5.0
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.0
               StartFNumber: 70.0
[   1650.0] E VoicePlayActor[0] - EventStartVoice (#38, concurrent=0)
               duration: 349.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossIn:Dm_SpiritTemple_BossIn_Text_004_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   1999.0] L VoicePlayActor[0] - EventStartVoice (#38, concurrent=0)
[   2098.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   2098.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 47.0
               EndBluarLevel: 1.0
               EndDistance: 2.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.0
               StartFNumber: 70.0
[   2145.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   2145.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 375.0
               EndBluarLevel: 1.0
               EndDistance: 2.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.0
               StartFNumber: 15.0
[   2250.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#53, concurrent=0)
[   2250.0] E Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 270.0
               ASName: AS-C02-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Default
[   2301.0] E VoicePlayActor[0] - EventStartVoice (#39, concurrent=0)
               duration: 181.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossIn:Dm_SpiritTemple_BossIn_Text_005_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   2482.0] L VoicePlayActor[0] - EventStartVoice (#39, concurrent=0)
[   2520.0] L Dm_Locator[B] - EventPlayASForTimeline (#4, concurrent=0)
[   2520.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   2520.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
[   2520.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#29, concurrent=1)
[   2520.0] L Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventPlayASForTimeline (#47, concurrent=0)
[   2520.0] E Dm_Locator[A] - EventPlayASForTimeline (#1, concurrent=0)
               duration: 980.0
               ASName: C03-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2520.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 78.0
               EndBluarLevel: 1.0
               EndDistance: 8.0
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 8.0
               StartFNumber: 25.0
[   2520.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
               duration: 980.0
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
[   2520.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#30, concurrent=1)
               duration: 980.0
               Near: 0.10000000149011612
[   2520.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 763.0
               ASName: AS-C03-Npc_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2598.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   2598.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 31.0
               EndBluarLevel: 1.0
               EndDistance: 5.0
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 8.0
               StartFNumber: 25.0
[   2629.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   2629.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 496.0
               EndBluarLevel: 1.0
               EndDistance: 5.0
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.0
               StartFNumber: 70.0
[   2720.0] E VoicePlayActor[0] - EventStartVoice (#40, concurrent=0)
               duration: 333.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossIn:Dm_SpiritTemple_BossIn_Text_006_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[   3053.0] L VoicePlayActor[0] - EventStartVoice (#40, concurrent=0)
[   3125.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   3125.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 47.0
               EndBluarLevel: 1.0
               EndDistance: 5.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.0
               StartFNumber: 70.0
[   3172.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   3172.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 328.0
               EndBluarLevel: 1.0
               EndDistance: 5.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.0
               StartFNumber: 15.0
[   3283.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#52, concurrent=0)
[   3283.0] E Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 217.0
               ASName: AS-C03-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Default
[   3302.0] E VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
               duration: 185.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossIn:Dm_SpiritTemple_BossIn_Text_007_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[   3487.0] L VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
[   3500.0] L Dm_Locator[A] - EventPlayASForTimeline (#1, concurrent=0)
[   3500.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   3500.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
[   3500.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#30, concurrent=1)
[   3500.0] L Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventPlayASForTimeline (#42, concurrent=0)
[   3500.0] E Dm_Locator[A] - EventPlayASForTimeline (#2, concurrent=0)
               duration: 240.0
               ASName: C04-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3500.0] E Dm_Locator[B] - EventPlayASForTimeline (#5, concurrent=0)
               duration: 240.0
               ASName: C04-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3500.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 240.0
               EndBluarLevel: 2.0
               EndDistance: 18.0
               EndFNumber: 4.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 11.5
               StartFNumber: 8.0
[   3500.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
               duration: 240.0
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
[   3500.0] E Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 240.0
               ASName: C04-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Default
[   3500.0] E Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 240.0
               ASName: C04-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Default
[   3500.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#55, concurrent=0)
               duration: 240.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3500.0] E Player_Event[0] - EventPlayASForTimeline (#58, concurrent=0)
               duration: 240.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3740.0] L Dm_Locator[A] - EventPlayASForTimeline (#2, concurrent=0)
[   3740.0] L Dm_Locator[B] - EventPlayASForTimeline (#5, concurrent=0)
[   3740.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   3740.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
[   3740.0] L Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventPlayASForTimeline (#43, concurrent=0)
[   3740.0] L Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventPlayASForTimeline (#48, concurrent=0)
[   3740.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#55, concurrent=0)
[   3740.0] L Player_Event[0] - EventPlayASForTimeline (#58, concurrent=0)
[   3740.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 65.0
               EndBluarLevel: 2.0
               EndDistance: 15.0
               EndFNumber: 6.699999809265137
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 15.0
               StartFNumber: 6.699999809265137
[   3740.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
               duration: 65.0
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
[   3740.0] E Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 65.0
               ASName: C05-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Default
[   3740.0] E Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 65.0
               ASName: C05-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Default
[   3740.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#56, concurrent=0)
               duration: 65.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3740.0] E Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
               duration: 65.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3805.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   3805.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
[   3805.0] L Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventPlayASForTimeline (#44, concurrent=0)
[   3805.0] L Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventPlayASForTimeline (#49, concurrent=0)
[   3805.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#56, concurrent=0)
[   3805.0] L Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
[   3805.0] L Npc_Navi - EventGoOffstageForUser (#64, concurrent=0)
[   3805.0] E PostProcessingActor[0] - EventResetToInGameParametersDoF (#22, concurrent=0)
               duration: 600.0
               IsWaitEnd: true
               TransitionFrame: 0
[   3805.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
               duration: 600.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C07_01-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3805.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#31, concurrent=1)
               duration: 600.0
               Near: 0.10000000149011612
[   3805.0] E Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 600.0
               ASName: C07-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Default
[   3805.0] E Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 600.0
               ASName: C07-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: false
               IsWaitEnd: true
               Partial: Default
[   3805.0] E Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
               duration: 600.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3805.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#63, concurrent=2)
               duration: 600.0
[   3805.0] E Npc_Navi - EventPlayASForTimeline (#65, concurrent=0)
               duration: 600.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3925.0] E SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#7, concurrent=0)
               duration: 100.0
               BgmName: BGM_DungeonBoss_KotakeKoume
[   3925.0] E Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventDungeonBossSetConsiderBattlePresentation (#46, concurrent=1)
               duration: 100.0
[   3925.0] E Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventDungeonBossSetConsiderBattlePresentation (#51, concurrent=1)
               duration: 100.0
[   3930.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#33, concurrent=0)
               duration: 430.0
               DemoNicknamePos: 0
               DemoNicknameType: 1
               InAnimFrame: 110
               IsWaitEnd: true
               NameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Twinrova_Name
               NicknameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Twinrova_Nickname
               OutAnimFrame: 110
[   4025.0] L SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#7, concurrent=0)
[   4025.0] L Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventDungeonBossSetConsiderBattlePresentation (#46, concurrent=1)
[   4025.0] L Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventDungeonBossSetConsiderBattlePresentation (#51, concurrent=1)
[   4360.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#33, concurrent=0)
[   4405.0] L Dm_Locator[C] - EventDoNothing (#6, concurrent=0)
[   4405.0] L PostProcessingActor[0] - EventResetToInGameParametersDoF (#22, concurrent=0)
[   4405.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
[   4405.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#31, concurrent=1)
[   4405.0] L Enemy_DungeonBoss_Kotake[KotakeKoumeBattleClient] - EventPlayASForTimeline (#45, concurrent=0)
[   4405.0] L Enemy_DungeonBoss_Koume[KotakeKoumeBattleClient] - EventPlayASForTimeline (#50, concurrent=0)
[   4405.0] L Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
[   4405.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#63, concurrent=2)
[   4405.0] L Npc_Navi - EventPlayASForTimeline (#65, concurrent=0)
