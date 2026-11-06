-------- Event timeline: Dm_Awake_Forest --------
actors: 10
clips: 111
oneshots: 0
cuts: 18
duration: 8007.0
subtimelines: ['Dm_Awake_Forest_Env', 'Dm_Awake_Forest_Effect']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 210.0
x4: 0
params: (none)

Cut: C03
start time: 348.0
x4: 0
params: (none)

Cut: C04
start time: 658.0
x4: 0
params: (none)

Cut: C05
start time: 796.0
x4: 0
params: (none)

Cut: C06
start time: 1016.0
x4: 0
params: (none)

Cut: C07
start time: 1586.0
x4: 0
params: (none)

Cut: C08
start time: 2056.0
x4: 0
params: (none)

Cut: C09
start time: 2616.0
x4: 0
params: (none)

Cut: C11
start time: 2886.0
x4: 0
params: (none)

Cut: C12
start time: 3276.0
x4: 0
params: (none)

Cut: C13
start time: 3796.0
x4: 0
params: (none)

Cut: C14
start time: 4536.0
x4: 0
params: (none)

Cut: C15
start time: 4966.0
x4: 0
params: (none)

Cut: C16
start time: 5546.0
x4: 0
params: (none)

Cut: C17
start time: 6206.0
x4: 0
params: (none)

Cut: C18
start time: 6736.0
x4: 0
params: (none)

Cut: C19
start time: 7046.0
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
UseEventModelAnime: Work/Model/Event/Dm_Awake_Forest/Dm_Awake_Forest_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: UISystemActor
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
UseEventModelAnime: 使用しない

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Forest/Dm_Awake_Forest_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Kokiri_Saria_Child[SageRoom]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetCharaReflectionCaustics']
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
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Forest/Dm_Awake_Forest_Npc_Kokiri_WC_Saria/workspace.pp__ModelProject.gyml

