-------- Event timeline: Dm_SpiritTemple_0010 --------
actors: 12
clips: 78
oneshots: 0
cuts: 9
duration: 3883.0
subtimelines: ['Dm_SpiritTemple_0010_Effect', 'Dm_SpiritTemple_0010_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 350.0
x4: 0
params: (none)

Cut: C03
start time: 1130.0
x4: 0
params: (none)

Cut: C03_50
start time: 1610.0
x4: 0
params: (none)

Cut: C04
start time: 1990.0
x4: 0
params: (none)

Cut: C05
start time: 2230.0
x4: 0
params: (none)

Cut: C06
start time: 3270.0
x4: 0
params: (none)

Cut: C07
start time: 3450.0
x4: 0
params: (none)

Cut: C08
start time: 3600.0
x4: 0
params: (none)


===== Actors =====

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
actions: ['EventEventFadeInForTimeline', 'EventDoNothing']
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

Actor: Enemy_MiddleBoss_IronKnuckle_Nabooru
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 4
IsBindNearestActor: true
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_0010_Enemy_MiddleBoss_IronKnuckle_Nabooru.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0010/Dm_SpiritTemple_0010_Enemy_IronKnuckle_Silver/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Kotake[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_0010.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0010/Dm_SpiritTemple_0010_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Koume[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_0010.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0010/Dm_SpiritTemple_0010_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0010/Dm_SpiritTemple_0010_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0010/Dm_SpiritTemple_0010_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerSoundStartBossBgm']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0010/Dm_SpiritTemple_0010_Npc_Navi/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E UISystemActor[0] - EventDoNothing (#0, concurrent=0)
               duration: 90.0
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 350.0
               EndBluarLevel: 4.0
               EndDistance: 9.0
               EndFNumber: 15.84000015258789
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 4.0
               StartDistance: 9.0
               StartFNumber: 15.84000015258789
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
               duration: 350.0
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
[      0.0] E Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#50, concurrent=0)
               duration: 350.0
               ASName: AS-C01-Enemy_IronKnuckle_Silver-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#59, concurrent=0)
               duration: 350.0
               ASName: AS-C01-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#64, concurrent=0)
               duration: 350.0
               ASName: AS-C01-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#71, concurrent=1)
               duration: 350.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#72, concurrent=2)
               duration: 350.0
               BootsType: 0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#76, concurrent=0)
               duration: 3600.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[     90.0] L UISystemActor[0] - EventDoNothing (#0, concurrent=0)
[     90.0] E UISystemActor[0] - EventEventFadeInForTimeline (#1, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[    150.0] L UISystemActor[0] - EventEventFadeInForTimeline (#1, concurrent=0)
[    350.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    350.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
[    350.0] L Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#50, concurrent=0)
[    350.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#59, concurrent=0)
[    350.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#64, concurrent=0)
[    350.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#71, concurrent=1)
[    350.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#72, concurrent=2)
[    350.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 130.0
               EndBluarLevel: 2.5
               EndDistance: 0.699999988079071
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.800000011920929
               StartFNumber: 65.0
[    350.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
               duration: 780.0
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
[    350.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#32, concurrent=1)
               duration: 780.0
               Near: 0.10000000149011612
[    350.0] E Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#51, concurrent=0)
               duration: 780.0
               ASName: AS-C02-Enemy_IronKnuckle_Silver-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    350.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#60, concurrent=0)
               duration: 780.0
               ASName: AS-C02-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    350.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#65, concurrent=0)
               duration: 780.0
               ASName: AS-C02-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    367.0] E VoicePlayActor[0] - EventStartVoice (#38, concurrent=0)
               duration: 158.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0010:Dm_SpiritTemple_0010_Text_001_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[    480.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    480.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 170.0
               EndBluarLevel: 3.0
               EndDistance: 0.6000000238418579
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 0.699999988079071
               StartFNumber: 80.0
[    525.0] L VoicePlayActor[0] - EventStartVoice (#38, concurrent=0)
[    525.0] E VoicePlayActor[0] - EventStartVoice (#39, concurrent=0)
               duration: 230.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0010:Dm_SpiritTemple_0010_Text_002_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[    650.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    650.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 215.0
               EndBluarLevel: 2.0
               EndDistance: 0.5
               EndFNumber: 130.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.6000000238418579
               StartFNumber: 100.0
[    755.0] L VoicePlayActor[0] - EventStartVoice (#39, concurrent=0)
[    755.0] E VoicePlayActor[0] - EventStartVoice (#40, concurrent=0)
               duration: 157.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0010:Dm_SpiritTemple_0010_Text_003_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[    865.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[    865.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 265.0
               EndBluarLevel: 2.0
               EndDistance: 0.4000000059604645
               EndFNumber: 170.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.5
               StartFNumber: 130.0
[    912.0] L VoicePlayActor[0] - EventStartVoice (#40, concurrent=0)
[    920.0] E VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
               duration: 193.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0010:Dm_SpiritTemple_0010_Text_004_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   1113.0] L VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
[   1130.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1130.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
[   1130.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#32, concurrent=1)
[   1130.0] L Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#51, concurrent=0)
[   1130.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#60, concurrent=0)
[   1130.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#65, concurrent=0)
[   1130.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 480.0
               EndBluarLevel: 2.0
               EndDistance: 8.0
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 8.0
               StartFNumber: 40.0
[   1130.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
               duration: 480.0
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
[   1130.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#33, concurrent=1)
               duration: 480.0
               Near: 0.10000000149011612
[   1130.0] E Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#52, concurrent=0)
               duration: 480.0
               ASName: AS-C03-Enemy_IronKnuckle_Silver-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1130.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#61, concurrent=0)
               duration: 480.0
               ASName: AS-C03-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1130.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#66, concurrent=0)
               duration: 480.0
               ASName: AS-C03-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1130.0] E Player_Event[0] - EventPlayASForTimeline (#69, concurrent=0)
               duration: 480.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1130.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 480.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1154.0] E VoicePlayActor[0] - EventStartVoice (#42, concurrent=0)
               duration: 328.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0010:Dm_SpiritTemple_0010_Text_005_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   1482.0] L VoicePlayActor[0] - EventStartVoice (#42, concurrent=0)
[   1482.0] E VoicePlayActor[0] - EventStartVoice (#43, concurrent=0)
               duration: 113.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0010:Dm_SpiritTemple_0010_Text_006_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   1595.0] L VoicePlayActor[0] - EventStartVoice (#43, concurrent=0)
[   1595.0] E VoicePlayActor[0] - EventStartVoice (#44, concurrent=0)
               duration: 253.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0010:Dm_SpiritTemple_0010_Text_007_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   1610.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   1610.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
[   1610.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#33, concurrent=1)
[   1610.0] L Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#52, concurrent=0)
[   1610.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#61, concurrent=0)
[   1610.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#66, concurrent=0)
[   1610.0] L Player_Event[0] - EventPlayASForTimeline (#69, concurrent=0)
[   1610.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
[   1610.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 380.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 30.0
[   1610.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
               duration: 380.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1610.0] E Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#53, concurrent=0)
               duration: 380.0
               ASName: AS-C03_50-Enemy_IronKnuckle_Silver-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1610.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#62, concurrent=0)
               duration: 380.0
               ASName: AS-C03_50-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1610.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 380.0
               ASName: AS-C03_50-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1848.0] L VoicePlayActor[0] - EventStartVoice (#44, concurrent=0)
[   1872.0] E VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
               duration: 106.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0010:Dm_SpiritTemple_0010_Text_008_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   1978.0] L VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
[   1990.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   1990.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
[   1990.0] L Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#53, concurrent=0)
[   1990.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#62, concurrent=0)
[   1990.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#67, concurrent=0)
[   1990.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 240.0
               EndBluarLevel: 3.0
               EndDistance: 1.5
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.5
               StartFNumber: 50.0
[   1990.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
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
[   1990.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#34, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[   1990.0] E Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#54, concurrent=0)
               duration: 240.0
               ASName: AS-C04-Enemy_IronKnuckle_Silver-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2003.0] E VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
               duration: 224.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0010:Dm_SpiritTemple_0010_Text_009_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   2227.0] L VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
[   2227.0] E VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
               duration: 352.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0010:Dm_SpiritTemple_0010_Text_010_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   2230.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   2230.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
[   2230.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#34, concurrent=1)
[   2230.0] L Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#54, concurrent=0)
[   2230.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 200.0
               EndBluarLevel: 2.0
               EndDistance: 1.5
               EndFNumber: 45.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.2999999523162842
               StartFNumber: 40.0
[   2230.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
               duration: 1040.0
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
[   2230.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#35, concurrent=1)
               duration: 290.0
               Near: 0.10000000149011612
[   2230.0] E Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#55, concurrent=0)
               duration: 1040.0
               ASName: AS-C05-Enemy_IronKnuckle_Silver-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2230.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#63, concurrent=0)
               duration: 1040.0
               ASName: AS-C05-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2230.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#68, concurrent=0)
               duration: 1040.0
               ASName: AS-C05-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2430.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   2430.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 400.0
               EndBluarLevel: 2.0
               EndDistance: 1.5
               EndFNumber: 45.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.5
               StartFNumber: 45.0
[   2520.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#35, concurrent=1)
[   2579.0] L VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
[   2830.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   2830.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 80.0
               EndBluarLevel: 2.0
               EndDistance: 0.800000011920929
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.5
               StartFNumber: 45.0
[   2910.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   2910.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 360.0
               EndBluarLevel: 2.0
               EndDistance: 0.800000011920929
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.800000011920929
               StartFNumber: 60.0
[   2960.0] E VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
               duration: 297.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0010:Dm_SpiritTemple_0010_Text_011_b
               OffsetFrame: 30
               Speaker: Enemy_MiddleBoss_IronKnuckle_Nabooru
[   3257.0] L VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
[   3270.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   3270.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
[   3270.0] L Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#55, concurrent=0)
[   3270.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#63, concurrent=0)
[   3270.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#68, concurrent=0)
[   3270.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 110.0
               EndBluarLevel: 3.0
               EndDistance: 0.75
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 0.75
               StartFNumber: 60.0
[   3270.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
               duration: 180.0
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
[   3270.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#36, concurrent=1)
               duration: 180.0
               Near: 0.10000000149011612
[   3270.0] E Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#56, concurrent=0)
               duration: 180.0
               ASName: C06-Enemy_IronKnuckle_Silver-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3380.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   3380.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 40.0
               EndBluarLevel: 2.0
               EndDistance: 0.75
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 0.75
               StartFNumber: 60.0
[   3420.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   3420.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 30.0
               EndBluarLevel: 2.0
               EndDistance: 0.75
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.75
               StartFNumber: 60.0
[   3450.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   3450.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
[   3450.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#36, concurrent=1)
[   3450.0] L Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#56, concurrent=0)
[   3450.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 40.0
               EndBluarLevel: 2.0
               EndDistance: 1.7999999523162842
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.7999999523162842
               StartFNumber: 40.0
[   3450.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
               duration: 150.0
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
[   3450.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#37, concurrent=1)
               duration: 150.0
               Near: 0.4000000059604645
[   3450.0] E Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#57, concurrent=0)
               duration: 150.0
               ASName: AS-C07-Enemy_IronKnuckle_Silver-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3457.0] E VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
               duration: 199.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0010:Dm_SpiritTemple_0010_Text_012_b
               OffsetFrame: 30
               Speaker: Enemy_MiddleBoss_IronKnuckle_Nabooru
[   3490.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   3490.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 60.0
               EndBluarLevel: 4.0
               EndDistance: 1.2000000476837158
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.7999999523162842
               StartFNumber: 40.0
[   3550.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   3550.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 50.0
               EndBluarLevel: 4.0
               EndDistance: 1.2000000476837158
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 4.0
               StartDistance: 1.2000000476837158
               StartFNumber: 100.0
[   3580.0] E SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#75, concurrent=0)
               duration: 38.0
               BgmName: BGM_MiddleBoss
[   3600.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   3600.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
[   3600.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#37, concurrent=1)
[   3600.0] L Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#57, concurrent=0)
[   3600.0] L Npc_Navi - EventGoOffstageForUser (#76, concurrent=0)
[   3600.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 60.0
               EndBluarLevel: 2.0
               EndDistance: 2.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.5
               StartFNumber: 20.0
[   3600.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
               duration: 283.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C08_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3600.0] E Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#58, concurrent=0)
               duration: 283.0
               ASName: C08-Enemy_IronKnuckle_Silver-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3600.0] E Player_Event[0] - EventPlayASForTimeline (#70, concurrent=0)
               duration: 283.0
               ASName: C08-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3600.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#73, concurrent=2)
               duration: 283.0
[   3600.0] E Npc_Navi - EventPlayASForTimeline (#77, concurrent=0)
               duration: 283.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3618.0] L SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#75, concurrent=0)
[   3656.0] L VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
[   3660.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   3660.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 140.0
               EndBluarLevel: 2.0
               EndDistance: 2.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.5
               StartFNumber: 20.0
[   3800.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   3800.0] E PostProcessingActor[0] - EventResetToInGameParametersDoF (#22, concurrent=0)
               duration: 83.0
               IsWaitEnd: true
               TransitionFrame: 0
[   3883.0] L PostProcessingActor[0] - EventResetToInGameParametersDoF (#22, concurrent=0)
[   3883.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
[   3883.0] L Enemy_MiddleBoss_IronKnuckle_Nabooru - EventPlayASForTimeline (#58, concurrent=0)
[   3883.0] L Player_Event[0] - EventPlayASForTimeline (#70, concurrent=0)
[   3883.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#73, concurrent=2)
[   3883.0] L Npc_Navi - EventPlayASForTimeline (#77, concurrent=0)
