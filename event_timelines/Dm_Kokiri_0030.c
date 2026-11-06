-------- Event timeline: Dm_Kokiri_0030 --------
actors: 30
clips: 245
oneshots: 0
cuts: 30
duration: 12545.0
subtimelines: ['Dm_Kokiri_0030_Effect', 'Dm_Kokiri_0030_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C27
start time: 0.0
x4: 0
params: (none)

Cut: C29
start time: 2436.0
x4: 0
params: (none)

Cut: C30
start time: 2909.0
x4: 0
params: (none)

Cut: C31
start time: 3698.0
x4: 0
params: (none)

Cut: C32
start time: 4473.0
x4: 0
params: (none)

Cut: C33
start time: 4651.0
x4: 0
params: (none)

Cut: C34
start time: 5082.0
x4: 0
params: (none)

Cut: C01
start time: 5438.0
x4: 0
params: (none)

Cut: C02
start time: 5608.0
x4: 0
params: (none)

Cut: C03
start time: 5687.0
x4: 0
params: (none)

Cut: C04
start time: 5857.0
x4: 0
params: (none)

Cut: C05
start time: 6137.0
x4: 0
params: (none)

Cut: C06
start time: 6637.0
x4: 0
params: (none)

Cut: C07
start time: 6907.0
x4: 0
params: (none)

Cut: C08
start time: 7227.0
x4: 0
params: (none)

Cut: C09
start time: 7767.0
x4: 0
params: (none)

Cut: C11
start time: 8577.0
x4: 0
params: (none)

Cut: C12
start time: 9027.0
x4: 0
params: (none)

Cut: C13
start time: 9357.0
x4: 0
params: (none)

Cut: C14
start time: 9706.0
x4: 0
params: (none)

Cut: C15
start time: 10194.0
x4: 0
params: (none)

Cut: C16
start time: 10344.0
x4: 0
params: (none)

Cut: C17
start time: 10618.0
x4: 0
params: (none)

Cut: C18
start time: 11041.0
x4: 0
params: (none)

Cut: C19
start time: 11340.0
x4: 0
params: (none)

Cut: C22
start time: 11740.0
x4: 0
params: (none)

Cut: C23
start time: 11820.0
x4: 0
params: (none)

Cut: C25
start time: 11920.0
x4: 0
params: (none)

Cut: C26
start time: 12135.0
x4: 0
params: (none)


===== Actors =====

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeInForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[1]
concurrent clips: 1
actions: ['EventPreComputedCullingDisableUntilEventEndForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline', 'EventResetToInGameParametersDoF']
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
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetModelLodManual']
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
UseEventAS: Work/AS/Root/Event/Dm_Kokiri_0030.root.as
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Player_Child/workspace.pp__ModelProject.gyml

Actor: Dm_Player_Child_Op[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_Kokiri_0030.root.as
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Player_Child/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventNaviPlayLipSync', 'EventNaviStopLipSync']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: VoicePlayActor[1]
concurrent clips: 1
actions: ['EventStartVoice']
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

Actor: Npc_Kokiri_Saria_Child[0]
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
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Kokiri_WC_Saria/workspace.pp__ModelProject.gyml

Actor: Dm_Item_Ocarina_Fairy[1]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_Item_Ocarina_Fairy/workspace.pp__ModelProject.gyml

Actor: Npc_Kokiri_Mido_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Kokiri_MC_Mido/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Fairy[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetFairyColor']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Kokiri_011_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Kokiri_WC_001/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Fairy[7]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetFairyColor']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Kokiri_012_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Kokiri_WC_001/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Fairy[2]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetFairyColor']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Kokiri_008_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Kokiri_MC_002/workspace.pp__ModelProject.gyml

Actor: Obj_LiftRock_A_02[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -45.790000915527344
- 111.79000091552734
- -27.84000015258789
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Npc_Fairy[3]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetFairyColor']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Kokiri_013_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Kokiri_WC_001/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Fairy[4]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetFairyColor']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Navi/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Kokiri_MC_Mido/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Fairy[56]
concurrent clips: 2
actions: ['EventTriggerSetFairyColor', 'EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Obj_ChildHat_A_01[0]
concurrent clips: 1
actions: ['EventTriggerParticipateEvent']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -47.35319900512695
- 119.36900329589844
- 16.514299392700195
Rotation:
- 0.0
- -9.579999923706055
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Obj_ChildShoes_A_01[0]
concurrent clips: 1
actions: ['EventTriggerParticipateEvent']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -46.68709945678711
- 118.43699645996094
- 15.451499938964844
Rotation:
- 0.0
- 73.77999877929688
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Land_Kokiri_DekuTree_A_04
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 103.0
- 109.5199966430664
- -29.6299991607666
Rotation:
- 0.0
- -81.85099792480469
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Land_Kokiri_DekuTree_B/workspace.pp__ModelProject.gyml

Actor: Land_Kokiri_DekuTree_A_01
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 103.0
- 109.5199966430664
- -29.6299991607666
Rotation:
- 0.0
- -81.85099792480469
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0030/Dm_Kokiri_0030_Land_Kokiri_DekuTree_A/workspace.pp__ModelProject.gyml

Actor: SoundSystemActor[0]
concurrent clips: 2
actions: ['EventTriggerStartInGameBgm', 'EventTriggerSoundStartAreaBgm']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 300.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E GameSystemActor[1] - EventPreComputedCullingDisableUntilEventEndForTimeline (#3, concurrent=0)
               duration: 10.0
               IsWaitEnd: false
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 2436.0
               EndBluarLevel: 0.5
               EndDistance: 10.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 10.0
               StartFNumber: 10.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
               duration: 2436.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C27-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
               duration: 2436.0
               Near: 1.0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#100, concurrent=0)
               duration: 11920.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#235, concurrent=0)
               duration: 2436.0
               ASName: C27-Land_Kokiri_DekuTree_A-B-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#239, concurrent=0)
               duration: 2436.0
               ASName: C27-Land_Kokiri_DekuTree_A-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     10.0] L GameSystemActor[1] - EventPreComputedCullingDisableUntilEventEndForTimeline (#3, concurrent=0)
[    100.0] E VoicePlayActor[0] - EventStartVoice (#168, concurrent=0)
               duration: 239.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_000_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[    300.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    339.0] L VoicePlayActor[0] - EventStartVoice (#168, concurrent=0)
[    341.0] E VoicePlayActor[0] - EventStartVoice (#169, concurrent=0)
               duration: 287.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_001_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[    628.0] L VoicePlayActor[0] - EventStartVoice (#169, concurrent=0)
[    702.0] E VoicePlayActor[0] - EventStartVoice (#170, concurrent=0)
               duration: 566.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_002_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   1268.0] L VoicePlayActor[0] - EventStartVoice (#170, concurrent=0)
[   1332.0] E VoicePlayActor[1] - EventStartVoice (#165, concurrent=0)
               duration: 649.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_003_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   1981.0] L VoicePlayActor[1] - EventStartVoice (#165, concurrent=0)
[   1990.0] E VoicePlayActor[0] - EventStartVoice (#171, concurrent=0)
               duration: 247.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_004_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   2237.0] L VoicePlayActor[0] - EventStartVoice (#171, concurrent=0)
[   2260.0] E VoicePlayActor[0] - EventStartVoice (#172, concurrent=0)
               duration: 131.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_005_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   2391.0] L VoicePlayActor[0] - EventStartVoice (#172, concurrent=0)
[   2436.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   2436.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
[   2436.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
[   2436.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#235, concurrent=0)
[   2436.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#239, concurrent=0)
[   2436.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 473.0
               EndBluarLevel: 2.5
               EndDistance: 2.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 2.0
               StartFNumber: 20.0
[   2436.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
               duration: 473.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C29-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2436.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#67, concurrent=1)
               duration: 473.0
               Near: 0.800000011920929
[   2436.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#103, concurrent=0)
               duration: 473.0
               ASName: C29-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2448.0] E VoicePlayActor[0] - EventStartVoice (#173, concurrent=0)
               duration: 323.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_006_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   2771.0] L VoicePlayActor[0] - EventStartVoice (#173, concurrent=0)
[   2909.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   2909.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
[   2909.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#67, concurrent=1)
[   2909.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#103, concurrent=0)
[   2909.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 789.0
               EndBluarLevel: 0.5
               EndDistance: 13.5
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 13.5
               StartFNumber: 10.0
[   2909.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
               duration: 789.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C30-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2909.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#68, concurrent=1)
               duration: 789.0
               Near: 1.0
[   2909.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#104, concurrent=0)
               duration: 789.0
               ASName: C30-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2909.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#236, concurrent=0)
               duration: 789.0
               ASName: C30-Land_Kokiri_DekuTree_A-B-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2909.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#240, concurrent=0)
               duration: 789.0
               ASName: C30-Land_Kokiri_DekuTree_A-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3097.0] E VoicePlayActor[0] - EventStartVoice (#174, concurrent=0)
               duration: 211.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   3127.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#128, concurrent=1)
               duration: 183.0
[   3308.0] L VoicePlayActor[0] - EventStartVoice (#174, concurrent=0)
[   3310.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#128, concurrent=1)
[   3310.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#129, concurrent=1)
               duration: 23.0
[   3322.0] E VoicePlayActor[0] - EventStartVoice (#175, concurrent=0)
               duration: 121.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   3333.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#129, concurrent=1)
[   3352.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#130, concurrent=1)
               duration: 93.0
[   3443.0] L VoicePlayActor[0] - EventStartVoice (#175, concurrent=0)
[   3445.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#130, concurrent=1)
[   3445.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#131, concurrent=1)
               duration: 14.0
[   3459.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#131, concurrent=1)
[   3487.0] E VoicePlayActor[0] - EventStartVoice (#176, concurrent=0)
               duration: 179.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_009_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   3666.0] L VoicePlayActor[0] - EventStartVoice (#176, concurrent=0)
[   3695.0] E VoicePlayActor[1] - EventStartVoice (#166, concurrent=0)
               duration: 368.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_010_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   3698.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   3698.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
[   3698.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#68, concurrent=1)
[   3698.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#104, concurrent=0)
[   3698.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#236, concurrent=0)
[   3698.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#240, concurrent=0)
[   3698.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 775.0
               EndBluarLevel: 0.5
               EndDistance: 41.599998474121094
               EndFNumber: 4.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 41.599998474121094
               StartFNumber: 4.0
[   3698.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
               duration: 775.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C31-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3698.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#69, concurrent=1)
               duration: 775.0
               Near: 0.10000000149011612
[   3698.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#105, concurrent=0)
               duration: 775.0
               ASName: C31-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3698.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#237, concurrent=0)
               duration: 775.0
               ASName: C31-Land_Kokiri_DekuTree_A-B-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3698.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#241, concurrent=0)
               duration: 775.0
               ASName: C31-Land_Kokiri_DekuTree_A-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4040.0] E VoicePlayActor[0] - EventStartVoice (#177, concurrent=0)
               duration: 399.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_011_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   4063.0] L VoicePlayActor[1] - EventStartVoice (#166, concurrent=0)
[   4439.0] L VoicePlayActor[0] - EventStartVoice (#177, concurrent=0)
[   4473.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   4473.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
[   4473.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#69, concurrent=1)
[   4473.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#105, concurrent=0)
[   4473.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#237, concurrent=0)
[   4473.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#241, concurrent=0)
[   4473.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 178.0
               EndBluarLevel: 0.0
               EndDistance: 1.600000023841858
               EndFNumber: 53.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.600000023841858
               StartFNumber: 53.0
[   4473.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
               duration: 178.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C32-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4473.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#70, concurrent=1)
               duration: 178.0
               Near: 1.0
[   4473.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#106, concurrent=0)
               duration: 178.0
               ASName: C32-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4478.0] E VoicePlayActor[0] - EventStartVoice (#178, concurrent=0)
               duration: 145.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   4508.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#132, concurrent=1)
               duration: 117.0
[   4623.0] L VoicePlayActor[0] - EventStartVoice (#178, concurrent=0)
[   4625.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#132, concurrent=1)
[   4625.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#133, concurrent=1)
               duration: 14.0
[   4639.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#133, concurrent=1)
[   4651.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   4651.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
[   4651.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#70, concurrent=1)
[   4651.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#106, concurrent=0)
[   4651.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 431.0
               EndBluarLevel: 0.5
               EndDistance: 3.5
               EndFNumber: 18.799999237060547
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 3.5
               StartFNumber: 18.799999237060547
[   4651.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
               duration: 431.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C33-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4651.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#71, concurrent=1)
               duration: 431.0
               Near: 1.0
[   4651.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#107, concurrent=0)
               duration: 431.0
               ASName: C33-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4651.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#238, concurrent=0)
               duration: 431.0
               ASName: C33-Land_Kokiri_DekuTree_A-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4651.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#242, concurrent=0)
               duration: 431.0
               ASName: C33-Land_Kokiri_DekuTree_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4661.0] E VoicePlayActor[0] - EventStartVoice (#179, concurrent=0)
               duration: 392.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_013_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   5053.0] L VoicePlayActor[0] - EventStartVoice (#179, concurrent=0)
[   5082.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   5082.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
[   5082.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#71, concurrent=1)
[   5082.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#107, concurrent=0)
[   5082.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#238, concurrent=0)
[   5082.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#242, concurrent=0)
[   5082.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 356.0
               EndBluarLevel: 1.5
               EndDistance: 1.0499999523162842
               EndFNumber: 262.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.0499999523162842
               StartFNumber: 262.0
[   5082.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
               duration: 356.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C34-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5082.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#72, concurrent=1)
               duration: 356.0
               Near: 0.5
[   5082.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#108, concurrent=0)
               duration: 356.0
               ASName: C34-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5088.0] E VoicePlayActor[1] - EventStartVoice (#167, concurrent=0)
               duration: 187.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_014_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   5255.0] E VoicePlayActor[0] - EventStartVoice (#180, concurrent=0)
               duration: 162.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0020_Text_015_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   5275.0] L VoicePlayActor[1] - EventStartVoice (#167, concurrent=0)
[   5285.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#134, concurrent=1)
               duration: 134.0
[   5417.0] L VoicePlayActor[0] - EventStartVoice (#180, concurrent=0)
[   5419.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#134, concurrent=1)
[   5419.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#135, concurrent=1)
               duration: 14.0
[   5429.0] E Obj_LiftRock_A_02[0] - EventDoNothing (#222, concurrent=0)
               duration: 7107.0
               IsWaitEnd: true
[   5433.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#135, concurrent=1)
[   5438.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   5438.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
[   5438.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#72, concurrent=1)
[   5438.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#108, concurrent=0)
[   5438.0] E UISystemActor[0] - EventEventFadeInForTimeline (#1, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: true
               IsWaitEnd: true
[   5438.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 170.0
               EndBluarLevel: 0.5
               EndDistance: 4.0
               EndFNumber: 42.900001525878906
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 4.0
               StartFNumber: 38.0
[   5438.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
               duration: 170.0
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
[   5438.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#109, concurrent=0)
               duration: 170.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5438.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#136, concurrent=1)
               duration: 170.0
[   5538.0] L UISystemActor[0] - EventEventFadeInForTimeline (#1, concurrent=0)
[   5608.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   5608.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
[   5608.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#109, concurrent=0)
[   5608.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#136, concurrent=1)
[   5608.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 79.0
               EndBluarLevel: 2.200000047683716
               EndDistance: 1.059999942779541
               EndFNumber: 127.19999694824219
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.200000047683716
               StartDistance: 1.059999942779541
               StartFNumber: 127.19999694824219
[   5608.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
               duration: 79.0
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
[   5608.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#73, concurrent=1)
               duration: 79.0
               Near: 0.10000000149011612
[   5608.0] E Npc_Kokiri_Mido_Child[0] - EventPlayASForTimeline (#206, concurrent=0)
               duration: 79.0
               ASName: C02-Npc_Kokiri_MC_Mido-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5608.0] E Dm_Npc_Fairy[0] - EventPlayASForTimeline (#208, concurrent=0)
               duration: 79.0
               ASName: C02-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5608.0] E Dm_Npc_Fairy[0] - EventTriggerSetFairyColor (#210, concurrent=1)
               duration: 79.0
               Color: 3
[   5620.0] E VoicePlayActor[0] - EventStartVoice (#181, concurrent=0)
               duration: 55.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Mido_Child
[   5675.0] L VoicePlayActor[0] - EventStartVoice (#181, concurrent=0)
[   5687.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   5687.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
[   5687.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#73, concurrent=1)
[   5687.0] L Npc_Kokiri_Mido_Child[0] - EventPlayASForTimeline (#206, concurrent=0)
[   5687.0] L Dm_Npc_Fairy[0] - EventPlayASForTimeline (#208, concurrent=0)
[   5687.0] L Dm_Npc_Fairy[0] - EventTriggerSetFairyColor (#210, concurrent=1)
[   5687.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 86.0
               EndBluarLevel: 0.5
               EndDistance: 2.512500047683716
               EndFNumber: 51.099998474121094
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 2.512500047683716
               StartFNumber: 51.099998474121094
[   5687.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
               duration: 170.0
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
[   5687.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#74, concurrent=1)
               duration: 450.0
               Near: 0.10000000149011612
[   5687.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#110, concurrent=0)
               duration: 170.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5687.0] E Npc_Kokiri_Mido_Child[0] - EventPlayASForTimeline (#207, concurrent=0)
               duration: 170.0
               ASName: C03-Npc_Kokiri_MC_Mido-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5687.0] E Dm_Npc_Fairy[0] - EventPlayASForTimeline (#209, concurrent=0)
               duration: 170.0
               ASName: C03-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5687.0] E Dm_Npc_Fairy[0] - EventTriggerSetFairyColor (#211, concurrent=1)
               duration: 170.0
               Color: 3
[   5687.0] E Npc_Kokiri_011_Child[0] - EventPlayASForTimeline (#212, concurrent=0)
               duration: 170.0
               ASName: C03-Npc_Kokiri_WC_001-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5687.0] E Dm_Npc_Fairy[7] - EventPlayASForTimeline (#214, concurrent=0)
               duration: 170.0
               ASName: C03-Npc_Navi-C-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5687.0] E Dm_Npc_Fairy[7] - EventTriggerSetFairyColor (#216, concurrent=1)
               duration: 170.0
               Color: 2
[   5713.0] E VoicePlayActor[0] - EventStartVoice (#182, concurrent=0)
               duration: 58.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Mido_Child
[   5771.0] L VoicePlayActor[0] - EventStartVoice (#182, concurrent=0)
[   5773.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   5773.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 26.0
               EndBluarLevel: 0.5
               EndDistance: 2.512500047683716
               EndFNumber: 77.69999694824219
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 2.512500047683716
               StartFNumber: 51.099998474121094
[   5799.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   5799.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 58.0
               EndBluarLevel: 0.5
               EndDistance: 2.512500047683716
               EndFNumber: 77.69999694824219
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 2.512500047683716
               StartFNumber: 77.69999694824219
[   5857.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   5857.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
[   5857.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#110, concurrent=0)
[   5857.0] L Npc_Kokiri_Mido_Child[0] - EventPlayASForTimeline (#207, concurrent=0)
[   5857.0] L Dm_Npc_Fairy[0] - EventPlayASForTimeline (#209, concurrent=0)
[   5857.0] L Dm_Npc_Fairy[0] - EventTriggerSetFairyColor (#211, concurrent=1)
[   5857.0] L Npc_Kokiri_011_Child[0] - EventPlayASForTimeline (#212, concurrent=0)
[   5857.0] L Dm_Npc_Fairy[7] - EventPlayASForTimeline (#214, concurrent=0)
[   5857.0] L Dm_Npc_Fairy[7] - EventTriggerSetFairyColor (#216, concurrent=1)
[   5857.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 280.0
               EndBluarLevel: 1.0
               EndDistance: 1.7799999713897705
               EndFNumber: 72.19999694824219
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.7799999713897705
               StartFNumber: 72.19999694824219
[   5857.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
               duration: 280.0
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
[   5857.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#111, concurrent=0)
               duration: 280.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5857.0] E Npc_Kokiri_011_Child[0] - EventPlayASForTimeline (#213, concurrent=0)
               duration: 280.0
               ASName: C04-Npc_Kokiri_WC_001-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5857.0] E Dm_Npc_Fairy[7] - EventPlayASForTimeline (#215, concurrent=0)
               duration: 280.0
               ASName: C04-Npc_Navi-C-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5857.0] E Dm_Npc_Fairy[7] - EventTriggerSetFairyColor (#217, concurrent=1)
               duration: 279.0
               Color: 2
[   6115.0] E VoicePlayActor[0] - EventStartVoice (#183, concurrent=0)
               duration: 88.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Kokiri_Saria_Child
[   6136.0] L Dm_Npc_Fairy[7] - EventTriggerSetFairyColor (#217, concurrent=1)
[   6136.0] E Dm_Npc_Fairy[2] - EventTriggerSetFairyColor (#220, concurrent=1)
               duration: 501.0
               Color: 5
[   6137.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   6137.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
[   6137.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#74, concurrent=1)
[   6137.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#111, concurrent=0)
[   6137.0] L Npc_Kokiri_011_Child[0] - EventPlayASForTimeline (#213, concurrent=0)
[   6137.0] L Dm_Npc_Fairy[7] - EventPlayASForTimeline (#215, concurrent=0)
[   6137.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 280.0
               EndBluarLevel: 3.0
               EndDistance: 0.6399999856948853
               EndFNumber: 286.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 0.6399999856948853
               StartFNumber: 286.0
[   6137.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
               duration: 500.0
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
[   6137.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#75, concurrent=1)
               duration: 500.0
               Near: 0.6000000238418579
[   6137.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#112, concurrent=0)
               duration: 500.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6137.0] E Npc_Kokiri_Saria_Child[0] - EventPlayASForTimeline (#204, concurrent=0)
               duration: 500.0
               ASName: C05-Npc_Kokiri_WC_Saria-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6137.0] E Dm_Item_Ocarina_Fairy[1] - EventPlayASForTimeline (#205, concurrent=0)
               duration: 500.0
               ASName: C05-Item_Ocarina_Fairy-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6137.0] E Npc_Kokiri_012_Child[0] - EventPlayASForTimeline (#218, concurrent=0)
               duration: 500.0
               ASName: C05-Npc_Kokiri_WC_001-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6137.0] E Dm_Npc_Fairy[2] - EventPlayASForTimeline (#219, concurrent=0)
               duration: 500.0
               ASName: C05-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6203.0] L VoicePlayActor[0] - EventStartVoice (#183, concurrent=0)
[   6417.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   6417.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 66.0
               EndBluarLevel: 4.0
               EndDistance: 8.0
               EndFNumber: 81.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 0.6399999856948853
               StartFNumber: 286.0
[   6483.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   6483.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 154.0
               EndBluarLevel: 4.0
               EndDistance: 8.0
               EndFNumber: 81.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 4.0
               StartDistance: 8.0
               StartFNumber: 81.0
[   6637.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   6637.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
[   6637.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#75, concurrent=1)
[   6637.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#112, concurrent=0)
[   6637.0] L Npc_Kokiri_Saria_Child[0] - EventPlayASForTimeline (#204, concurrent=0)
[   6637.0] L Dm_Item_Ocarina_Fairy[1] - EventPlayASForTimeline (#205, concurrent=0)
[   6637.0] L Npc_Kokiri_012_Child[0] - EventPlayASForTimeline (#218, concurrent=0)
[   6637.0] L Dm_Npc_Fairy[2] - EventPlayASForTimeline (#219, concurrent=0)
[   6637.0] L Dm_Npc_Fairy[2] - EventTriggerSetFairyColor (#220, concurrent=1)
[   6637.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 270.0
               EndBluarLevel: 1.0
               EndDistance: 1.7799999713897705
               EndFNumber: 72.19999694824219
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.7799999713897705
               StartFNumber: 72.19999694824219
[   6637.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
               duration: 270.0
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
[   6637.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#113, concurrent=0)
               duration: 270.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6637.0] E Npc_Kokiri_008_Child[0] - EventPlayASForTimeline (#221, concurrent=0)
               duration: 270.0
               ASName: C06-Npc_Kokiri_MC_002-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6637.0] E Dm_Npc_Fairy[3] - EventPlayASForTimeline (#223, concurrent=0)
               duration: 270.0
               ASName: C06-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6637.0] E Dm_Npc_Fairy[3] - EventTriggerSetFairyColor (#224, concurrent=1)
               duration: 270.0
               Color: 2
[   6907.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   6907.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
[   6907.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#113, concurrent=0)
[   6907.0] L Npc_Kokiri_008_Child[0] - EventPlayASForTimeline (#221, concurrent=0)
[   6907.0] L Dm_Npc_Fairy[3] - EventPlayASForTimeline (#223, concurrent=0)
[   6907.0] L Dm_Npc_Fairy[3] - EventTriggerSetFairyColor (#224, concurrent=1)
[   6907.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 320.0
               EndBluarLevel: 2.0
               EndDistance: 1.7799999713897705
               EndFNumber: 57.29999923706055
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.7799999713897705
               StartFNumber: 57.29999923706055
[   6907.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
               duration: 320.0
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
[   6907.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#114, concurrent=0)
               duration: 320.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6907.0] E Npc_Kokiri_013_Child[0] - EventPlayASForTimeline (#225, concurrent=0)
               duration: 320.0
               ASName: C07-Npc_Kokiri_WC_001-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6907.0] E Dm_Npc_Fairy[4] - EventPlayASForTimeline (#226, concurrent=0)
               duration: 320.0
               ASName: C07-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6907.0] E Dm_Npc_Fairy[4] - EventTriggerSetFairyColor (#227, concurrent=1)
               duration: 320.0
               Color: 4
[   7227.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   7227.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
[   7227.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#114, concurrent=0)
[   7227.0] L Npc_Kokiri_013_Child[0] - EventPlayASForTimeline (#225, concurrent=0)
[   7227.0] L Dm_Npc_Fairy[4] - EventPlayASForTimeline (#226, concurrent=0)
[   7227.0] L Dm_Npc_Fairy[4] - EventTriggerSetFairyColor (#227, concurrent=1)
[   7227.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 540.0
               EndBluarLevel: 1.0
               EndDistance: 1.2999999523162842
               EndFNumber: 169.8000030517578
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.2999999523162842
               StartFNumber: 169.8000030517578
[   7227.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
               duration: 540.0
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
[   7227.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#76, concurrent=1)
               duration: 540.0
               Near: 0.6000000238418579
[   7227.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#115, concurrent=0)
               duration: 540.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7227.0] E Npc_Kokiri_006_Child[0] - EventPlayASForTimeline (#228, concurrent=0)
               duration: 540.0
               ASName: C08-Npc_Kokiri_MC_Mido-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7227.0] E Dm_Npc_Fairy[56] - EventPlayASForTimeline (#230, concurrent=0)
               duration: 540.0
               ASName: C08-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7227.0] E Dm_Npc_Fairy[56] - EventTriggerSetFairyColor (#232, concurrent=1)
               duration: 1350.0
               Color: 5
[   7383.0] E VoicePlayActor[0] - EventStartVoice (#184, concurrent=0)
               duration: 73.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   7413.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#137, concurrent=1)
               duration: 45.0
[   7456.0] L VoicePlayActor[0] - EventStartVoice (#184, concurrent=0)
[   7458.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#137, concurrent=1)
[   7458.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#138, concurrent=1)
               duration: 5.0
[   7463.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#138, concurrent=1)
[   7467.0] E VoicePlayActor[0] - EventStartVoice (#185, concurrent=0)
               duration: 58.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   7497.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#139, concurrent=1)
               duration: 30.0
[   7525.0] L VoicePlayActor[0] - EventStartVoice (#185, concurrent=0)
[   7527.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#139, concurrent=1)
[   7527.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#140, concurrent=1)
               duration: 5.0
[   7532.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#140, concurrent=1)
[   7622.0] E VoicePlayActor[0] - EventStartVoice (#186, concurrent=0)
               duration: 58.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   7652.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#141, concurrent=1)
               duration: 30.0
[   7680.0] L VoicePlayActor[0] - EventStartVoice (#186, concurrent=0)
[   7682.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#141, concurrent=1)
[   7682.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#142, concurrent=1)
               duration: 5.0
[   7687.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#142, concurrent=1)
[   7767.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   7767.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
[   7767.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#76, concurrent=1)
[   7767.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#115, concurrent=0)
[   7767.0] L Npc_Kokiri_006_Child[0] - EventPlayASForTimeline (#228, concurrent=0)
[   7767.0] L Dm_Npc_Fairy[56] - EventPlayASForTimeline (#230, concurrent=0)
[   7767.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 810.0
               EndBluarLevel: 1.0
               EndDistance: 0.7599999904632568
               EndFNumber: 200.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 0.7599999904632568
               StartFNumber: 200.0
[   7767.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
               duration: 810.0
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
[   7767.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#77, concurrent=1)
               duration: 810.0
               Near: 0.10000000149011612
[   7767.0] E Dm_Player_Child_Op[0] - EventPlayASForTimeline (#91, concurrent=0)
               duration: 810.0
               ASName: C09-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7767.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#116, concurrent=0)
               duration: 810.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7767.0] E Npc_Kokiri_006_Child[0] - EventPlayASForTimeline (#229, concurrent=0)
               duration: 810.0
               ASName: C09-Npc_Kokiri_MC_Mido-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7767.0] E Dm_Npc_Fairy[56] - EventPlayASForTimeline (#231, concurrent=0)
               duration: 810.0
               ASName: C09-Npc_Navi-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7807.0] E VoicePlayActor[0] - EventStartVoice (#187, concurrent=0)
               duration: 58.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   7837.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#143, concurrent=1)
               duration: 30.0
[   7865.0] L VoicePlayActor[0] - EventStartVoice (#187, concurrent=0)
[   7867.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#143, concurrent=1)
[   7867.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#144, concurrent=1)
               duration: 5.0
[   7872.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#144, concurrent=1)
[   8577.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   8577.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
[   8577.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#77, concurrent=1)
[   8577.0] L Dm_Player_Child_Op[0] - EventPlayASForTimeline (#91, concurrent=0)
[   8577.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#116, concurrent=0)
[   8577.0] L Npc_Kokiri_006_Child[0] - EventPlayASForTimeline (#229, concurrent=0)
[   8577.0] L Dm_Npc_Fairy[56] - EventPlayASForTimeline (#231, concurrent=0)
[   8577.0] L Dm_Npc_Fairy[56] - EventTriggerSetFairyColor (#232, concurrent=1)
[   8577.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 450.0
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
[   8577.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
               duration: 450.0
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
[   8577.0] E Dm_Player_Child_Op[0] - EventPlayASForTimeline (#92, concurrent=0)
               duration: 450.0
               ASName: C11-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8577.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#117, concurrent=0)
               duration: 450.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8577.0] E Dm_Obj_ChildHat_A_01[0] - EventTriggerParticipateEvent (#233, concurrent=0)
               duration: 3163.0
[   8577.0] E Dm_Obj_ChildShoes_A_01[0] - EventTriggerParticipateEvent (#234, concurrent=0)
               duration: 3163.0
[   9001.0] E VoicePlayActor[0] - EventStartVoice (#188, concurrent=0)
               duration: 42.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_009_b
               OffsetFrame: 30
               Speaker: Player_Event
[   9027.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
[   9027.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
[   9027.0] L Dm_Player_Child_Op[0] - EventPlayASForTimeline (#92, concurrent=0)
[   9027.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#117, concurrent=0)
[   9027.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 330.0
               EndBluarLevel: 2.0
               EndDistance: 1.75
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.75
               StartFNumber: 40.0
[   9027.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
               duration: 330.0
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
[   9027.0] E Dm_Player_Child_Op[0] - EventPlayASForTimeline (#93, concurrent=0)
               duration: 330.0
               ASName: AS-C12-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9027.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#118, concurrent=0)
               duration: 330.0
               ASName: C12-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9043.0] L VoicePlayActor[0] - EventStartVoice (#188, concurrent=0)
[   9043.0] E VoicePlayActor[0] - EventStartVoice (#189, concurrent=0)
               duration: 208.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   9073.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#145, concurrent=1)
               duration: 180.0
[   9251.0] L VoicePlayActor[0] - EventStartVoice (#189, concurrent=0)
[   9253.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#145, concurrent=1)
[   9253.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#146, concurrent=1)
               duration: 5.0
[   9258.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#146, concurrent=1)
[   9357.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
[   9357.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
[   9357.0] L Dm_Player_Child_Op[0] - EventPlayASForTimeline (#93, concurrent=0)
[   9357.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#118, concurrent=0)
[   9357.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 349.0
               EndBluarLevel: 2.180000066757202
               EndDistance: 0.8999999761581421
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.180000066757202
               StartDistance: 1.0
               StartFNumber: 120.0
[   9357.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
               duration: 349.0
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
[   9357.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#78, concurrent=1)
               duration: 349.0
               Near: 0.10000000149011612
[   9357.0] E Dm_Player_Child_Op[0] - EventPlayASForTimeline (#94, concurrent=0)
               duration: 349.0
               ASName: AS-C13-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9357.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#119, concurrent=0)
               duration: 349.0
               ASName: C13-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9362.0] E VoicePlayActor[0] - EventStartVoice (#190, concurrent=0)
               duration: 319.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   9392.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#147, concurrent=1)
               duration: 300.0
[   9681.0] L VoicePlayActor[0] - EventStartVoice (#190, concurrent=0)
[   9681.0] E VoicePlayActor[0] - EventStartVoice (#191, concurrent=0)
               duration: 43.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_012_b
               OffsetFrame: 30
               Speaker: Player_Event
[   9692.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#147, concurrent=1)
[   9692.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#148, concurrent=1)
               duration: 5.0
[   9697.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#148, concurrent=1)
[   9706.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
[   9706.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
[   9706.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#78, concurrent=1)
[   9706.0] L Dm_Player_Child_Op[0] - EventPlayASForTimeline (#94, concurrent=0)
[   9706.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#119, concurrent=0)
[   9706.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
               duration: 488.0
               EndBluarLevel: 2.0
               EndDistance: 2.200000047683716
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.200000047683716
               StartFNumber: 40.0
[   9706.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
               duration: 488.0
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
[   9706.0] E Dm_Player_Child_Op[0] - EventPlayASForTimeline (#95, concurrent=0)
               duration: 488.0
               ASName: AS-C14-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9706.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#120, concurrent=0)
               duration: 488.0
               ASName: C14-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   9724.0] L VoicePlayActor[0] - EventStartVoice (#191, concurrent=0)
[   9724.0] E VoicePlayActor[0] - EventStartVoice (#192, concurrent=0)
               duration: 118.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_013_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   9754.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#149, concurrent=1)
               duration: 90.0
[   9842.0] L VoicePlayActor[0] - EventStartVoice (#192, concurrent=0)
[   9844.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#149, concurrent=1)
[   9844.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#150, concurrent=1)
               duration: 5.0
[   9849.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#150, concurrent=1)
[   9883.0] E VoicePlayActor[0] - EventStartVoice (#193, concurrent=0)
               duration: 276.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_014_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   9913.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#151, concurrent=1)
               duration: 248.0
[  10159.0] L VoicePlayActor[0] - EventStartVoice (#193, concurrent=0)
[  10161.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#151, concurrent=1)
[  10161.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#152, concurrent=1)
               duration: 5.0
[  10166.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#152, concurrent=1)
[  10178.0] E VoicePlayActor[0] - EventStartVoice (#194, concurrent=0)
               duration: 118.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_015_b
               OffsetFrame: 30
               Speaker: Player_Event
[  10194.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
[  10194.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
[  10194.0] L Dm_Player_Child_Op[0] - EventPlayASForTimeline (#95, concurrent=0)
[  10194.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#120, concurrent=0)
[  10194.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 150.0
               EndBluarLevel: 1.2999999523162842
               EndDistance: 1.850000023841858
               EndFNumber: 65.69999694824219
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2999999523162842
               StartDistance: 1.850000023841858
               StartFNumber: 65.69999694824219
[  10194.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
               duration: 150.0
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
[  10194.0] E Dm_Player_Child_Op[0] - EventPlayASForTimeline (#96, concurrent=0)
               duration: 150.0
               ASName: C15-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10194.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#121, concurrent=0)
               duration: 150.0
               ASName: C15-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10296.0] L VoicePlayActor[0] - EventStartVoice (#194, concurrent=0)
[  10328.0] E VoicePlayActor[0] - EventStartVoice (#195, concurrent=0)
               duration: 73.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_016_b
               OffsetFrame: 30
               Speaker: Player_Event
[  10344.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
[  10344.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
[  10344.0] L Dm_Player_Child_Op[0] - EventPlayASForTimeline (#96, concurrent=0)
[  10344.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#121, concurrent=0)
[  10344.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 274.0
               EndBluarLevel: 2.0
               EndDistance: 1.899999976158142
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.899999976158142
               StartFNumber: 60.0
[  10344.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
               duration: 274.0
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
[  10344.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#79, concurrent=1)
               duration: 274.0
               Near: 0.10000000149011612
[  10344.0] E Dm_Player_Child_Op[0] - EventPlayASForTimeline (#97, concurrent=0)
               duration: 274.0
               ASName: AS-C16-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10344.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#122, concurrent=0)
               duration: 274.0
               ASName: C16-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10401.0] L VoicePlayActor[0] - EventStartVoice (#195, concurrent=0)
[  10425.0] E VoicePlayActor[0] - EventStartVoice (#196, concurrent=0)
               duration: 136.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_017_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[  10455.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#153, concurrent=1)
               duration: 108.0
[  10561.0] L VoicePlayActor[0] - EventStartVoice (#196, concurrent=0)
[  10563.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#153, concurrent=1)
[  10563.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#154, concurrent=1)
               duration: 5.0
[  10568.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#154, concurrent=1)
[  10613.0] E VoicePlayActor[0] - EventStartVoice (#197, concurrent=0)
               duration: 168.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_018_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[  10618.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
[  10618.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
[  10618.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#79, concurrent=1)
[  10618.0] L Dm_Player_Child_Op[0] - EventPlayASForTimeline (#97, concurrent=0)
[  10618.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#122, concurrent=0)
[  10618.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 423.0
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
[  10618.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
               duration: 423.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C17-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[  10618.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#80, concurrent=1)
               duration: 423.0
               Near: 0.10000000149011612
[  10618.0] E Dm_Player_Child_Op[0] - EventPlayASForTimeline (#98, concurrent=0)
               duration: 423.0
               ASName: C17-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10618.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#123, concurrent=0)
               duration: 423.0
               ASName: C17-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  10643.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#155, concurrent=1)
               duration: 140.0
[  10781.0] L VoicePlayActor[0] - EventStartVoice (#197, concurrent=0)
[  10783.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#155, concurrent=1)
[  10783.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#156, concurrent=1)
               duration: 5.0
[  10788.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#156, concurrent=1)
[  10793.0] E VoicePlayActor[0] - EventStartVoice (#198, concurrent=0)
               duration: 241.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_019_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[  10823.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#157, concurrent=1)
               duration: 213.0
[  11034.0] L VoicePlayActor[0] - EventStartVoice (#198, concurrent=0)
[  11036.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#157, concurrent=1)
[  11036.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#158, concurrent=1)
               duration: 5.0
[  11041.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
[  11041.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
[  11041.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#80, concurrent=1)
[  11041.0] L Dm_Player_Child_Op[0] - EventPlayASForTimeline (#98, concurrent=0)
[  11041.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#123, concurrent=0)
[  11041.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#158, concurrent=1)
[  11041.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#2, concurrent=0)
               duration: 299.0
               DemoNicknamePos: 0
               DemoNicknameType: 0
               InAnimFrame: -1
               IsWaitEnd: false
               NameMessageLabel: ActorMsg/Npc:Npc_Navi_Name
               NicknameMessageLabel: ActorMsg/Nickname:Npc_Navi
               OutAnimFrame: -1
[  11041.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 299.0
               EndBluarLevel: 2.0
               EndDistance: 0.5
               EndFNumber: 96.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.5
               StartFNumber: 96.0
[  11041.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
               duration: 299.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C18-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[  11041.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#81, concurrent=1)
               duration: 299.0
               Near: 0.10000000149011612
[  11041.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#124, concurrent=0)
               duration: 299.0
               ASName: C18-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  11340.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#2, concurrent=0)
[  11340.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
[  11340.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
[  11340.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#81, concurrent=1)
[  11340.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#124, concurrent=0)
[  11340.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 400.0
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
[  11340.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
               duration: 400.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C19-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[  11340.0] E Dm_Player_Child_Op[0] - EventPlayASForTimeline (#99, concurrent=0)
               duration: 400.0
               ASName: AS-C19-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  11340.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#125, concurrent=0)
               duration: 400.0
               ASName: C19-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  11340.0] E VoicePlayActor[0] - EventStartVoice (#199, concurrent=0)
               duration: 133.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_020_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[  11370.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#159, concurrent=1)
               duration: 105.0
[  11473.0] L VoicePlayActor[0] - EventStartVoice (#199, concurrent=0)
[  11475.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#159, concurrent=1)
[  11475.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#160, concurrent=1)
               duration: 5.0
[  11480.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#160, concurrent=1)
[  11490.0] E VoicePlayActor[0] - EventStartVoice (#200, concurrent=0)
               duration: 158.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_021_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[  11520.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#161, concurrent=1)
               duration: 130.0
[  11648.0] L VoicePlayActor[0] - EventStartVoice (#200, concurrent=0)
[  11650.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#161, concurrent=1)
[  11650.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#162, concurrent=1)
               duration: 5.0
[  11655.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#162, concurrent=1)
[  11660.0] E VoicePlayActor[0] - EventStartVoice (#201, concurrent=0)
               duration: 58.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_022_b
               OffsetFrame: 30
               Speaker: Player_Event
[  11702.0] E SoundSystemActor[0] - EventTriggerStartInGameBgm (#243, concurrent=0)
               duration: 2.0
               IsFadeIn: false
               ResumeDelay: 0
               WithPlayableEvent: false
[  11702.0] E SoundSystemActor[0] - EventTriggerSoundStartAreaBgm (#244, concurrent=1)
               duration: 2.0
               BgmName: BGM_House
[  11704.0] L SoundSystemActor[0] - EventTriggerStartInGameBgm (#243, concurrent=0)
[  11704.0] L SoundSystemActor[0] - EventTriggerSoundStartAreaBgm (#244, concurrent=1)
[  11718.0] L VoicePlayActor[0] - EventStartVoice (#201, concurrent=0)
[  11740.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
[  11740.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
[  11740.0] L Dm_Player_Child_Op[0] - EventPlayASForTimeline (#99, concurrent=0)
[  11740.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#125, concurrent=0)
[  11740.0] L Dm_Obj_ChildHat_A_01[0] - EventTriggerParticipateEvent (#233, concurrent=0)
[  11740.0] L Dm_Obj_ChildShoes_A_01[0] - EventTriggerParticipateEvent (#234, concurrent=0)
[  11740.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 80.0
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
[  11740.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
               duration: 80.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C22-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[  11740.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#82, concurrent=1)
               duration: 80.0
               Near: 0.10000000149011612
[  11740.0] E Player_Event[0] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 80.0
               ASName: AS-C22-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  11740.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#126, concurrent=0)
               duration: 80.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  11795.0] E VoicePlayActor[0] - EventStartVoice (#202, concurrent=0)
               duration: 68.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_023_b
               OffsetFrame: 30
               Speaker: Player_Event
[  11820.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
[  11820.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
[  11820.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#82, concurrent=1)
[  11820.0] L Player_Event[0] - EventPlayASForTimeline (#86, concurrent=0)
[  11820.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#126, concurrent=0)
[  11820.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 100.0
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
[  11820.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
               duration: 100.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C23-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[  11820.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#83, concurrent=1)
               duration: 100.0
               Near: 0.10000000149011612
[  11820.0] E Player_Event[0] - EventPlayASForTimeline (#87, concurrent=0)
               duration: 100.0
               ASName: AS-C23-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  11820.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#127, concurrent=0)
               duration: 100.0
               ASName: C23-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  11863.0] L VoicePlayActor[0] - EventStartVoice (#202, concurrent=0)
[  11920.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
[  11920.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
[  11920.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#83, concurrent=1)
[  11920.0] L Player_Event[0] - EventPlayASForTimeline (#87, concurrent=0)
[  11920.0] L Npc_Navi - EventGoOffstageForUser (#100, concurrent=0)
[  11920.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#127, concurrent=0)
[  11920.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#35, concurrent=0)
               duration: 215.0
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
[  11920.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
               duration: 215.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C25-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[  11920.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#84, concurrent=1)
               duration: 215.0
               Near: 0.10000000149011612
[  11920.0] E Player_Event[0] - EventPlayASForTimeline (#88, concurrent=0)
               duration: 215.0
               ASName: AS-C25-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  11920.0] E Npc_Navi - EventPlayASForTimeline (#101, concurrent=0)
               duration: 215.0
               ASName: C25-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  12135.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#35, concurrent=0)
[  12135.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
[  12135.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#84, concurrent=1)
[  12135.0] L Player_Event[0] - EventPlayASForTimeline (#88, concurrent=0)
[  12135.0] L Npc_Navi - EventPlayASForTimeline (#101, concurrent=0)
[  12135.0] E PostProcessingActor[0] - EventResetToInGameParametersDoF (#36, concurrent=0)
               duration: 410.0
               IsWaitEnd: true
               TransitionFrame: 0
[  12135.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
               duration: 410.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C26-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[  12135.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#85, concurrent=1)
               duration: 410.0
               Near: 0.10000000149011612
[  12135.0] E Player_Event[0] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 410.0
               ASName: C26-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  12135.0] E Player_Event[0] - EventTriggerSetModelLodManual (#90, concurrent=1)
               duration: 401.0
               LodLevel: 1
[  12135.0] E Npc_Navi - EventPlayASForTimeline (#102, concurrent=0)
               duration: 410.0
               ASName: C26-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[  12195.0] E VoicePlayActor[0] - EventStartVoice (#203, concurrent=0)
               duration: 128.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0030:Dm_Kokiri_0030_Text_024_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[  12225.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#163, concurrent=1)
               duration: 95.0
[  12320.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#163, concurrent=1)
[  12320.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#164, concurrent=1)
               duration: 5.0
[  12323.0] L VoicePlayActor[0] - EventStartVoice (#203, concurrent=0)
[  12325.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#164, concurrent=1)
[  12536.0] L Player_Event[0] - EventTriggerSetModelLodManual (#90, concurrent=1)
[  12536.0] L Obj_LiftRock_A_02[0] - EventDoNothing (#222, concurrent=0)
[  12545.0] L PostProcessingActor[0] - EventResetToInGameParametersDoF (#36, concurrent=0)
[  12545.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
[  12545.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#85, concurrent=1)
[  12545.0] L Player_Event[0] - EventPlayASForTimeline (#89, concurrent=0)
[  12545.0] L Npc_Navi - EventPlayASForTimeline (#102, concurrent=0)