Actor: Npc_Fairy_Saria
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Player_Event[0]
concurrent clips: 4
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerSetCharaReflectionCaustics']
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
UseEventModelAnime: Work/Model/Event/Dm_Awake_Forest/Dm_Awake_Forest_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Forest/Dm_Awake_Forest_Npc_Navi/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E Dm_Locator[0] - EventPlayASForTimeline (#0, concurrent=0)
               duration: 210.0
               ASName: C01-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E UISystemActor - EventEventFadeInForTimeline (#5, concurrent=0)
               duration: 150.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 210.0
               EndBluarLevel: 0.0
               EndDistance: 7.349999904632568
               EndFNumber: 8.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 7.349999904632568
               StartFNumber: 8.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
               duration: 210.0
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
[      0.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventTriggerSetCharaReflectionCaustics (#93, concurrent=1)
               duration: 210.0
               DampEndHeightRatio: 0.5
               DampStartHeightRaito: 0.0
               Intensity: 0.20000000298023224
[      0.0] E Npc_Fairy_Saria - EventGoOffstageForUser (#94, concurrent=0)
               duration: 8007.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#95, concurrent=0)
               duration: 210.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#107, concurrent=1)
               duration: 210.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#108, concurrent=2)
               duration: 210.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerSetCharaReflectionCaustics (#109, concurrent=3)
               duration: 210.0
               DampEndHeightRatio: 0.699999988079071
               DampStartHeightRaito: 0.0
               Intensity: 0.20000000298023224
[      0.0] E Npc_Navi - EventGoOffstageForUser (#110, concurrent=0)
               duration: 8007.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[    150.0] L UISystemActor - EventEventFadeInForTimeline (#5, concurrent=0)
[    210.0] L Dm_Locator[0] - EventPlayASForTimeline (#0, concurrent=0)
[    210.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#28, concurrent=0)
[    210.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
[    210.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventTriggerSetCharaReflectionCaustics (#93, concurrent=1)
[    210.0] L Player_Event[0] - EventPlayASForTimeline (#95, concurrent=0)
[    210.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#107, concurrent=1)
[    210.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#108, concurrent=2)
[    210.0] L Player_Event[0] - EventTriggerSetCharaReflectionCaustics (#109, concurrent=3)
[    210.0] E Dm_Locator[0] - EventPlayASForTimeline (#1, concurrent=0)
               duration: 138.0
               ASName: C02-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    210.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 138.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 3.700000047683716
               EndFNumber: 15.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 3.700000047683716
               StartFNumber: 15.5
[    210.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
               duration: 138.0
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
[    210.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
               duration: 138.0
               Near: 0.20000000298023224
[    210.0] E Player_Event[0] - EventPlayASForTimeline (#96, concurrent=0)
               duration: 138.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    348.0] L Dm_Locator[0] - EventPlayASForTimeline (#1, concurrent=0)
[    348.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#29, concurrent=0)
[    348.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
[    348.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
[    348.0] L Player_Event[0] - EventPlayASForTimeline (#96, concurrent=0)
[    348.0] E Dm_Locator[0] - EventPlayASForTimeline (#2, concurrent=0)
               duration: 310.0
               ASName: C03-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    348.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 310.0
               EndBluarLevel: 0.0
               EndDistance: 1.600000023841858
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.600000023841858
               StartFNumber: 30.0
[    348.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
               duration: 310.0
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
[    348.0] E Player_Event[0] - EventPlayASForTimeline (#97, concurrent=0)
               duration: 310.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    658.0] L Dm_Locator[0] - EventPlayASForTimeline (#2, concurrent=0)
[    658.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#30, concurrent=0)
[    658.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
[    658.0] L Player_Event[0] - EventPlayASForTimeline (#97, concurrent=0)
[    658.0] E Dm_Locator[0] - EventPlayASForTimeline (#3, concurrent=0)
               duration: 928.0
               ASName: C04-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    658.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 138.0
               EndBluarLevel: 0.0
               EndDistance: 4.0
               EndFNumber: 17.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 4.0
               StartFNumber: 17.5
[    658.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
               duration: 138.0
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
[    658.0] E Player_Event[0] - EventPlayASForTimeline (#98, concurrent=0)
               duration: 138.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    796.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#31, concurrent=0)
[    796.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
[    796.0] L Player_Event[0] - EventPlayASForTimeline (#98, concurrent=0)
[    796.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 220.0
               EndBluarLevel: 2.0
               EndDistance: 5.5
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.5
               StartFNumber: 40.0
[    796.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
               duration: 220.0
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
[    796.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#67, concurrent=1)
               duration: 220.0
               Near: 0.20000000298023224
[    796.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#72, concurrent=0)
               duration: 220.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    796.0] E Player_Event[0] - EventPlayASForTimeline (#99, concurrent=0)
               duration: 220.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1016.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#32, concurrent=0)
[   1016.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
[   1016.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#67, concurrent=1)
[   1016.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#72, concurrent=0)
[   1016.0] L Player_Event[0] - EventPlayASForTimeline (#99, concurrent=0)
[   1016.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 570.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 60.0
[   1016.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
               duration: 570.0
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
[   1016.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#80, concurrent=0)
               duration: 570.0
               ASName: C06-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1240.0] E VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
               duration: 98.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   1338.0] L VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
[   1438.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 128.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   1566.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[   1586.0] L Dm_Locator[0] - EventPlayASForTimeline (#3, concurrent=0)
[   1586.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#33, concurrent=0)
[   1586.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
[   1586.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#80, concurrent=0)
[   1586.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 470.0
               EndBluarLevel: 2.0
               EndDistance: 1.7999999523162842
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.7999999523162842
               StartFNumber: 100.0
[   1586.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
               duration: 470.0
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
[   1586.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#81, concurrent=0)
               duration: 470.0
               ASName: C07-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1605.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 382.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   1987.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[   2056.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#34, concurrent=0)
[   2056.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
[   2056.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#81, concurrent=0)
[   2056.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#35, concurrent=0)
               duration: 560.0
               EndBluarLevel: 1.0
               EndDistance: 6.699999809265137
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 6.699999809265137
               StartFNumber: 20.0
[   2056.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
               duration: 560.0
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
[   2056.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
               duration: 560.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2056.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#82, concurrent=0)
               duration: 560.0
               ASName: C08-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2056.0] E Player_Event[0] - EventPlayASForTimeline (#100, concurrent=0)
               duration: 560.0
               ASName: C08-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2065.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 456.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   2521.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[   2616.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#35, concurrent=0)
[   2616.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
[   2616.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
[   2616.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#82, concurrent=0)
[   2616.0] L Player_Event[0] - EventPlayASForTimeline (#100, concurrent=0)
[   2616.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#36, concurrent=0)
               duration: 270.0
               EndBluarLevel: 4.0
               EndDistance: 1.5199999809265137
               EndFNumber: 240.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 4.0
               StartDistance: 1.5199999809265137
               StartFNumber: 240.0
[   2616.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
               duration: 270.0
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
[   2616.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 270.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2616.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#83, concurrent=0)
               duration: 270.0
               ASName: C09-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2616.0] E Player_Event[0] - EventPlayASForTimeline (#101, concurrent=0)
               duration: 270.0
               ASName: C09-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2663.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 157.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   2820.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   2886.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#36, concurrent=0)
[   2886.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
[   2886.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
[   2886.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#83, concurrent=0)
[   2886.0] L Player_Event[0] - EventPlayASForTimeline (#101, concurrent=0)
[   2886.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#37, concurrent=0)
               duration: 390.0
               EndBluarLevel: 0.0
               EndDistance: 6.900000095367432
               EndFNumber: 32.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 6.900000095367432
               StartFNumber: 32.0
[   2886.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
               duration: 390.0
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
[   2886.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#75, concurrent=0)
               duration: 390.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2886.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#84, concurrent=0)
               duration: 390.0
               ASName: C11-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2886.0] E Player_Event[0] - EventPlayASForTimeline (#102, concurrent=0)
               duration: 390.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2986.0] E VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
               duration: 187.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   3173.0] L VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
[   3275.0] E VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
               duration: 214.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_007_c
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   3276.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#37, concurrent=0)
[   3276.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
[   3276.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#75, concurrent=0)
[   3276.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#84, concurrent=0)
[   3276.0] L Player_Event[0] - EventPlayASForTimeline (#102, concurrent=0)
[   3276.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#38, concurrent=0)
               duration: 180.0
               EndBluarLevel: 3.0
               EndDistance: 0.800000011920929
               EndFNumber: 280.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 0.75
               StartFNumber: 600.0
[   3276.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
               duration: 520.0
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
[   3276.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#68, concurrent=1)
               duration: 520.0
               Near: 0.20000000298023224
[   3276.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#85, concurrent=0)
               duration: 520.0
               ASName: C12-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3456.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#38, concurrent=0)
[   3456.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#39, concurrent=0)
               duration: 340.0
               EndBluarLevel: 3.0
               EndDistance: 0.800000011920929
               EndFNumber: 280.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 0.800000011920929
               StartFNumber: 280.0
[   3489.0] L VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
[   3557.0] E VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
               duration: 133.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_007_d
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   3690.0] L VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
[   3795.0] E VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
               duration: 166.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   3796.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#39, concurrent=0)
[   3796.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
[   3796.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#68, concurrent=1)
[   3796.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#85, concurrent=0)
[   3796.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#40, concurrent=0)
               duration: 740.0
               EndBluarLevel: 2.0
               EndDistance: 5.800000190734863
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 1.0
               StartBluarLevel: 2.0
               StartDistance: 5.800000190734863
               StartFNumber: 40.0
[   3796.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
               duration: 740.0
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
[   3796.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#69, concurrent=1)
               duration: 740.0
               Near: 0.20000000298023224
[   3796.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#76, concurrent=0)
               duration: 740.0
               ASName: C13-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3796.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 740.0
               ASName: C13-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3796.0] E Player_Event[0] - EventPlayASForTimeline (#103, concurrent=0)
               duration: 740.0
               ASName: C13-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3961.0] L VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
[   3981.0] E VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
               duration: 260.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   4241.0] L VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
[   4275.0] E VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
               duration: 122.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   4397.0] L VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
[   4536.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#40, concurrent=0)
[   4536.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
[   4536.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#69, concurrent=1)
[   4536.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#76, concurrent=0)
[   4536.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#86, concurrent=0)
[   4536.0] L Player_Event[0] - EventPlayASForTimeline (#103, concurrent=0)
[   4536.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#41, concurrent=0)
               duration: 430.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 50.0
[   4536.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
               duration: 430.0
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
[   4536.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#87, concurrent=0)
               duration: 430.0
               ASName: C14-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4674.0] E VoicePlayActor[0] - EventStartVoice (#18, concurrent=0)
               duration: 196.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   4870.0] L VoicePlayActor[0] - EventStartVoice (#18, concurrent=0)
[   4966.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#41, concurrent=0)
[   4966.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
[   4966.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#87, concurrent=0)
[   4966.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#42, concurrent=0)
               duration: 580.0
               EndBluarLevel: 2.0
               EndDistance: 3.700000047683716
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.700000047683716
               StartFNumber: 50.0
[   4966.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
               duration: 580.0
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
[   4966.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#88, concurrent=0)
               duration: 580.0
               ASName: C15-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5027.0] E VoicePlayActor[0] - EventStartVoice (#19, concurrent=0)
               duration: 195.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_012_c
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   5222.0] L VoicePlayActor[0] - EventStartVoice (#19, concurrent=0)
[   5249.0] E VoicePlayActor[0] - EventStartVoice (#20, concurrent=0)
               duration: 166.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_012_d
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   5415.0] L VoicePlayActor[0] - EventStartVoice (#20, concurrent=0)
[   5546.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#42, concurrent=0)
[   5546.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
[   5546.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#88, concurrent=0)
[   5546.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#43, concurrent=0)
               duration: 660.0
               EndBluarLevel: 0.0
               EndDistance: 24.0
               EndFNumber: 12.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 24.0
               StartFNumber: 12.0
[   5546.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
               duration: 660.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C16_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5546.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#77, concurrent=0)
               duration: 660.0
               ASName: C16-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5546.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 660.0
               ASName: C16-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5546.0] E Player_Event[0] - EventPlayASForTimeline (#104, concurrent=0)
               duration: 660.0
               ASName: C16-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5635.0] E VoicePlayActor[0] - EventStartVoice (#21, concurrent=0)
               duration: 356.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_013_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   5991.0] L VoicePlayActor[0] - EventStartVoice (#21, concurrent=0)
[   6011.0] E VoicePlayActor[0] - EventStartVoice (#22, concurrent=0)
               duration: 73.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_014_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   6084.0] L VoicePlayActor[0] - EventStartVoice (#22, concurrent=0)
[   6206.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#43, concurrent=0)
[   6206.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
[   6206.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#77, concurrent=0)
[   6206.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#89, concurrent=0)
[   6206.0] L Player_Event[0] - EventPlayASForTimeline (#104, concurrent=0)
[   6206.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#44, concurrent=0)
               duration: 530.0
               EndBluarLevel: 1.5
               EndDistance: 6.699999809265137
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 6.699999809265137
               StartFNumber: 20.0
[   6206.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
               duration: 530.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C17_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6206.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#70, concurrent=1)
               duration: 530.0
               Near: 0.10000000149011612
[   6206.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#78, concurrent=0)
               duration: 530.0
               ASName: C17-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6206.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#90, concurrent=0)
               duration: 530.0
               ASName: C17-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6206.0] E Player_Event[0] - EventPlayASForTimeline (#105, concurrent=0)
               duration: 530.0
               ASName: C17-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6216.0] E VoicePlayActor[0] - EventStartVoice (#23, concurrent=0)
               duration: 418.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_015_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   6634.0] L VoicePlayActor[0] - EventStartVoice (#23, concurrent=0)
[   6736.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#44, concurrent=0)
[   6736.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
[   6736.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#70, concurrent=1)
[   6736.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#78, concurrent=0)
[   6736.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#90, concurrent=0)
[   6736.0] L Player_Event[0] - EventPlayASForTimeline (#105, concurrent=0)
[   6736.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#45, concurrent=0)
               duration: 310.0
               EndBluarLevel: 1.5
               EndDistance: 5.0
               EndFNumber: 18.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 5.0
               StartFNumber: 18.0
[   6736.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
               duration: 310.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C18_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6736.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#79, concurrent=0)
               duration: 310.0
               ASName: C18-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6736.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#91, concurrent=0)
               duration: 310.0
               ASName: C18-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6736.0] E Player_Event[0] - EventPlayASForTimeline (#106, concurrent=0)
               duration: 310.0
               ASName: C18-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6737.0] E VoicePlayActor[0] - EventStartVoice (#24, concurrent=0)
               duration: 172.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_016_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   6909.0] L VoicePlayActor[0] - EventStartVoice (#24, concurrent=0)
[   7046.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#45, concurrent=0)
[   7046.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
[   7046.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#79, concurrent=0)
[   7046.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#91, concurrent=0)
[   7046.0] L Player_Event[0] - EventPlayASForTimeline (#106, concurrent=0)
[   7046.0] E Dm_Locator[0] - EventPlayASForTimeline (#4, concurrent=0)
               duration: 961.0
               ASName: C19-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7046.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#46, concurrent=0)
               duration: 650.0
               EndBluarLevel: 0.0
               EndDistance: 1.25
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.5
               StartFNumber: 65.0
[   7046.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
               duration: 961.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C19_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   7046.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#71, concurrent=1)
               duration: 961.0
               Near: 0.5
[   7046.0] E Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#92, concurrent=0)
               duration: 961.0
               ASName: C19-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7069.0] E VoicePlayActor[0] - EventStartVoice (#25, concurrent=0)
               duration: 186.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_017_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   7255.0] L VoicePlayActor[0] - EventStartVoice (#25, concurrent=0)
[   7336.0] E VoicePlayActor[0] - EventStartVoice (#26, concurrent=0)
               duration: 206.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_018_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   7542.0] L VoicePlayActor[0] - EventStartVoice (#26, concurrent=0)
[   7614.0] E VoicePlayActor[0] - EventStartVoice (#27, concurrent=0)
               duration: 145.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Forest:Dm_Awake_Forest_Text_019_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   7696.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#46, concurrent=0)
[   7696.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#47, concurrent=0)
               duration: 311.0
               EndBluarLevel: 0.0
               EndDistance: 1.25
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.25
               StartFNumber: 70.0
[   7759.0] L VoicePlayActor[0] - EventStartVoice (#27, concurrent=0)
[   7866.0] E UISystemActor - EventEventFadeOutForTimeline (#6, concurrent=0)
               duration: 90.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   7956.0] L UISystemActor - EventEventFadeOutForTimeline (#6, concurrent=0)
[   8007.0] L Dm_Locator[0] - EventPlayASForTimeline (#4, concurrent=0)
[   8007.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#47, concurrent=0)
[   8007.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
[   8007.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#71, concurrent=1)
[   8007.0] L Npc_Kokiri_Saria_Child[SageRoom] - EventPlayASForTimeline (#92, concurrent=0)
[   8007.0] L Npc_Fairy_Saria - EventGoOffstageForUser (#94, concurrent=0)
[   8007.0] L Npc_Navi - EventGoOffstageForUser (#110, concurrent=0)
