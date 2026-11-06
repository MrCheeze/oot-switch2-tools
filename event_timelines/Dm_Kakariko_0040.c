-------- Event timeline: Dm_Kakariko_0040 --------
actors: 13
clips: 96
oneshots: 0
cuts: 15
duration: 5765.0
subtimelines: ['Dm_Kakariko_0040_Effect', 'Dm_Kakariko_0040_Env']
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 479.0
x4: 0
params: (none)

Cut: cut03
start time: 843.0
x4: 0
params: (none)

Cut: cut04
start time: 1103.0
x4: 0
params: (none)

Cut: cut05
start time: 1376.0
x4: 0
params: (none)

Cut: cut06
start time: 1648.0
x4: 0
params: (none)

Cut: cut07
start time: 2146.0
x4: 0
params: (none)

Cut: cut08
start time: 2457.0
x4: 0
params: (none)

Cut: cut09
start time: 2700.0
x4: 0
params: (none)

Cut: cut10
start time: 3009.0
x4: 0
params: (none)

Cut: cut11
start time: 3460.0
x4: 0
params: (none)

Cut: cut12
start time: 3931.0
x4: 0
params: (none)

Cut: cut16
start time: 4454.0
x4: 0
params: (none)

Cut: cut17
start time: 5016.0
x4: 0
params: (none)

Cut: cut18
start time: 5394.0
x4: 0
params: (none)


===== Actors =====

