-------- Event timeline: Dm_Ending_0000 --------
actors: 12
clips: 217
oneshots: 0
cuts: 23
duration: 11580.0
subtimelines: ['Dm_Ending_0000_Effect', 'Dm_Ending_0000_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 774.0
x4: 0
params: (none)

Cut: cut03
start time: 1469.0
x4: 0
params: (none)

Cut: cut05
start time: 2089.0
x4: 0
params: (none)

Cut: cut06
start time: 2239.0
x4: 0
params: (none)

Cut: cut07
start time: 2451.0
x4: 0
params: (none)

Cut: cut08
start time: 2793.0
x4: 0
params: (none)

Cut: cut09
start time: 3193.0
x4: 0
params: (none)

Cut: cut10
start time: 3583.0
x4: 0
params: (none)

Cut: cut11
start time: 3957.0
x4: 0
params: (none)

Cut: cut13
start time: 4127.0
x4: 0
params: (none)

Cut: cut17
start time: 4857.0
x4: 0
params: (none)

Cut: cut18
start time: 5425.0
x4: 0
params: (none)

Cut: cut19
start time: 5535.0
x4: 0
params: (none)

Cut: cut20
start time: 6257.0
x4: 0
params: (none)

Cut: cut21
start time: 6857.0
x4: 0
params: (none)

Cut: cut22
start time: 7161.0
x4: 0
params: (none)

Cut: cut23
start time: 7991.0
x4: 0
params: (none)

Cut: cut24
start time: 8431.0
x4: 0
params: (none)

Cut: cut25
start time: 9095.0
x4: 0
params: (none)

Cut: cut26
start time: 9825.0
x4: 0
params: (none)

Cut: cut27
start time: 9985.0
x4: 0
params: (none)

Cut: cut28
start time: 10085.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Land_Ending_WaterPlane_A_01[0]
concurrent clips: 2
actions: ['EventTriggerStartReplaceTexture', 'EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 0.0
- 0.004999999888241291
- 0.0
UseEventAS: Work/AS/Root/Event/Dm_Ending_0000_WaterPlane.root.as
UseEventModelAnime: Work/Model/Event/Dm_Ending_0000/Dm_Ending_0000_WaterPlane/workspace.pp__ModelProject.gyml

Actor: Land_Demo_SkySphere_UyuniFlatSea[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 0.0
- 2.0
- 0.0
Rotation:
- 0.0
- 0.0
- 0.0
UseEventAS: Work/AS/Root/Event/Dm_Ending_0000_Land_Demo.root.as
UseEventModelAnime: Work/Model/Event/Dm_Ending_0000/Dm_Ending_0000_Land_Demo/workspace.pp__ModelProject.gyml

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Ending_0000/Dm_Ending_0000/workspace.pp__ModelProject.gyml

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Player_Event[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerPlayerRequestBeginSnapshot', 'EventTriggerPlayerRequestEndSnapshot', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerPlayerTemporaryBootsChange']
params: BindTargetActorNameComponent: Player
EquipmentUser_ArmorHead: ''
EquipmentUser_ArmorLower: ''
EquipmentUser_ArmorUpper: ''
EquipmentUser_Bow: ''
EquipmentUser_Bow_EquipmentState: 3
EquipmentUser_Shield: ''
EquipmentUser_Shield_EquipmentState: 0
EquipmentUser_Weapon: Weapon_Sword_Master
EquipmentUser_Weapon_EquipmentState: 1
EventMemberCreateMethod: 1
ExceptionalBindType: 4
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Ending_0000/Dm_Ending_0000_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Ending_0000/Dm_Ending_0000_Npc_Navi/workspace.pp__ModelProject.gyml

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

Actor: Npc_Hylia_Zelda_Adult_Scalable[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Ending_0000/Dm_Ending_0000_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml

Actor: Dm_Item_Ocarina_Time[0]
concurrent clips: 1
actions: ['EventModelBind']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Item_Ocarina_Time[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 3
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
actions: ['EventEventFadeOutForTimeline', 'EventEventFadeInForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventTriggerStartReplaceTexture (#0, concurrent=0)
               duration: 11580.0
[      0.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#1, concurrent=1)
               duration: 774.0
               ASName: C01
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 774.0
               ASName: C01
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
               duration: 774.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#70, concurrent=1)
               duration: 774.0
               Near: 0.10000000149011612
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#93, concurrent=0)
               duration: 774.0
               EndBluarLevel: 3.0
               EndDistance: 1.9769999980926514
               EndFNumber: 75.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.9769999980926514
               StartFNumber: 75.0
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#116, concurrent=0)
               duration: 774.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerEquipmentUserRequestChangeState (#139, concurrent=1)
               duration: 1.0
               DynamicEquipmentSlot: 2
               EquipmentState: 0
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#143, concurrent=0)
               duration: 774.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#166, concurrent=0)
               duration: 11580.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#167, concurrent=0)
               duration: 774.0
               ASName: C01-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Item_Ocarina_Time[0] - EventModelBind (#190, concurrent=0)
               duration: 6857.0
               ActorName: Player_Event
               BoneName: Weapon_R
               InstanceName: '0'
               IsWaitEnd: true
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[      0.0] E Item_Ocarina_Time[0] - EventGoOffstageForUser (#192, concurrent=0)
               duration: 11580.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#215, concurrent=0)
               duration: 354.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      1.0] L Player_Event[0] - EventTriggerEquipmentUserRequestChangeState (#139, concurrent=1)
[      1.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#140, concurrent=1)
               duration: 1.0
               BootsType: 0
[      2.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#140, concurrent=1)
[      2.0] E Player_Event[0] - EventTriggerPlayerRequestBeginSnapshot (#141, concurrent=1)
               duration: 772.0
[    354.0] L UISystemActor[0] - EventEventFadeInForTimeline (#215, concurrent=0)
[    774.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#1, concurrent=1)
[    774.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#24, concurrent=0)
[    774.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
[    774.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#70, concurrent=1)
[    774.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#93, concurrent=0)
[    774.0] L Player_Event[0] - EventPlayASForTimeline (#116, concurrent=0)
[    774.0] L Player_Event[0] - EventTriggerPlayerRequestBeginSnapshot (#141, concurrent=1)
[    774.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#143, concurrent=0)
[    774.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#167, concurrent=0)
[    774.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#2, concurrent=1)
               duration: 695.0
               ASName: C02
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    774.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 695.0
               ASName: C02
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    774.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
               duration: 695.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C02-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[    774.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#71, concurrent=1)
               duration: 695.0
               Near: 0.10000000149011612
[    774.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#94, concurrent=0)
               duration: 695.0
               EndBluarLevel: 3.0
               EndDistance: 4.0
               EndFNumber: 56.959999084472656
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 4.0
               StartFNumber: 56.959999084472656
[    774.0] E Player_Event[0] - EventPlayASForTimeline (#117, concurrent=0)
               duration: 695.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    774.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#144, concurrent=0)
               duration: 695.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    774.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#168, concurrent=0)
               duration: 695.0
               ASName: C02-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    859.0] E VoicePlayActor[0] - EventStartVoice (#193, concurrent=0)
               duration: 81.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_100_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[    940.0] L VoicePlayActor[0] - EventStartVoice (#193, concurrent=0)
[   1026.0] E VoicePlayActor[0] - EventStartVoice (#194, concurrent=0)
               duration: 74.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_100_c
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1100.0] L VoicePlayActor[0] - EventStartVoice (#194, concurrent=0)
[   1165.0] E VoicePlayActor[0] - EventStartVoice (#195, concurrent=0)
               duration: 273.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_101_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1438.0] L VoicePlayActor[0] - EventStartVoice (#195, concurrent=0)
[   1469.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#2, concurrent=1)
[   1469.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#25, concurrent=0)
[   1469.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
[   1469.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#71, concurrent=1)
[   1469.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#94, concurrent=0)
[   1469.0] L Player_Event[0] - EventPlayASForTimeline (#117, concurrent=0)
[   1469.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#144, concurrent=0)
[   1469.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#168, concurrent=0)
[   1469.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#3, concurrent=1)
               duration: 620.0
               ASName: C03
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1469.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 620.0
               ASName: C03
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1469.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
               duration: 620.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1469.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#72, concurrent=1)
               duration: 620.0
               Near: 0.10000000149011612
[   1469.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#95, concurrent=0)
               duration: 620.0
               EndBluarLevel: 3.0
               EndDistance: 2.799999952316284
               EndFNumber: 52.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 2.799999952316284
               StartFNumber: 52.0
[   1469.0] E Player_Event[0] - EventPlayASForTimeline (#118, concurrent=0)
               duration: 620.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1469.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#145, concurrent=0)
               duration: 620.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1469.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#169, concurrent=0)
               duration: 620.0
               ASName: C03-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1473.0] E VoicePlayActor[0] - EventStartVoice (#196, concurrent=0)
               duration: 320.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_102_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1793.0] L VoicePlayActor[0] - EventStartVoice (#196, concurrent=0)
[   1972.0] E VoicePlayActor[0] - EventStartVoice (#197, concurrent=0)
               duration: 104.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_103_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   2076.0] L VoicePlayActor[0] - EventStartVoice (#197, concurrent=0)
[   2089.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#3, concurrent=1)
[   2089.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#26, concurrent=0)
[   2089.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
[   2089.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#72, concurrent=1)
[   2089.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#95, concurrent=0)
[   2089.0] L Player_Event[0] - EventPlayASForTimeline (#118, concurrent=0)
[   2089.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#145, concurrent=0)
[   2089.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#169, concurrent=0)
[   2089.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#4, concurrent=1)
               duration: 150.0
               ASName: C05
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2089.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 150.0
               ASName: C05
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2089.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
               duration: 150.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C05-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2089.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#73, concurrent=1)
               duration: 150.0
               Near: 0.10000000149011612
[   2089.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#96, concurrent=0)
               duration: 150.0
               EndBluarLevel: 1.0
               EndDistance: 1.7999999523162842
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.7999999523162842
               StartFNumber: 80.0
[   2089.0] E Player_Event[0] - EventPlayASForTimeline (#119, concurrent=0)
               duration: 150.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2089.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#146, concurrent=0)
               duration: 150.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2089.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#170, concurrent=0)
               duration: 150.0
               ASName: C05-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2239.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#4, concurrent=1)
[   2239.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#27, concurrent=0)
[   2239.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
[   2239.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#73, concurrent=1)
[   2239.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#96, concurrent=0)
[   2239.0] L Player_Event[0] - EventPlayASForTimeline (#119, concurrent=0)
[   2239.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#146, concurrent=0)
[   2239.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#170, concurrent=0)
[   2239.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#5, concurrent=1)
               duration: 212.0
               ASName: C06
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2239.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 212.0
               ASName: C06
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2239.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
               duration: 212.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C06-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2239.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#74, concurrent=1)
               duration: 212.0
               Near: 0.10000000149011612
[   2239.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#97, concurrent=0)
               duration: 212.0
               EndBluarLevel: 1.0
               EndDistance: 3.5
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.5
               StartFNumber: 60.0
[   2239.0] E Player_Event[0] - EventPlayASForTimeline (#120, concurrent=0)
               duration: 212.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2239.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#147, concurrent=0)
               duration: 212.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2239.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#171, concurrent=0)
               duration: 212.0
               ASName: C06-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2451.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#5, concurrent=1)
[   2451.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#28, concurrent=0)
[   2451.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
[   2451.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#74, concurrent=1)
[   2451.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#97, concurrent=0)
[   2451.0] L Player_Event[0] - EventPlayASForTimeline (#120, concurrent=0)
[   2451.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#147, concurrent=0)
[   2451.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#171, concurrent=0)
[   2451.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#6, concurrent=1)
               duration: 342.0
               ASName: C07
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2451.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 342.0
               ASName: C07
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2451.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
               duration: 342.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C07-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2451.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#75, concurrent=1)
               duration: 342.0
               Near: 0.10000000149011612
[   2451.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#98, concurrent=0)
               duration: 342.0
               EndBluarLevel: 1.0
               EndDistance: 7.5
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 7.5
               StartFNumber: 15.0
[   2451.0] E Player_Event[0] - EventPlayASForTimeline (#121, concurrent=0)
               duration: 342.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2451.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#148, concurrent=0)
               duration: 342.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2451.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#172, concurrent=0)
               duration: 342.0
               ASName: C07-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2473.0] E VoicePlayActor[0] - EventStartVoice (#198, concurrent=0)
               duration: 285.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_105_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   2758.0] L VoicePlayActor[0] - EventStartVoice (#198, concurrent=0)
[   2792.0] E VoicePlayActor[0] - EventStartVoice (#199, concurrent=0)
               duration: 366.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_106_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   2793.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#6, concurrent=1)
[   2793.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#29, concurrent=0)
[   2793.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
[   2793.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#75, concurrent=1)
[   2793.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#98, concurrent=0)
[   2793.0] L Player_Event[0] - EventPlayASForTimeline (#121, concurrent=0)
[   2793.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#148, concurrent=0)
[   2793.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#172, concurrent=0)
[   2793.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#7, concurrent=1)
               duration: 400.0
               ASName: C08
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2793.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#30, concurrent=0)
               duration: 400.0
               ASName: C08
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2793.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
               duration: 400.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C08-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2793.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#76, concurrent=1)
               duration: 400.0
               Near: 0.10000000149011612
[   2793.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#99, concurrent=0)
               duration: 400.0
               EndBluarLevel: 1.0
               EndDistance: 7.5
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 7.5
               StartFNumber: 15.0
[   2793.0] E Player_Event[0] - EventPlayASForTimeline (#122, concurrent=0)
               duration: 400.0
               ASName: C08-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2793.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#149, concurrent=0)
               duration: 400.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2793.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#173, concurrent=0)
               duration: 400.0
               ASName: C08-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3158.0] L VoicePlayActor[0] - EventStartVoice (#199, concurrent=0)
[   3193.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#7, concurrent=1)
[   3193.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#30, concurrent=0)
[   3193.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
[   3193.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#76, concurrent=1)
[   3193.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#99, concurrent=0)
[   3193.0] L Player_Event[0] - EventPlayASForTimeline (#122, concurrent=0)
[   3193.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#149, concurrent=0)
[   3193.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#173, concurrent=0)
[   3193.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#8, concurrent=1)
               duration: 390.0
               ASName: C09
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3193.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#31, concurrent=0)
               duration: 390.0
               ASName: C09
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3193.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
               duration: 390.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C09-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3193.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#77, concurrent=1)
               duration: 390.0
               Near: 0.10000000149011612
[   3193.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#100, concurrent=0)
               duration: 390.0
               EndBluarLevel: 1.0
               EndDistance: 1.5
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.5
               StartFNumber: 100.0
[   3193.0] E Player_Event[0] - EventPlayASForTimeline (#123, concurrent=0)
               duration: 390.0
               ASName: C09-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3193.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#150, concurrent=0)
               duration: 390.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3193.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#174, concurrent=0)
               duration: 390.0
               ASName: C09-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3207.0] E VoicePlayActor[0] - EventStartVoice (#200, concurrent=0)
               duration: 318.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_107_cb
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   3525.0] L VoicePlayActor[0] - EventStartVoice (#200, concurrent=0)
[   3583.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#8, concurrent=1)
[   3583.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#31, concurrent=0)
[   3583.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
[   3583.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#77, concurrent=1)
[   3583.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#100, concurrent=0)
[   3583.0] L Player_Event[0] - EventPlayASForTimeline (#123, concurrent=0)
[   3583.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#150, concurrent=0)
[   3583.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#174, concurrent=0)
[   3583.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#9, concurrent=1)
               duration: 374.0
               ASName: C10
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3583.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#32, concurrent=0)
               duration: 374.0
               ASName: C10
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3583.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
               duration: 374.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C10-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3583.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#78, concurrent=1)
               duration: 374.0
               Near: 0.10000000149011612
[   3583.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#101, concurrent=0)
               duration: 374.0
               EndBluarLevel: 1.0
               EndDistance: 1.5
               EndFNumber: 215.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.5
               StartFNumber: 215.0
[   3583.0] E Player_Event[0] - EventPlayASForTimeline (#124, concurrent=0)
               duration: 374.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3583.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#151, concurrent=0)
               duration: 374.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3583.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#175, concurrent=0)
               duration: 374.0
               ASName: C10-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3584.0] E VoicePlayActor[0] - EventStartVoice (#201, concurrent=0)
               duration: 328.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_107_cc
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   3912.0] L VoicePlayActor[0] - EventStartVoice (#201, concurrent=0)
[   3957.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#9, concurrent=1)
[   3957.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#32, concurrent=0)
[   3957.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
[   3957.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#78, concurrent=1)
[   3957.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#101, concurrent=0)
[   3957.0] L Player_Event[0] - EventPlayASForTimeline (#124, concurrent=0)
[   3957.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#151, concurrent=0)
[   3957.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#175, concurrent=0)
[   3957.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#10, concurrent=1)
               duration: 170.0
               ASName: C11
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3957.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 170.0
               ASName: C11
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3957.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
               duration: 170.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C11-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3957.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#79, concurrent=1)
               duration: 170.0
               Near: 0.10000000149011612
[   3957.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#102, concurrent=0)
               duration: 170.0
               EndBluarLevel: 1.0
               EndDistance: 2.299999952316284
               EndFNumber: 147.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.299999952316284
               StartFNumber: 147.0
[   3957.0] E Player_Event[0] - EventPlayASForTimeline (#125, concurrent=0)
               duration: 170.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3957.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#152, concurrent=0)
               duration: 170.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3957.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#176, concurrent=0)
               duration: 170.0
               ASName: C11-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4127.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#10, concurrent=1)
[   4127.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#33, concurrent=0)
[   4127.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
[   4127.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#79, concurrent=1)
[   4127.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#102, concurrent=0)
[   4127.0] L Player_Event[0] - EventPlayASForTimeline (#125, concurrent=0)
[   4127.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#152, concurrent=0)
[   4127.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#176, concurrent=0)
[   4127.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#11, concurrent=1)
               duration: 730.0
               ASName: C13
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4127.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 730.0
               ASName: C13
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4127.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
               duration: 730.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C13-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4127.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#80, concurrent=1)
               duration: 730.0
               Near: 0.10000000149011612
[   4127.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#103, concurrent=0)
               duration: 730.0
               EndBluarLevel: 1.0
               EndDistance: 5.5
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.5
               StartFNumber: 60.0
[   4127.0] E Player_Event[0] - EventPlayASForTimeline (#126, concurrent=0)
               duration: 730.0
               ASName: C13-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4127.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#153, concurrent=0)
               duration: 730.0
               ASName: C13-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4127.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#177, concurrent=0)
               duration: 730.0
               ASName: C13-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4272.0] E VoicePlayActor[0] - EventStartVoice (#202, concurrent=0)
               duration: 159.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_107_cd
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   4431.0] L VoicePlayActor[0] - EventStartVoice (#202, concurrent=0)
[   4532.0] E VoicePlayActor[0] - EventStartVoice (#203, concurrent=0)
               duration: 308.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_107_e
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   4840.0] L VoicePlayActor[0] - EventStartVoice (#203, concurrent=0)
[   4857.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#11, concurrent=1)
[   4857.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#34, concurrent=0)
[   4857.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
[   4857.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#80, concurrent=1)
[   4857.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#103, concurrent=0)
[   4857.0] L Player_Event[0] - EventPlayASForTimeline (#126, concurrent=0)
[   4857.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#153, concurrent=0)
[   4857.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#177, concurrent=0)
[   4857.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#12, concurrent=1)
               duration: 568.0
               ASName: C17
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4857.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 568.0
               ASName: C17
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4857.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
               duration: 568.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C17-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4857.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#81, concurrent=1)
               duration: 568.0
               Near: 0.10000000149011612
[   4857.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#104, concurrent=0)
               duration: 568.0
               EndBluarLevel: 1.0
               EndDistance: 4.0
               EndFNumber: 149.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 4.0
               StartFNumber: 149.0
[   4857.0] E Player_Event[0] - EventPlayASForTimeline (#127, concurrent=0)
               duration: 568.0
               ASName: C17-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4857.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#154, concurrent=0)
               duration: 568.0
               ASName: C17-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4857.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#178, concurrent=0)
               duration: 568.0
               ASName: C17-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4870.0] E VoicePlayActor[0] - EventStartVoice (#204, concurrent=0)
               duration: 330.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_108_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   5200.0] L VoicePlayActor[0] - EventStartVoice (#204, concurrent=0)
[   5279.0] E VoicePlayActor[0] - EventStartVoice (#205, concurrent=0)
               duration: 254.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_113_c
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   5425.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#12, concurrent=1)
[   5425.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#35, concurrent=0)
[   5425.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
[   5425.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#81, concurrent=1)
[   5425.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#104, concurrent=0)
[   5425.0] L Player_Event[0] - EventPlayASForTimeline (#127, concurrent=0)
[   5425.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#154, concurrent=0)
[   5425.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#178, concurrent=0)
[   5425.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#13, concurrent=1)
               duration: 110.0
               ASName: C18
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5425.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 110.0
               ASName: C18
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5425.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
               duration: 110.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C18-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5425.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#82, concurrent=1)
               duration: 110.0
               Near: 0.10000000149011612
[   5425.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#105, concurrent=0)
               duration: 110.0
               EndBluarLevel: 1.0
               EndDistance: 4.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 4.0
               StartFNumber: 50.0
[   5425.0] E Player_Event[0] - EventPlayASForTimeline (#128, concurrent=0)
               duration: 110.0
               ASName: C18-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5425.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#155, concurrent=0)
               duration: 110.0
               ASName: C18-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5425.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#179, concurrent=0)
               duration: 110.0
               ASName: C18-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5533.0] L VoicePlayActor[0] - EventStartVoice (#205, concurrent=0)
[   5535.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#13, concurrent=1)
[   5535.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#36, concurrent=0)
[   5535.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
[   5535.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#82, concurrent=1)
[   5535.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#105, concurrent=0)
[   5535.0] L Player_Event[0] - EventPlayASForTimeline (#128, concurrent=0)
[   5535.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#155, concurrent=0)
[   5535.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#179, concurrent=0)
[   5535.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#14, concurrent=1)
               duration: 722.0
               ASName: C19
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5535.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 722.0
               ASName: C19
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5535.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
               duration: 722.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C19-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5535.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#83, concurrent=1)
               duration: 722.0
               Near: 0.10000000149011612
[   5535.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#106, concurrent=0)
               duration: 722.0
               EndBluarLevel: 1.0
               EndDistance: 1.5
               EndFNumber: 115.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.5
               StartFNumber: 115.0
[   5535.0] E Player_Event[0] - EventPlayASForTimeline (#129, concurrent=0)
               duration: 722.0
               ASName: C19-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5535.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#156, concurrent=0)
               duration: 722.0
               ASName: C19-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5535.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#180, concurrent=0)
               duration: 722.0
               ASName: C19-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5621.0] E VoicePlayActor[0] - EventStartVoice (#206, concurrent=0)
               duration: 488.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_114_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   6109.0] L VoicePlayActor[0] - EventStartVoice (#206, concurrent=0)
[   6257.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#14, concurrent=1)
[   6257.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#37, concurrent=0)
[   6257.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
[   6257.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#83, concurrent=1)
[   6257.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#106, concurrent=0)
[   6257.0] L Player_Event[0] - EventPlayASForTimeline (#129, concurrent=0)
[   6257.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#156, concurrent=0)
[   6257.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#180, concurrent=0)
[   6257.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#15, concurrent=1)
               duration: 600.0
               ASName: C20
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6257.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 600.0
               ASName: C20
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6257.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
               duration: 600.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C20-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6257.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#84, concurrent=1)
               duration: 600.0
               Near: 0.10000000149011612
[   6257.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#107, concurrent=0)
               duration: 600.0
               EndBluarLevel: 1.0
               EndDistance: 0.5400000214576721
               EndFNumber: 142.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 0.5400000214576721
               StartFNumber: 142.0
[   6257.0] E Player_Event[0] - EventPlayASForTimeline (#130, concurrent=0)
               duration: 600.0
               ASName: C20-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6257.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#157, concurrent=0)
               duration: 600.0
               ASName: C20-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6257.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#181, concurrent=0)
               duration: 600.0
               ASName: C20-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6857.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#15, concurrent=1)
[   6857.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#38, concurrent=0)
[   6857.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
[   6857.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#84, concurrent=1)
[   6857.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#107, concurrent=0)
[   6857.0] L Player_Event[0] - EventPlayASForTimeline (#130, concurrent=0)
[   6857.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#157, concurrent=0)
[   6857.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#181, concurrent=0)
[   6857.0] L Dm_Item_Ocarina_Time[0] - EventModelBind (#190, concurrent=0)
[   6857.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#16, concurrent=1)
               duration: 304.0
               ASName: C21
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6857.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 304.0
               ASName: C21
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6857.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
               duration: 304.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C21-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6857.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#85, concurrent=1)
               duration: 304.0
               Near: 0.10000000149011612
[   6857.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#108, concurrent=0)
               duration: 304.0
               EndBluarLevel: 1.0
               EndDistance: 1.0
               EndFNumber: 284.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.0
               StartFNumber: 284.0
[   6857.0] E Player_Event[0] - EventPlayASForTimeline (#131, concurrent=0)
               duration: 304.0
               ASName: C21-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6857.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#158, concurrent=0)
               duration: 304.0
               ASName: C21-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6857.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#182, concurrent=0)
               duration: 304.0
               ASName: C21-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6857.0] E Dm_Item_Ocarina_Time[0] - EventModelBind (#191, concurrent=0)
               duration: 4328.0
               ActorName: Npc_Hylia_Zelda_Adult_Scalable
               BoneName: Weapon_R
               InstanceName: '0'
               IsWaitEnd: true
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[   6900.0] E VoicePlayActor[0] - EventStartVoice (#207, concurrent=0)
               duration: 478.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_116_c
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   7161.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#16, concurrent=1)
[   7161.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#39, concurrent=0)
[   7161.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
[   7161.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#85, concurrent=1)
[   7161.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#108, concurrent=0)
[   7161.0] L Player_Event[0] - EventPlayASForTimeline (#131, concurrent=0)
[   7161.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#158, concurrent=0)
[   7161.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#182, concurrent=0)
[   7161.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#17, concurrent=1)
               duration: 830.0
               ASName: C22
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7161.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 830.0
               ASName: C22
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7161.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
               duration: 830.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C22-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   7161.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#86, concurrent=1)
               duration: 830.0
               Near: 0.30000001192092896
[   7161.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#109, concurrent=0)
               duration: 830.0
               EndBluarLevel: 1.0
               EndDistance: 1.25
               EndFNumber: 193.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.25
               StartFNumber: 193.0
[   7161.0] E Player_Event[0] - EventPlayASForTimeline (#132, concurrent=0)
               duration: 830.0
               ASName: C22-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7161.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#159, concurrent=0)
               duration: 830.0
               ASName: C22-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7161.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#183, concurrent=0)
               duration: 830.0
               ASName: C22-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7378.0] L VoicePlayActor[0] - EventStartVoice (#207, concurrent=0)
[   7436.0] E VoicePlayActor[0] - EventStartVoice (#208, concurrent=0)
               duration: 117.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_117_c
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   7553.0] L VoicePlayActor[0] - EventStartVoice (#208, concurrent=0)
[   7595.0] E VoicePlayActor[0] - EventStartVoice (#209, concurrent=0)
               duration: 378.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_118_c
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   7973.0] L VoicePlayActor[0] - EventStartVoice (#209, concurrent=0)
[   7988.0] E VoicePlayActor[0] - EventStartVoice (#210, concurrent=0)
               duration: 212.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_118_d
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   7991.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#17, concurrent=1)
[   7991.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#40, concurrent=0)
[   7991.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
[   7991.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#86, concurrent=1)
[   7991.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#109, concurrent=0)
[   7991.0] L Player_Event[0] - EventPlayASForTimeline (#132, concurrent=0)
[   7991.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#159, concurrent=0)
[   7991.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#183, concurrent=0)
[   7991.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#18, concurrent=1)
               duration: 440.0
               ASName: C23
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7991.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 440.0
               ASName: C23
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7991.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
               duration: 440.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C23-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   7991.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#87, concurrent=1)
               duration: 440.0
               Near: 0.10000000149011612
[   7991.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#110, concurrent=0)
               duration: 440.0
               EndBluarLevel: 1.0
               EndDistance: 2.4000000953674316
               EndFNumber: 97.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.4000000953674316
               StartFNumber: 97.0
[   7991.0] E Player_Event[0] - EventPlayASForTimeline (#133, concurrent=0)
               duration: 440.0
               ASName: C23-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7991.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#160, concurrent=0)
               duration: 440.0
               ASName: C23-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7991.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#184, concurrent=0)
               duration: 440.0
               ASName: C23-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8200.0] L VoicePlayActor[0] - EventStartVoice (#210, concurrent=0)
[   8222.0] E VoicePlayActor[0] - EventStartVoice (#211, concurrent=0)
               duration: 140.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_119_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   8362.0] L VoicePlayActor[0] - EventStartVoice (#211, concurrent=0)
[   8431.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#18, concurrent=1)
[   8431.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#41, concurrent=0)
[   8431.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
[   8431.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#87, concurrent=1)
[   8431.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#110, concurrent=0)
[   8431.0] L Player_Event[0] - EventPlayASForTimeline (#133, concurrent=0)
[   8431.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#160, concurrent=0)
[   8431.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#184, concurrent=0)
[   8431.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#19, concurrent=1)
               duration: 664.0
               ASName: C24
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8431.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 664.0
               ASName: C24
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8431.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
               duration: 664.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C24-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   8431.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#88, concurrent=1)
               duration: 664.0
               Near: 0.10000000149011612
[   8431.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#111, concurrent=0)
               duration: 664.0
               EndBluarLevel: 1.0
               EndDistance: 1.2999999523162842
               EndFNumber: 177.1999969482422
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.2999999523162842
               StartFNumber: 177.1999969482422
[   8431.0] E Player_Event[0] - EventPlayASForTimeline (#134, concurrent=0)
               duration: 664.0
               ASName: C24-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8431.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#161, concurrent=0)
               duration: 664.0
               ASName: C24-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8431.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#185, concurrent=0)
               duration: 664.0
               ASName: C24-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8703.0] E VoicePlayActor[0] - EventStartVoice (#212, concurrent=0)
               duration: 70.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_122_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   8773.0] L VoicePlayActor[0] - EventStartVoice (#212, concurrent=0)
[   9095.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#19, concurrent=1)
[   9095.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#42, concurrent=0)
[   9095.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
[   9095.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#88, concurrent=1)
[   9095.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#111, concurrent=0)
[   9095.0] L Player_Event[0] - EventPlayASForTimeline (#134, concurrent=0)
[   9095.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#161, concurrent=0)
[   9095.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#185, concurrent=0)
[   9095.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#20, concurrent=1)
               duration: 730.0
               ASName: C25
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9095.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 730.0
               ASName: C25
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9095.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#66, concurrent=0)
               duration: 730.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C25-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   9095.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#89, concurrent=1)
               duration: 730.0
               Near: 0.10000000149011612
[   9095.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#112, concurrent=0)
               duration: 730.0
               EndBluarLevel: 1.0
               EndDistance: 1.75
               EndFNumber: 47.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.75
               StartFNumber: 47.5
[   9095.0] E Player_Event[0] - EventPlayASForTimeline (#135, concurrent=0)
               duration: 730.0
               ASName: C25-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9095.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#162, concurrent=0)
               duration: 730.0
               ASName: C25-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9095.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#186, concurrent=0)
               duration: 730.0
               ASName: C25-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9825.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#20, concurrent=1)
[   9825.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#43, concurrent=0)
[   9825.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#66, concurrent=0)
[   9825.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#89, concurrent=1)
[   9825.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#112, concurrent=0)
[   9825.0] L Player_Event[0] - EventPlayASForTimeline (#135, concurrent=0)
[   9825.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#162, concurrent=0)
[   9825.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#186, concurrent=0)
[   9825.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#21, concurrent=1)
               duration: 160.0
               ASName: C26
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9825.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 160.0
               ASName: C26
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9825.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#67, concurrent=0)
               duration: 160.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C26-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   9825.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#90, concurrent=1)
               duration: 160.0
               Near: 0.10000000149011612
[   9825.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#113, concurrent=0)
               duration: 160.0
               EndBluarLevel: 1.0
               EndDistance: 1.75
               EndFNumber: 90.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.75
               StartFNumber: 90.0
[   9825.0] E Player_Event[0] - EventPlayASForTimeline (#136, concurrent=0)
               duration: 160.0
               ASName: C26-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9825.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#163, concurrent=0)
               duration: 160.0
               ASName: C26-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9825.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#187, concurrent=0)
               duration: 160.0
               ASName: C26-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9985.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#21, concurrent=1)
[   9985.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#44, concurrent=0)
[   9985.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#67, concurrent=0)
[   9985.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#90, concurrent=1)
[   9985.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#113, concurrent=0)
[   9985.0] L Player_Event[0] - EventPlayASForTimeline (#136, concurrent=0)
[   9985.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#163, concurrent=0)
[   9985.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#187, concurrent=0)
[   9985.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#22, concurrent=1)
               duration: 100.0
               ASName: C27
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9985.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 100.0
               ASName: C27
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9985.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#68, concurrent=0)
               duration: 100.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C27-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   9985.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#91, concurrent=1)
               duration: 100.0
               Near: 0.10000000149011612
[   9985.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#114, concurrent=0)
               duration: 100.0
               EndBluarLevel: 1.0
               EndDistance: 2.25
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.25
               StartFNumber: 70.0
[   9985.0] E Player_Event[0] - EventPlayASForTimeline (#137, concurrent=0)
               duration: 100.0
               ASName: C27-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9985.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#164, concurrent=0)
               duration: 100.0
               ASName: C27-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9985.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#188, concurrent=0)
               duration: 100.0
               ASName: C27-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10085.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#22, concurrent=1)
[  10085.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#45, concurrent=0)
[  10085.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#68, concurrent=0)
[  10085.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#91, concurrent=1)
[  10085.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#114, concurrent=0)
[  10085.0] L Player_Event[0] - EventPlayASForTimeline (#137, concurrent=0)
[  10085.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#164, concurrent=0)
[  10085.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#188, concurrent=0)
[  10085.0] E Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#23, concurrent=1)
               duration: 1495.0
               ASName: C28
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10085.0] E Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 1495.0
               ASName: C28
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10085.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#69, concurrent=0)
               duration: 1495.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C28-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[  10085.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#92, concurrent=1)
               duration: 1495.0
               Near: 0.10000000149011612
[  10085.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#115, concurrent=0)
               duration: 1495.0
               EndBluarLevel: 1.0
               EndDistance: 1.0
               EndFNumber: 155.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.0
               StartFNumber: 155.0
[  10085.0] E Player_Event[0] - EventPlayASForTimeline (#138, concurrent=0)
               duration: 1100.0
               ASName: C28-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10085.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#165, concurrent=0)
               duration: 1100.0
               ASName: C28-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10085.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#189, concurrent=0)
               duration: 1100.0
               ASName: C28-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10765.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#216, concurrent=0)
               duration: 130.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[  10895.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#216, concurrent=0)
[  10971.0] E VoicePlayActor[0] - EventStartVoice (#213, concurrent=0)
               duration: 210.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_123_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[  11181.0] L VoicePlayActor[0] - EventStartVoice (#213, concurrent=0)
[  11185.0] L Player_Event[0] - EventPlayASForTimeline (#138, concurrent=0)
[  11185.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#165, concurrent=0)
[  11185.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#189, concurrent=0)
[  11185.0] L Dm_Item_Ocarina_Time[0] - EventModelBind (#191, concurrent=0)
[  11185.0] E Player_Event[0] - EventTriggerPlayerRequestEndSnapshot (#142, concurrent=1)
               duration: 395.0
[  11270.0] E VoicePlayActor[0] - EventStartVoice (#214, concurrent=0)
               duration: 133.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Ending_0000:Dm_Ending_0000_Text_124_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[  11403.0] L VoicePlayActor[0] - EventStartVoice (#214, concurrent=0)
[  11580.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventTriggerStartReplaceTexture (#0, concurrent=0)
[  11580.0] L Dm_Land_Ending_WaterPlane_A_01[0] - EventPlayASForTimeline (#23, concurrent=1)
[  11580.0] L Land_Demo_SkySphere_UyuniFlatSea[0] - EventPlayASForTimeline (#46, concurrent=0)
[  11580.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#69, concurrent=0)
[  11580.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#92, concurrent=1)
[  11580.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#115, concurrent=0)
[  11580.0] L Player_Event[0] - EventTriggerPlayerRequestEndSnapshot (#142, concurrent=1)
[  11580.0] L Npc_Navi[0] - EventGoOffstageForUser (#166, concurrent=0)
[  11580.0] L Item_Ocarina_Time[0] - EventGoOffstageForUser (#192, concurrent=0)
