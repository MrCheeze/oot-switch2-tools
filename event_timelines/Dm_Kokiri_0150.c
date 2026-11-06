-------- Event timeline: Dm_Kokiri_0150 --------
actors: 13
clips: 110
oneshots: 0
cuts: 15
duration: 6108.0
subtimelines: ['Dm_Kokiri_0150_Effect', 'Dm_Kokiri_0150_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 226.0
x4: 0
params: (none)

Cut: cut03
start time: 571.0
x4: 0
params: (none)

Cut: cut04
start time: 826.0
x4: 0
params: (none)

Cut: cut05
start time: 1276.0
x4: 0
params: (none)

Cut: cut06
start time: 2386.0
x4: 0
params: (none)

Cut: cut07
start time: 3016.0
x4: 0
params: (none)

Cut: cut08
start time: 3566.0
x4: 0
params: (none)

Cut: cut09
start time: 3686.0
x4: 0
params: (none)

Cut: cut10
start time: 3986.0
x4: 0
params: (none)

Cut: cut11
start time: 4346.0
x4: 0
params: (none)

Cut: cut12
start time: 4422.0
x4: 0
params: (none)

Cut: cut13
start time: 4596.0
x4: 0
params: (none)

Cut: cut14
start time: 4767.0
x4: 0
params: (none)

Cut: cut15
start time: 5137.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[10]
concurrent clips: 1
actions: ['EventSetDynamicResolutionLoadThreshold']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
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
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0150/Dm_Kokiri_0150_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Item_Ocarina_Fairy_Saria[0]
concurrent clips: 1
actions: ['EventPlayASAndModelBindForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0150/Dm_Kokiri_0150_Item_Ocarina_Fairy/workspace.pp__ModelProject.gyml

Actor: Dm_Item_Ocarina_Fairy[0]
concurrent clips: 1
actions: ['EventModelBind', 'EventPlayASAndModelBindForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0150/Dm_Kokiri_0150_Item_Ocarina_Fairy/workspace.pp__ModelProject.gyml

Actor: Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood]
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
UseEventAS: Work/AS/Root/Event/Dm_Kokiri_0150_Npc_Kokiri_WC_Saria.root.as
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0150/Dm_Kokiri_0150_Npc_Kokiri_WC_Saria/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
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
UseEventAS: Work/AS/Root/Event/Dm_Kokiri_0150_Player_Child_C02.root.as
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0150/Dm_Kokiri_0150_Player_Child/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0150/Dm_Kokiri_0150_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Fairy_Saria
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0150/Dm_Kokiri_0150_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: VoicePlayActor[0]
concurrent clips: 1
actions: ['EventStartVoice']
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


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#2, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 226.0
               EndBluarLevel: 2.0
               EndDistance: 5.980000019073486
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.980000019073486
               StartFNumber: 10.0
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 226.0
               ASName: C01-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#58, concurrent=1)
               duration: 100.0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#59, concurrent=0)
               duration: 6108.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi - EventPlayASForTimeline (#60, concurrent=0)
               duration: 226.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#89, concurrent=0)
               duration: 226.0
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
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#2, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#58, concurrent=1)
[    226.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    226.0] L Player_Event[0] - EventPlayASForTimeline (#48, concurrent=0)
[    226.0] L Dm_Npc_Navi - EventPlayASForTimeline (#60, concurrent=0)
[    226.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#89, concurrent=0)
[    226.0] E PostProcessingActor[10] - EventSetDynamicResolutionLoadThreshold (#0, concurrent=0)
               duration: 345.0
               Threshold: 98.0
[    226.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 345.0
               EndBluarLevel: 0.5
               EndDistance: 3.0
               EndFNumber: 16.600000381469727
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 3.0
               StartFNumber: 16.600000381469727
[    226.0] E Player_Event[0] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 345.0
               ASName: AS_C02-Player_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    226.0] E Dm_Npc_Navi - EventPlayASForTimeline (#61, concurrent=0)
               duration: 345.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    226.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#90, concurrent=0)
               duration: 345.0
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
[    384.0] E VoicePlayActor[0] - EventStartVoice (#76, concurrent=0)
               duration: 208.0
               Angle: -40.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[    571.0] L PostProcessingActor[10] - EventSetDynamicResolutionLoadThreshold (#0, concurrent=0)
[    571.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[    571.0] L Player_Event[0] - EventPlayASForTimeline (#49, concurrent=0)
[    571.0] L Dm_Npc_Navi - EventPlayASForTimeline (#61, concurrent=0)
[    571.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#90, concurrent=0)
[    571.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 50.0
               EndBluarLevel: 1.5
               EndDistance: 3.4000000953674316
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 3.4000000953674316
               StartFNumber: 40.0
[    571.0] E Dm_Locator[0] - EventPlayASForTimeline (#21, concurrent=0)
               duration: 255.0
               ASName: C03-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    571.0] E Dm_Item_Ocarina_Fairy[0] - EventPlayASAndModelBindForTimeline (#33, concurrent=0)
               duration: 3115.0
               ASName: C11-Item_Ocarina_Fairy-A-0
               BindActorName: Dm_Locator
               BindBoneName: Dm_Locator
               BindInstanceName: '0'
               ClothWarpMode: -1
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[    571.0] E Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 255.0
               ASName: C03-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    571.0] E Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 255.0
               ASName: C03-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    571.0] E Dm_Npc_Navi - EventPlayASForTimeline (#62, concurrent=0)
               duration: 255.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    571.0] E Npc_Fairy_Saria - EventPlayASForTimeline (#68, concurrent=0)
               duration: 255.0
               ASName: C03-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    571.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#91, concurrent=0)
               duration: 255.0
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
[    592.0] L VoicePlayActor[0] - EventStartVoice (#76, concurrent=0)
[    592.0] E VoicePlayActor[0] - EventStartVoice (#77, concurrent=0)
               duration: 441.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[    621.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[    621.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 108.0
               EndBluarLevel: 1.5
               EndDistance: 8.574999809265137
               EndFNumber: 27.399999618530273
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 3.4000000953674316
               StartFNumber: 40.0
[    729.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[    729.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 97.0
               EndBluarLevel: 1.5
               EndDistance: 8.574999809265137
               EndFNumber: 27.399999618530273
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 8.574999809265137
               StartFNumber: 27.399999618530273
[    826.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[    826.0] L Dm_Locator[0] - EventPlayASForTimeline (#21, concurrent=0)
[    826.0] L Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#36, concurrent=0)
[    826.0] L Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
[    826.0] L Dm_Npc_Navi - EventPlayASForTimeline (#62, concurrent=0)
[    826.0] L Npc_Fairy_Saria - EventPlayASForTimeline (#68, concurrent=0)
[    826.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#91, concurrent=0)
[    826.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 450.0
               EndBluarLevel: 2.0
               EndDistance: 2.700000047683716
               EndFNumber: 51.099998474121094
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.700000047683716
               StartFNumber: 51.099998474121094
[    826.0] E Dm_Locator[0] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 450.0
               ASName: C04-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    826.0] E Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 450.0
               ASName: C04-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    826.0] E Npc_Fairy_Saria - EventPlayASForTimeline (#69, concurrent=0)
               duration: 450.0
               ASName: C04-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    826.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#92, concurrent=0)
               duration: 450.0
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
[   1033.0] L VoicePlayActor[0] - EventStartVoice (#77, concurrent=0)
[   1033.0] E VoicePlayActor[0] - EventStartVoice (#78, concurrent=0)
               duration: 199.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   1232.0] L VoicePlayActor[0] - EventStartVoice (#78, concurrent=0)
[   1276.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   1276.0] L Dm_Locator[0] - EventPlayASForTimeline (#22, concurrent=0)
[   1276.0] L Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#37, concurrent=0)
[   1276.0] L Npc_Fairy_Saria - EventPlayASForTimeline (#69, concurrent=0)
[   1276.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#92, concurrent=0)
[   1276.0] E PostProcessingActor[10] - EventSetDynamicResolutionLoadThreshold (#1, concurrent=0)
               duration: 1110.0
               Threshold: 98.0
[   1276.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 1110.0
               EndBluarLevel: 0.0
               EndDistance: 1.7000000476837158
               EndFNumber: 27.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.7000000476837158
               StartFNumber: 27.0
[   1276.0] E Dm_Locator[0] - EventPlayASForTimeline (#23, concurrent=0)
               duration: 1110.0
               ASName: C05-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1276.0] E Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 1110.0
               ASName: AS-C05-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1276.0] E Player_Event[0] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 1110.0
               ASName: C05-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1276.0] E Dm_Npc_Navi - EventPlayASForTimeline (#63, concurrent=0)
               duration: 1110.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1276.0] E Npc_Fairy_Saria - EventPlayASForTimeline (#70, concurrent=0)
               duration: 1110.0
               ASName: C05-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1276.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#93, concurrent=0)
               duration: 1110.0
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
[   1327.0] E VoicePlayActor[0] - EventStartVoice (#79, concurrent=0)
               duration: 468.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   1795.0] L VoicePlayActor[0] - EventStartVoice (#79, concurrent=0)
[   1917.0] E VoicePlayActor[0] - EventStartVoice (#80, concurrent=0)
               duration: 249.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   2166.0] L VoicePlayActor[0] - EventStartVoice (#80, concurrent=0)
[   2386.0] L PostProcessingActor[10] - EventSetDynamicResolutionLoadThreshold (#1, concurrent=0)
[   2386.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   2386.0] L Dm_Locator[0] - EventPlayASForTimeline (#23, concurrent=0)
[   2386.0] L Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#38, concurrent=0)
[   2386.0] L Player_Event[0] - EventPlayASForTimeline (#51, concurrent=0)
[   2386.0] L Dm_Npc_Navi - EventPlayASForTimeline (#63, concurrent=0)
[   2386.0] L Npc_Fairy_Saria - EventPlayASForTimeline (#70, concurrent=0)
[   2386.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#93, concurrent=0)
[   2386.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 630.0
               EndBluarLevel: 2.0
               EndDistance: 1.7599999904632568
               EndFNumber: 61.400001525878906
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.7599999904632568
               StartFNumber: 61.400001525878906
[   2386.0] E Dm_Locator[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 630.0
               ASName: C06-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2386.0] E Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 630.0
               ASName: C06-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2386.0] E Npc_Fairy_Saria - EventPlayASForTimeline (#71, concurrent=0)
               duration: 630.0
               ASName: C06-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2386.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#94, concurrent=0)
               duration: 630.0
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
[   2396.0] E VoicePlayActor[0] - EventStartVoice (#81, concurrent=0)
               duration: 212.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   2608.0] L VoicePlayActor[0] - EventStartVoice (#81, concurrent=0)
[   2608.0] E VoicePlayActor[0] - EventStartVoice (#82, concurrent=0)
               duration: 223.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   2831.0] L VoicePlayActor[0] - EventStartVoice (#82, concurrent=0)
[   2831.0] E VoicePlayActor[0] - EventStartVoice (#83, concurrent=0)
               duration: 120.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   2951.0] L VoicePlayActor[0] - EventStartVoice (#83, concurrent=0)
[   3016.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   3016.0] L Dm_Locator[0] - EventPlayASForTimeline (#24, concurrent=0)
[   3016.0] L Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#39, concurrent=0)
[   3016.0] L Npc_Fairy_Saria - EventPlayASForTimeline (#71, concurrent=0)
[   3016.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#94, concurrent=0)
[   3016.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 550.0
               EndBluarLevel: 2.0
               EndDistance: 0.8799999952316284
               EndFNumber: 160.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.8799999952316284
               StartFNumber: 160.0
[   3016.0] E Dm_Locator[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 550.0
               ASName: C07-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3016.0] E Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 550.0
               ASName: C07-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3016.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#95, concurrent=0)
               duration: 550.0
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
[   3016.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#104, concurrent=1)
               duration: 550.0
               Near: 0.10000000149011612
[   3031.0] E VoicePlayActor[0] - EventStartVoice (#84, concurrent=0)
               duration: 284.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   3315.0] L VoicePlayActor[0] - EventStartVoice (#84, concurrent=0)
[   3315.0] E VoicePlayActor[0] - EventStartVoice (#85, concurrent=0)
               duration: 246.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   3561.0] L VoicePlayActor[0] - EventStartVoice (#85, concurrent=0)
[   3566.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   3566.0] L Dm_Locator[0] - EventPlayASForTimeline (#25, concurrent=0)
[   3566.0] L Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#40, concurrent=0)
[   3566.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#95, concurrent=0)
[   3566.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#104, concurrent=1)
[   3566.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 120.0
               EndBluarLevel: 2.0
               EndDistance: 1.4500000476837158
               EndFNumber: 99.69999694824219
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.4500000476837158
               StartFNumber: 99.69999694824219
[   3566.0] E Dm_Locator[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 120.0
               ASName: C08-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3566.0] E Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 120.0
               ASName: C08-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3566.0] E Player_Event[0] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 120.0
               ASName: C08-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3566.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#96, concurrent=0)
               duration: 120.0
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
[   3566.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#105, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[   3686.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   3686.0] L Dm_Locator[0] - EventPlayASForTimeline (#26, concurrent=0)
[   3686.0] L Dm_Item_Ocarina_Fairy[0] - EventPlayASAndModelBindForTimeline (#33, concurrent=0)
[   3686.0] L Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#41, concurrent=0)
[   3686.0] L Player_Event[0] - EventPlayASForTimeline (#52, concurrent=0)
[   3686.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#96, concurrent=0)
[   3686.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#105, concurrent=1)
[   3686.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 300.0
               EndBluarLevel: 2.0
               EndDistance: 1.2799999713897705
               EndFNumber: 75.19999694824219
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.2799999713897705
               StartFNumber: 75.19999694824219
[   3686.0] E Dm_Locator[0] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 300.0
               ASName: C09-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3686.0] E Dm_Item_Ocarina_Fairy[0] - EventPlayASAndModelBindForTimeline (#34, concurrent=0)
               duration: 300.0
               ASName: C09-Item_Ocarina_Fairy-A-0
               BindActorName: Dm_Locator
               BindBoneName: Dm_Locator
               BindInstanceName: '0'
               ClothWarpMode: -1
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[   3686.0] E Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 300.0
               ASName: C09-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3686.0] E Player_Event[0] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 300.0
               ASName: C09-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3686.0] E Dm_Npc_Navi - EventPlayASForTimeline (#64, concurrent=0)
               duration: 300.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3686.0] E Npc_Fairy_Saria - EventPlayASForTimeline (#72, concurrent=0)
               duration: 300.0
               ASName: C09-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3686.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#97, concurrent=0)
               duration: 300.0
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
[   3686.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#106, concurrent=1)
               duration: 300.0
               Near: 0.10000000149011612
[   3754.0] E VoicePlayActor[0] - EventStartVoice (#86, concurrent=0)
               duration: 227.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   3981.0] L VoicePlayActor[0] - EventStartVoice (#86, concurrent=0)
[   3983.0] E Dm_Item_Ocarina_Fairy_Saria[0] - EventPlayASAndModelBindForTimeline (#32, concurrent=0)
               duration: 2122.0
               ASName: C11-Item_Ocarina_Fairy-A-0
               BindActorName: Npc_Kokiri_Saria_Child
               BindBoneName: Weapon_R
               BindInstanceName: KokiriForest_ArriveLostWood
               ClothWarpMode: -1
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[   3986.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   3986.0] L Dm_Locator[0] - EventPlayASForTimeline (#27, concurrent=0)
[   3986.0] L Dm_Item_Ocarina_Fairy[0] - EventPlayASAndModelBindForTimeline (#34, concurrent=0)
[   3986.0] L Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#42, concurrent=0)
[   3986.0] L Player_Event[0] - EventPlayASForTimeline (#53, concurrent=0)
[   3986.0] L Dm_Npc_Navi - EventPlayASForTimeline (#64, concurrent=0)
[   3986.0] L Npc_Fairy_Saria - EventPlayASForTimeline (#72, concurrent=0)
[   3986.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#97, concurrent=0)
[   3986.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#106, concurrent=1)
[   3986.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 360.0
               EndBluarLevel: 1.5
               EndDistance: 1.0
               EndFNumber: 78.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.0
               StartFNumber: 78.0
[   3986.0] E Dm_Locator[0] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 360.0
               ASName: C10-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3986.0] E Dm_Item_Ocarina_Fairy[0] - EventModelBind (#35, concurrent=0)
               duration: 2122.0
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
[   3986.0] E Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 360.0
               ASName: C10-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3986.0] E Player_Event[0] - EventPlayASForTimeline (#54, concurrent=0)
               duration: 360.0
               ASName: C10-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3986.0] E Dm_Npc_Navi - EventPlayASForTimeline (#65, concurrent=0)
               duration: 360.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3986.0] E Npc_Fairy_Saria - EventPlayASForTimeline (#73, concurrent=0)
               duration: 360.0
               ASName: C10-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3986.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#98, concurrent=0)
               duration: 360.0
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
[   3986.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#107, concurrent=1)
               duration: 360.0
               Near: 0.10000000149011612
[   4126.0] E VoicePlayActor[0] - EventStartVoice (#87, concurrent=0)
               duration: 215.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   4341.0] L VoicePlayActor[0] - EventStartVoice (#87, concurrent=0)
[   4346.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   4346.0] L Dm_Locator[0] - EventPlayASForTimeline (#28, concurrent=0)
[   4346.0] L Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#43, concurrent=0)
[   4346.0] L Player_Event[0] - EventPlayASForTimeline (#54, concurrent=0)
[   4346.0] L Dm_Npc_Navi - EventPlayASForTimeline (#65, concurrent=0)
[   4346.0] L Npc_Fairy_Saria - EventPlayASForTimeline (#73, concurrent=0)
[   4346.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#98, concurrent=0)
[   4346.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#107, concurrent=1)
[   4346.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 76.0
               EndBluarLevel: 2.130000114440918
               EndDistance: 0.7889999747276306
               EndFNumber: 70.19999694824219
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.130000114440918
               StartDistance: 0.7889999747276306
               StartFNumber: 70.19999694824219
[   4346.0] E Dm_Locator[0] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 76.0
               ASName: C11-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4346.0] E Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 76.0
               ASName: C11-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4346.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#99, concurrent=0)
               duration: 76.0
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
[   4346.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#108, concurrent=1)
               duration: 76.0
               Near: 0.10000000149011612
[   4422.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   4422.0] L Dm_Locator[0] - EventPlayASForTimeline (#29, concurrent=0)
[   4422.0] L Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#44, concurrent=0)
[   4422.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#99, concurrent=0)
[   4422.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#108, concurrent=1)
[   4422.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 174.0
               EndBluarLevel: 1.0
               EndDistance: 1.600000023841858
               EndFNumber: 27.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.600000023841858
               StartFNumber: 27.0
[   4422.0] E Dm_Locator[0] - EventPlayASForTimeline (#30, concurrent=0)
               duration: 174.0
               ASName: C12-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4422.0] E Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 174.0
               ASName: C12-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4422.0] E Player_Event[0] - EventPlayASForTimeline (#55, concurrent=0)
               duration: 174.0
               ASName: C12-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4422.0] E Dm_Npc_Navi - EventPlayASForTimeline (#66, concurrent=0)
               duration: 174.0
               ASName: C12-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4422.0] E Npc_Fairy_Saria - EventPlayASForTimeline (#74, concurrent=0)
               duration: 174.0
               ASName: C12-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4422.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#100, concurrent=0)
               duration: 174.0
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
[   4596.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   4596.0] L Dm_Locator[0] - EventPlayASForTimeline (#30, concurrent=0)
[   4596.0] L Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#45, concurrent=0)
[   4596.0] L Player_Event[0] - EventPlayASForTimeline (#55, concurrent=0)
[   4596.0] L Dm_Npc_Navi - EventPlayASForTimeline (#66, concurrent=0)
[   4596.0] L Npc_Fairy_Saria - EventPlayASForTimeline (#74, concurrent=0)
[   4596.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#100, concurrent=0)
[   4596.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 171.0
               EndBluarLevel: 1.0
               EndDistance: 3.559999942779541
               EndFNumber: 23.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.559999942779541
               StartFNumber: 23.0
[   4596.0] E Dm_Locator[0] - EventPlayASForTimeline (#31, concurrent=0)
               duration: 171.0
               ASName: C12B-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4596.0] E Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 171.0
               ASName: C12B-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4596.0] E Player_Event[0] - EventPlayASForTimeline (#56, concurrent=0)
               duration: 171.0
               ASName: C12B-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4596.0] E Dm_Npc_Navi - EventPlayASForTimeline (#67, concurrent=0)
               duration: 171.0
               ASName: C12B-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4596.0] E Npc_Fairy_Saria - EventPlayASForTimeline (#75, concurrent=0)
               duration: 171.0
               ASName: C12B-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4596.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#101, concurrent=0)
               duration: 171.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C12B-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4767.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   4767.0] L Dm_Locator[0] - EventPlayASForTimeline (#31, concurrent=0)
[   4767.0] L Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#46, concurrent=0)
[   4767.0] L Player_Event[0] - EventPlayASForTimeline (#56, concurrent=0)
[   4767.0] L Dm_Npc_Navi - EventPlayASForTimeline (#67, concurrent=0)
[   4767.0] L Npc_Fairy_Saria - EventPlayASForTimeline (#75, concurrent=0)
[   4767.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#101, concurrent=0)
[   4767.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 370.0
               EndBluarLevel: 3.5999999046325684
               EndDistance: 17.0
               EndFNumber: 6.599999904632568
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.5999999046325684
               StartDistance: 17.0
               StartFNumber: 6.599999904632568
[   4767.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#102, concurrent=0)
               duration: 370.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C12C-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4767.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#109, concurrent=1)
               duration: 370.0
               Near: 1.0
[   5137.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   5137.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#102, concurrent=0)
[   5137.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#109, concurrent=1)
[   5137.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 971.0
               EndBluarLevel: 1.5499999523162842
               EndDistance: 1.2100000381469727
               EndFNumber: 69.4000015258789
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5499999523162842
               StartDistance: 1.2100000381469727
               StartFNumber: 69.4000015258789
[   5137.0] E Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 971.0
               ASName: C13-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5137.0] E Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
               duration: 971.0
               ASName: C13-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5137.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#103, concurrent=0)
               duration: 971.0
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
[   5368.0] E VoicePlayActor[0] - EventStartVoice (#88, concurrent=0)
               duration: 512.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0150:Dm_Kokiri_0150_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   5880.0] L VoicePlayActor[0] - EventStartVoice (#88, concurrent=0)
[   5988.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#3, concurrent=0)
               duration: 120.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   6105.0] L Dm_Item_Ocarina_Fairy_Saria[0] - EventPlayASAndModelBindForTimeline (#32, concurrent=0)
[   6108.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#3, concurrent=0)
[   6108.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   6108.0] L Dm_Item_Ocarina_Fairy[0] - EventModelBind (#35, concurrent=0)
[   6108.0] L Npc_Kokiri_Saria_Child[KokiriForest_ArriveLostWood] - EventPlayASForTimeline (#47, concurrent=0)
[   6108.0] L Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
[   6108.0] L Npc_Navi - EventGoOffstageForUser (#59, concurrent=0)
[   6108.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#103, concurrent=0)
