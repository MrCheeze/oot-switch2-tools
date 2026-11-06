-------- Event timeline: Dm_ForestTemple_BossIn --------
actors: 15
clips: 59
oneshots: 0
cuts: 6
duration: 2505.0
subtimelines: ['Dm_ForestTemple_BossIn_Effect', 'Dm_ForestTemple_BossIn_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 341.0
x4: 0
params: (none)

Cut: C03
start time: 541.0
x4: 0
params: (none)

Cut: C04
start time: 1057.0
x4: 0
params: (none)

Cut: C05
start time: 1501.0
x4: 0
params: (none)

Cut: C06
start time: 1948.0
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
UseEventModelAnime: Work/Model/Event/Dm_ForestTemple_BossIn/Dm_ForestTemple_BossIn_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Enemy_GhostPicturePerformer_PhantomGanonHorse[Performer]
concurrent clips: 1
actions: ['EventPhantomGanonHorsePerformerStartDisappear']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Enemy_GhostPicturePerformer_PhantomGanon[Performer]
concurrent clips: 1
actions: ['EventPhantomGanonPerformerStartDisappear']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_ForestTemple_SwitchShutter_A_01[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ForestTemple_BossIn/Dm_ForestTemple_BossIn_Obj_ForestTemple_SwitchShutter_A_01/workspace.pp__ModelProject.gyml

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline', 'EventResetToInGameParametersDoF']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerSoundStartBossBgm']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeInForTimeline']
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

Actor: Dm_Npc_Gerudo_Ganondorf[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_ForestTemple_BossIn_Npc_Gerudo_GEU_Ganondorf_Child.root.as
UseEventModelAnime: Work/Model/Event/Dm_ForestTemple_BossIn/Dm_ForestTemple_BossIn_Npc_Gerudo_GEU_Ganondorf_Child/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_PhantomGanon
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser', 'EventDungeonBossSetConsiderBattlePresentation', 'EventTriggerSetModelLodManual']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ForestTemple_BossIn/Dm_ForestTemple_BossIn_Npc_DungeonBoss_PhantomGanon/workspace.pp__ModelProject.gyml

Actor: Enemy_PhantomGanonHorse
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_ForestTemple_BossIn_Animal_Horse_Ganondorf.root.as
UseEventModelAnime: Work/Model/Event/Dm_ForestTemple_BossIn/Dm_ForestTemple_BossIn_Animal_Horse_Ganondorf/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ForestTemple_BossIn/Dm_ForestTemple_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ForestTemple_BossIn/Dm_ForestTemple_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Player_Event
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
EventMemberCreateMethod: 2
ExceptionalBindType: 4
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ForestTemple_BossIn/Dm_ForestTemple_BossIn_Player_Adult/workspace.pp__ModelProject.gyml

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

[      0.0] E Dm_Locator[0] - EventPlayASForTimeline (#0, concurrent=0)
               duration: 2508.0
               ASName: C06-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Obj_ForestTemple_SwitchShutter_A_01[0] - EventPlayASForTimeline (#3, concurrent=0)
               duration: 341.0
               ASName: C01-Obj_ForestTemple_SwitchShutter_A_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 341.0
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
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#13, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Enemy_DungeonBoss_PhantomGanon - EventGoOffstageForUser (#24, concurrent=0)
               duration: 1501.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Npc_Navi - EventGoOffstageForUser (#33, concurrent=0)
               duration: 1948.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 341.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event - EventPlayASForTimeline (#40, concurrent=0)
               duration: 341.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event - EventTriggerChemicalRequestDryTemporarily (#46, concurrent=1)
               duration: 100.0
[      0.0] E Player_Event - EventTriggerPlayerTemporaryBootsChange (#47, concurrent=2)
               duration: 100.0
               BootsType: 0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
               duration: 341.0
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
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#13, concurrent=0)
[    100.0] L Player_Event - EventTriggerChemicalRequestDryTemporarily (#46, concurrent=1)
[    100.0] L Player_Event - EventTriggerPlayerTemporaryBootsChange (#47, concurrent=2)
[    341.0] L Obj_ForestTemple_SwitchShutter_A_01[0] - EventPlayASForTimeline (#3, concurrent=0)
[    341.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[    341.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
[    341.0] L Player_Event - EventPlayASForTimeline (#40, concurrent=0)
[    341.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
[    341.0] E Obj_ForestTemple_SwitchShutter_A_01[0] - EventPlayASForTimeline (#4, concurrent=0)
               duration: 200.0
               ASName: C02-Obj_ForestTemple_SwitchShutter_A_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    341.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 200.0
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
[    341.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 200.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    341.0] E Player_Event - EventPlayASForTimeline (#41, concurrent=0)
               duration: 200.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    341.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
               duration: 200.0
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
[    400.0] E VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
               duration: 92.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ForestTemple_BossIn:Dm_ForestTemple_BossIn_Text_000_b
               OffsetFrame: 30
               Speaker: Player_Event
[    492.0] L VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
[    541.0] L Obj_ForestTemple_SwitchShutter_A_01[0] - EventPlayASForTimeline (#4, concurrent=0)
[    541.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[    541.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
[    541.0] L Player_Event - EventPlayASForTimeline (#41, concurrent=0)
[    541.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
[    541.0] E Obj_ForestTemple_SwitchShutter_A_01[0] - EventPlayASForTimeline (#5, concurrent=0)
               duration: 1967.0
               ASName: C03-Obj_ForestTemple_SwitchShutter_A_01-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    541.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 516.0
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
[    541.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#20, concurrent=0)
               duration: 516.0
               ASName: C03-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    541.0] E Enemy_PhantomGanonHorse - EventPlayASForTimeline (#29, concurrent=0)
               duration: 516.0
               ASName: C03-Animal_Horse_Ganondorf-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    541.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 516.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    541.0] E Player_Event - EventPlayASForTimeline (#42, concurrent=0)
               duration: 516.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    541.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
               duration: 516.0
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
[    541.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
               duration: 516.0
               Near: 0.30000001192092896
[    870.0] E VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
               duration: 61.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ForestTemple_BossIn:Dm_ForestTemple_BossIn_Text_002_b
               OffsetFrame: 30
               Speaker: Player_Event
[    931.0] L VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
[    946.0] E VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
               duration: 57.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ForestTemple_BossIn:Dm_ForestTemple_BossIn_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   1003.0] L VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
[   1057.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   1057.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#20, concurrent=0)
[   1057.0] L Enemy_PhantomGanonHorse - EventPlayASForTimeline (#29, concurrent=0)
[   1057.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#37, concurrent=0)
[   1057.0] L Player_Event - EventPlayASForTimeline (#42, concurrent=0)
[   1057.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#51, concurrent=0)
[   1057.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
[   1057.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 444.0
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
[   1057.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#21, concurrent=0)
               duration: 444.0
               ASName: AS-C04-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1057.0] E Enemy_PhantomGanonHorse - EventPlayASForTimeline (#30, concurrent=0)
               duration: 444.0
               ASName: C04-Animal_Horse_Ganondorf-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1057.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 444.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1057.0] E Player_Event - EventPlayASForTimeline (#43, concurrent=0)
               duration: 444.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1057.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
               duration: 444.0
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
[   1057.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
               duration: 444.0
               Near: 0.30000001192092896
[   1201.0] E VoicePlayActor[0] - EventStartVoice (#18, concurrent=0)
               duration: 161.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ForestTemple_BossIn:Dm_ForestTemple_BossIn_Text_003_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   1362.0] L VoicePlayActor[0] - EventStartVoice (#18, concurrent=0)
[   1501.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   1501.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#21, concurrent=0)
[   1501.0] L Enemy_DungeonBoss_PhantomGanon - EventGoOffstageForUser (#24, concurrent=0)
[   1501.0] L Enemy_PhantomGanonHorse - EventPlayASForTimeline (#30, concurrent=0)
[   1501.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#38, concurrent=0)
[   1501.0] L Player_Event - EventPlayASForTimeline (#43, concurrent=0)
[   1501.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#52, concurrent=0)
[   1501.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
[   1501.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 447.0
               EndBluarLevel: 3.5
               EndDistance: 2.2300000190734863
               EndFNumber: 115.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.5
               StartDistance: 2.2300000190734863
               StartFNumber: 115.0
[   1501.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 447.0
               ASName: AS-C05-Npc_Gerudo_GEU_Ganondorf_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1501.0] E Enemy_DungeonBoss_PhantomGanon - EventPlayASForTimeline (#25, concurrent=0)
               duration: 447.0
               ASName: C05-Npc_DungeonBoss_PhantomGanon-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1501.0] E Enemy_PhantomGanonHorse - EventPlayASForTimeline (#31, concurrent=0)
               duration: 447.0
               ASName: C05-Animal_Horse_Ganondorf-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1501.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 447.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1501.0] E Player_Event - EventPlayASForTimeline (#44, concurrent=0)
               duration: 447.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1501.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
               duration: 447.0
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
[   1501.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
               duration: 447.0
               Near: 0.10000000149011612
[   1865.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#14, concurrent=0)
               duration: 430.0
               DemoNicknamePos: 0
               DemoNicknameType: 1
               InAnimFrame: 110
               IsWaitEnd: false
               NameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_PhantomGanon_Name
               NicknameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_PhantomGanon_Nickname
               OutAnimFrame: 110
[   1907.0] E VoicePlayActor[0] - EventStartVoice (#19, concurrent=0)
               duration: 45.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ForestTemple_BossIn:Dm_ForestTemple_BossIn_Text_004_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_PhantomGanon
[   1948.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   1948.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventPlayASForTimeline (#22, concurrent=0)
[   1948.0] L Enemy_DungeonBoss_PhantomGanon - EventPlayASForTimeline (#25, concurrent=0)
[   1948.0] L Enemy_PhantomGanonHorse - EventPlayASForTimeline (#31, concurrent=0)
[   1948.0] L Npc_Navi - EventGoOffstageForUser (#33, concurrent=0)
[   1948.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#39, concurrent=0)
[   1948.0] L Player_Event - EventPlayASForTimeline (#44, concurrent=0)
[   1948.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#53, concurrent=0)
[   1948.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
[   1948.0] E PostProcessingActor[0] - EventResetToInGameParametersDoF (#11, concurrent=0)
               duration: 560.0
               IsWaitEnd: true
               TransitionFrame: 0
[   1948.0] E Dm_Npc_Gerudo_Ganondorf[0] - EventGoOffstageForUser (#23, concurrent=0)
               duration: 560.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1948.0] E Enemy_DungeonBoss_PhantomGanon - EventPlayASForTimeline (#26, concurrent=0)
               duration: 557.0
               ASName: C06-Npc_DungeonBoss_PhantomGanon-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1948.0] E Enemy_DungeonBoss_PhantomGanon - EventTriggerSetModelLodManual (#28, concurrent=2)
               duration: 560.0
               LodLevel: 1
[   1948.0] E Enemy_PhantomGanonHorse - EventPlayASForTimeline (#32, concurrent=0)
               duration: 557.0
               ASName: AS-C06-Animal_Horse_Ganondorf-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1948.0] E Npc_Navi - EventPlayASForTimeline (#34, concurrent=0)
               duration: 557.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1948.0] E Player_Event - EventPlayASForTimeline (#45, concurrent=0)
               duration: 557.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1948.0] E Player_Event - EventTriggerPlayerRestoreBootsChange (#48, concurrent=2)
               duration: 100.0
[   1948.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
               duration: 557.0
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
[   1948.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#58, concurrent=1)
               duration: 557.0
               Near: 0.30000001192092896
[   1952.0] L VoicePlayActor[0] - EventStartVoice (#19, concurrent=0)
[   1958.0] E SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#12, concurrent=0)
               duration: 100.0
               BgmName: BGM_DungeonBoss
[   1958.0] E Enemy_DungeonBoss_PhantomGanon - EventDungeonBossSetConsiderBattlePresentation (#27, concurrent=1)
               duration: 100.0
[   2048.0] L Player_Event - EventTriggerPlayerRestoreBootsChange (#48, concurrent=2)
[   2058.0] L SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#12, concurrent=0)
[   2058.0] L Enemy_DungeonBoss_PhantomGanon - EventDungeonBossSetConsiderBattlePresentation (#27, concurrent=1)
[   2295.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#14, concurrent=0)
[   2408.0] E Enemy_GhostPicturePerformer_PhantomGanonHorse[Performer] - EventPhantomGanonHorsePerformerStartDisappear (#1, concurrent=0)
               duration: 100.0
               IsWaitEnd: true
[   2408.0] E Enemy_GhostPicturePerformer_PhantomGanon[Performer] - EventPhantomGanonPerformerStartDisappear (#2, concurrent=0)
               duration: 100.0
               IsWaitEnd: true
[   2505.0] L Enemy_DungeonBoss_PhantomGanon - EventPlayASForTimeline (#26, concurrent=0)
[   2505.0] L Enemy_PhantomGanonHorse - EventPlayASForTimeline (#32, concurrent=0)
[   2505.0] L Npc_Navi - EventPlayASForTimeline (#34, concurrent=0)
[   2505.0] L Player_Event - EventPlayASForTimeline (#45, concurrent=0)
[   2505.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#54, concurrent=0)
[   2505.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#58, concurrent=1)
[   2508.0] L Dm_Locator[0] - EventPlayASForTimeline (#0, concurrent=0)
[   2508.0] L Enemy_GhostPicturePerformer_PhantomGanonHorse[Performer] - EventPhantomGanonHorsePerformerStartDisappear (#1, concurrent=0)
[   2508.0] L Enemy_GhostPicturePerformer_PhantomGanon[Performer] - EventPhantomGanonPerformerStartDisappear (#2, concurrent=0)
[   2508.0] L Obj_ForestTemple_SwitchShutter_A_01[0] - EventPlayASForTimeline (#5, concurrent=0)
[   2508.0] L PostProcessingActor[0] - EventResetToInGameParametersDoF (#11, concurrent=0)
[   2508.0] L Dm_Npc_Gerudo_Ganondorf[0] - EventGoOffstageForUser (#23, concurrent=0)
[   2508.0] L Enemy_DungeonBoss_PhantomGanon - EventTriggerSetModelLodManual (#28, concurrent=2)
