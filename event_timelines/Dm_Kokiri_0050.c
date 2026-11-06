-------- Event timeline: Dm_Kokiri_0050 --------
actors: 13
clips: 38
oneshots: 0
cuts: 5
duration: 1178.0
subtimelines: ['Dm_Kokiri_0050_Effect', 'Dm_Kokiri_0050_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 0.0
x4: 0
params: (none)

Cut: C03
start time: 140.0
x4: 0
params: (none)

Cut: C04
start time: 260.0
x4: 0
params: (none)


===== Actors =====

Actor: UISystemActor[1]
concurrent clips: 1
actions: ['EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[2]
concurrent clips: 1
actions: ['EventSetRenderingCenterPosFromCameraPos']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[1]
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
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0050/Dm_Kokiri_0050/workspace.pp__ModelProject.gyml

Actor: Player_Event
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
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0050/Dm_Kokiri_0050_Player_Child/workspace.pp__ModelProject.gyml

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

Actor: Dm_Npc_Navi
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0050/Dm_Kokiri_0050_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Kokiri_Saria_Child
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EquipmentUser_Accessory1: ''
EquipmentUser_Accessory2: ''
EquipmentUser_Accessory3: ''
EquipmentUser_Accessory4: ''
EquipmentUser_Bow: ''
EquipmentUser_Bow_EquipmentState: 0
EquipmentUser_Shield: ''
EquipmentUser_Shield_EquipmentState: 0
EquipmentUser_SubTool: ''
EquipmentUser_SubWeapon: ''
EquipmentUser_SubWeapon_EquipmentState: 0
EquipmentUser_Tool: ''
EquipmentUser_Weapon: ''
EquipmentUser_Weapon_EquipmentState: 0
EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_Kokiri_0050.root.as
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0050/Dm_Kokiri_0050_Npc_Kokiri_WC_Saria/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Fairy
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetFairyColor']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0050/Dm_Kokiri_0050_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Fairy_Saria
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0050/Dm_Kokiri_0050_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Obj_Kokiri_Door_A_01_demo
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -41.29764175415039
- 118.37940216064453
- 13.08823013305664
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0050/Dm_Kokiri_0050_Obj_Kokiri_Door_A/workspace.pp__ModelProject.gyml

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
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeInForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E PostProcessingActor[2] - EventSetRenderingCenterPosFromCameraPos (#1, concurrent=0)
               duration: 140.0
               EndFocusDis: 3.0
               IsWaitEnd: true
               StarFocusDis: 3.0
[      0.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 140.0
               EndBluarLevel: 0.5
               EndDistance: 3.5
               EndFNumber: 7.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 3.5
               StartFNumber: 7.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#9, concurrent=0)
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#12, concurrent=1)
               duration: 140.0
               Near: 0.10000000149011612
[      0.0] E Player_Event - EventPlayASForTimeline (#15, concurrent=0)
               duration: 140.0
               ASName: C02-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event - EventTriggerChemicalRequestDryTemporarily (#17, concurrent=1)
               duration: 100.0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#18, concurrent=0)
               duration: 1178.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi - EventPlayASForTimeline (#19, concurrent=0)
               duration: 140.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Obj_Kokiri_Door_A_01_demo - EventPlayASForTimeline (#29, concurrent=0)
               duration: 140.0
               ASName: C02-Obj_Kokiri_Door_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#36, concurrent=0)
               duration: 15.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[     12.0] E VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
               duration: 80.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0050:Dm_Kokiri_0050_Text_000_b
               OffsetFrame: 50
               Speaker: Npc_Kokiri_Saria_Child
[     15.0] L UISystemActor[0] - EventEventFadeInForTimeline (#36, concurrent=0)
[     92.0] L VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
[     92.0] E VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
               duration: 102.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0050:Dm_Kokiri_0050_Text_001_b
               OffsetFrame: 48
               Speaker: Npc_Kokiri_Saria_Child
[    100.0] L Player_Event - EventTriggerChemicalRequestDryTemporarily (#17, concurrent=1)
[    140.0] L PostProcessingActor[2] - EventSetRenderingCenterPosFromCameraPos (#1, concurrent=0)
[    140.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#4, concurrent=0)
[    140.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#9, concurrent=0)
[    140.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#12, concurrent=1)
[    140.0] L Player_Event - EventPlayASForTimeline (#15, concurrent=0)
[    140.0] L Dm_Npc_Navi - EventPlayASForTimeline (#19, concurrent=0)
[    140.0] L Obj_Kokiri_Door_A_01_demo - EventPlayASForTimeline (#29, concurrent=0)
[    140.0] E PostProcessingActor[2] - EventSetRenderingCenterPosFromCameraPos (#2, concurrent=0)
               duration: 120.0
               EndFocusDis: 10.0
               IsWaitEnd: true
               StarFocusDis: 10.0
[    140.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 120.0
               EndBluarLevel: 1.399999976158142
               EndDistance: 15.800000190734863
               EndFNumber: 14.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.399999976158142
               StartDistance: 15.800000190734863
               StartFNumber: 14.0
[    140.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#10, concurrent=0)
               duration: 120.0
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
[    140.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#13, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[    140.0] E Player_Event - EventPlayASForTimeline (#16, concurrent=0)
               duration: 120.0
               ASName: C03-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    140.0] E Dm_Npc_Navi - EventPlayASForTimeline (#20, concurrent=0)
               duration: 120.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    140.0] E Npc_Kokiri_Saria_Child - EventPlayASForTimeline (#21, concurrent=0)
               duration: 120.0
               ASName: C03-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    140.0] E Dm_Npc_Fairy - EventPlayASForTimeline (#23, concurrent=0)
               duration: 120.0
               ASName: C03-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    140.0] E Dm_Npc_Fairy - EventTriggerSetFairyColor (#25, concurrent=1)
               duration: 120.0
               Color: 3
[    140.0] E Npc_Fairy_Saria - EventGoOffstageForUser (#27, concurrent=0)
               duration: 120.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[    194.0] L VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
[    194.0] E VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
               duration: 82.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0050:Dm_Kokiri_0050_Text_002_b
               OffsetFrame: 46
               Speaker: Npc_Kokiri_Saria_Child
[    260.0] L PostProcessingActor[2] - EventSetRenderingCenterPosFromCameraPos (#2, concurrent=0)
[    260.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#5, concurrent=0)
[    260.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#10, concurrent=0)
[    260.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#13, concurrent=1)
[    260.0] L Player_Event - EventPlayASForTimeline (#16, concurrent=0)
[    260.0] L Dm_Npc_Navi - EventPlayASForTimeline (#20, concurrent=0)
[    260.0] L Npc_Kokiri_Saria_Child - EventPlayASForTimeline (#21, concurrent=0)
[    260.0] L Dm_Npc_Fairy - EventPlayASForTimeline (#23, concurrent=0)
[    260.0] L Dm_Npc_Fairy - EventTriggerSetFairyColor (#25, concurrent=1)
[    260.0] L Npc_Fairy_Saria - EventGoOffstageForUser (#27, concurrent=0)
[    260.0] E PostProcessingActor[2] - EventSetRenderingCenterPosFromCameraPos (#3, concurrent=0)
               duration: 918.0
               EndFocusDis: 3.0
               IsWaitEnd: true
               StarFocusDis: 3.0
[    260.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 70.0
               EndBluarLevel: 2.0
               EndDistance: 3.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 7.0
               StartFNumber: 10.0
[    260.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#11, concurrent=0)
               duration: 918.0
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
[    260.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#14, concurrent=1)
               duration: 918.0
               Near: 0.10000000149011612
[    260.0] E Npc_Kokiri_Saria_Child - EventPlayASForTimeline (#22, concurrent=0)
               duration: 918.0
               ASName: AS-C04-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    260.0] E Dm_Npc_Fairy - EventPlayASForTimeline (#24, concurrent=0)
               duration: 918.0
               ASName: C04-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    260.0] E Dm_Npc_Fairy - EventTriggerSetFairyColor (#26, concurrent=1)
               duration: 918.0
               Color: 3
[    260.0] E Npc_Fairy_Saria - EventGoOffstageForUser (#28, concurrent=0)
               duration: 918.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[    276.0] L VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
[    276.0] E VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
               duration: 52.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0050:Dm_Kokiri_0050_Text_003_b
               OffsetFrame: 44
               Speaker: Npc_Kokiri_Saria_Child
[    328.0] L VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
[    328.0] E VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
               duration: 77.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0050:Dm_Kokiri_0050_Text_004_b
               OffsetFrame: 42
               Speaker: Npc_Kokiri_Saria_Child
[    330.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#6, concurrent=0)
[    330.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 51.0
               EndBluarLevel: 1.2999999523162842
               EndDistance: 1.75
               EndFNumber: 39.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.5
               StartFNumber: 20.0
[    381.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#7, concurrent=0)
[    381.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 797.0
               EndBluarLevel: 1.2999999523162842
               EndDistance: 1.75
               EndFNumber: 39.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2999999523162842
               StartDistance: 1.75
               StartFNumber: 39.5
[    405.0] L VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
[    405.0] E VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
               duration: 207.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0050:Dm_Kokiri_0050_Text_005_b
               OffsetFrame: 40
               Speaker: Npc_Kokiri_Saria_Child
[    612.0] L VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
[    638.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#37, concurrent=0)
               duration: 320.0
               DemoNicknamePos: 1
               DemoNicknameType: 0
               InAnimFrame: -1
               IsWaitEnd: true
               NameMessageLabel: ActorMsg/Npc:Npc_Kokiri_Saria_Child_Name
               NicknameMessageLabel: ActorMsg/Nickname:Npc_Kokiri_Saria_Child
               OutAnimFrame: -1
[    958.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#37, concurrent=0)
[   1118.0] E UISystemActor[1] - EventEventFadeOutForTimeline (#0, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1178.0] L UISystemActor[1] - EventEventFadeOutForTimeline (#0, concurrent=0)
[   1178.0] L PostProcessingActor[2] - EventSetRenderingCenterPosFromCameraPos (#3, concurrent=0)
[   1178.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#8, concurrent=0)
[   1178.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#11, concurrent=0)
[   1178.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#14, concurrent=1)
[   1178.0] L Npc_Navi - EventGoOffstageForUser (#18, concurrent=0)
[   1178.0] L Npc_Kokiri_Saria_Child - EventPlayASForTimeline (#22, concurrent=0)
[   1178.0] L Dm_Npc_Fairy - EventPlayASForTimeline (#24, concurrent=0)
[   1178.0] L Dm_Npc_Fairy - EventTriggerSetFairyColor (#26, concurrent=1)
[   1178.0] L Npc_Fairy_Saria - EventGoOffstageForUser (#28, concurrent=0)
