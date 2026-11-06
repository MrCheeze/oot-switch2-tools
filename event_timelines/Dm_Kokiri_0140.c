-------- Event timeline: Dm_Kokiri_0140 --------
actors: 28
clips: 165
oneshots: 0
cuts: 19
duration: 12470.0
subtimelines: ['Dm_Kokiri_0140_Effect', 'Dm_Kokiri_0140_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C01_30
start time: 720.0
x4: 0
params: (none)

Cut: C01_50
start time: 1550.0
x4: 0
params: (none)

Cut: C02
start time: 1740.0
x4: 0
params: (none)

Cut: C02_50
start time: 2570.0
x4: 0
params: (none)

Cut: C03
start time: 3140.0
x4: 0
params: (none)

Cut: C03_50
start time: 3570.0
x4: 0
params: (none)

Cut: C04
start time: 4710.0
x4: 0
params: (none)

Cut: C04_30
start time: 5310.0
x4: 0
params: (none)

Cut: C04_40
start time: 5720.0
x4: 0
params: (none)

Cut: C04_50
start time: 6045.0
x4: 0
params: (none)

Cut: C05
start time: 7070.0
x4: 0
params: (none)

Cut: C06
start time: 7840.0
x4: 0
params: (none)

Cut: C07
start time: 8440.0
x4: 0
params: (none)

Cut: C08
start time: 9070.0
x4: 0
params: (none)

Cut: C09
start time: 9430.0
x4: 0
params: (none)

Cut: C10
start time: 10230.0
x4: 0
params: (none)

Cut: C11
start time: 10670.0
x4: 0
params: (none)

Cut: C12
start time: 11170.0
x4: 0
params: (none)


===== Actors =====

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

Actor: VoicePlayActor[1]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[2]
concurrent clips: 1
actions: ['Event_SetFoliageShadowParamForTimeline']
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
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventNaviPlayLipSync', 'EventNaviStopLipSync']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Npc_Navi/workspace.pp__ModelProject.gyml

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
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Player_Child/workspace.pp__ModelProject.gyml

Actor: Land_Kokiri_DekuTree_A_01
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_Kokiri_0140.root.as
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Land_Kokiri_DekuTree_A/workspace.pp__ModelProject.gyml

Actor: EventWorldManagerController[200]
concurrent clips: 1
actions: ['Event_SetFoliageWitherForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Land_Kokiri_DekuTree_A_04
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_Kokiri_0140.root.as
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Land_Kokiri_DekuTree_A/workspace.pp__ModelProject.gyml

Actor: Dm_Obj_Leaf[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetModelAlpha']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Dm_Obj_Leaf_A/workspace.pp__ModelProject.gyml

Actor: Dm_Obj_Leaf[B]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Dm_Obj_Leaf_A/workspace.pp__ModelProject.gyml

Actor: Dm_Obj_Leaf[C]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Dm_Obj_Leaf_A/workspace.pp__ModelProject.gyml

Actor: Dm_Obj_Leaf[D]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Dm_Obj_Leaf_A/workspace.pp__ModelProject.gyml

Actor: Dm_Obj_Leaf[E]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Dm_Obj_Leaf_A/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Fairy[4]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetFairyColor']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Fairy[2]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetFairyColor']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Fairy[1]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetFairyColor']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Fairy[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetFairyColor']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetFoliageWitherForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: []
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Npc_Kokiri_006_Child[0]
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
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Npc_Kokiri_MC_Mido/workspace.pp__ModelProject.gyml

Actor: Npc_Kokiri_Fado_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Npc_Kokiri_WC_Saria/workspace.pp__ModelProject.gyml

Actor: Npc_Kokiri_011_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Npc_Kokiri_WC_Saria/workspace.pp__ModelProject.gyml

Actor: Npc_Kokiri_013_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0140/Dm_Kokiri_0140_Npc_Kokiri_WC_Saria/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 89.88179779052734
- 115.70989990234375
- -27.32608985900879
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 180.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
               duration: 720.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#39, concurrent=1)
               duration: 720.0
               Near: 0.10000000149011612
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#55, concurrent=0)
               duration: 720.0
               EndBluarLevel: 1.0
               EndDistance: 5.0
               EndFNumber: 12.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.0
               StartFNumber: 12.0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#82, concurrent=0)
               duration: 12470.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#83, concurrent=0)
               duration: 720.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#107, concurrent=0)
               duration: 720.0
               ASName: C01-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#120, concurrent=1)
               duration: 720.0
[      0.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#121, concurrent=0)
               duration: 720.0
               ASName: C01-Land_Kokiri_DekuTree_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#134, concurrent=0)
               duration: 720.0
               ASName: C01-Land_Kokiri_DekuTree_02-A-0
               ClothWarpMode: 3
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Locator[0] - EventDoNothing (#164, concurrent=0)
               duration: 12440.0
               IsWaitEnd: true
[    165.0] E VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
               duration: 451.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_000_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[    180.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    616.0] L VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
[    720.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
[    720.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#39, concurrent=1)
[    720.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#55, concurrent=0)
[    720.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#83, concurrent=0)
[    720.0] L Player_Event[0] - EventPlayASForTimeline (#107, concurrent=0)
[    720.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#120, concurrent=1)
[    720.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#121, concurrent=0)
[    720.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#134, concurrent=0)
[    720.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
               duration: 830.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01_30-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    720.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#40, concurrent=1)
               duration: 830.0
               Near: 0.30000001192092896
[    720.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#56, concurrent=0)
               duration: 830.0
               EndBluarLevel: 1.5
               EndDistance: 37.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 37.0
               StartFNumber: 30.0
[    720.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#122, concurrent=0)
               duration: 830.0
               ASName: C01_30-Land_Kokiri_DekuTree_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    720.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#135, concurrent=0)
               duration: 830.0
               ASName: C01_30-Land_Kokiri_DekuTree_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    726.0] E VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
               duration: 746.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_001_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   1472.0] L VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
[   1550.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
[   1550.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#40, concurrent=1)
[   1550.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#56, concurrent=0)
[   1550.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#122, concurrent=0)
[   1550.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#135, concurrent=0)
[   1550.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
               duration: 190.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1550.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#41, concurrent=1)
               duration: 190.0
               Near: 0.30000001192092896
[   1550.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#57, concurrent=0)
               duration: 190.0
               EndBluarLevel: 1.2999999523162842
               EndDistance: 1.25
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2999999523162842
               StartDistance: 1.25
               StartFNumber: 70.0
[   1550.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#84, concurrent=0)
               duration: 190.0
               ASName: C01_50-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1550.0] E Player_Event[0] - EventPlayASForTimeline (#108, concurrent=0)
               duration: 190.0
               ASName: C01_50-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1570.0] E VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
               duration: 95.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   1600.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#97, concurrent=1)
               duration: 67.0
[   1665.0] L VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
[   1667.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#97, concurrent=1)
[   1667.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#98, concurrent=1)
               duration: 32.0
[   1699.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#98, concurrent=1)
[   1710.0] E VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
               duration: 797.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_003_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   1740.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
[   1740.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#41, concurrent=1)
[   1740.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#57, concurrent=0)
[   1740.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#84, concurrent=0)
[   1740.0] L Player_Event[0] - EventPlayASForTimeline (#108, concurrent=0)
[   1740.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
               duration: 830.0
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
[   1740.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#42, concurrent=1)
               duration: 830.0
               Near: 0.30000001192092896
[   1740.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#58, concurrent=0)
               duration: 830.0
               EndBluarLevel: 0.20000000298023224
               EndDistance: 13.5
               EndFNumber: 23.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.20000000298023224
               StartDistance: 13.5
               StartFNumber: 23.0
[   1740.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#85, concurrent=0)
               duration: 830.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1740.0] E Player_Event[0] - EventPlayASForTimeline (#109, concurrent=0)
               duration: 830.0
               ASName: C02-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1740.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#123, concurrent=0)
               duration: 830.0
               ASName: C02-Land_Kokiri_DekuTree_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1740.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#136, concurrent=0)
               duration: 830.0
               ASName: C02-Land_Kokiri_DekuTree_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2507.0] L VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
[   2553.0] E VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
               duration: 553.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_004_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   2570.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
[   2570.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#42, concurrent=1)
[   2570.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#58, concurrent=0)
[   2570.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#85, concurrent=0)
[   2570.0] L Player_Event[0] - EventPlayASForTimeline (#109, concurrent=0)
[   2570.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#123, concurrent=0)
[   2570.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#136, concurrent=0)
[   2570.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
               duration: 570.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C02_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2570.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#43, concurrent=1)
               duration: 570.0
               Near: 0.10000000149011612
[   2570.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#59, concurrent=0)
               duration: 570.0
               EndBluarLevel: 1.5
               EndDistance: 17.0
               EndFNumber: 2.700000047683716
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 17.0
               StartFNumber: 2.700000047683716
[   2570.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#124, concurrent=0)
               duration: 570.0
               ASName: C02_50-Land_Kokiri_DekuTree_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2570.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#137, concurrent=0)
               duration: 570.0
               ASName: C02_50-Land_Kokiri_DekuTree_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3106.0] L VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
[   3140.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
[   3140.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#43, concurrent=1)
[   3140.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#59, concurrent=0)
[   3140.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#124, concurrent=0)
[   3140.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#137, concurrent=0)
[   3140.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
               duration: 430.0
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
[   3140.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#44, concurrent=1)
               duration: 430.0
               Near: 0.30000001192092896
[   3140.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#60, concurrent=0)
               duration: 240.0
               EndBluarLevel: 1.0
               EndDistance: 3.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.5
               StartFNumber: 24.0
[   3140.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 430.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3140.0] E Player_Event[0] - EventPlayASForTimeline (#110, concurrent=0)
               duration: 430.0
               ASName: C03-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3140.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#125, concurrent=0)
               duration: 430.0
               ASName: C03-Land_Kokiri_DekuTree_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3140.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#138, concurrent=0)
               duration: 430.0
               ASName: C03-Land_Kokiri_DekuTree_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3162.0] E VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
               duration: 89.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   3192.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#99, concurrent=1)
               duration: 61.0
[   3251.0] L VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
[   3253.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#99, concurrent=1)
[   3253.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#100, concurrent=1)
               duration: 46.0
[   3299.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#100, concurrent=1)
[   3380.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#60, concurrent=0)
[   3380.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#61, concurrent=0)
               duration: 190.0
               EndBluarLevel: 1.0
               EndDistance: 3.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.0
               StartFNumber: 15.0
[   3403.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 536.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_006_b
               OffsetFrame: 40
               Speaker: Land_Kokiri_DekuTree_A_01
[   3570.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
[   3570.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#44, concurrent=1)
[   3570.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#61, concurrent=0)
[   3570.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#86, concurrent=0)
[   3570.0] L Player_Event[0] - EventPlayASForTimeline (#110, concurrent=0)
[   3570.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#125, concurrent=0)
[   3570.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#138, concurrent=0)
[   3570.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
               duration: 1140.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3570.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#45, concurrent=1)
               duration: 1140.0
               Near: 0.30000001192092896
[   3570.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#62, concurrent=0)
               duration: 479.0
               EndBluarLevel: 1.0
               EndDistance: 0.699999988079071
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.0
               StartFNumber: 72.0
[   3570.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#87, concurrent=0)
               duration: 1140.0
               ASName: C03_50-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3570.0] E Player_Event[0] - EventPlayASForTimeline (#111, concurrent=0)
               duration: 1140.0
               ASName: C03_50-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3939.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[   3962.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 639.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_007_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   4049.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#62, concurrent=0)
[   4049.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#63, concurrent=0)
               duration: 661.0
               EndBluarLevel: 1.0
               EndDistance: 0.699999988079071
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 0.699999988079071
               StartFNumber: 100.0
[   4601.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[   4710.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
[   4710.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#45, concurrent=1)
[   4710.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#63, concurrent=0)
[   4710.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#87, concurrent=0)
[   4710.0] L Player_Event[0] - EventPlayASForTimeline (#111, concurrent=0)
[   4710.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
               duration: 600.0
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
[   4710.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#46, concurrent=1)
               duration: 600.0
               Near: 0.5
[   4710.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#64, concurrent=0)
               duration: 600.0
               EndBluarLevel: 0.800000011920929
               EndDistance: 38.0
               EndFNumber: 6.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.800000011920929
               StartDistance: 38.0
               StartFNumber: 6.0
[   4710.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#88, concurrent=0)
               duration: 600.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4710.0] E Player_Event[0] - EventPlayASForTimeline (#112, concurrent=0)
               duration: 600.0
               ASName: C04-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4710.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#126, concurrent=0)
               duration: 600.0
               ASName: C04-Land_Kokiri_DekuTree_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4710.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#139, concurrent=0)
               duration: 600.0
               ASName: C04-Land_Kokiri_DekuTree_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4716.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 539.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_008_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   5255.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[   5300.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 657.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_009_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   5310.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
[   5310.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#46, concurrent=1)
[   5310.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#64, concurrent=0)
[   5310.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#88, concurrent=0)
[   5310.0] L Player_Event[0] - EventPlayASForTimeline (#112, concurrent=0)
[   5310.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#126, concurrent=0)
[   5310.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#139, concurrent=0)
[   5310.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
               duration: 410.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C04_30-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5310.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#47, concurrent=1)
               duration: 410.0
               Near: 0.10000000149011612
[   5310.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#65, concurrent=0)
               duration: 410.0
               EndBluarLevel: 0.699999988079071
               EndDistance: 18.0
               EndFNumber: 2.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.699999988079071
               StartDistance: 18.0
               StartFNumber: 2.5
[   5310.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#127, concurrent=0)
               duration: 410.0
               ASName: C04_30-Land_Kokiri_DekuTree_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5310.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#140, concurrent=0)
               duration: 410.0
               ASName: C04_30-Land_Kokiri_DekuTree_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5720.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
[   5720.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#47, concurrent=1)
[   5720.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#65, concurrent=0)
[   5720.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#127, concurrent=0)
[   5720.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#140, concurrent=0)
[   5720.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
               duration: 325.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C04_40-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5720.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#66, concurrent=0)
               duration: 325.0
               EndBluarLevel: 0.800000011920929
               EndDistance: 15.0
               EndFNumber: 6.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.800000011920929
               StartDistance: 15.0
               StartFNumber: 6.0
[   5720.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 325.0
               ASName: C04_40-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5720.0] E Player_Event[0] - EventPlayASForTimeline (#113, concurrent=0)
               duration: 325.0
               ASName: C04_40-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5957.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   6045.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
[   6045.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#66, concurrent=0)
[   6045.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#89, concurrent=0)
[   6045.0] L Player_Event[0] - EventPlayASForTimeline (#113, concurrent=0)
[   6045.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
               duration: 1025.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C04_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6045.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#67, concurrent=0)
               duration: 1025.0
               EndBluarLevel: 0.5
               EndDistance: 19.0
               EndFNumber: 3.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 19.0
               StartFNumber: 3.0
[   6045.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#90, concurrent=0)
               duration: 1025.0
               ASName: C04_50-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6045.0] E Player_Event[0] - EventPlayASForTimeline (#114, concurrent=0)
               duration: 1025.0
               ASName: C04_50-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6045.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#128, concurrent=0)
               duration: 1025.0
               ASName: C04_50-Land_Kokiri_DekuTree_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6045.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#141, concurrent=0)
               duration: 1025.0
               ASName: C04_50-Land_Kokiri_DekuTree_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6122.0] E VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
               duration: 460.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_010_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   6582.0] L VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
[   6770.0] E VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
               duration: 241.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_011_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   7011.0] L VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
[   7070.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
[   7070.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#67, concurrent=0)
[   7070.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#90, concurrent=0)
[   7070.0] L Player_Event[0] - EventPlayASForTimeline (#114, concurrent=0)
[   7070.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#128, concurrent=0)
[   7070.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#141, concurrent=0)
[   7070.0] E EventWorldManagerController[2] - Event_SetFoliageShadowParamForTimeline (#19, concurrent=0)
               duration: 770.0
               IsWaitEnd: true
[   7070.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
               duration: 770.0
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
[   7070.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#48, concurrent=1)
               duration: 770.0
               Near: 0.30000001192092896
[   7070.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#68, concurrent=0)
               duration: 630.0
               EndBluarLevel: 0.5
               EndDistance: 20.0
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 10.0
               StartFNumber: 5.0
[   7070.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#129, concurrent=0)
               duration: 770.0
               ASName: C05-Land_Kokiri_DekuTree_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7070.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#142, concurrent=0)
               duration: 770.0
               ASName: C05-Land_Kokiri_DekuTree_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7564.0] E EventWorldManagerController[200] - Event_SetFoliageWitherForTimeline (#133, concurrent=0)
               duration: 4906.0
               DurationSec: 5.0
               IsWaitEnd: true
               WitherRateEnd: 1.0
               WitherRateStart: 0.0
[   7700.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#68, concurrent=0)
[   7700.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#69, concurrent=0)
               duration: 140.0
               EndBluarLevel: 0.5
               EndDistance: 20.0
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 20.0
               StartFNumber: 5.0
[   7815.0] E VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
               duration: 247.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_012_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   7840.0] L EventWorldManagerController[2] - Event_SetFoliageShadowParamForTimeline (#19, concurrent=0)
[   7840.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
[   7840.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#48, concurrent=1)
[   7840.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#69, concurrent=0)
[   7840.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#129, concurrent=0)
[   7840.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#142, concurrent=0)
[   7840.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
               duration: 600.0
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
[   7840.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#70, concurrent=0)
               duration: 270.0
               EndBluarLevel: 2.0
               EndDistance: 4.0
               EndFNumber: 18.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.0
               StartFNumber: 10.0
[   7840.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#91, concurrent=0)
               duration: 600.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7840.0] E Player_Event[0] - EventPlayASForTimeline (#115, concurrent=0)
               duration: 600.0
               ASName: C06-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8062.0] L VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
[   8110.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#70, concurrent=0)
[   8110.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#71, concurrent=0)
               duration: 330.0
               EndBluarLevel: 1.0
               EndDistance: 4.0
               EndFNumber: 14.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.0
               StartFNumber: 18.0
[   8116.0] E VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
               duration: 266.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_013_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   8382.0] L VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
[   8440.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
[   8440.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#71, concurrent=0)
[   8440.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#91, concurrent=0)
[   8440.0] L Player_Event[0] - EventPlayASForTimeline (#115, concurrent=0)
[   8440.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
               duration: 630.0
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
[   8440.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#49, concurrent=1)
               duration: 630.0
               Near: 0.10000000149011612
[   8440.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#72, concurrent=0)
               duration: 630.0
               EndBluarLevel: 0.0
               EndDistance: 11.0
               EndFNumber: 2.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 11.0
               StartFNumber: 2.0
[   8440.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#92, concurrent=0)
               duration: 630.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8440.0] E Player_Event[0] - EventPlayASForTimeline (#116, concurrent=0)
               duration: 630.0
               ASName: C07-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8440.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#130, concurrent=0)
               duration: 630.0
               ASName: AS-C07-Land_Kokiri_DekuTree_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8440.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#143, concurrent=0)
               duration: 630.0
               ASName: AS-C07-Land_Kokiri_DekuTree_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9070.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
[   9070.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#49, concurrent=1)
[   9070.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#72, concurrent=0)
[   9070.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#92, concurrent=0)
[   9070.0] L Player_Event[0] - EventPlayASForTimeline (#116, concurrent=0)
[   9070.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#130, concurrent=0)
[   9070.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#143, concurrent=0)
[   9070.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
               duration: 360.0
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
[   9070.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#50, concurrent=1)
               duration: 360.0
               Near: 0.10000000149011612
[   9070.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#73, concurrent=0)
               duration: 360.0
               EndBluarLevel: 1.5
               EndDistance: 90.0
               EndFNumber: 1.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 90.0
               StartFNumber: 1.5
[   9070.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#131, concurrent=0)
               duration: 1600.0
               ASName: AS-C08-Land_Kokiri_DekuTree_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9070.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#144, concurrent=0)
               duration: 1600.0
               ASName: AS-C08-Land_Kokiri_DekuTree_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9070.0] E Dm_Npc_Fairy[4] - EventPlayASForTimeline (#152, concurrent=0)
               duration: 360.0
               ASName: C08-Npc_Navi-F-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9070.0] E Dm_Npc_Fairy[4] - EventTriggerSetFairyColor (#153, concurrent=1)
               duration: 360.0
               Color: 4
[   9070.0] E Dm_Npc_Fairy[2] - EventPlayASForTimeline (#154, concurrent=0)
               duration: 360.0
               ASName: C08-Npc_Navi-D-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9070.0] E Dm_Npc_Fairy[2] - EventTriggerSetFairyColor (#155, concurrent=1)
               duration: 360.0
               Color: 2
[   9070.0] E Dm_Npc_Fairy[1] - EventPlayASForTimeline (#156, concurrent=0)
               duration: 360.0
               ASName: C08-Npc_Navi-C-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9070.0] E Dm_Npc_Fairy[1] - EventTriggerSetFairyColor (#157, concurrent=1)
               duration: 360.0
               Color: 5
[   9070.0] E Dm_Npc_Fairy[0] - EventPlayASForTimeline (#158, concurrent=0)
               duration: 360.0
               ASName: C08-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9070.0] E Dm_Npc_Fairy[0] - EventTriggerSetFairyColor (#159, concurrent=1)
               duration: 360.0
               Color: 5
[   9070.0] E Npc_Kokiri_006_Child[0] - EventPlayASForTimeline (#160, concurrent=0)
               duration: 360.0
               ASName: C08-Npc_Kokiri_MC_Mido-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9070.0] E Npc_Kokiri_Fado_Child[0] - EventPlayASForTimeline (#161, concurrent=0)
               duration: 360.0
               ASName: C08-Npc_Kokiri_WC_Saria-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9070.0] E Npc_Kokiri_011_Child[0] - EventPlayASForTimeline (#162, concurrent=0)
               duration: 360.0
               ASName: C08-Npc_Kokiri_WC_Saria-C-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9070.0] E Npc_Kokiri_013_Child[0] - EventPlayASForTimeline (#163, concurrent=0)
               duration: 360.0
               ASName: C08-Npc_Kokiri_WC_Saria-D-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9430.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
[   9430.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#50, concurrent=1)
[   9430.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#73, concurrent=0)
[   9430.0] L Dm_Npc_Fairy[4] - EventPlayASForTimeline (#152, concurrent=0)
[   9430.0] L Dm_Npc_Fairy[4] - EventTriggerSetFairyColor (#153, concurrent=1)
[   9430.0] L Dm_Npc_Fairy[2] - EventPlayASForTimeline (#154, concurrent=0)
[   9430.0] L Dm_Npc_Fairy[2] - EventTriggerSetFairyColor (#155, concurrent=1)
[   9430.0] L Dm_Npc_Fairy[1] - EventPlayASForTimeline (#156, concurrent=0)
[   9430.0] L Dm_Npc_Fairy[1] - EventTriggerSetFairyColor (#157, concurrent=1)
[   9430.0] L Dm_Npc_Fairy[0] - EventPlayASForTimeline (#158, concurrent=0)
[   9430.0] L Dm_Npc_Fairy[0] - EventTriggerSetFairyColor (#159, concurrent=1)
[   9430.0] L Npc_Kokiri_006_Child[0] - EventPlayASForTimeline (#160, concurrent=0)
[   9430.0] L Npc_Kokiri_Fado_Child[0] - EventPlayASForTimeline (#161, concurrent=0)
[   9430.0] L Npc_Kokiri_011_Child[0] - EventPlayASForTimeline (#162, concurrent=0)
[   9430.0] L Npc_Kokiri_013_Child[0] - EventPlayASForTimeline (#163, concurrent=0)
[   9430.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
               duration: 800.0
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
[   9430.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#51, concurrent=1)
               duration: 800.0
               Near: 0.10000000149011612
[   9430.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#74, concurrent=0)
               duration: 800.0
               EndBluarLevel: 1.0
               EndDistance: 2.0
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.0
               StartFNumber: 70.0
[   9430.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#93, concurrent=0)
               duration: 800.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9430.0] E Player_Event[0] - EventPlayASForTimeline (#117, concurrent=0)
               duration: 800.0
               ASName: C09-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9430.0] E Dm_Obj_Leaf[0] - EventPlayASForTimeline (#146, concurrent=0)
               duration: 800.0
               ASName: C09-Dm_Obj_Leaf_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9430.0] E Dm_Obj_Leaf[B] - EventPlayASForTimeline (#148, concurrent=0)
               duration: 800.0
               ASName: C09-Dm_Obj_Leaf_A-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9430.0] E Dm_Obj_Leaf[C] - EventPlayASForTimeline (#149, concurrent=0)
               duration: 800.0
               ASName: C09-Dm_Obj_Leaf_A-C-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9430.0] E Dm_Obj_Leaf[D] - EventPlayASForTimeline (#150, concurrent=0)
               duration: 800.0
               ASName: C09-Dm_Obj_Leaf_A-D-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9430.0] E Dm_Obj_Leaf[E] - EventPlayASForTimeline (#151, concurrent=0)
               duration: 800.0
               ASName: C09-Dm_Obj_Leaf_A-E-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9976.0] E Dm_Obj_Leaf[0] - EventTriggerSetModelAlpha (#147, concurrent=1)
               duration: 254.0
               Alpha: 0.0
[  10230.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
[  10230.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#51, concurrent=1)
[  10230.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#74, concurrent=0)
[  10230.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#93, concurrent=0)
[  10230.0] L Player_Event[0] - EventPlayASForTimeline (#117, concurrent=0)
[  10230.0] L Dm_Obj_Leaf[0] - EventPlayASForTimeline (#146, concurrent=0)
[  10230.0] L Dm_Obj_Leaf[0] - EventTriggerSetModelAlpha (#147, concurrent=1)
[  10230.0] L Dm_Obj_Leaf[B] - EventPlayASForTimeline (#148, concurrent=0)
[  10230.0] L Dm_Obj_Leaf[C] - EventPlayASForTimeline (#149, concurrent=0)
[  10230.0] L Dm_Obj_Leaf[D] - EventPlayASForTimeline (#150, concurrent=0)
[  10230.0] L Dm_Obj_Leaf[E] - EventPlayASForTimeline (#151, concurrent=0)
[  10230.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
               duration: 440.0
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
[  10230.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#52, concurrent=1)
               duration: 440.0
               Near: 0.30000001192092896
[  10230.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#75, concurrent=0)
               duration: 170.0
               EndBluarLevel: 2.0
               EndDistance: 1.0
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.8500000238418579
               StartFNumber: 120.0
[  10230.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#94, concurrent=0)
               duration: 440.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10303.0] E VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
               duration: 328.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_015_c
               OffsetFrame: 30
               Speaker: Npc_Navi
[  10333.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#101, concurrent=1)
               duration: 300.0
[  10400.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#75, concurrent=0)
[  10400.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#76, concurrent=0)
               duration: 270.0
               EndBluarLevel: 2.0
               EndDistance: 1.0
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.0
               StartFNumber: 120.0
[  10631.0] L VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
[  10633.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#101, concurrent=1)
[  10633.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#102, concurrent=1)
               duration: 100.0
[  10670.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
[  10670.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#52, concurrent=1)
[  10670.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#76, concurrent=0)
[  10670.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#94, concurrent=0)
[  10670.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#131, concurrent=0)
[  10670.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#144, concurrent=0)
[  10670.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
               duration: 500.0
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
[  10670.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#53, concurrent=1)
               duration: 500.0
               Near: 0.30000001192092896
[  10670.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#77, concurrent=0)
               duration: 500.0
               EndBluarLevel: 1.0
               EndDistance: 0.699999988079071
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 0.699999988079071
               StartFNumber: 100.0
[  10670.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#95, concurrent=0)
               duration: 500.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10670.0] E Player_Event[0] - EventPlayASForTimeline (#118, concurrent=0)
               duration: 500.0
               ASName: C11-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10670.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#132, concurrent=0)
               duration: 1800.0
               ASName: AS-C12-Land_Kokiri_DekuTree_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10670.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#145, concurrent=0)
               duration: 1800.0
               ASName: AS-C12-Land_Kokiri_DekuTree_02-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10733.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#102, concurrent=1)
[  10836.0] E VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
               duration: 292.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_015_d
               OffsetFrame: 30
               Speaker: Npc_Navi
[  10866.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#103, concurrent=1)
               duration: 264.0
[  11048.0] E VoicePlayActor[1] - EventStartVoice (#18, concurrent=0)
               duration: 78.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0140:Dm_Kokiri_0140_Text_016_b
               OffsetFrame: 30
               Speaker: Player_Child
[  11126.0] L VoicePlayActor[1] - EventStartVoice (#18, concurrent=0)
[  11128.0] L VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
[  11130.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#103, concurrent=1)
[  11130.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#104, concurrent=1)
               duration: 79.0
[  11170.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
[  11170.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#53, concurrent=1)
[  11170.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#77, concurrent=0)
[  11170.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#95, concurrent=0)
[  11170.0] L Player_Event[0] - EventPlayASForTimeline (#118, concurrent=0)
[  11170.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
               duration: 1300.0
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
[  11170.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#54, concurrent=1)
               duration: 1300.0
               Near: 0.10000000149011612
[  11170.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#78, concurrent=0)
               duration: 250.0
               EndBluarLevel: 1.0
               EndDistance: 1.0
               EndFNumber: 48.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.0
               StartFNumber: 48.0
[  11170.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#96, concurrent=0)
               duration: 1300.0
               ASName: C12-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  11170.0] E Player_Event[0] - EventPlayASForTimeline (#119, concurrent=0)
               duration: 1300.0
               ASName: C12-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  11209.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#104, concurrent=1)
[  11420.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#78, concurrent=0)
[  11420.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#79, concurrent=0)
               duration: 230.0
               EndBluarLevel: 1.0
               EndDistance: 12.0
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.0
               StartFNumber: 48.0
[  11650.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#79, concurrent=0)
[  11650.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#80, concurrent=0)
               duration: 550.0
               EndBluarLevel: 0.5
               EndDistance: 20.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 12.0
               StartFNumber: 40.0
[  11725.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#105, concurrent=1)
               duration: 152.0
[  11877.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#105, concurrent=1)
[  11877.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#106, concurrent=1)
               duration: 79.0
[  11956.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#106, concurrent=1)
[  12110.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 360.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[  12200.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#80, concurrent=0)
[  12200.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#81, concurrent=0)
               duration: 270.0
               EndBluarLevel: 0.5
               EndDistance: 20.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 20.0
               StartFNumber: 30.0
[  12440.0] L Dm_Locator[0] - EventDoNothing (#164, concurrent=0)
[  12470.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[  12470.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
[  12470.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#54, concurrent=1)
[  12470.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#81, concurrent=0)
[  12470.0] L Npc_Navi - EventGoOffstageForUser (#82, concurrent=0)
[  12470.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#96, concurrent=0)
[  12470.0] L Player_Event[0] - EventPlayASForTimeline (#119, concurrent=0)
[  12470.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#132, concurrent=0)
[  12470.0] L EventWorldManagerController[200] - Event_SetFoliageWitherForTimeline (#133, concurrent=0)
[  12470.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#145, concurrent=0)
