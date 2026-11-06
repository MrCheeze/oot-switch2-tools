-------- Event timeline: Dm_Goron_0020 --------
actors: 8
clips: 107
oneshots: 0
cuts: 15
duration: 5689.0
subtimelines: ['Dm_Goron_0020_Effect', 'Dm_Goron_0020_Env']
params: (none)

===== Cuts =====

Cut: C01_00
start time: 0.0
x4: 0
params: (none)

Cut: C02_00
start time: 400.0
x4: 0
params: (none)

Cut: C03_00
start time: 970.0
x4: 0
params: (none)

Cut: C04_00
start time: 1370.0
x4: 0
params: (none)

Cut: C05_00
start time: 1680.0
x4: 0
params: (none)

Cut: C06_00
start time: 1980.0
x4: 0
params: (none)

Cut: C07_00
start time: 2780.0
x4: 0
params: (none)

Cut: C08_00
start time: 3220.0
x4: 0
params: (none)

Cut: C09_00
start time: 3450.0
x4: 0
params: (none)

Cut: C10_00
start time: 3750.0
x4: 0
params: (none)

Cut: C11_00
start time: 4110.0
x4: 0
params: (none)

Cut: C12_00
start time: 4410.0
x4: 0
params: (none)

Cut: C14_00
start time: 5090.0
x4: 0
params: (none)

Cut: C15_00
start time: 5290.0
x4: 0
params: (none)

Cut: C16_00
start time: 5510.0
x4: 0
params: (none)


===== Actors =====

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeOutForTimeline', 'EventEventFadeInForTimeline']
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
UseEventModelAnime: Work/Model/Event/Dm_Goron_0020/Dm_Goron_0020/workspace.pp__ModelProject.gyml

Actor: VoicePlayActor[0]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

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
UseEventModelAnime: Work/Model/Event/Dm_Goron_0020/Dm_Goron_0020_Player_Child/workspace.pp__ModelProject.gyml