Actor: Obj_Kakariko_Windmill_A_01
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: true
IsGrounding: false
IsWorld: true
Position:
- -9.323006629943848
- 138.16940307617188
- 44.14862060546875
Rotation:
- 166.6842041015625
- -89.49992370605469
- -171.67779541015625
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetWeatherTransitionForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[0]
concurrent clips: 3
actions: ['EventSetDoFForTimeline', 'EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['EventTrigger_SetTime']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

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
concurrent clips: 1
actions: ['EventGoOffstageForUser']
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
Position:
- 0.0
- -3.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Npc_Hylia_Impa_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_Kakariko_0040.root.as
UseEventModelAnime: Work/Model/Event/Dm_Kakariko_0040/Dm_Kakariko_0040_Npc_Hylia_WU_Impa/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Sheik_Adult[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kakariko_0040/Dm_Kakariko_0040_Npc_Hylia_WU_Sheik/workspace.pp__ModelProject.gyml

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
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventCamera[1]
concurrent clips: 1
actions: ['EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventCamera[0]
concurrent clips: 1
actions: ['EventMoveCameraAnimationInstructions']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[0]
concurrent clips: 2
actions: ['EventTriggerParticipateEvent', 'EventDoNothing']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E Obj_Kakariko_Windmill_A_01 - EventPlayASForTimeline (#0, concurrent=0)
               duration: 5765.0
               ASName: Rotate
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E EventWorldManagerController[1] - Event_SetWeatherTransitionForTimeline (#1, concurrent=0)
               duration: 5765.0
               ChangeSpeed: 5
               IsWaitEnd: true
               Weather: Default
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 479.0
               EndBluarLevel: 0.10000000149011612
               EndDistance: 3.0
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: true
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.10000000149011612
               StartDistance: 3.0
               StartFNumber: 100.0
[      0.0] E EventWorldManagerController[0] - EventTrigger_SetTime (#21, concurrent=0)
               duration: 5765.0
               TimeHour: 22
               TimeMin: 0
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#22, concurrent=0)
               duration: 5765.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
               duration: 292.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_000_b
               OffsetFrame: 19
               Speaker: Npc_Hylia_Sheik_Adult
[      0.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#65, concurrent=0)
               duration: 479.0
               Near: 1.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#79, concurrent=0)
               duration: 479.0
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
[      0.0] E Dm_Locator[0] - EventTriggerParticipateEvent (#94, concurrent=0)
               duration: 5765.0
[      0.0] E Dm_Locator[0] - EventDoNothing (#95, concurrent=1)
               duration: 5765.0
               IsWaitEnd: true
[     16.0] E Player_Event[0] - EventGoOffstageForUser (#23, concurrent=0)
               duration: 5746.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[    140.0] E UISystemActor[0] - EventEventFadeInForTimeline (#63, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[    240.0] L UISystemActor[0] - EventEventFadeInForTimeline (#63, concurrent=0)
[    292.0] L VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
[    292.0] E VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
               duration: 532.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[    479.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    479.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#65, concurrent=0)
[    479.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#79, concurrent=0)
[    479.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 364.0
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
[    479.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 364.0
               ASName: C02-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    479.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 364.0
               ASName: C02-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    479.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#66, concurrent=0)
               duration: 364.0
               Near: 0.800000011920929
[    479.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#80, concurrent=0)
               duration: 364.0
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
[    824.0] L VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
[    843.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    843.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#24, concurrent=0)
[    843.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#36, concurrent=0)
[    843.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#66, concurrent=0)
[    843.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#80, concurrent=0)
[    843.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 260.0
               EndBluarLevel: 2.0
               EndDistance: 3.140000104904175
               EndFNumber: 80.80000305175781
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.140000104904175
               StartFNumber: 80.80000305175781
[    843.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 260.0
               ASName: C03-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    843.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#67, concurrent=0)
               duration: 260.0
               Near: 0.699999988079071
[    843.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#81, concurrent=0)
               duration: 260.0
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
[    853.0] E VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
               duration: 227.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_002_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Impa_Adult
[   1080.0] L VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
[   1080.0] E VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
               duration: 263.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   1103.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   1103.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#25, concurrent=0)
[   1103.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#67, concurrent=0)
[   1103.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#81, concurrent=0)
[   1103.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 273.0
               EndBluarLevel: 2.0
               EndDistance: 2.440000057220459
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.440000057220459
               StartFNumber: 100.0
[   1103.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 273.0
               ASName: C04-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1103.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#68, concurrent=0)
               duration: 273.0
               Near: 0.10000000149011612
[   1103.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#82, concurrent=0)
               duration: 273.0
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
[   1343.0] L VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
[   1376.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   1376.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#37, concurrent=0)
[   1376.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#68, concurrent=0)
[   1376.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#82, concurrent=0)
[   1376.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 272.0
               EndBluarLevel: 2.0
               EndDistance: 3.180000066757202
               EndFNumber: 73.0999984741211
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.180000066757202
               StartFNumber: 73.0999984741211
[   1376.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 272.0
               ASName: C05-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1376.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 272.0
               ASName: C05-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1376.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#69, concurrent=0)
               duration: 272.0
               Near: 0.5
[   1376.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#83, concurrent=0)
               duration: 272.0
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
[   1399.0] E VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
               duration: 228.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_004_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Impa_Adult
[   1619.0] E PostProcessingActor[0] - EventEditLocationalLight (#18, concurrent=2)
               duration: 29.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C06_spotlight
               LocationalLightCreateType: 0
               SourceRadius: 0.8999999761581421
[   1627.0] L VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
[   1648.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1648.0] L PostProcessingActor[0] - EventEditLocationalLight (#18, concurrent=2)
[   1648.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#26, concurrent=0)
[   1648.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#38, concurrent=0)
[   1648.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#69, concurrent=0)
[   1648.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#83, concurrent=0)
[   1648.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 498.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 67.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 67.0
[   1648.0] E PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#17, concurrent=1)
               duration: 498.0
               Direction:
               - 0.0
               - -1.0
               - 0.0
               InnerAngle: 15.0
               IsIgnoreRot: false
               LightHash: C06_spotlight
               LightType: 0
               OuterAngle: 45.0
               PositionOffset:
               - 6.27400016784668
               - 3.0
               - -0.38499999046325684
[   1648.0] E PostProcessingActor[0] - EventEditLocationalLight (#19, concurrent=2)
               duration: 498.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 20.0
               IsFrameTransition: false
               LightHash: C06_spotlight
               LocationalLightCreateType: 0
               SourceRadius: 1.0
[   1648.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 498.0
               ASName: C06-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1648.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#70, concurrent=0)
               duration: 498.0
               Near: 0.4000000059604645
[   1648.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#84, concurrent=0)
               duration: 498.0
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
[   1659.0] E VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
               duration: 464.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_005_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Impa_Adult
[   2123.0] L VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
[   2145.0] E VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
               duration: 293.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_006_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Impa_Adult
[   2146.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   2146.0] L PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#17, concurrent=1)
[   2146.0] L PostProcessingActor[0] - EventEditLocationalLight (#19, concurrent=2)
[   2146.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#27, concurrent=0)
[   2146.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#70, concurrent=0)
[   2146.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#84, concurrent=0)
[   2146.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 311.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 31.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 31.0
[   2146.0] E PostProcessingActor[0] - EventEditLocationalLight (#20, concurrent=2)
               duration: 29.0
               Color:
               - 1.0
               - 1.0
               - 1.0
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 30
               Intensity: 0.0
               IsFrameTransition: false
               LightHash: C06_spotlight
               LocationalLightCreateType: 0
               SourceRadius: 0.8999999761581421
[   2146.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 311.0
               ASName: C07-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2146.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 311.0
               ASName: C07-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2146.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#71, concurrent=0)
               duration: 311.0
               Near: 1.0
[   2146.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#85, concurrent=0)
               duration: 311.0
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
[   2175.0] L PostProcessingActor[0] - EventEditLocationalLight (#20, concurrent=2)
[   2438.0] L VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
[   2443.0] E VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
               duration: 231.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_007_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Impa_Adult
[   2457.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   2457.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#28, concurrent=0)
[   2457.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#39, concurrent=0)
[   2457.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#71, concurrent=0)
[   2457.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#85, concurrent=0)
[   2457.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 243.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 150.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 150.0
[   2457.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 243.0
               ASName: C08-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2457.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#72, concurrent=0)
               duration: 243.0
               Near: 0.5
[   2457.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#86, concurrent=0)
               duration: 243.0
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
[   2674.0] L VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
[   2700.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   2700.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#29, concurrent=0)
[   2700.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#72, concurrent=0)
[   2700.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#86, concurrent=0)
[   2700.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 309.0
               EndBluarLevel: 0.0
               EndDistance: 2.200000047683716
               EndFNumber: 13.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.200000047683716
               StartFNumber: 13.0
[   2700.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#30, concurrent=0)
               duration: 309.0
               ASName: C09-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2700.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 309.0
               ASName: C09-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2700.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#73, concurrent=0)
               duration: 309.0
               Near: 0.4000000059604645
[   2700.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#87, concurrent=0)
               duration: 309.0
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
[   2750.0] E VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
               duration: 161.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_008_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Impa_Adult
[   2911.0] L VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
[   3009.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   3009.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#30, concurrent=0)
[   3009.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#40, concurrent=0)
[   3009.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#73, concurrent=0)
[   3009.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#87, concurrent=0)
[   3009.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 451.0
               EndBluarLevel: 2.0
               EndDistance: 1.0
               EndFNumber: 150.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.0
               StartFNumber: 150.0
[   3009.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 451.0
               ASName: C10-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3009.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#74, concurrent=0)
               duration: 451.0
               Near: 0.10000000149011612
[   3009.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#88, concurrent=0)
               duration: 451.0
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
[   3092.0] E VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
               duration: 73.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_009_c
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   3165.0] L VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
[   3165.0] E VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
               duration: 214.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_009_d
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   3379.0] L VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
[   3460.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   3460.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#41, concurrent=0)
[   3460.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#74, concurrent=0)
[   3460.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#88, concurrent=0)
[   3460.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 471.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 80.0
[   3460.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#31, concurrent=0)
               duration: 471.0
               ASName: C11-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3460.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 471.0
               ASName: C11-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3460.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#75, concurrent=0)
               duration: 471.0
               Near: 0.800000011920929
[   3460.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#89, concurrent=0)
               duration: 471.0
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
[   3468.0] E VoicePlayActor[0] - EventStartVoice (#57, concurrent=0)
               duration: 443.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_010_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Impa_Adult
[   3911.0] L VoicePlayActor[0] - EventStartVoice (#57, concurrent=0)
[   3931.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   3931.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#31, concurrent=0)
[   3931.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#42, concurrent=0)
[   3931.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#75, concurrent=0)
[   3931.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#89, concurrent=0)
[   3931.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 523.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 110.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 110.0
[   3931.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#32, concurrent=0)
               duration: 523.0
               ASName: C12-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3931.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 523.0
               ASName: C12-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3931.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#76, concurrent=0)
               duration: 523.0
               Near: 0.800000011920929
[   3931.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#90, concurrent=0)
               duration: 523.0
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
[   3951.0] E VoicePlayActor[0] - EventStartVoice (#58, concurrent=0)
               duration: 292.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_011_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Impa_Adult
[   4243.0] L VoicePlayActor[0] - EventStartVoice (#58, concurrent=0)
[   4243.0] E VoicePlayActor[0] - EventStartVoice (#59, concurrent=0)
               duration: 189.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_012_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Impa_Adult
[   4432.0] L VoicePlayActor[0] - EventStartVoice (#59, concurrent=0)
[   4454.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   4454.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#32, concurrent=0)
[   4454.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#43, concurrent=0)
[   4454.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#76, concurrent=0)
[   4454.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#90, concurrent=0)
[   4454.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 562.0
               EndBluarLevel: 2.0
               EndDistance: 1.2000000476837158
               EndFNumber: 170.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.2000000476837158
               StartFNumber: 170.0
[   4454.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 562.0
               ASName: C16-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4454.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 562.0
               ASName: C16-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4454.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#77, concurrent=0)
               duration: 940.0
               Near: 1.0
[   4454.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#91, concurrent=0)
               duration: 562.0
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
[   4569.0] E VoicePlayActor[0] - EventStartVoice (#60, concurrent=0)
               duration: 87.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_016_d
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   4656.0] L VoicePlayActor[0] - EventStartVoice (#60, concurrent=0)
[   4683.0] E VoicePlayActor[0] - EventStartVoice (#61, concurrent=0)
               duration: 111.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_016_db
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   4794.0] L VoicePlayActor[0] - EventStartVoice (#61, concurrent=0)
[   4794.0] E VoicePlayActor[0] - EventStartVoice (#62, concurrent=0)
               duration: 203.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kakariko_0040:Dm_Kakariko_0040_Text_016_e
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   4997.0] L VoicePlayActor[0] - EventStartVoice (#62, concurrent=0)
[   5016.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   5016.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#33, concurrent=0)
[   5016.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#44, concurrent=0)
[   5016.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#91, concurrent=0)
[   5016.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 378.0
               EndBluarLevel: 2.0
               EndDistance: 1.7000000476837158
               EndFNumber: 170.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.7000000476837158
               StartFNumber: 170.0
[   5016.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 378.0
               ASName: AS-C17-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5016.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#92, concurrent=0)
               duration: 378.0
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
[   5394.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   5394.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#34, concurrent=0)
[   5394.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#77, concurrent=0)
[   5394.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#92, concurrent=0)
[   5394.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 371.0
               EndBluarLevel: 1.0
               EndDistance: 3.0
               EndFNumber: 19.700000762939453
               IsAutoFocalDist: false
               IsEnableDofFarCancel: true
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.0
               StartFNumber: 19.700000762939453
[   5394.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 371.0
               ASName: C18-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5394.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 371.0
               ASName: C18-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5394.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#78, concurrent=0)
               duration: 371.0
               Near: 0.10000000149011612
[   5394.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#93, concurrent=0)
               duration: 371.0
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
[   5665.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#64, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   5762.0] L Player_Event[0] - EventGoOffstageForUser (#23, concurrent=0)
[   5765.0] L Obj_Kakariko_Windmill_A_01 - EventPlayASForTimeline (#0, concurrent=0)
[   5765.0] L EventWorldManagerController[1] - Event_SetWeatherTransitionForTimeline (#1, concurrent=0)
[   5765.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   5765.0] L EventWorldManagerController[0] - EventTrigger_SetTime (#21, concurrent=0)
[   5765.0] L Npc_Navi[0] - EventGoOffstageForUser (#22, concurrent=0)
[   5765.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#35, concurrent=0)
[   5765.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#45, concurrent=0)
[   5765.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#64, concurrent=0)
[   5765.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#78, concurrent=0)
[   5765.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#93, concurrent=0)
[   5765.0] L Dm_Locator[0] - EventTriggerParticipateEvent (#94, concurrent=0)
[   5765.0] L Dm_Locator[0] - EventDoNothing (#95, concurrent=1)
