-------- Event timeline: Dm_HrlCastle_0060 --------
actors: 9
clips: 34
oneshots: 0
cuts: 4
duration: 3014.0
subtimelines: ['Dm_HrlCastle_0060_Effect', 'Dm_HrlCastle_0060_Env']
params: (none)

===== Cuts =====

Cut: C0010
start time: 0.0
x4: 0
params: (none)

Cut: C0020
start time: 960.0
x4: 0
params: (none)

Cut: C0030
start time: 1350.0
x4: 0
params: (none)

Cut: C0040
start time: 1704.0
x4: 0
params: (none)


===== Actors =====

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
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

Actor: Npc_Hylia_Impa_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_HrlCastle_0060/Dm_HrlCastle_0060_Npc_Hylia_WU_Impa/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_HrlCastle_0060/Dm_HrlCastle_0060_Player_Child/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Zelda_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_HrlCastle_0060/Dm_HrlCastle_0060_Npc_Hylia_WU_Zelda_Child/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_HrlCastle_0060/Dm_HrlCastle_0060_Npc_Navi/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 960.0
               EndBluarLevel: 1.0
               EndDistance: 3.9000000953674316
               EndFNumber: 19.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.9000000953674316
               StartFNumber: 19.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
               duration: 960.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C0010_05-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 960.0
               ASName: C0010-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#27, concurrent=1)
               duration: 960.0
[      0.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 960.0
               ASName: C0010-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#31, concurrent=0)
               duration: 3014.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#32, concurrent=0)
               duration: 960.0
               ASName: C0010-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     25.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 35.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    332.0] E VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
               duration: 231.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0060:Dm_HrlCastle_0060_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[    563.0] L VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
[    701.0] E VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
               duration: 126.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0060:Dm_HrlCastle_0060_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[    827.0] L VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
[    838.0] E VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
               duration: 105.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0060:Dm_HrlCastle_0060_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Impa_Child
[    943.0] L VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
[    960.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[    960.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
[    960.0] L Player_Event[0] - EventPlayASForTimeline (#24, concurrent=0)
[    960.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#27, concurrent=1)
[    960.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#28, concurrent=0)
[    960.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#32, concurrent=0)
[    960.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 390.0
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
[    960.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
               duration: 390.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C0020_05-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    960.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 390.0
               ASName: C0020-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    960.0] E Player_Event[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 390.0
               ASName: C0020-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    960.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 390.0
               ASName: C0020-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    960.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 390.0
               ASName: C0020-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1040.0] E VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
               duration: 118.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0060:Dm_HrlCastle_0060_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Impa_Child
[   1158.0] L VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
[   1224.0] E VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
               duration: 106.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0060:Dm_HrlCastle_0060_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Impa_Child
[   1330.0] L VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
[   1350.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   1350.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
[   1350.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#22, concurrent=0)
[   1350.0] L Player_Event[0] - EventPlayASForTimeline (#25, concurrent=0)
[   1350.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#29, concurrent=0)
[   1350.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#33, concurrent=0)
[   1350.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 354.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 0.949999988079071
               EndFNumber: 173.6999969482422
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 0.949999988079071
               StartFNumber: 173.6999969482422
[   1350.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
               duration: 354.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C0030_05-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1350.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#20, concurrent=1)
               duration: 354.0
               Near: 0.30000001192092896
[   1350.0] E Player_Event[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 354.0
               ASName: C0030-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1350.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#30, concurrent=0)
               duration: 354.0
               ASName: C0030-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1361.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 85.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0060:Dm_HrlCastle_0060_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   1446.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[   1496.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 172.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0060:Dm_HrlCastle_0060_Text_006_c
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   1668.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[   1704.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   1704.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
[   1704.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#20, concurrent=1)
[   1704.0] L Player_Event[0] - EventPlayASForTimeline (#26, concurrent=0)
[   1704.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#30, concurrent=0)
[   1704.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 1310.0
               EndBluarLevel: 1.5
               EndDistance: 1.7599999904632568
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.7599999904632568
               StartFNumber: 60.0
[   1704.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#19, concurrent=0)
               duration: 1310.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C0040_05-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1704.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#21, concurrent=1)
               duration: 1310.0
               Near: 0.10000000149011612
[   1704.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#23, concurrent=0)
               duration: 1310.0
               ASName: C0040-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1805.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 116.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0060:Dm_HrlCastle_0060_Text_006_d
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   1921.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[   2152.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#1, concurrent=0)
               duration: 320.0
               DemoNicknamePos: 5
               DemoNicknameType: 0
               InAnimFrame: -1
               IsWaitEnd: true
               NameMessageLabel: ActorMsg/Npc:Npc_Hylia_Impa_Child_Name
               NicknameMessageLabel: ActorMsg/Nickname:Npc_Hylia_Impa
               OutAnimFrame: -1
[   2472.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#1, concurrent=0)
[   2476.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 410.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0060:Dm_HrlCastle_0060_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   2886.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   2984.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#2, concurrent=0)
               duration: 30.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   3014.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#2, concurrent=0)
[   3014.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   3014.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#19, concurrent=0)
[   3014.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#21, concurrent=1)
[   3014.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#23, concurrent=0)
[   3014.0] L Npc_Navi - EventGoOffstageForUser (#31, concurrent=0)