Actor: Npc_Goron_Darunia_Child[0]
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
UseEventModelAnime: Work/Model/Event/Dm_Goron_0020/Dm_Goron_0020_Npc_Goron_GOU_Darunia/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Npc_Navi[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventNaviPlayLipSync', 'EventNaviStopLipSync']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Goron_0020/Dm_Goron_0020_Npc_Navi/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 196.0
               EndBluarLevel: 2.0
               EndDistance: 4.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 10.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
               duration: 400.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#42, concurrent=1)
               duration: 400.0
               Near: 0.10000000149011612
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#66, concurrent=0)
               duration: 400.0
               ASName: C01-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#76, concurrent=1)
               duration: 400.0
[      0.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#77, concurrent=0)
               duration: 400.0
               ASName: C01-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#92, concurrent=0)
               duration: 5690.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#93, concurrent=0)
               duration: 400.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    100.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    196.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    196.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 94.0
               EndBluarLevel: 2.0
               EndDistance: 4.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.0
               StartFNumber: 10.0
[    290.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    290.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 110.0
               EndBluarLevel: 2.0
               EndDistance: 4.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.0
               StartFNumber: 10.0
[    400.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[    400.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
[    400.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#42, concurrent=1)
[    400.0] L Player_Event[0] - EventPlayASForTimeline (#66, concurrent=0)
[    400.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#76, concurrent=1)
[    400.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#77, concurrent=0)
[    400.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#93, concurrent=0)
[    400.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 260.0
               EndBluarLevel: 2.0
               EndDistance: 2.700000047683716
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.300000190734863
               StartFNumber: 10.0
[    400.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
               duration: 570.0
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
[    400.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#43, concurrent=1)
               duration: 4010.0
               Near: 1.0
[    400.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#78, concurrent=0)
               duration: 570.0
               ASName: C02-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    402.0] E VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
               duration: 173.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[    575.0] L VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
[    630.0] E VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
               duration: 328.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[    660.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[    660.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 180.0
               EndBluarLevel: 2.0
               EndDistance: 2.3499999046325684
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.700000047683716
               StartFNumber: 20.0
[    840.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[    840.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 130.0
               EndBluarLevel: 2.0
               EndDistance: 2.3499999046325684
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.3499999046325684
               StartFNumber: 30.0
[    958.0] L VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
[    970.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[    970.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
[    970.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#78, concurrent=0)
[    970.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 400.0
               EndBluarLevel: 2.0
               EndDistance: 6.0
               EndFNumber: 13.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 6.0
               StartFNumber: 13.0
[    970.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
               duration: 400.0
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
[    970.0] E Player_Event[0] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 400.0
               ASName: C03-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    970.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#79, concurrent=0)
               duration: 400.0
               ASName: C03-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    970.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#94, concurrent=0)
               duration: 400.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1064.0] E VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
               duration: 224.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_002_bb
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   1288.0] L VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
[   1288.0] E VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
               duration: 102.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   1370.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   1370.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
[   1370.0] L Player_Event[0] - EventPlayASForTimeline (#67, concurrent=0)
[   1370.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#79, concurrent=0)
[   1370.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#94, concurrent=0)
[   1370.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 310.0
               EndBluarLevel: 1.5
               EndDistance: 3.5
               EndFNumber: 21.299999237060547
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 3.5
               StartFNumber: 21.299999237060547
[   1370.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
               duration: 310.0
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
[   1370.0] E Player_Event[0] - EventPlayASForTimeline (#68, concurrent=0)
               duration: 310.0
               ASName: C04-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1370.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#80, concurrent=0)
               duration: 310.0
               ASName: C04-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1370.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#95, concurrent=0)
               duration: 310.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1390.0] L VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
[   1398.0] E VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
               duration: 197.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_003_c
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   1595.0] L VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
[   1680.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   1680.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
[   1680.0] L Player_Event[0] - EventPlayASForTimeline (#68, concurrent=0)
[   1680.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#80, concurrent=0)
[   1680.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#95, concurrent=0)
[   1680.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 300.0
               EndBluarLevel: 2.0
               EndDistance: 6.0
               EndFNumber: 13.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 6.0
               StartFNumber: 13.0
[   1680.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
               duration: 300.0
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
[   1680.0] E Player_Event[0] - EventPlayASForTimeline (#69, concurrent=0)
               duration: 300.0
               ASName: C05-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1680.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#81, concurrent=0)
               duration: 300.0
               ASName: C05-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1680.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#96, concurrent=0)
               duration: 300.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1695.0] E VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
               duration: 253.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   1948.0] L VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
[   1980.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   1980.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
[   1980.0] L Player_Event[0] - EventPlayASForTimeline (#69, concurrent=0)
[   1980.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#81, concurrent=0)
[   1980.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#96, concurrent=0)
[   1980.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 800.0
               EndBluarLevel: 2.0
               EndDistance: 2.299999952316284
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.299999952316284
               StartFNumber: 20.0
[   1980.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
               duration: 800.0
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
[   1980.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#82, concurrent=0)
               duration: 800.0
               ASName: C06-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2060.0] E VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
               duration: 54.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_004_c
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   2114.0] L VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
[   2140.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#1, concurrent=0)
               duration: 320.0
               DemoNicknamePos: 6
               DemoNicknameType: 0
               InAnimFrame: -1
               IsWaitEnd: true
               NameMessageLabel: ActorMsg/Npc:Npc_Goron_Darunia_Child_Name
               NicknameMessageLabel: ActorMsg/Nickname:Npc_Goron_Darunia_Child
               OutAnimFrame: -1
[   2460.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#1, concurrent=0)
[   2511.0] E VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
               duration: 231.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   2742.0] L VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
[   2780.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   2780.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
[   2780.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#82, concurrent=0)
[   2780.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 220.0
               EndBluarLevel: 2.0
               EndDistance: 3.200000047683716
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.200000047683716
               StartFNumber: 30.0
[   2780.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
               duration: 440.0
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
[   2780.0] E Player_Event[0] - EventPlayASForTimeline (#70, concurrent=0)
               duration: 440.0
               ASName: C07-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2780.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#83, concurrent=0)
               duration: 440.0
               ASName: C07-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2780.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#97, concurrent=0)
               duration: 440.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2792.0] E VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
               duration: 133.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   2925.0] L VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
[   2959.0] E VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
               duration: 237.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2989.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#103, concurrent=1)
               duration: 209.0
[   3000.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   3000.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 28.0
               EndBluarLevel: 2.0
               EndDistance: 2.5
               EndFNumber: 55.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.200000047683716
               StartFNumber: 30.0
[   3028.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   3028.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 22.0
               EndBluarLevel: 2.0
               EndDistance: 1.899999976158142
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.5
               StartFNumber: 55.0
[   3050.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   3050.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 170.0
               EndBluarLevel: 2.0
               EndDistance: 1.899999976158142
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.899999976158142
               StartFNumber: 80.0
[   3196.0] L VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
[   3198.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#103, concurrent=1)
[   3198.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#104, concurrent=1)
               duration: 65.0
[   3220.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   3220.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
[   3220.0] L Player_Event[0] - EventPlayASForTimeline (#70, concurrent=0)
[   3220.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#83, concurrent=0)
[   3220.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#97, concurrent=0)
[   3220.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 230.0
               EndBluarLevel: 2.0
               EndDistance: 6.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 6.0
               StartFNumber: 10.0
[   3220.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
               duration: 230.0
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
[   3220.0] E Player_Event[0] - EventPlayASForTimeline (#71, concurrent=0)
               duration: 230.0
               ASName: C08-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3220.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#84, concurrent=0)
               duration: 230.0
               ASName: C08-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3220.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#98, concurrent=0)
               duration: 230.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3233.0] E VoicePlayActor[0] - EventStartVoice (#57, concurrent=0)
               duration: 159.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   3263.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#104, concurrent=1)
[   3263.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#105, concurrent=1)
               duration: 131.0
[   3392.0] L VoicePlayActor[0] - EventStartVoice (#57, concurrent=0)
[   3394.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#105, concurrent=1)
[   3394.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#106, concurrent=1)
               duration: 56.0
[   3450.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   3450.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
[   3450.0] L Player_Event[0] - EventPlayASForTimeline (#71, concurrent=0)
[   3450.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#84, concurrent=0)
[   3450.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#98, concurrent=0)
[   3450.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#106, concurrent=1)
[   3450.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 100.0
               EndBluarLevel: 2.0
               EndDistance: 2.799999952316284
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.799999952316284
               StartFNumber: 40.0
[   3450.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
               duration: 300.0
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
[   3450.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#85, concurrent=0)
               duration: 300.0
               ASName: C09-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3491.0] E VoicePlayActor[0] - EventStartVoice (#58, concurrent=0)
               duration: 195.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   3550.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   3550.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 120.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.799999952316284
               StartFNumber: 40.0
[   3670.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   3670.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 80.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 50.0
[   3686.0] L VoicePlayActor[0] - EventStartVoice (#58, concurrent=0)
[   3750.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   3750.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
[   3750.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#85, concurrent=0)
[   3750.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 360.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 20.0
[   3750.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
               duration: 360.0
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
[   3750.0] E Player_Event[0] - EventPlayASForTimeline (#72, concurrent=0)
               duration: 360.0
               ASName: C10-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3750.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 360.0
               ASName: C10-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3750.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#99, concurrent=0)
               duration: 360.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3781.0] E VoicePlayActor[0] - EventStartVoice (#59, concurrent=0)
               duration: 208.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   3989.0] L VoicePlayActor[0] - EventStartVoice (#59, concurrent=0)
[   4005.0] E VoicePlayActor[0] - EventStartVoice (#60, concurrent=0)
               duration: 232.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   4110.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   4110.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
[   4110.0] L Player_Event[0] - EventPlayASForTimeline (#72, concurrent=0)
[   4110.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#86, concurrent=0)
[   4110.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#99, concurrent=0)
[   4110.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 300.0
               EndBluarLevel: 2.0
               EndDistance: 4.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.0
               StartFNumber: 15.0
[   4110.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
               duration: 300.0
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
[   4110.0] E Player_Event[0] - EventPlayASForTimeline (#73, concurrent=0)
               duration: 300.0
               ASName: C11-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4110.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#87, concurrent=0)
               duration: 300.0
               ASName: C11-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4110.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#100, concurrent=0)
               duration: 300.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4237.0] L VoicePlayActor[0] - EventStartVoice (#60, concurrent=0)
[   4245.0] E VoicePlayActor[0] - EventStartVoice (#61, concurrent=0)
               duration: 258.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   4410.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   4410.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
[   4410.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#43, concurrent=1)
[   4410.0] L Player_Event[0] - EventPlayASForTimeline (#73, concurrent=0)
[   4410.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#87, concurrent=0)
[   4410.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#100, concurrent=0)
[   4410.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 680.0
               EndBluarLevel: 2.0
               EndDistance: 0.49399998784065247
               EndFNumber: 180.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.49399998784065247
               StartFNumber: 180.0
[   4410.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
               duration: 680.0
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
[   4410.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#44, concurrent=1)
               duration: 680.0
               Near: 0.30000001192092896
[   4410.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#88, concurrent=0)
               duration: 680.0
               ASName: C12-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4503.0] L VoicePlayActor[0] - EventStartVoice (#61, concurrent=0)
[   4564.0] E VoicePlayActor[0] - EventStartVoice (#62, concurrent=0)
               duration: 207.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_013_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   4771.0] L VoicePlayActor[0] - EventStartVoice (#62, concurrent=0)
[   4818.0] E VoicePlayActor[0] - EventStartVoice (#63, concurrent=0)
               duration: 223.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_014_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   5041.0] L VoicePlayActor[0] - EventStartVoice (#63, concurrent=0)
[   5090.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   5090.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
[   5090.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#44, concurrent=1)
[   5090.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#88, concurrent=0)
[   5090.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 200.0
               EndBluarLevel: 1.0
               EndDistance: 2.5999999046325684
               EndFNumber: 8.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.5999999046325684
               StartFNumber: 8.0
[   5090.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
               duration: 200.0
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
[   5090.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#45, concurrent=1)
               duration: 200.0
               Near: 0.10000000149011612
[   5090.0] E VoicePlayActor[0] - EventStartVoice (#64, concurrent=0)
               duration: 304.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_017_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   5090.0] E Player_Event[0] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 200.0
               ASName: C14-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5090.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 200.0
               ASName: C14-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5090.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#101, concurrent=0)
               duration: 200.0
               ASName: C14-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5290.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
[   5290.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
[   5290.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#45, concurrent=1)
[   5290.0] L Player_Event[0] - EventPlayASForTimeline (#74, concurrent=0)
[   5290.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#89, concurrent=0)
[   5290.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#101, concurrent=0)
[   5290.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 220.0
               EndBluarLevel: 1.0
               EndDistance: 2.3499999046325684
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.3499999046325684
               StartFNumber: 50.0
[   5290.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
               duration: 220.0
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
[   5290.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#46, concurrent=1)
               duration: 399.0
               Near: 1.0
[   5290.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#90, concurrent=0)
               duration: 220.0
               ASName: C15-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5394.0] L VoicePlayActor[0] - EventStartVoice (#64, concurrent=0)
[   5441.0] E VoicePlayActor[0] - EventStartVoice (#65, concurrent=0)
               duration: 146.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Goron_0020:Dm_Goron_0020_Text_018_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   5510.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
[   5510.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
[   5510.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#90, concurrent=0)
[   5510.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 179.0
               EndBluarLevel: 2.0
               EndDistance: 7.5
               EndFNumber: 6.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 7.5
               StartFNumber: 6.0
[   5510.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
               duration: 179.0
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
[   5510.0] E Player_Event[0] - EventPlayASForTimeline (#75, concurrent=0)
               duration: 179.0
               ASName: C16-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5510.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#91, concurrent=0)
               duration: 179.0
               ASName: C16-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5510.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#102, concurrent=0)
               duration: 179.0
               ASName: C16-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5587.0] L VoicePlayActor[0] - EventStartVoice (#65, concurrent=0)
[   5589.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#2, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   5689.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#2, concurrent=0)
[   5689.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
[   5689.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
[   5689.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#46, concurrent=1)
[   5689.0] L Player_Event[0] - EventPlayASForTimeline (#75, concurrent=0)
[   5689.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#91, concurrent=0)
[   5689.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#102, concurrent=0)
[   5690.0] L Npc_Navi - EventGoOffstageForUser (#92, concurrent=0)
