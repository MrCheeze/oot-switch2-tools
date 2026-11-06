-------- Event timeline: Dm_FinalBattle_BossIn --------
actors: 33
clips: 199
oneshots: 0
cuts: 22
duration: 4574.0
subtimelines: ['Dm_FinalBattle_BossIn_Effect', 'Dm_FinalBattle_BossIn_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 240.0
x4: 0
params: (none)

Cut: cut03
start time: 352.0
x4: 0
params: (none)

Cut: cut04
start time: 470.0
x4: 0
params: (none)

Cut: cut05
start time: 656.0
x4: 0
params: (none)

Cut: cut06
start time: 708.0
x4: 0
params: (none)

Cut: cut07
start time: 952.0
x4: 0
params: (none)

Cut: cut08
start time: 1078.0
x4: 0
params: (none)

Cut: cut09
start time: 1708.0
x4: 0
params: (none)

Cut: cut10
start time: 1798.0
x4: 0
params: (none)

Cut: cut11
start time: 1990.0
x4: 0
params: (none)

Cut: cut13
start time: 2364.0
x4: 0
params: (none)

Cut: cut14
start time: 2610.0
x4: 0
params: (none)

Cut: cut15
start time: 2856.0
x4: 0
params: (none)

Cut: cut16
start time: 3348.0
x4: 0
params: (none)

Cut: cut17
start time: 3462.0
x4: 0
params: (none)

Cut: cut18
start time: 3520.0
x4: 0
params: (none)

Cut: cut19
start time: 3656.0
x4: 0
params: (none)

Cut: cut20
start time: 3794.0
x4: 0
params: (none)

Cut: cut20B
start time: 3962.0
x4: 0
params: (none)

Cut: cut21
start time: 4064.0
x4: 0
params: (none)

Cut: cut22
start time: 4274.0
x4: 0
params: (none)


===== Actors =====

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline', 'EventShowDemoNicknameUIForTimeline']
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
UseEventModelAnime: Work/Model/Event/Dm_FinalBattle_BossIn/Dm_FinalBattle_BossIn/workspace.pp__ModelProject.gyml

Actor: PostProcessingActor[DepthCam]
concurrent clips: 1
actions: ['EventSetDoFForTimeline', 'EventResetToInGameParametersDoF']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventOverwriteSceneShadingParams']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Player_Event
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerPlayerRestoreBootsChange']
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
UseEventModelAnime: Work/Model/Event/Dm_FinalBattle_BossIn/Dm_FinalBattle_BossIn_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Weapon_Sword_Master[0]
concurrent clips: 1
actions: ['EventModelBind', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[MasterSword]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: ''
UseEventModelAnime: Work/Model/Event/Dm_FinalBattle_BossIn/Dm_FinalBattle_BossIn_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_FinalBattle_BossIn_Navi.root.as
UseEventModelAnime: Work/Model/Event/Dm_FinalBattle_BossIn/Dm_FinalBattle_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 0.0
- 0.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_FinalBattle_BossIn/Dm_FinalBattle_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Ganon
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventDungeonBossSetConsiderBattlePresentation']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_FinalBattle_BossIn_Ganon.root.as
UseEventModelAnime: Work/Model/Event/Dm_FinalBattle_BossIn/Dm_FinalBattle_BossIn_Enemy_DungeonBoss_Ganon/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Ganondorf[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_FinalBattle_BossIn_Ganondorf.root.as
UseEventModelAnime: Work/Model/Event/Dm_FinalBattle_BossIn/Dm_FinalBattle_BossIn_Npc_Gerudo_GEU_Ganondorf_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Zelda_Adult
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_FinalBattle_BossIn_Zelda.root.as
UseEventModelAnime: Work/Model/Event/Dm_FinalBattle_BossIn/Dm_FinalBattle_BossIn_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml

Actor: VoicePlayActor
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

Actor: SoundSystemActor[2]
concurrent clips: 1
actions: ['EventTriggerSoundStartBossBgm']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: WorldMgrThunderMgr
concurrent clips: 1
actions: ['EventTriggerWmThunderOneShot']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[00]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_GanonCastle_Rubble_A_01
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_FinalBattle_BossIn/Dm_FinalBattle_BossIn_Obj_GanonCastle_Rubble_A/workspace.pp__ModelProject.gyml

Actor: Land_GanonCastle_FinalBattleField_FireRubble_B_01[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_FinalBattle_BossIn/Dm_FinalBattle_BossIn_Dm_Land_FireRubble/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[Effect_Triangle]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: ''
UseEventModelAnime: Work/Model/Event/Dm_FinalBattle_BossIn/Dm_FinalBattle_BossIn_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[Effect]
concurrent clips: 1
actions: []
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

Actor: EftLoc_FinalBattleField_Env_1st_00
concurrent clips: 1
actions: ['EventWarpToHomeMatrix', 'EventTriggerEmitXLink', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_GanonCastle_FireWallCircle_A_01
concurrent clips: 1
actions: ['EventTriggerXLinkFadeByKey', 'EventWarpToHomeMatrix', 'EventTriggerEmitXLink']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_GanonCastle_FireWall_A_04
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_01]
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventWarpToHomeMatrix']
params: EventMemberCreateMethod: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_GanonCastle_BrokenRubble_A_02[BrokenRubble_02]
concurrent clips: 1
actions: ['EventWarpToHomeMatrix', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_GanonCastle_BrokenRubble_A_04[BrokenRubble_04]
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventWarpToHomeMatrix']
params: EventMemberCreateMethod: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_A_01_AlwaysVisible_01]
concurrent clips: 1
actions: ['EventWarpToHomeMatrix']
params: EventMemberCreateMethod: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_A_01_AlwaysVisible_02]
concurrent clips: 1
actions: ['EventWarpToHomeMatrix']
params: EventMemberCreateMethod: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_A_01_AlwaysVisible_03]
concurrent clips: 1
actions: ['EventWarpToHomeMatrix']
params: EventMemberCreateMethod: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_GanonCastle_BrokenRubble_A_02[BrokenRubble_A_02_AlwaysVisible_01]
concurrent clips: 1
actions: ['EventWarpToHomeMatrix']
params: EventMemberCreateMethod: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_GanonCastle_BrokenRubble_A_02[BrokenRubble_A_02_AlwaysVisible_02]
concurrent clips: 1
actions: ['EventWarpToHomeMatrix']
params: EventMemberCreateMethod: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Obj_GanonCastle_BrokenRubble_A_04[BrokenRubble_A_04_AlwaysVisible_01]
concurrent clips: 1
actions: ['EventWarpToHomeMatrix']
params: EventMemberCreateMethod: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 20.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#2, concurrent=0)
               duration: 240.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#35, concurrent=0)
               duration: 240.0
               EndBluarLevel: 2.700000047683716
               EndDistance: 2.5199999809265137
               EndFNumber: 150.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.700000047683716
               StartDistance: 2.5199999809265137
               StartFNumber: 150.0
[      0.0] E PostProcessingActor[0] - EventOverwriteSceneShadingParams (#64, concurrent=0)
               duration: 15.0
               BakeLightLuminanceRatio: 0.0
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 0.0
[      0.0] E Player_Event - EventPlayASForTimeline (#66, concurrent=0)
               duration: 240.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event - EventTriggerPlayerTemporaryBootsChange (#83, concurrent=1)
               duration: 100.0
               BootsType: 0
[      0.0] E Weapon_Sword_Master[0] - EventModelBind (#85, concurrent=0)
               duration: 952.0
               ActorName: Player_Event
               BoneName: Weapon_L
               InstanceName: ''
               IsWaitEnd: true
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[      0.0] E Dm_Npc_Navi - EventPlayASForTimeline (#90, concurrent=0)
               duration: 240.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#106, concurrent=0)
               duration: 4274.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#122, concurrent=0)
               duration: 240.0
               ASName: C01-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Obj_GanonCastle_Rubble_A_01 - EventPlayASForTimeline (#169, concurrent=0)
               duration: 708.0
               ASName: C01-Obj_GanonCastle_Rubble_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Land_GanonCastle_FinalBattleField_FireRubble_B_01[0] - EventPlayASForTimeline (#173, concurrent=0)
               duration: 240.0
               ASName: C01-Dm_Land_FireRubble
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E EftLoc_FinalBattleField_Env_1st_00 - EventGoOffstageForUser (#180, concurrent=0)
               duration: 2610.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Obj_GanonCastle_FireWallCircle_A_01 - EventTriggerXLinkFadeByKey (#183, concurrent=0)
               duration: 4274.0
               ELinkKey: Chemical_Fire
               IsKill: false
               SLinkKey: ''
[      0.0] E Obj_GanonCastle_FireWall_A_04 - EventGoOffstageForUser (#186, concurrent=0)
               duration: 4574.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_01] - EventGoOffstageForUser (#187, concurrent=0)
               duration: 2610.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Obj_GanonCastle_BrokenRubble_A_02[BrokenRubble_02] - EventGoOffstageForUser (#189, concurrent=0)
               duration: 2610.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Obj_GanonCastle_BrokenRubble_A_04[BrokenRubble_04] - EventGoOffstageForUser (#191, concurrent=0)
               duration: 2610.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_A_01_AlwaysVisible_01] - EventWarpToHomeMatrix (#193, concurrent=0)
               duration: 4574.0
               IsWaitEnd: true
[      0.0] E Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_A_01_AlwaysVisible_02] - EventWarpToHomeMatrix (#194, concurrent=0)
               duration: 4574.0
               IsWaitEnd: true
[      0.0] E Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_A_01_AlwaysVisible_03] - EventWarpToHomeMatrix (#195, concurrent=0)
               duration: 4574.0
               IsWaitEnd: true
[      0.0] E Obj_GanonCastle_BrokenRubble_A_02[BrokenRubble_A_02_AlwaysVisible_01] - EventWarpToHomeMatrix (#196, concurrent=0)
               duration: 4574.0
               IsWaitEnd: true
[      0.0] E Obj_GanonCastle_BrokenRubble_A_02[BrokenRubble_A_02_AlwaysVisible_02] - EventWarpToHomeMatrix (#197, concurrent=0)
               duration: 4574.0
               IsWaitEnd: true
[      0.0] E Obj_GanonCastle_BrokenRubble_A_04[BrokenRubble_A_04_AlwaysVisible_01] - EventWarpToHomeMatrix (#198, concurrent=0)
               duration: 4574.0
               IsWaitEnd: true
[     15.0] L PostProcessingActor[0] - EventOverwriteSceneShadingParams (#64, concurrent=0)
[     20.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    100.0] L Player_Event - EventTriggerPlayerTemporaryBootsChange (#83, concurrent=1)
[    240.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#2, concurrent=0)
[    240.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#35, concurrent=0)
[    240.0] L Player_Event - EventPlayASForTimeline (#66, concurrent=0)
[    240.0] L Dm_Npc_Navi - EventPlayASForTimeline (#90, concurrent=0)
[    240.0] L Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#122, concurrent=0)
[    240.0] L Land_GanonCastle_FinalBattleField_FireRubble_B_01[0] - EventPlayASForTimeline (#173, concurrent=0)
[    240.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#3, concurrent=0)
               duration: 112.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C02-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[    240.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#36, concurrent=0)
               duration: 112.0
               EndBluarLevel: 1.5
               EndDistance: 1.9600000381469727
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.9600000381469727
               StartFNumber: 60.0
[    240.0] E Player_Event - EventPlayASForTimeline (#67, concurrent=0)
               duration: 112.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    240.0] E Dm_Npc_Navi - EventPlayASForTimeline (#91, concurrent=0)
               duration: 112.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    240.0] E Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#123, concurrent=0)
               duration: 112.0
               ASName: C02-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    284.0] E VoicePlayActor[1] - EventStartVoice (#136, concurrent=0)
               duration: 66.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_000_aaab
               OffsetFrame: 30
               Speaker: Player_Event
[    350.0] L VoicePlayActor[1] - EventStartVoice (#136, concurrent=0)
[    352.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#3, concurrent=0)
[    352.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#36, concurrent=0)
[    352.0] L Player_Event - EventPlayASForTimeline (#67, concurrent=0)
[    352.0] L Dm_Npc_Navi - EventPlayASForTimeline (#91, concurrent=0)
[    352.0] L Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#123, concurrent=0)
[    352.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#4, concurrent=0)
               duration: 118.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[    352.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#24, concurrent=1)
               duration: 118.0
               Near: 0.10000000149011612
[    352.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#37, concurrent=0)
               duration: 118.0
               EndBluarLevel: 3.0
               EndDistance: 4.5
               EndFNumber: 55.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 4.5
               StartFNumber: 55.0
[    352.0] E Player_Event - EventPlayASForTimeline (#68, concurrent=0)
               duration: 118.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    352.0] E Dm_Npc_Navi - EventPlayASForTimeline (#92, concurrent=0)
               duration: 118.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    352.0] E Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#124, concurrent=0)
               duration: 118.0
               ASName: C03-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    352.0] E GameSystemActor[00] - EventControllerRumbleTimeline (#160, concurrent=0)
               duration: 42.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_GataGata
[    352.0] E Land_GanonCastle_FinalBattleField_FireRubble_B_01[0] - EventPlayASForTimeline (#174, concurrent=0)
               duration: 118.0
               ASName: C03-Dm_Land_FireRubble
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    382.0] E VoicePlayActor[1] - EventStartVoice (#137, concurrent=0)
               duration: 60.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_000_ab
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[    394.0] L GameSystemActor[00] - EventControllerRumbleTimeline (#160, concurrent=0)
[    394.0] E GameSystemActor[00] - EventControllerRumbleTimeline (#161, concurrent=0)
               duration: 86.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Dooon
[    442.0] L VoicePlayActor[1] - EventStartVoice (#137, concurrent=0)
[    470.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#4, concurrent=0)
[    470.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#24, concurrent=1)
[    470.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#37, concurrent=0)
[    470.0] L Player_Event - EventPlayASForTimeline (#68, concurrent=0)
[    470.0] L Dm_Npc_Navi - EventPlayASForTimeline (#92, concurrent=0)
[    470.0] L Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#124, concurrent=0)
[    470.0] L Land_GanonCastle_FinalBattleField_FireRubble_B_01[0] - EventPlayASForTimeline (#174, concurrent=0)
[    470.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#5, concurrent=0)
               duration: 186.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C04-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[    470.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#38, concurrent=0)
               duration: 186.0
               EndBluarLevel: 0.0
               EndDistance: 1.7999999523162842
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.7999999523162842
               StartFNumber: 80.0
[    470.0] E PostProcessingActor[0] - EventOverwriteSceneShadingParams (#65, concurrent=0)
               duration: 15.0
               BakeLightLuminanceRatio: 0.0
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: true
               IsOverwriteShadowRatio: true
               ShadowRatio: 0.3324280083179474
[    470.0] E Player_Event - EventPlayASForTimeline (#69, concurrent=0)
               duration: 186.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    470.0] E Dm_Npc_Navi - EventPlayASForTimeline (#93, concurrent=0)
               duration: 186.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    470.0] E Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#125, concurrent=0)
               duration: 186.0
               ASName: C04-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    470.0] E Land_GanonCastle_FinalBattleField_FireRubble_B_01[0] - EventPlayASForTimeline (#175, concurrent=0)
               duration: 186.0
               ASName: C04-Dm_Land_FireRubble
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    480.0] L GameSystemActor[00] - EventControllerRumbleTimeline (#161, concurrent=0)
[    485.0] L PostProcessingActor[0] - EventOverwriteSceneShadingParams (#65, concurrent=0)
[    640.0] E VoicePlayActor[1] - EventStartVoice (#138, concurrent=0)
               duration: 66.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_003_b
               OffsetFrame: 30
               Speaker: Player_Event
[    656.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#5, concurrent=0)
[    656.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#38, concurrent=0)
[    656.0] L Player_Event - EventPlayASForTimeline (#69, concurrent=0)
[    656.0] L Dm_Npc_Navi - EventPlayASForTimeline (#93, concurrent=0)
[    656.0] L Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#125, concurrent=0)
[    656.0] L Land_GanonCastle_FinalBattleField_FireRubble_B_01[0] - EventPlayASForTimeline (#175, concurrent=0)
[    656.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#6, concurrent=0)
               duration: 52.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C05-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[    656.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#39, concurrent=0)
               duration: 52.0
               EndBluarLevel: 2.5
               EndDistance: 8.0
               EndFNumber: 125.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 3.0
               StartFNumber: 125.0
[    656.0] E Player_Event - EventPlayASForTimeline (#70, concurrent=0)
               duration: 52.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    656.0] E Dm_Npc_Navi - EventPlayASForTimeline (#94, concurrent=0)
               duration: 52.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    656.0] E Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#126, concurrent=0)
               duration: 52.0
               ASName: C05-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    656.0] E Land_GanonCastle_FinalBattleField_FireRubble_B_01[0] - EventPlayASForTimeline (#176, concurrent=0)
               duration: 3918.0
               ASName: C05-Dm_Land_FireRubble
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    706.0] L VoicePlayActor[1] - EventStartVoice (#138, concurrent=0)
[    708.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#6, concurrent=0)
[    708.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#39, concurrent=0)
[    708.0] L Player_Event - EventPlayASForTimeline (#70, concurrent=0)
[    708.0] L Dm_Npc_Navi - EventPlayASForTimeline (#94, concurrent=0)
[    708.0] L Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#126, concurrent=0)
[    708.0] L Obj_GanonCastle_Rubble_A_01 - EventPlayASForTimeline (#169, concurrent=0)
[    708.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#7, concurrent=0)
               duration: 244.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C06-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[    708.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#25, concurrent=1)
               duration: 244.0
               Near: 0.10000000149011612
[    708.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#40, concurrent=0)
               duration: 244.0
               EndBluarLevel: 0.0
               EndDistance: 1.4500000476837158
               EndFNumber: 75.5999984741211
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.4500000476837158
               StartFNumber: 75.5999984741211
[    708.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#119, concurrent=0)
               duration: 244.0
               ASName: C06
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    708.0] E Obj_GanonCastle_Rubble_A_01 - EventPlayASForTimeline (#170, concurrent=0)
               duration: 244.0
               ASName: C06-Obj_GanonCastle_Rubble_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    855.0] E VoicePlayActor[1] - EventStartVoice (#139, concurrent=0)
               duration: 160.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_004_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[    885.0] E GameSystemActor[00] - EventControllerRumbleTimeline (#162, concurrent=0)
               duration: 83.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dohoon
[    952.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#7, concurrent=0)
[    952.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#25, concurrent=1)
[    952.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#40, concurrent=0)
[    952.0] L Weapon_Sword_Master[0] - EventModelBind (#85, concurrent=0)
[    952.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#119, concurrent=0)
[    952.0] L Obj_GanonCastle_Rubble_A_01 - EventPlayASForTimeline (#170, concurrent=0)
[    952.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#8, concurrent=0)
               duration: 126.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C07-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[    952.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#26, concurrent=1)
               duration: 126.0
               Near: 0.10000000149011612
[    952.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#41, concurrent=0)
               duration: 126.0
               EndBluarLevel: 3.0
               EndDistance: 3.5
               EndFNumber: 90.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 3.5
               StartFNumber: 100.0
[    952.0] E Player_Event - EventPlayASForTimeline (#71, concurrent=0)
               duration: 126.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    952.0] E Weapon_Sword_Master[0] - EventModelBind (#86, concurrent=0)
               duration: 2704.0
               ActorName: Player_Event
               BoneName: Weapon_L
               InstanceName: ''
               IsWaitEnd: true
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[    952.0] E Dm_Npc_Navi - EventPlayASForTimeline (#95, concurrent=0)
               duration: 126.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    952.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#120, concurrent=0)
               duration: 126.0
               ASName: C07
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    952.0] E Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#127, concurrent=0)
               duration: 126.0
               ASName: C07-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    952.0] E Obj_GanonCastle_Rubble_A_01 - EventPlayASForTimeline (#171, concurrent=0)
               duration: 126.0
               ASName: C07-Obj_GanonCastle_Rubble_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    968.0] L GameSystemActor[00] - EventControllerRumbleTimeline (#162, concurrent=0)
[    985.0] E VoicePlayActor - EventStartVoice (#129, concurrent=0)
               duration: 300.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_005_b
               OffsetFrame: 30
               Speaker: ''
[   1015.0] L VoicePlayActor[1] - EventStartVoice (#139, concurrent=0)
[   1078.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#8, concurrent=0)
[   1078.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#26, concurrent=1)
[   1078.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#41, concurrent=0)
[   1078.0] L Player_Event - EventPlayASForTimeline (#71, concurrent=0)
[   1078.0] L Dm_Npc_Navi - EventPlayASForTimeline (#95, concurrent=0)
[   1078.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#120, concurrent=0)
[   1078.0] L Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#127, concurrent=0)
[   1078.0] L Obj_GanonCastle_Rubble_A_01 - EventPlayASForTimeline (#171, concurrent=0)
[   1078.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#9, concurrent=0)
               duration: 630.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C08-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1078.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#27, concurrent=1)
               duration: 630.0
               Near: 0.10000000149011612
[   1078.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#42, concurrent=0)
               duration: 630.0
               EndBluarLevel: 2.5
               EndDistance: 1.0
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 1.0
               StartFNumber: 100.0
[   1078.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#121, concurrent=0)
               duration: 630.0
               ASName: C08
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1078.0] E Dm_Locator[Effect_Triangle] - EventPlayASForTimeline (#177, concurrent=0)
               duration: 630.0
               ASName: C08-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1078.0] E Dm_Locator[Effect_Triangle] - EventTriggerEmitXLink (#178, concurrent=1)
               duration: 630.0
               ELinkKey: Dm_FinalBattle_BossIn_Triforce
               SLinkKey: ''
[   1244.0] E VoicePlayActor[1] - EventStartVoice (#140, concurrent=0)
               duration: 121.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_006_c
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   1285.0] L VoicePlayActor - EventStartVoice (#129, concurrent=0)
[   1365.0] L VoicePlayActor[1] - EventStartVoice (#140, concurrent=0)
[   1451.0] E VoicePlayActor[1] - EventStartVoice (#141, concurrent=0)
               duration: 345.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_007_c
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   1696.0] E VoicePlayActor - EventStartVoice (#130, concurrent=0)
               duration: 90.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_008_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1708.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#9, concurrent=0)
[   1708.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#27, concurrent=1)
[   1708.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#42, concurrent=0)
[   1708.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#121, concurrent=0)
[   1708.0] L Dm_Locator[Effect_Triangle] - EventPlayASForTimeline (#177, concurrent=0)
[   1708.0] L Dm_Locator[Effect_Triangle] - EventTriggerEmitXLink (#178, concurrent=1)
[   1708.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#10, concurrent=0)
               duration: 90.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C09-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1708.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#43, concurrent=0)
               duration: 90.0
               EndBluarLevel: 3.0
               EndDistance: 1.7000000476837158
               EndFNumber: 150.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.7000000476837158
               StartFNumber: 150.0
[   1708.0] E Player_Event - EventPlayASForTimeline (#72, concurrent=0)
               duration: 90.0
               ASName: C09-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1708.0] E Dm_Npc_Navi - EventPlayASForTimeline (#96, concurrent=0)
               duration: 90.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1708.0] E Dm_Locator[Effect_Triangle] - EventTriggerXLinkFadeByKey (#179, concurrent=1)
               duration: 1.0
               ELinkKey: Dm_FinalBattle_BossIn_Triforce
               IsKill: false
               SLinkKey: ''
[   1709.0] L Dm_Locator[Effect_Triangle] - EventTriggerXLinkFadeByKey (#179, concurrent=1)
[   1786.0] L VoicePlayActor - EventStartVoice (#130, concurrent=0)
[   1796.0] L VoicePlayActor[1] - EventStartVoice (#141, concurrent=0)
[   1798.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#10, concurrent=0)
[   1798.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#43, concurrent=0)
[   1798.0] L Player_Event - EventPlayASForTimeline (#72, concurrent=0)
[   1798.0] L Dm_Npc_Navi - EventPlayASForTimeline (#96, concurrent=0)
[   1798.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#11, concurrent=0)
               duration: 192.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C10-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1798.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#44, concurrent=0)
               duration: 192.0
               EndBluarLevel: 2.0
               EndDistance: 1.399999976158142
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.399999976158142
               StartFNumber: 100.0
[   1798.0] E Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#108, concurrent=0)
               duration: 192.0
               ASName: C10
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1990.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#11, concurrent=0)
[   1990.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#44, concurrent=0)
[   1990.0] L Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#108, concurrent=0)
[   1990.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#12, concurrent=0)
               duration: 374.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C11-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1990.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#28, concurrent=1)
               duration: 374.0
               Near: 0.10000000149011612
[   1990.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#45, concurrent=0)
               duration: 374.0
               EndBluarLevel: 2.0
               EndDistance: 1.399999976158142
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.399999976158142
               StartFNumber: 100.0
[   1990.0] E Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#109, concurrent=0)
               duration: 374.0
               ASName: C11
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2364.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#12, concurrent=0)
[   2364.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#28, concurrent=1)
[   2364.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#45, concurrent=0)
[   2364.0] L Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#109, concurrent=0)
[   2364.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
               duration: 246.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C13-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2364.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#29, concurrent=1)
               duration: 246.0
               Near: 0.10000000149011612
[   2364.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#46, concurrent=0)
               duration: 45.0
               EndBluarLevel: 2.0
               EndDistance: 1.7000000476837158
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.7000000476837158
               StartFNumber: 100.0
[   2364.0] E Player_Event - EventPlayASForTimeline (#73, concurrent=0)
               duration: 246.0
               ASName: C13-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2364.0] E Dm_Npc_Navi - EventPlayASForTimeline (#97, concurrent=0)
               duration: 246.0
               ASName: C13-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2364.0] E Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#110, concurrent=0)
               duration: 246.0
               ASName: C13
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2364.0] E Obj_GanonCastle_Rubble_A_01 - EventPlayASForTimeline (#172, concurrent=0)
               duration: 246.0
               ASName: C13-Obj_GanonCastle_Rubble_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2409.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#46, concurrent=0)
[   2409.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#47, concurrent=0)
               duration: 9.0
               EndBluarLevel: 2.0
               EndDistance: 1.350000023841858
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.7000000476837158
               StartFNumber: 100.0
[   2410.0] E GameSystemActor[00] - EventControllerRumbleTimeline (#163, concurrent=0)
               duration: 90.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Dohoon
[   2418.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#47, concurrent=0)
[   2418.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#48, concurrent=0)
               duration: 192.0
               EndBluarLevel: 2.0
               EndDistance: 1.350000023841858
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.350000023841858
               StartFNumber: 100.0
[   2500.0] L GameSystemActor[00] - EventControllerRumbleTimeline (#163, concurrent=0)
[   2610.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
[   2610.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#29, concurrent=1)
[   2610.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#48, concurrent=0)
[   2610.0] L Player_Event - EventPlayASForTimeline (#73, concurrent=0)
[   2610.0] L Dm_Npc_Navi - EventPlayASForTimeline (#97, concurrent=0)
[   2610.0] L Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#110, concurrent=0)
[   2610.0] L Obj_GanonCastle_Rubble_A_01 - EventPlayASForTimeline (#172, concurrent=0)
[   2610.0] L EftLoc_FinalBattleField_Env_1st_00 - EventGoOffstageForUser (#180, concurrent=0)
[   2610.0] L Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_01] - EventGoOffstageForUser (#187, concurrent=0)
[   2610.0] L Obj_GanonCastle_BrokenRubble_A_02[BrokenRubble_02] - EventGoOffstageForUser (#189, concurrent=0)
[   2610.0] L Obj_GanonCastle_BrokenRubble_A_04[BrokenRubble_04] - EventGoOffstageForUser (#191, concurrent=0)
[   2610.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
               duration: 246.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C14-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2610.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#30, concurrent=1)
               duration: 246.0
               Near: 0.10000000149011612
[   2610.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#49, concurrent=0)
               duration: 246.0
               EndBluarLevel: 3.0
               EndDistance: 1.7000000476837158
               EndFNumber: 150.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.7000000476837158
               StartFNumber: 150.0
[   2610.0] E Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#111, concurrent=0)
               duration: 246.0
               ASName: C14
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2610.0] E EftLoc_FinalBattleField_Env_1st_00 - EventWarpToHomeMatrix (#181, concurrent=0)
               duration: 51.0
               IsWaitEnd: true
[   2610.0] E Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_01] - EventWarpToHomeMatrix (#188, concurrent=0)
               duration: 1964.0
               IsWaitEnd: true
[   2610.0] E Obj_GanonCastle_BrokenRubble_A_02[BrokenRubble_02] - EventWarpToHomeMatrix (#190, concurrent=0)
               duration: 1964.0
               IsWaitEnd: true
[   2610.0] E Obj_GanonCastle_BrokenRubble_A_04[BrokenRubble_04] - EventWarpToHomeMatrix (#192, concurrent=0)
               duration: 1964.0
               IsWaitEnd: true
[   2661.0] L EftLoc_FinalBattleField_Env_1st_00 - EventWarpToHomeMatrix (#181, concurrent=0)
[   2661.0] E EftLoc_FinalBattleField_Env_1st_00 - EventTriggerEmitXLink (#182, concurrent=0)
               duration: 1913.0
               ELinkKey: Always
               SLinkKey: ''
[   2666.0] E SoundSystemActor[2] - EventTriggerSoundStartBossBgm (#151, concurrent=0)
               duration: 100.0
               BgmName: BGM_DungeonBoss_Ganon
[   2757.0] E VoicePlayActor[1] - EventStartVoice (#142, concurrent=0)
               duration: 246.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_009_aaaab
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganon
[   2766.0] L SoundSystemActor[2] - EventTriggerSoundStartBossBgm (#151, concurrent=0)
[   2856.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
[   2856.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#30, concurrent=1)
[   2856.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#49, concurrent=0)
[   2856.0] L Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#111, concurrent=0)
[   2856.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
               duration: 492.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C15-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2856.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#31, concurrent=1)
               duration: 492.0
               Near: 0.10000000149011612
[   2856.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#50, concurrent=0)
               duration: 492.0
               EndBluarLevel: 2.0
               EndDistance: 4.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.5
               StartFNumber: 20.0
[   2856.0] E Player_Event - EventPlayASForTimeline (#74, concurrent=0)
               duration: 492.0
               ASName: C15-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2856.0] E Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#112, concurrent=0)
               duration: 492.0
               ASName: C15
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2992.0] E WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#153, concurrent=0)
               duration: 60.0
               PatternKey: Dm_FinalBattle_Top_B
[   3003.0] L VoicePlayActor[1] - EventStartVoice (#142, concurrent=0)
[   3003.0] E VoicePlayActor[1] - EventStartVoice (#143, concurrent=0)
               duration: 331.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_009_aaab
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganon
[   3004.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#1, concurrent=0)
               duration: 384.0
               DemoNicknamePos: 0
               DemoNicknameType: 1
               InAnimFrame: -1
               IsWaitEnd: true
               NameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Ganon_Name
               NicknameMessageLabel: ''
               OutAnimFrame: -1
[   3052.0] L WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#153, concurrent=0)
[   3115.0] E WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#154, concurrent=0)
               duration: 60.0
               PatternKey: Dm_FinalBattle_Top_C
[   3175.0] L WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#154, concurrent=0)
[   3224.0] E WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#155, concurrent=0)
               duration: 60.0
               PatternKey: Dm_FinalBattle_Top_A
[   3284.0] L WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#155, concurrent=0)
[   3328.0] E WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#156, concurrent=0)
               duration: 60.0
               PatternKey: Dm_FinalBattle_Top_C
[   3334.0] L VoicePlayActor[1] - EventStartVoice (#143, concurrent=0)
[   3334.0] E VoicePlayActor[1] - EventStartVoice (#144, concurrent=0)
               duration: 70.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_009_aaac
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganon
[   3343.0] E VoicePlayActor - EventStartVoice (#131, concurrent=0)
               duration: 63.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_009_aab
               OffsetFrame: 30
               Speaker: Player_Event
[   3348.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
[   3348.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#31, concurrent=1)
[   3348.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#50, concurrent=0)
[   3348.0] L Player_Event - EventPlayASForTimeline (#74, concurrent=0)
[   3348.0] L Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#112, concurrent=0)
[   3348.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
               duration: 114.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C16-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3348.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#32, concurrent=1)
               duration: 114.0
               Near: 0.10000000149011612
[   3348.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#51, concurrent=0)
               duration: 114.0
               EndBluarLevel: 0.0
               EndDistance: 1.7000000476837158
               EndFNumber: 150.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.7000000476837158
               StartFNumber: 150.0
[   3348.0] E Player_Event - EventPlayASForTimeline (#75, concurrent=0)
               duration: 114.0
               ASName: C16-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3348.0] E Dm_Npc_Navi - EventPlayASForTimeline (#98, concurrent=0)
               duration: 114.0
               ASName: C16-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3348.0] E Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#113, concurrent=0)
               duration: 114.0
               ASName: C16
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3375.0] E GameSystemActor[00] - EventControllerRumbleTimeline (#164, concurrent=0)
               duration: 35.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Bofuhn
[   3388.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#1, concurrent=0)
[   3388.0] L WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#156, concurrent=0)
[   3404.0] L VoicePlayActor[1] - EventStartVoice (#144, concurrent=0)
[   3404.0] E VoicePlayActor[1] - EventStartVoice (#145, concurrent=0)
               duration: 72.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_009_aac
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganon
[   3406.0] L VoicePlayActor - EventStartVoice (#131, concurrent=0)
[   3410.0] L GameSystemActor[00] - EventControllerRumbleTimeline (#164, concurrent=0)
[   3413.0] E VoicePlayActor - EventStartVoice (#132, concurrent=0)
               duration: 63.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_009_ab
               OffsetFrame: 30
               Speaker: Player_Event
[   3439.0] E GameSystemActor[00] - EventControllerRumbleTimeline (#165, concurrent=0)
               duration: 35.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Bofuhn
[   3462.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
[   3462.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#32, concurrent=1)
[   3462.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#51, concurrent=0)
[   3462.0] L Player_Event - EventPlayASForTimeline (#75, concurrent=0)
[   3462.0] L Dm_Npc_Navi - EventPlayASForTimeline (#98, concurrent=0)
[   3462.0] L Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#113, concurrent=0)
[   3462.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
               duration: 58.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C17-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3462.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#52, concurrent=0)
               duration: 58.0
               EndBluarLevel: 0.0
               EndDistance: 1.4500000476837158
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.4500000476837158
               StartFNumber: 80.0
[   3462.0] E Player_Event - EventPlayASForTimeline (#76, concurrent=0)
               duration: 58.0
               ASName: C17-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3462.0] E Dm_Npc_Navi - EventPlayASForTimeline (#99, concurrent=0)
               duration: 58.0
               ASName: C17-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3462.0] E Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#114, concurrent=0)
               duration: 58.0
               ASName: C17
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3474.0] L GameSystemActor[00] - EventControllerRumbleTimeline (#165, concurrent=0)
[   3474.0] E WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#157, concurrent=0)
               duration: 60.0
               PatternKey: Dm_FinalBattle_Top_A
[   3476.0] L VoicePlayActor - EventStartVoice (#132, concurrent=0)
[   3476.0] L VoicePlayActor[1] - EventStartVoice (#145, concurrent=0)
[   3483.0] E VoicePlayActor[1] - EventStartVoice (#146, concurrent=0)
               duration: 104.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_009_ac
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganon
[   3501.0] E VoicePlayActor - EventStartVoice (#133, concurrent=0)
               duration: 63.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_009_b
               OffsetFrame: 30
               Speaker: Player_Event
[   3520.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
[   3520.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#52, concurrent=0)
[   3520.0] L Player_Event - EventPlayASForTimeline (#76, concurrent=0)
[   3520.0] L Dm_Npc_Navi - EventPlayASForTimeline (#99, concurrent=0)
[   3520.0] L Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#114, concurrent=0)
[   3520.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
               duration: 136.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C18-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3520.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#33, concurrent=1)
               duration: 136.0
               Near: 0.10000000149011612
[   3520.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#53, concurrent=0)
               duration: 136.0
               EndBluarLevel: 3.0
               EndDistance: 2.0
               EndFNumber: 200.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 2.0
               StartFNumber: 200.0
[   3520.0] E Player_Event - EventPlayASForTimeline (#77, concurrent=0)
               duration: 136.0
               ASName: C18-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3520.0] E Dm_Npc_Navi - EventPlayASForTimeline (#100, concurrent=0)
               duration: 136.0
               ASName: C18-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3520.0] E Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#115, concurrent=0)
               duration: 136.0
               ASName: C18
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3532.0] E GameSystemActor[00] - EventControllerRumbleTimeline (#166, concurrent=0)
               duration: 10.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Large_Doka
[   3534.0] L WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#157, concurrent=0)
[   3542.0] L GameSystemActor[00] - EventControllerRumbleTimeline (#166, concurrent=0)
[   3542.0] E GameSystemActor[00] - EventControllerRumbleTimeline (#167, concurrent=0)
               duration: 60.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[   3564.0] L VoicePlayActor - EventStartVoice (#133, concurrent=0)
[   3577.0] E VoicePlayActor - EventStartVoice (#134, concurrent=0)
               duration: 58.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_010_b
               OffsetFrame: 30
               Speaker: Player_Event
[   3587.0] L VoicePlayActor[1] - EventStartVoice (#146, concurrent=0)
[   3602.0] L GameSystemActor[00] - EventControllerRumbleTimeline (#167, concurrent=0)
[   3602.0] E GameSystemActor[00] - EventControllerRumbleTimeline (#168, concurrent=0)
               duration: 54.0
               IsWaitEnd: true
               NoLoop: true
               RumbleCall: Demo_Middle_Doon
[   3635.0] L VoicePlayActor - EventStartVoice (#134, concurrent=0)
[   3656.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#18, concurrent=0)
[   3656.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#33, concurrent=1)
[   3656.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#53, concurrent=0)
[   3656.0] L Player_Event - EventPlayASForTimeline (#77, concurrent=0)
[   3656.0] L Weapon_Sword_Master[0] - EventModelBind (#86, concurrent=0)
[   3656.0] L Dm_Npc_Navi - EventPlayASForTimeline (#100, concurrent=0)
[   3656.0] L Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#115, concurrent=0)
[   3656.0] L GameSystemActor[00] - EventControllerRumbleTimeline (#168, concurrent=0)
[   3656.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#19, concurrent=0)
               duration: 138.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C19-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3656.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#34, concurrent=1)
               duration: 138.0
               Near: 0.10000000149011612
[   3656.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#54, concurrent=0)
               duration: 20.0
               EndBluarLevel: 3.0
               EndDistance: 6.5
               EndFNumber: 42.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 6.5
               StartFNumber: 42.0
[   3656.0] E Player_Event - EventPlayASForTimeline (#78, concurrent=0)
               duration: 138.0
               ASName: C19-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3656.0] E Weapon_Sword_Master[0] - EventModelBind (#87, concurrent=0)
               duration: 618.0
               ActorName: Dm_Locator
               BoneName: Dm_Locator
               InstanceName: MasterSword
               IsWaitEnd: true
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[   3656.0] E Dm_Locator[MasterSword] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 138.0
               ASName: C19-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3656.0] E Dm_Npc_Navi - EventPlayASForTimeline (#101, concurrent=0)
               duration: 138.0
               ASName: C19-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3656.0] E Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#116, concurrent=0)
               duration: 138.0
               ASName: C19
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3656.0] E Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#128, concurrent=0)
               duration: 138.0
               ASName: C19-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3666.0] E VoicePlayActor[1] - EventStartVoice (#147, concurrent=0)
               duration: 56.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   3676.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#54, concurrent=0)
[   3676.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#55, concurrent=0)
               duration: 7.0
               EndBluarLevel: 2.5
               EndDistance: 2.5
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 6.5
               StartFNumber: 42.0
[   3683.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#55, concurrent=0)
[   3683.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#56, concurrent=0)
               duration: 51.0
               EndBluarLevel: 2.0
               EndDistance: 2.5
               EndFNumber: 60.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 2.5
               StartFNumber: 60.0
[   3722.0] L VoicePlayActor[1] - EventStartVoice (#147, concurrent=0)
[   3734.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#56, concurrent=0)
[   3734.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#57, concurrent=0)
               duration: 60.0
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
               StartDistance: 2.5
               StartFNumber: 60.0
[   3783.0] E VoicePlayActor - EventStartVoice (#135, concurrent=0)
               duration: 58.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_012_b
               OffsetFrame: 30
               Speaker: Player_Event
[   3794.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#19, concurrent=0)
[   3794.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#34, concurrent=1)
[   3794.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#57, concurrent=0)
[   3794.0] L Player_Event - EventPlayASForTimeline (#78, concurrent=0)
[   3794.0] L Dm_Locator[MasterSword] - EventPlayASForTimeline (#89, concurrent=0)
[   3794.0] L Dm_Npc_Navi - EventPlayASForTimeline (#101, concurrent=0)
[   3794.0] L Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#116, concurrent=0)
[   3794.0] L Npc_Hylia_Zelda_Adult - EventPlayASForTimeline (#128, concurrent=0)
[   3794.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
               duration: 168.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C20-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3794.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#58, concurrent=0)
               duration: 168.0
               EndBluarLevel: 3.0
               EndDistance: 2.0
               EndFNumber: 140.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 2.0
               StartFNumber: 140.0
[   3794.0] E Player_Event - EventPlayASForTimeline (#79, concurrent=0)
               duration: 168.0
               ASName: C20-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3794.0] E Dm_Npc_Navi - EventPlayASForTimeline (#102, concurrent=0)
               duration: 168.0
               ASName: C20-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3831.0] E VoicePlayActor[1] - EventStartVoice (#148, concurrent=0)
               duration: 252.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_013_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   3841.0] L VoicePlayActor - EventStartVoice (#135, concurrent=0)
[   3962.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
[   3962.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#58, concurrent=0)
[   3962.0] L Player_Event - EventPlayASForTimeline (#79, concurrent=0)
[   3962.0] L Dm_Npc_Navi - EventPlayASForTimeline (#102, concurrent=0)
[   3962.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
               duration: 102.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C20B-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3962.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#59, concurrent=0)
               duration: 102.0
               EndBluarLevel: 3.0
               EndDistance: 1.0
               EndFNumber: 160.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.0
               StartFNumber: 160.0
[   3962.0] E Player_Event - EventPlayASForTimeline (#80, concurrent=0)
               duration: 102.0
               ASName: C20B-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3962.0] E Dm_Npc_Navi - EventPlayASForTimeline (#103, concurrent=0)
               duration: 102.0
               ASName: C20B-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3993.0] E WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#158, concurrent=0)
               duration: 60.0
               PatternKey: Dm_FinalBattle_Top_B
[   4053.0] L WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#158, concurrent=0)
[   4064.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
[   4064.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#59, concurrent=0)
[   4064.0] L Player_Event - EventPlayASForTimeline (#80, concurrent=0)
[   4064.0] L Dm_Npc_Navi - EventPlayASForTimeline (#103, concurrent=0)
[   4064.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
               duration: 210.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C21-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4064.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#60, concurrent=0)
               duration: 210.0
               EndBluarLevel: 3.0
               EndDistance: 2.0
               EndFNumber: 170.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 2.0
               StartFNumber: 170.0
[   4064.0] E Player_Event - EventPlayASForTimeline (#81, concurrent=0)
               duration: 210.0
               ASName: C21-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4064.0] E Dm_Npc_Navi - EventPlayASForTimeline (#104, concurrent=0)
               duration: 210.0
               ASName: C21-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: 0.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4064.0] E Enemy_DungeonBoss_Ganon - EventDungeonBossSetConsiderBattlePresentation (#117, concurrent=0)
               duration: 210.0
[   4083.0] L VoicePlayActor[1] - EventStartVoice (#148, concurrent=0)
[   4084.0] E VoicePlayActor[1] - EventStartVoice (#149, concurrent=0)
               duration: 200.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_014_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   4274.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
[   4274.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#60, concurrent=0)
[   4274.0] L Player_Event - EventPlayASForTimeline (#81, concurrent=0)
[   4274.0] L Weapon_Sword_Master[0] - EventModelBind (#87, concurrent=0)
[   4274.0] L Dm_Npc_Navi - EventPlayASForTimeline (#104, concurrent=0)
[   4274.0] L Npc_Navi - EventGoOffstageForUser (#106, concurrent=0)
[   4274.0] L Enemy_DungeonBoss_Ganon - EventDungeonBossSetConsiderBattlePresentation (#117, concurrent=0)
[   4274.0] L Obj_GanonCastle_FireWallCircle_A_01 - EventTriggerXLinkFadeByKey (#183, concurrent=0)
[   4274.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
               duration: 300.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C22-0.camera
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4274.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#61, concurrent=0)
               duration: 240.0
               EndBluarLevel: 3.0
               EndDistance: 2.0
               EndFNumber: 170.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 2.0
               StartFNumber: 170.0
[   4274.0] E Player_Event - EventPlayASForTimeline (#82, concurrent=0)
               duration: 300.0
               ASName: C22-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4274.0] E Player_Event - EventTriggerPlayerRestoreBootsChange (#84, concurrent=1)
               duration: 16.0
[   4274.0] E Weapon_Sword_Master[0] - EventGoOffstageForUser (#88, concurrent=0)
               duration: 300.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   4274.0] E Dm_Npc_Navi - EventGoOffstageForUser (#105, concurrent=0)
               duration: 300.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   4274.0] E Npc_Navi - EventPlayASForTimeline (#107, concurrent=0)
               duration: 300.0
               ASName: C22-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4274.0] E Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#118, concurrent=0)
               duration: 300.0
               ASName: C22
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4274.0] E Obj_GanonCastle_FireWallCircle_A_01 - EventWarpToHomeMatrix (#184, concurrent=0)
               duration: 1.0
               IsWaitEnd: true
[   4275.0] L Obj_GanonCastle_FireWallCircle_A_01 - EventWarpToHomeMatrix (#184, concurrent=0)
[   4275.0] E Obj_GanonCastle_FireWallCircle_A_01 - EventTriggerEmitXLink (#185, concurrent=0)
               duration: 299.0
               ELinkKey: Chemical_Fire
               SLinkKey: ''
[   4284.0] L VoicePlayActor[1] - EventStartVoice (#149, concurrent=0)
[   4290.0] L Player_Event - EventTriggerPlayerRestoreBootsChange (#84, concurrent=1)
[   4310.0] E VoicePlayActor[1] - EventStartVoice (#150, concurrent=0)
               duration: 262.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_FinalBattle_BossIn:Dm_FinalBattle_BossIn_Text_015_b
               OffsetFrame: 30
               Speaker: Enemy_DungeonBoss_Ganon
[   4388.0] E WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#159, concurrent=0)
               duration: 60.0
               PatternKey: Dm_FinalBattle_Top
[   4448.0] L WorldMgrThunderMgr - EventTriggerWmThunderOneShot (#159, concurrent=0)
[   4514.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#61, concurrent=0)
[   4514.0] E PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#62, concurrent=0)
               duration: 59.0
               EndBluarLevel: 0.75
               EndDistance: 6.5
               EndFNumber: 8.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 2.0
               StartFNumber: 170.0
[   4572.0] L VoicePlayActor[1] - EventStartVoice (#150, concurrent=0)
[   4573.0] L PostProcessingActor[DepthCam] - EventSetDoFForTimeline (#62, concurrent=0)
[   4573.0] E PostProcessingActor[DepthCam] - EventResetToInGameParametersDoF (#63, concurrent=0)
               duration: 1.0
               IsWaitEnd: true
               TransitionFrame: 0
[   4574.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
[   4574.0] L PostProcessingActor[DepthCam] - EventResetToInGameParametersDoF (#63, concurrent=0)
[   4574.0] L Player_Event - EventPlayASForTimeline (#82, concurrent=0)
[   4574.0] L Weapon_Sword_Master[0] - EventGoOffstageForUser (#88, concurrent=0)
[   4574.0] L Dm_Npc_Navi - EventGoOffstageForUser (#105, concurrent=0)
[   4574.0] L Npc_Navi - EventPlayASForTimeline (#107, concurrent=0)
[   4574.0] L Enemy_DungeonBoss_Ganon - EventPlayASForTimeline (#118, concurrent=0)
[   4574.0] L Land_GanonCastle_FinalBattleField_FireRubble_B_01[0] - EventPlayASForTimeline (#176, concurrent=0)
[   4574.0] L EftLoc_FinalBattleField_Env_1st_00 - EventTriggerEmitXLink (#182, concurrent=0)
[   4574.0] L Obj_GanonCastle_FireWallCircle_A_01 - EventTriggerEmitXLink (#185, concurrent=0)
[   4574.0] L Obj_GanonCastle_FireWall_A_04 - EventGoOffstageForUser (#186, concurrent=0)
[   4574.0] L Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_01] - EventWarpToHomeMatrix (#188, concurrent=0)
[   4574.0] L Obj_GanonCastle_BrokenRubble_A_02[BrokenRubble_02] - EventWarpToHomeMatrix (#190, concurrent=0)
[   4574.0] L Obj_GanonCastle_BrokenRubble_A_04[BrokenRubble_04] - EventWarpToHomeMatrix (#192, concurrent=0)
[   4574.0] L Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_A_01_AlwaysVisible_01] - EventWarpToHomeMatrix (#193, concurrent=0)
[   4574.0] L Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_A_01_AlwaysVisible_02] - EventWarpToHomeMatrix (#194, concurrent=0)
[   4574.0] L Obj_GanonCastle_BrokenRubble_A_01[BrokenRubble_A_01_AlwaysVisible_03] - EventWarpToHomeMatrix (#195, concurrent=0)
[   4574.0] L Obj_GanonCastle_BrokenRubble_A_02[BrokenRubble_A_02_AlwaysVisible_01] - EventWarpToHomeMatrix (#196, concurrent=0)
[   4574.0] L Obj_GanonCastle_BrokenRubble_A_02[BrokenRubble_A_02_AlwaysVisible_02] - EventWarpToHomeMatrix (#197, concurrent=0)
[   4574.0] L Obj_GanonCastle_BrokenRubble_A_04[BrokenRubble_A_04_AlwaysVisible_01] - EventWarpToHomeMatrix (#198, concurrent=0)
[   7450.0] E SoundSystemActor[2] - EventTriggerSoundStartBossBgm (#152, concurrent=0)
               duration: 9.0
               BgmName: BGM_DungeonBoss_Ganondorf
[   7459.0] L SoundSystemActor[2] - EventTriggerSoundStartBossBgm (#152, concurrent=0)
