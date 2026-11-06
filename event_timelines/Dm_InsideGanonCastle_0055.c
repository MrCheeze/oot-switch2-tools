-------- Event timeline: Dm_InsideGanonCastle_0055 --------
actors: 14
clips: 68
oneshots: 0
cuts: 9
duration: 1815.0
subtimelines: ['Dm_InsideGanonCastle_0055_Effect', 'Dm_InsideGanonCastle_0055_Env']
params: (none)

===== Cuts =====

Cut: C03
start time: 0.0
x4: 0
params: (none)

Cut: C04
start time: 240.0
x4: 0
params: (none)

Cut: C05
start time: 667.0
x4: 0
params: (none)

Cut: C06
start time: 787.0
x4: 0
params: (none)

Cut: C07
start time: 1029.0
x4: 0
params: (none)

Cut: C08
start time: 1076.0
x4: 0
params: (none)

Cut: C09
start time: 1172.0
x4: 0
params: (none)

Cut: C10
start time: 1318.0
x4: 0
params: (none)

Cut: C11
start time: 1483.0
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

Actor: Dm_Npc_Goron_Darunia_Adult[0]
concurrent clips: 4
actions: ['EventPlayASForTimeline', 'EventTriggerStartFadeIn', 'EventTriggerStartFadeOut', 'EventTriggerChangeModelAlphaDrawTiming', 'EventTriggerSetModelAlpha']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0055/Dm_InsideGanonCastle_0055_Npc_Goron_GOU_Darunia/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_Fire_C_01[MainRoom01]
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -11.104000091552734
- 7.434999942779541
- -49.358001708984375
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_Fire_C_01[MainRoom00]
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -18.128000259399414
- 7.434999942779541
- -45.20500183105469
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_SageSymbol_A_03[MainRoom]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -14.8100004196167
- 113.18000030517578
- -47.58000183105469
Rotation:
- 0.0
- 30.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_LobbyTube_A_03
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

Actor: Obj_InsideGanonCastle_SageRoomTube_A_03
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -49.5
- 103.9800033569336
- -98.66000366210938
Rotation:
- 0.0
- 30.0
- 0.0
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

