-------- Event timeline: Dm_TimeTemple_0086 --------
actors: 10
clips: 60
oneshots: 0
cuts: 10
duration: 4349.0
subtimelines: ['Dm_TimeTemple_0086_Effect', 'Dm_TimeTemple_0086_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 530.0
x4: 0
params: (none)

Cut: cut03
start time: 1016.0
x4: 0
params: (none)

Cut: cut04
start time: 1550.0
x4: 0
params: (none)

Cut: cut05
start time: 2024.0
x4: 0
params: (none)

Cut: cut05_50
start time: 2246.0
x4: 0
params: (none)

Cut: cut06
start time: 2730.0
x4: 0
params: (none)

Cut: cut07
start time: 3064.0
x4: 0
params: (none)

Cut: cut07_50
start time: 3376.0
x4: 0
params: (none)

Cut: cut08
start time: 3904.0
x4: 0
params: (none)


===== Actors =====

Actor: UISystemActor
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

Actor: VoicePlayActor
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
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Npc_Kaepora[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_TimeTemple_0086_Npc_U_Kaepora.root.as
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0086/Dm_TimeTemple_0086_Npc_U_Kaepora/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0086/Dm_TimeTemple_0086_Player_Child/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0086/Dm_TimeTemple_0086_Npc_Navi/workspace.pp__ModelProject.gyml

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

Actor: EventCamera
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0086/Dm_TimeTemple_0086/workspace.pp__ModelProject.gyml

Actor: EventWorldManagerController[Foliage]
concurrent clips: 1
actions: ['Event_SetFoliageTurfParamForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 530.0
               EndBluarLevel: 1.0
               EndDistance: 7.28000020980835
               EndFNumber: 48.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 7.28000020980835
               StartFNumber: 48.0
[      0.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 530.0
               ASName: AS-C01-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#32, concurrent=0)
               duration: 530.0
               ASName: C01-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#38, concurrent=1)
               duration: 100.0
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 530.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E EventCamera - EventMoveCameraAnimationInstructions (#46, concurrent=0)
               duration: 530.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: true
               IsWaitEnd: false
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E EventCamera - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
               duration: 530.0
               Near: 0.10000000149011612
[     14.0] E Npc_Navi - EventGoOffstageForUser (#45, concurrent=0)
               duration: 4335.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[     60.0] L UISystemActor - EventEventFadeInForTimeline (#0, concurrent=0)
[     90.0] E VoicePlayActor - EventStartVoice (#3, concurrent=0)
               duration: 120.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#38, concurrent=1)
[    210.0] L VoicePlayActor - EventStartVoice (#3, concurrent=0)
[    250.0] E VoicePlayActor - EventStartVoice (#4, concurrent=0)
               duration: 150.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[    339.0] E VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
               duration: 57.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_002_b
               OffsetFrame: 30
               Speaker: Player_Event
[    396.0] L VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
[    400.0] L VoicePlayActor - EventStartVoice (#4, concurrent=0)
[    510.0] E VoicePlayActor - EventStartVoice (#5, concurrent=0)
               duration: 492.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_019_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[    530.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[    530.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#24, concurrent=0)
[    530.0] L Player_Event[0] - EventPlayASForTimeline (#32, concurrent=0)
[    530.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#39, concurrent=0)
[    530.0] L EventCamera - EventMoveCameraAnimationInstructions (#46, concurrent=0)
[    530.0] L EventCamera - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
[    530.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 486.0
               EndBluarLevel: 1.5
               EndDistance: 2.700000047683716
               EndFNumber: 22.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 2.700000047683716
               StartFNumber: 22.0
[    530.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 486.0
               ASName: AS-C02-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    530.0] E EventCamera - EventMoveCameraAnimationInstructions (#47, concurrent=0)
               duration: 486.0
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
[   1002.0] L VoicePlayActor - EventStartVoice (#5, concurrent=0)
[   1016.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   1016.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#25, concurrent=0)
[   1016.0] L EventCamera - EventMoveCameraAnimationInstructions (#47, concurrent=0)
[   1016.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 534.0
               EndBluarLevel: 0.5
               EndDistance: 8.800000190734863
               EndFNumber: 27.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 8.800000190734863
               StartFNumber: 27.0
[   1016.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 534.0
               ASName: AS-C03-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1016.0] E Player_Event[0] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 534.0
               ASName: C03-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1016.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 534.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1016.0] E EventCamera - EventMoveCameraAnimationInstructions (#48, concurrent=0)
               duration: 534.0
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
[   1016.0] E EventWorldManagerController[Foliage] - Event_SetFoliageTurfParamForTimeline (#58, concurrent=0)
               duration: 534.0
               DisableFarShortening: true
               FarPow: 3.0
               IsWaitEnd: true
               LOD_Dist_LowTree0: 30.0
               LOD_Dist_LowTree1: 135.0
               LOD_Dist_Ornament: 135.0
               Len1Poly: 0.30000001192092896
               MaxDist_Ornament: 100.0
               ModifyLOD: true
               VanishEnd: 50.0
               VanishStart: 8.0
[   1017.0] E VoicePlayActor - EventStartVoice (#6, concurrent=0)
               duration: 575.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_019_c
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   1550.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   1550.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#26, concurrent=0)
[   1550.0] L Player_Event[0] - EventPlayASForTimeline (#33, concurrent=0)
[   1550.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#40, concurrent=0)
[   1550.0] L EventCamera - EventMoveCameraAnimationInstructions (#48, concurrent=0)
[   1550.0] L EventWorldManagerController[Foliage] - Event_SetFoliageTurfParamForTimeline (#58, concurrent=0)
[   1550.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 474.0
               EndBluarLevel: 0.5
               EndDistance: 3.759999990463257
               EndFNumber: 28.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 3.759999990463257
               StartFNumber: 28.0
[   1550.0] E Player_Event[0] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 474.0
               ASName: C04-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1550.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 474.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1550.0] E EventCamera - EventMoveCameraAnimationInstructions (#49, concurrent=0)
               duration: 474.0
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
[   1592.0] L VoicePlayActor - EventStartVoice (#6, concurrent=0)
[   1630.0] E VoicePlayActor - EventStartVoice (#7, concurrent=0)
               duration: 377.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_020_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   2007.0] L VoicePlayActor - EventStartVoice (#7, concurrent=0)
[   2022.0] E VoicePlayActor - EventStartVoice (#8, concurrent=0)
               duration: 347.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_021_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   2024.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   2024.0] L Player_Event[0] - EventPlayASForTimeline (#34, concurrent=0)
[   2024.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#41, concurrent=0)
[   2024.0] L EventCamera - EventMoveCameraAnimationInstructions (#49, concurrent=0)
[   2024.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 222.0
               EndBluarLevel: 1.0
               EndDistance: 7.800000190734863
               EndFNumber: 14.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 7.800000190734863
               StartFNumber: 14.0
[   2024.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 222.0
               ASName: AS-C05-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2024.0] E EventCamera - EventMoveCameraAnimationInstructions (#50, concurrent=0)
               duration: 222.0
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
[   2024.0] E EventCamera - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
               duration: 222.0
               Near: 0.10000000149011612
[   2246.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   2246.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#27, concurrent=0)
[   2246.0] L EventCamera - EventMoveCameraAnimationInstructions (#50, concurrent=0)
[   2246.0] L EventCamera - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
[   2246.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 484.0
               EndBluarLevel: 2.700000047683716
               EndDistance: 3.0
               EndFNumber: 49.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.700000047683716
               StartDistance: 3.0
               StartFNumber: 49.0
[   2246.0] E Player_Event[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 484.0
               ASName: C05_50-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2246.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 484.0
               ASName: C05_50-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2246.0] E EventCamera - EventMoveCameraAnimationInstructions (#51, concurrent=0)
               duration: 484.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C05_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2369.0] L VoicePlayActor - EventStartVoice (#8, concurrent=0)
[   2375.0] E VoicePlayActor - EventStartVoice (#9, concurrent=0)
               duration: 335.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_022_c
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   2710.0] L VoicePlayActor - EventStartVoice (#9, concurrent=0)
[   2715.0] E VoicePlayActor - EventStartVoice (#10, concurrent=0)
               duration: 288.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_023_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   2730.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   2730.0] L Player_Event[0] - EventPlayASForTimeline (#35, concurrent=0)
[   2730.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#42, concurrent=0)
[   2730.0] L EventCamera - EventMoveCameraAnimationInstructions (#51, concurrent=0)
[   2730.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 334.0
               EndBluarLevel: 1.5
               EndDistance: 5.210000038146973
               EndFNumber: 48.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 5.210000038146973
               StartFNumber: 48.0
[   2730.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 334.0
               ASName: AS-C06-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2730.0] E EventCamera - EventMoveCameraAnimationInstructions (#52, concurrent=0)
               duration: 334.0
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
[   3003.0] L VoicePlayActor - EventStartVoice (#10, concurrent=0)
[   3064.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   3064.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#28, concurrent=0)
[   3064.0] L EventCamera - EventMoveCameraAnimationInstructions (#52, concurrent=0)
[   3064.0] E VoicePlayActor - EventStartVoice (#11, concurrent=0)
               duration: 485.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_024_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   3064.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 312.0
               EndBluarLevel: 2.200000047683716
               EndDistance: 7.320000171661377
               EndFNumber: 18.799999237060547
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.200000047683716
               StartDistance: 7.320000171661377
               StartFNumber: 18.799999237060547
[   3064.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 312.0
               ASName: AS-C07-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3064.0] E Player_Event[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 312.0
               ASName: C07-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3064.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 312.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3064.0] E EventCamera - EventMoveCameraAnimationInstructions (#53, concurrent=0)
               duration: 312.0
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
[   3064.0] E EventWorldManagerController[Foliage] - Event_SetFoliageTurfParamForTimeline (#59, concurrent=0)
               duration: 312.0
               DisableFarShortening: true
               FarPow: 3.5
               IsWaitEnd: true
               LOD_Dist_LowTree0: 30.0
               LOD_Dist_LowTree1: 135.0
               LOD_Dist_Ornament: 135.0
               Len1Poly: 0.10000000149011612
               MaxDist_Ornament: 100.0
               ModifyLOD: true
               VanishEnd: 60.0
               VanishStart: 8.0
[   3376.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   3376.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#29, concurrent=0)
[   3376.0] L Player_Event[0] - EventPlayASForTimeline (#36, concurrent=0)
[   3376.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#43, concurrent=0)
[   3376.0] L EventCamera - EventMoveCameraAnimationInstructions (#53, concurrent=0)
[   3376.0] L EventWorldManagerController[Foliage] - Event_SetFoliageTurfParamForTimeline (#59, concurrent=0)
[   3376.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 528.0
               EndBluarLevel: 2.200000047683716
               EndDistance: 6.0
               EndFNumber: 22.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.200000047683716
               StartDistance: 6.0
               StartFNumber: 22.0
[   3376.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#30, concurrent=0)
               duration: 528.0
               ASName: AS-C07_50-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3376.0] E EventCamera - EventMoveCameraAnimationInstructions (#54, concurrent=0)
               duration: 528.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C07_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3549.0] L VoicePlayActor - EventStartVoice (#11, concurrent=0)
[   3599.0] E VoicePlayActor - EventStartVoice (#12, concurrent=0)
               duration: 207.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_025_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   3806.0] L VoicePlayActor - EventStartVoice (#12, concurrent=0)
[   3904.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   3904.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#30, concurrent=0)
[   3904.0] L EventCamera - EventMoveCameraAnimationInstructions (#54, concurrent=0)
[   3904.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 445.0
               EndBluarLevel: 0.5
               EndDistance: 4.0
               EndFNumber: 14.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 4.0
               StartFNumber: 14.0
[   3904.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#31, concurrent=0)
               duration: 445.0
               ASName: AS-C08-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3904.0] E Player_Event[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 445.0
               ASName: C08-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3904.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 445.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3904.0] E EventCamera - EventMoveCameraAnimationInstructions (#55, concurrent=0)
               duration: 445.0
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
[   4018.0] E VoicePlayActor - EventStartVoice (#13, concurrent=0)
               duration: 184.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_026_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   4202.0] L VoicePlayActor - EventStartVoice (#13, concurrent=0)
[   4289.0] E UISystemActor - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   4349.0] L UISystemActor - EventEventFadeOutForTimeline (#1, concurrent=0)
[   4349.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   4349.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#31, concurrent=0)
[   4349.0] L Player_Event[0] - EventPlayASForTimeline (#37, concurrent=0)
[   4349.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#44, concurrent=0)
[   4349.0] L Npc_Navi - EventGoOffstageForUser (#45, concurrent=0)
[   4349.0] L EventCamera - EventMoveCameraAnimationInstructions (#55, concurrent=0)
