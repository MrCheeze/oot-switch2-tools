-------- Event timeline: Dm_ZoraFountain_0010 --------
actors: 10
clips: 126
oneshots: 0
cuts: 16
duration: 2265.0
subtimelines: ['Dm_ZoraFountain_0010_Effect', 'Dm_ZoraFountain_0010_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut01_50
start time: 180.0
x4: 0
params: (none)

Cut: cut02
start time: 420.0
x4: 0
params: (none)

Cut: cut03
start time: 770.0
x4: 0
params: (none)

Cut: cut04
start time: 890.0
x4: 0
params: (none)

Cut: cut05
start time: 1130.0
x4: 0
params: (none)

Cut: cut06
start time: 1310.0
x4: 0
params: (none)

Cut: cut07
start time: 1430.0
x4: 0
params: (none)

Cut: cut08
start time: 1550.0
x4: 0
params: (none)

Cut: cut09
start time: 1610.0
x4: 0
params: (none)

Cut: cut10
start time: 1700.0
x4: 0
params: (none)

Cut: cut11
start time: 1790.0
x4: 0
params: (none)

Cut: cut12
start time: 1865.0
x4: 0
params: (none)

Cut: cut13
start time: 1905.0
x4: 0
params: (none)

Cut: cut14
start time: 2085.0
x4: 0
params: (none)

Cut: cut15
start time: 2145.0
x4: 0
params: (none)


===== Actors =====

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

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline', 'EventDoNothing']
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
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ZoraFountain_0010/Dm_ZoraFountain_0010/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventNaviPlayLipSync', 'EventNaviStopLipSync', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ZoraFountain_0010/Dm_ZoraFountain_0010_Npc_Navi/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_ZoraFountain_0010/Dm_ZoraFountain_0010_Player_Child/workspace.pp__ModelProject.gyml

Actor: Animal_Fish_Blue[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ZoraFountain_0010/Dm_ZoraFountain_0010_Animal_Fish_Blue/workspace.pp__ModelProject.gyml

Actor: Npc_JabuJabu[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_ZoraFountain_0010_Npc_U_JabuJabu.root.as
UseEventModelAnime: Work/Model/Event/Dm_ZoraFountain_0010/Dm_ZoraFountain_0010_Npc_U_JabuJabu/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ZoraFountain_0010/Dm_ZoraFountain_0010_Npc_Navi/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#7, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 50.0
               EndBluarLevel: 0.0
               EndDistance: 0.6000000238418579
               EndFNumber: 37.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.6000000238418579
               StartFNumber: 37.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
               duration: 180.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#51, concurrent=1)
               duration: 180.0
               Near: 0.10000000149011612
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 180.0
               ASName: C01_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#88, concurrent=0)
               duration: 180.0
               ASName: C01_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#102, concurrent=1)
               duration: 180.0
[      0.0] E Animal_Fish_Blue[0] - EventPlayASForTimeline (#103, concurrent=0)
               duration: 180.0
               ASName: C01_00-Animal_Fish_Blue-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#110, concurrent=0)
               duration: 180.0
               ASName: AS-C01_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#125, concurrent=0)
               duration: 2265.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[     50.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[     50.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 105.0
               EndBluarLevel: 0.0
               EndDistance: 1.149999976158142
               EndFNumber: 37.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.6000000238418579
               StartFNumber: 37.0
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#7, concurrent=0)
[    155.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[    155.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 25.0
               EndBluarLevel: 0.0
               EndDistance: 1.149999976158142
               EndFNumber: 37.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.149999976158142
               StartFNumber: 37.0
[    180.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[    180.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
[    180.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#51, concurrent=1)
[    180.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#67, concurrent=0)
[    180.0] L Player_Event[0] - EventPlayASForTimeline (#88, concurrent=0)
[    180.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#102, concurrent=1)
[    180.0] L Animal_Fish_Blue[0] - EventPlayASForTimeline (#103, concurrent=0)
[    180.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#110, concurrent=0)
[    180.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 240.0
               EndBluarLevel: 0.0
               EndDistance: 5.300000190734863
               EndFNumber: 4.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 5.300000190734863
               StartFNumber: 4.5
[    180.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
               duration: 240.0
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
[    180.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#52, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[    180.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#68, concurrent=0)
               duration: 240.0
               ASName: C01_50-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    180.0] E Player_Event[0] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 240.0
               ASName: C01_50-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    180.0] E Animal_Fish_Blue[0] - EventPlayASForTimeline (#104, concurrent=0)
               duration: 240.0
               ASName: C01_50-Animal_Fish_Blue-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    180.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#111, concurrent=0)
               duration: 240.0
               ASName: C01_50-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    410.0] E VoicePlayActor[0] - EventStartVoice (#0, concurrent=0)
               duration: 341.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ZoraFountain_0010:Dm_ZoraFountain_0010_Text_000_c
               OffsetFrame: 30
               Speaker: Npc_Navi
[    420.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[    420.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
[    420.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#52, concurrent=1)
[    420.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#68, concurrent=0)
[    420.0] L Player_Event[0] - EventPlayASForTimeline (#89, concurrent=0)
[    420.0] L Animal_Fish_Blue[0] - EventPlayASForTimeline (#104, concurrent=0)
[    420.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#111, concurrent=0)
[    420.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 350.0
               EndBluarLevel: 0.0
               EndDistance: 1.100000023841858
               EndFNumber: 55.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.100000023841858
               StartFNumber: 55.0
[    420.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
               duration: 350.0
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
[    420.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#53, concurrent=1)
               duration: 350.0
               Near: 0.10000000149011612
[    420.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#69, concurrent=0)
               duration: 350.0
               ASName: C02_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    420.0] E Player_Event[0] - EventPlayASForTimeline (#90, concurrent=0)
               duration: 350.0
               ASName: C02_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    440.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#82, concurrent=1)
               duration: 313.0
[    751.0] L VoicePlayActor[0] - EventStartVoice (#0, concurrent=0)
[    753.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#82, concurrent=1)
[    753.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#83, concurrent=1)
               duration: 17.0
[    770.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[    770.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
[    770.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#53, concurrent=1)
[    770.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#69, concurrent=0)
[    770.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#83, concurrent=1)
[    770.0] L Player_Event[0] - EventPlayASForTimeline (#90, concurrent=0)
[    770.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 120.0
               EndBluarLevel: 0.0
               EndDistance: 8.0
               EndFNumber: 25.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 8.0
               StartFNumber: 25.5
[    770.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
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
[    770.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#54, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[    770.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#112, concurrent=0)
               duration: 120.0
               ASName: C03_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    890.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[    890.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
[    890.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#54, concurrent=1)
[    890.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#112, concurrent=0)
[    890.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 240.0
               EndBluarLevel: 0.0
               EndDistance: 5.0
               EndFNumber: 8.100000381469727
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 5.0
               StartFNumber: 8.100000381469727
[    890.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
               duration: 240.0
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
[    890.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[    890.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#70, concurrent=0)
               duration: 240.0
               ASName: C04_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    890.0] E Player_Event[0] - EventPlayASForTimeline (#91, concurrent=0)
               duration: 240.0
               ASName: C04_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    890.0] E Animal_Fish_Blue[0] - EventPlayASForTimeline (#105, concurrent=0)
               duration: 240.0
               ASName: C04_00-Animal_Fish_Blue-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    890.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#113, concurrent=0)
               duration: 240.0
               ASName: AS-C04_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1130.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   1130.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
[   1130.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#55, concurrent=1)
[   1130.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#70, concurrent=0)
[   1130.0] L Player_Event[0] - EventPlayASForTimeline (#91, concurrent=0)
[   1130.0] L Animal_Fish_Blue[0] - EventPlayASForTimeline (#105, concurrent=0)
[   1130.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#113, concurrent=0)
[   1130.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 180.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 18.0
               EndFNumber: 0.75
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 18.0
               StartFNumber: 0.75
[   1130.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
               duration: 180.0
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
[   1130.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
               duration: 180.0
               Near: 0.10000000149011612
[   1130.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#71, concurrent=0)
               duration: 180.0
               ASName: C05_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1130.0] E Player_Event[0] - EventPlayASForTimeline (#92, concurrent=0)
               duration: 180.0
               ASName: C05_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1130.0] E Animal_Fish_Blue[0] - EventPlayASForTimeline (#106, concurrent=0)
               duration: 180.0
               ASName: C05_00-Animal_Fish_Blue-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1130.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#114, concurrent=0)
               duration: 180.0
               ASName: C05_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1310.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   1310.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
[   1310.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#56, concurrent=1)
[   1310.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#71, concurrent=0)
[   1310.0] L Player_Event[0] - EventPlayASForTimeline (#92, concurrent=0)
[   1310.0] L Animal_Fish_Blue[0] - EventPlayASForTimeline (#106, concurrent=0)
[   1310.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#114, concurrent=0)
[   1310.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 120.0
               EndBluarLevel: 1.5
               EndDistance: 4.5
               EndFNumber: 28.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 4.5
               StartFNumber: 28.0
[   1310.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
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
[   1310.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[   1310.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#72, concurrent=0)
               duration: 120.0
               ASName: C06_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1310.0] E Player_Event[0] - EventPlayASForTimeline (#93, concurrent=0)
               duration: 120.0
               ASName: C06_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1310.0] E Animal_Fish_Blue[0] - EventPlayASForTimeline (#107, concurrent=0)
               duration: 120.0
               ASName: C06_00-Animal_Fish_Blue-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1310.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#115, concurrent=0)
               duration: 120.0
               ASName: C06_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1430.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   1430.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
[   1430.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#57, concurrent=1)
[   1430.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#72, concurrent=0)
[   1430.0] L Player_Event[0] - EventPlayASForTimeline (#93, concurrent=0)
[   1430.0] L Animal_Fish_Blue[0] - EventPlayASForTimeline (#107, concurrent=0)
[   1430.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#115, concurrent=0)
[   1430.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 120.0
               EndBluarLevel: 2.5
               EndDistance: 0.8999999761581421
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.299999952316284
               StartDistance: 2.0
               StartFNumber: 13.5
[   1430.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
               duration: 120.0
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
[   1430.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#58, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[   1430.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
               duration: 120.0
               ASName: C07_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1430.0] E Player_Event[0] - EventPlayASForTimeline (#94, concurrent=0)
               duration: 120.0
               ASName: C07_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1430.0] E Animal_Fish_Blue[0] - EventPlayASForTimeline (#108, concurrent=0)
               duration: 120.0
               ASName: C07_00-Animal_Fish_Blue-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1430.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#116, concurrent=0)
               duration: 120.0
               ASName: C07_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1550.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   1550.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
[   1550.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#58, concurrent=1)
[   1550.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
[   1550.0] L Player_Event[0] - EventPlayASForTimeline (#94, concurrent=0)
[   1550.0] L Animal_Fish_Blue[0] - EventPlayASForTimeline (#108, concurrent=0)
[   1550.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#116, concurrent=0)
[   1550.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 12.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 18.0
               EndFNumber: 0.75
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 18.0
               StartFNumber: 0.75
[   1550.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
               duration: 60.0
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
[   1550.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#59, concurrent=1)
               duration: 60.0
               Near: 0.009999999776482582
[   1550.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 60.0
               ASName: C08_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1550.0] E Player_Event[0] - EventPlayASForTimeline (#95, concurrent=0)
               duration: 60.0
               ASName: C08_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1550.0] E Animal_Fish_Blue[0] - EventPlayASForTimeline (#109, concurrent=0)
               duration: 60.0
               ASName: C08_00-Animal_Fish_Blue-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1550.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#117, concurrent=0)
               duration: 60.0
               ASName: C08_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1562.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   1562.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 41.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 1.2000000476837158
               EndFNumber: 8.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 18.0
               StartFNumber: 0.75
[   1596.0] E VoicePlayActor[0] - EventStartVoice (#1, concurrent=0)
               duration: 131.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ZoraFountain_0010:Dm_ZoraFountain_0010_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   1603.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   1603.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 7.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 18.0
               EndFNumber: 0.75
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 1.2000000476837158
               StartFNumber: 8.0
[   1610.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   1610.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
[   1610.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#59, concurrent=1)
[   1610.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
[   1610.0] L Player_Event[0] - EventPlayASForTimeline (#95, concurrent=0)
[   1610.0] L Animal_Fish_Blue[0] - EventPlayASForTimeline (#109, concurrent=0)
[   1610.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#117, concurrent=0)
[   1610.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 90.0
               EndBluarLevel: 0.0
               EndDistance: 1.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.0
               StartFNumber: 30.0
[   1610.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
               duration: 90.0
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
[   1610.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#60, concurrent=1)
               duration: 90.0
               Near: 0.10000000149011612
[   1610.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#75, concurrent=0)
               duration: 90.0
               ASName: C09_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1610.0] E Player_Event[0] - EventPlayASForTimeline (#96, concurrent=0)
               duration: 90.0
               ASName: C09_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1610.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#118, concurrent=0)
               duration: 90.0
               ASName: C09_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1626.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#84, concurrent=1)
               duration: 153.0
[   1700.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   1700.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
[   1700.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#60, concurrent=1)
[   1700.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#75, concurrent=0)
[   1700.0] L Player_Event[0] - EventPlayASForTimeline (#96, concurrent=0)
[   1700.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#118, concurrent=0)
[   1700.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 90.0
               EndBluarLevel: 2.0
               EndDistance: 0.9100000262260437
               EndFNumber: 113.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.9100000262260437
               StartFNumber: 113.0
[   1700.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
               duration: 90.0
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
[   1700.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#61, concurrent=1)
               duration: 90.0
               Near: 0.10000000149011612
[   1700.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#76, concurrent=0)
               duration: 90.0
               ASName: C10_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1700.0] E Player_Event[0] - EventPlayASForTimeline (#97, concurrent=0)
               duration: 90.0
               ASName: C10_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1700.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#119, concurrent=0)
               duration: 90.0
               ASName: C10_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1727.0] L VoicePlayActor[0] - EventStartVoice (#1, concurrent=0)
[   1749.0] E VoicePlayActor[1] - EventStartVoice (#3, concurrent=0)
               duration: 57.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ZoraFountain_0010:Dm_ZoraFountain_0010_Text_002_aab
               OffsetFrame: 30
               Speaker: Player_Child
[   1779.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#84, concurrent=1)
[   1779.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#85, concurrent=1)
               duration: 11.0
[   1790.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
[   1790.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
[   1790.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#61, concurrent=1)
[   1790.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#76, concurrent=0)
[   1790.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#85, concurrent=1)
[   1790.0] L Player_Event[0] - EventPlayASForTimeline (#97, concurrent=0)
[   1790.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#119, concurrent=0)
[   1790.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 44.0
               EndBluarLevel: 0.0
               EndDistance: 0.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.8999999761581421
               StartFNumber: 30.0
[   1790.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
               duration: 75.0
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
[   1790.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#62, concurrent=1)
               duration: 75.0
               Near: 0.05000000074505806
[   1790.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#77, concurrent=0)
               duration: 75.0
               ASName: C11_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1790.0] E Player_Event[0] - EventPlayASForTimeline (#98, concurrent=0)
               duration: 75.0
               ASName: C11_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1790.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#120, concurrent=0)
               duration: 75.0
               ASName: C11_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1806.0] L VoicePlayActor[1] - EventStartVoice (#3, concurrent=0)
[   1806.0] E VoicePlayActor[1] - EventStartVoice (#4, concurrent=0)
               duration: 76.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ZoraFountain_0010:Dm_ZoraFountain_0010_Text_002_ab
               OffsetFrame: 30
               Speaker: Player_Child
[   1834.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
[   1834.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 31.0
               EndBluarLevel: 0.0
               EndDistance: 10.0
               EndFNumber: 4.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.5
               StartFNumber: 30.0
[   1865.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
[   1865.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
[   1865.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#62, concurrent=1)
[   1865.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#77, concurrent=0)
[   1865.0] L Player_Event[0] - EventPlayASForTimeline (#98, concurrent=0)
[   1865.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#120, concurrent=0)
[   1865.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
               duration: 40.0
               EndBluarLevel: 0.0
               EndDistance: 0.9700000286102295
               EndFNumber: 35.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.9700000286102295
               StartFNumber: 35.0
[   1865.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
               duration: 40.0
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
[   1865.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#63, concurrent=1)
               duration: 40.0
               Near: 0.10000000149011612
[   1865.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#78, concurrent=0)
               duration: 40.0
               ASName: C12_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1865.0] E Player_Event[0] - EventPlayASForTimeline (#99, concurrent=0)
               duration: 40.0
               ASName: C12_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1865.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#121, concurrent=0)
               duration: 40.0
               ASName: C12_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1882.0] L VoicePlayActor[1] - EventStartVoice (#4, concurrent=0)
[   1882.0] E VoicePlayActor[1] - EventStartVoice (#5, concurrent=0)
               duration: 128.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ZoraFountain_0010:Dm_ZoraFountain_0010_Text_002_b
               OffsetFrame: 30
               Speaker: Player_Child
[   1905.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
[   1905.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
[   1905.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#63, concurrent=1)
[   1905.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#78, concurrent=0)
[   1905.0] L Player_Event[0] - EventPlayASForTimeline (#99, concurrent=0)
[   1905.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#121, concurrent=0)
[   1905.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 180.0
               EndBluarLevel: 2.299999952316284
               EndDistance: 1.399999976158142
               EndFNumber: 190.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.299999952316284
               StartDistance: 1.399999976158142
               StartFNumber: 190.5
[   1905.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
               duration: 180.0
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
[   1905.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#64, concurrent=1)
               duration: 180.0
               Near: 0.10000000149011612
[   1905.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#79, concurrent=0)
               duration: 180.0
               ASName: C13_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1905.0] E Player_Event[0] - EventPlayASForTimeline (#100, concurrent=0)
               duration: 180.0
               ASName: C13_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1905.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#122, concurrent=0)
               duration: 180.0
               ASName: C13_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1981.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#86, concurrent=1)
               duration: 149.0
[   1990.0] E VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
               duration: 226.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ZoraFountain_0010:Dm_ZoraFountain_0010_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2010.0] L VoicePlayActor[1] - EventStartVoice (#5, concurrent=0)
[   2010.0] E VoicePlayActor[1] - EventStartVoice (#6, concurrent=0)
               duration: 206.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ZoraFountain_0010:Dm_ZoraFountain_0010_Text_004_b
               OffsetFrame: 30
               Speaker: Player_Child
[   2085.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
[   2085.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
[   2085.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#64, concurrent=1)
[   2085.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#79, concurrent=0)
[   2085.0] L Player_Event[0] - EventPlayASForTimeline (#100, concurrent=0)
[   2085.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#122, concurrent=0)
[   2085.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 4.0
               EndBluarLevel: 0.0
               EndDistance: 0.8999999761581421
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.8999999761581421
               StartFNumber: 25.0
[   2085.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
               duration: 60.0
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
[   2085.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#65, concurrent=1)
               duration: 60.0
               Near: 0.10000000149011612
[   2085.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#80, concurrent=0)
               duration: 60.0
               ASName: C14_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2085.0] E Player_Event[0] - EventPlayASForTimeline (#101, concurrent=0)
               duration: 60.0
               ASName: C14_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2085.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#123, concurrent=0)
               duration: 60.0
               ASName: C14_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2089.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
[   2089.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 5.0
               EndBluarLevel: 0.0
               EndDistance: 0.8999999761581421
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.8999999761581421
               StartFNumber: 25.0
[   2094.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
[   2094.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 12.0
               EndBluarLevel: 0.0
               EndDistance: 1.149999976158142
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 0.8999999761581421
               StartFNumber: 25.0
[   2106.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
[   2106.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 12.0
               EndBluarLevel: 0.0
               EndDistance: 1.149999976158142
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.149999976158142
               StartFNumber: 25.0
[   2118.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
[   2118.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 27.0
               EndBluarLevel: 0.0
               EndDistance: 1.149999976158142
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.149999976158142
               StartFNumber: 25.0
[   2130.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#86, concurrent=1)
[   2130.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#87, concurrent=1)
               duration: 32.0
[   2145.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
[   2145.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=0)
[   2145.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#65, concurrent=1)
[   2145.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#80, concurrent=0)
[   2145.0] L Player_Event[0] - EventPlayASForTimeline (#101, concurrent=0)
[   2145.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#123, concurrent=0)
[   2145.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 120.0
               EndBluarLevel: 0.0
               EndDistance: 2.0
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.0
               StartFNumber: 25.0
[   2145.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
               duration: 120.0
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
[   2145.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
               duration: 120.0
               Near: 0.10000000149011612
[   2145.0] E Dm_Npc_Navi[0] - EventGoOffstageForUser (#81, concurrent=0)
               duration: 120.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   2145.0] E Npc_JabuJabu[0] - EventPlayASForTimeline (#124, concurrent=0)
               duration: 120.0
               ASName: C15_00-Npc_U_JabuJabu-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2162.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#87, concurrent=1)
[   2170.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#8, concurrent=0)
               duration: 52.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   2216.0] L VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
[   2216.0] L VoicePlayActor[1] - EventStartVoice (#6, concurrent=0)
[   2222.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#8, concurrent=0)
[   2222.0] E UISystemActor[0] - EventDoNothing (#9, concurrent=0)
               duration: 43.0
               IsWaitEnd: true
[   2265.0] L UISystemActor[0] - EventDoNothing (#9, concurrent=0)
[   2265.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
[   2265.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#50, concurrent=0)
[   2265.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#66, concurrent=1)
[   2265.0] L Dm_Npc_Navi[0] - EventGoOffstageForUser (#81, concurrent=0)
[   2265.0] L Npc_JabuJabu[0] - EventPlayASForTimeline (#124, concurrent=0)
[   2265.0] L Npc_Navi - EventGoOffstageForUser (#125, concurrent=0)
