-------- Event timeline: Dm_HrlField_0005 --------
actors: 10
clips: 49
oneshots: 0
cuts: 8
duration: 3593.0
subtimelines: ['Dm_HrlField_0005_Effect', 'Dm_HrlField_0005_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 350.0
x4: 0
params: (none)

Cut: cut03
start time: 482.0
x4: 0
params: (none)

Cut: cut04
start time: 662.0
x4: 0
params: (none)

Cut: cut05
start time: 1005.0
x4: 0
params: (none)

Cut: cut06
start time: 1592.0
x4: 0
params: (none)

Cut: cut07
start time: 2417.0
x4: 0
params: (none)

Cut: cut08
start time: 3028.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerStartBgmSimple']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

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

Actor: Npc_Kaepora[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_HrlField_0005_Npc_Kaepora.root.as
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0005/Dm_HrlField_0005_Npc_U_Kaepora/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0005/Dm_HrlField_0005_Player_Child/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0005/Dm_HrlField_0005_Npc_Navi/workspace.pp__ModelProject.gyml

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

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0005/Dm_HrlField_0005/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E Dm_Locator[0] - EventDoNothing (#0, concurrent=0)
               duration: 3593.0
               IsWaitEnd: true
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#2, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 350.0
               EndBluarLevel: 0.0
               EndDistance: 2.4200000762939453
               EndFNumber: 44.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.4200000762939453
               StartFNumber: 44.0
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 350.0
               ASName: C01-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#31, concurrent=1)
               duration: 100.0
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#32, concurrent=0)
               duration: 350.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#37, concurrent=0)
               duration: 3593.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
               duration: 350.0
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
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#2, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#31, concurrent=1)
[    350.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[    350.0] L Player_Event[0] - EventPlayASForTimeline (#25, concurrent=0)
[    350.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#32, concurrent=0)
[    350.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
[    350.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 132.0
               EndBluarLevel: 2.0
               EndDistance: 1.6299999952316284
               EndFNumber: 70.4000015258789
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.6299999952316284
               StartFNumber: 70.4000015258789
[    350.0] E Player_Event[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 132.0
               ASName: C01_10-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    350.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 132.0
               ASName: C01_10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    350.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
               duration: 132.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01_10-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    406.0] E VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
               duration: 65.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0005:Dm_HrlField_0005_Text_000_ac
               OffsetFrame: 30
               Speaker: Player_Event
[    471.0] L VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
[    482.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[    482.0] L Player_Event[0] - EventPlayASForTimeline (#26, concurrent=0)
[    482.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#33, concurrent=0)
[    482.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
[    482.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 180.0
               EndBluarLevel: 0.5
               EndDistance: 6.130000114440918
               EndFNumber: 17.299999237060547
               IsAutoFocalDist: false
               IsEnableDofFarCancel: true
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 6.130000114440918
               StartFNumber: 17.299999237060547
[    482.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#19, concurrent=0)
               duration: 180.0
               ASName: AS-C02-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    482.0] E Player_Event[0] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 180.0
               ASName: C02-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    482.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 180.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    482.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
               duration: 180.0
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
[    662.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[    662.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#19, concurrent=0)
[    662.0] L Player_Event[0] - EventPlayASForTimeline (#27, concurrent=0)
[    662.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#34, concurrent=0)
[    662.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
[    662.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 343.0
               EndBluarLevel: 1.0
               EndDistance: 1.690000057220459
               EndFNumber: 66.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.690000057220459
               StartFNumber: 66.5
[    662.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#20, concurrent=0)
               duration: 343.0
               ASName: AS-C02_10-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    662.0] E Player_Event[0] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 343.0
               ASName: C02_10-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    662.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 343.0
               ASName: C02_10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    662.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
               duration: 343.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C02_10-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    662.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#46, concurrent=1)
               duration: 343.0
               Near: 0.10000000149011612
[   1005.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   1005.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#20, concurrent=0)
[   1005.0] L Player_Event[0] - EventPlayASForTimeline (#28, concurrent=0)
[   1005.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
[   1005.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
[   1005.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#46, concurrent=1)
[   1005.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 587.0
               EndBluarLevel: 1.7000000476837158
               EndDistance: 4.71999979019165
               EndFNumber: 10.0
               IsAutoFocalDist: true
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.7000000476837158
               StartDistance: 4.71999979019165
               StartFNumber: 10.0
[   1005.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#21, concurrent=0)
               duration: 587.0
               ASName: AS-C03-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1005.0] E Player_Event[0] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 587.0
               ASName: C03-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1005.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 587.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1005.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
               duration: 587.0
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
[   1005.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#47, concurrent=1)
               duration: 587.0
               Near: 0.5
[   1040.0] E VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
               duration: 99.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0005:Dm_HrlField_0005_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   1139.0] L VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
[   1265.0] E VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
               duration: 320.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0005:Dm_HrlField_0005_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   1585.0] L VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
[   1592.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   1592.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#21, concurrent=0)
[   1592.0] L Player_Event[0] - EventPlayASForTimeline (#29, concurrent=0)
[   1592.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
[   1592.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
[   1592.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#47, concurrent=1)
[   1592.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 825.0
               EndBluarLevel: 1.659999966621399
               EndDistance: 4.570000171661377
               EndFNumber: 16.600000381469727
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.659999966621399
               StartDistance: 4.570000171661377
               StartFNumber: 16.600000381469727
[   1592.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 825.0
               ASName: AS-C04-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1592.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
               duration: 825.0
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
[   1607.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 425.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0005:Dm_HrlField_0005_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   2032.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[   2064.0] E SoundSystemActor[0] - EventTriggerStartBgmSimple (#1, concurrent=0)
               duration: 100.0
               BGMName: BGM_Dm_HrlField_0005
               CommandLife: 2
               IsReleaseDucking: false
[   2064.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#3, concurrent=0)
               duration: 320.0
               DemoNicknamePos: 3
               DemoNicknameType: 0
               InAnimFrame: -1
               IsWaitEnd: false
               NameMessageLabel: ActorMsg/Npc:Npc_Kaepora_Name
               NicknameMessageLabel: ActorMsg/Nickname:Npc_Kaepora
               OutAnimFrame: -1
[   2164.0] L SoundSystemActor[0] - EventTriggerStartBgmSimple (#1, concurrent=0)
[   2384.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#3, concurrent=0)
[   2402.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 611.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0005:Dm_HrlField_0005_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   2417.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   2417.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#22, concurrent=0)
[   2417.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
[   2417.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 611.0
               EndBluarLevel: 1.5
               EndDistance: 8.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 8.0
               StartFNumber: 20.0
[   2417.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#23, concurrent=0)
               duration: 611.0
               ASName: AS-C05-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2417.0] E Player_Event[0] - EventPlayASForTimeline (#30, concurrent=0)
               duration: 611.0
               ASName: C05-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2417.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
               duration: 611.0
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
[   2417.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#48, concurrent=1)
               duration: 611.0
               Near: 0.5
[   3013.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[   3013.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 487.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0005:Dm_HrlField_0005_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[   3028.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   3028.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#23, concurrent=0)
[   3028.0] L Player_Event[0] - EventPlayASForTimeline (#30, concurrent=0)
[   3028.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
[   3028.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#48, concurrent=1)
[   3028.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 565.0
               EndBluarLevel: 1.5800000429153442
               EndDistance: 4.559999942779541
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5800000429153442
               StartDistance: 4.559999942779541
               StartFNumber: 30.0
[   3028.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 565.0
               ASName: AS-C06-Npc_U_Kaepora-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3028.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
               duration: 565.0
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
[   3500.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[   3533.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#4, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   3593.0] L Dm_Locator[0] - EventDoNothing (#0, concurrent=0)
[   3593.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#4, concurrent=0)
[   3593.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   3593.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#24, concurrent=0)
[   3593.0] L Npc_Navi - EventGoOffstageForUser (#37, concurrent=0)
[   3593.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
