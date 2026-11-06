-------- Event timeline: Dm_TimeTemple_0135 --------
actors: 14
clips: 206
oneshots: 0
cuts: 31
duration: 6769.0
subtimelines: ['Dm_TimeTemple_0135_Effect', 'Dm_TimeTemple_0135_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 411.0
x4: 0
params: (none)

Cut: cut03
start time: 639.0
x4: 0
params: (none)

Cut: cut04
start time: 1006.0
x4: 0
params: (none)

Cut: cut05
start time: 1093.0
x4: 0
params: (none)

Cut: cut06
start time: 1143.0
x4: 0
params: (none)

Cut: cut07
start time: 1189.0
x4: 0
params: (none)

Cut: cut08
start time: 1461.0
x4: 0
params: (none)

Cut: cut09
start time: 1704.0
x4: 0
params: (none)

Cut: cut10
start time: 1999.0
x4: 0
params: (none)

Cut: cut11
start time: 2394.0
x4: 0
params: (none)

Cut: cut12
start time: 2649.0
x4: 0
params: (none)

Cut: cut13
start time: 2850.0
x4: 0
params: (none)

Cut: cut14
start time: 2878.0
x4: 0
params: (none)

Cut: cut15
start time: 2995.0
x4: 0
params: (none)

Cut: cut16
start time: 3058.0
x4: 0
params: (none)

Cut: cut17
start time: 3150.0
x4: 0
params: (none)

Cut: cut18
start time: 3210.0
x4: 0
params: (none)

Cut: cut19
start time: 3247.0
x4: 0
params: (none)

Cut: cut20
start time: 3515.0
x4: 0
params: (none)

Cut: cut21
start time: 3820.0
x4: 0
params: (none)

Cut: cut22
start time: 4055.0
x4: 0
params: (none)

Cut: cut23
start time: 4267.0
x4: 0
params: (none)

Cut: cut24
start time: 4460.0
x4: 0
params: (none)

Cut: cut25
start time: 4759.0
x4: 0
params: (none)

Cut: cut26
start time: 5027.0
x4: 0
params: (none)

Cut: cut27
start time: 5079.0
x4: 0
params: (none)

Cut: cut28
start time: 5304.0
x4: 0
params: (none)

Cut: cut29
start time: 5689.0
x4: 0
params: (none)

Cut: cut30
start time: 5857.0
x4: 0
params: (none)

Cut: cut31
start time: 6434.0
x4: 0
params: (none)


===== Actors =====

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetWindForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

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

Actor: GameSystemActor[2]
concurrent clips: 1
actions: ['EventClothRequestExtraWind']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[3]
concurrent clips: 1
actions: ['EventClothRequestExtraWind']
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
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0135/Dm_TimeTemple_0135_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Zelda_Adult_Scalable[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0135/Dm_TimeTemple_0135_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Zelda_Adult[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_TimeTemple_0135.root.as
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0135/Dm_TimeTemple_0135_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml

Actor: Player_Event
concurrent clips: 4
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerPlayerRestoreBootsChange', 'EventTriggerEquipmentUserRequestChangeState']
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
UseEventAS: Work/AS/Root/Event/Dm_TimeTemple_0135.root.as
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0135/Dm_TimeTemple_0135_Player_Adult/workspace.pp__ModelProject.gyml

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

[      0.0] E EventWorldManagerController[1] - Event_SetWindForTimeline (#0, concurrent=0)
               duration: 6769.0
               Azimuth: 0.0
               Elevation: 0.0
               IsImmTrans: true
               IsWaitEnd: true
               Speed: 0.0
[      0.0] E Dm_Locator[0] - EventDoNothing (#1, concurrent=0)
               duration: 6769.0
               IsWaitEnd: true
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#2, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 411.0
               EndBluarLevel: 2.0
               EndDistance: 1.600000023841858
               EndFNumber: 125.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.600000023841858
               StartFNumber: 125.0
[      0.0] E GameSystemActor[2] - EventClothRequestExtraWind (#36, concurrent=0)
               duration: 1189.0
               ActorName: Npc_Hylia_Zelda_Adult
               Azimuth: 90.0
               Elevation: 0.0
               InstanceName: '0'
               IsWaitEnd: true
               Speed: 3.5
[      0.0] E GameSystemActor[3] - EventClothRequestExtraWind (#38, concurrent=0)
               duration: 3247.0
               ActorName: Player_Event
               Azimuth: 90.0
               Elevation: 0.0
               InstanceName: ''
               IsWaitEnd: true
               Speed: 3.5
[      0.0] E VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
               duration: 251.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_000_b
               OffsetFrame: 21
               Speaker: Npc_Hylia_Zelda_Adult
[      0.0] E Npc_Navi - EventGoOffstageForUser (#72, concurrent=0)
               duration: 6769.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#106, concurrent=0)
               duration: 411.0
               ASName: C01-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event - EventTriggerChemicalRequestDryTemporarily (#164, concurrent=1)
               duration: 100.0
[      0.0] E Player_Event - EventTriggerPlayerTemporaryBootsChange (#165, concurrent=2)
               duration: 100.0
               BootsType: 0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#168, concurrent=0)
               duration: 411.0
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
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#2, concurrent=0)
[    100.0] L Player_Event - EventTriggerChemicalRequestDryTemporarily (#164, concurrent=1)
[    100.0] L Player_Event - EventTriggerPlayerTemporaryBootsChange (#165, concurrent=2)
[    251.0] L VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
[    310.0] E VoicePlayActor[0] - EventStartVoice (#42, concurrent=0)
               duration: 99.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[    409.0] L VoicePlayActor[0] - EventStartVoice (#42, concurrent=0)
[    411.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    411.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#106, concurrent=0)
[    411.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#168, concurrent=0)
[    411.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 228.0
               EndBluarLevel: 1.5
               EndDistance: 10.0
               EndFNumber: 12.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 10.0
               StartFNumber: 12.5
[    411.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
               duration: 228.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    411.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#102, concurrent=0)
               duration: 228.0
               ASName: C02-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    411.0] E Player_Event - EventPlayASForTimeline (#135, concurrent=0)
               duration: 228.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    411.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#169, concurrent=0)
               duration: 228.0
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
[    622.0] E VoicePlayActor[0] - EventStartVoice (#43, concurrent=0)
               duration: 251.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[    639.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[    639.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
[    639.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#102, concurrent=0)
[    639.0] L Player_Event - EventPlayASForTimeline (#135, concurrent=0)
[    639.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#169, concurrent=0)
[    639.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 367.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 120.0
[    639.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 367.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    639.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#107, concurrent=0)
               duration: 367.0
               ASName: C03-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    639.0] E Player_Event - EventPlayASForTimeline (#136, concurrent=0)
               duration: 367.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    639.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#170, concurrent=0)
               duration: 367.0
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
[    873.0] L VoicePlayActor[0] - EventStartVoice (#43, concurrent=0)
[    976.0] E VoicePlayActor[0] - EventStartVoice (#44, concurrent=0)
               duration: 112.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1006.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1006.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
[   1006.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#107, concurrent=0)
[   1006.0] L Player_Event - EventPlayASForTimeline (#136, concurrent=0)
[   1006.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#170, concurrent=0)
[   1006.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 87.0
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
[   1006.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#108, concurrent=0)
               duration: 87.0
               ASName: C04-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1006.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#171, concurrent=0)
               duration: 87.0
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
[   1088.0] L VoicePlayActor[0] - EventStartVoice (#44, concurrent=0)
[   1088.0] E VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
               duration: 45.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_005_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1093.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   1093.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#108, concurrent=0)
[   1093.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#171, concurrent=0)
[   1093.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 30.0
               EndBluarLevel: 2.0
               EndDistance: 0.8399999737739563
               EndFNumber: 110.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.8399999737739563
               StartFNumber: 110.0
[   1093.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#75, concurrent=0)
               duration: 50.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1093.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#109, concurrent=0)
               duration: 50.0
               ASName: C05-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1093.0] E Player_Event - EventPlayASForTimeline (#137, concurrent=0)
               duration: 50.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1093.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#172, concurrent=0)
               duration: 50.0
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
[   1093.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#199, concurrent=1)
               duration: 50.0
               Near: 0.10000000149011612
[   1123.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   1123.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 20.0
               EndBluarLevel: 2.0
               EndDistance: 0.8399999737739563
               EndFNumber: 197.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.8399999737739563
               StartFNumber: 110.0
[   1133.0] L VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
[   1133.0] E VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
               duration: 54.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1143.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   1143.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#75, concurrent=0)
[   1143.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#109, concurrent=0)
[   1143.0] L Player_Event - EventPlayASForTimeline (#137, concurrent=0)
[   1143.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#172, concurrent=0)
[   1143.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#199, concurrent=1)
[   1143.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 46.0
               EndBluarLevel: 2.0
               EndDistance: 1.100000023841858
               EndFNumber: 115.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.100000023841858
               StartFNumber: 115.0
[   1143.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#76, concurrent=0)
               duration: 46.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1143.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#110, concurrent=0)
               duration: 46.0
               ASName: AS-C06-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1143.0] E Player_Event - EventPlayASForTimeline (#138, concurrent=0)
               duration: 46.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1143.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#173, concurrent=0)
               duration: 46.0
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
[   1143.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#200, concurrent=1)
               duration: 46.0
               Near: 0.10000000149011612
[   1187.0] L VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
[   1189.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   1189.0] L GameSystemActor[2] - EventClothRequestExtraWind (#36, concurrent=0)
[   1189.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#76, concurrent=0)
[   1189.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#110, concurrent=0)
[   1189.0] L Player_Event - EventPlayASForTimeline (#138, concurrent=0)
[   1189.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#173, concurrent=0)
[   1189.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#200, concurrent=1)
[   1189.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 272.0
               EndBluarLevel: 1.0
               EndDistance: 4.5
               EndFNumber: 740.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 4.5
               StartFNumber: 740.0
[   1189.0] E GameSystemActor[2] - EventClothRequestExtraWind (#37, concurrent=0)
               duration: 5245.0
               ActorName: Npc_Hylia_Zelda_Adult
               Azimuth: 0.0
               Elevation: 0.0
               InstanceName: '0'
               IsWaitEnd: true
               Speed: 0.0
[   1189.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#77, concurrent=0)
               duration: 272.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1189.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#103, concurrent=0)
               duration: 272.0
               ASName: C07-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1189.0] E Player_Event - EventPlayASForTimeline (#139, concurrent=0)
               duration: 272.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1189.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#174, concurrent=0)
               duration: 272.0
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
[   1189.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#201, concurrent=1)
               duration: 272.0
               Near: 0.10000000149011612
[   1245.0] E VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
               duration: 79.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_008_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1324.0] L VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
[   1324.0] E VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
               duration: 88.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1412.0] L VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
[   1448.0] E VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
               duration: 464.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_009_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   1461.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   1461.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#77, concurrent=0)
[   1461.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#103, concurrent=0)
[   1461.0] L Player_Event - EventPlayASForTimeline (#139, concurrent=0)
[   1461.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#174, concurrent=0)
[   1461.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#201, concurrent=1)
[   1461.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 243.0
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
[   1461.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#78, concurrent=0)
               duration: 243.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1461.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#111, concurrent=0)
               duration: 243.0
               ASName: C08-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1461.0] E Player_Event - EventPlayASForTimeline (#140, concurrent=0)
               duration: 243.0
               ASName: C08-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1461.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#175, concurrent=0)
               duration: 243.0
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
[   1502.0] E VoicePlayActor[1] - EventStartVoice (#68, concurrent=0)
               duration: 60.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   1562.0] L VoicePlayActor[1] - EventStartVoice (#68, concurrent=0)
[   1562.0] E VoicePlayActor[1] - EventStartVoice (#69, concurrent=0)
               duration: 88.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_011_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1650.0] L VoicePlayActor[1] - EventStartVoice (#69, concurrent=0)
[   1704.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   1704.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#78, concurrent=0)
[   1704.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#111, concurrent=0)
[   1704.0] L Player_Event - EventPlayASForTimeline (#140, concurrent=0)
[   1704.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#175, concurrent=0)
[   1704.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 295.0
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
[   1704.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#79, concurrent=0)
               duration: 295.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1704.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#112, concurrent=0)
               duration: 295.0
               ASName: C09-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1704.0] E Player_Event - EventPlayASForTimeline (#141, concurrent=0)
               duration: 295.0
               ASName: C09-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1704.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#176, concurrent=0)
               duration: 295.0
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
[   1912.0] L VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
[   1936.0] E VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
               duration: 456.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_012_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   1999.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   1999.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#79, concurrent=0)
[   1999.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#112, concurrent=0)
[   1999.0] L Player_Event - EventPlayASForTimeline (#141, concurrent=0)
[   1999.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#176, concurrent=0)
[   1999.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 395.0
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
[   1999.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#80, concurrent=0)
               duration: 395.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1999.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#113, concurrent=0)
               duration: 395.0
               ASName: C10-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1999.0] E Player_Event - EventPlayASForTimeline (#142, concurrent=0)
               duration: 395.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1999.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#177, concurrent=0)
               duration: 395.0
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
[   2392.0] L VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
[   2394.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   2394.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#80, concurrent=0)
[   2394.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#113, concurrent=0)
[   2394.0] L Player_Event - EventPlayASForTimeline (#142, concurrent=0)
[   2394.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#177, concurrent=0)
[   2394.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 255.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 84.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 84.0
[   2394.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#81, concurrent=0)
               duration: 255.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2394.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#114, concurrent=0)
               duration: 255.0
               ASName: C11-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2394.0] E Player_Event - EventPlayASForTimeline (#143, concurrent=0)
               duration: 255.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2394.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#178, concurrent=0)
               duration: 255.0
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
[   2494.0] E VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
               duration: 134.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_013_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   2628.0] L VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
[   2628.0] E VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
               duration: 195.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_014_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   2649.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   2649.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#81, concurrent=0)
[   2649.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#114, concurrent=0)
[   2649.0] L Player_Event - EventPlayASForTimeline (#143, concurrent=0)
[   2649.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#178, concurrent=0)
[   2649.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 201.0
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
[   2649.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#82, concurrent=0)
               duration: 201.0
               ASName: C12-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2649.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#115, concurrent=0)
               duration: 201.0
               ASName: C12-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2649.0] E Player_Event - EventPlayASForTimeline (#144, concurrent=0)
               duration: 201.0
               ASName: C12-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2649.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#179, concurrent=0)
               duration: 201.0
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
[   2649.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#202, concurrent=1)
               duration: 201.0
               Near: 0.10000000149011612
[   2823.0] L VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
[   2823.0] E VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
               duration: 54.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_015_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   2850.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   2850.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#82, concurrent=0)
[   2850.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#115, concurrent=0)
[   2850.0] L Player_Event - EventPlayASForTimeline (#144, concurrent=0)
[   2850.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#179, concurrent=0)
[   2850.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#202, concurrent=1)
[   2850.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 28.0
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
[   2850.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#83, concurrent=0)
               duration: 28.0
               ASName: C13-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2850.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#116, concurrent=0)
               duration: 28.0
               ASName: C13-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2850.0] E Player_Event - EventPlayASForTimeline (#145, concurrent=0)
               duration: 28.0
               ASName: C13-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2850.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#180, concurrent=0)
               duration: 28.0
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
[   2850.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#203, concurrent=1)
               duration: 28.0
               Near: 0.10000000149011612
[   2877.0] L VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
[   2877.0] E VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
               duration: 72.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_016_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2878.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   2878.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#83, concurrent=0)
[   2878.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#116, concurrent=0)
[   2878.0] L Player_Event - EventPlayASForTimeline (#145, concurrent=0)
[   2878.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#180, concurrent=0)
[   2878.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#203, concurrent=1)
[   2878.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 117.0
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
[   2878.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#84, concurrent=0)
               duration: 117.0
               ASName: C14-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2878.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#117, concurrent=0)
               duration: 117.0
               ASName: C14-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2878.0] E Player_Event - EventPlayASForTimeline (#146, concurrent=0)
               duration: 117.0
               ASName: C14-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2878.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#181, concurrent=0)
               duration: 117.0
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
[   2878.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#204, concurrent=1)
               duration: 117.0
               Near: 0.10000000149011612
[   2949.0] L VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
[   2995.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   2995.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#84, concurrent=0)
[   2995.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#117, concurrent=0)
[   2995.0] L Player_Event - EventPlayASForTimeline (#146, concurrent=0)
[   2995.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#181, concurrent=0)
[   2995.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#204, concurrent=1)
[   2995.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 63.0
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
[   2995.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#85, concurrent=0)
               duration: 63.0
               ASName: C15-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2995.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#118, concurrent=0)
               duration: 63.0
               ASName: C15-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2995.0] E Player_Event - EventPlayASForTimeline (#147, concurrent=0)
               duration: 63.0
               ASName: C15-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2995.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#182, concurrent=0)
               duration: 63.0
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
[   2995.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#205, concurrent=1)
               duration: 63.0
               Near: 0.10000000149011612
[   3045.0] E VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
               duration: 74.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_017_b
               OffsetFrame: 30
               Speaker: Player_Event
[   3058.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   3058.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#85, concurrent=0)
[   3058.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#118, concurrent=0)
[   3058.0] L Player_Event - EventPlayASForTimeline (#147, concurrent=0)
[   3058.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#182, concurrent=0)
[   3058.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#205, concurrent=1)
[   3058.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 92.0
               EndBluarLevel: 2.0
               EndDistance: 2.0
               EndFNumber: 105.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.0
               StartFNumber: 105.0
[   3058.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 92.0
               ASName: C16-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3058.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#104, concurrent=0)
               duration: 92.0
               ASName: C16-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3058.0] E Player_Event - EventPlayASForTimeline (#148, concurrent=0)
               duration: 92.0
               ASName: C16-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3058.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#183, concurrent=0)
               duration: 92.0
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
[   3119.0] L VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
[   3138.0] E VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
               duration: 70.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_018_b
               OffsetFrame: 30
               Speaker: Player_Event
[   3150.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   3150.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#86, concurrent=0)
[   3150.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#104, concurrent=0)
[   3150.0] L Player_Event - EventPlayASForTimeline (#148, concurrent=0)
[   3150.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#183, concurrent=0)
[   3150.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 60.0
               EndBluarLevel: 2.0
               EndDistance: 3.4000000953674316
               EndFNumber: 84.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.4000000953674316
               StartFNumber: 84.0
[   3150.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#87, concurrent=0)
               duration: 60.0
               ASName: C17-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3150.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#105, concurrent=0)
               duration: 60.0
               ASName: C17-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3150.0] E Player_Event - EventPlayASForTimeline (#149, concurrent=0)
               duration: 60.0
               ASName: AS-C17-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3150.0] E Player_Event - EventTriggerEquipmentUserRequestChangeState (#167, concurrent=3)
               duration: 3619.0
               DynamicEquipmentSlot: 0
               EquipmentState: 1
[   3150.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#184, concurrent=0)
               duration: 60.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C17-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3208.0] L VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
[   3210.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   3210.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#87, concurrent=0)
[   3210.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#105, concurrent=0)
[   3210.0] L Player_Event - EventPlayASForTimeline (#149, concurrent=0)
[   3210.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#184, concurrent=0)
[   3210.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 37.0
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
[   3210.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#88, concurrent=0)
               duration: 37.0
               ASName: C18-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3210.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#119, concurrent=0)
               duration: 37.0
               ASName: C18-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3210.0] E Player_Event - EventPlayASForTimeline (#150, concurrent=0)
               duration: 37.0
               ASName: C18-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3210.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#185, concurrent=0)
               duration: 37.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C18-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3217.0] E VoicePlayActor[0] - EventStartVoice (#57, concurrent=0)
               duration: 140.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_019_b
               OffsetFrame: 30
               Speaker: Player_Event
[   3247.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   3247.0] L GameSystemActor[3] - EventClothRequestExtraWind (#38, concurrent=0)
[   3247.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#88, concurrent=0)
[   3247.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#119, concurrent=0)
[   3247.0] L Player_Event - EventPlayASForTimeline (#150, concurrent=0)
[   3247.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#185, concurrent=0)
[   3247.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 268.0
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
[   3247.0] E GameSystemActor[3] - EventClothRequestExtraWind (#39, concurrent=0)
               duration: 2610.0
               ActorName: Player_Event
               Azimuth: 90.0
               Elevation: 0.0
               InstanceName: ''
               IsWaitEnd: true
               Speed: 15.0
[   3247.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 268.0
               ASName: C19-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3247.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#120, concurrent=0)
               duration: 268.0
               ASName: C19-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3247.0] E Player_Event - EventPlayASForTimeline (#151, concurrent=0)
               duration: 268.0
               ASName: C19-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3247.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#186, concurrent=0)
               duration: 268.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C19-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3357.0] L VoicePlayActor[0] - EventStartVoice (#57, concurrent=0)
[   3357.0] E VoicePlayActor[0] - EventStartVoice (#58, concurrent=0)
               duration: 434.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_020_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   3515.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   3515.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#89, concurrent=0)
[   3515.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#120, concurrent=0)
[   3515.0] L Player_Event - EventPlayASForTimeline (#151, concurrent=0)
[   3515.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#186, concurrent=0)
[   3515.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 305.0
               EndBluarLevel: 2.5
               EndDistance: 1.5
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 1.5
               StartFNumber: 80.0
[   3515.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#90, concurrent=0)
               duration: 305.0
               ASName: C20-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3515.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#121, concurrent=0)
               duration: 305.0
               ASName: C20-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3515.0] E Player_Event - EventPlayASForTimeline (#152, concurrent=0)
               duration: 305.0
               ASName: C20-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3515.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#187, concurrent=0)
               duration: 305.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C20-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3685.0] E VoicePlayActor[1] - EventStartVoice (#70, concurrent=0)
               duration: 133.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_021_b
               OffsetFrame: 30
               Speaker: Player_Event
[   3791.0] L VoicePlayActor[0] - EventStartVoice (#58, concurrent=0)
[   3818.0] L VoicePlayActor[1] - EventStartVoice (#70, concurrent=0)
[   3820.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
[   3820.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#90, concurrent=0)
[   3820.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#121, concurrent=0)
[   3820.0] L Player_Event - EventPlayASForTimeline (#152, concurrent=0)
[   3820.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#187, concurrent=0)
[   3820.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 235.0
               EndBluarLevel: 3.0
               EndDistance: 1.7999999523162842
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.7999999523162842
               StartFNumber: 80.0
[   3820.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#91, concurrent=0)
               duration: 235.0
               ASName: C21-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3820.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#122, concurrent=0)
               duration: 235.0
               ASName: C21-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3820.0] E Player_Event - EventPlayASForTimeline (#153, concurrent=0)
               duration: 235.0
               ASName: C21-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3820.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#188, concurrent=0)
               duration: 235.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C21-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3827.0] E VoicePlayActor[0] - EventStartVoice (#59, concurrent=0)
               duration: 402.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_022_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   4055.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
[   4055.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#91, concurrent=0)
[   4055.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#122, concurrent=0)
[   4055.0] L Player_Event - EventPlayASForTimeline (#153, concurrent=0)
[   4055.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#188, concurrent=0)
[   4055.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 212.0
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
[   4055.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#92, concurrent=0)
               duration: 212.0
               ASName: C22-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4055.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#123, concurrent=0)
               duration: 212.0
               ASName: AS-C22-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4055.0] E Player_Event - EventPlayASForTimeline (#154, concurrent=0)
               duration: 212.0
               ASName: C22-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4055.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#189, concurrent=0)
               duration: 212.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C22-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4229.0] L VoicePlayActor[0] - EventStartVoice (#59, concurrent=0)
[   4250.0] E VoicePlayActor[0] - EventStartVoice (#60, concurrent=0)
               duration: 59.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_023_b
               OffsetFrame: 30
               Speaker: Player_Event
[   4267.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
[   4267.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#92, concurrent=0)
[   4267.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#123, concurrent=0)
[   4267.0] L Player_Event - EventPlayASForTimeline (#154, concurrent=0)
[   4267.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#189, concurrent=0)
[   4267.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
               duration: 193.0
               EndBluarLevel: 1.0
               EndDistance: 3.5
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.5
               StartFNumber: 80.0
[   4267.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#93, concurrent=0)
               duration: 193.0
               ASName: C23-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4267.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#124, concurrent=0)
               duration: 193.0
               ASName: C23-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4267.0] E Player_Event - EventPlayASForTimeline (#155, concurrent=0)
               duration: 193.0
               ASName: C23-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4267.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#190, concurrent=0)
               duration: 193.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C23-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4309.0] L VoicePlayActor[0] - EventStartVoice (#60, concurrent=0)
[   4335.0] E VoicePlayActor[0] - EventStartVoice (#61, concurrent=0)
               duration: 417.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_024_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   4460.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
[   4460.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#93, concurrent=0)
[   4460.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#124, concurrent=0)
[   4460.0] L Player_Event - EventPlayASForTimeline (#155, concurrent=0)
[   4460.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#190, concurrent=0)
[   4460.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 299.0
               EndBluarLevel: 3.0
               EndDistance: 3.5
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 3.5
               StartFNumber: 80.0
[   4460.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#94, concurrent=0)
               duration: 299.0
               ASName: C24-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4460.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#125, concurrent=0)
               duration: 299.0
               ASName: AS-C24-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4460.0] E Player_Event - EventPlayASForTimeline (#156, concurrent=0)
               duration: 299.0
               ASName: C24-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4460.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#191, concurrent=0)
               duration: 299.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C24-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4752.0] L VoicePlayActor[0] - EventStartVoice (#61, concurrent=0)
[   4752.0] E VoicePlayActor[0] - EventStartVoice (#62, concurrent=0)
               duration: 244.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_025_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   4759.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
[   4759.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#94, concurrent=0)
[   4759.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#125, concurrent=0)
[   4759.0] L Player_Event - EventPlayASForTimeline (#156, concurrent=0)
[   4759.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#191, concurrent=0)
[   4759.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 268.0
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
[   4759.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#95, concurrent=0)
               duration: 268.0
               ASName: C25-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4759.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#126, concurrent=0)
               duration: 268.0
               ASName: C25-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4759.0] E Player_Event - EventPlayASForTimeline (#157, concurrent=0)
               duration: 268.0
               ASName: C25-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4759.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#192, concurrent=0)
               duration: 268.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C25-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   4996.0] L VoicePlayActor[0] - EventStartVoice (#62, concurrent=0)
[   4997.0] E VoicePlayActor[0] - EventStartVoice (#63, concurrent=0)
               duration: 80.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_026_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   5027.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
[   5027.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#95, concurrent=0)
[   5027.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#126, concurrent=0)
[   5027.0] L Player_Event - EventPlayASForTimeline (#157, concurrent=0)
[   5027.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#192, concurrent=0)
[   5027.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 52.0
               EndBluarLevel: 2.5
               EndDistance: 2.0
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 2.0
               StartFNumber: 80.0
[   5027.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#96, concurrent=0)
               duration: 52.0
               ASName: C26-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5027.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#127, concurrent=0)
               duration: 52.0
               ASName: C26-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5027.0] E Player_Event - EventPlayASForTimeline (#158, concurrent=0)
               duration: 52.0
               ASName: C26-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5027.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#193, concurrent=0)
               duration: 52.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C26-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5077.0] L VoicePlayActor[0] - EventStartVoice (#63, concurrent=0)
[   5079.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
[   5079.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#96, concurrent=0)
[   5079.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#127, concurrent=0)
[   5079.0] L Player_Event - EventPlayASForTimeline (#158, concurrent=0)
[   5079.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#193, concurrent=0)
[   5079.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 225.0
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
[   5079.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#97, concurrent=0)
               duration: 225.0
               ASName: C27-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5079.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#128, concurrent=0)
               duration: 225.0
               ASName: AS-C27-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5079.0] E Player_Event - EventPlayASForTimeline (#159, concurrent=0)
               duration: 225.0
               ASName: C27-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5079.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#194, concurrent=0)
               duration: 225.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C27-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5091.0] E VoicePlayActor[1] - EventStartVoice (#71, concurrent=0)
               duration: 208.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_027_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   5289.0] E VoicePlayActor[0] - EventStartVoice (#64, concurrent=0)
               duration: 245.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_028_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   5299.0] L VoicePlayActor[1] - EventStartVoice (#71, concurrent=0)
[   5304.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
[   5304.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#97, concurrent=0)
[   5304.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#128, concurrent=0)
[   5304.0] L Player_Event - EventPlayASForTimeline (#159, concurrent=0)
[   5304.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#194, concurrent=0)
[   5304.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 385.0
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
[   5304.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#98, concurrent=0)
               duration: 385.0
               ASName: C28-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5304.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#129, concurrent=0)
               duration: 385.0
               ASName: AS-C28-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5304.0] E Player_Event - EventPlayASForTimeline (#160, concurrent=0)
               duration: 385.0
               ASName: C28-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5304.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#195, concurrent=0)
               duration: 385.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C28-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5534.0] L VoicePlayActor[0] - EventStartVoice (#64, concurrent=0)
[   5534.0] E VoicePlayActor[0] - EventStartVoice (#65, concurrent=0)
               duration: 125.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_029_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   5659.0] L VoicePlayActor[0] - EventStartVoice (#65, concurrent=0)
[   5659.0] E VoicePlayActor[0] - EventStartVoice (#66, concurrent=0)
               duration: 188.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_027_d
               OffsetFrame: 30
               Speaker: Npc_Navi
[   5689.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
[   5689.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#98, concurrent=0)
[   5689.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#129, concurrent=0)
[   5689.0] L Player_Event - EventPlayASForTimeline (#160, concurrent=0)
[   5689.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#195, concurrent=0)
[   5689.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 168.0
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
[   5689.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#99, concurrent=0)
               duration: 168.0
               ASName: C29-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5689.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#130, concurrent=0)
               duration: 168.0
               ASName: C29-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5689.0] E Player_Event - EventPlayASForTimeline (#161, concurrent=0)
               duration: 168.0
               ASName: C29-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5689.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#196, concurrent=0)
               duration: 168.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C29-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   5847.0] L VoicePlayActor[0] - EventStartVoice (#66, concurrent=0)
[   5847.0] E VoicePlayActor[0] - EventStartVoice (#67, concurrent=0)
               duration: 384.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0135:Dm_TimeTemple_0135_Text_030_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Gerudo_Ganondorf
[   5857.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
[   5857.0] L GameSystemActor[3] - EventClothRequestExtraWind (#39, concurrent=0)
[   5857.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#99, concurrent=0)
[   5857.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#130, concurrent=0)
[   5857.0] L Player_Event - EventPlayASForTimeline (#161, concurrent=0)
[   5857.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#196, concurrent=0)
[   5857.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 577.0
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
[   5857.0] E GameSystemActor[3] - EventClothRequestExtraWind (#40, concurrent=0)
               duration: 912.0
               ActorName: Player_Event
               Azimuth: 90.0
               Elevation: 0.0
               InstanceName: ''
               IsWaitEnd: true
               Speed: 3.5
[   5857.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#100, concurrent=0)
               duration: 577.0
               ASName: C30-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5857.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#131, concurrent=0)
               duration: 356.0
               ASName: AS-C30-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5857.0] E Player_Event - EventPlayASForTimeline (#162, concurrent=0)
               duration: 577.0
               ASName: C30-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5857.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#197, concurrent=0)
               duration: 577.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C30-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6213.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#131, concurrent=0)
[   6213.0] E Npc_Hylia_Zelda_Adult[0] - EventGoOffstageForUser (#132, concurrent=0)
               duration: 221.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   6231.0] L VoicePlayActor[0] - EventStartVoice (#67, concurrent=0)
[   6434.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
[   6434.0] L GameSystemActor[2] - EventClothRequestExtraWind (#37, concurrent=0)
[   6434.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#100, concurrent=0)
[   6434.0] L Npc_Hylia_Zelda_Adult[0] - EventGoOffstageForUser (#132, concurrent=0)
[   6434.0] L Player_Event - EventPlayASForTimeline (#162, concurrent=0)
[   6434.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#197, concurrent=0)
[   6434.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#35, concurrent=0)
               duration: 335.0
               EndBluarLevel: 2.0
               EndDistance: 1.5
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.5
               StartFNumber: 30.0
[   6434.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#101, concurrent=0)
               duration: 335.0
               ASName: C31-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6434.0] E Npc_Hylia_Zelda_Adult[0] - EventGoOffstageForUser (#133, concurrent=0)
               duration: 335.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   6434.0] E Npc_Hylia_Zelda_Adult[0] - EventGoOffstageForUser (#134, concurrent=1)
               duration: 335.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   6434.0] E Player_Event - EventPlayASForTimeline (#163, concurrent=0)
               duration: 335.0
               ASName: C31-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6434.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#198, concurrent=0)
               duration: 335.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C31-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6709.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#3, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   6768.0] E Player_Event - EventTriggerPlayerRestoreBootsChange (#166, concurrent=2)
               duration: 1.0
[   6769.0] L EventWorldManagerController[1] - Event_SetWindForTimeline (#0, concurrent=0)
[   6769.0] L Dm_Locator[0] - EventDoNothing (#1, concurrent=0)
[   6769.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#3, concurrent=0)
[   6769.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#35, concurrent=0)
[   6769.0] L GameSystemActor[3] - EventClothRequestExtraWind (#40, concurrent=0)
[   6769.0] L Npc_Navi - EventGoOffstageForUser (#72, concurrent=0)
[   6769.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#101, concurrent=0)
[   6769.0] L Npc_Hylia_Zelda_Adult[0] - EventGoOffstageForUser (#133, concurrent=0)
[   6769.0] L Npc_Hylia_Zelda_Adult[0] - EventGoOffstageForUser (#134, concurrent=1)
[   6769.0] L Player_Event - EventPlayASForTimeline (#163, concurrent=0)
[   6769.0] L Player_Event - EventTriggerPlayerRestoreBootsChange (#166, concurrent=2)
[   6769.0] L Player_Event - EventTriggerEquipmentUserRequestChangeState (#167, concurrent=3)
[   6769.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#198, concurrent=0)
