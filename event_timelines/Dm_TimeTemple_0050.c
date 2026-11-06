-------- Event timeline: Dm_TimeTemple_0050 --------
actors: 10
clips: 92
oneshots: 0
cuts: 11
duration: 3657.0
subtimelines: ['Dm_TimeTemple_0050_Effect', 'Dm_TimeTemple_0050_Env']
params: (none)

===== Cuts =====

Cut: cut02
start time: 0.0
x4: 0
params: (none)

Cut: cut03
start time: 238.0
x4: 0
params: (none)

Cut: cut04
start time: 523.0
x4: 0
params: (none)

Cut: cut05
start time: 1095.0
x4: 0
params: (none)

Cut: cut06
start time: 1565.0
x4: 0
params: (none)

Cut: cut07
start time: 1645.0
x4: 0
params: (none)

Cut: cut08
start time: 1729.0
x4: 0
params: (none)

Cut: cut09
start time: 1957.0
x4: 0
params: (none)

Cut: cut09_50
start time: 2107.0
x4: 0
params: (none)

Cut: cut10
start time: 2252.0
x4: 0
params: (none)

Cut: cut11
start time: 3297.0
x4: 0
params: (none)


===== Actors =====

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
UseEventModelAnime: ''

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerEquipmentUserRequestChangeState']
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
UseEventAS: Work/AS/Root/Event/Dm_TimeTemple_0050_Player_Adult.root.as
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0050/Dm_TimeTemple_0050_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventNaviPlayLipSync', 'EventNaviStopLipSync']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0050/Dm_TimeTemple_0050_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Sheik_Adult[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetModelLodManual']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0050/Dm_TimeTemple_0050_Npc_Hylia_WU_Sheik/workspace.pp__ModelProject.gyml

