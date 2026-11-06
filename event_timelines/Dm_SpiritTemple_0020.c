-------- Event timeline: Dm_SpiritTemple_0020 --------
actors: 19
clips: 154
oneshots: 0
cuts: 17
duration: 5410.0
subtimelines: ['Dm_SpiritTemple_0020_Effect', 'Dm_SpiritTemple_0020_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 150.0
x4: 0
params: (none)

Cut: C03
start time: 240.0
x4: 0
params: (none)

Cut: C04
start time: 360.0
x4: 0
params: (none)

Cut: C05
start time: 690.0
x4: 0
params: (none)

Cut: C06
start time: 930.0
x4: 0
params: (none)

Cut: C07
start time: 1050.0
x4: 0
params: (none)

Cut: C08
start time: 1590.0
x4: 0
params: (none)

Cut: C09
start time: 2050.0
x4: 0
params: (none)

Cut: C10
start time: 3010.0
x4: 0
params: (none)

Cut: C10_50
start time: 3250.0
x4: 0
params: (none)

Cut: C11
start time: 3310.0
x4: 0
params: (none)

Cut: C12
start time: 3430.0
x4: 0
params: (none)

Cut: C13
start time: 3530.0
x4: 0
params: (none)

Cut: C14
start time: 3680.0
x4: 0
params: (none)

Cut: C15
start time: 3880.0
x4: 0
params: (none)

Cut: C16
start time: 4590.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Locator[3]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0020/Dm_SpiritTemple_0020_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[2]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0020/Dm_SpiritTemple_0020_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[1]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0020/Dm_SpiritTemple_0020_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 0.0
- 135.0399932861328
- -88.0
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0020/Dm_SpiritTemple_0020_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[0]
concurrent clips: 1
actions: ['EventDemoProductSupportComment']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline']
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

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerPlayerRestoreBootsChange']
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
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0020/Dm_SpiritTemple_0020_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0020/Dm_SpiritTemple_0020_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0020/Dm_SpiritTemple_0020_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Kotake[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_0020.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0020/Dm_SpiritTemple_0020_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Koume[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_0020.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0020/Dm_SpiritTemple_0020_Enemy_DungeonBoss_Kotake/workspace.pp__ModelProject.gyml

Actor: Npc_Gerudo_Nabooru_Adult[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_0020_Npc_Gerudo_GEU_Nabooru.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0020/Dm_SpiritTemple_0020_Npc_Gerudo_GEU_Nabooru/workspace.pp__ModelProject.gyml

Actor: Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_SpiritTemple_0020_Enemy_MiddleBoss_IronKnuckle_Nabooru.root.as
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0020/Dm_SpiritTemple_0020_Enemy_MiddleBoss_IronKnuckle_Nabooru/workspace.pp__ModelProject.gyml

Actor: Enemy_MiddleBoss_IronKnuckle_Nabooru[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_FireTemple_SwitchShutter_A_03[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SpiritTemple_0020/Dm_SpiritTemple_0020_Obj_SwitchShutter_A/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E Dm_Locator[0] - EventDoNothing (#3, concurrent=0)
               duration: 5410.0
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 150.0
               EndBluarLevel: 4.0
               EndDistance: 3.0
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 4.0
               StartDistance: 3.0
               StartFNumber: 60.0
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#35, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
               duration: 150.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#53, concurrent=1)
               duration: 150.0
               Near: 0.10000000149011612
[      0.0] E VoicePlayActor[0] - EventStartVoice (#69, concurrent=0)
               duration: 155.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_000_b
               OffsetFrame: 0
               Speaker: Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#105, concurrent=1)
               duration: 150.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#106, concurrent=2)
               duration: 4590.0
               BootsType: 0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#111, concurrent=0)
               duration: 4590.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#141, concurrent=0)
               duration: 150.0
               ASName: AS-C01_00-Enemy_MiddleBoss_IronKnuckle_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventGoOffstageForUser (#151, concurrent=0)
               duration: 3310.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Obj_FireTemple_SwitchShutter_A_03[0] - EventPlayASForTimeline (#152, concurrent=0)
               duration: 4590.0
               ASName: C01_00-Obj_SwitchShutter_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#35, concurrent=0)
[    150.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    150.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
[    150.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#53, concurrent=1)
[    150.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#105, concurrent=1)
[    150.0] L Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#141, concurrent=0)
[    150.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 90.0
               EndBluarLevel: 2.0
               EndDistance: 1.7999999523162842
               EndFNumber: 130.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.7999999523162842
               StartFNumber: 130.0
[    150.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
               duration: 90.0
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
[    150.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#54, concurrent=1)
               duration: 90.0
               Near: 0.10000000149011612
[    150.0] E Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#142, concurrent=0)
               duration: 90.0
               ASName: AS-C02_00-Enemy_MiddleBoss_IronKnuckle_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    155.0] L VoicePlayActor[0] - EventStartVoice (#69, concurrent=0)
[    240.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[    240.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
[    240.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#54, concurrent=1)
[    240.0] L Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#142, concurrent=0)
[    240.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 120.0
               EndBluarLevel: 2.0
               EndDistance: 0.8999999761581421
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.8999999761581421
               StartFNumber: 30.0
[    240.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
               duration: 120.0
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
[    240.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[    240.0] E Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#143, concurrent=0)
               duration: 120.0
               ASName: AS-C03_00-Enemy_MiddleBoss_IronKnuckle_Nabooru-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    302.0] E VoicePlayActor[0] - EventStartVoice (#70, concurrent=0)
               duration: 56.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_001_b
               OffsetFrame: 30
               Speaker: Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru
[    358.0] L VoicePlayActor[0] - EventStartVoice (#70, concurrent=0)
[    360.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[    360.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
[    360.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
[    360.0] L Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#143, concurrent=0)
[    360.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 90.0
               EndBluarLevel: 2.0
               EndDistance: 2.299999952316284
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.299999952316284
               StartFNumber: 70.0
[    360.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
               duration: 330.0
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
[    360.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
               duration: 330.0
               Near: 0.10000000149011612
[    360.0] E Player_Event[0] - EventPlayASForTimeline (#100, concurrent=0)
               duration: 330.0
               ASName: C04_00-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    360.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#130, concurrent=0)
               duration: 330.0
               ASName: AS-C04_00-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    360.0] E Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#144, concurrent=0)
               duration: 330.0
               ASName: AS-C04_00-Enemy_MiddleBoss_IronKnuckle_Nabooru-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    426.0] E VoicePlayActor[0] - EventStartVoice (#71, concurrent=0)
               duration: 187.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_002_b
               OffsetFrame: 30
               Speaker: Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru
[    450.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[    450.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 160.0
               EndBluarLevel: 2.0
               EndDistance: 1.2000000476837158
               EndFNumber: 150.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.299999952316284
               StartFNumber: 70.0
[    610.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[    610.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 80.0
               EndBluarLevel: 2.0
               EndDistance: 1.2000000476837158
               EndFNumber: 150.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.2000000476837158
               StartFNumber: 150.0
[    613.0] L VoicePlayActor[0] - EventStartVoice (#71, concurrent=0)
[    690.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[    690.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
[    690.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
[    690.0] L Player_Event[0] - EventPlayASForTimeline (#100, concurrent=0)
[    690.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#130, concurrent=0)
[    690.0] L Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#144, concurrent=0)
[    690.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 240.0
               EndBluarLevel: 2.0
               EndDistance: 2.2200000286102295
               EndFNumber: 78.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.2200000286102295
               StartFNumber: 78.0
[    690.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
               duration: 240.0
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
[    690.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[    690.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#131, concurrent=0)
               duration: 240.0
               ASName: C05_00-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    690.0] E Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#145, concurrent=0)
               duration: 240.0
               ASName: C05_00-Enemy_MiddleBoss_IronKnuckle_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    721.0] E VoicePlayActor[0] - EventStartVoice (#72, concurrent=0)
               duration: 73.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[    794.0] L VoicePlayActor[0] - EventStartVoice (#72, concurrent=0)
[    814.0] E VoicePlayActor[0] - EventStartVoice (#73, concurrent=0)
               duration: 97.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[    911.0] L VoicePlayActor[0] - EventStartVoice (#73, concurrent=0)
[    918.0] E VoicePlayActor[1] - EventStartVoice (#94, concurrent=0)
               duration: 43.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_006_b
               OffsetFrame: 30
               Speaker: Player_Event
[    930.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[    930.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
[    930.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
[    930.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#131, concurrent=0)
[    930.0] L Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#145, concurrent=0)
[    930.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 120.0
               EndBluarLevel: 1.5
               EndDistance: 4.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 4.5
               StartFNumber: 20.0
[    930.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
               duration: 120.0
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
[    930.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#58, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[    930.0] E Player_Event[0] - EventPlayASForTimeline (#101, concurrent=0)
               duration: 120.0
               ASName: C06_00-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    930.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#108, concurrent=0)
               duration: 120.0
               ASName: C06_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    930.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#132, concurrent=0)
               duration: 120.0
               ASName: AS-C06_00-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    949.0] E VoicePlayActor[0] - EventStartVoice (#74, concurrent=0)
               duration: 56.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[    961.0] L VoicePlayActor[1] - EventStartVoice (#94, concurrent=0)
[   1005.0] L VoicePlayActor[0] - EventStartVoice (#74, concurrent=0)
[   1035.0] E VoicePlayActor[0] - EventStartVoice (#75, concurrent=0)
               duration: 109.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   1050.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   1050.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
[   1050.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#58, concurrent=1)
[   1050.0] L Player_Event[0] - EventPlayASForTimeline (#101, concurrent=0)
[   1050.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#108, concurrent=0)
[   1050.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#132, concurrent=0)
[   1050.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 380.0
               EndBluarLevel: 2.0
               EndDistance: 1.0
               EndFNumber: 75.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.0
               StartFNumber: 75.0
[   1050.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
               duration: 540.0
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
[   1050.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#59, concurrent=1)
               duration: 540.0
               Near: 0.10000000149011612
[   1050.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#113, concurrent=0)
               duration: 540.0
               ASName: AS-C07_00-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1050.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#120, concurrent=0)
               duration: 540.0
               ASName: AS-C07_00-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1050.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#133, concurrent=0)
               duration: 540.0
               ASName: AS-C07_00-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1144.0] L VoicePlayActor[0] - EventStartVoice (#75, concurrent=0)
[   1165.0] E VoicePlayActor[0] - EventStartVoice (#76, concurrent=0)
               duration: 99.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_008_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   1250.0] E VoicePlayActor[1] - EventStartVoice (#95, concurrent=0)
               duration: 55.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   1264.0] L VoicePlayActor[0] - EventStartVoice (#76, concurrent=0)
[   1264.0] E VoicePlayActor[0] - EventStartVoice (#77, concurrent=0)
               duration: 295.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_010_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   1305.0] L VoicePlayActor[1] - EventStartVoice (#95, concurrent=0)
[   1430.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   1430.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 160.0
               EndBluarLevel: 2.0
               EndDistance: 1.7999999523162842
               EndFNumber: 75.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.0
               StartFNumber: 75.0
[   1559.0] L VoicePlayActor[0] - EventStartVoice (#77, concurrent=0)
[   1585.0] E VoicePlayActor[0] - EventStartVoice (#78, concurrent=0)
               duration: 116.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_011_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   1590.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   1590.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
[   1590.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#59, concurrent=1)
[   1590.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#113, concurrent=0)
[   1590.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#120, concurrent=0)
[   1590.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#133, concurrent=0)
[   1590.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 175.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.799999952316284
               StartFNumber: 70.0
[   1590.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
               duration: 460.0
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
[   1590.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#60, concurrent=1)
               duration: 460.0
               Near: 0.10000000149011612
[   1590.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#114, concurrent=0)
               duration: 460.0
               ASName: AS-C08_00-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1590.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#121, concurrent=0)
               duration: 460.0
               ASName: AS-C08_00-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1590.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#134, concurrent=0)
               duration: 460.0
               ASName: AS-C08_00-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1693.0] E VoicePlayActor[1] - EventStartVoice (#96, concurrent=0)
               duration: 75.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   1701.0] L VoicePlayActor[0] - EventStartVoice (#78, concurrent=0)
[   1740.0] E VoicePlayActor[0] - EventStartVoice (#79, concurrent=0)
               duration: 290.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_013_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   1765.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   1765.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 285.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 70.0
[   1768.0] L VoicePlayActor[1] - EventStartVoice (#96, concurrent=0)
[   2030.0] L VoicePlayActor[0] - EventStartVoice (#79, concurrent=0)
[   2041.0] E VoicePlayActor[0] - EventStartVoice (#80, concurrent=0)
               duration: 294.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_014_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   2050.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   2050.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
[   2050.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#60, concurrent=1)
[   2050.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#114, concurrent=0)
[   2050.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#121, concurrent=0)
[   2050.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#134, concurrent=0)
[   2050.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 960.0
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
[   2050.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
               duration: 960.0
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
[   2050.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#61, concurrent=1)
               duration: 960.0
               Near: 0.10000000149011612
[   2050.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#115, concurrent=0)
               duration: 960.0
               ASName: AS-C09_00-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2050.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#122, concurrent=0)
               duration: 960.0
               ASName: AS-C09_00-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2050.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#135, concurrent=0)
               duration: 960.0
               ASName: C09_00-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2335.0] L VoicePlayActor[0] - EventStartVoice (#80, concurrent=0)
[   2341.0] E VoicePlayActor[0] - EventStartVoice (#81, concurrent=0)
               duration: 358.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_015_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   2699.0] L VoicePlayActor[0] - EventStartVoice (#81, concurrent=0)
[   2699.0] E VoicePlayActor[0] - EventStartVoice (#82, concurrent=0)
               duration: 512.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_016_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   3010.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   3010.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
[   3010.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#61, concurrent=1)
[   3010.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#115, concurrent=0)
[   3010.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#122, concurrent=0)
[   3010.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#135, concurrent=0)
[   3010.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 240.0
               EndBluarLevel: 2.0
               EndDistance: 4.199999809265137
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.199999809265137
               StartFNumber: 60.0
[   3010.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
               duration: 240.0
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
[   3010.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#62, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[   3010.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#123, concurrent=0)
               duration: 240.0
               ASName: AS-C10_00-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3211.0] L VoicePlayActor[0] - EventStartVoice (#82, concurrent=0)
[   3220.0] E VoicePlayActor[1] - EventStartVoice (#97, concurrent=0)
               duration: 109.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_017_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   3243.0] E VoicePlayActor[0] - EventStartVoice (#83, concurrent=0)
               duration: 42.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_018_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   3250.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   3250.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
[   3250.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#62, concurrent=1)
[   3250.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#123, concurrent=0)
[   3250.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 40.0
               EndBluarLevel: 2.0
               EndDistance: 30.0
               EndFNumber: 6.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 20.0
               StartFNumber: 6.0
[   3250.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
               duration: 60.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C10_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3250.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#116, concurrent=0)
               duration: 60.0
               ASName: C10_50-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3250.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#124, concurrent=0)
               duration: 60.0
               ASName: C10_50-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3250.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#136, concurrent=0)
               duration: 60.0
               ASName: C10_50-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3250.0] E Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#146, concurrent=0)
               duration: 60.0
               ASName: C10_50-Enemy_MiddleBoss_IronKnuckle_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3285.0] L VoicePlayActor[0] - EventStartVoice (#83, concurrent=0)
[   3285.0] E VoicePlayActor[0] - EventStartVoice (#84, concurrent=0)
               duration: 44.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_019_b
               OffsetFrame: 30
               Speaker: Player_Event
[   3290.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   3290.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 20.0
               EndBluarLevel: 2.0
               EndDistance: 30.0
               EndFNumber: 6.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 30.0
               StartFNumber: 6.0
[   3310.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   3310.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
[   3310.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#116, concurrent=0)
[   3310.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#124, concurrent=0)
[   3310.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#136, concurrent=0)
[   3310.0] L Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#146, concurrent=0)
[   3310.0] L Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventGoOffstageForUser (#151, concurrent=0)
[   3310.0] E Dm_Locator[1] - EventPlayASForTimeline (#2, concurrent=0)
               duration: 120.0
               ASName: C11_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3310.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 120.0
               EndBluarLevel: 2.0
               EndDistance: 2.799999952316284
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.799999952316284
               StartFNumber: 30.0
[   3310.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
               duration: 120.0
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
[   3310.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#63, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[   3310.0] E Player_Event[0] - EventPlayASForTimeline (#102, concurrent=0)
               duration: 120.0
               ASName: C11_00-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3310.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#109, concurrent=0)
               duration: 120.0
               ASName: C11_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3310.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#125, concurrent=0)
               duration: 120.0
               ASName: AS-C11_00-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3310.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#137, concurrent=0)
               duration: 120.0
               ASName: C11_00-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3310.0] E Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#147, concurrent=0)
               duration: 120.0
               ASName: C11_00-Enemy_MiddleBoss_IronKnuckle_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3329.0] L VoicePlayActor[0] - EventStartVoice (#84, concurrent=0)
[   3329.0] L VoicePlayActor[1] - EventStartVoice (#97, concurrent=0)
[   3329.0] E VoicePlayActor[0] - EventStartVoice (#85, concurrent=0)
               duration: 131.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_020_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   3329.0] E VoicePlayActor[1] - EventStartVoice (#98, concurrent=0)
               duration: 56.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_021_ab
               OffsetFrame: 30
               Speaker: Player_Event
[   3385.0] L VoicePlayActor[1] - EventStartVoice (#98, concurrent=0)
[   3430.0] L Dm_Locator[1] - EventPlayASForTimeline (#2, concurrent=0)
[   3430.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   3430.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
[   3430.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#63, concurrent=1)
[   3430.0] L Player_Event[0] - EventPlayASForTimeline (#102, concurrent=0)
[   3430.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#109, concurrent=0)
[   3430.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#125, concurrent=0)
[   3430.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#137, concurrent=0)
[   3430.0] L Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#147, concurrent=0)
[   3430.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 30.0
               EndBluarLevel: 2.0
               EndDistance: 2.799999952316284
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.799999952316284
               StartFNumber: 100.0
[   3430.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
               duration: 100.0
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
[   3430.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#64, concurrent=1)
               duration: 100.0
               Near: 0.10000000149011612
[   3430.0] E Player_Event[0] - EventPlayASForTimeline (#103, concurrent=0)
               duration: 100.0
               ASName: C12_00-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3430.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#110, concurrent=0)
               duration: 100.0
               ASName: C12_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3460.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   3460.0] L VoicePlayActor[0] - EventStartVoice (#85, concurrent=0)
[   3460.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 30.0
               EndBluarLevel: 2.0
               EndDistance: 5.25
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.799999952316284
               StartFNumber: 100.0
[   3465.0] E VoicePlayActor[0] - EventStartVoice (#86, concurrent=0)
               duration: 52.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_021_b
               OffsetFrame: 30
               Speaker: Player_Event
[   3490.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   3490.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 40.0
               EndBluarLevel: 2.0
               EndDistance: 5.25
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.25
               StartFNumber: 100.0
[   3517.0] L VoicePlayActor[0] - EventStartVoice (#86, concurrent=0)
[   3530.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   3530.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
[   3530.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#64, concurrent=1)
[   3530.0] L Player_Event[0] - EventPlayASForTimeline (#103, concurrent=0)
[   3530.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#110, concurrent=0)
[   3530.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 90.0
               EndBluarLevel: 2.0
               EndDistance: 2.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.5
               StartFNumber: 30.0
[   3530.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
               duration: 150.0
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
[   3530.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#65, concurrent=1)
               duration: 150.0
               Near: 0.10000000149011612
[   3530.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#126, concurrent=0)
               duration: 150.0
               ASName: AS-C13_00-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3530.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#138, concurrent=0)
               duration: 150.0
               ASName: C13_00-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3530.0] E Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#148, concurrent=0)
               duration: 150.0
               ASName: C13_00-Enemy_MiddleBoss_IronKnuckle_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3588.0] E VoicePlayActor[0] - EventStartVoice (#87, concurrent=0)
               duration: 71.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_022_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   3620.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
[   3620.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 40.0
               EndBluarLevel: 2.0
               EndDistance: 6.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.5
               StartFNumber: 30.0
[   3659.0] L VoicePlayActor[0] - EventStartVoice (#87, concurrent=0)
[   3660.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
[   3660.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 20.0
               EndBluarLevel: 2.0
               EndDistance: 6.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 6.0
               StartFNumber: 20.0
[   3680.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
[   3680.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
[   3680.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#65, concurrent=1)
[   3680.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#126, concurrent=0)
[   3680.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#138, concurrent=0)
[   3680.0] L Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#148, concurrent=0)
[   3680.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
               duration: 120.0
               EndBluarLevel: 2.0
               EndDistance: 5.5
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.75
               StartFNumber: 20.0
[   3680.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
               duration: 200.0
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
[   3680.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
               duration: 200.0
               Near: 0.10000000149011612
[   3680.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#117, concurrent=0)
               duration: 200.0
               ASName: AS-C14_00-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3680.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#127, concurrent=0)
               duration: 200.0
               ASName: AS-C14_00-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3680.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#139, concurrent=0)
               duration: 200.0
               ASName: C14_00-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3680.0] E Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#149, concurrent=0)
               duration: 200.0
               ASName: C14_00-Enemy_MiddleBoss_IronKnuckle_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3688.0] E VoicePlayActor[0] - EventStartVoice (#88, concurrent=0)
               duration: 156.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_023_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   3800.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
[   3800.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 80.0
               EndBluarLevel: 2.0
               EndDistance: 5.5
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.5
               StartFNumber: 25.0
[   3844.0] L VoicePlayActor[0] - EventStartVoice (#88, concurrent=0)
[   3857.0] E VoicePlayActor[0] - EventStartVoice (#89, concurrent=0)
               duration: 232.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_024_b
               OffsetFrame: 30
               Speaker: Npc_Gerudo_Nabooru_Adult
[   3880.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
[   3880.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
[   3880.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
[   3880.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#117, concurrent=0)
[   3880.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#127, concurrent=0)
[   3880.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#139, concurrent=0)
[   3880.0] L Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#149, concurrent=0)
[   3880.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 360.0
               EndBluarLevel: 2.0
               EndDistance: 1.5
               EndFNumber: 20.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.5
               StartFNumber: 20.5
[   3880.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
               duration: 710.0
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
[   3880.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#67, concurrent=1)
               duration: 710.0
               Near: 0.10000000149011612
[   3880.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#118, concurrent=0)
               duration: 710.0
               ASName: AS-C15_00-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3880.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#128, concurrent=0)
               duration: 710.0
               ASName: AS-C15_00-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3880.0] E Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#140, concurrent=0)
               duration: 710.0
               ASName: C15_00-Npc_Gerudo_GEU_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3880.0] E Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#150, concurrent=0)
               duration: 710.0
               ASName: C15_00-Enemy_MiddleBoss_IronKnuckle_Nabooru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4089.0] L VoicePlayActor[0] - EventStartVoice (#89, concurrent=0)
[   4240.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
[   4240.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 160.0
               EndBluarLevel: 2.0
               EndDistance: 1.850000023841858
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.5
               StartFNumber: 20.5
[   4311.0] E VoicePlayActor[0] - EventStartVoice (#90, concurrent=0)
               duration: 256.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_026_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Kotake
[   4400.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
[   4400.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 190.0
               EndBluarLevel: 2.0
               EndDistance: 1.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.850000023841858
               StartFNumber: 20.0
[   4567.0] L VoicePlayActor[0] - EventStartVoice (#90, concurrent=0)
[   4571.0] E VoicePlayActor[0] - EventStartVoice (#91, concurrent=0)
               duration: 258.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_027_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   4590.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
[   4590.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
[   4590.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#67, concurrent=1)
[   4590.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#106, concurrent=2)
[   4590.0] L Npc_Navi - EventGoOffstageForUser (#111, concurrent=0)
[   4590.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#118, concurrent=0)
[   4590.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#128, concurrent=0)
[   4590.0] L Npc_Gerudo_Nabooru_Adult[0] - EventPlayASForTimeline (#140, concurrent=0)
[   4590.0] L Dm_Enemy_MiddleBoss_IronKnuckle_Nabooru[0] - EventPlayASForTimeline (#150, concurrent=0)
[   4590.0] L Obj_FireTemple_SwitchShutter_A_03[0] - EventPlayASForTimeline (#152, concurrent=0)
[   4590.0] E Dm_Locator[3] - EventPlayASForTimeline (#0, concurrent=0)
               duration: 820.0
               ASName: C16_00-Dm_Locator-C-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4590.0] E Dm_Locator[2] - EventPlayASForTimeline (#1, concurrent=0)
               duration: 820.0
               ASName: C16_00-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4590.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 450.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 17.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.4000000953674316
               StartFNumber: 17.5
[   4590.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
               duration: 820.0
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
[   4590.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#68, concurrent=1)
               duration: 820.0
               Near: 0.10000000149011612
[   4590.0] E Player_Event[0] - EventPlayASForTimeline (#104, concurrent=0)
               duration: 820.0
               ASName: C16_00-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4590.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#107, concurrent=2)
               duration: 820.0
[   4590.0] E Npc_Navi - EventPlayASForTimeline (#112, concurrent=0)
               duration: 820.0
               ASName: C16_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4590.0] E Dm_Npc_Kotake[0] - EventPlayASForTimeline (#119, concurrent=0)
               duration: 820.0
               ASName: AS-C16_00-Enemy_DungeonBoss_Kotake-Kotake-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4590.0] E Dm_Npc_Koume[0] - EventPlayASForTimeline (#129, concurrent=0)
               duration: 820.0
               ASName: AS-C16_00-Enemy_DungeonBoss_Kotake-Koume-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4590.0] E Obj_FireTemple_SwitchShutter_A_03[0] - EventPlayASForTimeline (#153, concurrent=0)
               duration: 820.0
               ASName: C16_00-Obj_SwitchShutter_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4829.0] L VoicePlayActor[0] - EventStartVoice (#91, concurrent=0)
[   4918.0] E VoicePlayActor[0] - EventStartVoice (#92, concurrent=0)
               duration: 241.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_028_b
               OffsetFrame: 30
               Speaker: ''
[   4918.0] E VoicePlayActor[1] - EventStartVoice (#99, concurrent=0)
               duration: 259.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_029_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Koume
[   5040.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
[   5040.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 230.0
               EndBluarLevel: 2.0
               EndDistance: 5.699999809265137
               EndFNumber: 17.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 17.5
[   5159.0] L VoicePlayActor[0] - EventStartVoice (#92, concurrent=0)
[   5177.0] L VoicePlayActor[1] - EventStartVoice (#99, concurrent=0)
[   5269.0] E VoicePlayActor[0] - EventStartVoice (#93, concurrent=0)
               duration: 104.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SpiritTemple_0020:Dm_SpiritTemple_0020_Text_030_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   5270.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
[   5270.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 140.0
               EndBluarLevel: 2.0
               EndDistance: 5.699999809265137
               EndFNumber: 17.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.699999809265137
               StartFNumber: 17.5
[   5373.0] L VoicePlayActor[0] - EventStartVoice (#93, concurrent=0)
[   5410.0] L Dm_Locator[3] - EventPlayASForTimeline (#0, concurrent=0)
[   5410.0] L Dm_Locator[2] - EventPlayASForTimeline (#1, concurrent=0)
[   5410.0] L Dm_Locator[0] - EventDoNothing (#3, concurrent=0)
[   5410.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
[   5410.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
[   5410.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#68, concurrent=1)
[   5410.0] L Player_Event[0] - EventPlayASForTimeline (#104, concurrent=0)
[   5410.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#107, concurrent=2)
[   5410.0] L Npc_Navi - EventPlayASForTimeline (#112, concurrent=0)
[   5410.0] L Dm_Npc_Kotake[0] - EventPlayASForTimeline (#119, concurrent=0)
[   5410.0] L Dm_Npc_Koume[0] - EventPlayASForTimeline (#129, concurrent=0)
[   5410.0] L Obj_FireTemple_SwitchShutter_A_03[0] - EventPlayASForTimeline (#153, concurrent=0)