Actor: VoicePlayActor[0]
concurrent clips: 1
actions: ['EventStartVoice']
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

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0055/Dm_InsideGanonCastle_0055_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerPlayerRestoreBootsChange', 'EventTriggerChemicalRequestDryTemporarily']
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
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0055/Dm_InsideGanonCastle_0055_Player_Adult/workspace.pp__ModelProject.gyml

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
[      0.0] E Dm_Npc_Goron_Darunia_Adult[0] - EventTriggerChangeModelAlphaDrawTiming (#14, concurrent=2)
               duration: 1.0
               IsPostEffect: true
               IsPreEffect: false
[      0.0] E Dm_Npc_Goron_Darunia_Adult[0] - EventTriggerSetModelAlpha (#15, concurrent=3)
               duration: 1.0
               Alpha: 0.5
[      0.0] E Dm_Locator[0] - EventDoNothing (#16, concurrent=0)
               duration: 1815.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_Fire_C_01[MainRoom01] - EventDoNothing (#17, concurrent=0)
               duration: 1595.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_Fire_C_01[MainRoom00] - EventDoNothing (#19, concurrent=0)
               duration: 1595.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_SageSymbol_A_03[MainRoom] - EventPlayASForTimeline (#21, concurrent=0)
               duration: 1172.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Obj_InsideGanonCastle_SageRoomTube_A_03 - EventPlayASForTimeline (#27, concurrent=0)
               duration: 927.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#30, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Npc_Navi - EventGoOffstageForUser (#38, concurrent=0)
               duration: 1815.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 240.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 240.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#51, concurrent=1)
               duration: 100.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#53, concurrent=2)
               duration: 100.0
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
[      1.0] L Dm_Npc_Goron_Darunia_Adult[0] - EventTriggerChangeModelAlphaDrawTiming (#14, concurrent=2)
[      1.0] L Dm_Npc_Goron_Darunia_Adult[0] - EventTriggerSetModelAlpha (#15, concurrent=3)
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#30, concurrent=0)
[     60.0] E Dm_Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#9, concurrent=0)
               duration: 180.0
               ASName: C03-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     60.0] E Dm_Npc_Goron_Darunia_Adult[0] - EventTriggerStartFadeIn (#12, concurrent=1)
               duration: 120.0
               FadeFrame: 120
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#51, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#53, concurrent=2)
[    180.0] L Dm_Npc_Goron_Darunia_Adult[0] - EventTriggerStartFadeIn (#12, concurrent=1)
[    220.0] E VoicePlayActor[0] - EventStartVoice (#37, concurrent=0)
               duration: 435.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0055:Dm_InsideGanonCastle_0055_Text_000_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Goron_Darunia_Adult
[    240.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#0, concurrent=0)
[    240.0] L Dm_Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#9, concurrent=0)
[    240.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#39, concurrent=0)
[    240.0] L Player_Event[0] - EventPlayASForTimeline (#45, concurrent=0)
[    240.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
[    240.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
               duration: 427.0
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
[    240.0] E Dm_Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#10, concurrent=0)
               duration: 427.0
               ASName: C04-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    240.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
               duration: 427.0
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
[    289.0] E Obj_InsideGanonCastle_LobbyTube_A_03 - EventPlayASForTimeline (#24, concurrent=0)
               duration: 933.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    655.0] L VoicePlayActor[0] - EventStartVoice (#37, concurrent=0)
[    667.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
[    667.0] L Dm_Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#10, concurrent=0)
[    667.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
[    667.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
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
[    667.0] E Dm_Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#11, concurrent=0)
               duration: 120.0
               ASName: C05-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    667.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 120.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    667.0] E Player_Event[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 120.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    667.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
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
[    667.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#63, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[    712.0] E Dm_Npc_Goron_Darunia_Adult[0] - EventTriggerStartFadeOut (#13, concurrent=1)
               duration: 65.0
               FadeFrame: 65
[    777.0] L Dm_Npc_Goron_Darunia_Adult[0] - EventTriggerStartFadeOut (#13, concurrent=1)
[    787.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    787.0] L Dm_Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#11, concurrent=0)
[    787.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#40, concurrent=0)
[    787.0] L Player_Event[0] - EventPlayASForTimeline (#46, concurrent=0)
[    787.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
[    787.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#63, concurrent=1)
[    787.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
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
[    787.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 242.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    787.0] E Player_Event[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 242.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    787.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
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
[    927.0] L Obj_InsideGanonCastle_SageRoomTube_A_03 - EventPlayASForTimeline (#27, concurrent=0)
[    927.0] E Obj_InsideGanonCastle_SageRoomTube_A_03 - EventPlayASForTimeline (#28, concurrent=0)
               duration: 102.0
               ASName: 'Off'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1029.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[   1029.0] L Obj_InsideGanonCastle_SageRoomTube_A_03 - EventPlayASForTimeline (#28, concurrent=0)
[   1029.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#41, concurrent=0)
[   1029.0] L Player_Event[0] - EventPlayASForTimeline (#47, concurrent=0)
[   1029.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
[   1029.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
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
[   1029.0] E Obj_InsideGanonCastle_SageRoomTube_A_03 - EventPlayASForTimeline (#29, concurrent=0)
               duration: 786.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1029.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 47.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1029.0] E Player_Event[0] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 47.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1029.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
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
[   1029.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#64, concurrent=1)
               duration: 47.0
               Near: 0.10000000149011612
[   1067.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#31, concurrent=0)
               duration: 9.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1076.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   1076.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#31, concurrent=0)
[   1076.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#42, concurrent=0)
[   1076.0] L Player_Event[0] - EventPlayASForTimeline (#48, concurrent=0)
[   1076.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
[   1076.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#64, concurrent=1)
[   1076.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
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
[   1076.0] E UISystemActor[0] - EventEventFadeInForTimeline (#32, concurrent=0)
               duration: 41.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[   1076.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
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
[   1076.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#65, concurrent=1)
               duration: 96.0
               Near: 0.10000000149011612
[   1117.0] L UISystemActor[0] - EventEventFadeInForTimeline (#32, concurrent=0)
[   1157.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#33, concurrent=0)
               duration: 15.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1172.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   1172.0] L Obj_InsideGanonCastle_SageSymbol_A_03[MainRoom] - EventPlayASForTimeline (#21, concurrent=0)
[   1172.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#33, concurrent=0)
[   1172.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
[   1172.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#65, concurrent=1)
[   1172.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
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
[   1172.0] E Obj_InsideGanonCastle_SageSymbol_A_03[MainRoom] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 567.0
               ASName: 'On'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1172.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#34, concurrent=0)
               duration: 20.0
               Color: 0
               IsNoPlayAnime: true
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1172.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
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
[   1192.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#34, concurrent=0)
[   1192.0] E UISystemActor[0] - EventEventFadeInForTimeline (#35, concurrent=0)
               duration: 45.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[   1222.0] L Obj_InsideGanonCastle_LobbyTube_A_03 - EventPlayASForTimeline (#24, concurrent=0)
[   1222.0] E Obj_InsideGanonCastle_LobbyTube_A_03 - EventPlayASForTimeline (#25, concurrent=0)
               duration: 517.0
               ASName: 'Off'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1237.0] L UISystemActor[0] - EventEventFadeInForTimeline (#35, concurrent=0)
[   1318.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1318.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
[   1318.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
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
[   1318.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 165.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1318.0] E Player_Event[0] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 165.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1318.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
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
[   1318.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
               duration: 165.0
               Near: 0.10000000149011612
[   1483.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   1483.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#43, concurrent=0)
[   1483.0] L Player_Event[0] - EventPlayASForTimeline (#49, concurrent=0)
[   1483.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
[   1483.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
[   1483.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
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
[   1483.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 332.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1483.0] E Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 332.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1483.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
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
[   1483.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#67, concurrent=1)
               duration: 272.0
               Near: 0.10000000149011612
[   1595.0] L Obj_InsideGanonCastle_Fire_C_01[MainRoom01] - EventDoNothing (#17, concurrent=0)
[   1595.0] L Obj_InsideGanonCastle_Fire_C_01[MainRoom00] - EventDoNothing (#19, concurrent=0)
[   1595.0] E Obj_InsideGanonCastle_Fire_C_01[MainRoom01] - EventGoOffstageForUser (#18, concurrent=0)
               duration: 220.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1595.0] E Obj_InsideGanonCastle_Fire_C_01[MainRoom00] - EventGoOffstageForUser (#20, concurrent=0)
               duration: 220.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1739.0] L Obj_InsideGanonCastle_SageSymbol_A_03[MainRoom] - EventPlayASForTimeline (#22, concurrent=0)
[   1739.0] L Obj_InsideGanonCastle_LobbyTube_A_03 - EventPlayASForTimeline (#25, concurrent=0)
[   1739.0] E Obj_InsideGanonCastle_SageSymbol_A_03[MainRoom] - EventPlayASForTimeline (#23, concurrent=0)
               duration: 76.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1739.0] E Obj_InsideGanonCastle_LobbyTube_A_03 - EventPlayASForTimeline (#26, concurrent=0)
               duration: 76.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1753.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#36, concurrent=0)
               duration: 62.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1755.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#67, concurrent=1)
[   1814.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#52, concurrent=1)
               duration: 1.0
[   1815.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   1815.0] L Dm_Locator[0] - EventDoNothing (#16, concurrent=0)
[   1815.0] L Obj_InsideGanonCastle_Fire_C_01[MainRoom01] - EventGoOffstageForUser (#18, concurrent=0)
[   1815.0] L Obj_InsideGanonCastle_Fire_C_01[MainRoom00] - EventGoOffstageForUser (#20, concurrent=0)
[   1815.0] L Obj_InsideGanonCastle_SageSymbol_A_03[MainRoom] - EventPlayASForTimeline (#23, concurrent=0)
[   1815.0] L Obj_InsideGanonCastle_LobbyTube_A_03 - EventPlayASForTimeline (#26, concurrent=0)
[   1815.0] L Obj_InsideGanonCastle_SageRoomTube_A_03 - EventPlayASForTimeline (#29, concurrent=0)
[   1815.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#36, concurrent=0)
[   1815.0] L Npc_Navi - EventGoOffstageForUser (#38, concurrent=0)
[   1815.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#44, concurrent=0)
[   1815.0] L Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
[   1815.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#52, concurrent=1)
[   1815.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
