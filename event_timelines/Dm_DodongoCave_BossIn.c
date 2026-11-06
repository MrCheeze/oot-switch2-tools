-------- Event timeline: Dm_DodongoCave_BossIn --------
actors: 13
clips: 50
oneshots: 0
cuts: 8
duration: 2280.0
subtimelines: ['Dm_DodongoCave_BossIn_Effect', 'Dm_DodongoCave_BossIn_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 90.0
x4: 0
params: (none)

Cut: C03
start time: 180.0
x4: 0
params: (none)

Cut: C04
start time: 630.0
x4: 0
params: (none)

Cut: C05
start time: 955.0
x4: 0
params: (none)

Cut: C06
start time: 1135.0
x4: 0
params: (none)

Cut: C07
start time: 1355.0
x4: 0
params: (none)

Cut: C08
start time: 1455.0
x4: 0
params: (none)


===== Actors =====

Actor: GameSystemActor[1]
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
actions: ['EventEventFadeInForTimeline', 'EventShowDemoNicknameUIForTimeline']
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
UseEventModelAnime: 使用しない

Actor: Obj_DodongoCave_LavaDirty_A_02[2]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 23.999990463256836
- 73.23999786376953
- -63.0
Rotation:
- -180.0
- 0.0
- -180.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Enemy_DungeonBoss_Dodongo
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventDungeonBossSetConsiderBattlePresentation']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossIn/Dm_DodongoCave_BossIn_Enemy_DungeonBoss_Dodongo/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossIn/Dm_DodongoCave_BossIn_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[1]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossIn/Dm_DodongoCave_BossIn_Dm_Locator/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossIn/Dm_DodongoCave_BossIn_Player_Child/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossIn/Dm_DodongoCave_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DodongoCave_BossIn/Dm_DodongoCave_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerSoundStartBossBgm']
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
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 90.0
               EndBluarLevel: 2.0
               EndDistance: 20.0
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: false
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 10.5
               StartFNumber: 20.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
               duration: 90.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01_00
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#24, concurrent=1)
               duration: 90.0
               Near: 0.10000000149011612
