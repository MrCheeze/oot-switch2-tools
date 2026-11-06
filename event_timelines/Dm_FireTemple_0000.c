-------- Event timeline: Dm_FireTemple_0000 --------
actors: 11
clips: 48
oneshots: 0
cuts: 6
duration: 2330.0
subtimelines: ['Dm_FireTemple_0000_Effect', 'Dm_FireTemple_0000_Env']
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 291.0
x4: 0
params: (none)

Cut: cut03
start time: 667.0
x4: 0
params: (none)

Cut: cut04
start time: 1042.0
x4: 0
params: (none)

Cut: cut05
start time: 1641.0
x4: 0
params: (none)

Cut: cut06
start time: 1961.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Obj_DoorChainLock_A_01[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser']
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

Actor: Dm_Locator[0]
concurrent clips: 2
actions: ['EventTriggerParticipateEvent', 'EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -26.007169723510742
- 100.22750091552734
- -0.17734000086784363
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
UseEventModelAnime: 使用しない

Actor: Dm_Npc_Navi[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventNaviPlayLipSync', 'EventNaviStopLipSync']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_0000/Dm_FireTemple_0000_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerPlayerRestoreBootsChange']
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
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_0000/Dm_FireTemple_0000_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Goron_Darunia_Adult[0]
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
EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_FireTemple_0000/Dm_FireTemple_0000_Npc_Goron_GOU_Darunia/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E Dm_Obj_DoorChainLock_A_01[0] - EventGoOffstageForUser (#0, concurrent=0)
               duration: 2330.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
               duration: 291.0
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
[      0.0] E Dm_Locator[0] - EventTriggerParticipateEvent (#7, concurrent=0)
               duration: 2330.0
[      0.0] E Dm_Locator[0] - EventDoNothing (#8, concurrent=1)
               duration: 2330.0
               IsWaitEnd: true
[      0.0] E Npc_Navi - EventGoOffstageForUser (#9, concurrent=0)
               duration: 2330.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#10, concurrent=0)
               duration: 291.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#15, concurrent=0)
               duration: 291.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#18, concurrent=1)
               duration: 100.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#19, concurrent=2)
               duration: 100.0
               BootsType: 0
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#26, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#36, concurrent=0)
               duration: 291.0
               Near: 0.10000000149011612
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
               duration: 291.0
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
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#18, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#19, concurrent=2)
[    100.0] L UISystemActor[0] - EventEventFadeInForTimeline (#26, concurrent=0)
[    291.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
[    291.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#10, concurrent=0)
[    291.0] L Player_Event[0] - EventPlayASForTimeline (#15, concurrent=0)
[    291.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#36, concurrent=0)
[    291.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
[    291.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 376.0
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
[    291.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#11, concurrent=0)
               duration: 376.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    291.0] E Player_Event[0] - EventPlayASForTimeline (#16, concurrent=0)
               duration: 376.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    291.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#21, concurrent=0)
               duration: 376.0
               ASName: C02-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    291.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#37, concurrent=0)
               duration: 376.0
               Near: 0.10000000149011612
[    291.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
               duration: 376.0
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
[    459.0] E VoicePlayActor[0] - EventStartVoice (#28, concurrent=0)
               duration: 144.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FireTemple_0000:Dm_FireTemple_0000_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[    489.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#13, concurrent=1)
               duration: 111.0
[    600.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#13, concurrent=1)
[    600.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#14, concurrent=1)
               duration: 5.0
[    603.0] L VoicePlayActor[0] - EventStartVoice (#28, concurrent=0)
[    605.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#14, concurrent=1)
[    665.0] E VoicePlayActor[0] - EventStartVoice (#29, concurrent=0)
               duration: 97.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FireTemple_0000:Dm_FireTemple_0000_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[    667.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    667.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#11, concurrent=0)
[    667.0] L Player_Event[0] - EventPlayASForTimeline (#16, concurrent=0)
[    667.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#21, concurrent=0)
[    667.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#37, concurrent=0)
[    667.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
[    667.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 375.0
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
[    667.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 375.0
               ASName: C03-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    667.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#38, concurrent=0)
               duration: 375.0
               Near: 0.20000000298023224
[    667.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
               duration: 375.0
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
[    762.0] L VoicePlayActor[0] - EventStartVoice (#29, concurrent=0)
[    762.0] E VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
               duration: 121.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FireTemple_0000:Dm_FireTemple_0000_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[    883.0] L VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
[    883.0] E VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
               duration: 157.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FireTemple_0000:Dm_FireTemple_0000_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   1040.0] L VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
[   1040.0] E VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
               duration: 234.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FireTemple_0000:Dm_FireTemple_0000_Text_003_c
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   1042.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[   1042.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#22, concurrent=0)
[   1042.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#38, concurrent=0)
[   1042.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
[   1042.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 599.0
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
[   1042.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#23, concurrent=0)
               duration: 599.0
               ASName: C04-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1042.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#39, concurrent=0)
               duration: 599.0
               Near: 0.800000011920929
[   1042.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
               duration: 599.0
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
[   1274.0] L VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
[   1274.0] E VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
               duration: 365.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FireTemple_0000:Dm_FireTemple_0000_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   1639.0] L VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
[   1641.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   1641.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#23, concurrent=0)
[   1641.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#39, concurrent=0)
[   1641.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
[   1641.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
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
[   1641.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#12, concurrent=0)
               duration: 320.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1641.0] E Player_Event[0] - EventPlayASForTimeline (#17, concurrent=0)
               duration: 320.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1641.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 320.0
               ASName: C05-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1641.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#40, concurrent=0)
               duration: 320.0
               Near: 1.0
[   1641.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
               duration: 320.0
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
[   1690.0] E VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
               duration: 252.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FireTemple_0000:Dm_FireTemple_0000_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   1942.0] L VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
[   1942.0] E VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
               duration: 286.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FireTemple_0000:Dm_FireTemple_0000_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   1961.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   1961.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#12, concurrent=0)
[   1961.0] L Player_Event[0] - EventPlayASForTimeline (#17, concurrent=0)
[   1961.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#24, concurrent=0)
[   1961.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#40, concurrent=0)
[   1961.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
[   1961.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 369.0
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
[   1961.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 369.0
               ASName: C06-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1961.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#41, concurrent=0)
               duration: 369.0
               Near: 1.0
[   1961.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
               duration: 369.0
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
[   2228.0] L VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
[   2230.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#20, concurrent=2)
               duration: 100.0
[   2230.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#27, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   2330.0] L Dm_Obj_DoorChainLock_A_01[0] - EventGoOffstageForUser (#0, concurrent=0)
[   2330.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   2330.0] L Dm_Locator[0] - EventTriggerParticipateEvent (#7, concurrent=0)
[   2330.0] L Dm_Locator[0] - EventDoNothing (#8, concurrent=1)
[   2330.0] L Npc_Navi - EventGoOffstageForUser (#9, concurrent=0)
[   2330.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#20, concurrent=2)
[   2330.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#25, concurrent=0)
[   2330.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#27, concurrent=0)
[   2330.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#41, concurrent=0)
[   2330.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
