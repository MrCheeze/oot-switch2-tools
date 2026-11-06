-------- Event timeline: Dm_InsideGanonCastle_0110 --------
actors: 15
clips: 123
oneshots: 0
cuts: 16
duration: 4909.0
subtimelines: ['Dm_InsideGanonCastle_0110_Effect', 'Dm_InsideGanonCastle_0110_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 360.0
x4: 0
params: (none)

Cut: cut03
start time: 1069.0
x4: 0
params: (none)

Cut: cut04
start time: 1368.0
x4: 0
params: (none)

Cut: cut05
start time: 1597.0
x4: 0
params: (none)

Cut: cut06
start time: 1857.0
x4: 0
params: (none)

Cut: cut07
start time: 2642.0
x4: 0
params: (none)

Cut: cut08
start time: 2900.0
x4: 0
params: (none)

Cut: cut08a
start time: 3224.0
x4: 0
params: (none)

Cut: cut09
start time: 3438.0
x4: 0
params: (none)

Cut: cut10
start time: 3643.0
x4: 0
params: (none)

Cut: cut11
start time: 3841.0
x4: 0
params: (none)

Cut: cut12
start time: 3961.0
x4: 0
params: (none)

Cut: cut13
start time: 4136.0
x4: 0
params: (none)

Cut: cut14
start time: 4234.0
x4: 0
params: (none)

Cut: cut15
start time: 4479.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Land_CrumblingGanonCastle_A_09[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0110/Dm_InsideGanonCastle_0110_Dm_Land_CrumblingGanonCastle_A/workspace.pp__ModelProject.gyml

Actor: Dm_Land_CrumblingGanonCastle_A_06[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0110/Dm_InsideGanonCastle_0110_Dm_Land_CrumblingGanonCastle_A/workspace.pp__ModelProject.gyml

Actor: Dm_Land_CrumblingGanonCastle_A_05[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0110/Dm_InsideGanonCastle_0110_Dm_Land_CrumblingGanonCastle_A/workspace.pp__ModelProject.gyml

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Weapon_Sword_Master[0]
concurrent clips: 1
actions: ['EventModelBind']
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
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0110/Dm_InsideGanonCastle_0110/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Ganondorf[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 0.0
- 0.0
- 0.0
UseEventAS: Work/AS/Root/Event/Dm_InsideGanonCastle_0110_Npc_Gerudo_GEU_Ganondorf_Adult.root.as
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0110/Dm_InsideGanonCastle_0110_Npc_Gerudo_GEU_Ganondorf_Child/workspace.pp__ModelProject.gyml

Actor: GameSystemActor[culling]
concurrent clips: 1
actions: ['EventTriggerAddPreComputedCullingBasePos']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Npc_Hylia_Zelda_Adult[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_InsideGanonCastle_0110_Npc_Hylia_WU_Zelda_Adult.root.as
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0110/Dm_InsideGanonCastle_0110_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Navi[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser']
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
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0110/Dm_InsideGanonCastle_0110_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Zelda_Adult
concurrent clips: 1
actions: ['EventTriggerAIScheduleSelectSchedule', 'EventNpcHyliaZeldaAdultMoveForward']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -9.0
- 230.0
- -0.5
Rotation:
- 0.0
- -90.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Player_Event[0]
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
EventMemberCreateMethod: 0
ExceptionalBindType: 4
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideGanonCastle_0110/Dm_InsideGanonCastle_0110_Player_Adult/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 141.0
               EndBluarLevel: 2.0
               EndDistance: 1.5
               EndFNumber: 100.0
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
[      0.0] E Weapon_Sword_Master[0] - EventModelBind (#42, concurrent=0)
               duration: 4909.0
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
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#57, concurrent=0)
               duration: 120.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
               duration: 360.0
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
[      0.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#76, concurrent=0)
               duration: 360.0
               ASName: C01
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#99, concurrent=0)
               duration: 4479.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#121, concurrent=1)
               duration: 100.0
               BootsType: 0
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#121, concurrent=1)
[    120.0] L UISystemActor[0] - EventEventFadeInForTimeline (#57, concurrent=0)
[    141.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[    141.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 219.0
               EndBluarLevel: 2.0
               EndDistance: 1.5
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.5
               StartFNumber: 100.0
[    240.0] E GameSystemActor[culling] - EventTriggerAddPreComputedCullingBasePos (#87, concurrent=0)
               duration: 709.0
               EndPos:
               - 0.0
               - 231.59280395507812
               - -10.698699951171875
               StartPos:
               - 0.0
               - 232.05079650878906
               - -6.194159984588623
[    360.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[    360.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
[    360.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#76, concurrent=0)
[    360.0] E Dm_Land_CrumblingGanonCastle_A_09[0] - EventPlayASForTimeline (#0, concurrent=0)
               duration: 3481.0
               ASName: C02-Dm_Land_CrumblingGanonCastle_A_09-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    360.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 110.0
               EndBluarLevel: 0.0
               EndDistance: 5.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.5
               StartFNumber: 50.0
[    360.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
               duration: 709.0
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
[    360.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#77, concurrent=0)
               duration: 709.0
               ASName: C02
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    360.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#100, concurrent=0)
               duration: 709.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    360.0] E Player_Event[0] - EventPlayASForTimeline (#110, concurrent=0)
               duration: 709.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    470.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[    470.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 515.0
               EndBluarLevel: 0.0
               EndDistance: 5.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 5.0
               StartFNumber: 50.0
[    949.0] L GameSystemActor[culling] - EventTriggerAddPreComputedCullingBasePos (#87, concurrent=0)
[    949.0] E GameSystemActor[culling] - EventTriggerAddPreComputedCullingBasePos (#88, concurrent=0)
               duration: 359.0
               EndPos:
               - -25.116840362548828
               - 247.3144989013672
               - -12.88998031616211
               StartPos:
               - -24.145769119262695
               - 246.8905029296875
               - -12.293450355529785
[    985.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[    985.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 40.0
               EndBluarLevel: 0.0
               EndDistance: 8.0
               EndFNumber: 35.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 5.0
               StartFNumber: 50.0
[   1004.0] E VoicePlayActor[0] - EventStartVoice (#43, concurrent=0)
               duration: 183.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_000_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1025.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   1025.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 44.0
               EndBluarLevel: 0.0
               EndDistance: 8.0
               EndFNumber: 35.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 8.0
               StartFNumber: 35.0
[   1069.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   1069.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
[   1069.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#77, concurrent=0)
[   1069.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#100, concurrent=0)
[   1069.0] L Player_Event[0] - EventPlayASForTimeline (#110, concurrent=0)
[   1069.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 299.0
               EndBluarLevel: 0.0
               EndDistance: 2.5
               EndFNumber: 45.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.5
               StartFNumber: 45.0
[   1069.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
               duration: 299.0
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
[   1069.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#78, concurrent=0)
               duration: 299.0
               ASName: C03
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1069.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#101, concurrent=0)
               duration: 299.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1069.0] E Player_Event[0] - EventPlayASForTimeline (#111, concurrent=0)
               duration: 299.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1187.0] L VoicePlayActor[0] - EventStartVoice (#43, concurrent=0)
[   1308.0] L GameSystemActor[culling] - EventTriggerAddPreComputedCullingBasePos (#88, concurrent=0)
[   1368.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   1368.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
[   1368.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#78, concurrent=0)
[   1368.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#101, concurrent=0)
[   1368.0] L Player_Event[0] - EventPlayASForTimeline (#111, concurrent=0)
[   1368.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 229.0
               EndBluarLevel: 0.0
               EndDistance: 9.5
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 9.5
               StartFNumber: 10.0
[   1368.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
               duration: 229.0
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
[   1368.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#79, concurrent=0)
               duration: 229.0
               ASName: C04
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1368.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#102, concurrent=0)
               duration: 229.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1368.0] E Player_Event[0] - EventPlayASForTimeline (#112, concurrent=0)
               duration: 229.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1453.0] E VoicePlayActor[0] - EventStartVoice (#44, concurrent=0)
               duration: 86.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_001_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1539.0] L VoicePlayActor[0] - EventStartVoice (#44, concurrent=0)
[   1597.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   1597.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#61, concurrent=0)
[   1597.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#79, concurrent=0)
[   1597.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#102, concurrent=0)
[   1597.0] L Player_Event[0] - EventPlayASForTimeline (#112, concurrent=0)
[   1597.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 45.0
               EndBluarLevel: 0.0
               EndDistance: 2.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.5
               StartFNumber: 30.0
[   1597.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
               duration: 260.0
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
[   1597.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 260.0
               ASName: C05
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1597.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#103, concurrent=0)
               duration: 260.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1597.0] E Player_Event[0] - EventPlayASForTimeline (#113, concurrent=0)
               duration: 260.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1642.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   1642.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 80.0
               EndBluarLevel: 0.0
               EndDistance: 3.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.5
               StartFNumber: 30.0
[   1722.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   1722.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 135.0
               EndBluarLevel: 0.0
               EndDistance: 3.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.0
               StartFNumber: 30.0
[   1857.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   1857.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#62, concurrent=0)
[   1857.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#89, concurrent=0)
[   1857.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#103, concurrent=0)
[   1857.0] L Player_Event[0] - EventPlayASForTimeline (#113, concurrent=0)
[   1857.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 785.0
               EndBluarLevel: 0.0
               EndDistance: 4.5
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 4.5
               StartFNumber: 100.0
[   1857.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
               duration: 785.0
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
[   1857.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#80, concurrent=0)
               duration: 785.0
               ASName: C06
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1857.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#90, concurrent=0)
               duration: 785.0
               ASName: C06
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1857.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#104, concurrent=0)
               duration: 785.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1857.0] E Player_Event[0] - EventPlayASForTimeline (#114, concurrent=0)
               duration: 785.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1972.0] E VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
               duration: 115.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2087.0] L VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
[   2642.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   2642.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#63, concurrent=0)
[   2642.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#80, concurrent=0)
[   2642.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#90, concurrent=0)
[   2642.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#104, concurrent=0)
[   2642.0] L Player_Event[0] - EventPlayASForTimeline (#114, concurrent=0)
[   2642.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 258.0
               EndBluarLevel: 2.5
               EndDistance: 3.0
               EndFNumber: 35.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 3.0
               StartFNumber: 35.0
[   2642.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
               duration: 258.0
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
[   2642.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#74, concurrent=1)
               duration: 258.0
               Near: 0.10000000149011612
[   2642.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#91, concurrent=0)
               duration: 258.0
               ASName: C07
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2642.0] E Player_Event[0] - EventPlayASForTimeline (#115, concurrent=0)
               duration: 258.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2900.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
[   2900.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#64, concurrent=0)
[   2900.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#74, concurrent=1)
[   2900.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#91, concurrent=0)
[   2900.0] L Player_Event[0] - EventPlayASForTimeline (#115, concurrent=0)
[   2900.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 110.0
               EndBluarLevel: 0.0
               EndDistance: 2.200000047683716
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.200000047683716
               StartFNumber: 30.0
[   2900.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
               duration: 324.0
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
[   2900.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#81, concurrent=0)
               duration: 324.0
               ASName: C08
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2900.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#92, concurrent=0)
               duration: 324.0
               ASName: C08
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2975.0] E VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
               duration: 104.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   3010.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
[   3010.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 30.0
               EndBluarLevel: 0.0
               EndDistance: 3.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.200000047683716
               StartFNumber: 30.0
[   3040.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
[   3040.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
               duration: 184.0
               EndBluarLevel: 0.0
               EndDistance: 3.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.5
               StartFNumber: 30.0
[   3079.0] L VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
[   3080.0] E VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
               duration: 99.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   3179.0] L VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
[   3224.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
[   3224.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#65, concurrent=0)
[   3224.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#81, concurrent=0)
[   3224.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#92, concurrent=0)
[   3224.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 214.0
               EndBluarLevel: 0.0
               EndDistance: 3.5
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.5
               StartFNumber: 25.0
[   3224.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#66, concurrent=0)
               duration: 214.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C08a-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3224.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#93, concurrent=0)
               duration: 214.0
               ASName: C08a
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3224.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#105, concurrent=0)
               duration: 214.0
               ASName: C08a-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3224.0] E Player_Event[0] - EventPlayASForTimeline (#116, concurrent=0)
               duration: 214.0
               ASName: C08a-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3239.0] E VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
               duration: 349.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   3438.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
[   3438.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#66, concurrent=0)
[   3438.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#93, concurrent=0)
[   3438.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#105, concurrent=0)
[   3438.0] L Player_Event[0] - EventPlayASForTimeline (#116, concurrent=0)
[   3438.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 205.0
               EndBluarLevel: 1.5
               EndDistance: 2.0999999046325684
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 2.0999999046325684
               StartFNumber: 30.0
[   3438.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#67, concurrent=0)
               duration: 205.0
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
[   3438.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#82, concurrent=0)
               duration: 205.0
               ASName: C09
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3588.0] L VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
[   3643.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
[   3643.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#67, concurrent=0)
[   3643.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#82, concurrent=0)
[   3643.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 198.0
               EndBluarLevel: 0.0
               EndDistance: 3.5
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.5
               StartFNumber: 50.0
[   3643.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#68, concurrent=0)
               duration: 198.0
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
[   3643.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#83, concurrent=0)
               duration: 198.0
               ASName: C10
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3643.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#94, concurrent=0)
               duration: 198.0
               ASName: C10
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3643.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#106, concurrent=0)
               duration: 198.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3643.0] E Player_Event[0] - EventPlayASForTimeline (#117, concurrent=0)
               duration: 198.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3719.0] E VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
               duration: 60.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   3779.0] L VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
[   3841.0] L Dm_Land_CrumblingGanonCastle_A_09[0] - EventPlayASForTimeline (#0, concurrent=0)
[   3841.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
[   3841.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#68, concurrent=0)
[   3841.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#83, concurrent=0)
[   3841.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#94, concurrent=0)
[   3841.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#106, concurrent=0)
[   3841.0] L Player_Event[0] - EventPlayASForTimeline (#117, concurrent=0)
[   3841.0] E Dm_Land_CrumblingGanonCastle_A_09[0] - EventPlayASForTimeline (#1, concurrent=0)
               duration: 120.0
               ASName: C11-Dm_Land_CrumblingGanonCastle_A_09-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3841.0] E Dm_Land_CrumblingGanonCastle_A_06[0] - EventPlayASForTimeline (#3, concurrent=0)
               duration: 120.0
               ASName: C11-Dm_Land_CrumblingGanonCastle_A_06-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3841.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 120.0
               EndBluarLevel: 0.0
               EndDistance: 7.0
               EndFNumber: 17.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 7.0
               StartFNumber: 17.0
[   3841.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#69, concurrent=0)
               duration: 120.0
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
[   3951.0] E VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
               duration: 127.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_007_b
               OffsetFrame: 30
               Speaker: Player_Event
[   3961.0] L Dm_Land_CrumblingGanonCastle_A_09[0] - EventPlayASForTimeline (#1, concurrent=0)
[   3961.0] L Dm_Land_CrumblingGanonCastle_A_06[0] - EventPlayASForTimeline (#3, concurrent=0)
[   3961.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
[   3961.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#69, concurrent=0)
[   3961.0] E Dm_Land_CrumblingGanonCastle_A_09[0] - EventPlayASForTimeline (#2, concurrent=0)
               duration: 948.0
               ASName: C02-Dm_Land_CrumblingGanonCastle_A_09-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3961.0] E Dm_Land_CrumblingGanonCastle_A_06[0] - EventPlayASForTimeline (#4, concurrent=0)
               duration: 175.0
               ASName: C12-Dm_Land_CrumblingGanonCastle_A_06-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3961.0] E Dm_Land_CrumblingGanonCastle_A_05[0] - EventPlayASForTimeline (#8, concurrent=0)
               duration: 175.0
               ASName: C12-Dm_Land_CrumblingGanonCastle_A_05-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3961.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 50.0
               EndBluarLevel: 0.0
               EndDistance: 3.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.0
               StartFNumber: 50.0
[   3961.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#70, concurrent=0)
               duration: 175.0
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
[   3961.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#95, concurrent=0)
               duration: 175.0
               ASName: C12
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3961.0] E Player_Event[0] - EventPlayASForTimeline (#118, concurrent=0)
               duration: 175.0
               ASName: C12-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4011.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
[   4011.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 21.0
               EndBluarLevel: 0.0
               EndDistance: 10.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.0
               StartFNumber: 50.0
[   4032.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
[   4032.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 104.0
               EndBluarLevel: 0.0
               EndDistance: 10.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 10.0
               StartFNumber: 50.0
[   4078.0] L VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
[   4136.0] L Dm_Land_CrumblingGanonCastle_A_06[0] - EventPlayASForTimeline (#4, concurrent=0)
[   4136.0] L Dm_Land_CrumblingGanonCastle_A_05[0] - EventPlayASForTimeline (#8, concurrent=0)
[   4136.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
[   4136.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#70, concurrent=0)
[   4136.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#95, concurrent=0)
[   4136.0] L Player_Event[0] - EventPlayASForTimeline (#118, concurrent=0)
[   4136.0] E Dm_Land_CrumblingGanonCastle_A_06[0] - EventPlayASForTimeline (#5, concurrent=0)
               duration: 98.0
               ASName: C13-Dm_Land_CrumblingGanonCastle_A_06-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4136.0] E Dm_Land_CrumblingGanonCastle_A_05[0] - EventPlayASForTimeline (#9, concurrent=0)
               duration: 98.0
               ASName: C13-Dm_Land_CrumblingGanonCastle_A_05-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4136.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#35, concurrent=0)
               duration: 98.0
               EndBluarLevel: 1.5
               EndDistance: 5.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 5.5
               StartFNumber: 30.0
[   4136.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#71, concurrent=0)
               duration: 98.0
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
[   4136.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#84, concurrent=0)
               duration: 98.0
               ASName: C13
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4136.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#96, concurrent=0)
               duration: 98.0
               ASName: C13
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4234.0] L Dm_Land_CrumblingGanonCastle_A_06[0] - EventPlayASForTimeline (#5, concurrent=0)
[   4234.0] L Dm_Land_CrumblingGanonCastle_A_05[0] - EventPlayASForTimeline (#9, concurrent=0)
[   4234.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#35, concurrent=0)
[   4234.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#71, concurrent=0)
[   4234.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#84, concurrent=0)
[   4234.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#96, concurrent=0)
[   4234.0] E Dm_Land_CrumblingGanonCastle_A_06[0] - EventPlayASForTimeline (#6, concurrent=0)
               duration: 245.0
               ASName: C14-Dm_Land_CrumblingGanonCastle_A_06-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4234.0] E Dm_Land_CrumblingGanonCastle_A_05[0] - EventPlayASForTimeline (#10, concurrent=0)
               duration: 245.0
               ASName: C14-Dm_Land_CrumblingGanonCastle_A_05-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4234.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#36, concurrent=0)
               duration: 161.0
               EndBluarLevel: 0.0
               EndDistance: 1.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.5
               StartFNumber: 30.0
[   4234.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#72, concurrent=0)
               duration: 245.0
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
[   4234.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#85, concurrent=0)
               duration: 245.0
               ASName: C14
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4234.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#97, concurrent=0)
               duration: 245.0
               ASName: C14
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4234.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#107, concurrent=0)
               duration: 245.0
               ASName: C14-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4234.0] E Player_Event[0] - EventPlayASForTimeline (#119, concurrent=0)
               duration: 245.0
               ASName: C14-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4239.0] E VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
               duration: 78.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_009_c
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   4317.0] L VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
[   4342.0] E VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
               duration: 52.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   4394.0] L VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
[   4394.0] E VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
               duration: 59.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   4395.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#36, concurrent=0)
[   4395.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#37, concurrent=0)
               duration: 29.0
               EndBluarLevel: 0.0
               EndDistance: 2.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.5
               StartFNumber: 30.0
[   4424.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#37, concurrent=0)
[   4424.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#38, concurrent=0)
               duration: 55.0
               EndBluarLevel: 0.0
               EndDistance: 2.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.5
               StartFNumber: 30.0
[   4453.0] L VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
[   4466.0] E VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
               duration: 154.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   4479.0] L Dm_Land_CrumblingGanonCastle_A_06[0] - EventPlayASForTimeline (#6, concurrent=0)
[   4479.0] L Dm_Land_CrumblingGanonCastle_A_05[0] - EventPlayASForTimeline (#10, concurrent=0)
[   4479.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#38, concurrent=0)
[   4479.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#72, concurrent=0)
[   4479.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#85, concurrent=0)
[   4479.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#97, concurrent=0)
[   4479.0] L Npc_Navi[0] - EventGoOffstageForUser (#99, concurrent=0)
[   4479.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#107, concurrent=0)
[   4479.0] L Player_Event[0] - EventPlayASForTimeline (#119, concurrent=0)
[   4479.0] E Dm_Land_CrumblingGanonCastle_A_06[0] - EventPlayASForTimeline (#7, concurrent=0)
               duration: 430.0
               ASName: C16-Dm_Land_CrumblingGanonCastle_A_06-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4479.0] E Dm_Land_CrumblingGanonCastle_A_05[0] - EventPlayASForTimeline (#11, concurrent=0)
               duration: 430.0
               ASName: C16-Dm_Land_CrumblingGanonCastle_A_05-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4479.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#39, concurrent=0)
               duration: 306.0
               EndBluarLevel: 2.0
               EndDistance: 2.5
               EndFNumber: 35.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.5
               StartFNumber: 35.0
[   4479.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#73, concurrent=0)
               duration: 430.0
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
[   4479.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#75, concurrent=1)
               duration: 100.0
               Near: 0.10000000149011612
[   4479.0] E Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 430.0
               ASName: C16
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4479.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#98, concurrent=0)
               duration: 430.0
               ASName: C16
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4479.0] E Player_Event[0] - EventPlayASForTimeline (#120, concurrent=0)
               duration: 430.0
               ASName: C16-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4479.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#122, concurrent=1)
               duration: 430.0
[   4579.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#75, concurrent=1)
[   4620.0] L VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
[   4620.0] E VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
               duration: 145.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   4765.0] L VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
[   4765.0] E VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
               duration: 68.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideGanonCastle_0110:Dm_InsideGanonCastle_0110_Text_013_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   4785.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#39, concurrent=0)
[   4785.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#40, concurrent=0)
               duration: 25.0
               EndBluarLevel: 2.0
               EndDistance: 1.2000000476837158
               EndFNumber: 55.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.5
               StartFNumber: 35.0
[   4810.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#40, concurrent=0)
[   4810.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#41, concurrent=0)
               duration: 99.0
               EndBluarLevel: 2.0
               EndDistance: 1.2000000476837158
               EndFNumber: 55.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.2000000476837158
               StartFNumber: 55.0
[   4833.0] L VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
[   4849.0] E Npc_Hylia_Zelda_Adult - EventTriggerAIScheduleSelectSchedule (#108, concurrent=0)
               duration: 20.0
[   4869.0] L Npc_Hylia_Zelda_Adult - EventTriggerAIScheduleSelectSchedule (#108, concurrent=0)
[   4869.0] E Npc_Hylia_Zelda_Adult - EventNpcHyliaZeldaAdultMoveForward (#109, concurrent=0)
               duration: 40.0
               IsWaitEnd: true
               PlayTime: 60.0
[   4909.0] L Dm_Land_CrumblingGanonCastle_A_09[0] - EventPlayASForTimeline (#2, concurrent=0)
[   4909.0] L Dm_Land_CrumblingGanonCastle_A_06[0] - EventPlayASForTimeline (#7, concurrent=0)
[   4909.0] L Dm_Land_CrumblingGanonCastle_A_05[0] - EventPlayASForTimeline (#11, concurrent=0)
[   4909.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#41, concurrent=0)
[   4909.0] L Weapon_Sword_Master[0] - EventModelBind (#42, concurrent=0)
[   4909.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#73, concurrent=0)
[   4909.0] L Enemy_DungeonBoss_Ganondorf[0] - EventPlayASForTimeline (#86, concurrent=0)
[   4909.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#98, concurrent=0)
[   4909.0] L Npc_Hylia_Zelda_Adult - EventNpcHyliaZeldaAdultMoveForward (#109, concurrent=0)
[   4909.0] L Player_Event[0] - EventPlayASForTimeline (#120, concurrent=0)
[   4909.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#122, concurrent=1)