[      0.0] E Obj_DodongoCave_LavaDirty_A_02[2] - EventDoNothing (#28, concurrent=0)
               duration: 2280.0
               IsWaitEnd: true
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 90.0
               ASName: C01_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#41, concurrent=1)
               duration: 90.0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#42, concurrent=0)
               duration: 1455.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 90.0
               ASName: C01_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[     70.0] E VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
               duration: 99.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DodongoCave_BossIn:Dm_DodongoCave_BossIn_Text_000_b
               OffsetFrame: 30
               Speaker: Player_Child
[     90.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[     90.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
[     90.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#24, concurrent=1)
[     90.0] L Player_Event[0] - EventPlayASForTimeline (#35, concurrent=0)
[     90.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#41, concurrent=1)
[     90.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#44, concurrent=0)
[     90.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 90.0
               EndBluarLevel: 1.5
               EndDistance: 0.8500000238418579
               EndFNumber: 240.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 0.8500000238418579
               StartFNumber: 240.0
[     90.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
               duration: 90.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C02_00
               TargetActorInstanceName: ''
               TargetActorName: ''
[     90.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#25, concurrent=1)
               duration: 90.0
               Near: 0.10000000149011612
[     90.0] E Player_Event[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 90.0
               ASName: C02_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     90.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 90.0
               ASName: C02_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    169.0] L VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
[    180.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[    180.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
[    180.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#25, concurrent=1)
[    180.0] L Player_Event[0] - EventPlayASForTimeline (#36, concurrent=0)
[    180.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#45, concurrent=0)
[    180.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 450.0
               EndBluarLevel: 3.0
               EndDistance: 12.0
               EndFNumber: 48.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 12.0
               StartFNumber: 48.0
[    180.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
               duration: 450.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03_00
               TargetActorInstanceName: ''
               TargetActorName: ''
[    180.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#26, concurrent=1)
               duration: 450.0
               Near: 0.10000000149011612
[    180.0] E Player_Event[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 450.0
               ASName: C03_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    180.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 450.0
               ASName: C03_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    341.0] E VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
               duration: 98.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DodongoCave_BossIn:Dm_DodongoCave_BossIn_Text_001_b
               OffsetFrame: 30
               Speaker: Player_Child
[    439.0] L VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
[    630.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[    630.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
[    630.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#26, concurrent=1)
[    630.0] L Player_Event[0] - EventPlayASForTimeline (#37, concurrent=0)
[    630.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#46, concurrent=0)
[    630.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 325.0
               EndBluarLevel: 3.0
               EndDistance: 12.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 14.449999809265137
               StartFNumber: 20.0
[    630.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#19, concurrent=0)
               duration: 325.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C04_00
               TargetActorInstanceName: ''
               TargetActorName: ''
[    630.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#27, concurrent=1)
               duration: 325.0
               Near: 0.10000000149011612
[    630.0] E Dm_Locator[0] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 325.0
               ASName: C04_00-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    630.0] E Dm_Locator[1] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 325.0
               ASName: C04_00-Dm_Locator-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    630.0] E Player_Event[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 325.0
               ASName: C04_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    630.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 325.0
               ASName: C04_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    747.0] E VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
               duration: 137.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DodongoCave_BossIn:Dm_DodongoCave_BossIn_Text_002_b
               OffsetFrame: 30
               Speaker: Player_Child
[    884.0] L VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
[    955.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[    955.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#19, concurrent=0)
[    955.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#27, concurrent=1)
[    955.0] L Dm_Locator[0] - EventPlayASForTimeline (#33, concurrent=0)
[    955.0] L Dm_Locator[1] - EventPlayASForTimeline (#34, concurrent=0)
[    955.0] L Player_Event[0] - EventPlayASForTimeline (#38, concurrent=0)
[    955.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#47, concurrent=0)
[    955.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 180.0
               EndBluarLevel: 1.5
               EndDistance: 3.049999952316284
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 3.799999952316284
               StartFNumber: 60.0
[    955.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
               duration: 180.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C05_00
               TargetActorInstanceName: ''
               TargetActorName: ''
[    955.0] E Player_Event[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 180.0
               ASName: C05_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    955.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 180.0
               ASName: C05_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1017.0] E VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
               duration: 116.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DodongoCave_BossIn:Dm_DodongoCave_BossIn_Text_003_b
               OffsetFrame: 30
               Speaker: Player_Child
[   1133.0] L VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
[   1135.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   1135.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
[   1135.0] L Player_Event[0] - EventPlayASForTimeline (#39, concurrent=0)
[   1135.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#48, concurrent=0)
[   1135.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 220.0
               EndBluarLevel: 2.0
               EndDistance: 3.3499999046325684
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.3499999046325684
               StartFNumber: 80.0
[   1135.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
               duration: 220.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C06_00
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1135.0] E Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#29, concurrent=0)
               duration: 220.0
               ASName: C06_00-Enemy_DungeonBoss_Dodongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1355.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   1355.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
[   1355.0] L Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#29, concurrent=0)
[   1355.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 100.0
               EndBluarLevel: 2.0
               EndDistance: 3.3499999046325684
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.3499999046325684
               StartFNumber: 80.0
[   1355.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
               duration: 100.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C07_00
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1355.0] E Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#30, concurrent=0)
               duration: 100.0
               ASName: C07_00-Enemy_DungeonBoss_Dodongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1455.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   1455.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
[   1455.0] L Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#30, concurrent=0)
[   1455.0] L Npc_Navi - EventGoOffstageForUser (#42, concurrent=0)
[   1455.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 284.0
               EndBluarLevel: 2.0
               EndDistance: 3.5
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.300000190734863
               StartFNumber: 60.0
[   1455.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
               duration: 825.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C08_00
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1455.0] E Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#31, concurrent=0)
               duration: 825.0
               ASName: C08_00-Enemy_DungeonBoss_Dodongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1455.0] E Player_Event[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 825.0
               ASName: C08_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1455.0] E Npc_Navi - EventPlayASForTimeline (#43, concurrent=0)
               duration: 825.0
               ASName: C08_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1739.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   1739.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 341.0
               EndBluarLevel: 1.0
               EndDistance: 2.5
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.5
               StartFNumber: 60.0
[   1800.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#1, concurrent=0)
               duration: 430.0
               DemoNicknamePos: 0
               DemoNicknameType: 1
               InAnimFrame: 110
               IsWaitEnd: true
               NameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Dodongo_Name
               NicknameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Dodongo_Nickname
               OutAnimFrame: 110
[   1800.0] E Enemy_DungeonBoss_Dodongo - EventDungeonBossSetConsiderBattlePresentation (#32, concurrent=1)
               duration: 8.0
[   1800.0] E SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#49, concurrent=0)
               duration: 8.0
               BgmName: BGM_DungeonBoss_Dinasour
[   1808.0] L Enemy_DungeonBoss_Dodongo - EventDungeonBossSetConsiderBattlePresentation (#32, concurrent=1)
[   1808.0] L SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#49, concurrent=0)
[   2080.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   2080.0] E PostProcessingActor[0] - EventResetToInGameParametersDoF (#15, concurrent=0)
               duration: 200.0
               IsWaitEnd: true
               TransitionFrame: 0
[   2230.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#1, concurrent=0)
[   2280.0] L PostProcessingActor[0] - EventResetToInGameParametersDoF (#15, concurrent=0)
[   2280.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
[   2280.0] L Obj_DodongoCave_LavaDirty_A_02[2] - EventDoNothing (#28, concurrent=0)
[   2280.0] L Enemy_DungeonBoss_Dodongo - EventPlayASForTimeline (#31, concurrent=0)
[   2280.0] L Player_Event[0] - EventPlayASForTimeline (#40, concurrent=0)
[   2280.0] L Npc_Navi - EventPlayASForTimeline (#43, concurrent=0)
