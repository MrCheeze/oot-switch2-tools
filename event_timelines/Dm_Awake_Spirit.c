-------- Event timeline: Dm_Awake_Spirit --------
actors: 9
clips: 113
oneshots: 0
cuts: 16
duration: 5870.0
subtimelines: ['Dm_Awake_Spirit_Effect', 'Dm_Awake_Spirit_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 210.0
x4: 0
params: (none)

Cut: cut03
start time: 520.0
x4: 0
params: (none)

Cut: cut04
start time: 780.0
x4: 0
params: (none)

Cut: cut05
start time: 1200.0
x4: 0
params: (none)

Cut: cut06
start time: 1780.0
x4: 0
params: (none)

Cut: cut07
start time: 2640.0
x4: 0
params: (none)

Cut: cut08
start time: 3040.0
x4: 0
params: (none)

Cut: cut09
start time: 3440.0
x4: 0
params: (none)

Cut: cut10
start time: 3680.0
x4: 0
params: (none)

Cut: cut11
start time: 3980.0
x4: 0
params: (none)

Cut: cut12
start time: 4150.0
x4: 0
params: (none)

Cut: cut13
start time: 4510.0
x4: 0
params: (none)

Cut: cut14
start time: 4660.0
x4: 0
params: (none)

Cut: cut15
start time: 5040.0
x4: 0
params: (none)

Cut: cut16
start time: 5340.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Spirit/Dm_Awake_Spirit_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: UISystemActor[1]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
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
UseEventModelAnime: ''

Actor: Player_Event[0]
concurrent clips: 4
actions: ['EventPlayASForTimeline', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerSetCharaReflectionCaustics']
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
UseEventModelAnime: Work/Model/Event/Dm_Awake_Spirit/Dm_Awake_Spirit_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Spirit/Dm_Awake_Spirit_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Gerudo_Nabooru_Adult[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerSetCharaReflectionCaustics', 'EventTriggerSetModelLodManual']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Spirit/Dm_Awake_Spirit_Npc_Gerudo_GEU_Nabooru/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_Awake_Spirit/Dm_Awake_Spirit_Npc_Navi/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E Dm_Locator[0] - EventPlayASForTimeline (#0, concurrent=0)
               duration: 210.0
               ASName: C01-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E UISystemActor[1] - EventEventFadeInForTimeline (#4, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 210.0
               EndBluarLevel: 0.0
               EndDistance: 4.400000095367432
               EndFNumber: 12.800000190734863
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 4.400000095367432
               StartFNumber: 12.800000190734863
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
               duration: 210.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#43, concurrent=1)
               duration: 210.0
               Near: 0.10000000149011612
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
               duration: 210.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#69, concurrent=1)
               duration: 210.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#70, concurrent=2)
               duration: 210.0
[      0.0] E Player_Event[0] - EventTriggerSetCharaReflectionCaustics (#71, concurrent=3)
               duration: 210.0
               DampEndHeightRatio: 0.699999988079071
               DampStartHeightRaito: 0.0
               Intensity: 0.20000000298023224
[      0.0] E Npc_Gerudo_Nabooru_Adult[0] - EventTriggerSetCharaReflectionCaustics (#92, concurrent=1)
               duration: 210.0
               DampEndHeightRatio: 0.699999988079071
               DampStartHeightRaito: 0.0
               Intensity: 0.20000000298023224
[      0.0] E Npc_Navi - EventGoOffstageForUser (#112, concurrent=0)
               duration: 5870.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[     60.0] L UISystemActor[1] - EventEventFadeInForTimeline (#4, concurrent=0)
[    210.0] L Dm_Locator[0] - EventPlayASForTimeline (#0, concurrent=0)
[    210.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#6, concurrent=0)
[    210.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
[    210.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#43, concurrent=1)
[    210.0] L Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
[    210.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#69, concurrent=1)
[    210.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#70, concurrent=2)
[    210.0] L Player_Event[0] - EventTriggerSetCharaReflectionCaustics (#71, concurrent=3)
[    210.0] L Npc_Gerudo_Nabooru_Adult[0] - EventTriggerSetCharaReflectionCaustics (#92, concurrent=1)
[    210.0] E Dm_Locator[0] - EventPlayASForTimeline (#1, concurrent=0)
               duration: 310.0
               ASName: C02-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    210.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 310.0
               EndBluarLevel: 0.0
               EndDistance: 2.0
               EndFNumber: 22.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.0
               StartFNumber: 22.0
[    210.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
               duration: 310.0
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
[    210.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#44, concurrent=1)
               duration: 310.0
               Near: 0.10000000149011612
[    210.0] E Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
               duration: 310.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    520.0] L Dm_Locator[0] - EventPlayASForTimeline (#1, concurrent=0)
[    520.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#7, concurrent=0)
[    520.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
[    520.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#44, concurrent=1)
[    520.0] L Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
[    520.0] E Dm_Locator[0] - EventPlayASForTimeline (#2, concurrent=0)
               duration: 680.0
               ASName: C03-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    520.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 260.0
               EndBluarLevel: 1.0
               EndDistance: 5.0
               EndFNumber: 15.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.0
               StartFNumber: 15.5
[    520.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
               duration: 260.0
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
[    520.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#45, concurrent=1)
               duration: 260.0
               Near: 0.10000000149011612
[    520.0] E Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
               duration: 260.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    520.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#72, concurrent=0)
               duration: 260.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    620.0] E VoicePlayActor[0] - EventStartVoice (#95, concurrent=0)
               duration: 271.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[    780.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#8, concurrent=0)
[    780.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
[    780.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#45, concurrent=1)
[    780.0] L Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
[    780.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#72, concurrent=0)
[    780.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 250.0
               EndBluarLevel: 2.0
               EndDistance: 5.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.5
               StartFNumber: 20.0
[    780.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
               duration: 420.0
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
[    780.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#46, concurrent=1)
               duration: 420.0
               Near: 0.10000000149011612
[    780.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#80, concurrent=0)
               duration: 420.0
               ASName: C04-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    780.0] E Npc_Gerudo_Nabooru_Adult[0] - EventTriggerSetModelLodManual (#93, concurrent=2)
               duration: 420.0
               LodLevel: 0
[    891.0] L VoicePlayActor[0] - EventStartVoice (#95, concurrent=0)
[    891.0] E VoicePlayActor[0] - EventStartVoice (#96, concurrent=0)
               duration: 207.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   1030.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#9, concurrent=0)
[   1030.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 100.0
               EndBluarLevel: 2.0
               EndDistance: 2.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.0
               StartFNumber: 20.0
[   1098.0] L VoicePlayActor[0] - EventStartVoice (#96, concurrent=0)
[   1130.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#10, concurrent=0)
[   1130.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 70.0
               EndBluarLevel: 2.0
               EndDistance: 2.4000000953674316
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.5
               StartFNumber: 20.0
[   1200.0] L Dm_Locator[0] - EventPlayASForTimeline (#2, concurrent=0)
[   1200.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#11, concurrent=0)
[   1200.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
[   1200.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#46, concurrent=1)
[   1200.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#80, concurrent=0)
[   1200.0] L Npc_Gerudo_Nabooru_Adult[0] - EventTriggerSetModelLodManual (#93, concurrent=2)
[   1200.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 580.0
               EndBluarLevel: 0.0
               EndDistance: 11.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 11.0
               StartFNumber: 15.0
[   1200.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
               duration: 580.0
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
[   1200.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#47, concurrent=1)
               duration: 580.0
               Near: 0.10000000149011612
[   1200.0] E Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
               duration: 580.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1200.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
               duration: 580.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1200.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#81, concurrent=0)
               duration: 580.0
               ASName: C05-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1200.0] E Npc_Gerudo_Nabooru_Adult[0] - EventTriggerSetModelLodManual (#94, concurrent=2)
               duration: 580.0
               LodLevel: -1
[   1207.0] E VoicePlayActor[0] - EventStartVoice (#97, concurrent=0)
               duration: 564.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   1771.0] L VoicePlayActor[0] - EventStartVoice (#97, concurrent=0)
[   1780.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#12, concurrent=0)
[   1780.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
[   1780.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#47, concurrent=1)
[   1780.0] L Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
[   1780.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
[   1780.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#81, concurrent=0)
[   1780.0] L Npc_Gerudo_Nabooru_Adult[0] - EventTriggerSetModelLodManual (#94, concurrent=2)
[   1780.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 860.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 30.0
[   1780.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
               duration: 860.0
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
[   1780.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#48, concurrent=1)
               duration: 860.0
               Near: 0.10000000149011612
[   1780.0] E Player_Event[0] - EventPlayASForTimeline (#63, concurrent=0)
               duration: 860.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1780.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 860.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1780.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#82, concurrent=0)
               duration: 860.0
               ASName: C06-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1792.0] E VoicePlayActor[0] - EventStartVoice (#98, concurrent=0)
               duration: 111.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   1903.0] L VoicePlayActor[0] - EventStartVoice (#98, concurrent=0)
[   1903.0] E VoicePlayActor[0] - EventStartVoice (#99, concurrent=0)
               duration: 293.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   2196.0] L VoicePlayActor[0] - EventStartVoice (#99, concurrent=0)
[   2242.0] E VoicePlayActor[0] - EventStartVoice (#100, concurrent=0)
               duration: 386.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   2628.0] L VoicePlayActor[0] - EventStartVoice (#100, concurrent=0)
[   2633.0] E VoicePlayActor[0] - EventStartVoice (#101, concurrent=0)
               duration: 370.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   2640.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#13, concurrent=0)
[   2640.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
[   2640.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#48, concurrent=1)
[   2640.0] L Player_Event[0] - EventPlayASForTimeline (#63, concurrent=0)
[   2640.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
[   2640.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#82, concurrent=0)
[   2640.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 400.0
               EndBluarLevel: 3.0
               EndDistance: 2.5
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 3.0
               StartFNumber: 80.0
[   2640.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
               duration: 400.0
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
[   2640.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#49, concurrent=1)
               duration: 400.0
               Near: 0.10000000149011612
[   2640.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#83, concurrent=0)
               duration: 400.0
               ASName: C07-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3003.0] L VoicePlayActor[0] - EventStartVoice (#101, concurrent=0)
[   3040.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#14, concurrent=0)
[   3040.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
[   3040.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#49, concurrent=1)
[   3040.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#83, concurrent=0)
[   3040.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 400.0
               EndBluarLevel: 1.0
               EndDistance: 7.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 7.0
               StartFNumber: 30.0
[   3040.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
               duration: 400.0
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
[   3040.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#50, concurrent=1)
               duration: 400.0
               Near: 0.10000000149011612
[   3040.0] E Player_Event[0] - EventPlayASForTimeline (#64, concurrent=0)
               duration: 400.0
               ASName: C08-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3040.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#75, concurrent=0)
               duration: 400.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3040.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#84, concurrent=0)
               duration: 400.0
               ASName: C08-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3206.0] E VoicePlayActor[0] - EventStartVoice (#102, concurrent=0)
               duration: 190.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   3396.0] L VoicePlayActor[0] - EventStartVoice (#102, concurrent=0)
[   3438.0] E VoicePlayActor[0] - EventStartVoice (#103, concurrent=0)
               duration: 230.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_007_c
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   3440.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#15, concurrent=0)
[   3440.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
[   3440.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#50, concurrent=1)
[   3440.0] L Player_Event[0] - EventPlayASForTimeline (#64, concurrent=0)
[   3440.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#75, concurrent=0)
[   3440.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#84, concurrent=0)
[   3440.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 240.0
               EndBluarLevel: 2.5
               EndDistance: 1.8600000143051147
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 1.8600000143051147
               StartFNumber: 25.0
[   3440.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
               duration: 240.0
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
[   3440.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#51, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[   3440.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#85, concurrent=0)
               duration: 240.0
               ASName: C09-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3668.0] L VoicePlayActor[0] - EventStartVoice (#103, concurrent=0)
[   3680.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#16, concurrent=0)
[   3680.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
[   3680.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#51, concurrent=1)
[   3680.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#85, concurrent=0)
[   3680.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 300.0
               EndBluarLevel: 1.0
               EndDistance: 6.420000076293945
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 6.420000076293945
               StartFNumber: 25.0
[   3680.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
               duration: 300.0
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
[   3680.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#52, concurrent=1)
               duration: 300.0
               Near: 0.10000000149011612
[   3680.0] E Player_Event[0] - EventPlayASForTimeline (#65, concurrent=0)
               duration: 300.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3680.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#76, concurrent=0)
               duration: 300.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3680.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 300.0
               ASName: C10-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3685.0] E VoicePlayActor[0] - EventStartVoice (#104, concurrent=0)
               duration: 291.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   3976.0] L VoicePlayActor[0] - EventStartVoice (#104, concurrent=0)
[   3980.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#17, concurrent=0)
[   3980.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
[   3980.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#52, concurrent=1)
[   3980.0] L Player_Event[0] - EventPlayASForTimeline (#65, concurrent=0)
[   3980.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#76, concurrent=0)
[   3980.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#86, concurrent=0)
[   3980.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 170.0
               EndBluarLevel: 0.0
               EndDistance: 22.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 22.0
               StartFNumber: 30.0
[   3980.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
               duration: 170.0
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
[   3980.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#53, concurrent=1)
               duration: 170.0
               Near: 0.10000000149011612
[   3980.0] E Player_Event[0] - EventPlayASForTimeline (#66, concurrent=0)
               duration: 170.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3980.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#77, concurrent=0)
               duration: 170.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3980.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#87, concurrent=0)
               duration: 170.0
               ASName: C11-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3995.0] E VoicePlayActor[0] - EventStartVoice (#105, concurrent=0)
               duration: 104.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   4099.0] L VoicePlayActor[0] - EventStartVoice (#105, concurrent=0)
[   4129.0] E VoicePlayActor[0] - EventStartVoice (#106, concurrent=0)
               duration: 328.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   4150.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#18, concurrent=0)
[   4150.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
[   4150.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#53, concurrent=1)
[   4150.0] L Player_Event[0] - EventPlayASForTimeline (#66, concurrent=0)
[   4150.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#77, concurrent=0)
[   4150.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#87, concurrent=0)
[   4150.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 140.0
               EndBluarLevel: 2.0
               EndDistance: 0.8999999761581421
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.8999999761581421
               StartFNumber: 60.0
[   4150.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
               duration: 360.0
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
[   4150.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#54, concurrent=1)
               duration: 360.0
               Near: 0.10000000149011612
[   4150.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#88, concurrent=0)
               duration: 360.0
               ASName: C12-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4290.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#19, concurrent=0)
[   4290.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 120.0
               EndBluarLevel: 2.0
               EndDistance: 1.0
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.8999999761581421
               StartFNumber: 60.0
[   4410.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#20, concurrent=0)
[   4410.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 100.0
               EndBluarLevel: 2.0
               EndDistance: 1.0
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.0
               StartFNumber: 60.0
[   4457.0] L VoicePlayActor[0] - EventStartVoice (#106, concurrent=0)
[   4510.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#21, concurrent=0)
[   4510.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
[   4510.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#54, concurrent=1)
[   4510.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#88, concurrent=0)
[   4510.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 150.0
               EndBluarLevel: 2.5
               EndDistance: 2.700000047683716
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 2.700000047683716
               StartFNumber: 50.0
[   4510.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
               duration: 150.0
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
[   4510.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
               duration: 150.0
               Near: 0.10000000149011612
[   4510.0] E Player_Event[0] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 150.0
               ASName: C13-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4510.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#78, concurrent=0)
               duration: 150.0
               ASName: C13-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4660.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#22, concurrent=0)
[   4660.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
[   4660.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
[   4660.0] L Player_Event[0] - EventPlayASForTimeline (#67, concurrent=0)
[   4660.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#78, concurrent=0)
[   4660.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 380.0
               EndBluarLevel: 3.0
               EndDistance: 1.0099999904632568
               EndFNumber: 220.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.0099999904632568
               StartFNumber: 220.0
[   4660.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
               duration: 380.0
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
[   4660.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
               duration: 380.0
               Near: 0.10000000149011612
[   4660.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 380.0
               ASName: C14-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4660.0] E VoicePlayActor[0] - EventStartVoice (#107, concurrent=0)
               duration: 72.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_013_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   4732.0] L VoicePlayActor[0] - EventStartVoice (#107, concurrent=0)
[   4771.0] E VoicePlayActor[0] - EventStartVoice (#108, concurrent=0)
               duration: 191.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_014_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   4962.0] L VoicePlayActor[0] - EventStartVoice (#108, concurrent=0)
[   5027.0] E VoicePlayActor[0] - EventStartVoice (#109, concurrent=0)
               duration: 310.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_015_c
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   5040.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#23, concurrent=0)
[   5040.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
[   5040.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
[   5040.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#89, concurrent=0)
[   5040.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 300.0
               EndBluarLevel: 2.0
               EndDistance: 6.28000020980835
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 6.28000020980835
               StartFNumber: 30.0
[   5040.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
               duration: 300.0
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
[   5040.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
               duration: 300.0
               Near: 0.10000000149011612
[   5040.0] E Player_Event[0] - EventPlayASForTimeline (#68, concurrent=0)
               duration: 300.0
               ASName: C15-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5040.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#79, concurrent=0)
               duration: 300.0
               ASName: C15-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5040.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#90, concurrent=0)
               duration: 300.0
               ASName: C15-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5337.0] L VoicePlayActor[0] - EventStartVoice (#109, concurrent=0)
[   5340.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#24, concurrent=0)
[   5340.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
[   5340.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
[   5340.0] L Player_Event[0] - EventPlayASForTimeline (#68, concurrent=0)
[   5340.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#79, concurrent=0)
[   5340.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#90, concurrent=0)
[   5340.0] E Dm_Locator[0] - EventPlayASForTimeline (#3, concurrent=0)
               duration: 530.0
               ASName: C16-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5340.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 220.0
               EndBluarLevel: 0.0
               EndDistance: 1.25
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.0
               StartFNumber: 28.0
[   5340.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
               duration: 530.0
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
[   5340.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#58, concurrent=1)
               duration: 530.0
               Near: 0.10000000149011612
[   5340.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#91, concurrent=0)
               duration: 530.0
               ASName: C16-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5362.0] E VoicePlayActor[0] - EventStartVoice (#110, concurrent=0)
               duration: 144.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_016_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   5506.0] L VoicePlayActor[0] - EventStartVoice (#110, concurrent=0)
[   5506.0] E VoicePlayActor[0] - EventStartVoice (#111, concurrent=0)
               duration: 162.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Spirit:Dm_Awake_Spirit_Text_017_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   5560.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#25, concurrent=0)
[   5560.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 310.0
               EndBluarLevel: 0.0
               EndDistance: 1.25
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.25
               StartFNumber: 50.0
[   5668.0] L VoicePlayActor[0] - EventStartVoice (#111, concurrent=0)
[   5700.0] E UISystemActor[1] - EventEventFadeOutForTimeline (#5, concurrent=0)
               duration: 120.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   5820.0] L UISystemActor[1] - EventEventFadeOutForTimeline (#5, concurrent=0)
[   5870.0] L Dm_Locator[0] - EventPlayASForTimeline (#3, concurrent=0)
[   5870.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#26, concurrent=0)
[   5870.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
[   5870.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#58, concurrent=1)
[   5870.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#91, concurrent=0)
[   5870.0] L Npc_Navi - EventGoOffstageForUser (#112, concurrent=0)
