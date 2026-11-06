-------- Event timeline: Dm_LakeHrl_0010 --------
actors: 11
clips: 34
oneshots: 0
cuts: 1
duration: 1400.0
subtimelines: ['Dm_LakeHrl_0010_Effect']
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[2]
concurrent clips: 1
actions: ['EventTriggerAddPreComputedCullingBasePos']
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
UseEventAS: Work/AS/Root/Event/Dm_LakeHrl_0010_Link.root.as
UseEventModelAnime: Work/Model/Event/Dm_LakeHrl_0010/Dm_LakeHrl_0010_Player_Child/workspace.pp__ModelProject.gyml

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

Actor: Npc_Kaepora_LakeHylia[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_LakeHrl_0010_Kaepora.root.as
UseEventModelAnime: Work/Model/Event/Dm_LakeHrl_0010/Dm_LakeHrl_0010_Npc_U_Kaepora/workspace.pp__ModelProject.gyml

Actor: Npc_Pierre[0]
concurrent clips: 1
actions: ['EventWarpToTargetPosAndRot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Npc_Bonooru[0]
concurrent clips: 1
actions: ['EventWarpToTargetPosAndRot']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[0]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[1]
concurrent clips: 1
actions: ['EventControllerRumbleTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E GameSystemActor[2] - EventTriggerAddPreComputedCullingBasePos (#2, concurrent=0)
               duration: 1400.0
               EndPos:
               - -195.8699951171875
               - 131.41000366210938
               - 510.6600036621094
               StartPos:
               - -195.8699951171875
               - 131.41000366210938
               - 510.6600036621094
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 1400.0
               EndBluarLevel: 2.0
               EndDistance: 0.0
               EndFNumber: 23.0
               IsAutoFocalDist: true
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.0
               StartFNumber: 23.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#4, concurrent=0)
               duration: 1400.0
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
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#5, concurrent=0)
               duration: 1400.0
               ASName: C01
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#6, concurrent=0)
               duration: 1400.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Npc_Kaepora_LakeHylia[0] - EventPlayASForTimeline (#7, concurrent=0)
               duration: 1400.0
               ASName: C01
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Pierre[0] - EventWarpToTargetPosAndRot (#8, concurrent=0)
               duration: 1400.0
               ClothWarpMode: -1
               IsWaitEnd: true
               Position:
               - -96.75
               - 133.3000030517578
               - 434.20001220703125
               YAngle: -35.0
[      0.0] E Npc_Bonooru[0] - EventWarpToTargetPosAndRot (#9, concurrent=0)
               duration: 1400.0
               ClothWarpMode: -1
               IsWaitEnd: true
               Position:
               - -108.79000091552734
               - 132.44000244140625
               - 439.1600036621094
               YAngle: -20.0
[     43.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[     55.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#10, concurrent=0)
[    100.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    100.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#11, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    112.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#11, concurrent=0)
[    160.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#12, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    172.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#12, concurrent=0)
[    215.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#13, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    227.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#13, concurrent=0)
[    278.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#14, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    290.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#14, concurrent=0)
[    335.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#15, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    347.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#15, concurrent=0)
[    347.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#16, concurrent=0)
               duration: 146.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_GataGata
[    408.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#32, concurrent=0)
               duration: 83.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_BuBuBu
[    491.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#32, concurrent=0)
[    491.0] E GameSystemActor[1] - EventControllerRumbleTimeline (#33, concurrent=0)
               duration: 14.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Large_Doon
[    493.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#16, concurrent=0)
[    505.0] L GameSystemActor[1] - EventControllerRumbleTimeline (#33, concurrent=0)
[    506.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#17, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    518.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#17, concurrent=0)
[    553.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#18, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    565.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#18, concurrent=0)
[    606.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#19, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    618.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#19, concurrent=0)
[    661.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#20, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    673.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#20, concurrent=0)
[    726.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#21, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    738.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#21, concurrent=0)
[    789.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#22, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    801.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#22, concurrent=0)
[    853.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#23, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    865.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#23, concurrent=0)
[    916.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#24, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    928.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#24, concurrent=0)
[    980.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#25, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[    992.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#25, concurrent=0)
[   1044.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#26, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1056.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#26, concurrent=0)
[   1105.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#27, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1117.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#27, concurrent=0)
[   1163.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#28, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1175.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#28, concurrent=0)
[   1226.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#29, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Middle_Don
[   1238.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#29, concurrent=0)
[   1286.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#30, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small
[   1298.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#30, concurrent=0)
[   1300.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   1344.0] E GameSystemActor[0] - EventControllerRumbleTimeline (#31, concurrent=0)
               duration: 12.0
               IsWaitEnd: true
               NoLoop: false
               RumbleCall: Demo_Small
[   1356.0] L GameSystemActor[0] - EventControllerRumbleTimeline (#31, concurrent=0)
[   1400.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[   1400.0] L GameSystemActor[2] - EventTriggerAddPreComputedCullingBasePos (#2, concurrent=0)
[   1400.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[   1400.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#4, concurrent=0)
[   1400.0] L Player_Event[0] - EventPlayASForTimeline (#5, concurrent=0)
[   1400.0] L Npc_Navi[0] - EventGoOffstageForUser (#6, concurrent=0)
[   1400.0] L Npc_Kaepora_LakeHylia[0] - EventPlayASForTimeline (#7, concurrent=0)
[   1400.0] L Npc_Pierre[0] - EventWarpToTargetPosAndRot (#8, concurrent=0)
[   1400.0] L Npc_Bonooru[0] - EventWarpToTargetPosAndRot (#9, concurrent=0)