Actor: VoicePlayActor[4]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventWarpToTargetPosAndRot']
params: EventMemberCreateMethod: 1
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
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0050/Dm_TimeTemple_0050_Npc_Navi/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#1, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 238.0
               EndBluarLevel: 3.0
               EndDistance: 15.5
               EndFNumber: 16.799999237060547
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 15.5
               StartFNumber: 16.799999237060547
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
               duration: 238.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#26, concurrent=1)
               duration: 238.0
               Near: 0.10000000149011612
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 238.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#47, concurrent=1)
               duration: 238.0
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 238.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Locator[0] - EventWarpToTargetPosAndRot (#90, concurrent=0)
               duration: 238.0
               ClothWarpMode: -1
               IsWaitEnd: true
               Position:
               - 136.6529998779297
               - 106.12000274658203
               - -33.98699951171875
               YAngle: 0.0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#91, concurrent=0)
               duration: 3657.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#1, concurrent=0)
[    238.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    238.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
[    238.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#26, concurrent=1)
[    238.0] L Player_Event[0] - EventPlayASForTimeline (#37, concurrent=0)
[    238.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#47, concurrent=1)
[    238.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#49, concurrent=0)
[    238.0] L Dm_Locator[0] - EventWarpToTargetPosAndRot (#90, concurrent=0)
[    238.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 285.0
               EndBluarLevel: 2.0
               EndDistance: 6.099999904632568
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 6.099999904632568
               StartFNumber: 20.0
[    238.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
               duration: 285.0
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
[    238.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#27, concurrent=1)
               duration: 285.0
               Near: 0.10000000149011612
[    238.0] E Player_Event[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 285.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    238.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 285.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    279.0] E VoicePlayActor[4] - EventStartVoice (#79, concurrent=0)
               duration: 92.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0050:Dm_TimeTemple_0050_Text_000_b
               OffsetFrame: 30
               Speaker: Player_Event
[    371.0] L VoicePlayActor[4] - EventStartVoice (#79, concurrent=0)
[    517.0] E VoicePlayActor[4] - EventStartVoice (#80, concurrent=0)
               duration: 467.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0050:Dm_TimeTemple_0050_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[    523.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[    523.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
[    523.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#27, concurrent=1)
[    523.0] L Player_Event[0] - EventPlayASForTimeline (#38, concurrent=0)
[    523.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#50, concurrent=0)
[    523.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 572.0
               EndBluarLevel: 2.0
               EndDistance: 15.5
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 15.5
               StartFNumber: 10.0
[    523.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
               duration: 572.0
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
[    523.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#28, concurrent=1)
               duration: 572.0
               Near: 0.10000000149011612
[    523.0] E Player_Event[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 572.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    523.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 572.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    548.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#59, concurrent=1)
               duration: 438.0
[    984.0] L VoicePlayActor[4] - EventStartVoice (#80, concurrent=0)
[    986.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#59, concurrent=1)
[    986.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#60, concurrent=1)
               duration: 50.0
[   1036.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#60, concurrent=1)
[   1073.0] E VoicePlayActor[4] - EventStartVoice (#81, concurrent=0)
               duration: 280.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0050:Dm_TimeTemple_0050_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   1095.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1095.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
[   1095.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#28, concurrent=1)
[   1095.0] L Player_Event[0] - EventPlayASForTimeline (#39, concurrent=0)
[   1095.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#51, concurrent=0)
[   1095.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 470.0
               EndBluarLevel: 1.5
               EndDistance: 3.0
               EndFNumber: 150.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 3.0
               StartFNumber: 150.0
[   1095.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
               duration: 470.0
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
[   1095.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#29, concurrent=1)
               duration: 470.0
               Near: 0.10000000149011612
[   1095.0] E Player_Event[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 470.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1095.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 470.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1103.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#61, concurrent=1)
               duration: 252.0
[   1353.0] L VoicePlayActor[4] - EventStartVoice (#81, concurrent=0)
[   1355.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#61, concurrent=1)
[   1355.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#62, concurrent=1)
               duration: 59.0
[   1414.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#62, concurrent=1)
[   1565.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   1565.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
[   1565.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#29, concurrent=1)
[   1565.0] L Player_Event[0] - EventPlayASForTimeline (#40, concurrent=0)
[   1565.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#52, concurrent=0)
[   1565.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 80.0
               EndBluarLevel: 2.5999999046325684
               EndDistance: 7.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5999999046325684
               StartDistance: 7.0
               StartFNumber: 10.0
[   1565.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#19, concurrent=0)
               duration: 80.0
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
[   1565.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#30, concurrent=1)
               duration: 80.0
               Near: 0.10000000149011612
[   1565.0] E Player_Event[0] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 80.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1565.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 80.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1565.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#71, concurrent=0)
               duration: 80.0
               ASName: C06-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1645.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   1645.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#19, concurrent=0)
[   1645.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#30, concurrent=1)
[   1645.0] L Player_Event[0] - EventPlayASForTimeline (#41, concurrent=0)
[   1645.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#53, concurrent=0)
[   1645.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#71, concurrent=0)
[   1645.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 84.0
               EndBluarLevel: 0.0
               EndDistance: 2.0
               EndFNumber: 58.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.0
               StartFNumber: 58.0
[   1645.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
               duration: 84.0
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
[   1645.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#31, concurrent=1)
               duration: 84.0
               Near: 0.10000000149011612
[   1645.0] E Player_Event[0] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 84.0
               ASName: AS-C07-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1645.0] E Player_Event[0] - EventTriggerEquipmentUserRequestChangeState (#48, concurrent=2)
               duration: 2012.0
               DynamicEquipmentSlot: 0
               EquipmentState: 1
[   1645.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#54, concurrent=0)
               duration: 84.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1645.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#72, concurrent=0)
               duration: 84.0
               ASName: C07-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1693.0] E VoicePlayActor[4] - EventStartVoice (#82, concurrent=0)
               duration: 67.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0050:Dm_TimeTemple_0050_Text_003_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1729.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   1729.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
[   1729.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#31, concurrent=1)
[   1729.0] L Player_Event[0] - EventPlayASForTimeline (#42, concurrent=0)
[   1729.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#54, concurrent=0)
[   1729.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#72, concurrent=0)
[   1729.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 228.0
               EndBluarLevel: 2.200000047683716
               EndDistance: 1.7000000476837158
               EndFNumber: 96.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.200000047683716
               StartDistance: 1.7000000476837158
               StartFNumber: 96.0
[   1729.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
               duration: 228.0
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
[   1729.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#32, concurrent=1)
               duration: 228.0
               Near: 0.10000000149011612
[   1729.0] E Player_Event[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 228.0
               ASName: AS-C08-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1729.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#55, concurrent=0)
               duration: 228.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1760.0] L VoicePlayActor[4] - EventStartVoice (#82, concurrent=0)
[   1760.0] E VoicePlayActor[4] - EventStartVoice (#83, concurrent=0)
               duration: 61.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0050:Dm_TimeTemple_0050_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   1790.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#63, concurrent=1)
               duration: 50.0
[   1821.0] L VoicePlayActor[4] - EventStartVoice (#83, concurrent=0)
[   1821.0] E VoicePlayActor[4] - EventStartVoice (#84, concurrent=0)
               duration: 66.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0050:Dm_TimeTemple_0050_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   1840.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#63, concurrent=1)
[   1840.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#64, concurrent=1)
               duration: 11.0
[   1851.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#64, concurrent=1)
[   1851.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#65, concurrent=1)
               duration: 50.0
[   1887.0] L VoicePlayActor[4] - EventStartVoice (#84, concurrent=0)
[   1887.0] E VoicePlayActor[4] - EventStartVoice (#85, concurrent=0)
               duration: 63.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0050:Dm_TimeTemple_0050_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   1901.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#65, concurrent=1)
[   1901.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#66, concurrent=1)
               duration: 16.0
[   1917.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#66, concurrent=1)
[   1917.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#67, concurrent=1)
               duration: 35.0
[   1950.0] L VoicePlayActor[4] - EventStartVoice (#85, concurrent=0)
[   1950.0] E VoicePlayActor[4] - EventStartVoice (#86, concurrent=0)
               duration: 118.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0050:Dm_TimeTemple_0050_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   1952.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#67, concurrent=1)
[   1952.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#68, concurrent=1)
               duration: 5.0
[   1957.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   1957.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
[   1957.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#32, concurrent=1)
[   1957.0] L Player_Event[0] - EventPlayASForTimeline (#43, concurrent=0)
[   1957.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#55, concurrent=0)
[   1957.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#68, concurrent=1)
[   1957.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 150.0
               EndBluarLevel: 0.0
               EndDistance: 5.5
               EndFNumber: 33.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 5.5
               StartFNumber: 33.0
[   1957.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
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
[   1957.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#33, concurrent=1)
               duration: 150.0
               Near: 0.10000000149011612
[   1957.0] E Player_Event[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 150.0
               ASName: C09-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1957.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#56, concurrent=0)
               duration: 150.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1957.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#73, concurrent=0)
               duration: 150.0
               ASName: C09-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1980.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#69, concurrent=1)
               duration: 90.0
[   2068.0] L VoicePlayActor[4] - EventStartVoice (#86, concurrent=0)
[   2070.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#69, concurrent=1)
[   2070.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#70, concurrent=1)
               duration: 14.0
[   2084.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#70, concurrent=1)
[   2107.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   2107.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
[   2107.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#33, concurrent=1)
[   2107.0] L Player_Event[0] - EventPlayASForTimeline (#44, concurrent=0)
[   2107.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#56, concurrent=0)
[   2107.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#73, concurrent=0)
[   2107.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 150.0
               EndBluarLevel: 0.0
               EndDistance: 4.300000190734863
               EndFNumber: 16.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 4.300000190734863
               StartFNumber: 16.0
[   2107.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
               duration: 145.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C09_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2107.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#34, concurrent=1)
               duration: 145.0
               Near: 0.10000000149011612
[   2107.0] E Player_Event[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 145.0
               ASName: C09_50-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2107.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#57, concurrent=0)
               duration: 145.0
               ASName: C09_50-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2107.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 145.0
               ASName: C09_50-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2107.0] E Npc_Hylia_Sheik_Adult[0] - EventTriggerSetModelLodManual (#77, concurrent=1)
               duration: 145.0
               LodLevel: 0
[   2128.0] E VoicePlayActor[4] - EventStartVoice (#87, concurrent=0)
               duration: 100.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0050:Dm_TimeTemple_0050_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   2228.0] L VoicePlayActor[4] - EventStartVoice (#87, concurrent=0)
[   2252.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
[   2252.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#34, concurrent=1)
[   2252.0] L Player_Event[0] - EventPlayASForTimeline (#45, concurrent=0)
[   2252.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#57, concurrent=0)
[   2252.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#74, concurrent=0)
[   2252.0] L Npc_Hylia_Sheik_Adult[0] - EventTriggerSetModelLodManual (#77, concurrent=1)
[   2252.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
               duration: 1045.0
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
[   2252.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#35, concurrent=1)
               duration: 1045.0
               Near: 0.10000000149011612
[   2252.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#75, concurrent=0)
               duration: 1045.0
               ASName: C10-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2252.0] E Npc_Hylia_Sheik_Adult[0] - EventTriggerSetModelLodManual (#78, concurrent=1)
               duration: 1045.0
               LodLevel: -1
[   2257.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   2257.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 1040.0
               EndBluarLevel: 2.5
               EndDistance: 2.619999885559082
               EndFNumber: 85.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 2.619999885559082
               StartFNumber: 85.0
[   2292.0] E SoundSystemActor[0] - EventTriggerStartBgmSimple (#0, concurrent=0)
               duration: 100.0
               BGMName: BGM_Dm_TimeTemple_0050
               CommandLife: 2
               IsReleaseDucking: false
[   2307.0] E VoicePlayActor[4] - EventStartVoice (#88, concurrent=0)
               duration: 162.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0050:Dm_TimeTemple_0050_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   2392.0] L SoundSystemActor[0] - EventTriggerStartBgmSimple (#0, concurrent=0)
[   2469.0] L VoicePlayActor[4] - EventStartVoice (#88, concurrent=0)
[   2545.0] E VoicePlayActor[4] - EventStartVoice (#89, concurrent=0)
               duration: 397.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0050:Dm_TimeTemple_0050_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   2942.0] L VoicePlayActor[4] - EventStartVoice (#89, concurrent=0)
[   2967.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#2, concurrent=0)
               duration: 330.0
               DemoNicknamePos: 9
               DemoNicknameType: 0
               InAnimFrame: -1
               IsWaitEnd: true
               NameMessageLabel: ActorMsg/Npc:Npc_Hylia_Sheik_Adult_Name
               NicknameMessageLabel: ActorMsg/Nickname:Npc_Hylia_Shiek
               OutAnimFrame: -1
[   3297.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#2, concurrent=0)
[   3297.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   3297.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
[   3297.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#35, concurrent=1)
[   3297.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#75, concurrent=0)
[   3297.0] L Npc_Hylia_Sheik_Adult[0] - EventTriggerSetModelLodManual (#78, concurrent=1)
[   3297.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 360.0
               EndBluarLevel: 2.5
               EndDistance: 11.0
               EndFNumber: 12.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 11.0
               StartFNumber: 12.0
[   3297.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
               duration: 360.0
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
[   3297.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#36, concurrent=1)
               duration: 360.0
               Near: 0.10000000149011612
[   3297.0] E Player_Event[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 360.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3297.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#58, concurrent=0)
               duration: 360.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3297.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#76, concurrent=0)
               duration: 360.0
               ASName: C11-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3597.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#3, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   3657.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#3, concurrent=0)
[   3657.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   3657.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
[   3657.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#36, concurrent=1)
[   3657.0] L Player_Event[0] - EventPlayASForTimeline (#46, concurrent=0)
[   3657.0] L Player_Event[0] - EventTriggerEquipmentUserRequestChangeState (#48, concurrent=2)
[   3657.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#58, concurrent=0)
[   3657.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#76, concurrent=0)
[   3657.0] L Npc_Navi - EventGoOffstageForUser (#91, concurrent=0)
