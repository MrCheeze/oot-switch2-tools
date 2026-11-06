-------- Event timeline: Dm_DesertColossus_0030 --------
actors: 14
clips: 150
oneshots: 0
cuts: 19
duration: 5840.0
subtimelines: ['Dm_DesertColossus_0030_Effect', 'Dm_DesertColossus_0030_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 620.0
x4: 0
params: (none)

Cut: C03
start time: 1060.0
x4: 0
params: (none)

Cut: C04
start time: 1560.0
x4: 0
params: (none)

Cut: C05
start time: 1830.0
x4: 0
params: (none)

Cut: C06
start time: 2010.0
x4: 0
params: (none)

Cut: C07
start time: 2270.0
x4: 0
params: (none)

Cut: C08
start time: 2480.0
x4: 0
params: (none)

Cut: C09
start time: 2720.0
x4: 0
params: (none)

Cut: C10
start time: 3060.0
x4: 0
params: (none)

Cut: C11
start time: 3360.0
x4: 0
params: (none)

Cut: C12
start time: 3520.0
x4: 0
params: (none)

Cut: C13
start time: 3750.0
x4: 0
params: (none)

Cut: C14
start time: 3830.0
x4: 0
params: (none)

Cut: C15
start time: 3940.0
x4: 0
params: (none)

Cut: C16
start time: 4080.0
x4: 0
params: (none)

Cut: C17
start time: 4590.0
x4: 0
params: (none)

Cut: C18
start time: 4740.0
x4: 0
params: (none)

Cut: C19
start time: 5140.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor[1]
concurrent clips: 1
actions: ['EventDemoProductSupportComment']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

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
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
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

Actor: Player_Event[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
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
UseEventModelAnime: Work/Model/Event/Dm_DesertColossus_0030/Dm_DesertColossus_0030_Player_Child/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DesertColossus_0030/Dm_DesertColossus_0030_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Gerudo_Nabooru_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DesertColossus_0030/Dm_DesertColossus_0030_Npc_Gerudo_GEU_Nabooru/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Kotake[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_DesertColossus_0030.root.as
UseEventModelAnime: Work/Model/Event/Dm_DesertColossus_0030/Dm_DesertColossus_0030_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Koume[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_DesertColossus_0030.root.as
UseEventModelAnime: Work/Model/Event/Dm_DesertColossus_0030/Dm_DesertColossus_0030_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DesertColossus_0030/Dm_DesertColossus_0030_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DesertColossus_0030/Dm_DesertColossus_0030_Dm_Locator/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 500.0
               EndBluarLevel: 0.0
               EndDistance: 1.7000000476837158
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.7000000476837158
               StartFNumber: 70.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
               duration: 620.0
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
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#85, concurrent=0)
               duration: 620.0
               ASName: C01-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#91, concurrent=0)
               duration: 620.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#138, concurrent=0)
               duration: 5840.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[     36.0] E VoicePlayActor[1] - EventStartVoice (#83, concurrent=0)
               duration: 287.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    284.0] E VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
               duration: 32.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_000_c
               OffsetFrame: 30
               Speaker: Player_Child
[    316.0] L VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
[    316.0] E VoicePlayActor[0] - EventStartVoice (#57, concurrent=0)
               duration: 138.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[    323.0] L VoicePlayActor[1] - EventStartVoice (#83, concurrent=0)
[    454.0] L VoicePlayActor[0] - EventStartVoice (#57, concurrent=0)
[    500.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    500.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 120.0
               EndBluarLevel: 0.0
               EndDistance: 3.0
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.7000000476837158
               StartFNumber: 70.0
[    620.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    620.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
[    620.0] L Player_Event[0] - EventPlayASForTimeline (#85, concurrent=0)
[    620.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#91, concurrent=0)
[    620.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 210.0
               EndBluarLevel: 0.0
               EndDistance: 1.0
               EndFNumber: 140.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.0
               StartFNumber: 140.0
[    620.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
               duration: 440.0
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
[    620.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#46, concurrent=1)
               duration: 440.0
               Near: 0.10000000149011612
[    620.0] E Player_Event[0] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 440.0
               ASName: C02-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    620.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#92, concurrent=0)
               duration: 440.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    620.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#97, concurrent=0)
               duration: 440.0
               ASName: C02-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    826.0] E VoicePlayActor[0] - EventStartVoice (#58, concurrent=0)
               duration: 95.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[    830.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    830.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 160.0
               EndBluarLevel: 0.0
               EndDistance: 16.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.0
               StartFNumber: 140.0
[    921.0] L VoicePlayActor[0] - EventStartVoice (#58, concurrent=0)
[    921.0] E VoicePlayActor[0] - EventStartVoice (#59, concurrent=0)
               duration: 137.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[    990.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[    990.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 70.0
               EndBluarLevel: 0.0
               EndDistance: 16.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 16.5
               StartFNumber: 20.0
[   1058.0] L VoicePlayActor[0] - EventStartVoice (#59, concurrent=0)
[   1060.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1060.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
[   1060.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#46, concurrent=1)
[   1060.0] L Player_Event[0] - EventPlayASForTimeline (#86, concurrent=0)
[   1060.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#92, concurrent=0)
[   1060.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#97, concurrent=0)
[   1060.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 500.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 35.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 35.0
[   1060.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
               duration: 500.0
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
[   1060.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#98, concurrent=0)
               duration: 500.0
               ASName: C03-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1060.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#109, concurrent=0)
               duration: 500.0
               ASName: AS-C03-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1060.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#123, concurrent=0)
               duration: 500.0
               ASName: AS-C03-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1111.0] E VoicePlayActor[0] - EventStartVoice (#60, concurrent=0)
               duration: 126.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_003_c
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   1237.0] L VoicePlayActor[0] - EventStartVoice (#60, concurrent=0)
[   1398.0] E VoicePlayActor[0] - EventStartVoice (#61, concurrent=0)
               duration: 50.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   1448.0] L VoicePlayActor[0] - EventStartVoice (#61, concurrent=0)
[   1470.0] E VoicePlayActor[0] - EventStartVoice (#62, concurrent=0)
               duration: 60.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   1530.0] L VoicePlayActor[0] - EventStartVoice (#62, concurrent=0)
[   1556.0] E VoicePlayActor[0] - EventStartVoice (#63, concurrent=0)
               duration: 129.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_006_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   1560.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   1560.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
[   1560.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#98, concurrent=0)
[   1560.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#109, concurrent=0)
[   1560.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#123, concurrent=0)
[   1560.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 270.0
               EndBluarLevel: 0.0
               EndDistance: 8.0
               EndFNumber: 3.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 8.0
               StartFNumber: 3.0
[   1560.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
               duration: 270.0
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
[   1560.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#47, concurrent=1)
               duration: 270.0
               Near: 0.10000000149011612
[   1560.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#99, concurrent=0)
               duration: 270.0
               ASName: C04-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1560.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#110, concurrent=0)
               duration: 270.0
               ASName: AS-C04-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1560.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#124, concurrent=0)
               duration: 270.0
               ASName: AS-C04-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1685.0] L VoicePlayActor[0] - EventStartVoice (#63, concurrent=0)
[   1685.0] E VoicePlayActor[0] - EventStartVoice (#64, concurrent=0)
               duration: 143.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_007_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   1828.0] L VoicePlayActor[0] - EventStartVoice (#64, concurrent=0)
[   1830.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   1830.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
[   1830.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#47, concurrent=1)
[   1830.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#99, concurrent=0)
[   1830.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#110, concurrent=0)
[   1830.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#124, concurrent=0)
[   1830.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 40.0
               EndBluarLevel: 2.0
               EndDistance: 1.75
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.75
               StartFNumber: 30.0
[   1830.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
               duration: 180.0
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
[   1830.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#48, concurrent=1)
               duration: 180.0
               Near: 0.10000000149011612
[   1830.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#100, concurrent=0)
               duration: 180.0
               ASName: C05-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1830.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#111, concurrent=0)
               duration: 180.0
               ASName: AS-C05-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1830.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#125, concurrent=0)
               duration: 180.0
               ASName: AS-C05-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1830.0] E Dm_Locator[0] - EventPlayASForTimeline (#139, concurrent=0)
               duration: 180.0
               ASName: C05-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1853.0] E VoicePlayActor[0] - EventStartVoice (#65, concurrent=0)
               duration: 69.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   1870.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   1870.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 140.0
               EndBluarLevel: 2.0
               EndDistance: 0.75
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.75
               StartFNumber: 30.0
[   1922.0] L VoicePlayActor[0] - EventStartVoice (#65, concurrent=0)
[   2010.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   2010.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
[   2010.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#48, concurrent=1)
[   2010.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#100, concurrent=0)
[   2010.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#111, concurrent=0)
[   2010.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#125, concurrent=0)
[   2010.0] L Dm_Locator[0] - EventPlayASForTimeline (#139, concurrent=0)
[   2010.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 260.0
               EndBluarLevel: 1.0
               EndDistance: 3.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.0
               StartFNumber: 15.0
[   2010.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
               duration: 260.0
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
[   2010.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#49, concurrent=1)
               duration: 260.0
               Near: 0.10000000149011612
[   2010.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#101, concurrent=0)
               duration: 260.0
               ASName: C06-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2010.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#112, concurrent=0)
               duration: 260.0
               ASName: AS-C06-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2010.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#126, concurrent=0)
               duration: 260.0
               ASName: AS-C06-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2010.0] E Dm_Locator[0] - EventPlayASForTimeline (#140, concurrent=0)
               duration: 260.0
               ASName: C06-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2053.0] E VoicePlayActor[0] - EventStartVoice (#66, concurrent=0)
               duration: 202.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_009_c
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   2255.0] L VoicePlayActor[0] - EventStartVoice (#66, concurrent=0)
[   2260.0] E VoicePlayActor[1] - EventStartVoice (#84, concurrent=0)
               duration: 49.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_010_c
               OffsetFrame: 30
               Speaker: Player_Child
[   2270.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   2270.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
[   2270.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#49, concurrent=1)
[   2270.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#101, concurrent=0)
[   2270.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#112, concurrent=0)
[   2270.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#126, concurrent=0)
[   2270.0] L Dm_Locator[0] - EventPlayASForTimeline (#140, concurrent=0)
[   2270.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 210.0
               EndBluarLevel: 0.0
               EndDistance: 2.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.5
               StartFNumber: 20.0
[   2270.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
               duration: 210.0
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
[   2270.0] E Player_Event[0] - EventPlayASForTimeline (#87, concurrent=0)
               duration: 210.0
               ASName: C07-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2270.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#93, concurrent=0)
               duration: 210.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2291.0] E VoicePlayActor[0] - EventStartVoice (#67, concurrent=0)
               duration: 157.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2309.0] L VoicePlayActor[1] - EventStartVoice (#84, concurrent=0)
[   2448.0] L VoicePlayActor[0] - EventStartVoice (#67, concurrent=0)
[   2478.0] E VoicePlayActor[0] - EventStartVoice (#68, concurrent=0)
               duration: 171.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   2480.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   2480.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
[   2480.0] L Player_Event[0] - EventPlayASForTimeline (#87, concurrent=0)
[   2480.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#93, concurrent=0)
[   2480.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 240.0
               EndBluarLevel: 1.0
               EndDistance: 2.0
               EndFNumber: 35.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.0
               StartFNumber: 35.0
[   2480.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
               duration: 240.0
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
[   2480.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#50, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[   2480.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#102, concurrent=0)
               duration: 240.0
               ASName: C08-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2480.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#113, concurrent=0)
               duration: 240.0
               ASName: AS-C08-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2480.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#127, concurrent=0)
               duration: 240.0
               ASName: AS-C08-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2480.0] E Dm_Locator[0] - EventPlayASForTimeline (#141, concurrent=0)
               duration: 240.0
               ASName: C08-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2649.0] L VoicePlayActor[0] - EventStartVoice (#68, concurrent=0)
[   2690.0] E VoicePlayActor[0] - EventStartVoice (#69, concurrent=0)
               duration: 123.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_013_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   2720.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   2720.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
[   2720.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#50, concurrent=1)
[   2720.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#102, concurrent=0)
[   2720.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#113, concurrent=0)
[   2720.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#127, concurrent=0)
[   2720.0] L Dm_Locator[0] - EventPlayASForTimeline (#141, concurrent=0)
[   2720.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 215.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 20.0
[   2720.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
               duration: 340.0
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
[   2720.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#103, concurrent=0)
               duration: 340.0
               ASName: C09-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2720.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#114, concurrent=0)
               duration: 340.0
               ASName: AS-C09-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2720.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#128, concurrent=0)
               duration: 340.0
               ASName: AS-C09-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2720.0] E Dm_Locator[0] - EventPlayASForTimeline (#142, concurrent=0)
               duration: 340.0
               ASName: C09-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2813.0] L VoicePlayActor[0] - EventStartVoice (#69, concurrent=0)
[   2813.0] E VoicePlayActor[0] - EventStartVoice (#70, concurrent=0)
               duration: 386.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_014_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   2935.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   2935.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 125.0
               EndBluarLevel: 1.0
               EndDistance: 4.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 20.0
[   3060.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   3060.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
[   3060.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#103, concurrent=0)
[   3060.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#114, concurrent=0)
[   3060.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#128, concurrent=0)
[   3060.0] L Dm_Locator[0] - EventPlayASForTimeline (#142, concurrent=0)
[   3060.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 300.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 30.0
[   3060.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
               duration: 300.0
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
[   3060.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#51, concurrent=1)
               duration: 300.0
               Near: 0.10000000149011612
[   3060.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#104, concurrent=0)
               duration: 300.0
               ASName: C10-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3060.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#115, concurrent=0)
               duration: 300.0
               ASName: AS-C10-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3060.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#129, concurrent=0)
               duration: 300.0
               ASName: AS-C10-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3060.0] E Dm_Locator[0] - EventPlayASForTimeline (#143, concurrent=0)
               duration: 300.0
               ASName: C10-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3199.0] L VoicePlayActor[0] - EventStartVoice (#70, concurrent=0)
[   3205.0] E VoicePlayActor[0] - EventStartVoice (#71, concurrent=0)
               duration: 117.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_015_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   3322.0] L VoicePlayActor[0] - EventStartVoice (#71, concurrent=0)
[   3349.0] E VoicePlayActor[0] - EventStartVoice (#72, concurrent=0)
               duration: 381.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_016_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   3360.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   3360.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
[   3360.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#51, concurrent=1)
[   3360.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#104, concurrent=0)
[   3360.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#115, concurrent=0)
[   3360.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#129, concurrent=0)
[   3360.0] L Dm_Locator[0] - EventPlayASForTimeline (#143, concurrent=0)
[   3360.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 160.0
               EndBluarLevel: 2.5
               EndDistance: 2.200000047683716
               EndFNumber: 90.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 2.200000047683716
               StartFNumber: 90.0
[   3360.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
               duration: 160.0
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
[   3360.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#52, concurrent=1)
               duration: 160.0
               Near: 0.10000000149011612
[   3360.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#130, concurrent=0)
               duration: 160.0
               ASName: AS-C11-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3360.0] E Dm_Locator[0] - EventPlayASForTimeline (#144, concurrent=0)
               duration: 160.0
               ASName: C11-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3520.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   3520.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
[   3520.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#52, concurrent=1)
[   3520.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#130, concurrent=0)
[   3520.0] L Dm_Locator[0] - EventPlayASForTimeline (#144, concurrent=0)
[   3520.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 230.0
               EndBluarLevel: 1.0
               EndDistance: 4.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 4.5
               StartFNumber: 20.0
[   3520.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
               duration: 230.0
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
[   3520.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#105, concurrent=0)
               duration: 230.0
               ASName: C12-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3520.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#116, concurrent=0)
               duration: 230.0
               ASName: AS-C12-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3520.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#131, concurrent=0)
               duration: 230.0
               ASName: AS-C12-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3520.0] E Dm_Locator[0] - EventPlayASForTimeline (#145, concurrent=0)
               duration: 230.0
               ASName: C12-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3730.0] L VoicePlayActor[0] - EventStartVoice (#72, concurrent=0)
[   3737.0] E VoicePlayActor[0] - EventStartVoice (#73, concurrent=0)
               duration: 63.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_017_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   3750.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   3750.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
[   3750.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#105, concurrent=0)
[   3750.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#116, concurrent=0)
[   3750.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#131, concurrent=0)
[   3750.0] L Dm_Locator[0] - EventPlayASForTimeline (#145, concurrent=0)
[   3750.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 80.0
               EndBluarLevel: 1.0
               EndDistance: 4.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 4.5
               StartFNumber: 30.0
[   3750.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
               duration: 80.0
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
[   3750.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#106, concurrent=0)
               duration: 80.0
               ASName: C13-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3750.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#117, concurrent=0)
               duration: 80.0
               ASName: AS-C13-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3750.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#132, concurrent=0)
               duration: 80.0
               ASName: AS-C13-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3750.0] E Dm_Locator[0] - EventPlayASForTimeline (#146, concurrent=0)
               duration: 80.0
               ASName: C13-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3800.0] L VoicePlayActor[0] - EventStartVoice (#73, concurrent=0)
[   3800.0] E VoicePlayActor[0] - EventStartVoice (#74, concurrent=0)
               duration: 124.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_018_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   3830.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   3830.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
[   3830.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#106, concurrent=0)
[   3830.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#117, concurrent=0)
[   3830.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#132, concurrent=0)
[   3830.0] L Dm_Locator[0] - EventPlayASForTimeline (#146, concurrent=0)
[   3830.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 110.0
               EndBluarLevel: 0.0
               EndDistance: 4.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 4.5
               StartFNumber: 20.0
[   3830.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
               duration: 110.0
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
[   3830.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#53, concurrent=1)
               duration: 110.0
               Near: 0.4000000059604645
[   3830.0] E Player_Event[0] - EventPlayASForTimeline (#88, concurrent=0)
               duration: 110.0
               ASName: C14-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3830.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#94, concurrent=0)
               duration: 110.0
               ASName: C14-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3924.0] L VoicePlayActor[0] - EventStartVoice (#74, concurrent=0)
[   3940.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   3940.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
[   3940.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#53, concurrent=1)
[   3940.0] L Player_Event[0] - EventPlayASForTimeline (#88, concurrent=0)
[   3940.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#94, concurrent=0)
[   3940.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 140.0
               EndBluarLevel: 1.0
               EndDistance: 3.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.0
               StartFNumber: 20.0
[   3940.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
               duration: 140.0
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
[   3940.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#54, concurrent=1)
               duration: 140.0
               Near: 0.10000000149011612
[   3940.0] E VoicePlayActor[0] - EventStartVoice (#75, concurrent=0)
               duration: 126.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_019_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   3940.0] E Player_Event[0] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 140.0
               ASName: C15-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3940.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#95, concurrent=0)
               duration: 140.0
               ASName: C15-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3940.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#107, concurrent=0)
               duration: 140.0
               ASName: C15-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3940.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#118, concurrent=0)
               duration: 140.0
               ASName: AS-C15-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3940.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#133, concurrent=0)
               duration: 140.0
               ASName: AS-C15-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3940.0] E Dm_Locator[0] - EventPlayASForTimeline (#147, concurrent=0)
               duration: 140.0
               ASName: C15-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4066.0] L VoicePlayActor[0] - EventStartVoice (#75, concurrent=0)
[   4066.0] E VoicePlayActor[0] - EventStartVoice (#76, concurrent=0)
               duration: 242.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_020_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   4080.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   4080.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
[   4080.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#54, concurrent=1)
[   4080.0] L Player_Event[0] - EventPlayASForTimeline (#89, concurrent=0)
[   4080.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#95, concurrent=0)
[   4080.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#107, concurrent=0)
[   4080.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#118, concurrent=0)
[   4080.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#133, concurrent=0)
[   4080.0] L Dm_Locator[0] - EventPlayASForTimeline (#147, concurrent=0)
[   4080.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 510.0
               EndBluarLevel: 1.0
               EndDistance: 5.599999904632568
               EndFNumber: 90.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.599999904632568
               StartFNumber: 90.0
[   4080.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
               duration: 510.0
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
[   4080.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#108, concurrent=0)
               duration: 510.0
               ASName: C16-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4080.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#119, concurrent=0)
               duration: 510.0
               ASName: AS-C16-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4080.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#134, concurrent=0)
               duration: 510.0
               ASName: AS-C16-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4080.0] E Dm_Locator[0] - EventPlayASForTimeline (#148, concurrent=0)
               duration: 510.0
               ASName: C16-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4308.0] L VoicePlayActor[0] - EventStartVoice (#76, concurrent=0)
[   4308.0] E VoicePlayActor[0] - EventStartVoice (#77, concurrent=0)
               duration: 160.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_021_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   4468.0] L VoicePlayActor[0] - EventStartVoice (#77, concurrent=0)
[   4566.0] E VoicePlayActor[0] - EventStartVoice (#78, concurrent=0)
               duration: 93.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_022_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   4590.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   4590.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
[   4590.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#108, concurrent=0)
[   4590.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#119, concurrent=0)
[   4590.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#134, concurrent=0)
[   4590.0] L Dm_Locator[0] - EventPlayASForTimeline (#148, concurrent=0)
[   4590.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 150.0
               EndBluarLevel: 0.5
               EndDistance: 2.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 2.5
               StartFNumber: 20.0
[   4590.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
               duration: 150.0
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
[   4590.0] E Player_Event[0] - EventPlayASForTimeline (#90, concurrent=0)
               duration: 150.0
               ASName: C17-Player_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4590.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#96, concurrent=0)
               duration: 150.0
               ASName: C17-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4590.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#120, concurrent=0)
               duration: 150.0
               ASName: AS-C17-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4590.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#135, concurrent=0)
               duration: 150.0
               ASName: AS-C17-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4590.0] E Dm_Locator[0] - EventPlayASForTimeline (#149, concurrent=0)
               duration: 150.0
               ASName: C17-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4659.0] L VoicePlayActor[0] - EventStartVoice (#78, concurrent=0)
[   4740.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   4740.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
[   4740.0] L Player_Event[0] - EventPlayASForTimeline (#90, concurrent=0)
[   4740.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#96, concurrent=0)
[   4740.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#120, concurrent=0)
[   4740.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#135, concurrent=0)
[   4740.0] L Dm_Locator[0] - EventPlayASForTimeline (#149, concurrent=0)
[   4740.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 400.0
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
[   4740.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
               duration: 400.0
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
[   4740.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#121, concurrent=0)
               duration: 400.0
               ASName: AS-C18-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4740.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#136, concurrent=0)
               duration: 400.0
               ASName: AS-C18-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4835.0] E VoicePlayActor[0] - EventStartVoice (#79, concurrent=0)
               duration: 241.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_023_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   5076.0] L VoicePlayActor[0] - EventStartVoice (#79, concurrent=0)
[   5119.0] E VoicePlayActor[0] - EventStartVoice (#80, concurrent=0)
               duration: 317.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_024_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   5140.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
[   5140.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
[   5140.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#121, concurrent=0)
[   5140.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#136, concurrent=0)
[   5140.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 390.0
               EndBluarLevel: 1.0
               EndDistance: 0.800000011920929
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 0.800000011920929
               StartFNumber: 40.0
[   5140.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
               duration: 700.0
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
[   5140.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
               duration: 700.0
               Near: 0.10000000149011612
[   5140.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#122, concurrent=0)
               duration: 700.0
               ASName: AS-C19-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5140.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#137, concurrent=0)
               duration: 700.0
               ASName: AS-C19-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5436.0] L VoicePlayActor[0] - EventStartVoice (#80, concurrent=0)
[   5446.0] E VoicePlayActor[0] - EventStartVoice (#81, concurrent=0)
               duration: 159.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_025_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   5530.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
[   5530.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 310.0
               EndBluarLevel: 0.5
               EndDistance: 10.0
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 0.800000011920929
               StartFNumber: 40.0
[   5605.0] L VoicePlayActor[0] - EventStartVoice (#81, concurrent=0)
[   5608.0] E VoicePlayActor[0] - EventStartVoice (#82, concurrent=0)
               duration: 170.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0030:Dm_DesertColossus_0030_Text_026_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   5778.0] L VoicePlayActor[0] - EventStartVoice (#82, concurrent=0)
[   5780.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   5840.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[   5840.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
[   5840.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
[   5840.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
[   5840.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#122, concurrent=0)
[   5840.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#137, concurrent=0)
[   5840.0] L Npc_Navi - EventGoOffstageForUser (#138, concurrent=0)
