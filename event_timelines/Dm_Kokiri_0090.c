-------- Event timeline: Dm_Kokiri_0090 --------
actors: 8
clips: 26
oneshots: 0
cuts: 3
duration: 2623.0
subtimelines: ['Dm_Kokiri_0090_Effect', 'Dm_Kokiri_0090_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 985.0
x4: 0
params: (none)

Cut: C03
start time: 1225.0
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

Actor: Land_Demo[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0090/Dm_Kokiri_0090_Land_Demo/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: ''
UseEventModelAnime: ''

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
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

Actor: Animal_Horse_For_Ganondorf[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_Kokiri_0090_Animal_Horse_Ganondorf.root.as
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0090/Dm_Kokiri_0090_Animal_Horse_Ganondorf/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Gerudo_Ganondorf[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_Kokiri_0090.root.as
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0090/Dm_Kokiri_0090_Npc_Gerudo_GEU_Ganondorf_Child/workspace.pp__ModelProject.gyml

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

[      0.0] E Land_Demo[0] - EventPlayASForTimeline (#2, concurrent=0)
               duration: 985.0
               ASName: C01-Land_Demo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Locator[0] - EventDoNothing (#5, concurrent=0)
               duration: 985.0
               IsWaitEnd: true
[      0.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#8, concurrent=0)
               duration: 678.0
               Color: 1
               IsNoPlayAnime: true
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[      0.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#15, concurrent=0)
               duration: 985.0
               ASName: AS-C01-Animal_Horse_Ganondorf-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#18, concurrent=0)
               duration: 985.0
               ASName: AS-C01-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
               duration: 985.0
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
[      3.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 673.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0090:Dm_Kokiri_0090_Text_000_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[    676.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[    678.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#8, concurrent=0)
[    678.0] E UISystemActor[0] - EventEventFadeInForTimeline (#9, concurrent=0)
               duration: 120.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[    798.0] L UISystemActor[0] - EventEventFadeInForTimeline (#9, concurrent=0)
[    844.0] E VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
               duration: 466.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0090:Dm_Kokiri_0090_Text_001_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[    985.0] L Land_Demo[0] - EventPlayASForTimeline (#2, concurrent=0)
[    985.0] L Dm_Locator[0] - EventDoNothing (#5, concurrent=0)
[    985.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#15, concurrent=0)
[    985.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#18, concurrent=0)
[    985.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
[    985.0] E Land_Demo[0] - EventPlayASForTimeline (#3, concurrent=0)
               duration: 240.0
               ASName: C02-Land_Demo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    985.0] E Dm_Locator[0] - EventDoNothing (#6, concurrent=0)
               duration: 240.0
               IsWaitEnd: true
[    985.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#16, concurrent=0)
               duration: 240.0
               ASName: C02-Animal_Horse_Ganondorf-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    985.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#19, concurrent=0)
               duration: 240.0
               ASName: AS-C02-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    985.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
               duration: 240.0
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
[    985.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#24, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[   1225.0] L Land_Demo[0] - EventPlayASForTimeline (#3, concurrent=0)
[   1225.0] L Dm_Locator[0] - EventDoNothing (#6, concurrent=0)
[   1225.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#16, concurrent=0)
[   1225.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#19, concurrent=0)
[   1225.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
[   1225.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#24, concurrent=1)
[   1225.0] E Land_Demo[0] - EventPlayASForTimeline (#4, concurrent=0)
               duration: 1398.0
               ASName: C03-Land_Demo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1225.0] E Dm_Locator[0] - EventDoNothing (#7, concurrent=0)
               duration: 1398.0
               IsWaitEnd: true
[   1225.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#17, concurrent=0)
               duration: 1398.0
               ASName: AS-C03-Animal_Horse_Ganondorf-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1225.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#20, concurrent=0)
               duration: 1398.0
               ASName: AS-C03-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1225.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
               duration: 1398.0
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
[   1225.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#25, concurrent=1)
               duration: 1398.0
               Near: 0.10000000149011612
[   1310.0] L VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
[   1349.0] E VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
               duration: 577.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0090:Dm_Kokiri_0090_Text_002_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   1926.0] L VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
[   1979.0] E VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
               duration: 567.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0090:Dm_Kokiri_0090_Text_003_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   2031.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#0, concurrent=0)
               duration: 360.0
               EndBluarLevel: 6.0
               EndDistance: 0.0
               EndFNumber: 0.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.0
               StartFNumber: 0.0
[   2156.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#10, concurrent=0)
               duration: 467.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   2391.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#0, concurrent=0)
[   2391.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
               duration: 232.0
               EndBluarLevel: 6.0
               EndDistance: 0.0
               EndFNumber: 0.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 6.0
               StartDistance: 0.0
               StartFNumber: 0.0
[   2546.0] L VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
[   2623.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
[   2623.0] L Land_Demo[0] - EventPlayASForTimeline (#4, concurrent=0)
[   2623.0] L Dm_Locator[0] - EventDoNothing (#7, concurrent=0)
[   2623.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#10, concurrent=0)
[   2623.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#17, concurrent=0)
[   2623.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#20, concurrent=0)
[   2623.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
[   2623.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#25, concurrent=1)
