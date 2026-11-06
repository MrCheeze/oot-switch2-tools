-------- Event timeline: Dm_TimeTemple_0040 --------
actors: 14
clips: 129
oneshots: 0
cuts: 15
duration: 7890.0
subtimelines: ['Dm_TimeTemple_0040_Effect', 'Dm_TimeTemple_0040_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 420.0
x4: 0
params: (none)

Cut: cut03
start time: 840.0
x4: 0
params: (none)

Cut: cut04
start time: 1320.0
x4: 0
params: (none)

Cut: cut05
start time: 1560.0
x4: 0
params: (none)

Cut: cut06
start time: 2700.0
x4: 0
params: (none)

Cut: cut07
start time: 2940.0
x4: 0
params: (none)

Cut: cut08
start time: 3240.0
x4: 0
params: (none)

Cut: cut09
start time: 3510.0
x4: 0
params: (none)

Cut: cut10
start time: 4910.0
x4: 0
params: (none)

Cut: cut11
start time: 5590.0
x4: 0
params: (none)

Cut: cut12
start time: 6250.0
x4: 0
params: (none)

Cut: cut13
start time: 6490.0
x4: 0
params: (none)

Cut: cut14
start time: 6790.0
x4: 0
params: (none)

Cut: cut15
start time: 7190.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Land_SageRoom_WaterPlane_A_01[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 0.0
- -0.05000000074505806
- 0.0
UseEventAS: Work/AS/Root/Event/Dm_TimeTemple_0040_Dm_Land_SageRoom_WaterPlane.root.as
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0040/Dm_TimeTemple_0040_Dm_Land_SageRoom_WaterPlane/workspace.pp__ModelProject.gyml

Actor: Land_Demo_SkySacredLand_A_01[0]
concurrent clips: 1
actions: ['EventDoNothing', 'EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 0.0
- 0.0
- 0.0
Rotation:
- 0.0
- 0.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0040/Dm_TimeTemple_0040_Land_Demo_SkySacredLand/workspace.pp__ModelProject.gyml

Actor: GameSystemActor[0]
concurrent clips: 1
actions: ['EventDemoProductSupportComment']
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
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline', 'EventDoNothing']
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
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0040/Dm_TimeTemple_0040/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerSetStopEffect']
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
UseEventAS: Work/AS/Root/Event/Dm_TimeTemple_0040_Player.root.as
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0040/Dm_TimeTemple_0040_Player_Child/workspace.pp__ModelProject.gyml

Actor: Dm_Sword_Master[0]
concurrent clips: 1
actions: ['EventModelBind']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: ''

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0040/Dm_TimeTemple_0040_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0040/Dm_TimeTemple_0040_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetStopEffect']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_TimeTemple_0040_Dm_Npc_Navi.root.as
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0040/Dm_TimeTemple_0040_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Gerudo_Ganondorf[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_TimeTemple_0040_Ganondorf.root.as
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0040/Dm_TimeTemple_0040_Npc_Gerudo_GEU_Ganondorf_Child/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[1]
concurrent clips: 1
actions: []
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E Dm_Land_SageRoom_WaterPlane_A_01[0] - EventPlayASForTimeline (#0, concurrent=0)
               duration: 7890.0
               ASName: AS-C01_Dm_Land_SageRoom_WaterPlane_A_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#18, concurrent=0)
               duration: 150.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 420.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 1.2000000476837158
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 1.2000000476837158
               StartFNumber: 80.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
               duration: 420.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
               duration: 420.0
               Near: 0.10000000149011612
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#79, concurrent=0)
               duration: 420.0
               ASName: C01_00-Player_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#89, concurrent=1)
               duration: 100.0
[      0.0] E Dm_Sword_Master[0] - EventModelBind (#93, concurrent=0)
               duration: 2700.0
               ActorName: Dm_Locator
               BoneName: Dm_Locator
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
[      0.0] E Dm_Locator[0] - EventPlayASForTimeline (#96, concurrent=0)
               duration: 420.0
               ASName: C01_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#106, concurrent=0)
               duration: 7890.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#107, concurrent=0)
               duration: 420.0
               ASName: C01_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#89, concurrent=1)
[    150.0] L UISystemActor[0] - EventEventFadeInForTimeline (#18, concurrent=0)
[    420.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[    420.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
[    420.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
[    420.0] L Player_Event[0] - EventPlayASForTimeline (#79, concurrent=0)
[    420.0] L Dm_Locator[0] - EventPlayASForTimeline (#96, concurrent=0)
[    420.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#107, concurrent=0)
[    420.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 314.0
               EndBluarLevel: 1.0
               EndDistance: 2.0999999046325684
               EndFNumber: 68.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.0999999046325684
               StartFNumber: 68.0
[    420.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
               duration: 420.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C02_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    420.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#67, concurrent=1)
               duration: 420.0
               Near: 0.10000000149011612
[    420.0] E Player_Event[0] - EventPlayASForTimeline (#80, concurrent=0)
               duration: 420.0
               ASName: AS-C02_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    420.0] E Dm_Locator[0] - EventPlayASForTimeline (#97, concurrent=0)
               duration: 420.0
               ASName: C02_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    420.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#108, concurrent=0)
               duration: 420.0
               ASName: C02_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    427.0] E VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
               duration: 54.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_000_b
               OffsetFrame: 30
               Speaker: Player_Child
[    481.0] L VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
[    481.0] E VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
               duration: 118.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_000_c
               OffsetFrame: 30
               Speaker: Player_Child
[    599.0] L VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
[    599.0] E VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
               duration: 82.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_000_d
               OffsetFrame: 30
               Speaker: Player_Child
[    681.0] L VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
[    734.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[    734.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 76.0
               EndBluarLevel: 1.0
               EndDistance: 1.600000023841858
               EndFNumber: 68.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.0999999046325684
               StartFNumber: 68.0
[    752.0] E VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
               duration: 121.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_001_b
               OffsetFrame: 30
               Speaker: Player_Child
[    810.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[    810.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 30.0
               EndBluarLevel: 1.0
               EndDistance: 1.600000023841858
               EndFNumber: 68.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.600000023841858
               StartFNumber: 68.0
[    840.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
[    840.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
[    840.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#67, concurrent=1)
[    840.0] L Player_Event[0] - EventPlayASForTimeline (#80, concurrent=0)
[    840.0] L Dm_Locator[0] - EventPlayASForTimeline (#97, concurrent=0)
[    840.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#108, concurrent=0)
[    840.0] E Land_Demo_SkySacredLand_A_01[0] - EventPlayASForTimeline (#1, concurrent=0)
               duration: 480.0
               ASName: C03-Land_Demo_SkySacredLand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    840.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 81.0
               EndBluarLevel: 1.0
               EndDistance: 10.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 8.0
               StartFNumber: 15.0
[    840.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
               duration: 480.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    840.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#68, concurrent=1)
               duration: 480.0
               Near: 0.10000000149011612
[    840.0] E Player_Event[0] - EventPlayASForTimeline (#81, concurrent=0)
               duration: 480.0
               ASName: AS-C03_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    840.0] E Dm_Locator[0] - EventPlayASForTimeline (#98, concurrent=0)
               duration: 480.0
               ASName: C03_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    840.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#109, concurrent=0)
               duration: 480.0
               ASName: C03_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    873.0] L VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
[    921.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
[    921.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 56.0
               EndBluarLevel: 1.0
               EndDistance: 10.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 10.0
               StartFNumber: 15.0
[    977.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
[    977.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
               duration: 343.0
               EndBluarLevel: 1.0
               EndDistance: 10.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 10.0
               StartFNumber: 20.0
[   1320.0] L Land_Demo_SkySacredLand_A_01[0] - EventPlayASForTimeline (#1, concurrent=0)
[   1320.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
[   1320.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
[   1320.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#68, concurrent=1)
[   1320.0] L Player_Event[0] - EventPlayASForTimeline (#81, concurrent=0)
[   1320.0] L Dm_Locator[0] - EventPlayASForTimeline (#98, concurrent=0)
[   1320.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#109, concurrent=0)
[   1320.0] E Land_Demo_SkySacredLand_A_01[0] - EventDoNothing (#2, concurrent=0)
               duration: 6570.0
               IsWaitEnd: true
[   1320.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 240.0
               EndBluarLevel: 0.0
               EndDistance: 1.399999976158142
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.399999976158142
               StartFNumber: 15.0
[   1320.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
               duration: 240.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C04_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1320.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#69, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[   1320.0] E Player_Event[0] - EventPlayASForTimeline (#82, concurrent=0)
               duration: 240.0
               ASName: AS-C04_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1320.0] E Dm_Locator[0] - EventPlayASForTimeline (#99, concurrent=0)
               duration: 240.0
               ASName: C04_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1320.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#110, concurrent=0)
               duration: 240.0
               ASName: C04_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1560.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
[   1560.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
[   1560.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#69, concurrent=1)
[   1560.0] L Player_Event[0] - EventPlayASForTimeline (#82, concurrent=0)
[   1560.0] L Dm_Locator[0] - EventPlayASForTimeline (#99, concurrent=0)
[   1560.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#110, concurrent=0)
[   1560.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 1140.0
               EndBluarLevel: 1.5
               EndDistance: 1.399999976158142
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.399999976158142
               StartFNumber: 100.0
[   1560.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
               duration: 1140.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C05_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1560.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#70, concurrent=1)
               duration: 1140.0
               Near: 0.10000000149011612
[   1560.0] E Player_Event[0] - EventPlayASForTimeline (#83, concurrent=0)
               duration: 1140.0
               ASName: AS-C05_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1560.0] E Dm_Locator[0] - EventPlayASForTimeline (#100, concurrent=0)
               duration: 1140.0
               ASName: C05_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1560.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#111, concurrent=0)
               duration: 1140.0
               ASName: C05_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1560.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#120, concurrent=0)
               duration: 1140.0
               ASName: AS-C05_00-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1587.0] E VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
               duration: 119.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_002_ab
               OffsetFrame: 30
               Speaker: Player_Child
[   1683.0] E Player_Event[0] - EventTriggerSetStopEffect (#90, concurrent=2)
               duration: 1017.0
               ColorScale: 1.0
               Ratio: 1.0
[   1683.0] E Dm_Npc_Navi[0] - EventTriggerSetStopEffect (#117, concurrent=1)
               duration: 1017.0
               ColorScale: 1.0
               Ratio: 1.0
[   1706.0] L VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
[   2225.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 473.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_002_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   2698.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[   2700.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
[   2700.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
[   2700.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#70, concurrent=1)
[   2700.0] L Player_Event[0] - EventPlayASForTimeline (#83, concurrent=0)
[   2700.0] L Player_Event[0] - EventTriggerSetStopEffect (#90, concurrent=2)
[   2700.0] L Dm_Sword_Master[0] - EventModelBind (#93, concurrent=0)
[   2700.0] L Dm_Locator[0] - EventPlayASForTimeline (#100, concurrent=0)
[   2700.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#111, concurrent=0)
[   2700.0] L Dm_Npc_Navi[0] - EventTriggerSetStopEffect (#117, concurrent=1)
[   2700.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#120, concurrent=0)
[   2700.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 161.0
               EndBluarLevel: 2.0
               EndDistance: 2.5
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.799999952316284
               StartFNumber: 180.0
[   2700.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
               duration: 240.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C06_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2700.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#71, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[   2700.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#121, concurrent=0)
               duration: 240.0
               ASName: C06_00-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2861.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
[   2861.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 79.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 140.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.5
               StartFNumber: 80.0
[   2940.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
[   2940.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
[   2940.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#71, concurrent=1)
[   2940.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#121, concurrent=0)
[   2940.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 119.0
               EndBluarLevel: 2.0
               EndDistance: 5.0
               EndFNumber: 35.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.5
               StartFNumber: 30.0
[   2940.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
               duration: 300.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C07_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2940.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#72, concurrent=1)
               duration: 300.0
               Near: 0.10000000149011612
[   2940.0] E Player_Event[0] - EventPlayASForTimeline (#84, concurrent=0)
               duration: 300.0
               ASName: AS-C07_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2940.0] E Player_Event[0] - EventTriggerSetStopEffect (#91, concurrent=2)
               duration: 2650.0
               ColorScale: 1.0
               Ratio: 1.0
[   2940.0] E Dm_Sword_Master[0] - EventModelBind (#94, concurrent=0)
               duration: 2650.0
               ActorName: Dm_Locator
               BoneName: Dm_Locator
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
[   2940.0] E Dm_Locator[0] - EventPlayASForTimeline (#101, concurrent=0)
               duration: 300.0
               ASName: C07_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2940.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#112, concurrent=0)
               duration: 300.0
               ASName: AS-C07_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2940.0] E Dm_Npc_Navi[0] - EventTriggerSetStopEffect (#118, concurrent=1)
               duration: 2650.0
               ColorScale: 1.0
               Ratio: 1.0
[   2940.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#122, concurrent=0)
               duration: 300.0
               ASName: AS-C07_00-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3003.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 346.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_003_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   3059.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
[   3059.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 181.0
               EndBluarLevel: 2.0
               EndDistance: 4.699999809265137
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.0
               StartFNumber: 35.0
[   3240.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
[   3240.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
[   3240.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#72, concurrent=1)
[   3240.0] L Player_Event[0] - EventPlayASForTimeline (#84, concurrent=0)
[   3240.0] L Dm_Locator[0] - EventPlayASForTimeline (#101, concurrent=0)
[   3240.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#112, concurrent=0)
[   3240.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#122, concurrent=0)
[   3240.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 270.0
               EndBluarLevel: 3.0
               EndDistance: 0.26750001311302185
               EndFNumber: 906.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 0.699999988079071
               StartFNumber: 294.0
[   3240.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
               duration: 270.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C08_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3240.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#73, concurrent=1)
               duration: 270.0
               Near: 0.10000000149011612
[   3240.0] E Player_Event[0] - EventPlayASForTimeline (#85, concurrent=0)
               duration: 270.0
               ASName: AS-C08_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3240.0] E Dm_Locator[0] - EventPlayASForTimeline (#102, concurrent=0)
               duration: 270.0
               ASName: C08_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3240.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#113, concurrent=0)
               duration: 270.0
               ASName: AS-C08_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3349.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[   3510.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
[   3510.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
[   3510.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#73, concurrent=1)
[   3510.0] L Player_Event[0] - EventPlayASForTimeline (#85, concurrent=0)
[   3510.0] L Dm_Locator[0] - EventPlayASForTimeline (#102, concurrent=0)
[   3510.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#113, concurrent=0)
[   3510.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#35, concurrent=0)
               duration: 990.0
               EndBluarLevel: 2.0
               EndDistance: 1.2100000381469727
               EndFNumber: 96.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.2100000381469727
               StartFNumber: 96.0
[   3510.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
               duration: 1400.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C09_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3510.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#74, concurrent=1)
               duration: 1400.0
               Near: 0.10000000149011612
[   3510.0] E Player_Event[0] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 1400.0
               ASName: AS-C09_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3510.0] E Dm_Locator[0] - EventPlayASForTimeline (#103, concurrent=0)
               duration: 1400.0
               ASName: C09_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3510.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#114, concurrent=0)
               duration: 1400.0
               ASName: AS-C09_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3510.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#123, concurrent=0)
               duration: 1400.0
               ASName: AS-C09_00-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3764.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 326.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_004_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   4090.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[   4172.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 483.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_005_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   4500.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#35, concurrent=0)
[   4500.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#36, concurrent=0)
               duration: 410.0
               EndBluarLevel: 2.0
               EndDistance: 0.699999988079071
               EndFNumber: 195.60000610351562
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.2100000381469727
               StartFNumber: 96.0
[   4655.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   4880.0] E VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
               duration: 181.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_006_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   4910.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#36, concurrent=0)
[   4910.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
[   4910.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#74, concurrent=1)
[   4910.0] L Player_Event[0] - EventPlayASForTimeline (#86, concurrent=0)
[   4910.0] L Dm_Locator[0] - EventPlayASForTimeline (#103, concurrent=0)
[   4910.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#114, concurrent=0)
[   4910.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#123, concurrent=0)
[   4910.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#37, concurrent=0)
               duration: 281.0
               EndBluarLevel: 0.0
               EndDistance: 1.6200000047683716
               EndFNumber: 198.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.5
               StartFNumber: 188.0
[   4910.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
               duration: 680.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C10_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4910.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#75, concurrent=1)
               duration: 680.0
               Near: 0.10000000149011612
[   4910.0] E Player_Event[0] - EventPlayASForTimeline (#87, concurrent=0)
               duration: 680.0
               ASName: AS-C10_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4910.0] E Dm_Locator[0] - EventPlayASForTimeline (#104, concurrent=0)
               duration: 680.0
               ASName: C10_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4910.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#115, concurrent=0)
               duration: 680.0
               ASName: AS-C10_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4910.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#124, concurrent=0)
               duration: 680.0
               ASName: AS-C10_00-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5061.0] L VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
[   5088.0] E VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
               duration: 428.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_007_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   5191.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#37, concurrent=0)
[   5192.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#38, concurrent=0)
               duration: 309.0
               EndBluarLevel: 5.0
               EndDistance: 1.6200000047683716
               EndFNumber: 195.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.6200000047683716
               StartFNumber: 198.0
[   5501.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#38, concurrent=0)
[   5501.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#39, concurrent=0)
               duration: 55.0
               EndBluarLevel: 3.0
               EndDistance: 4.5
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.6200000047683716
               StartFNumber: 195.0
[   5516.0] L VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
[   5556.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#39, concurrent=0)
[   5556.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#40, concurrent=0)
               duration: 34.0
               EndBluarLevel: 3.0
               EndDistance: 4.5
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 4.5
               StartFNumber: 60.0
[   5590.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#40, concurrent=0)
[   5590.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
[   5590.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#75, concurrent=1)
[   5590.0] L Player_Event[0] - EventPlayASForTimeline (#87, concurrent=0)
[   5590.0] L Player_Event[0] - EventTriggerSetStopEffect (#91, concurrent=2)
[   5590.0] L Dm_Sword_Master[0] - EventModelBind (#94, concurrent=0)
[   5590.0] L Dm_Locator[0] - EventPlayASForTimeline (#104, concurrent=0)
[   5590.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#115, concurrent=0)
[   5590.0] L Dm_Npc_Navi[0] - EventTriggerSetStopEffect (#118, concurrent=1)
[   5590.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#124, concurrent=0)
[   5590.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#41, concurrent=0)
               duration: 148.0
               EndBluarLevel: 0.699999988079071
               EndDistance: 2.0
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.699999988079071
               StartDistance: 2.0
               StartFNumber: 120.0
[   5590.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
               duration: 660.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C11_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5590.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#76, concurrent=1)
               duration: 660.0
               Near: 0.10000000149011612
[   5590.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#125, concurrent=0)
               duration: 660.0
               ASName: AS-C11_00-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5686.0] E VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
               duration: 342.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_008_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   5738.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#41, concurrent=0)
[   5738.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#42, concurrent=0)
               duration: 191.0
               EndBluarLevel: 0.699999988079071
               EndDistance: 2.0
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.699999988079071
               StartDistance: 2.0
               StartFNumber: 120.0
[   5929.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#42, concurrent=0)
[   5929.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#43, concurrent=0)
               duration: 321.0
               EndBluarLevel: 0.0
               EndDistance: 2.0
               EndFNumber: 150.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.699999988079071
               StartDistance: 2.0
               StartFNumber: 120.0
[   6028.0] L VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
[   6250.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#43, concurrent=0)
[   6250.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
[   6250.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#76, concurrent=1)
[   6250.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#125, concurrent=0)
[   6250.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#44, concurrent=0)
               duration: 240.0
               EndBluarLevel: 0.0
               EndDistance: 50.0
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 50.0
               StartFNumber: 80.0
[   6250.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
               duration: 240.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C12_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6250.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#77, concurrent=1)
               duration: 240.0
               Near: 0.5
[   6268.0] E VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
               duration: 400.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_009_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   6490.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#44, concurrent=0)
[   6490.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
[   6490.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#77, concurrent=1)
[   6490.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#45, concurrent=0)
               duration: 102.0
               EndBluarLevel: 2.0
               EndDistance: 4.75
               EndFNumber: 130.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.75
               StartFNumber: 130.0
[   6490.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
               duration: 300.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C13_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6490.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#78, concurrent=1)
               duration: 300.0
               Near: 0.10000000149011612
[   6490.0] E Player_Event[0] - EventPlayASForTimeline (#88, concurrent=0)
               duration: 300.0
               ASName: AS-C13_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6490.0] E Player_Event[0] - EventTriggerSetStopEffect (#92, concurrent=2)
               duration: 300.0
               ColorScale: 1.0
               Ratio: 1.0
[   6490.0] E Dm_Sword_Master[0] - EventModelBind (#95, concurrent=0)
               duration: 300.0
               ActorName: Dm_Locator
               BoneName: Dm_Locator
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
[   6490.0] E Dm_Locator[0] - EventPlayASForTimeline (#105, concurrent=0)
               duration: 300.0
               ASName: C13_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6490.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#116, concurrent=0)
               duration: 300.0
               ASName: AS-C13_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6490.0] E Dm_Npc_Navi[0] - EventTriggerSetStopEffect (#119, concurrent=1)
               duration: 300.0
               ColorScale: 1.0
               Ratio: 1.0
[   6490.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#126, concurrent=0)
               duration: 300.0
               ASName: AS-C13_00-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6592.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#45, concurrent=0)
[   6592.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#46, concurrent=0)
               duration: 78.0
               EndBluarLevel: 2.0
               EndDistance: 20.0
               EndFNumber: 130.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.75
               StartFNumber: 130.0
[   6668.0] L VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
[   6670.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#46, concurrent=0)
[   6670.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#47, concurrent=0)
               duration: 120.0
               EndBluarLevel: 2.0
               EndDistance: 20.0
               EndFNumber: 130.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 20.0
               StartFNumber: 130.0
[   6790.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#47, concurrent=0)
[   6790.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
[   6790.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#78, concurrent=1)
[   6790.0] L Player_Event[0] - EventPlayASForTimeline (#88, concurrent=0)
[   6790.0] L Player_Event[0] - EventTriggerSetStopEffect (#92, concurrent=2)
[   6790.0] L Dm_Sword_Master[0] - EventModelBind (#95, concurrent=0)
[   6790.0] L Dm_Locator[0] - EventPlayASForTimeline (#105, concurrent=0)
[   6790.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#116, concurrent=0)
[   6790.0] L Dm_Npc_Navi[0] - EventTriggerSetStopEffect (#119, concurrent=1)
[   6790.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#126, concurrent=0)
[   6790.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#48, concurrent=0)
               duration: 400.0
               EndBluarLevel: 0.0
               EndDistance: 8.600000381469727
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 8.600000381469727
               StartFNumber: 5.0
[   6790.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
               duration: 400.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C14_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6790.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#127, concurrent=0)
               duration: 400.0
               ASName: AS-C14_00-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6980.0] E VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
               duration: 354.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_010_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   7190.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#48, concurrent=0)
[   7190.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
[   7190.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#127, concurrent=0)
[   7190.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#49, concurrent=0)
               duration: 202.0
               EndBluarLevel: 0.0
               EndDistance: 10.0
               EndFNumber: 171.83999633789062
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 10.0
               StartFNumber: 272.6400146484375
[   7190.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
               duration: 700.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C15_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   7190.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#128, concurrent=0)
               duration: 700.0
               ASName: AS-C15_00-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7334.0] L VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
[   7384.0] E VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
               duration: 331.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0040:Dm_TimeTemple_0040_Text_011_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   7392.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#49, concurrent=0)
[   7392.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#50, concurrent=0)
               duration: 498.0
               EndBluarLevel: 0.0
               EndDistance: 10.0
               EndFNumber: 160.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 10.0
               StartFNumber: 171.83999633789062
[   7660.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#19, concurrent=0)
               duration: 200.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   7715.0] L VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
[   7860.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#19, concurrent=0)
[   7860.0] E UISystemActor[0] - EventDoNothing (#20, concurrent=0)
               duration: 30.0
               IsWaitEnd: true
[   7890.0] L Dm_Land_SageRoom_WaterPlane_A_01[0] - EventPlayASForTimeline (#0, concurrent=0)
[   7890.0] L Land_Demo_SkySacredLand_A_01[0] - EventDoNothing (#2, concurrent=0)
[   7890.0] L UISystemActor[0] - EventDoNothing (#20, concurrent=0)
[   7890.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#50, concurrent=0)
[   7890.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
[   7890.0] L Npc_Navi - EventGoOffstageForUser (#106, concurrent=0)
[   7890.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#128, concurrent=0)
