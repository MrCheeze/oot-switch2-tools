-------- Event timeline: Dm_InsideGanonCastle_0075 --------
actors: 14
clips: 66
oneshots: 0
cuts: 10
duration: 1911.0
subtimelines: ['Dm_InsideGanonCastle_0075_Effect', 'Dm_InsideGanonCastle_0075_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C03
start time: 0.0
x4: 0
params: (none)

Cut: C04
start time: 240.0
x4: 0
params: (none)

Cut: C05
start time: 763.0
x4: 0
params: (none)

Cut: c06
start time: 883.0
x4: 0
params: (none)

Cut: C07
start time: 1125.0
x4: 0
params: (none)

Cut: C08
start time: 1172.0
x4: 0
params: (none)

Cut: C09
start time: 1268.0
x4: 0
params: (none)

Cut: C10
start time: 1414.0
x4: 0
params: (none)

Cut: C11
start time: 1579.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
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
UseEventModelAnime: 使用しない

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_Fire_A_01[MainRoom01]
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -30.03700065612793
- 3.2799999713897705
- -25.04400062561035
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_Fire_A_01[MainRoom00]
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -30.013999938964844
- 3.2799999713897705
- -16.94499969482422
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_SageSymbol_A_01[MainRoom]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -30.3700008392334
- 109.12000274658203
- -21.0
Rotation:
- 0.0
- 90.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_LobbyTube_A_01
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 0.0
- 100.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_SageRoomTube_A_01
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: true
IsGrounding: false
IsWorld: true
Position:
- -100.00499725341797
- 100.5
- -21.0
Rotation:
- 0.0
- 90.0
- 0.0
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

Actor: VoicePlayActor[0]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
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
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0075/Dm_InsideGanonCastle_0075_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Hylia_Rauru_Ghost[0]
concurrent clips: 4
actions: ['EventPlayASForTimeline', 'EventTriggerStartFadeIn', 'EventTriggerStartFadeOut', 'EventTriggerChangeModelAlphaDrawTiming', 'EventTriggerSetModelAlpha']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0075/Dm_InsideGanonCastle_0075_Npc_Hylia_MU_Rauru/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0075/Dm_InsideGanonCastle_0075_Player_Adult/workspace.pp__ModelProject.gyml

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


===== Timeline =====

[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#0, concurrent=0)
               duration: 240.0
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
[      0.0] E Npc_Navi - EventGoOffstageForUser (#9, concurrent=0)
               duration: 1911.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Locator[0] - EventDoNothing (#10, concurrent=0)
               duration: 1911.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_Fire_A_01[MainRoom01] - EventDoNothing (#11, concurrent=0)
               duration: 1691.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_Fire_A_01[MainRoom00] - EventDoNothing (#13, concurrent=0)
               duration: 1691.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_SageSymbol_A_01[MainRoom] - EventPlayASForTimeline (#15, concurrent=0)
               duration: 1268.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Obj_InsideGanonCastle_SageRoomTube_A_01 - EventPlayASForTimeline (#21, concurrent=0)
               duration: 1005.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#24, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#32, concurrent=0)
               duration: 240.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Npc_Hylia_Rauru_Ghost[0] - EventTriggerChangeModelAlphaDrawTiming (#43, concurrent=2)
               duration: 1.0
               IsPostEffect: true
               IsPreEffect: false
[      0.0] E Dm_Npc_Hylia_Rauru_Ghost[0] - EventTriggerSetModelAlpha (#44, concurrent=3)
               duration: 1.0
               Alpha: 0.5
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 240.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#51, concurrent=1)
               duration: 100.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#52, concurrent=2)
               duration: 100.0
               BootsType: 0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
               duration: 240.0
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
[      1.0] L Dm_Npc_Hylia_Rauru_Ghost[0] - EventTriggerChangeModelAlphaDrawTiming (#43, concurrent=2)
[      1.0] L Dm_Npc_Hylia_Rauru_Ghost[0] - EventTriggerSetModelAlpha (#44, concurrent=3)
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#24, concurrent=0)
[     60.0] E Dm_Npc_Hylia_Rauru_Ghost[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 180.0
               ASName: C03-Npc_Hylia_MU_Rauru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     60.0] E Dm_Npc_Hylia_Rauru_Ghost[0] - EventTriggerStartFadeIn (#41, concurrent=1)
               duration: 120.0
               FadeFrame: 120
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#51, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#52, concurrent=2)
[    180.0] L Dm_Npc_Hylia_Rauru_Ghost[0] - EventTriggerStartFadeIn (#41, concurrent=1)
[    240.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#0, concurrent=0)
[    240.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#32, concurrent=0)
[    240.0] L Dm_Npc_Hylia_Rauru_Ghost[0] - EventPlayASForTimeline (#38, concurrent=0)
[    240.0] L Player_Event[0] - EventPlayASForTimeline (#45, concurrent=0)
[    240.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
[    240.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
               duration: 523.0
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
[    240.0] E Dm_Npc_Hylia_Rauru_Ghost[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 523.0
               ASName: C04-Npc_Hylia_MU_Rauru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    240.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
               duration: 523.0
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
[    252.0] E VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
               duration: 437.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0075:Dm_InsideGanonCastle_0075_Text_000_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Rauru_Ghost
[    420.0] E Obj_InsideGanonCastle_LobbyTube_A_01 - EventPlayASForTimeline (#18, concurrent=0)
               duration: 898.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    689.0] L VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
[    763.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
[    763.0] L Dm_Npc_Hylia_Rauru_Ghost[0] - EventPlayASForTimeline (#39, concurrent=0)
[    763.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
[    763.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 120.0
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
[    763.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 120.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    763.0] E Dm_Npc_Hylia_Rauru_Ghost[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 120.0
               ASName: C05-Npc_Hylia_MU_Rauru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    763.0] E Player_Event[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 120.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    763.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
               duration: 120.0
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
[    763.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#63, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[    808.0] E Dm_Npc_Hylia_Rauru_Ghost[0] - EventTriggerStartFadeOut (#42, concurrent=1)
               duration: 65.0
               FadeFrame: 65
[    873.0] L Dm_Npc_Hylia_Rauru_Ghost[0] - EventTriggerStartFadeOut (#42, concurrent=1)
[    883.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    883.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#33, concurrent=0)
[    883.0] L Dm_Npc_Hylia_Rauru_Ghost[0] - EventPlayASForTimeline (#40, concurrent=0)
[    883.0] L Player_Event[0] - EventPlayASForTimeline (#46, concurrent=0)
[    883.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
[    883.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#63, concurrent=1)
[    883.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 242.0
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
[    883.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 242.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    883.0] E Player_Event[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 242.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    883.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
               duration: 242.0
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
[   1005.0] L Obj_InsideGanonCastle_SageRoomTube_A_01 - EventPlayASForTimeline (#21, concurrent=0)
[   1005.0] E Obj_InsideGanonCastle_SageRoomTube_A_01 - EventPlayASForTimeline (#22, concurrent=0)
               duration: 120.0
               ASName: 'Off'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1125.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[   1125.0] L Obj_InsideGanonCastle_SageRoomTube_A_01 - EventPlayASForTimeline (#22, concurrent=0)
[   1125.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#34, concurrent=0)
[   1125.0] L Player_Event[0] - EventPlayASForTimeline (#47, concurrent=0)
[   1125.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
[   1125.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 47.0
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
[   1125.0] E Obj_InsideGanonCastle_SageRoomTube_A_01 - EventPlayASForTimeline (#23, concurrent=0)
               duration: 786.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1125.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 47.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1125.0] E Player_Event[0] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 47.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1125.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
               duration: 47.0
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
[   1125.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#64, concurrent=1)
               duration: 47.0
               Near: 0.10000000149011612
[   1163.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#25, concurrent=0)
               duration: 9.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1172.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   1172.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#25, concurrent=0)
[   1172.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
[   1172.0] L Player_Event[0] - EventPlayASForTimeline (#48, concurrent=0)
[   1172.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
[   1172.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#64, concurrent=1)
[   1172.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 96.0
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
[   1172.0] E UISystemActor[0] - EventEventFadeInForTimeline (#26, concurrent=0)
               duration: 41.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: false
[   1172.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
               duration: 96.0
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
[   1213.0] L UISystemActor[0] - EventEventFadeInForTimeline (#26, concurrent=0)
[   1253.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#27, concurrent=0)
               duration: 15.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1268.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   1268.0] L Obj_InsideGanonCastle_SageSymbol_A_01[MainRoom] - EventPlayASForTimeline (#15, concurrent=0)
[   1268.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#27, concurrent=0)
[   1268.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
[   1268.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 146.0
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
[   1268.0] E Obj_InsideGanonCastle_SageSymbol_A_01[MainRoom] - EventPlayASForTimeline (#16, concurrent=0)
               duration: 567.0
               ASName: 'On'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1268.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#28, concurrent=0)
               duration: 20.0
               Color: 0
               IsNoPlayAnime: true
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1268.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
               duration: 146.0
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
[   1288.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#28, concurrent=0)
[   1288.0] E UISystemActor[0] - EventEventFadeInForTimeline (#29, concurrent=0)
               duration: 45.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[   1318.0] L Obj_InsideGanonCastle_LobbyTube_A_01 - EventPlayASForTimeline (#18, concurrent=0)
[   1318.0] E Obj_InsideGanonCastle_LobbyTube_A_01 - EventPlayASForTimeline (#19, concurrent=0)
               duration: 517.0
               ASName: 'Off'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1333.0] L UISystemActor[0] - EventEventFadeInForTimeline (#29, concurrent=0)
[   1414.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1414.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
[   1414.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 165.0
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
[   1414.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 165.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1414.0] E Player_Event[0] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 165.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1414.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
               duration: 165.0
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
[   1414.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#65, concurrent=1)
               duration: 165.0
               Near: 0.10000000149011612
[   1579.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   1579.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
[   1579.0] L Player_Event[0] - EventPlayASForTimeline (#49, concurrent=0)
[   1579.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
[   1579.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#65, concurrent=1)
[   1579.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 332.0
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
[   1579.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 332.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1579.0] E Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 332.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1579.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
               duration: 332.0
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
[   1691.0] L Obj_InsideGanonCastle_Fire_A_01[MainRoom01] - EventDoNothing (#11, concurrent=0)
[   1691.0] L Obj_InsideGanonCastle_Fire_A_01[MainRoom00] - EventDoNothing (#13, concurrent=0)
[   1691.0] E Obj_InsideGanonCastle_Fire_A_01[MainRoom01] - EventGoOffstageForUser (#12, concurrent=0)
               duration: 220.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1691.0] E Obj_InsideGanonCastle_Fire_A_01[MainRoom00] - EventGoOffstageForUser (#14, concurrent=0)
               duration: 220.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1835.0] L Obj_InsideGanonCastle_SageSymbol_A_01[MainRoom] - EventPlayASForTimeline (#16, concurrent=0)
[   1835.0] L Obj_InsideGanonCastle_LobbyTube_A_01 - EventPlayASForTimeline (#19, concurrent=0)
[   1835.0] E Obj_InsideGanonCastle_SageSymbol_A_01[MainRoom] - EventPlayASForTimeline (#17, concurrent=0)
               duration: 76.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1835.0] E Obj_InsideGanonCastle_LobbyTube_A_01 - EventPlayASForTimeline (#20, concurrent=0)
               duration: 76.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1851.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#30, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1910.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#53, concurrent=2)
               duration: 1.0
[   1911.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   1911.0] L Npc_Navi - EventGoOffstageForUser (#9, concurrent=0)
[   1911.0] L Dm_Locator[0] - EventDoNothing (#10, concurrent=0)
[   1911.0] L Obj_InsideGanonCastle_Fire_A_01[MainRoom01] - EventGoOffstageForUser (#12, concurrent=0)
[   1911.0] L Obj_InsideGanonCastle_Fire_A_01[MainRoom00] - EventGoOffstageForUser (#14, concurrent=0)
[   1911.0] L Obj_InsideGanonCastle_SageSymbol_A_01[MainRoom] - EventPlayASForTimeline (#17, concurrent=0)
[   1911.0] L Obj_InsideGanonCastle_LobbyTube_A_01 - EventPlayASForTimeline (#20, concurrent=0)
[   1911.0] L Obj_InsideGanonCastle_SageRoomTube_A_01 - EventPlayASForTimeline (#23, concurrent=0)
[   1911.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#30, concurrent=0)
[   1911.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#37, concurrent=0)
[   1911.0] L Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
[   1911.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#53, concurrent=2)
[   1911.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
