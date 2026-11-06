-------- Event timeline: Dm_InsideGanonCastle_0015 --------
actors: 14
clips: 68
oneshots: 0
cuts: 9
duration: 1693.0
subtimelines: ['Dm_InsideGanonCastle_0015_Effect', 'Dm_InsideGanonCastle_0015_Env']
params: (none)

===== Cuts =====

Cut: cut3
start time: 0.0
x4: 0
params: (none)

Cut: cut04
start time: 240.0
x4: 0
params: (none)

Cut: cut05
start time: 545.0
x4: 0
params: (none)

Cut: cut06
start time: 665.0
x4: 0
params: (none)

Cut: cut07
start time: 907.0
x4: 0
params: (none)

Cut: cut08
start time: 954.0
x4: 0
params: (none)

Cut: cut09
start time: 1050.0
x4: 0
params: (none)

Cut: cut10
start time: 1196.0
x4: 0
params: (none)

Cut: cut11
start time: 1361.0
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

Actor: Dm_Npc_Hylia_Impa_Adult[0]
concurrent clips: 4
actions: ['EventPlayASForTimeline', 'EventTriggerStartFadeIn', 'EventTriggerStartFadeOut', 'EventTriggerChangeModelAlphaDrawTiming', 'EventTriggerSetModelAlpha']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0015/Dm_InsideGanonCastle_0015_Npc_Hylia_WU_Impa/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_Fire_E_01[MainRoom01]
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 18.15399932861328
- 7.434999942779541
- -45.25
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_Fire_E_01[MainRoom00]
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 11.109000205993652
- 7.434999942779541
- -49.284000396728516
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_SageSymbol_A_05[MainRoom]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 14.800000190734863
- 113.18000030517578
- -47.56999969482422
Rotation:
- 0.0
- -30.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_LobbyTube_A_05
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

