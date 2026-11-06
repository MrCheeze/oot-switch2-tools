-------- Event timeline: Dm_SageRoom_0025 --------
actors: 8
clips: 36
oneshots: 0
cuts: 7
duration: 1994.0
subtimelines: ['Dm_SageRoom_0025_Effect', 'Dm_SageRoom_0025_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 240.0
x4: 0
params: (none)

Cut: cut03
start time: 632.0
x4: 0
params: (none)

Cut: cut04
start time: 746.0
x4: 0
params: (none)

Cut: cut05
start time: 1060.0
x4: 0
params: (none)

Cut: cut06
start time: 1296.0
x4: 0
params: (none)

Cut: cut07
start time: 1395.0
x4: 0
params: (none)


===== Actors =====

Actor: Enemy_DungeonBoss_Ganon_SecondHalfBattle[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Enemy_DungeonBoss_Ganon[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SageRoom_0025/Dm_SageRoom_0025_Enemy_DungeonBoss_Ganon/workspace.pp__ModelProject.gyml

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
actions: ['EventEventFadeOutForTimeline', 'EventEventFadeInForTimeline']
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

Actor: Dm_Locator[0]
concurrent clips: 2
actions: ['EventTriggerParticipateEvent', 'EventDoNothing']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[1]
concurrent clips: 2
actions: ['EventTriggerParticipateEvent', 'EventDoNothing']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -2.0
- 100.0
- -2.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E Enemy_DungeonBoss_Ganon_SecondHalfBattle[0] - EventGoOffstageForUser (#0, concurrent=0)
               duration: 1994.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#1, concurrent=0)
               duration: 240.0
               ASName: C01-Enemy_DungeonBoss_Ganon-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 240.0
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
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
               duration: 240.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01-01
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E Dm_Locator[0] - EventTriggerParticipateEvent (#32, concurrent=0)
               duration: 1994.0
[      0.0] E Dm_Locator[0] - EventDoNothing (#33, concurrent=1)
               duration: 1994.0
               IsWaitEnd: true
[      0.0] E Dm_Locator[1] - EventTriggerParticipateEvent (#34, concurrent=0)
               duration: 1994.0
[      0.0] E Dm_Locator[1] - EventDoNothing (#35, concurrent=1)
               duration: 1994.0
               IsWaitEnd: true
[     27.0] E UISystemActor[0] - EventEventFadeInForTimeline (#13, concurrent=0)
               duration: 50.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[     77.0] L UISystemActor[0] - EventEventFadeInForTimeline (#13, concurrent=0)
[    240.0] L Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#1, concurrent=0)
[    240.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[    240.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
[    240.0] E Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#2, concurrent=0)
               duration: 392.0
               ASName: C02-Enemy_DungeonBoss_Ganon-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    240.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 392.0
               EndBluarLevel: 1.5
               EndDistance: 40.0
               EndFNumber: 3.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 40.0
               StartFNumber: 3.5
[    240.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
               duration: 392.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C02-02
               TargetActorInstanceName: ''
               TargetActorName: ''
[    245.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 133.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0020:Dm_SageRoom_0020_Text_007_d
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganon_SecondHalfBattle
[    378.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[    395.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 203.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0020:Dm_SageRoom_0020_Text_007_e
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganon_SecondHalfBattle
[    598.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[    598.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 125.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0020:Dm_SageRoom_0020_Text_007_f
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganon_SecondHalfBattle
[    632.0] L Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#2, concurrent=0)
[    632.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[    632.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
[    632.0] E Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#3, concurrent=0)
               duration: 114.0
               ASName: C03-Enemy_DungeonBoss_Ganon-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    632.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 114.0
               EndBluarLevel: 10.0
               EndDistance: 5.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 10.0
               StartDistance: 5.0
               StartFNumber: 20.0
[    632.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
               duration: 114.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03-03
               TargetActorInstanceName: ''
               TargetActorName: ''
[    723.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[    723.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 335.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0020:Dm_SageRoom_0020_Text_007_g
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganon_SecondHalfBattle
[    746.0] L Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#3, concurrent=0)
[    746.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[    746.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
[    746.0] E Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#4, concurrent=0)
               duration: 314.0
               ASName: C04-Enemy_DungeonBoss_Ganon-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    746.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 314.0
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
[    746.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
               duration: 314.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C04-04
               TargetActorInstanceName: ''
               TargetActorName: ''
[    746.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#30, concurrent=1)
               duration: 314.0
               Near: 0.10000000149011612
[   1058.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   1060.0] L Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#4, concurrent=0)
[   1060.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   1060.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
[   1060.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#30, concurrent=1)
[   1060.0] E Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#5, concurrent=0)
               duration: 236.0
               ASName: C05-Enemy_DungeonBoss_Ganon-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1060.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 236.0
               EndBluarLevel: 4.619999885559082
               EndDistance: 10.0
               EndFNumber: 54.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 4.619999885559082
               StartDistance: 10.0
               StartFNumber: 54.0
[   1060.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
               duration: 236.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C05-05
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1060.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#31, concurrent=1)
               duration: 236.0
               Near: 0.10000000149011612
[   1067.0] E VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
               duration: 298.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0020:Dm_SageRoom_0020_Text_007_h
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganon_SecondHalfBattle
[   1296.0] L Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#5, concurrent=0)
[   1296.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   1296.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
[   1296.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#31, concurrent=1)
[   1296.0] E Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#6, concurrent=0)
               duration: 99.0
               ASName: C06-Enemy_DungeonBoss_Ganon-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1296.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 99.0
               EndBluarLevel: 8.0
               EndDistance: 19.0
               EndFNumber: 1.600000023841858
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 8.0
               StartDistance: 19.0
               StartFNumber: 1.600000023841858
[   1296.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
               duration: 99.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C06-06
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1365.0] L VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
[   1395.0] L Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#6, concurrent=0)
[   1395.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   1395.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
[   1395.0] E Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#7, concurrent=0)
               duration: 599.0
               ASName: C07-Enemy_DungeonBoss_Ganon-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1395.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 599.0
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
[   1395.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
               duration: 599.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C07-07
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1634.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#14, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1694.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#14, concurrent=0)
[   1694.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#15, concurrent=0)
               duration: 300.0
               Color: 1
               IsNoPlayAnime: true
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1994.0] L Enemy_DungeonBoss_Ganon_SecondHalfBattle[0] - EventGoOffstageForUser (#0, concurrent=0)
[   1994.0] L Enemy_DungeonBoss_Ganon[0] - EventPlayASForTimeline (#7, concurrent=0)
[   1994.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#15, concurrent=0)
[   1994.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   1994.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
[   1994.0] L Dm_Locator[0] - EventTriggerParticipateEvent (#32, concurrent=0)
[   1994.0] L Dm_Locator[0] - EventDoNothing (#33, concurrent=1)
[   1994.0] L Dm_Locator[1] - EventTriggerParticipateEvent (#34, concurrent=0)
[   1994.0] L Dm_Locator[1] - EventDoNothing (#35, concurrent=1)
