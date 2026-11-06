-------- Event timeline: Dm_SpiritTemple_BossOut --------
actors: 18
clips: 185
oneshots: 0
cuts: 20
duration: 5595.0
subtimelines: ['Dm_SpiritTemple_BossOut_Effect', 'Dm_SpiritTemple_BossOut_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 580.0
x4: 0
params: (none)

Cut: C03
start time: 1040.0
x4: 0
params: (none)

Cut: C04
start time: 1440.0
x4: 0
params: (none)

Cut: C05
start time: 1840.0
x4: 0
params: (none)

Cut: C06
start time: 2180.0
x4: 0
params: (none)

Cut: C07
start time: 2265.0
x4: 0
params: (none)

Cut: C08
start time: 2495.0
x4: 0
params: (none)

Cut: C09
start time: 2645.0
x4: 0
params: (none)

Cut: C10
start time: 2905.0
x4: 0
params: (none)

Cut: C13
start time: 3245.0
x4: 0
params: (none)

Cut: C14
start time: 3370.0
x4: 0
params: (none)

Cut: C15
start time: 3550.0
x4: 0
params: (none)

Cut: C16
start time: 3720.0
x4: 0
params: (none)

Cut: C17
start time: 3750.0
x4: 0
params: (none)

Cut: C18
start time: 3790.0
x4: 0
params: (none)

Cut: C18_50
start time: 3835.0
x4: 0
params: (none)

Cut: C21
start time: 3905.0
x4: 0
params: (none)

Cut: C22
start time: 4185.0
x4: 0
params: (none)

Cut: C23
start time: 4585.0
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

Actor: VoicePlayActor[1]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Npc_Koume[Koume]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossOut/Dm_SpiritTemple_BossOut_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Kotake[Kotake]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossOut/Dm_SpiritTemple_BossOut_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossOut/Dm_SpiritTemple_BossOut/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Twinrova
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetModelAlpha']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossOut/Dm_SpiritTemple_BossOut_Enemy_DungeonBoss_Twinrova/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossOut/Dm_SpiritTemple_BossOut_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossOut/Dm_SpiritTemple_BossOut_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossOut/Dm_SpiritTemple_BossOut_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Obj_WarpPoint_A_01[WarpPoint_SpiritTemple_BossOut]
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 0.0043299999088048935
- 142.16000366210938
- -157.88510131835938
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_Heart_Container[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossOut/Dm_SpiritTemple_BossOut_Obj_Heart_Container/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[A]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossOut/Dm_SpiritTemple_BossOut_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[B]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossOut/Dm_SpiritTemple_BossOut_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossOut/Dm_SpiritTemple_BossOut_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[C]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_BossOut/Dm_SpiritTemple_BossOut_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[D]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 20.0
               EndBluarLevel: 2.0
               EndDistance: 6.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.2000000476837158
               StartFNumber: 50.0
[      0.0] E VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
               duration: 348.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_000_b
               OffsetFrame: 20
               Speaker: Enemy_DungeonBoss_Twinrova
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#99, concurrent=0)
               duration: 580.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#119, concurrent=1)
               duration: 580.0
               Near: 0.10000000149011612
[      0.0] E Enemy_DungeonBoss_Twinrova - EventPlayASForTimeline (#128, concurrent=0)
               duration: 378.0
               ASName: C01-Enemy_DungeonBoss_Twinrova-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#130, concurrent=0)
               duration: 580.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#135, concurrent=1)
               duration: 580.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#137, concurrent=2)
               duration: 580.0
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#138, concurrent=0)
               duration: 580.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#143, concurrent=0)
               duration: 5595.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Locator[A] - EventPlayASForTimeline (#147, concurrent=0)
               duration: 580.0
               ASName: C01-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Locator[B] - EventPlayASForTimeline (#164, concurrent=0)
               duration: 580.0
               ASName: C01-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Locator[C] - EventPlayASForTimeline (#183, concurrent=0)
               duration: 580.0
               ASName: C01-Dm_Locator-C-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Locator[D] - EventDoNothing (#184, concurrent=0)
               duration: 5595.0
               IsWaitEnd: true
[     20.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[     20.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 79.0
               EndBluarLevel: 2.0
               EndDistance: 6.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 6.0
               StartFNumber: 15.0
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[     99.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[     99.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 26.0
               EndBluarLevel: 2.0
               EndDistance: 0.800000011920929
               EndFNumber: 110.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 6.0
               StartFNumber: 15.0
[    125.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[    125.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 12.0
               EndBluarLevel: 2.0
               EndDistance: 6.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.800000011920929
               StartFNumber: 110.0
[    137.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[    137.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 29.0
               EndBluarLevel: 2.0
               EndDistance: 6.400000095367432
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 6.0
               StartFNumber: 15.0
[    166.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[    166.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 414.0
               EndBluarLevel: 2.0
               EndDistance: 6.400000095367432
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 6.0
               StartFNumber: 15.0
[    348.0] L VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
[    378.0] L Enemy_DungeonBoss_Twinrova - EventPlayASForTimeline (#128, concurrent=0)
[    378.0] E Enemy_DungeonBoss_Twinrova - EventTriggerSetModelAlpha (#129, concurrent=1)
               duration: 202.0
               Alpha: 0.0
[    580.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[    580.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#99, concurrent=0)
[    580.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#119, concurrent=1)
[    580.0] L Enemy_DungeonBoss_Twinrova - EventTriggerSetModelAlpha (#129, concurrent=1)
[    580.0] L Player_Event[0] - EventPlayASForTimeline (#130, concurrent=0)
[    580.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#135, concurrent=1)
[    580.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#137, concurrent=2)
[    580.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#138, concurrent=0)
[    580.0] L Dm_Locator[A] - EventPlayASForTimeline (#147, concurrent=0)
[    580.0] L Dm_Locator[B] - EventPlayASForTimeline (#164, concurrent=0)
[    580.0] L Dm_Locator[C] - EventPlayASForTimeline (#183, concurrent=0)
[    580.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 460.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 3.5
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 3.799999952316284
               StartFNumber: 25.0
[    580.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#100, concurrent=0)
               duration: 460.0
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
[    580.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#120, concurrent=1)
               duration: 460.0
               Near: 0.10000000149011612
[    580.0] E Player_Event[0] - EventPlayASForTimeline (#131, concurrent=0)
               duration: 460.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    580.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#139, concurrent=0)
               duration: 460.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    580.0] E Dm_Locator[A] - EventPlayASForTimeline (#148, concurrent=0)
               duration: 460.0
               ASName: C02-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    580.0] E Dm_Locator[B] - EventPlayASForTimeline (#165, concurrent=0)
               duration: 460.0
               ASName: C02-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    803.0] E VoicePlayActor[0] - EventStartVoice (#36, concurrent=0)
               duration: 229.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_001_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[    803.0] E VoicePlayActor[1] - EventStartVoice (#58, concurrent=0)
               duration: 245.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_002_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[    863.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#63, concurrent=0)
               duration: 177.0
               ASName: C02-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    863.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#81, concurrent=0)
               duration: 177.0
               ASName: C02-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1032.0] L VoicePlayActor[0] - EventStartVoice (#36, concurrent=0)
[   1040.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   1040.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#63, concurrent=0)
[   1040.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#81, concurrent=0)
[   1040.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#100, concurrent=0)
[   1040.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#120, concurrent=1)
[   1040.0] L Player_Event[0] - EventPlayASForTimeline (#131, concurrent=0)
[   1040.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#139, concurrent=0)
[   1040.0] L Dm_Locator[A] - EventPlayASForTimeline (#148, concurrent=0)
[   1040.0] L Dm_Locator[B] - EventPlayASForTimeline (#165, concurrent=0)
[   1040.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 400.0
               EndBluarLevel: 2.0
               EndDistance: 5.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.5
               StartFNumber: 20.0
[   1040.0] E VoicePlayActor[0] - EventStartVoice (#37, concurrent=0)
               duration: 132.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_003_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   1040.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#64, concurrent=0)
               duration: 400.0
               ASName: C03-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1040.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#82, concurrent=0)
               duration: 400.0
               ASName: C03-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1040.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#101, concurrent=0)
               duration: 400.0
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
[   1048.0] L VoicePlayActor[1] - EventStartVoice (#58, concurrent=0)
[   1172.0] L VoicePlayActor[0] - EventStartVoice (#37, concurrent=0)
[   1196.0] E VoicePlayActor[0] - EventStartVoice (#38, concurrent=0)
               duration: 198.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_004_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   1394.0] L VoicePlayActor[0] - EventStartVoice (#38, concurrent=0)
[   1438.0] E VoicePlayActor[0] - EventStartVoice (#39, concurrent=0)
               duration: 60.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_005_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[   1440.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   1440.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#64, concurrent=0)
[   1440.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#82, concurrent=0)
[   1440.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#101, concurrent=0)
[   1440.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 400.0
               EndBluarLevel: 2.0
               EndDistance: 1.399999976158142
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.399999976158142
               StartFNumber: 50.0
[   1440.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#65, concurrent=0)
               duration: 400.0
               ASName: C04-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1440.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#83, concurrent=0)
               duration: 400.0
               ASName: C04-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1440.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#102, concurrent=0)
               duration: 400.0
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
[   1440.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#121, concurrent=1)
               duration: 400.0
               Near: 0.30000001192092896
[   1440.0] E Dm_Locator[B] - EventPlayASForTimeline (#166, concurrent=0)
               duration: 400.0
               ASName: C04-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1498.0] L VoicePlayActor[0] - EventStartVoice (#39, concurrent=0)
[   1528.0] E VoicePlayActor[0] - EventStartVoice (#40, concurrent=0)
               duration: 220.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_006_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[   1748.0] L VoicePlayActor[0] - EventStartVoice (#40, concurrent=0)
[   1748.0] E VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
               duration: 46.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_007_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   1794.0] L VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
[   1840.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   1840.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#65, concurrent=0)
[   1840.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#83, concurrent=0)
[   1840.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#102, concurrent=0)
[   1840.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#121, concurrent=1)
[   1840.0] L Dm_Locator[B] - EventPlayASForTimeline (#166, concurrent=0)
[   1840.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 340.0
               EndBluarLevel: 2.0
               EndDistance: 1.5
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.5
               StartFNumber: 80.0
[   1840.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#66, concurrent=0)
               duration: 340.0
               ASName: C05-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1840.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#84, concurrent=0)
               duration: 340.0
               ASName: C05-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1840.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#103, concurrent=0)
               duration: 340.0
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
[   1840.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#122, concurrent=1)
               duration: 340.0
               Near: 0.5
[   1840.0] E Dm_Locator[A] - EventPlayASForTimeline (#149, concurrent=0)
               duration: 340.0
               ASName: C05-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1840.0] E Dm_Locator[B] - EventPlayASForTimeline (#167, concurrent=0)
               duration: 340.0
               ASName: C05-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1855.0] E VoicePlayActor[0] - EventStartVoice (#42, concurrent=0)
               duration: 230.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_008_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   2085.0] L VoicePlayActor[0] - EventStartVoice (#42, concurrent=0)
[   2086.0] E VoicePlayActor[1] - EventStartVoice (#59, concurrent=0)
               duration: 61.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_008_c
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[   2147.0] L VoicePlayActor[1] - EventStartVoice (#59, concurrent=0)
[   2180.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   2180.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#66, concurrent=0)
[   2180.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#84, concurrent=0)
[   2180.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#103, concurrent=0)
[   2180.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#122, concurrent=1)
[   2180.0] L Dm_Locator[A] - EventPlayASForTimeline (#149, concurrent=0)
[   2180.0] L Dm_Locator[B] - EventPlayASForTimeline (#167, concurrent=0)
[   2180.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 85.0
               EndBluarLevel: 2.0
               EndDistance: 9.0
               EndFNumber: 12.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 9.0
               StartFNumber: 12.0
[   2180.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 85.0
               ASName: C06-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2180.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#85, concurrent=0)
               duration: 85.0
               ASName: C06-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2180.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#104, concurrent=0)
               duration: 85.0
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
[   2180.0] E Dm_Locator[A] - EventPlayASForTimeline (#150, concurrent=0)
               duration: 85.0
               ASName: C06-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2180.0] E Dm_Locator[B] - EventPlayASForTimeline (#168, concurrent=0)
               duration: 85.0
               ASName: C06-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2198.0] E VoicePlayActor[0] - EventStartVoice (#43, concurrent=0)
               duration: 61.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_008_e
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[   2198.0] E VoicePlayActor[1] - EventStartVoice (#60, concurrent=0)
               duration: 53.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_008_f
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   2251.0] L VoicePlayActor[1] - EventStartVoice (#60, concurrent=0)
[   2259.0] L VoicePlayActor[0] - EventStartVoice (#43, concurrent=0)
[   2261.0] E VoicePlayActor[0] - EventStartVoice (#44, concurrent=0)
               duration: 213.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_009_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   2265.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   2265.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#67, concurrent=0)
[   2265.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#85, concurrent=0)
[   2265.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#104, concurrent=0)
[   2265.0] L Dm_Locator[A] - EventPlayASForTimeline (#150, concurrent=0)
[   2265.0] L Dm_Locator[B] - EventPlayASForTimeline (#168, concurrent=0)
[   2265.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 31.0
               EndBluarLevel: 2.0
               EndDistance: 5.0
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.0
               StartFNumber: 40.0
[   2265.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#68, concurrent=0)
               duration: 230.0
               ASName: C07-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2265.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 230.0
               ASName: C07-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2265.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#105, concurrent=0)
               duration: 230.0
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
[   2265.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#123, concurrent=1)
               duration: 230.0
               Near: 0.20000000298023224
[   2265.0] E Dm_Locator[A] - EventPlayASForTimeline (#151, concurrent=0)
               duration: 230.0
               ASName: C07-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2265.0] E Dm_Locator[B] - EventPlayASForTimeline (#169, concurrent=0)
               duration: 230.0
               ASName: C07-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2296.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   2296.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 14.0
               EndBluarLevel: 2.0
               EndDistance: 4.400000095367432
               EndFNumber: 45.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.0
               StartFNumber: 40.0
[   2310.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   2310.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 145.0
               EndBluarLevel: 2.0
               EndDistance: 4.400000095367432
               EndFNumber: 45.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.400000095367432
               StartFNumber: 45.0
[   2455.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   2455.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 40.0
               EndBluarLevel: 2.0
               EndDistance: 3.5
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.400000095367432
               StartFNumber: 45.0
[   2474.0] L VoicePlayActor[0] - EventStartVoice (#44, concurrent=0)
[   2474.0] E VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
               duration: 156.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_010_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[   2495.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   2495.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#68, concurrent=0)
[   2495.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#86, concurrent=0)
[   2495.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#105, concurrent=0)
[   2495.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#123, concurrent=1)
[   2495.0] L Dm_Locator[A] - EventPlayASForTimeline (#151, concurrent=0)
[   2495.0] L Dm_Locator[B] - EventPlayASForTimeline (#169, concurrent=0)
[   2495.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 150.0
               EndBluarLevel: 1.0
               EndDistance: 2.5
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.5
               StartFNumber: 120.0
[   2495.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#69, concurrent=0)
               duration: 150.0
               ASName: C08-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2495.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#87, concurrent=0)
               duration: 150.0
               ASName: C08-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2495.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#106, concurrent=0)
               duration: 150.0
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
[   2495.0] E Dm_Locator[A] - EventPlayASForTimeline (#152, concurrent=0)
               duration: 150.0
               ASName: C08-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2495.0] E Dm_Locator[B] - EventPlayASForTimeline (#170, concurrent=0)
               duration: 150.0
               ASName: C08-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2630.0] L VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
[   2630.0] E VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
               duration: 216.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_011_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   2645.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   2645.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#69, concurrent=0)
[   2645.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#87, concurrent=0)
[   2645.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#106, concurrent=0)
[   2645.0] L Dm_Locator[A] - EventPlayASForTimeline (#152, concurrent=0)
[   2645.0] L Dm_Locator[B] - EventPlayASForTimeline (#170, concurrent=0)
[   2645.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 260.0
               EndBluarLevel: 2.0
               EndDistance: 1.7000000476837158
               EndFNumber: 62.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.5299999713897705
               StartFNumber: 69.0
[   2645.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#70, concurrent=0)
               duration: 260.0
               ASName: C09-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2645.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#88, concurrent=0)
               duration: 260.0
               ASName: C09-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2645.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#107, concurrent=0)
               duration: 260.0
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
[   2645.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#124, concurrent=1)
               duration: 260.0
               Near: 0.10000000149011612
[   2645.0] E Player_Event[0] - EventPlayASForTimeline (#132, concurrent=0)
               duration: 260.0
               ASName: C09-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2645.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#140, concurrent=0)
               duration: 260.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2645.0] E Dm_Locator[A] - EventPlayASForTimeline (#153, concurrent=0)
               duration: 260.0
               ASName: C09-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2645.0] E Dm_Locator[B] - EventPlayASForTimeline (#171, concurrent=0)
               duration: 260.0
               ASName: C09-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2846.0] L VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
[   2846.0] E VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
               duration: 164.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_012_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[   2905.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   2905.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#70, concurrent=0)
[   2905.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#88, concurrent=0)
[   2905.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#107, concurrent=0)
[   2905.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#124, concurrent=1)
[   2905.0] L Player_Event[0] - EventPlayASForTimeline (#132, concurrent=0)
[   2905.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#140, concurrent=0)
[   2905.0] L Dm_Locator[A] - EventPlayASForTimeline (#153, concurrent=0)
[   2905.0] L Dm_Locator[B] - EventPlayASForTimeline (#171, concurrent=0)
[   2905.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 340.0
               EndBluarLevel: 2.0
               EndDistance: 0.800000011920929
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.800000011920929
               StartFNumber: 70.0
[   2905.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#71, concurrent=0)
               duration: 340.0
               ASName: C10-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2905.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 340.0
               ASName: C10-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2905.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#108, concurrent=0)
               duration: 340.0
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
[   2905.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#125, concurrent=1)
               duration: 340.0
               Near: 0.10000000149011612
[   2905.0] E Dm_Locator[A] - EventPlayASForTimeline (#154, concurrent=0)
               duration: 340.0
               ASName: C10-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2905.0] E Dm_Locator[B] - EventPlayASForTimeline (#172, concurrent=0)
               duration: 340.0
               ASName: C10-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3010.0] L VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
[   3010.0] E VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
               duration: 217.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_013_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   3227.0] L VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
[   3228.0] E VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
               duration: 131.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_014_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[   3245.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   3245.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#71, concurrent=0)
[   3245.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#89, concurrent=0)
[   3245.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#108, concurrent=0)
[   3245.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#125, concurrent=1)
[   3245.0] L Dm_Locator[A] - EventPlayASForTimeline (#154, concurrent=0)
[   3245.0] L Dm_Locator[B] - EventPlayASForTimeline (#172, concurrent=0)
[   3245.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 125.0
               EndBluarLevel: 2.0
               EndDistance: 4.0
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.0
               StartFNumber: 80.0
[   3245.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#72, concurrent=0)
               duration: 125.0
               ASName: C13-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3245.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#90, concurrent=0)
               duration: 125.0
               ASName: C13-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3245.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#109, concurrent=0)
               duration: 125.0
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
[   3245.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#126, concurrent=1)
               duration: 125.0
               Near: 0.10000000149011612
[   3245.0] E Dm_Locator[A] - EventPlayASForTimeline (#155, concurrent=0)
               duration: 125.0
               ASName: C13-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3245.0] E Dm_Locator[B] - EventPlayASForTimeline (#173, concurrent=0)
               duration: 125.0
               ASName: C13-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3359.0] L VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
[   3359.0] E VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
               duration: 169.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_015_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   3370.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   3370.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#72, concurrent=0)
[   3370.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#90, concurrent=0)
[   3370.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#109, concurrent=0)
[   3370.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#126, concurrent=1)
[   3370.0] L Dm_Locator[A] - EventPlayASForTimeline (#155, concurrent=0)
[   3370.0] L Dm_Locator[B] - EventPlayASForTimeline (#173, concurrent=0)
[   3370.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 180.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 15.0
[   3370.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#73, concurrent=0)
               duration: 180.0
               ASName: C14-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3370.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#91, concurrent=0)
               duration: 180.0
               ASName: C14-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3370.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#110, concurrent=0)
               duration: 180.0
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
[   3370.0] E Dm_Locator[A] - EventPlayASForTimeline (#156, concurrent=0)
               duration: 180.0
               ASName: C14-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3370.0] E Dm_Locator[B] - EventPlayASForTimeline (#174, concurrent=0)
               duration: 180.0
               ASName: C14-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3528.0] L VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
[   3528.0] E VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
               duration: 153.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_016_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[   3550.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   3550.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#73, concurrent=0)
[   3550.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#91, concurrent=0)
[   3550.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#110, concurrent=0)
[   3550.0] L Dm_Locator[A] - EventPlayASForTimeline (#156, concurrent=0)
[   3550.0] L Dm_Locator[B] - EventPlayASForTimeline (#174, concurrent=0)
[   3550.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 170.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 120.0
[   3550.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 170.0
               ASName: C15-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3550.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#92, concurrent=0)
               duration: 170.0
               ASName: C15-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3550.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#111, concurrent=0)
               duration: 170.0
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
[   3550.0] E Dm_Locator[A] - EventPlayASForTimeline (#157, concurrent=0)
               duration: 170.0
               ASName: C15-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3550.0] E Dm_Locator[B] - EventPlayASForTimeline (#175, concurrent=0)
               duration: 170.0
               ASName: C15-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3681.0] L VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
[   3681.0] E VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
               duration: 53.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_017_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   3720.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
[   3720.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#74, concurrent=0)
[   3720.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#92, concurrent=0)
[   3720.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#111, concurrent=0)
[   3720.0] L Dm_Locator[A] - EventPlayASForTimeline (#157, concurrent=0)
[   3720.0] L Dm_Locator[B] - EventPlayASForTimeline (#175, concurrent=0)
[   3720.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 30.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 120.0
[   3720.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#75, concurrent=0)
               duration: 30.0
               ASName: C16-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3720.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#93, concurrent=0)
               duration: 30.0
               ASName: C16-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3720.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#112, concurrent=0)
               duration: 30.0
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
[   3720.0] E Dm_Locator[A] - EventPlayASForTimeline (#158, concurrent=0)
               duration: 30.0
               ASName: C16-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3720.0] E Dm_Locator[B] - EventPlayASForTimeline (#176, concurrent=0)
               duration: 30.0
               ASName: C16-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3734.0] L VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
[   3734.0] E VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
               duration: 36.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_018_b
               OffsetFrame: 20
               Speaker: Enemy_DungeonBoss_Kotake
[   3750.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
[   3750.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#75, concurrent=0)
[   3750.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#93, concurrent=0)
[   3750.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#112, concurrent=0)
[   3750.0] L Dm_Locator[A] - EventPlayASForTimeline (#158, concurrent=0)
[   3750.0] L Dm_Locator[B] - EventPlayASForTimeline (#176, concurrent=0)
[   3750.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 40.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 120.0
[   3750.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#76, concurrent=0)
               duration: 40.0
               ASName: C17-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3750.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#94, concurrent=0)
               duration: 40.0
               ASName: C17-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3750.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#113, concurrent=0)
               duration: 40.0
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
[   3750.0] E Dm_Locator[A] - EventPlayASForTimeline (#159, concurrent=0)
               duration: 40.0
               ASName: C17-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3750.0] E Dm_Locator[B] - EventPlayASForTimeline (#177, concurrent=0)
               duration: 40.0
               ASName: C17-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3770.0] L VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
[   3770.0] E VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
               duration: 48.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_019_b
               OffsetFrame: 20
               Speaker: Enemy_DungeonBoss_Koume
[   3790.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
[   3790.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#76, concurrent=0)
[   3790.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#94, concurrent=0)
[   3790.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#113, concurrent=0)
[   3790.0] L Dm_Locator[A] - EventPlayASForTimeline (#159, concurrent=0)
[   3790.0] L Dm_Locator[B] - EventPlayASForTimeline (#177, concurrent=0)
[   3790.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
               duration: 45.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 200.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 200.0
[   3790.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#77, concurrent=0)
               duration: 45.0
               ASName: C18-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3790.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#95, concurrent=0)
               duration: 45.0
               ASName: C18-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3790.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#114, concurrent=0)
               duration: 45.0
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
[   3790.0] E Dm_Locator[A] - EventPlayASForTimeline (#160, concurrent=0)
               duration: 45.0
               ASName: C18-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3790.0] E Dm_Locator[B] - EventPlayASForTimeline (#178, concurrent=0)
               duration: 45.0
               ASName: C18-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3818.0] L VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
[   3818.0] E VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
               duration: 81.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_020_b
               OffsetFrame: 20
               Speaker: Enemy_DungeonBoss_Kotake
[   3835.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
[   3835.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#77, concurrent=0)
[   3835.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#95, concurrent=0)
[   3835.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#114, concurrent=0)
[   3835.0] L Dm_Locator[A] - EventPlayASForTimeline (#160, concurrent=0)
[   3835.0] L Dm_Locator[B] - EventPlayASForTimeline (#178, concurrent=0)
[   3835.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 70.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 200.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 200.0
[   3835.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#78, concurrent=0)
               duration: 70.0
               ASName: C18_50-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3835.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#96, concurrent=0)
               duration: 70.0
               ASName: C18_50-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3835.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#115, concurrent=0)
               duration: 70.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C18_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3835.0] E Dm_Locator[A] - EventPlayASForTimeline (#161, concurrent=0)
               duration: 70.0
               ASName: C18_50-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3835.0] E Dm_Locator[B] - EventPlayASForTimeline (#179, concurrent=0)
               duration: 70.0
               ASName: C18_50-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3899.0] L VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
[   3905.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
[   3905.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#78, concurrent=0)
[   3905.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#96, concurrent=0)
[   3905.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#115, concurrent=0)
[   3905.0] L Dm_Locator[A] - EventPlayASForTimeline (#161, concurrent=0)
[   3905.0] L Dm_Locator[B] - EventPlayASForTimeline (#179, concurrent=0)
[   3905.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 280.0
               EndBluarLevel: 2.0
               EndDistance: 8.0
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
               StartFNumber: 35.0
[   3905.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#79, concurrent=0)
               duration: 280.0
               ASName: C21-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3905.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#97, concurrent=0)
               duration: 280.0
               ASName: C21-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3905.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#116, concurrent=0)
               duration: 280.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C21_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3905.0] E Player_Event[0] - EventPlayASForTimeline (#133, concurrent=0)
               duration: 280.0
               ASName: C21-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3905.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#141, concurrent=0)
               duration: 280.0
               ASName: C21-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3905.0] E Dm_Locator[A] - EventPlayASForTimeline (#162, concurrent=0)
               duration: 280.0
               ASName: C21-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3905.0] E Dm_Locator[B] - EventPlayASForTimeline (#180, concurrent=0)
               duration: 280.0
               ASName: C21-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4020.0] E VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
               duration: 255.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_021_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Koume
[   4020.0] E VoicePlayActor[1] - EventStartVoice (#61, concurrent=0)
               duration: 281.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_022_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Kotake
[   4185.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
[   4185.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#79, concurrent=0)
[   4185.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#97, concurrent=0)
[   4185.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#116, concurrent=0)
[   4185.0] L Player_Event[0] - EventPlayASForTimeline (#133, concurrent=0)
[   4185.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#141, concurrent=0)
[   4185.0] L Dm_Locator[A] - EventPlayASForTimeline (#162, concurrent=0)
[   4185.0] L Dm_Locator[B] - EventPlayASForTimeline (#180, concurrent=0)
[   4185.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 138.0
               EndBluarLevel: 1.5
               EndDistance: 0.20000000298023224
               EndFNumber: 200.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 0.20000000298023224
               StartFNumber: 200.0
[   4185.0] E Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#80, concurrent=0)
               duration: 400.0
               ASName: C22-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4185.0] E Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#98, concurrent=0)
               duration: 400.0
               ASName: C22-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4185.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#117, concurrent=0)
               duration: 400.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C22_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4185.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#127, concurrent=1)
               duration: 400.0
               Near: 0.05000000074505806
[   4185.0] E Obj_WarpPoint_A_01[WarpPoint_SpiritTemple_BossOut] - EventGoOffstageForUser (#144, concurrent=0)
               duration: 617.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   4185.0] E Dm_Locator[A] - EventPlayASForTimeline (#163, concurrent=0)
               duration: 400.0
               ASName: C22-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4185.0] E Dm_Locator[B] - EventPlayASForTimeline (#181, concurrent=0)
               duration: 400.0
               ASName: C22-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4275.0] L VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
[   4301.0] L VoicePlayActor[1] - EventStartVoice (#61, concurrent=0)
[   4323.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
[   4323.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 34.0
               EndBluarLevel: 1.5
               EndDistance: 7.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 0.20000000298023224
               StartFNumber: 200.0
[   4327.0] E VoicePlayActor[0] - EventStartVoice (#57, concurrent=0)
               duration: 233.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_023_b
               OffsetFrame: 30
               Speaker: Npc_KotakeKoume
[   4327.0] E VoicePlayActor[1] - EventStartVoice (#62, concurrent=0)
               duration: 228.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_BossOut:Dm_SpiritTemple_BossOut_Text_024_b
               OffsetFrame: 30
               Speaker: Npc_KotakeKoume
[   4333.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 54.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   4357.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
[   4357.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 228.0
               EndBluarLevel: 1.5
               EndDistance: 7.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 0.20000000298023224
               StartFNumber: 200.0
[   4387.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[   4555.0] L VoicePlayActor[1] - EventStartVoice (#62, concurrent=0)
[   4560.0] L VoicePlayActor[0] - EventStartVoice (#57, concurrent=0)
[   4585.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
[   4585.0] L Dm_Npc_Koume[Koume] - EventPlayASForTimeline (#80, concurrent=0)
[   4585.0] L Dm_Npc_Kotake[Kotake] - EventPlayASForTimeline (#98, concurrent=0)
[   4585.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#117, concurrent=0)
[   4585.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#127, concurrent=1)
[   4585.0] L Dm_Locator[A] - EventPlayASForTimeline (#163, concurrent=0)
[   4585.0] L Dm_Locator[B] - EventPlayASForTimeline (#181, concurrent=0)
[   4585.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 422.0
               EndBluarLevel: 1.5
               EndDistance: 4.0
               EndFNumber: 23.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 4.5
               StartFNumber: 23.0
[   4585.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#118, concurrent=0)
               duration: 1010.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C23_00-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4585.0] E Player_Event[0] - EventPlayASForTimeline (#134, concurrent=0)
               duration: 1010.0
               ASName: C23-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4585.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#136, concurrent=1)
               duration: 1010.0
[   4585.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#142, concurrent=0)
               duration: 1010.0
               ASName: C23-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4585.0] E Dm_Locator[0] - EventPlayASForTimeline (#182, concurrent=0)
               duration: 1010.0
               ASName: C23-Dm_Locator-D-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4675.0] E UISystemActor[0] - EventEventFadeInForTimeline (#2, concurrent=0)
               duration: 90.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[   4765.0] L UISystemActor[0] - EventEventFadeInForTimeline (#2, concurrent=0)
[   4802.0] L Obj_WarpPoint_A_01[WarpPoint_SpiritTemple_BossOut] - EventGoOffstageForUser (#144, concurrent=0)
[   5007.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
[   5007.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 588.0
               EndBluarLevel: 1.5
               EndDistance: 4.0
               EndFNumber: 23.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 4.0
               StartFNumber: 23.0
[   5305.0] E Obj_Heart_Container[0] - EventPlayASForTimeline (#146, concurrent=0)
               duration: 290.0
               ASName: C23-Obj_Heart_Container-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5322.0] E Obj_WarpPoint_A_01[WarpPoint_SpiritTemple_BossOut] - EventTriggerParticipateEvent (#145, concurrent=0)
               duration: 273.0
[   5535.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#3, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   5595.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#3, concurrent=0)
[   5595.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
[   5595.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#118, concurrent=0)
[   5595.0] L Player_Event[0] - EventPlayASForTimeline (#134, concurrent=0)
[   5595.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#136, concurrent=1)
[   5595.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#142, concurrent=0)
[   5595.0] L Npc_Navi - EventGoOffstageForUser (#143, concurrent=0)
[   5595.0] L Obj_WarpPoint_A_01[WarpPoint_SpiritTemple_BossOut] - EventTriggerParticipateEvent (#145, concurrent=0)
[   5595.0] L Obj_Heart_Container[0] - EventPlayASForTimeline (#146, concurrent=0)
[   5595.0] L Dm_Locator[0] - EventPlayASForTimeline (#182, concurrent=0)
[   5595.0] L Dm_Locator[D] - EventDoNothing (#184, concurrent=0)