Actor: Obj_InsideGanonCastle_SageRoomTube_A_05
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 63.31999969482422
- 105.4000015258789
- -129.8300018310547
Rotation:
- 0.0
- -30.0
- 0.0
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
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
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

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0015/Dm_InsideGanonCastle_0015_Npc_Navi/workspace.pp__ModelProject.gyml

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

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerPlayerRestoreBootsChange', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerPlayerTemporaryBootsChange']
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
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0015/Dm_InsideGanonCastle_0015_Player_Adult/workspace.pp__ModelProject.gyml


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
[      0.0] E Dm_Npc_Hylia_Impa_Adult[0] - EventTriggerChangeModelAlphaDrawTiming (#14, concurrent=2)
               duration: 1.0
               IsPostEffect: true
               IsPreEffect: false
[      0.0] E Dm_Npc_Hylia_Impa_Adult[0] - EventTriggerSetModelAlpha (#15, concurrent=3)
               duration: 1.0
               Alpha: 0.5
[      0.0] E Dm_Locator[0] - EventDoNothing (#16, concurrent=0)
               duration: 1693.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_Fire_E_01[MainRoom01] - EventDoNothing (#17, concurrent=0)
               duration: 1473.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_Fire_E_01[MainRoom00] - EventDoNothing (#19, concurrent=0)
               duration: 1473.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_SageSymbol_A_05[MainRoom] - EventPlayASForTimeline (#21, concurrent=0)
               duration: 1050.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Obj_InsideGanonCastle_SageRoomTube_A_05 - EventPlayASForTimeline (#27, concurrent=0)
               duration: 787.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
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
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#45, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 240.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#58, concurrent=0)
               duration: 1693.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
               duration: 240.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#65, concurrent=1)
               duration: 100.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#66, concurrent=2)
               duration: 240.0
[      1.0] L Dm_Npc_Hylia_Impa_Adult[0] - EventTriggerChangeModelAlphaDrawTiming (#14, concurrent=2)
[      1.0] L Dm_Npc_Hylia_Impa_Adult[0] - EventTriggerSetModelAlpha (#15, concurrent=3)
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#45, concurrent=0)
[     60.0] E Dm_Npc_Hylia_Impa_Adult[0] - EventPlayASForTimeline (#9, concurrent=0)
               duration: 180.0
               ASName: C03-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     60.0] E Dm_Npc_Hylia_Impa_Adult[0] - EventTriggerStartFadeIn (#12, concurrent=1)
               duration: 120.0
               FadeFrame: 120
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#65, concurrent=1)
[    180.0] L Dm_Npc_Hylia_Impa_Adult[0] - EventTriggerStartFadeIn (#12, concurrent=1)
[    211.0] E VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
               duration: 328.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0015:Dm_InsideGanonCastle_0015_Text_000_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Impa_Adult
[    240.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#0, concurrent=0)
[    240.0] L Dm_Npc_Hylia_Impa_Adult[0] - EventPlayASForTimeline (#9, concurrent=0)
[    240.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
[    240.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#52, concurrent=0)
[    240.0] L Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
[    240.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#66, concurrent=2)
[    240.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
               duration: 305.0
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
[    240.0] E Dm_Npc_Hylia_Impa_Adult[0] - EventPlayASForTimeline (#10, concurrent=0)
               duration: 305.0
               ASName: C04-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    240.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
               duration: 305.0
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
[    240.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#40, concurrent=1)
               duration: 305.0
               Near: 0.10000000149011612
[    389.0] E Obj_InsideGanonCastle_LobbyTube_A_05 - EventPlayASForTimeline (#24, concurrent=0)
               duration: 711.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    539.0] L VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
[    545.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
[    545.0] L Dm_Npc_Hylia_Impa_Adult[0] - EventPlayASForTimeline (#10, concurrent=0)
[    545.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
[    545.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#40, concurrent=1)
[    545.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
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
[    545.0] E Dm_Npc_Hylia_Impa_Adult[0] - EventPlayASForTimeline (#11, concurrent=0)
               duration: 120.0
               ASName: C05-Npc_Hylia_WU_Impa-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    545.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
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
[    545.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#41, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[    545.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 120.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    545.0] E Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
               duration: 120.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    590.0] E Dm_Npc_Hylia_Impa_Adult[0] - EventTriggerStartFadeOut (#13, concurrent=1)
               duration: 65.0
               FadeFrame: 65
[    655.0] L Dm_Npc_Hylia_Impa_Adult[0] - EventTriggerStartFadeOut (#13, concurrent=1)
[    665.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    665.0] L Dm_Npc_Hylia_Impa_Adult[0] - EventPlayASForTimeline (#11, concurrent=0)
[    665.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
[    665.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#41, concurrent=1)
[    665.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#53, concurrent=0)
[    665.0] L Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
[    665.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
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
[    665.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
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
[    665.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#54, concurrent=0)
               duration: 242.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    665.0] E Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
               duration: 242.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    787.0] L Obj_InsideGanonCastle_SageRoomTube_A_05 - EventPlayASForTimeline (#27, concurrent=0)
[    787.0] E Obj_InsideGanonCastle_SageRoomTube_A_05 - EventPlayASForTimeline (#28, concurrent=0)
               duration: 120.0
               ASName: 'Off'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    907.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    907.0] L Obj_InsideGanonCastle_SageRoomTube_A_05 - EventPlayASForTimeline (#28, concurrent=0)
[    907.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
[    907.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#54, concurrent=0)
[    907.0] L Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
[    907.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
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
[    907.0] E Obj_InsideGanonCastle_SageRoomTube_A_05 - EventPlayASForTimeline (#29, concurrent=0)
               duration: 786.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    907.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
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
[    907.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#42, concurrent=1)
               duration: 47.0
               Near: 0.10000000149011612
[    907.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#55, concurrent=0)
               duration: 47.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    907.0] E Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
               duration: 47.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    945.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#46, concurrent=0)
               duration: 9.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[    954.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    954.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
[    954.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#42, concurrent=1)
[    954.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#46, concurrent=0)
[    954.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#55, concurrent=0)
[    954.0] L Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
[    954.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
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
[    954.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
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
[    954.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#43, concurrent=1)
               duration: 96.0
               Near: 0.10000000149011612
[    954.0] E UISystemActor[0] - EventEventFadeInForTimeline (#47, concurrent=0)
               duration: 41.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[    995.0] L UISystemActor[0] - EventEventFadeInForTimeline (#47, concurrent=0)
[   1035.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#48, concurrent=0)
               duration: 15.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1050.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   1050.0] L Obj_InsideGanonCastle_SageSymbol_A_05[MainRoom] - EventPlayASForTimeline (#21, concurrent=0)
[   1050.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
[   1050.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#43, concurrent=1)
[   1050.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#48, concurrent=0)
[   1050.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
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
[   1050.0] E Obj_InsideGanonCastle_SageSymbol_A_05[MainRoom] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 567.0
               ASName: 'On'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1050.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
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
[   1050.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#49, concurrent=0)
               duration: 20.0
               Color: 0
               IsNoPlayAnime: true
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1070.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#49, concurrent=0)
[   1070.0] E UISystemActor[0] - EventEventFadeInForTimeline (#50, concurrent=0)
               duration: 45.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[   1100.0] L Obj_InsideGanonCastle_LobbyTube_A_05 - EventPlayASForTimeline (#24, concurrent=0)
[   1100.0] E Obj_InsideGanonCastle_LobbyTube_A_05 - EventPlayASForTimeline (#25, concurrent=0)
               duration: 517.0
               ASName: 'Off'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1115.0] L UISystemActor[0] - EventEventFadeInForTimeline (#50, concurrent=0)
[   1196.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1196.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
[   1196.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
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
[   1196.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
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
[   1196.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#44, concurrent=1)
               duration: 165.0
               Near: 0.10000000149011612
[   1196.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#56, concurrent=0)
               duration: 165.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1196.0] E Player_Event[0] - EventPlayASForTimeline (#63, concurrent=0)
               duration: 165.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1361.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   1361.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
[   1361.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#44, concurrent=1)
[   1361.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#56, concurrent=0)
[   1361.0] L Player_Event[0] - EventPlayASForTimeline (#63, concurrent=0)
[   1361.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
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
[   1361.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
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
[   1361.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#57, concurrent=0)
               duration: 332.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1361.0] E Player_Event[0] - EventPlayASForTimeline (#64, concurrent=0)
               duration: 332.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1473.0] L Obj_InsideGanonCastle_Fire_E_01[MainRoom01] - EventDoNothing (#17, concurrent=0)
[   1473.0] L Obj_InsideGanonCastle_Fire_E_01[MainRoom00] - EventDoNothing (#19, concurrent=0)
[   1473.0] E Obj_InsideGanonCastle_Fire_E_01[MainRoom01] - EventGoOffstageForUser (#18, concurrent=0)
               duration: 220.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1473.0] E Obj_InsideGanonCastle_Fire_E_01[MainRoom00] - EventGoOffstageForUser (#20, concurrent=0)
               duration: 220.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1617.0] L Obj_InsideGanonCastle_SageSymbol_A_05[MainRoom] - EventPlayASForTimeline (#22, concurrent=0)
[   1617.0] L Obj_InsideGanonCastle_LobbyTube_A_05 - EventPlayASForTimeline (#25, concurrent=0)
[   1617.0] E Obj_InsideGanonCastle_SageSymbol_A_05[MainRoom] - EventPlayASForTimeline (#23, concurrent=0)
               duration: 76.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1617.0] E Obj_InsideGanonCastle_LobbyTube_A_05 - EventPlayASForTimeline (#26, concurrent=0)
               duration: 76.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1633.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#51, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1692.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#67, concurrent=2)
               duration: 1.0
[   1693.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   1693.0] L Dm_Locator[0] - EventDoNothing (#16, concurrent=0)
[   1693.0] L Obj_InsideGanonCastle_Fire_E_01[MainRoom01] - EventGoOffstageForUser (#18, concurrent=0)
[   1693.0] L Obj_InsideGanonCastle_Fire_E_01[MainRoom00] - EventGoOffstageForUser (#20, concurrent=0)
[   1693.0] L Obj_InsideGanonCastle_SageSymbol_A_05[MainRoom] - EventPlayASForTimeline (#23, concurrent=0)
[   1693.0] L Obj_InsideGanonCastle_LobbyTube_A_05 - EventPlayASForTimeline (#26, concurrent=0)
[   1693.0] L Obj_InsideGanonCastle_SageRoomTube_A_05 - EventPlayASForTimeline (#29, concurrent=0)
[   1693.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
[   1693.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#51, concurrent=0)
[   1693.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#57, concurrent=0)
[   1693.0] L Npc_Navi[0] - EventGoOffstageForUser (#58, concurrent=0)
[   1693.0] L Player_Event[0] - EventPlayASForTimeline (#64, concurrent=0)
[   1693.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#67, concurrent=2)
