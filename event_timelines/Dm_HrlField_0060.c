-------- Event timeline: Dm_HrlField_0060 --------
actors: 17
clips: 237
oneshots: 0
cuts: 30
duration: 8640.0
subtimelines: ['Dm_HrlField_0060_Effect', 'Dm_HrlField_0060_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 360.0
x4: 0
params: (none)

Cut: cut03
start time: 500.0
x4: 0
params: (none)

Cut: cut04
start time: 680.0
x4: 0
params: (none)

Cut: cut05
start time: 900.0
x4: 0
params: (none)

Cut: cut05_50
start time: 990.0
x4: 0
params: (none)

Cut: cut06
start time: 1170.0
x4: 0
params: (none)

Cut: cut07
start time: 1270.0
x4: 0
params: (none)

Cut: cut08
start time: 1350.0
x4: 0
params: (none)

Cut: cut09
start time: 1530.0
x4: 0
params: (none)

Cut: cut10
start time: 1620.0
x4: 0
params: (none)

Cut: cut11
start time: 1850.0
x4: 0
params: (none)

Cut: cut12
start time: 2030.0
x4: 0
params: (none)

Cut: cut13
start time: 2330.0
x4: 0
params: (none)

Cut: cut14
start time: 2870.0
x4: 0
params: (none)

Cut: cut15
start time: 2930.0
x4: 0
params: (none)

Cut: cut16
start time: 3010.0
x4: 0
params: (none)

Cut: cut17
start time: 3670.0
x4: 0
params: (none)

Cut: cut18
start time: 4210.0
x4: 0
params: (none)

Cut: cut19
start time: 4390.0
x4: 0
params: (none)

Cut: cut20
start time: 4630.0
x4: 0
params: (none)

Cut: cut21
start time: 4870.0
x4: 0
params: (none)

Cut: cut22
start time: 5440.0
x4: 0
params: (none)

Cut: cut23
start time: 5620.0
x4: 0
params: (none)

Cut: cut24
start time: 5890.0
x4: 0
params: (none)

Cut: cut24_50
start time: 6490.0
x4: 0
params: (none)

Cut: cut25
start time: 6880.0
x4: 0
params: (none)

Cut: cut26
start time: 7360.0
x4: 0
params: (none)

Cut: cut27
start time: 7680.0
x4: 0
params: (none)

Cut: cut28
start time: 8060.0
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

Actor: PostProcessingActor[2]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Land_HrlField_DemoGround_A_01
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 16.016019821166992
- 148.16299438476562
- 64.06205749511719
Rotation:
- 0.0
- 0.0
- 0.0
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

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerChemicalRequestDryTemporarily']
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
UseEventAS: Work/AS/Root/Event/Dm_HrlField_0060_Player_Child.root.as
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0060/Dm_HrlField_0060_Player_Child/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0060/Dm_HrlField_0060_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0060/Dm_HrlField_0060_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Item_Ocarina_Time[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0060/Dm_HrlField_0060_Item_Ocarina_Time/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Impa_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_HrlField_0060_Npc_Hylia_WU_Impa.root.as
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0060/Dm_HrlField_0060_Npc_Hylia_WU_Impa/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Zelda_Child[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetModelLodManual']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_HrlField_0060_Npc_Hylia_WU_Zelda_Child.root.as
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0060/Dm_HrlField_0060_Npc_Hylia_WU_Zelda_Child/workspace.pp__ModelProject.gyml

Actor: Animal_Horse_For_Zelda[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0060/Dm_HrlField_0060_Animal_Horse_Zelda_Anim/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Gerudo_Ganondorf[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_HrlField_0060_Npc_Gerudo_GEU_Ganondorf_Child.root.as
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0060/Dm_HrlField_0060_Npc_Gerudo_GEU_Ganondorf_Child/workspace.pp__ModelProject.gyml

Actor: Animal_Horse_For_Ganondorf[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_HrlField_0060_Animal_Horse_Ganondorf.root.as
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0060/Dm_HrlField_0060_Animal_Horse_Ganondorf_Anim/workspace.pp__ModelProject.gyml

Actor: Obj_HrlField_DrawBridge_A_01[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0060/Dm_HrlField_0060_Obj_HrlCastle_Builparts_A/workspace.pp__ModelProject.gyml

Actor: VoicePlayActor[0]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: VoicePlayActor[1]
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
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 0.05619899928569794
- 150.65570068359375
- 46.41183090209961
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 360.0
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
[      0.0] E Land_HrlField_DemoGround_A_01 - EventGoOffstageForUser (#44, concurrent=0)
               duration: 5620.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
               duration: 360.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#77, concurrent=1)
               duration: 360.0
               Near: 0.10000000149011612
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#107, concurrent=0)
               duration: 360.0
               ASName: C01-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#125, concurrent=2)
               duration: 100.0
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#126, concurrent=0)
               duration: 360.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#143, concurrent=0)
               duration: 8640.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Obj_HrlField_DrawBridge_A_01[0] - EventPlayASForTimeline (#198, concurrent=0)
               duration: 680.0
               ASName: C01-Obj_HrlCastle_Builparts_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Locator[0] - EventDoNothing (#236, concurrent=0)
               duration: 8640.0
               IsWaitEnd: true
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#125, concurrent=2)
[    344.0] E VoicePlayActor[0] - EventStartVoice (#203, concurrent=0)
               duration: 49.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[    360.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#2, concurrent=0)
[    360.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
[    360.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#77, concurrent=1)
[    360.0] L Player_Event[0] - EventPlayASForTimeline (#107, concurrent=0)
[    360.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#126, concurrent=0)
[    360.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 140.0
               EndBluarLevel: 2.0
               EndDistance: 0.6499999761581421
               EndFNumber: 180.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.6499999761581421
               StartFNumber: 180.0
[    360.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
               duration: 140.0
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
[    360.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#78, concurrent=1)
               duration: 140.0
               Near: 0.10000000149011612
[    360.0] E Player_Event[0] - EventPlayASForTimeline (#108, concurrent=0)
               duration: 140.0
               ASName: C02-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    360.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#127, concurrent=0)
               duration: 140.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    393.0] L VoicePlayActor[0] - EventStartVoice (#203, concurrent=0)
[    393.0] E VoicePlayActor[0] - EventStartVoice (#204, concurrent=0)
               duration: 66.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[    459.0] L VoicePlayActor[0] - EventStartVoice (#204, concurrent=0)
[    500.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#3, concurrent=0)
[    500.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
[    500.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#78, concurrent=1)
[    500.0] L Player_Event[0] - EventPlayASForTimeline (#108, concurrent=0)
[    500.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#127, concurrent=0)
[    500.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 180.0
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
[    500.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
               duration: 180.0
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
[    500.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#79, concurrent=1)
               duration: 180.0
               Near: 0.10000000149011612
[    500.0] E Player_Event[0] - EventPlayASForTimeline (#109, concurrent=0)
               duration: 180.0
               ASName: AS-C03-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    500.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#128, concurrent=0)
               duration: 180.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    512.0] E VoicePlayActor[0] - EventStartVoice (#205, concurrent=0)
               duration: 163.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Impa_Child
[    675.0] L VoicePlayActor[0] - EventStartVoice (#205, concurrent=0)
[    680.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#4, concurrent=0)
[    680.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
[    680.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#79, concurrent=1)
[    680.0] L Player_Event[0] - EventPlayASForTimeline (#109, concurrent=0)
[    680.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#128, concurrent=0)
[    680.0] L Obj_HrlField_DrawBridge_A_01[0] - EventPlayASForTimeline (#198, concurrent=0)
[    680.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 220.0
               EndBluarLevel: 1.0
               EndDistance: 10.5
               EndFNumber: 4.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 10.5
               StartFNumber: 4.0
[    680.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
               duration: 220.0
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
[    680.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#80, concurrent=1)
               duration: 220.0
               Near: 0.10000000149011612
[    680.0] E Obj_HrlField_DrawBridge_A_01[0] - EventPlayASForTimeline (#199, concurrent=0)
               duration: 220.0
               ASName: C04-Obj_HrlCastle_Builparts_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    900.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#5, concurrent=0)
[    900.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
[    900.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#80, concurrent=1)
[    900.0] L Obj_HrlField_DrawBridge_A_01[0] - EventPlayASForTimeline (#199, concurrent=0)
[    900.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 90.0
               EndBluarLevel: 2.0
               EndDistance: 20.0
               EndFNumber: 7.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 20.0
               StartFNumber: 7.0
[    900.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
               duration: 90.0
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
[    900.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#81, concurrent=1)
               duration: 90.0
               Near: 0.10000000149011612
[    900.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#147, concurrent=0)
               duration: 90.0
               ASName: AS-C05-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    900.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#154, concurrent=0)
               duration: 90.0
               ASName: AS-C05-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    900.0] E Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#161, concurrent=1)
               duration: 90.0
               LodLevel: 0
[    900.0] E Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#168, concurrent=0)
               duration: 90.0
               ASName: C05-Animal_Horse_Zelda_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    900.0] E Obj_HrlField_DrawBridge_A_01[0] - EventPlayASForTimeline (#200, concurrent=0)
               duration: 90.0
               ASName: C05-Obj_HrlCastle_Builparts_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    990.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#6, concurrent=0)
[    990.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
[    990.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#81, concurrent=1)
[    990.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#147, concurrent=0)
[    990.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#154, concurrent=0)
[    990.0] L Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#161, concurrent=1)
[    990.0] L Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#168, concurrent=0)
[    990.0] L Obj_HrlField_DrawBridge_A_01[0] - EventPlayASForTimeline (#200, concurrent=0)
[    990.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 98.0
               EndBluarLevel: 1.5
               EndDistance: 10.5
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 10.5
               StartFNumber: 15.0
[    990.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
               duration: 180.0
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
[    990.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#82, concurrent=1)
               duration: 180.0
               Near: 0.10000000149011612
[    990.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#148, concurrent=0)
               duration: 180.0
               ASName: AS-C05_50-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    990.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#155, concurrent=0)
               duration: 180.0
               ASName: AS-C05_50-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    990.0] E Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#162, concurrent=1)
               duration: 180.0
               LodLevel: 0
[    990.0] E Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#169, concurrent=0)
               duration: 180.0
               ASName: C05_50-Animal_Horse_Zelda_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    990.0] E Obj_HrlField_DrawBridge_A_01[0] - EventPlayASForTimeline (#201, concurrent=0)
               duration: 180.0
               ASName: C05_50-Obj_HrlCastle_Builparts_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1049.0] E VoicePlayActor[0] - EventStartVoice (#206, concurrent=0)
               duration: 68.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Impa_Child
[   1088.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#7, concurrent=0)
[   1088.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 82.0
               EndBluarLevel: 1.5
               EndDistance: 8.5
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 10.5
               StartFNumber: 15.0
[   1117.0] L VoicePlayActor[0] - EventStartVoice (#206, concurrent=0)
[   1170.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#8, concurrent=0)
[   1170.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
[   1170.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#82, concurrent=1)
[   1170.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#148, concurrent=0)
[   1170.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#155, concurrent=0)
[   1170.0] L Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#162, concurrent=1)
[   1170.0] L Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#169, concurrent=0)
[   1170.0] L Obj_HrlField_DrawBridge_A_01[0] - EventPlayASForTimeline (#201, concurrent=0)
[   1170.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 100.0
               EndBluarLevel: 1.0
               EndDistance: 3.0
               EndFNumber: 27.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 16.600000381469727
               StartFNumber: 7.0
[   1170.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
               duration: 100.0
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
[   1170.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#83, concurrent=1)
               duration: 100.0
               Near: 0.10000000149011612
[   1170.0] E Player_Event[0] - EventPlayASForTimeline (#110, concurrent=0)
               duration: 100.0
               ASName: AS-C06-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1170.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#129, concurrent=0)
               duration: 100.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1170.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#149, concurrent=0)
               duration: 100.0
               ASName: AS-C06-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1170.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#156, concurrent=0)
               duration: 100.0
               ASName: AS-C06-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1170.0] E Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#163, concurrent=1)
               duration: 100.0
               LodLevel: 0
[   1170.0] E Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#170, concurrent=0)
               duration: 100.0
               ASName: C06-Animal_Horse_Zelda_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1170.0] E Obj_HrlField_DrawBridge_A_01[0] - EventPlayASForTimeline (#202, concurrent=0)
               duration: 100.0
               ASName: C06-Obj_HrlCastle_Builparts_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1194.0] E VoicePlayActor[0] - EventStartVoice (#207, concurrent=0)
               duration: 66.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_004_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1260.0] L VoicePlayActor[0] - EventStartVoice (#207, concurrent=0)
[   1260.0] E VoicePlayActor[0] - EventStartVoice (#208, concurrent=0)
               duration: 64.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   1270.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#9, concurrent=0)
[   1270.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
[   1270.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#83, concurrent=1)
[   1270.0] L Player_Event[0] - EventPlayASForTimeline (#110, concurrent=0)
[   1270.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#129, concurrent=0)
[   1270.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#149, concurrent=0)
[   1270.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#156, concurrent=0)
[   1270.0] L Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#163, concurrent=1)
[   1270.0] L Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#170, concurrent=0)
[   1270.0] L Obj_HrlField_DrawBridge_A_01[0] - EventPlayASForTimeline (#202, concurrent=0)
[   1270.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 29.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 3.5999999046325684
               EndFNumber: 24.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 7.0
               StartFNumber: 20.0
[   1270.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
               duration: 80.0
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
[   1270.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#84, concurrent=1)
               duration: 80.0
               Near: 0.10000000149011612
[   1270.0] E Player_Event[0] - EventPlayASForTimeline (#111, concurrent=0)
               duration: 80.0
               ASName: AS-C07-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1270.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#130, concurrent=0)
               duration: 80.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1270.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#150, concurrent=0)
               duration: 80.0
               ASName: AS-C07-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1270.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#157, concurrent=0)
               duration: 80.0
               ASName: AS-C07-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1270.0] E Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#164, concurrent=1)
               duration: 80.0
               LodLevel: 0
[   1270.0] E Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#171, concurrent=0)
               duration: 80.0
               ASName: C07-Animal_Horse_Zelda_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1299.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#10, concurrent=0)
[   1299.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 51.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 8.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 3.5999999046325684
               StartFNumber: 24.0
[   1324.0] L VoicePlayActor[0] - EventStartVoice (#208, concurrent=0)
[   1350.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#11, concurrent=0)
[   1350.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
[   1350.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#84, concurrent=1)
[   1350.0] L Player_Event[0] - EventPlayASForTimeline (#111, concurrent=0)
[   1350.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#130, concurrent=0)
[   1350.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#150, concurrent=0)
[   1350.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#157, concurrent=0)
[   1350.0] L Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#164, concurrent=1)
[   1350.0] L Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#171, concurrent=0)
[   1350.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 180.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 1.399999976158142
               EndFNumber: 150.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 1.399999976158142
               StartFNumber: 150.0
[   1350.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
               duration: 180.0
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
[   1350.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#85, concurrent=1)
               duration: 180.0
               Near: 0.10000000149011612
[   1350.0] E Dm_Item_Ocarina_Time[0] - EventPlayASForTimeline (#144, concurrent=0)
               duration: 180.0
               ASName: C08-Item_Ocarina_Time-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1350.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#151, concurrent=0)
               duration: 180.0
               ASName: AS-C08-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1350.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#158, concurrent=0)
               duration: 180.0
               ASName: AS-C08-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1350.0] E Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#165, concurrent=1)
               duration: 180.0
               LodLevel: 0
[   1350.0] E Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#172, concurrent=0)
               duration: 180.0
               ASName: C08-Animal_Horse_Zelda_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1412.0] E VoicePlayActor[0] - EventStartVoice (#209, concurrent=0)
               duration: 98.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_006_c
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   1510.0] L VoicePlayActor[0] - EventStartVoice (#209, concurrent=0)
[   1527.0] E VoicePlayActor[0] - EventStartVoice (#210, concurrent=0)
               duration: 78.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_006_d
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   1530.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#12, concurrent=0)
[   1530.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
[   1530.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#85, concurrent=1)
[   1530.0] L Dm_Item_Ocarina_Time[0] - EventPlayASForTimeline (#144, concurrent=0)
[   1530.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#151, concurrent=0)
[   1530.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#158, concurrent=0)
[   1530.0] L Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#165, concurrent=1)
[   1530.0] L Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#172, concurrent=0)
[   1530.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 30.0
               EndBluarLevel: 0.699999988079071
               EndDistance: 3.0
               EndFNumber: 200.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.699999988079071
               StartDistance: 3.0
               StartFNumber: 200.0
[   1530.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
               duration: 90.0
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
[   1530.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#86, concurrent=1)
               duration: 90.0
               Near: 0.10000000149011612
[   1530.0] E Dm_Item_Ocarina_Time[0] - EventPlayASForTimeline (#145, concurrent=0)
               duration: 90.0
               ASName: C09-Item_Ocarina_Time-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1530.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#152, concurrent=0)
               duration: 90.0
               ASName: AS-C09-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1530.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#159, concurrent=0)
               duration: 90.0
               ASName: AS-C09-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1530.0] E Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#166, concurrent=1)
               duration: 90.0
               LodLevel: 0
[   1530.0] E Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#173, concurrent=0)
               duration: 90.0
               ASName: C09-Animal_Horse_Zelda_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1560.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#13, concurrent=0)
[   1560.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 30.0
               EndBluarLevel: 0.699999988079071
               EndDistance: 0.5
               EndFNumber: 200.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.699999988079071
               StartDistance: 3.0
               StartFNumber: 200.0
[   1590.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#14, concurrent=0)
[   1590.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 30.0
               EndBluarLevel: 0.699999988079071
               EndDistance: 0.5
               EndFNumber: 200.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.699999988079071
               StartDistance: 0.5
               StartFNumber: 200.0
[   1605.0] L VoicePlayActor[0] - EventStartVoice (#210, concurrent=0)
[   1620.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#15, concurrent=0)
[   1620.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
[   1620.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#86, concurrent=1)
[   1620.0] L Dm_Item_Ocarina_Time[0] - EventPlayASForTimeline (#145, concurrent=0)
[   1620.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#152, concurrent=0)
[   1620.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#159, concurrent=0)
[   1620.0] L Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#166, concurrent=1)
[   1620.0] L Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#173, concurrent=0)
[   1620.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 36.0
               EndBluarLevel: 1.0
               EndDistance: 18.5
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 18.5
               StartFNumber: 10.0
[   1620.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
               duration: 230.0
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
[   1620.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#87, concurrent=1)
               duration: 230.0
               Near: 0.10000000149011612
[   1620.0] E Player_Event[0] - EventPlayASForTimeline (#112, concurrent=0)
               duration: 230.0
               ASName: AS-C10-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1620.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#131, concurrent=0)
               duration: 230.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1620.0] E Dm_Item_Ocarina_Time[0] - EventPlayASForTimeline (#146, concurrent=0)
               duration: 230.0
               ASName: C10-Item_Ocarina_Time-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1656.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#16, concurrent=0)
[   1656.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 60.0
               EndBluarLevel: 0.5
               EndDistance: 2.299999952316284
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 18.5
               StartFNumber: 10.0
[   1716.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#17, concurrent=0)
[   1716.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 44.0
               EndBluarLevel: 0.5
               EndDistance: 2.299999952316284
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 2.299999952316284
               StartFNumber: 15.0
[   1760.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#18, concurrent=0)
[   1760.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 43.0
               EndBluarLevel: 1.0
               EndDistance: 18.5
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 2.299999952316284
               StartFNumber: 15.0
[   1803.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#19, concurrent=0)
[   1803.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 47.0
               EndBluarLevel: 1.0
               EndDistance: 18.5
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 18.5
               StartFNumber: 10.0
[   1850.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#20, concurrent=0)
[   1850.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
[   1850.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#87, concurrent=1)
[   1850.0] L Player_Event[0] - EventPlayASForTimeline (#112, concurrent=0)
[   1850.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#131, concurrent=0)
[   1850.0] L Dm_Item_Ocarina_Time[0] - EventPlayASForTimeline (#146, concurrent=0)
[   1850.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 180.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 0.8999999761581421
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 0.8999999761581421
               StartFNumber: 80.0
[   1850.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
               duration: 180.0
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
[   1850.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#88, concurrent=1)
               duration: 180.0
               Near: 0.10000000149011612
[   1850.0] E Player_Event[0] - EventPlayASForTimeline (#113, concurrent=0)
               duration: 180.0
               ASName: AS-C11-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1850.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#132, concurrent=0)
               duration: 180.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2030.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#21, concurrent=0)
[   2030.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
[   2030.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#88, concurrent=1)
[   2030.0] L Player_Event[0] - EventPlayASForTimeline (#113, concurrent=0)
[   2030.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#132, concurrent=0)
[   2030.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 300.0
               EndBluarLevel: 1.0
               EndDistance: 120.0
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 120.0
               StartFNumber: 100.0
[   2030.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
               duration: 300.0
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
[   2030.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#89, concurrent=1)
               duration: 300.0
               Near: 0.10000000149011612
[   2030.0] E Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#153, concurrent=0)
               duration: 300.0
               ASName: AS-C12-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2030.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#160, concurrent=0)
               duration: 300.0
               ASName: AS-C12-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2030.0] E Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#167, concurrent=1)
               duration: 300.0
               LodLevel: -1
[   2030.0] E Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#174, concurrent=0)
               duration: 300.0
               ASName: C12-Animal_Horse_Zelda_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2060.0] E VoicePlayActor[0] - EventStartVoice (#211, concurrent=0)
               duration: 178.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2238.0] L VoicePlayActor[0] - EventStartVoice (#211, concurrent=0)
[   2330.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#22, concurrent=0)
[   2330.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
[   2330.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#89, concurrent=1)
[   2330.0] L Npc_Hylia_Impa_Child[0] - EventPlayASForTimeline (#153, concurrent=0)
[   2330.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#160, concurrent=0)
[   2330.0] L Npc_Hylia_Zelda_Child[0] - EventTriggerSetModelLodManual (#167, concurrent=1)
[   2330.0] L Animal_Horse_For_Zelda[0] - EventPlayASForTimeline (#174, concurrent=0)
[   2330.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 400.0
               EndBluarLevel: 2.0
               EndDistance: 2.4000000953674316
               EndFNumber: 130.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.4000000953674316
               StartFNumber: 130.0
[   2330.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
               duration: 540.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C13-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2330.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#90, concurrent=1)
               duration: 540.0
               Near: 0.10000000149011612
[   2330.0] E Player_Event[0] - EventPlayASForTimeline (#114, concurrent=0)
               duration: 540.0
               ASName: AS-C13-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2330.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#133, concurrent=0)
               duration: 540.0
               ASName: C13-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2330.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#175, concurrent=0)
               duration: 540.0
               ASName: AS-C13-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2330.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#188, concurrent=0)
               duration: 540.0
               ASName: AS-C13-Animal_Horse_Ganondorf_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2730.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#23, concurrent=0)
[   2730.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 24.0
               EndBluarLevel: 1.0
               EndDistance: 1.600000023841858
               EndFNumber: 130.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.4000000953674316
               StartFNumber: 130.0
[   2754.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#24, concurrent=0)
[   2754.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 116.0
               EndBluarLevel: 1.0
               EndDistance: 1.600000023841858
               EndFNumber: 130.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.600000023841858
               StartFNumber: 130.0
[   2844.0] E VoicePlayActor[0] - EventStartVoice (#212, concurrent=0)
               duration: 73.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_008_b
               OffsetFrame: 30
               Speaker: Player_Event
[   2870.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#25, concurrent=0)
[   2870.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
[   2870.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#90, concurrent=1)
[   2870.0] L Player_Event[0] - EventPlayASForTimeline (#114, concurrent=0)
[   2870.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#133, concurrent=0)
[   2870.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#175, concurrent=0)
[   2870.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#188, concurrent=0)
[   2870.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 60.0
               EndBluarLevel: 1.0
               EndDistance: 1.0
               EndFNumber: 65.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.0
               StartFNumber: 65.0
[   2870.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
               duration: 60.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C14-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2870.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#91, concurrent=1)
               duration: 60.0
               Near: 0.10000000149011612
[   2870.0] E Player_Event[0] - EventPlayASForTimeline (#115, concurrent=0)
               duration: 60.0
               ASName: C14-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2870.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#134, concurrent=0)
               duration: 60.0
               ASName: C14-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2917.0] L VoicePlayActor[0] - EventStartVoice (#212, concurrent=0)
[   2930.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#26, concurrent=0)
[   2930.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
[   2930.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#91, concurrent=1)
[   2930.0] L Player_Event[0] - EventPlayASForTimeline (#115, concurrent=0)
[   2930.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#134, concurrent=0)
[   2930.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#27, concurrent=0)
               duration: 80.0
               EndBluarLevel: 1.0
               EndDistance: 3.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.5
               StartFNumber: 20.0
[   2930.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
               duration: 80.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C15-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2930.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#92, concurrent=1)
               duration: 80.0
               Near: 0.10000000149011612
[   2930.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#176, concurrent=0)
               duration: 80.0
               ASName: AS-C15-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2930.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#189, concurrent=0)
               duration: 80.0
               ASName: AS-C15-Animal_Horse_Ganondorf_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3010.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#27, concurrent=0)
[   3010.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
[   3010.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#92, concurrent=1)
[   3010.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#176, concurrent=0)
[   3010.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#189, concurrent=0)
[   3010.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 660.0
               EndBluarLevel: 1.0
               EndDistance: 2.0999999046325684
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.0999999046325684
               StartFNumber: 70.0
[   3010.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
               duration: 660.0
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
[   3010.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#93, concurrent=1)
               duration: 660.0
               Near: 0.10000000149011612
[   3010.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#177, concurrent=0)
               duration: 660.0
               ASName: AS-C16-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3110.0] E VoicePlayActor[0] - EventStartVoice (#213, concurrent=0)
               duration: 88.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_009_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   3198.0] L VoicePlayActor[0] - EventStartVoice (#213, concurrent=0)
[   3225.0] E VoicePlayActor[0] - EventStartVoice (#214, concurrent=0)
               duration: 128.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_010_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   3353.0] L VoicePlayActor[0] - EventStartVoice (#214, concurrent=0)
[   3460.0] E VoicePlayActor[0] - EventStartVoice (#215, concurrent=0)
               duration: 166.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_011_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   3626.0] L VoicePlayActor[0] - EventStartVoice (#215, concurrent=0)
[   3670.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#28, concurrent=0)
[   3670.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
[   3670.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#93, concurrent=1)
[   3670.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#177, concurrent=0)
[   3670.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 540.0
               EndBluarLevel: 0.5
               EndDistance: 4.699999809265137
               EndFNumber: 6.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 7.0
               StartFNumber: 6.0
[   3670.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
               duration: 540.0
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
[   3670.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#94, concurrent=1)
               duration: 540.0
               Near: 0.10000000149011612
[   3670.0] E Player_Event[0] - EventPlayASForTimeline (#116, concurrent=0)
               duration: 540.0
               ASName: AS-C17-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3670.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#135, concurrent=0)
               duration: 540.0
               ASName: C17-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3670.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#178, concurrent=0)
               duration: 540.0
               ASName: AS-C17-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3670.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#190, concurrent=0)
               duration: 540.0
               ASName: AS-C17-Animal_Horse_Ganondorf_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3735.0] E VoicePlayActor[0] - EventStartVoice (#216, concurrent=0)
               duration: 252.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_012_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   3987.0] L VoicePlayActor[0] - EventStartVoice (#216, concurrent=0)
[   4006.0] E VoicePlayActor[0] - EventStartVoice (#217, concurrent=0)
               duration: 202.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_013_b
               OffsetFrame: 40
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   4208.0] L VoicePlayActor[0] - EventStartVoice (#217, concurrent=0)
[   4210.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#29, concurrent=0)
[   4210.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
[   4210.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#94, concurrent=1)
[   4210.0] L Player_Event[0] - EventPlayASForTimeline (#116, concurrent=0)
[   4210.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#135, concurrent=0)
[   4210.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#178, concurrent=0)
[   4210.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#190, concurrent=0)
[   4210.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 180.0
               EndBluarLevel: 0.800000011920929
               EndDistance: 4.949999809265137
               EndFNumber: 13.899999618530273
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.800000011920929
               StartDistance: 4.800000190734863
               StartFNumber: 13.899999618530273
[   4210.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
               duration: 180.0
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
[   4210.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#95, concurrent=1)
               duration: 180.0
               Near: 0.10000000149011612
[   4210.0] E Player_Event[0] - EventPlayASForTimeline (#117, concurrent=0)
               duration: 180.0
               ASName: AS-C18-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4210.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#136, concurrent=0)
               duration: 180.0
               ASName: C18-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4210.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#179, concurrent=0)
               duration: 180.0
               ASName: AS-C18-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4210.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#191, concurrent=0)
               duration: 180.0
               ASName: C18-Animal_Horse_Ganondorf_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4375.0] E VoicePlayActor[1] - EventStartVoice (#233, concurrent=0)
               duration: 250.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_014_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   4390.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#30, concurrent=0)
[   4390.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
[   4390.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#95, concurrent=1)
[   4390.0] L Player_Event[0] - EventPlayASForTimeline (#117, concurrent=0)
[   4390.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#136, concurrent=0)
[   4390.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#179, concurrent=0)
[   4390.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#191, concurrent=0)
[   4390.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 240.0
               EndBluarLevel: 1.5
               EndDistance: 0.9700000286102295
               EndFNumber: 130.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.2100000381469727
               StartFNumber: 85.0
[   4390.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#66, concurrent=0)
               duration: 240.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C19-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4390.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#96, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[   4390.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#180, concurrent=0)
               duration: 240.0
               ASName: AS-C19-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4600.0] E VoicePlayActor[0] - EventStartVoice (#218, concurrent=0)
               duration: 76.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_015_b
               OffsetFrame: 30
               Speaker: Player_Event
[   4625.0] L VoicePlayActor[1] - EventStartVoice (#233, concurrent=0)
[   4630.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#31, concurrent=0)
[   4630.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#66, concurrent=0)
[   4630.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#96, concurrent=1)
[   4630.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#180, concurrent=0)
[   4630.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 240.0
               EndBluarLevel: 1.0
               EndDistance: 4.300000190734863
               EndFNumber: 28.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 4.300000190734863
               StartFNumber: 28.0
[   4630.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#67, concurrent=0)
               duration: 240.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C20-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4630.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#97, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[   4630.0] E Player_Event[0] - EventPlayASForTimeline (#118, concurrent=0)
               duration: 240.0
               ASName: AS-C20-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4630.0] E Player_Event[0] - EventTriggerEquipmentUserRequestChangeState (#124, concurrent=1)
               duration: 4010.0
               DynamicEquipmentSlot: 0
               EquipmentState: 1
[   4630.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#137, concurrent=0)
               duration: 240.0
               ASName: C20-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4630.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#181, concurrent=0)
               duration: 240.0
               ASName: AS-C20-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4630.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#192, concurrent=0)
               duration: 240.0
               ASName: AS-C20-Animal_Horse_Ganondorf_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4676.0] L VoicePlayActor[0] - EventStartVoice (#218, concurrent=0)
[   4676.0] E VoicePlayActor[0] - EventStartVoice (#219, concurrent=0)
               duration: 81.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_016_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   4757.0] L VoicePlayActor[0] - EventStartVoice (#219, concurrent=0)
[   4785.0] E VoicePlayActor[0] - EventStartVoice (#220, concurrent=0)
               duration: 83.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_017_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   4868.0] L VoicePlayActor[0] - EventStartVoice (#220, concurrent=0)
[   4870.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#32, concurrent=0)
[   4870.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#67, concurrent=0)
[   4870.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#97, concurrent=1)
[   4870.0] L Player_Event[0] - EventPlayASForTimeline (#118, concurrent=0)
[   4870.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#137, concurrent=0)
[   4870.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#181, concurrent=0)
[   4870.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#192, concurrent=0)
[   4870.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 570.0
               EndBluarLevel: 1.5
               EndDistance: 1.3300000429153442
               EndFNumber: 92.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.3300000429153442
               StartFNumber: 92.0
[   4870.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#68, concurrent=0)
               duration: 570.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C21-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4870.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#98, concurrent=1)
               duration: 570.0
               Near: 0.10000000149011612
[   4870.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#182, concurrent=0)
               duration: 570.0
               ASName: AS-C21-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4870.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#193, concurrent=0)
               duration: 570.0
               ASName: AS-C21-Animal_Horse_Ganondorf_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4895.0] E VoicePlayActor[1] - EventStartVoice (#234, concurrent=0)
               duration: 176.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_018_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   5053.0] E VoicePlayActor[0] - EventStartVoice (#221, concurrent=0)
               duration: 147.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_019_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   5071.0] L VoicePlayActor[1] - EventStartVoice (#234, concurrent=0)
[   5200.0] L VoicePlayActor[0] - EventStartVoice (#221, concurrent=0)
[   5235.0] E VoicePlayActor[0] - EventStartVoice (#222, concurrent=0)
               duration: 203.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_020_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   5438.0] L VoicePlayActor[0] - EventStartVoice (#222, concurrent=0)
[   5440.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#33, concurrent=0)
[   5440.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#68, concurrent=0)
[   5440.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#98, concurrent=1)
[   5440.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#182, concurrent=0)
[   5440.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#193, concurrent=0)
[   5440.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 50.0
               EndBluarLevel: 1.0
               EndDistance: 4.0
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 4.0
               StartFNumber: 40.0
[   5440.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#69, concurrent=0)
               duration: 180.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C22-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5440.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#99, concurrent=1)
               duration: 180.0
               Near: 0.10000000149011612
[   5440.0] E Player_Event[0] - EventPlayASForTimeline (#119, concurrent=0)
               duration: 180.0
               ASName: AS-C22-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5440.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#138, concurrent=0)
               duration: 180.0
               ASName: C22-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5440.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#183, concurrent=0)
               duration: 180.0
               ASName: AS-C22-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5440.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#194, concurrent=0)
               duration: 180.0
               ASName: AS-C22-Animal_Horse_Ganondorf_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5445.0] E VoicePlayActor[0] - EventStartVoice (#223, concurrent=0)
               duration: 136.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_021_b
               OffsetFrame: 30
               Speaker: Player_Event
[   5490.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#34, concurrent=0)
[   5490.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#35, concurrent=0)
               duration: 41.0
               EndBluarLevel: 1.0
               EndDistance: 1.340000033378601
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 4.0
               StartFNumber: 40.0
[   5531.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#35, concurrent=0)
[   5531.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#36, concurrent=0)
               duration: 89.0
               EndBluarLevel: 1.0
               EndDistance: 1.340000033378601
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.340000033378601
               StartFNumber: 40.0
[   5581.0] L VoicePlayActor[0] - EventStartVoice (#223, concurrent=0)
[   5611.0] E VoicePlayActor[0] - EventStartVoice (#224, concurrent=0)
               duration: 59.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_021_c
               OffsetFrame: 30
               Speaker: Player_Event
[   5620.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#36, concurrent=0)
[   5620.0] L Land_HrlField_DemoGround_A_01 - EventGoOffstageForUser (#44, concurrent=0)
[   5620.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#69, concurrent=0)
[   5620.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#99, concurrent=1)
[   5620.0] L Player_Event[0] - EventPlayASForTimeline (#119, concurrent=0)
[   5620.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#138, concurrent=0)
[   5620.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#183, concurrent=0)
[   5620.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#194, concurrent=0)
[   5620.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#37, concurrent=0)
               duration: 270.0
               EndBluarLevel: 1.0
               EndDistance: 1.149999976158142
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.149999976158142
               StartFNumber: 120.0
[   5620.0] E Land_HrlField_DemoGround_A_01 - EventTriggerParticipateEvent (#45, concurrent=0)
               duration: 270.0
[   5620.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#70, concurrent=0)
               duration: 270.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C23-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5620.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#100, concurrent=1)
               duration: 270.0
               Near: 0.10000000149011612
[   5620.0] E Player_Event[0] - EventPlayASForTimeline (#120, concurrent=0)
               duration: 270.0
               ASName: AS-C23-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5620.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#139, concurrent=0)
               duration: 270.0
               ASName: C23-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5670.0] L VoicePlayActor[0] - EventStartVoice (#224, concurrent=0)
[   5670.0] E VoicePlayActor[0] - EventStartVoice (#225, concurrent=0)
               duration: 62.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_021_d
               OffsetFrame: 30
               Speaker: Player_Event
[   5732.0] L VoicePlayActor[0] - EventStartVoice (#225, concurrent=0)
[   5768.0] E VoicePlayActor[1] - EventStartVoice (#235, concurrent=0)
               duration: 75.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_022_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   5785.0] E VoicePlayActor[0] - EventStartVoice (#226, concurrent=0)
               duration: 127.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_023_b
               OffsetFrame: 30
               Speaker: Player_Event
[   5843.0] L VoicePlayActor[1] - EventStartVoice (#235, concurrent=0)
[   5890.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#37, concurrent=0)
[   5890.0] L Land_HrlField_DemoGround_A_01 - EventTriggerParticipateEvent (#45, concurrent=0)
[   5890.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#70, concurrent=0)
[   5890.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#100, concurrent=1)
[   5890.0] L Player_Event[0] - EventPlayASForTimeline (#120, concurrent=0)
[   5890.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#139, concurrent=0)
[   5890.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#38, concurrent=0)
               duration: 600.0
               EndBluarLevel: 1.0
               EndDistance: 12.300000190734863
               EndFNumber: 2.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 12.300000190734863
               StartFNumber: 2.0
[   5890.0] E Land_HrlField_DemoGround_A_01 - EventGoOffstageForUser (#46, concurrent=0)
               duration: 2750.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   5890.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#71, concurrent=0)
               duration: 600.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C24-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5890.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#101, concurrent=1)
               duration: 600.0
               Near: 0.10000000149011612
[   5890.0] E Player_Event[0] - EventPlayASForTimeline (#121, concurrent=0)
               duration: 600.0
               ASName: AS-C24-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5890.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#140, concurrent=0)
               duration: 600.0
               ASName: C24-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5890.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#184, concurrent=0)
               duration: 600.0
               ASName: AS-C24-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5890.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#195, concurrent=0)
               duration: 600.0
               ASName: AS-C24-Animal_Horse_Ganondorf_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5912.0] L VoicePlayActor[0] - EventStartVoice (#226, concurrent=0)
[   5966.0] E VoicePlayActor[0] - EventStartVoice (#227, concurrent=0)
               duration: 473.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_024_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   6439.0] L VoicePlayActor[0] - EventStartVoice (#227, concurrent=0)
[   6490.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#38, concurrent=0)
[   6490.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#71, concurrent=0)
[   6490.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#101, concurrent=1)
[   6490.0] L Player_Event[0] - EventPlayASForTimeline (#121, concurrent=0)
[   6490.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#140, concurrent=0)
[   6490.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#184, concurrent=0)
[   6490.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#195, concurrent=0)
[   6490.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#39, concurrent=0)
               duration: 390.0
               EndBluarLevel: 1.5
               EndDistance: 7.699999809265137
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 7.699999809265137
               StartFNumber: 5.0
[   6490.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#72, concurrent=0)
               duration: 390.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C24_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6490.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#102, concurrent=1)
               duration: 390.0
               Near: 0.10000000149011612
[   6490.0] E Player_Event[0] - EventPlayASForTimeline (#122, concurrent=0)
               duration: 390.0
               ASName: AS-C24_50-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6490.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#141, concurrent=0)
               duration: 390.0
               ASName: C24_50-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6490.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#185, concurrent=0)
               duration: 390.0
               ASName: AS-C24_50-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6490.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#196, concurrent=0)
               duration: 390.0
               ASName: AS-C24_50-Animal_Horse_Ganondorf_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6501.0] E VoicePlayActor[0] - EventStartVoice (#228, concurrent=0)
               duration: 328.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_025_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   6829.0] L VoicePlayActor[0] - EventStartVoice (#228, concurrent=0)
[   6880.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#39, concurrent=0)
[   6880.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#72, concurrent=0)
[   6880.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#102, concurrent=1)
[   6880.0] L Player_Event[0] - EventPlayASForTimeline (#122, concurrent=0)
[   6880.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#141, concurrent=0)
[   6880.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#185, concurrent=0)
[   6880.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#196, concurrent=0)
[   6880.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#40, concurrent=0)
               duration: 480.0
               EndBluarLevel: 1.0
               EndDistance: 2.950000047683716
               EndFNumber: 90.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.950000047683716
               StartFNumber: 90.0
[   6880.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#73, concurrent=0)
               duration: 480.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C25-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6880.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#103, concurrent=1)
               duration: 480.0
               Near: 0.10000000149011612
[   6880.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#186, concurrent=0)
               duration: 480.0
               ASName: AS-C25-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6896.0] E VoicePlayActor[0] - EventStartVoice (#229, concurrent=0)
               duration: 368.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_026_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   7264.0] L VoicePlayActor[0] - EventStartVoice (#229, concurrent=0)
[   7358.0] E VoicePlayActor[0] - EventStartVoice (#230, concurrent=0)
               duration: 88.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_027_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   7360.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#40, concurrent=0)
[   7360.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#73, concurrent=0)
[   7360.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#103, concurrent=1)
[   7360.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#186, concurrent=0)
[   7360.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#41, concurrent=0)
               duration: 320.0
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
[   7360.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#74, concurrent=0)
               duration: 320.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C26-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   7360.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#104, concurrent=1)
               duration: 320.0
               Near: 0.10000000149011612
[   7360.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#187, concurrent=0)
               duration: 320.0
               ASName: AS-C26-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7360.0] E Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#197, concurrent=0)
               duration: 320.0
               ASName: AS-C26-Animal_Horse_Ganondorf_Anim-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7446.0] L VoicePlayActor[0] - EventStartVoice (#230, concurrent=0)
[   7680.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#41, concurrent=0)
[   7680.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#74, concurrent=0)
[   7680.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#104, concurrent=1)
[   7680.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#187, concurrent=0)
[   7680.0] L Animal_Horse_For_Ganondorf[0] - EventPlayASForTimeline (#197, concurrent=0)
[   7680.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#42, concurrent=0)
               duration: 380.0
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
[   7680.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#75, concurrent=0)
               duration: 380.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C27-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   7680.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#105, concurrent=1)
               duration: 380.0
               Near: 0.10000000149011612
[   8057.0] E VoicePlayActor[0] - EventStartVoice (#231, concurrent=0)
               duration: 150.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_028_b
               OffsetFrame: 30
               Speaker: Player_Event
[   8060.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#42, concurrent=0)
[   8060.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#75, concurrent=0)
[   8060.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#105, concurrent=1)
[   8060.0] E PostProcessingActor[2] - EventSetDoFForTimeline (#43, concurrent=0)
               duration: 580.0
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
[   8060.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#76, concurrent=0)
               duration: 580.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C28-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   8060.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#106, concurrent=1)
               duration: 580.0
               Near: 0.10000000149011612
[   8060.0] E Player_Event[0] - EventPlayASForTimeline (#123, concurrent=0)
               duration: 580.0
               ASName: C28-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8060.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#142, concurrent=0)
               duration: 580.0
               ASName: C28-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8207.0] L VoicePlayActor[0] - EventStartVoice (#231, concurrent=0)
[   8228.0] E VoicePlayActor[0] - EventStartVoice (#232, concurrent=0)
               duration: 138.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0060:Dm_HrlField_0060_Text_029_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   8366.0] L VoicePlayActor[0] - EventStartVoice (#232, concurrent=0)
[   8580.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   8640.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[   8640.0] L PostProcessingActor[2] - EventSetDoFForTimeline (#43, concurrent=0)
[   8640.0] L Land_HrlField_DemoGround_A_01 - EventGoOffstageForUser (#46, concurrent=0)
[   8640.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#76, concurrent=0)
[   8640.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#106, concurrent=1)
[   8640.0] L Player_Event[0] - EventPlayASForTimeline (#123, concurrent=0)
[   8640.0] L Player_Event[0] - EventTriggerEquipmentUserRequestChangeState (#124, concurrent=1)
[   8640.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#142, concurrent=0)
[   8640.0] L Npc_Navi - EventGoOffstageForUser (#143, concurrent=0)
[   8640.0] L Dm_Locator[0] - EventDoNothing (#236, concurrent=0)
