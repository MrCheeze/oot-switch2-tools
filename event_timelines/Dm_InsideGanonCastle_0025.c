-------- Event timeline: Dm_InsideGanonCastle_0025 --------
actors: 14
clips: 67
oneshots: 0
cuts: 9
duration: 1658.0
subtimelines: ['Dm_InsideGanonCastle_0025_Effect', 'Dm_InsideGanonCastle_0025_Env']
params: (none)

===== Cuts =====

Cut: cut03
start time: 0.0
x4: 0
params: (none)

Cut: cut04
start time: 240.0
x4: 0
params: (none)

Cut: cut05
start time: 510.0
x4: 0
params: (none)

Cut: cut06
start time: 630.0
x4: 0
params: (none)

Cut: cut07
start time: 872.0
x4: 0
params: (none)

Cut: cut08
start time: 919.0
x4: 0
params: (none)

Cut: cut09
start time: 1015.0
x4: 0
params: (none)

Cut: cut10
start time: 1161.0
x4: 0
params: (none)

Cut: cut11
start time: 1326.0
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

Actor: VoicePlayActor[0]
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
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_Fire_B_01[MainRoom01]
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 11.098999977111816
- 7.434999942779541
- 7.267000198364258
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_Fire_B_01[MainRoom00]
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 18.135000228881836
- 7.515999794006348
- 3.2039999961853027
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_SageSymbol_A_02[MainRoom]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 14.800000190734863
- 113.18000030517578
- 5.570000171661377
Rotation:
- -180.0
- -30.0
- -180.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_LobbyTube_A_02
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

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_SageRoomTube_A_02
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 45.15999984741211
- 102.9000015258789
- 58.130001068115234
Rotation:
- -180.0
- -30.0
- -180.0
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
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0025/Dm_InsideGanonCastle_0025_Npc_Navi/workspace.pp__ModelProject.gyml

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
EventMemberCreateMethod: 2
ExceptionalBindType: 4
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0025/Dm_InsideGanonCastle_0025_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Kokiri_Saria_Adult[0]
concurrent clips: 4
actions: ['EventPlayASForTimeline', 'EventTriggerStartFadeOut', 'EventTriggerChangeModelAlphaDrawTiming', 'EventTriggerSetModelAlpha', 'EventTriggerStartFadeIn']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0025/Dm_InsideGanonCastle_0025_Npc_Kokiri_WC_Saria/workspace.pp__ModelProject.gyml

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
[      0.0] E Dm_Locator[0] - EventDoNothing (#10, concurrent=0)
               duration: 1658.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_Fire_B_01[MainRoom01] - EventDoNothing (#11, concurrent=0)
               duration: 1437.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_Fire_B_01[MainRoom00] - EventDoNothing (#13, concurrent=0)
               duration: 1437.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_SageSymbol_A_02[MainRoom] - EventPlayASForTimeline (#15, concurrent=0)
               duration: 1015.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#21, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_SageRoomTube_A_02 - EventPlayASForTimeline (#28, concurrent=0)
               duration: 750.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#31, concurrent=0)
               duration: 1658.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#32, concurrent=0)
               duration: 240.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 240.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#44, concurrent=1)
               duration: 100.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#46, concurrent=2)
               duration: 100.0
[      0.0] E Npc_Kokiri_Saria_Adult[0] - EventTriggerChangeModelAlphaDrawTiming (#52, concurrent=2)
               duration: 1.0
               IsPostEffect: true
               IsPreEffect: false
[      0.0] E Npc_Kokiri_Saria_Adult[0] - EventTriggerSetModelAlpha (#53, concurrent=3)
               duration: 1.0
               Alpha: 0.5
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
[      1.0] L Npc_Kokiri_Saria_Adult[0] - EventTriggerChangeModelAlphaDrawTiming (#52, concurrent=2)
[      1.0] L Npc_Kokiri_Saria_Adult[0] - EventTriggerSetModelAlpha (#53, concurrent=3)
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#21, concurrent=0)
[     60.0] E Npc_Kokiri_Saria_Adult[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 180.0
               ASName: C03-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     60.0] E Npc_Kokiri_Saria_Adult[0] - EventTriggerStartFadeIn (#50, concurrent=1)
               duration: 120.0
               FadeFrame: 120
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#44, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#46, concurrent=2)
[    180.0] L Npc_Kokiri_Saria_Adult[0] - EventTriggerStartFadeIn (#50, concurrent=1)
[    218.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 274.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0025:Dm_InsideGanonCastle_0025_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Adult
[    240.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#0, concurrent=0)
[    240.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#32, concurrent=0)
[    240.0] L Player_Event[0] - EventPlayASForTimeline (#38, concurrent=0)
[    240.0] L Npc_Kokiri_Saria_Adult[0] - EventPlayASForTimeline (#47, concurrent=0)
[    240.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
[    240.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
               duration: 270.0
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
[    240.0] E Npc_Kokiri_Saria_Adult[0] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 270.0
               ASName: C04-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    240.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
               duration: 270.0
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
[    289.0] E Obj_InsideGanonCastle_LobbyTube_A_02 - EventPlayASForTimeline (#18, concurrent=0)
               duration: 776.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    492.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[    510.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
[    510.0] L Npc_Kokiri_Saria_Adult[0] - EventPlayASForTimeline (#48, concurrent=0)
[    510.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
[    510.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
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
[    510.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 120.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    510.0] E Player_Event[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 120.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    510.0] E Npc_Kokiri_Saria_Adult[0] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 120.0
               ASName: C05-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    510.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
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
[    555.0] E Npc_Kokiri_Saria_Adult[0] - EventTriggerStartFadeOut (#51, concurrent=1)
               duration: 65.0
               FadeFrame: 65
[    620.0] L Npc_Kokiri_Saria_Adult[0] - EventTriggerStartFadeOut (#51, concurrent=1)
[    630.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    630.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#33, concurrent=0)
[    630.0] L Player_Event[0] - EventPlayASForTimeline (#39, concurrent=0)
[    630.0] L Npc_Kokiri_Saria_Adult[0] - EventPlayASForTimeline (#49, concurrent=0)
[    630.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
[    630.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
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
[    630.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 242.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    630.0] E Player_Event[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 242.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    630.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
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
[    750.0] L Obj_InsideGanonCastle_SageRoomTube_A_02 - EventPlayASForTimeline (#28, concurrent=0)
[    750.0] E Obj_InsideGanonCastle_SageRoomTube_A_02 - EventPlayASForTimeline (#29, concurrent=0)
               duration: 122.0
               ASName: 'Off'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    872.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    872.0] L Obj_InsideGanonCastle_SageRoomTube_A_02 - EventPlayASForTimeline (#29, concurrent=0)
[    872.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#34, concurrent=0)
[    872.0] L Player_Event[0] - EventPlayASForTimeline (#40, concurrent=0)
[    872.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
[    872.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
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
[    872.0] E Obj_InsideGanonCastle_SageRoomTube_A_02 - EventPlayASForTimeline (#30, concurrent=0)
               duration: 786.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    872.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 47.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    872.0] E Player_Event[0] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 47.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    872.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
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
[    872.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#63, concurrent=1)
               duration: 47.0
               Near: 0.10000000149011612
[    910.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#22, concurrent=0)
               duration: 9.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[    919.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    919.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#22, concurrent=0)
[    919.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
[    919.0] L Player_Event[0] - EventPlayASForTimeline (#41, concurrent=0)
[    919.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
[    919.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#63, concurrent=1)
[    919.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
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
[    919.0] E UISystemActor[0] - EventEventFadeInForTimeline (#23, concurrent=0)
               duration: 41.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[    919.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
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
[    919.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#64, concurrent=1)
               duration: 96.0
               Near: 0.10000000149011612
[    960.0] L UISystemActor[0] - EventEventFadeInForTimeline (#23, concurrent=0)
[   1000.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#24, concurrent=0)
               duration: 15.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1015.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   1015.0] L Obj_InsideGanonCastle_SageSymbol_A_02[MainRoom] - EventPlayASForTimeline (#15, concurrent=0)
[   1015.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#24, concurrent=0)
[   1015.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
[   1015.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#64, concurrent=1)
[   1015.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
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
[   1015.0] E Obj_InsideGanonCastle_SageSymbol_A_02[MainRoom] - EventPlayASForTimeline (#16, concurrent=0)
               duration: 567.0
               ASName: 'On'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1015.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#25, concurrent=0)
               duration: 20.0
               Color: 0
               IsNoPlayAnime: true
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1015.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
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
[   1035.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#25, concurrent=0)
[   1035.0] E UISystemActor[0] - EventEventFadeInForTimeline (#26, concurrent=0)
               duration: 40.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[   1065.0] L Obj_InsideGanonCastle_LobbyTube_A_02 - EventPlayASForTimeline (#18, concurrent=0)
[   1065.0] E Obj_InsideGanonCastle_LobbyTube_A_02 - EventPlayASForTimeline (#19, concurrent=0)
               duration: 517.0
               ASName: 'Off'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1075.0] L UISystemActor[0] - EventEventFadeInForTimeline (#26, concurrent=0)
[   1161.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1161.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
[   1161.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
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
[   1161.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 165.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1161.0] E Player_Event[0] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 165.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1161.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
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
[   1161.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#65, concurrent=1)
               duration: 165.0
               Near: 0.10000000149011612
[   1326.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   1326.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
[   1326.0] L Player_Event[0] - EventPlayASForTimeline (#42, concurrent=0)
[   1326.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
[   1326.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#65, concurrent=1)
[   1326.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
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
[   1326.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 332.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1326.0] E Player_Event[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 332.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1326.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
               duration: 331.0
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
[   1326.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
               duration: 272.0
               Near: 0.10000000149011612
[   1437.0] L Obj_InsideGanonCastle_Fire_B_01[MainRoom01] - EventDoNothing (#11, concurrent=0)
[   1437.0] L Obj_InsideGanonCastle_Fire_B_01[MainRoom00] - EventDoNothing (#13, concurrent=0)
[   1437.0] E Obj_InsideGanonCastle_Fire_B_01[MainRoom01] - EventGoOffstageForUser (#12, concurrent=0)
               duration: 221.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1437.0] E Obj_InsideGanonCastle_Fire_B_01[MainRoom00] - EventGoOffstageForUser (#14, concurrent=0)
               duration: 221.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1582.0] L Obj_InsideGanonCastle_SageSymbol_A_02[MainRoom] - EventPlayASForTimeline (#16, concurrent=0)
[   1582.0] L Obj_InsideGanonCastle_LobbyTube_A_02 - EventPlayASForTimeline (#19, concurrent=0)
[   1582.0] E Obj_InsideGanonCastle_SageSymbol_A_02[MainRoom] - EventPlayASForTimeline (#17, concurrent=0)
               duration: 76.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1582.0] E Obj_InsideGanonCastle_LobbyTube_A_02 - EventPlayASForTimeline (#20, concurrent=0)
               duration: 76.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1598.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
[   1598.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#27, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1657.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
[   1657.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#45, concurrent=1)
               duration: 1.0
[   1658.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   1658.0] L Dm_Locator[0] - EventDoNothing (#10, concurrent=0)
[   1658.0] L Obj_InsideGanonCastle_Fire_B_01[MainRoom01] - EventGoOffstageForUser (#12, concurrent=0)
[   1658.0] L Obj_InsideGanonCastle_Fire_B_01[MainRoom00] - EventGoOffstageForUser (#14, concurrent=0)
[   1658.0] L Obj_InsideGanonCastle_SageSymbol_A_02[MainRoom] - EventPlayASForTimeline (#17, concurrent=0)
[   1658.0] L Obj_InsideGanonCastle_LobbyTube_A_02 - EventPlayASForTimeline (#20, concurrent=0)
[   1658.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#27, concurrent=0)
[   1658.0] L Obj_InsideGanonCastle_SageRoomTube_A_02 - EventPlayASForTimeline (#30, concurrent=0)
[   1658.0] L Npc_Navi - EventGoOffstageForUser (#31, concurrent=0)
[   1658.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#37, concurrent=0)
[   1658.0] L Player_Event[0] - EventPlayASForTimeline (#43, concurrent=0)
[   1658.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#45, concurrent=1)
