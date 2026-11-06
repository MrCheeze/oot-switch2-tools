-------- Event timeline: Dm_DeathMtTrail_0030 --------
actors: 12
clips: 32
oneshots: 0
cuts: 1
duration: 1100.0
subtimelines: ['Dm_DeathMtTrail_0030_Effect']
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: TerrainSystemActor[0]
concurrent clips: 1
actions: ['EventTerrainCalcCenter']
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

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline', 'EventLoadingFadeOut']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventCamera[0]
concurrent clips: 1
actions: ['EventMoveCameraAnimationInstructions']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Npc_Kaepora[0]
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
UseEventAS: Work/AS/Root/Event/Dm_DeathMtTrail_0030_Npc_U_Kaepora.root.as
UseEventModelAnime: Work/Model/Event/Dm_DeathMtTrail_0030/Dm_DeathMtTrail_0030_Npc_U_Kaepora/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
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
UseEventAS: Work/AS/Root/Event/Dm_DeathMtTrail_0030_Player.root.as
UseEventModelAnime: Work/Model/Event/Dm_DeathMtTrail_0030/Dm_DeathMtTrail_0030_Player_Child/workspace.pp__ModelProject.gyml

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

Actor: Npc_Goron_001_Child[0]
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
EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DeathMtTrail_0030/Dm_DeathMtTrail_0030_Npc_Goron_GON_001_A/workspace.pp__ModelProject.gyml

Actor: Npc_Goron_007_Child[0]
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
EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DeathMtTrail_0030/Dm_DeathMtTrail_0030_Npc_Goron_GON_002_B/workspace.pp__ModelProject.gyml

Actor: Npc_Goron_010_Child[0]
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
EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DeathMtTrail_0030/Dm_DeathMtTrail_0030_Npc_Goron_GON_003_C/workspace.pp__ModelProject.gyml

Actor: Obj_BombFlower_Fruit_For_Break_Obj_DeathMtTrail_BrokenRock_A_01[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -34.63999938964844
- 123.83000183105469
- -12.529999732971191
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[0]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline', 'EventPreComputedCullingDisableUntilEventEndForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E TerrainSystemActor[0] - EventTerrainCalcCenter (#0, concurrent=0)
               duration: 70.0
               IsWaitEnd: true
               Position:
               - -72.0
               - 0.0
               - 82.0
               SceneName: DeathMountainTrail_01
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 1100.0
               EndBluarLevel: 1.100000023841858
               EndDistance: 28.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.100000023841858
               StartDistance: 28.0
               StartFNumber: 20.0
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#5, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#7, concurrent=0)
               duration: 1100.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01-1
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E Npc_Kaepora[0] - EventPlayASForTimeline (#8, concurrent=0)
               duration: 1100.0
               ASName: C01
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#9, concurrent=0)
               duration: 1100.0
               ASName: C01
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#10, concurrent=0)
               duration: 1100.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Npc_Goron_001_Child[0] - EventPlayASForTimeline (#11, concurrent=0)
               duration: 1100.0
               ASName: C01-Npc_Goron_GON_001-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Goron_007_Child[0] - EventPlayASForTimeline (#12, concurrent=0)
               duration: 1099.0
               ASName: C01-Npc_Goron_GON_001-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Goron_010_Child[0] - EventPlayASForTimeline (#13, concurrent=0)
               duration: 1100.0
               ASName: C01-Npc_Goron_GON_001-C-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Obj_BombFlower_Fruit_For_Break_Obj_DeathMtTrail_BrokenRock_A_01[0] - EventDoNothing (#14, concurrent=0)
               duration: 1100.0
               IsWaitEnd: true
[      0.0] E GameSystemActor[0] - EventPreComputedCullingDisableUntilEventEndForTimeline (#15, concurrent=0)
               duration: 10.0
               IsWaitEnd: false
[     10.0] L GameSystemActor[0] - EventPreComputedCullingDisableUntilEventEndForTimeline (#15, concurrent=0)
[     47.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#16, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[     59.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#16, concurrent=0)
[     70.0] L TerrainSystemActor[0] - EventTerrainCalcCenter (#0, concurrent=0)
[     70.0] E TerrainSystemActor[0] - EventTerrainCalcCenter (#1, concurrent=0)
               duration: 180.0
               IsWaitEnd: true
               Position:
               - -12.850000381469727
               - 159.25
               - -56.04999923706055
               SceneName: ''
[    100.0] L UISystemActor[0] - EventEventFadeInForTimeline (#5, concurrent=0)
[    101.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#17, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    113.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#17, concurrent=0)
[    160.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#18, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    172.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#18, concurrent=0)
[    230.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#19, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    242.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#19, concurrent=0)
[    242.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#20, concurrent=0)
               duration: 176.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[    250.0] L TerrainSystemActor[0] - EventTerrainCalcCenter (#1, concurrent=0)
[    250.0] E TerrainSystemActor[0] - EventTerrainCalcCenter (#2, concurrent=0)
               duration: 245.0
               IsWaitEnd: true
               Position:
               - -22.5
               - 123.4000015258789
               - -13.699999809265137
               SceneName: DeathMountainTrail_01
[    418.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#20, concurrent=0)
[    457.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#21, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    469.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#21, concurrent=0)
[    495.0] L TerrainSystemActor[0] - EventTerrainCalcCenter (#2, concurrent=0)
[    495.0] E TerrainSystemActor[0] - EventTerrainCalcCenter (#3, concurrent=0)
               duration: 605.0
               IsWaitEnd: true
               Position:
               - -75.0
               - 109.33000183105469
               - 84.18000030517578
               SceneName: DeathMountainTrail_01
[    501.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#22, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    513.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#22, concurrent=0)
[    550.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#23, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    562.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#23, concurrent=0)
[    603.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#24, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    615.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#24, concurrent=0)
[    655.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#25, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    667.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#25, concurrent=0)
[    667.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#26, concurrent=0)
               duration: 120.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[    787.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#26, concurrent=0)
[    817.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#27, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    829.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#27, concurrent=0)
[    855.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#28, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    867.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#28, concurrent=0)
[    902.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#29, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    914.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#29, concurrent=0)
[    956.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#30, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    968.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#30, concurrent=0)
[   1000.0] E UISystemActor[0] - EventLoadingFadeOut (#6, concurrent=0)
               duration: 100.0
               IsBlackFade: true
               IsNoIcon: false
               IsWaitEnd: true
[   1018.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#31, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1030.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#31, concurrent=0)
[   1099.0] L Npc_Goron_007_Child[0] - EventPlayASForTimeline (#12, concurrent=0)
[   1100.0] L TerrainSystemActor[0] - EventTerrainCalcCenter (#3, concurrent=0)
[   1100.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   1100.0] L UISystemActor[0] - EventLoadingFadeOut (#6, concurrent=0)
[   1100.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#7, concurrent=0)
[   1100.0] L Npc_Kaepora[0] - EventPlayASForTimeline (#8, concurrent=0)
[   1100.0] L Player_Event[0] - EventPlayASForTimeline (#9, concurrent=0)
[   1100.0] L Npc_Navi[0] - EventGoOffstageForUser (#10, concurrent=0)
[   1100.0] L Npc_Goron_001_Child[0] - EventPlayASForTimeline (#11, concurrent=0)
[   1100.0] L Npc_Goron_010_Child[0] - EventPlayASForTimeline (#13, concurrent=0)
[   1100.0] L Obj_BombFlower_Fruit_For_Break_Obj_DeathMtTrail_BrokenRock_A_01[0] - EventDoNothing (#14, concurrent=0)
