-------- Event timeline: Dm_TimeTemple_0125 --------
actors: 9
clips: 71
oneshots: 0
cuts: 11
duration: 5185.0
subtimelines: ['Dm_TimeTemple_0125_Effect', 'Dm_TimeTemple_0125_Env']
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 720.0
x4: 0
params: (none)

Cut: cut03
start time: 2280.0
x4: 0
params: (none)

Cut: cut04
start time: 2935.0
x4: 0
params: (none)

Cut: cut05
start time: 3265.0
x4: 0
params: (none)

Cut: cut06
start time: 3425.0
x4: 0
params: (none)

Cut: cut07
start time: 3625.0
x4: 0
params: (none)

Cut: cut08
start time: 4040.0
x4: 0
params: (none)

Cut: cut09
start time: 4410.0
x4: 0
params: (none)

Cut: cut10
start time: 4560.0
x4: 0
params: (none)

Cut: cut11
start time: 4745.0
x4: 0
params: (none)


===== Actors =====

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeOutForTimeline', 'EventEventFadeInForTimeline']
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

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0125/Dm_TimeTemple_0125_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Zelda_Adult[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_TimeTemple_0125.root.as
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0125/Dm_TimeTemple_0125_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Zelda_Adult_Scalable[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_TimeTemple_0125.root.as
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0125/Dm_TimeTemple_0125_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml

Actor: PostProcessingActor[10]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
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
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0125/Dm_TimeTemple_0125_Player_Adult/workspace.pp__ModelProject.gyml

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

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Npc_Navi - EventGoOffstageForUser (#17, concurrent=0)
               duration: 5185.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#18, concurrent=0)
               duration: 720.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 720.0
               ASName: C01-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E PostProcessingActor[10] - EventSetDoFForTimeline (#35, concurrent=0)
               duration: 720.0
               EndBluarLevel: 1.0
               EndDistance: 2.299999952316284
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.299999952316284
               StartFNumber: 50.0
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 720.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#53, concurrent=1)
               duration: 100.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#54, concurrent=2)
               duration: 100.0
               BootsType: 0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
               duration: 720.0
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
[     30.0] E VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
               duration: 328.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#53, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#54, concurrent=2)
[    358.0] L VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
[    378.0] E VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
               duration: 340.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[    718.0] L VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
[    720.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#18, concurrent=0)
[    720.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#25, concurrent=0)
[    720.0] L PostProcessingActor[10] - EventSetDoFForTimeline (#35, concurrent=0)
[    720.0] L Player_Event[0] - EventPlayASForTimeline (#46, concurrent=0)
[    720.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
[    720.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#19, concurrent=0)
               duration: 1560.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    720.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 1560.0
               ASName: AS-C02-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    720.0] E PostProcessingActor[10] - EventSetDoFForTimeline (#36, concurrent=0)
               duration: 1560.0
               EndBluarLevel: 1.0
               EndDistance: 2.200000047683716
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.200000047683716
               StartFNumber: 50.0
[    720.0] E Player_Event[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 1560.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    720.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
               duration: 1560.0
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
[    736.0] E VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
               duration: 408.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1144.0] L VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
[   1184.0] E VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
               duration: 278.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1462.0] L VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
[   1519.0] E VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
               duration: 328.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1847.0] L VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
[   1883.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 378.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   2261.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[   2280.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#19, concurrent=0)
[   2280.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#33, concurrent=0)
[   2280.0] L PostProcessingActor[10] - EventSetDoFForTimeline (#36, concurrent=0)
[   2280.0] L Player_Event[0] - EventPlayASForTimeline (#47, concurrent=0)
[   2280.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
[   2280.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#20, concurrent=0)
               duration: 655.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2280.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 655.0
               ASName: C03-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2280.0] E PostProcessingActor[10] - EventSetDoFForTimeline (#37, concurrent=0)
               duration: 655.0
               EndBluarLevel: 2.0
               EndDistance: 1.7999999523162842
               EndFNumber: 91.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.7999999523162842
               StartFNumber: 90.0
[   2280.0] E Player_Event[0] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 655.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2280.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
               duration: 655.0
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
[   2315.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 178.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   2493.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[   2528.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 405.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   2933.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[   2935.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#20, concurrent=0)
[   2935.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#34, concurrent=0)
[   2935.0] L PostProcessingActor[10] - EventSetDoFForTimeline (#37, concurrent=0)
[   2935.0] L Player_Event[0] - EventPlayASForTimeline (#48, concurrent=0)
[   2935.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
[   2935.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 330.0
               ASName: AS-C04-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2935.0] E PostProcessingActor[10] - EventSetDoFForTimeline (#38, concurrent=0)
               duration: 330.0
               EndBluarLevel: 2.0
               EndDistance: 1.0
               EndFNumber: 90.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.0
               StartFNumber: 90.0
[   2935.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
               duration: 330.0
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
[   2935.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#67, concurrent=1)
               duration: 330.0
               Near: 0.10000000149011612
[   2960.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 304.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_010_c
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   3264.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   3265.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#26, concurrent=0)
[   3265.0] L PostProcessingActor[10] - EventSetDoFForTimeline (#38, concurrent=0)
[   3265.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
[   3265.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#67, concurrent=1)
[   3265.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#21, concurrent=0)
               duration: 160.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3265.0] E PostProcessingActor[10] - EventSetDoFForTimeline (#39, concurrent=0)
               duration: 160.0
               EndBluarLevel: 2.0
               EndDistance: 1.100000023841858
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.100000023841858
               StartFNumber: 60.0
[   3265.0] E Player_Event[0] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 160.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3265.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
               duration: 160.0
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
[   3265.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#68, concurrent=1)
               duration: 160.0
               Near: 0.10000000149011612
[   3269.0] E VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
               duration: 128.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_010_d
               OffsetFrame: 30
               Speaker: Player_Event
[   3397.0] L VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
[   3425.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#21, concurrent=0)
[   3425.0] L PostProcessingActor[10] - EventSetDoFForTimeline (#39, concurrent=0)
[   3425.0] L Player_Event[0] - EventPlayASForTimeline (#49, concurrent=0)
[   3425.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
[   3425.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#68, concurrent=1)
[   3425.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 200.0
               ASName: C06-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3425.0] E PostProcessingActor[10] - EventSetDoFForTimeline (#40, concurrent=0)
               duration: 200.0
               EndBluarLevel: 2.0
               EndDistance: 1.100000023841858
               EndFNumber: 90.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.100000023841858
               StartFNumber: 90.0
[   3425.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
               duration: 200.0
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
[   3425.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#69, concurrent=1)
               duration: 200.0
               Near: 0.10000000149011612
[   3485.0] E VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
               duration: 138.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   3623.0] L VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
[   3625.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#27, concurrent=0)
[   3625.0] L PostProcessingActor[10] - EventSetDoFForTimeline (#40, concurrent=0)
[   3625.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
[   3625.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#69, concurrent=1)
[   3625.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 415.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3625.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 415.0
               ASName: AS-C07-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3625.0] E PostProcessingActor[10] - EventSetDoFForTimeline (#41, concurrent=0)
               duration: 415.0
               EndBluarLevel: 1.0
               EndDistance: 3.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.0
               StartFNumber: 50.0
[   3625.0] E Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 415.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3625.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
               duration: 415.0
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
[   3675.0] E VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
               duration: 363.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   4038.0] L VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
[   4040.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#22, concurrent=0)
[   4040.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#28, concurrent=0)
[   4040.0] L PostProcessingActor[10] - EventSetDoFForTimeline (#41, concurrent=0)
[   4040.0] L Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
[   4040.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
[   4040.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 370.0
               ASName: AS-C08-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4040.0] E PostProcessingActor[10] - EventSetDoFForTimeline (#42, concurrent=0)
               duration: 370.0
               EndBluarLevel: 2.0
               EndDistance: 1.5
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.5
               StartFNumber: 50.0
[   4040.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
               duration: 370.0
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
[   4043.0] E VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
               duration: 365.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_013_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   4408.0] L VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
[   4410.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#29, concurrent=0)
[   4410.0] L PostProcessingActor[10] - EventSetDoFForTimeline (#42, concurrent=0)
[   4410.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
[   4410.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#30, concurrent=0)
               duration: 150.0
               ASName: C09-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4410.0] E PostProcessingActor[10] - EventSetDoFForTimeline (#43, concurrent=0)
               duration: 150.0
               EndBluarLevel: 0.0
               EndDistance: 3.0
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.0
               StartFNumber: 70.0
[   4410.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
               duration: 150.0
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
[   4425.0] E VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
               duration: 318.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0125:Dm_TimeTemple_0125_Text_014_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   4560.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#30, concurrent=0)
[   4560.0] L PostProcessingActor[10] - EventSetDoFForTimeline (#43, concurrent=0)
[   4560.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
[   4560.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#23, concurrent=0)
               duration: 185.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4560.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#31, concurrent=0)
               duration: 185.0
               ASName: C10-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4560.0] E PostProcessingActor[10] - EventSetDoFForTimeline (#44, concurrent=0)
               duration: 185.0
               EndBluarLevel: 1.0
               EndDistance: 3.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.0
               StartFNumber: 30.0
[   4560.0] E Player_Event[0] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 185.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4560.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
               duration: 185.0
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
[   4743.0] L VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
[   4745.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#23, concurrent=0)
[   4745.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#31, concurrent=0)
[   4745.0] L PostProcessingActor[10] - EventSetDoFForTimeline (#44, concurrent=0)
[   4745.0] L Player_Event[0] - EventPlayASForTimeline (#51, concurrent=0)
[   4745.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
[   4745.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 440.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4745.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#32, concurrent=0)
               duration: 440.0
               ASName: C11-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4745.0] E PostProcessingActor[10] - EventSetDoFForTimeline (#45, concurrent=0)
               duration: 440.0
               EndBluarLevel: 1.0
               EndDistance: 1.25
               EndFNumber: 65.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.25
               StartFNumber: 65.0
[   4745.0] E Player_Event[0] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 440.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4745.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#66, concurrent=0)
               duration: 440.0
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
[   4745.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#70, concurrent=1)
               duration: 440.0
               Near: 0.10000000149011612
[   5065.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   5125.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[   5125.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#2, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: true
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   5184.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#55, concurrent=2)
               duration: 1.0
[   5185.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#2, concurrent=0)
[   5185.0] L Npc_Navi - EventGoOffstageForUser (#17, concurrent=0)
[   5185.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#24, concurrent=0)
[   5185.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#32, concurrent=0)
[   5185.0] L PostProcessingActor[10] - EventSetDoFForTimeline (#45, concurrent=0)
[   5185.0] L Player_Event[0] - EventPlayASForTimeline (#52, concurrent=0)
[   5185.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#55, concurrent=2)
[   5185.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#66, concurrent=0)
[   5185.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#70, concurrent=1)
