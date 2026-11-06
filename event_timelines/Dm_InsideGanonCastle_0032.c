-------- Event timeline: Dm_InsideGanonCastle_0032 --------
actors: 14
clips: 68
oneshots: 0
cuts: 11
duration: 1818.0
subtimelines: ['Dm_InsideGanonCastle_0032_Effect', 'Dm_InsideGanonCastle_0032_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
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
start time: 670.0
x4: 0
params: (none)

Cut: C06
start time: 790.0
x4: 0
params: (none)

Cut: C07
start time: 1032.0
x4: 0
params: (none)

Cut: C08
start time: 1079.0
x4: 0
params: (none)

Cut: C09
start time: 1175.0
x4: 0
params: (none)

Cut: C10
start time: 1321.0
x4: 0
params: (none)

Cut: C11
start time: 1486.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 0.0
- 0.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_Fire_D_01[MainRoom01]
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 30.049999237060547
- 3.2799999713897705
- -16.940000534057617
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_Fire_D_01[MainRoom00]
concurrent clips: 1
actions: ['EventDoNothing', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 29.985000610351562
- 3.2799999713897705
- -25.059999465942383
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_SageSymbol_A_04[MainRoom]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 30.399999618530273
- 109.12000274658203
- -21.0
Rotation:
- 0.0
- -90.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_InsideGanonCastle_LobbyTube_A_04
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

Actor: Obj_InsideGanonCastle_SageRoomTube_A_04
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 93.30000305175781
- 99.73999786376953
- -21.0
Rotation:
- 0.0
- -90.0
- 0.0
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

Actor: VoicePlayActor[0]
concurrent clips: 1
actions: ['EventStartVoice']
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

Actor: Dm_Npc_Zora_Ruto_Adult_001[0]
concurrent clips: 4
actions: ['EventPlayASForTimeline', 'EventTriggerStartFadeIn', 'EventTriggerChangeModelAlphaDrawTiming', 'EventTriggerSetModelAlpha', 'EventTriggerStartFadeOut']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_InsideGanonCastle_0032.root.as
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0032/Dm_InsideGanonCastle_0032_Npc_Zora_ZU_Ruto_Adult/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0032/Dm_InsideGanonCastle_0032_Npc_Navi/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0032/Dm_InsideGanonCastle_0032_Player_Adult/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E Dm_Locator[0] - EventDoNothing (#0, concurrent=0)
               duration: 1818.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_Fire_D_01[MainRoom01] - EventDoNothing (#1, concurrent=0)
               duration: 1597.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_Fire_D_01[MainRoom00] - EventDoNothing (#3, concurrent=0)
               duration: 1597.0
               IsWaitEnd: true
[      0.0] E Obj_InsideGanonCastle_SageSymbol_A_04[MainRoom] - EventPlayASForTimeline (#5, concurrent=0)
               duration: 1175.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Obj_InsideGanonCastle_SageRoomTube_A_04 - EventPlayASForTimeline (#11, concurrent=0)
               duration: 932.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
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
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#28, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#36, concurrent=0)
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
[      0.0] E Dm_Npc_Zora_Ruto_Adult_001[0] - EventTriggerChangeModelAlphaDrawTiming (#50, concurrent=2)
               duration: 1.0
               IsPostEffect: false
               IsPreEffect: false
[      0.0] E Dm_Npc_Zora_Ruto_Adult_001[0] - EventTriggerSetModelAlpha (#51, concurrent=3)
               duration: 1.0
               Alpha: 0.5
[      0.0] E Npc_Navi - EventGoOffstageForUser (#52, concurrent=0)
               duration: 1818.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 240.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
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
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#67, concurrent=2)
               duration: 100.0
[      1.0] L Dm_Npc_Zora_Ruto_Adult_001[0] - EventTriggerChangeModelAlphaDrawTiming (#50, concurrent=2)
[      1.0] L Dm_Npc_Zora_Ruto_Adult_001[0] - EventTriggerSetModelAlpha (#51, concurrent=3)
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#28, concurrent=0)
[     60.0] E Dm_Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 180.0
               ASName: AS-C03-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     60.0] E Dm_Npc_Zora_Ruto_Adult_001[0] - EventTriggerStartFadeIn (#48, concurrent=1)
               duration: 120.0
               FadeFrame: 120
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#65, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#67, concurrent=2)
[    180.0] L Dm_Npc_Zora_Ruto_Adult_001[0] - EventTriggerStartFadeIn (#48, concurrent=1)
[    212.0] E VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
               duration: 456.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0032:Dm_InsideGanonCastle_0032_Text_000_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Zora_Ruto_Adult_001
[    240.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
[    240.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#36, concurrent=0)
[    240.0] L Dm_Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#45, concurrent=0)
[    240.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#53, concurrent=0)
[    240.0] L Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
[    240.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
               duration: 430.0
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
[    240.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#37, concurrent=0)
               duration: 430.0
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
[    240.0] E Dm_Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 430.0
               ASName: C04-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    270.0] E Obj_InsideGanonCastle_LobbyTube_A_04 - EventPlayASForTimeline (#8, concurrent=0)
               duration: 955.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    668.0] L VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
[    670.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
[    670.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#37, concurrent=0)
[    670.0] L Dm_Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#46, concurrent=0)
[    670.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
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
[    670.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#23, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[    670.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#38, concurrent=0)
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
[    670.0] E Dm_Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 120.0
               ASName: AS-C05-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    670.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#54, concurrent=0)
               duration: 120.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    670.0] E Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
               duration: 120.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    715.0] E Dm_Npc_Zora_Ruto_Adult_001[0] - EventTriggerStartFadeOut (#49, concurrent=1)
               duration: 65.0
               FadeFrame: 65
[    780.0] L Dm_Npc_Zora_Ruto_Adult_001[0] - EventTriggerStartFadeOut (#49, concurrent=1)
[    790.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
[    790.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#23, concurrent=1)
[    790.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#38, concurrent=0)
[    790.0] L Dm_Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#47, concurrent=0)
[    790.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#54, concurrent=0)
[    790.0] L Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
[    790.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
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
[    790.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#39, concurrent=0)
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
[    790.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#55, concurrent=0)
               duration: 242.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    790.0] E Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
               duration: 242.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    932.0] L Obj_InsideGanonCastle_SageRoomTube_A_04 - EventPlayASForTimeline (#11, concurrent=0)
[    932.0] E Obj_InsideGanonCastle_SageRoomTube_A_04 - EventPlayASForTimeline (#12, concurrent=0)
               duration: 100.0
               ASName: 'Off'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1032.0] L Obj_InsideGanonCastle_SageRoomTube_A_04 - EventPlayASForTimeline (#12, concurrent=0)
[   1032.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
[   1032.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#39, concurrent=0)
[   1032.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#55, concurrent=0)
[   1032.0] L Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
[   1032.0] E Obj_InsideGanonCastle_SageRoomTube_A_04 - EventPlayASForTimeline (#13, concurrent=0)
               duration: 786.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1032.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
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
[   1032.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#24, concurrent=1)
               duration: 47.0
               Near: 0.10000000149011612
[   1032.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#40, concurrent=0)
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
[   1032.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#56, concurrent=0)
               duration: 47.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1032.0] E Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
               duration: 47.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1070.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#29, concurrent=0)
               duration: 9.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1079.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
[   1079.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#24, concurrent=1)
[   1079.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#29, concurrent=0)
[   1079.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#40, concurrent=0)
[   1079.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#56, concurrent=0)
[   1079.0] L Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
[   1079.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#19, concurrent=0)
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
[   1079.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#25, concurrent=1)
               duration: 96.0
               Near: 0.10000000149011612
[   1079.0] E UISystemActor[0] - EventEventFadeInForTimeline (#30, concurrent=0)
               duration: 41.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[   1079.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#41, concurrent=0)
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
[   1120.0] L UISystemActor[0] - EventEventFadeInForTimeline (#30, concurrent=0)
[   1160.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#31, concurrent=0)
               duration: 15.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1175.0] L Obj_InsideGanonCastle_SageSymbol_A_04[MainRoom] - EventPlayASForTimeline (#5, concurrent=0)
[   1175.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#19, concurrent=0)
[   1175.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#25, concurrent=1)
[   1175.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#31, concurrent=0)
[   1175.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#41, concurrent=0)
[   1175.0] E Obj_InsideGanonCastle_SageSymbol_A_04[MainRoom] - EventPlayASForTimeline (#6, concurrent=0)
               duration: 567.0
               ASName: 'On'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1175.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
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
[   1175.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#32, concurrent=0)
               duration: 1.0
               Color: 0
               IsNoPlayAnime: true
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1175.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#42, concurrent=0)
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
[   1176.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#32, concurrent=0)
[   1195.0] E UISystemActor[0] - EventEventFadeInForTimeline (#33, concurrent=0)
               duration: 45.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[   1225.0] L Obj_InsideGanonCastle_LobbyTube_A_04 - EventPlayASForTimeline (#8, concurrent=0)
[   1225.0] E Obj_InsideGanonCastle_LobbyTube_A_04 - EventPlayASForTimeline (#9, concurrent=0)
               duration: 517.0
               ASName: 'Off'
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1240.0] L UISystemActor[0] - EventEventFadeInForTimeline (#33, concurrent=0)
[   1321.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
[   1321.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#42, concurrent=0)
[   1321.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
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
[   1321.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#26, concurrent=1)
               duration: 165.0
               Near: 0.10000000149011612
[   1321.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#43, concurrent=0)
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
[   1321.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#57, concurrent=0)
               duration: 165.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1321.0] E Player_Event[0] - EventPlayASForTimeline (#63, concurrent=0)
               duration: 165.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1486.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
[   1486.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#26, concurrent=1)
[   1486.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#43, concurrent=0)
[   1486.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#57, concurrent=0)
[   1486.0] L Player_Event[0] - EventPlayASForTimeline (#63, concurrent=0)
[   1486.0] E EventCamera[1] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
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
[   1486.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#44, concurrent=0)
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
[   1486.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#58, concurrent=0)
               duration: 332.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1486.0] E Player_Event[0] - EventPlayASForTimeline (#64, concurrent=0)
               duration: 332.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1487.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#27, concurrent=1)
               duration: 331.0
               Near: 0.10000000149011612
[   1597.0] L Obj_InsideGanonCastle_Fire_D_01[MainRoom01] - EventDoNothing (#1, concurrent=0)
[   1597.0] L Obj_InsideGanonCastle_Fire_D_01[MainRoom00] - EventDoNothing (#3, concurrent=0)
[   1597.0] E Obj_InsideGanonCastle_Fire_D_01[MainRoom01] - EventGoOffstageForUser (#2, concurrent=0)
               duration: 221.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1597.0] E Obj_InsideGanonCastle_Fire_D_01[MainRoom00] - EventGoOffstageForUser (#4, concurrent=0)
               duration: 221.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1742.0] L Obj_InsideGanonCastle_SageSymbol_A_04[MainRoom] - EventPlayASForTimeline (#6, concurrent=0)
[   1742.0] L Obj_InsideGanonCastle_LobbyTube_A_04 - EventPlayASForTimeline (#9, concurrent=0)
[   1742.0] E Obj_InsideGanonCastle_SageSymbol_A_04[MainRoom] - EventPlayASForTimeline (#7, concurrent=0)
               duration: 76.0
               ASName: OnKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1742.0] E Obj_InsideGanonCastle_LobbyTube_A_04 - EventPlayASForTimeline (#10, concurrent=0)
               duration: 76.0
               ASName: OffKeep
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1757.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#34, concurrent=0)
               duration: 61.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1817.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#66, concurrent=1)
               duration: 1.0
[   1818.0] L Dm_Locator[0] - EventDoNothing (#0, concurrent=0)
[   1818.0] L Obj_InsideGanonCastle_Fire_D_01[MainRoom01] - EventGoOffstageForUser (#2, concurrent=0)
[   1818.0] L Obj_InsideGanonCastle_Fire_D_01[MainRoom00] - EventGoOffstageForUser (#4, concurrent=0)
[   1818.0] L Obj_InsideGanonCastle_SageSymbol_A_04[MainRoom] - EventPlayASForTimeline (#7, concurrent=0)
[   1818.0] L Obj_InsideGanonCastle_LobbyTube_A_04 - EventPlayASForTimeline (#10, concurrent=0)
[   1818.0] L Obj_InsideGanonCastle_SageRoomTube_A_04 - EventPlayASForTimeline (#13, concurrent=0)
[   1818.0] L EventCamera[1] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
[   1818.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#27, concurrent=1)
[   1818.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#34, concurrent=0)
[   1818.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#44, concurrent=0)
[   1818.0] L Npc_Navi - EventGoOffstageForUser (#52, concurrent=0)
[   1818.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#58, concurrent=0)
[   1818.0] L Player_Event[0] - EventPlayASForTimeline (#64, concurrent=0)
[   1818.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#66, concurrent=1)
