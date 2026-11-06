-------- Event timeline: Dm_TimeTemple_0090 --------
actors: 8
clips: 35
oneshots: 0
cuts: 6
duration: 2915.0
subtimelines: ['Dm_TimeTemple_0090_Effect', 'Dm_TimeTemple_0090_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 520.0
x4: 0
params: (none)

Cut: cut03
start time: 730.0
x4: 0
params: (none)

Cut: cut04
start time: 1570.0
x4: 0
params: (none)

Cut: cut05
start time: 1950.0
x4: 0
params: (none)

Cut: cut06
start time: 2315.0
x4: 0
params: (none)


===== Actors =====

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

Actor: VoicePlayActor[0]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Npc_Hylia_Sheik_Adult[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0090/Dm_TimeTemple_0090_Npc_Hylia_WU_Sheik/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0090/Dm_TimeTemple_0090_Npc_Navi/workspace.pp__ModelProject.gyml

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

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerPlayerRestoreBootsChange', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerPlayerTemporaryBootsChange']
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
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0090/Dm_TimeTemple_0090_Player_Adult/workspace.pp__ModelProject.gyml

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0090/Dm_TimeTemple_0090/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 520.0
               EndBluarLevel: 1.5199999809265137
               EndDistance: 1.2000000476837158
               EndFNumber: 64.80000305175781
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5199999809265137
               StartDistance: 1.2000000476837158
               StartFNumber: 64.80000305175781
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#19, concurrent=0)
               duration: 520.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#21, concurrent=0)
               duration: 2915.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 520.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#25, concurrent=1)
               duration: 2315.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#27, concurrent=2)
               duration: 100.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
               duration: 520.0
               CameraName: ''
               IsIgnoreRootRot: true
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#34, concurrent=1)
               duration: 520.0
               Near: 0.10000000149011612
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#27, concurrent=2)
[    327.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 163.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0090:Dm_TimeTemple_0090_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[    490.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[    520.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    520.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#19, concurrent=0)
[    520.0] L Player_Event[0] - EventPlayASForTimeline (#22, concurrent=0)
[    520.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
[    520.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#34, concurrent=1)
[    520.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 210.0
               EndBluarLevel: 2.5
               EndDistance: 7.699999809265137
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 2.5
               StartBluarLevel: 2.5
               StartDistance: 7.699999809265137
               StartFNumber: 50.0
[    520.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#14, concurrent=0)
               duration: 210.0
               ASName: C02-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    520.0] E Player_Event[0] - EventPlayASForTimeline (#23, concurrent=0)
               duration: 210.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    520.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
               duration: 210.0
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
[    730.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    730.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#14, concurrent=0)
[    730.0] L Player_Event[0] - EventPlayASForTimeline (#23, concurrent=0)
[    730.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
[    730.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 840.0
               EndBluarLevel: 2.0
               EndDistance: 2.1700000762939453
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.1700000762939453
               StartFNumber: 70.0
[    730.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#15, concurrent=0)
               duration: 840.0
               ASName: C03-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    730.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
               duration: 840.0
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
[    760.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 392.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0090:Dm_TimeTemple_0090_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   1152.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[   1212.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 229.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0090:Dm_TimeTemple_0090_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   1441.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[   1570.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   1570.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#15, concurrent=0)
[   1570.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
[   1570.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 380.0
               EndBluarLevel: 2.0199999809265137
               EndDistance: 4.369999885559082
               EndFNumber: 33.20000076293945
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0199999809265137
               StartDistance: 4.369999885559082
               StartFNumber: 33.20000076293945
[   1570.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#16, concurrent=0)
               duration: 380.0
               ASName: C04-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1570.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#20, concurrent=0)
               duration: 380.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1570.0] E Player_Event[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 380.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1570.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
               duration: 380.0
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
[   1600.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 307.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0090:Dm_TimeTemple_0090_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   1907.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   1950.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   1950.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#16, concurrent=0)
[   1950.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#20, concurrent=0)
[   1950.0] L Player_Event[0] - EventPlayASForTimeline (#24, concurrent=0)
[   1950.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
[   1950.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 365.0
               EndBluarLevel: 1.4299999475479126
               EndDistance: 5.769999980926514
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.4299999475479126
               StartDistance: 5.769999980926514
               StartFNumber: 10.0
[   1950.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#17, concurrent=0)
               duration: 365.0
               ASName: C05-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1950.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
               duration: 365.0
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
[   1979.0] E VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
               duration: 265.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0090:Dm_TimeTemple_0090_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   2244.0] L VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
[   2315.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   2315.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#17, concurrent=0)
[   2315.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#25, concurrent=1)
[   2315.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
[   2315.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 600.0
               EndBluarLevel: 2.380000114440918
               EndDistance: 1.5
               EndFNumber: 128.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.380000114440918
               StartDistance: 1.25
               StartFNumber: 128.0
[   2315.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#18, concurrent=0)
               duration: 600.0
               ASName: C06-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2315.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#26, concurrent=1)
               duration: 600.0
[   2315.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
               duration: 600.0
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
[   2330.0] E VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
               duration: 461.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0090:Dm_TimeTemple_0090_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   2791.0] L VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
[   2815.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 100.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   2915.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[   2915.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   2915.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#18, concurrent=0)
[   2915.0] L Npc_Navi[0] - EventGoOffstageForUser (#21, concurrent=0)
[   2915.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#26, concurrent=1)
[   2915.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
