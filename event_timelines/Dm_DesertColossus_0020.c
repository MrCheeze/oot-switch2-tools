-------- Event timeline: Dm_DesertColossus_0020 --------
actors: 9
clips: 58
oneshots: 0
cuts: 8
duration: 4336.0
subtimelines: ['Dm_DesertColossus_0020_Effect', 'Dm_DesertColossus_0020_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 510.0
x4: 0
params: (none)

Cut: C03
start time: 1231.0
x4: 0
params: (none)

Cut: C04
start time: 1367.0
x4: 0
params: (none)

Cut: C05
start time: 1477.0
x4: 0
params: (none)

Cut: C06
start time: 2183.0
x4: 0
params: (none)

Cut: C07
start time: 2654.0
x4: 0
params: (none)

Cut: C08
start time: 3115.0
x4: 0
params: (none)


===== Actors =====

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline']
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

Actor: UISystemActor
concurrent clips: 1
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Npc_Gerudo_Nabooru_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 0.0
- 0.0
- 0.0
UseEventAS: Work/AS/Root/Event/Dm_DesertColossus_0020_Npc_Gerudo_GEU_Nabooru.root.as
UseEventModelAnime: Work/Model/Event/Dm_DesertColossus_0020/Dm_DesertColossus_0020_Npc_Gerudo_GEU_Nabooru/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
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
EventMemberCreateMethod: 0
ExceptionalBindType: 4
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DesertColossus_0020/Dm_DesertColossus_0020_Player_Child/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventNaviPlayLipSync', 'EventNaviStopLipSync']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DesertColossus_0020/Dm_DesertColossus_0020_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventCamera[4]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DesertColossus_0020/Dm_DesertColossus_0020/workspace.pp__ModelProject.gyml

Actor: VoicePlayActor[5]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
               duration: 510.0
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
[      0.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#11, concurrent=0)
               duration: 510.0
               ASName: AS-C01-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#23, concurrent=1)
               duration: 100.0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#31, concurrent=0)
               duration: 4336.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E EventCamera[4] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
               duration: 510.0
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
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#23, concurrent=1)
[    119.0] E VoicePlayActor[5] - EventStartVoice (#45, concurrent=0)
               duration: 389.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[    508.0] L VoicePlayActor[5] - EventStartVoice (#45, concurrent=0)
[    510.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
[    510.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#11, concurrent=0)
[    510.0] L EventCamera[4] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
[    510.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 721.0
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
[    510.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#12, concurrent=0)
               duration: 721.0
               ASName: C02-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    510.0] E EventCamera[4] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
               duration: 721.0
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
[    510.0] E EventCamera[4] - EventSetNearCurrentCameraAnimation (#40, concurrent=1)
               duration: 721.0
               Near: 0.20000000298023224
[    510.0] E VoicePlayActor[5] - EventStartVoice (#46, concurrent=0)
               duration: 296.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[    806.0] L VoicePlayActor[5] - EventStartVoice (#46, concurrent=0)
[    806.0] E VoicePlayActor[5] - EventStartVoice (#47, concurrent=0)
               duration: 204.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   1010.0] L VoicePlayActor[5] - EventStartVoice (#47, concurrent=0)
[   1193.0] E VoicePlayActor[5] - EventStartVoice (#48, concurrent=0)
               duration: 49.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   1231.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[   1231.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#12, concurrent=0)
[   1231.0] L EventCamera[4] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
[   1231.0] L EventCamera[4] - EventSetNearCurrentCameraAnimation (#40, concurrent=1)
[   1231.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 136.0
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
[   1231.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#13, concurrent=0)
               duration: 136.0
               ASName: C03-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1231.0] E Player_Event[0] - EventPlayASForTimeline (#18, concurrent=0)
               duration: 136.0
               ASName: C03-Player_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1231.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 136.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1231.0] E EventCamera[4] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
               duration: 136.0
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
[   1231.0] E EventCamera[4] - EventSetNearCurrentCameraAnimation (#41, concurrent=1)
               duration: 136.0
               Near: 0.10000000149011612
[   1242.0] L VoicePlayActor[5] - EventStartVoice (#48, concurrent=0)
[   1314.0] E VoicePlayActor[5] - EventStartVoice (#49, concurrent=0)
               duration: 161.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   1367.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[   1367.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#13, concurrent=0)
[   1367.0] L Player_Event[0] - EventPlayASForTimeline (#18, concurrent=0)
[   1367.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#24, concurrent=0)
[   1367.0] L EventCamera[4] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
[   1367.0] L EventCamera[4] - EventSetNearCurrentCameraAnimation (#41, concurrent=1)
[   1367.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 110.0
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
[   1367.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#14, concurrent=0)
               duration: 110.0
               ASName: C04-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1367.0] E Player_Event[0] - EventPlayASForTimeline (#19, concurrent=0)
               duration: 110.0
               ASName: C04-Player_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1367.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 110.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1367.0] E EventCamera[4] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
               duration: 110.0
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
[   1367.0] E EventCamera[4] - EventSetNearCurrentCameraAnimation (#42, concurrent=1)
               duration: 110.0
               Near: 0.20000000298023224
[   1475.0] L VoicePlayActor[5] - EventStartVoice (#49, concurrent=0)
[   1477.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   1477.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#14, concurrent=0)
[   1477.0] L Player_Event[0] - EventPlayASForTimeline (#19, concurrent=0)
[   1477.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#25, concurrent=0)
[   1477.0] L EventCamera[4] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
[   1477.0] L EventCamera[4] - EventSetNearCurrentCameraAnimation (#42, concurrent=1)
[   1477.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 706.0
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
[   1477.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#15, concurrent=0)
               duration: 706.0
               ASName: C05-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1477.0] E Player_Event[0] - EventPlayASForTimeline (#20, concurrent=0)
               duration: 706.0
               ASName: C05-Player_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1477.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 706.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1477.0] E EventCamera[4] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
               duration: 706.0
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
[   1477.0] E EventCamera[4] - EventSetNearCurrentCameraAnimation (#43, concurrent=1)
               duration: 706.0
               Near: 0.20000000298023224
[   1492.0] E VoicePlayActor[5] - EventStartVoice (#50, concurrent=0)
               duration: 362.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   1854.0] L VoicePlayActor[5] - EventStartVoice (#50, concurrent=0)
[   1926.0] E VoicePlayActor[5] - EventStartVoice (#51, concurrent=0)
               duration: 246.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   2172.0] L VoicePlayActor[5] - EventStartVoice (#51, concurrent=0)
[   2172.0] E VoicePlayActor[5] - EventStartVoice (#52, concurrent=0)
               duration: 458.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2183.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   2183.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#15, concurrent=0)
[   2183.0] L Player_Event[0] - EventPlayASForTimeline (#20, concurrent=0)
[   2183.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#26, concurrent=0)
[   2183.0] L EventCamera[4] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
[   2183.0] L EventCamera[4] - EventSetNearCurrentCameraAnimation (#43, concurrent=1)
[   2183.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 471.0
               EndBluarLevel: 1.399999976158142
               EndDistance: 1.850000023841858
               EndFNumber: 85.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.399999976158142
               StartDistance: 1.850000023841858
               StartFNumber: 85.0
[   2183.0] E Player_Event[0] - EventPlayASForTimeline (#21, concurrent=0)
               duration: 471.0
               ASName: C06-Player_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2183.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 471.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2183.0] E EventCamera[4] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
               duration: 471.0
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
[   2183.0] E EventCamera[4] - EventSetNearCurrentCameraAnimation (#44, concurrent=1)
               duration: 471.0
               Near: 0.10000000149011612
[   2202.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#29, concurrent=1)
               duration: 452.0
[   2630.0] L VoicePlayActor[5] - EventStartVoice (#52, concurrent=0)
[   2640.0] E VoicePlayActor[5] - EventStartVoice (#53, concurrent=0)
               duration: 165.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   2654.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   2654.0] L Player_Event[0] - EventPlayASForTimeline (#21, concurrent=0)
[   2654.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#27, concurrent=0)
[   2654.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#29, concurrent=1)
[   2654.0] L EventCamera[4] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
[   2654.0] L EventCamera[4] - EventSetNearCurrentCameraAnimation (#44, concurrent=1)
[   2654.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 461.0
               EndBluarLevel: 1.7000000476837158
               EndDistance: 2.5999999046325684
               EndFNumber: 145.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.7000000476837158
               StartDistance: 2.5999999046325684
               StartFNumber: 145.0
[   2654.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#16, concurrent=0)
               duration: 461.0
               ASName: C07-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2654.0] E Player_Event[0] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 461.0
               ASName: C07-Player_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2654.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 461.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2654.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#30, concurrent=1)
               duration: 20.0
[   2654.0] E EventCamera[4] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
               duration: 461.0
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
[   2674.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#30, concurrent=1)
[   2805.0] L VoicePlayActor[5] - EventStartVoice (#53, concurrent=0)
[   2805.0] E VoicePlayActor[5] - EventStartVoice (#54, concurrent=0)
               duration: 108.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   2913.0] L VoicePlayActor[5] - EventStartVoice (#54, concurrent=0)
[   2940.0] E VoicePlayActor[5] - EventStartVoice (#55, concurrent=0)
               duration: 157.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   3097.0] L VoicePlayActor[5] - EventStartVoice (#55, concurrent=0)
[   3115.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   3115.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#16, concurrent=0)
[   3115.0] L Player_Event[0] - EventPlayASForTimeline (#22, concurrent=0)
[   3115.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#28, concurrent=0)
[   3115.0] L EventCamera[4] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
[   3115.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 1221.0
               EndBluarLevel: 2.200000047683716
               EndDistance: 2.9000000953674316
               EndFNumber: 85.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.200000047683716
               StartDistance: 2.9000000953674316
               StartFNumber: 85.0
[   3115.0] E Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#17, concurrent=0)
               duration: 1221.0
               ASName: C08-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3115.0] E EventCamera[4] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
               duration: 1221.0
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
[   3154.0] E VoicePlayActor[5] - EventStartVoice (#56, concurrent=0)
               duration: 266.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   3420.0] L VoicePlayActor[5] - EventStartVoice (#56, concurrent=0)
[   3438.0] E VoicePlayActor[5] - EventStartVoice (#57, concurrent=0)
               duration: 389.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DesertColossus_0020:Dm_DesertColossus_0020_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Child
[   3827.0] L VoicePlayActor[5] - EventStartVoice (#57, concurrent=0)
[   3836.0] E UISystemActor - EventShowDemoNicknameUIForTimeline (#9, concurrent=0)
               duration: 320.0
               DemoNicknamePos: 10
               DemoNicknameType: 0
               InAnimFrame: -1
               IsWaitEnd: true
               NameMessageLabel: ActorMsg/Npc:Npc_Gerudo_Nabooru_Child_Name
               NicknameMessageLabel: ActorMsg/Nickname:Npc_Gerudo_Nabooru_Child
               OutAnimFrame: -1
[   4156.0] L UISystemActor - EventShowDemoNicknameUIForTimeline (#9, concurrent=0)
[   4276.0] E UISystemActor - EventEventFadeOutForTimeline (#10, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   4336.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   4336.0] L UISystemActor - EventEventFadeOutForTimeline (#10, concurrent=0)
[   4336.0] L Npc_Gerudo_Nabooru_Child[0] - EventPlayASForTimeline (#17, concurrent=0)
[   4336.0] L Npc_Navi - EventGoOffstageForUser (#31, concurrent=0)
[   4336.0] L EventCamera[4] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
