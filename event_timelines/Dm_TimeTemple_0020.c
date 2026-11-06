-------- Event timeline: Dm_TimeTemple_0020 --------
actors: 9
clips: 48
oneshots: 0
cuts: 6
duration: 1800.0
subtimelines: ['Dm_TimeTemple_0020_Effect', 'Dm_TimeTemple_0020_Env']
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 341.0
x4: 0
params: (none)

Cut: cut03
start time: 633.0
x4: 0
params: (none)

Cut: cut04
start time: 988.0
x4: 0
params: (none)

Cut: cut05
start time: 1288.0
x4: 0
params: (none)

Cut: cut06
start time: 1468.0
x4: 0
params: (none)


===== Actors =====

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
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0020/Dm_TimeTemple_0020/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventNaviPlayLipSync', 'EventNaviStopLipSync']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0020/Dm_TimeTemple_0020_Npc_Navi/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0020/Dm_TimeTemple_0020_Player_Child/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventTriggerParticipateEvent']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 136.70799255371094
- 106.3479995727539
- -33.99399948120117
UseEventAS: ''
UseEventModelAnime: ''


===== Timeline =====

[      0.0] E Npc_Navi - EventGoOffstageForUser (#0, concurrent=0)
               duration: 1800.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
               duration: 341.0
               EndBluarLevel: 2.0
               EndDistance: 1.3700000047683716
               EndFNumber: 76.0999984741211
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.3700000047683716
               StartFNumber: 76.0999984741211
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#13, concurrent=0)
               duration: 15.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#15, concurrent=0)
               duration: 341.0
               Near: 0.800000011920929
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
               duration: 341.0
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
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 341.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 341.0
               ASName: C01-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#46, concurrent=1)
               duration: 341.0
[      0.0] E Dm_Locator[0] - EventTriggerParticipateEvent (#47, concurrent=0)
               duration: 1800.0
[     15.0] L UISystemActor[0] - EventEventFadeInForTimeline (#13, concurrent=0)
[     31.0] E VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
               duration: 78.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0020:Dm_TimeTemple_0020_Text_000_c
               OffsetFrame: 30
               Speaker: Player_Child
[    109.0] L VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
[    128.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 185.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0020:Dm_TimeTemple_0020_Text_001_c
               OffsetFrame: 30
               Speaker: Npc_Navi
[    158.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#31, concurrent=1)
               duration: 39.0
[    197.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#31, concurrent=1)
[    197.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#32, concurrent=1)
               duration: 6.0
[    203.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#32, concurrent=1)
[    210.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#33, concurrent=1)
               duration: 22.0
[    232.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#33, concurrent=1)
[    232.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#34, concurrent=1)
               duration: 6.0
[    238.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#34, concurrent=1)
[    313.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[    336.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 272.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0020:Dm_TimeTemple_0020_Text_002_d
               OffsetFrame: 30
               Speaker: Npc_Navi
[    341.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
[    341.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#15, concurrent=0)
[    341.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
[    341.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#27, concurrent=0)
[    341.0] L Player_Event[0] - EventPlayASForTimeline (#43, concurrent=0)
[    341.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#46, concurrent=1)
[    341.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 292.0
               EndBluarLevel: 0.0
               EndDistance: 3.0
               EndFNumber: 27.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.0
               StartFNumber: 27.0
[    341.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#16, concurrent=0)
               duration: 292.0
               Near: 1.0
[    341.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
               duration: 292.0
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
[    341.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 292.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    341.0] E Player_Event[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 292.0
               ASName: C02-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    366.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#35, concurrent=1)
               duration: 34.0
[    400.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#35, concurrent=1)
[    420.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#36, concurrent=1)
               duration: 6.0
[    426.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#36, concurrent=1)
[    445.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#37, concurrent=1)
               duration: 62.0
[    507.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#37, concurrent=1)
[    608.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[    610.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#38, concurrent=1)
               duration: 6.0
[    616.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#38, concurrent=1)
[    633.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    633.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#16, concurrent=0)
[    633.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
[    633.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#28, concurrent=0)
[    633.0] L Player_Event[0] - EventPlayASForTimeline (#44, concurrent=0)
[    633.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 355.0
               EndBluarLevel: 2.0
               EndDistance: 3.049999952316284
               EndFNumber: 32.63999938964844
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.049999952316284
               StartFNumber: 32.63999938964844
[    633.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#17, concurrent=0)
               duration: 355.0
               Near: 0.10000000149011612
[    633.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
               duration: 355.0
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
[    633.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 355.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    669.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 149.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0020:Dm_TimeTemple_0020_Text_003_d
               OffsetFrame: 30
               Speaker: Npc_Navi
[    699.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#39, concurrent=1)
               duration: 32.0
[    731.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#39, concurrent=1)
[    818.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[    820.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#40, concurrent=1)
               duration: 6.0
[    826.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#40, concurrent=1)
[    988.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    988.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#17, concurrent=0)
[    988.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
[    988.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#29, concurrent=0)
[    988.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 300.0
               EndBluarLevel: 1.7999999523162842
               EndDistance: 0.375
               EndFNumber: 92.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.7999999523162842
               StartDistance: 0.375
               StartFNumber: 92.0
[    988.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#18, concurrent=0)
               duration: 300.0
               Near: 0.009999999776482582
[    988.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
               duration: 300.0
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
[   1048.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 238.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0020:Dm_TimeTemple_0020_Text_004_d
               OffsetFrame: 30
               Speaker: Npc_Navi
[   1286.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   1288.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   1288.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#18, concurrent=0)
[   1288.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
[   1288.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 180.0
               EndBluarLevel: 2.200000047683716
               EndDistance: 16.360000610351562
               EndFNumber: 20.100000381469727
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.200000047683716
               StartDistance: 16.360000610351562
               StartFNumber: 20.100000381469727
[   1288.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#19, concurrent=0)
               duration: 180.0
               Near: 0.10000000149011612
[   1288.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
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
[   1288.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#30, concurrent=0)
               duration: 180.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1288.0] E Player_Event[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 180.0
               ASName: C05-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1468.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   1468.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#19, concurrent=0)
[   1468.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
[   1468.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#30, concurrent=0)
[   1468.0] L Player_Event[0] - EventPlayASForTimeline (#45, concurrent=0)
[   1468.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 332.0
               EndBluarLevel: 2.5
               EndDistance: 3.0
               EndFNumber: 30.600000381469727
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 3.0
               StartFNumber: 30.600000381469727
[   1468.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#20, concurrent=0)
               duration: 332.0
               Near: 1.0
[   1468.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
               duration: 332.0
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
[   1480.0] E VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
               duration: 150.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0020:Dm_TimeTemple_0020_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   1510.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#41, concurrent=1)
               duration: 122.0
[   1630.0] L VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
[   1632.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#41, concurrent=1)
[   1632.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#42, concurrent=1)
               duration: 3.0
[   1635.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#42, concurrent=1)
[   1711.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#14, concurrent=0)
               duration: 89.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1800.0] L Npc_Navi - EventGoOffstageForUser (#0, concurrent=0)
[   1800.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1800.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#14, concurrent=0)
[   1800.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#20, concurrent=0)
[   1800.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
[   1800.0] L Dm_Locator[0] - EventTriggerParticipateEvent (#47, concurrent=0)
