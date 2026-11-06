-------- Event timeline: Dm_TimeTemple_0110 --------
actors: 12
clips: 102
oneshots: 0
cuts: 21
duration: 6570.0
subtimelines: ['Dm_TimeTemple_0110_Effect', 'Dm_TimeTemple_0110_Env']
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 291.0
x4: 0
params: (none)

Cut: cut03
start time: 552.0
x4: 0
params: (none)

Cut: cut04
start time: 739.0
x4: 0
params: (none)

Cut: cut05
start time: 904.0
x4: 0
params: (none)

Cut: cut06
start time: 1392.0
x4: 0
params: (none)

Cut: cut07
start time: 1982.0
x4: 0
params: (none)

Cut: cut08
start time: 2212.0
x4: 0
params: (none)

Cut: cut09
start time: 2453.0
x4: 0
params: (none)

Cut: cut10
start time: 2583.0
x4: 0
params: (none)

Cut: cut11
start time: 2700.0
x4: 0
params: (none)

Cut: cut12
start time: 2788.0
x4: 0
params: (none)

Cut: cut13
start time: 3001.0
x4: 0
params: (none)

Cut: cut14
start time: 3097.0
x4: 0
params: (none)

Cut: cut15
start time: 3454.0
x4: 0
params: (none)

Cut: cut16
start time: 3623.0
x4: 0
params: (none)

Cut: cut17
start time: 3800.0
x4: 0
params: (none)

Cut: cut18
start time: 4374.0
x4: 0
params: (none)

Cut: cut19
start time: 4748.0
x4: 0
params: (none)

Cut: cut20
start time: 5230.0
x4: 0
params: (none)

Cut: cut21
start time: 5900.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
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
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
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

Actor: Npc_Hylia_Zelda_Adult_Scalable[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_TimeTemple_0110_Npc_Hylia_WU_Zelda_Adult_Rig.root.as
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0110/Dm_TimeTemple_0110_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Zelda_Adult[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_TimeTemple_0110_Npc_Hylia_WU_Zelda_Adult_Rig.root.as
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0110/Dm_TimeTemple_0110_Npc_Hylia_WU_Zelda_Adult/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0110/Dm_TimeTemple_0110_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerPlayerRestoreBootsChange']
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
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0110/Dm_TimeTemple_0110_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Sheik_Adult[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0110/Dm_TimeTemple_0110_Npc_Hylia_WU_Sheik/workspace.pp__ModelProject.gyml

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: ''
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E Dm_Locator[0] - EventDoNothing (#0, concurrent=0)
               duration: 1982.0
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
               duration: 291.0
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
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#24, concurrent=0)
               duration: 41.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Npc_Navi - EventGoOffstageForUser (#47, concurrent=0)
               duration: 6570.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 291.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#56, concurrent=0)
               duration: 291.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#64, concurrent=1)
               duration: 100.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#66, concurrent=2)
               duration: 100.0
[      0.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 291.0
               ASName: C01-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#79, concurrent=0)
               duration: 291.0
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
[     11.0] E VoicePlayActor[0] - EventStartVoice (#26, concurrent=0)
               duration: 539.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[     41.0] L UISystemActor[0] - EventEventFadeInForTimeline (#24, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#64, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#66, concurrent=2)
[    291.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
[    291.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#48, concurrent=0)
[    291.0] L Player_Event[0] - EventPlayASForTimeline (#56, concurrent=0)
[    291.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#67, concurrent=0)
[    291.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#79, concurrent=0)
[    291.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 261.0
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
[    291.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#80, concurrent=0)
               duration: 261.0
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
[    550.0] L VoicePlayActor[0] - EventStartVoice (#26, concurrent=0)
[    552.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    552.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#80, concurrent=0)
[    552.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 187.0
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
[    552.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#68, concurrent=0)
               duration: 187.0
               ASName: C03-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    552.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#81, concurrent=0)
               duration: 187.0
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
[    552.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#100, concurrent=1)
               duration: 187.0
               Near: 0.10000000149011612
[    574.0] E VoicePlayActor[0] - EventStartVoice (#27, concurrent=0)
               duration: 285.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[    739.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    739.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#68, concurrent=0)
[    739.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#81, concurrent=0)
[    739.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#100, concurrent=1)
[    739.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 165.0
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
[    739.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#69, concurrent=0)
               duration: 165.0
               ASName: C04-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    739.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#82, concurrent=0)
               duration: 165.0
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
[    859.0] L VoicePlayActor[0] - EventStartVoice (#27, concurrent=0)
[    904.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    904.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#69, concurrent=0)
[    904.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#82, concurrent=0)
[    904.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 488.0
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
[    904.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 488.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    904.0] E Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
               duration: 488.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    904.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#70, concurrent=0)
               duration: 488.0
               ASName: C05-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    904.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#83, concurrent=0)
               duration: 488.0
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
[    906.0] E VoicePlayActor[0] - EventStartVoice (#28, concurrent=0)
               duration: 484.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   1390.0] L VoicePlayActor[0] - EventStartVoice (#28, concurrent=0)
[   1392.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   1392.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#49, concurrent=0)
[   1392.0] L Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
[   1392.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#70, concurrent=0)
[   1392.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#83, concurrent=0)
[   1392.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 590.0
               EndBluarLevel: 0.0
               EndDistance: 2.0
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.0
               StartFNumber: 70.0
[   1392.0] E VoicePlayActor[0] - EventStartVoice (#29, concurrent=0)
               duration: 178.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_003_c
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   1392.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 590.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1392.0] E Player_Event[0] - EventPlayASForTimeline (#58, concurrent=0)
               duration: 590.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1392.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#84, concurrent=0)
               duration: 590.0
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
[   1570.0] L VoicePlayActor[0] - EventStartVoice (#29, concurrent=0)
[   1572.0] E VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
               duration: 146.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_003_d
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   1718.0] L VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
[   1718.0] E VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
               duration: 128.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_003_e
               OffsetFrame: 30
               Speaker: Player_Adult
[   1846.0] L VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
[   1980.0] E VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
               duration: 172.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_004_d
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   1982.0] L Dm_Locator[0] - EventDoNothing (#0, concurrent=0)
[   1982.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1982.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#50, concurrent=0)
[   1982.0] L Player_Event[0] - EventPlayASForTimeline (#58, concurrent=0)
[   1982.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#84, concurrent=0)
[   1982.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 230.0
               EndBluarLevel: 1.600000023841858
               EndDistance: 1.4299999475479126
               EndFNumber: 50.599998474121094
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.600000023841858
               StartDistance: 1.4299999475479126
               StartFNumber: 50.599998474121094
[   1982.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#71, concurrent=0)
               duration: 230.0
               ASName: C07-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1982.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#85, concurrent=0)
               duration: 230.0
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
[   2152.0] L VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
[   2212.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   2212.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#71, concurrent=0)
[   2212.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#85, concurrent=0)
[   2212.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 241.0
               EndBluarLevel: 3.299999952316284
               EndDistance: 9.569999694824219
               EndFNumber: 260.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.299999952316284
               StartDistance: 9.569999694824219
               StartFNumber: 260.0
[   2212.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#72, concurrent=0)
               duration: 241.0
               ASName: C08-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2212.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#86, concurrent=0)
               duration: 241.0
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
[   2212.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#101, concurrent=1)
               duration: 241.0
               Near: 0.10000000149011612
[   2224.0] E VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
               duration: 172.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_004_e
               OffsetFrame: 30
               Speaker: Npc_Hylia_Sheik_Adult
[   2396.0] L VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
[   2453.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   2453.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#72, concurrent=0)
[   2453.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#86, concurrent=0)
[   2453.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#101, concurrent=1)
[   2453.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 130.0
               EndBluarLevel: 2.0
               EndDistance: 1.9199999570846558
               EndFNumber: 90.4000015258789
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.9199999570846558
               StartFNumber: 90.4000015258789
[   2453.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#73, concurrent=0)
               duration: 130.0
               ASName: C09-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2453.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#87, concurrent=0)
               duration: 130.0
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
[   2583.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   2583.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#73, concurrent=0)
[   2583.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#87, concurrent=0)
[   2583.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 117.0
               EndBluarLevel: 3.0
               EndDistance: 1.6299999952316284
               EndFNumber: 373.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.6299999952316284
               StartFNumber: 373.0
[   2583.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 117.0
               ASName: C10-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2583.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#88, concurrent=0)
               duration: 117.0
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
[   2700.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   2700.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#74, concurrent=0)
[   2700.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#88, concurrent=0)
[   2700.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 88.0
               EndBluarLevel: 2.0
               EndDistance: 5.650000095367432
               EndFNumber: 184.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.650000095367432
               StartFNumber: 184.0
[   2700.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#75, concurrent=0)
               duration: 88.0
               ASName: C11-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2700.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#89, concurrent=0)
               duration: 88.0
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
[   2788.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   2788.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#75, concurrent=0)
[   2788.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#89, concurrent=0)
[   2788.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 213.0
               EndBluarLevel: 2.0
               EndDistance: 2.5799999237060547
               EndFNumber: 138.1999969482422
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.5799999237060547
               StartFNumber: 138.1999969482422
[   2788.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#76, concurrent=0)
               duration: 213.0
               ASName: C12-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2788.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#90, concurrent=0)
               duration: 213.0
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
[   2983.0] E VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
               duration: 74.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_005_b
               OffsetFrame: 30
               Speaker: Player_Adult
[   3001.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   3001.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#76, concurrent=0)
[   3001.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#90, concurrent=0)
[   3001.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 96.0
               EndBluarLevel: 2.0
               EndDistance: 9.569999694824219
               EndFNumber: 260.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 9.569999694824219
               StartFNumber: 260.0
[   3001.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 96.0
               ASName: C13-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3001.0] E Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
               duration: 96.0
               ASName: C13-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3001.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#91, concurrent=0)
               duration: 96.0
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
[   3057.0] L VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
[   3097.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   3097.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#51, concurrent=0)
[   3097.0] L Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
[   3097.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#91, concurrent=0)
[   3097.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 110.0
               EndBluarLevel: 3.0
               EndDistance: 9.569999694824219
               EndFNumber: 260.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 9.569999694824219
               StartFNumber: 260.0
[   3097.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#77, concurrent=0)
               duration: 357.0
               ASName: C14-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3097.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#92, concurrent=0)
               duration: 357.0
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
[   3207.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   3207.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 123.0
               EndBluarLevel: 3.0
               EndDistance: 1.3600000143051147
               EndFNumber: 130.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 9.569999694824219
               StartFNumber: 260.0
[   3330.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   3330.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 124.0
               EndBluarLevel: 3.0
               EndDistance: 1.3600000143051147
               EndFNumber: 130.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.3600000143051147
               StartFNumber: 130.0
[   3454.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   3454.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#77, concurrent=0)
[   3454.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#92, concurrent=0)
[   3454.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 169.0
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
[   3454.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 169.0
               ASName: C15-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3454.0] E Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
               duration: 169.0
               ASName: C15-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3454.0] E Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#78, concurrent=0)
               duration: 169.0
               ASName: C15-Npc_Hylia_WU_Sheik-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3454.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#93, concurrent=0)
               duration: 169.0
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
[   3623.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   3623.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#52, concurrent=0)
[   3623.0] L Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
[   3623.0] L Npc_Hylia_Sheik_Adult[0] - EventPlayASForTimeline (#78, concurrent=0)
[   3623.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#93, concurrent=0)
[   3623.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 177.0
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
[   3623.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 177.0
               ASName: C16-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3623.0] E Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
               duration: 177.0
               ASName: C16-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3623.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#94, concurrent=0)
               duration: 177.0
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
[   3699.0] E VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
               duration: 92.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_006_b
               OffsetFrame: 30
               Speaker: Player_Adult
[   3791.0] L VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
[   3800.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   3800.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#53, concurrent=0)
[   3800.0] L Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
[   3800.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#94, concurrent=0)
[   3800.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 574.0
               EndBluarLevel: 2.0
               EndDistance: 2.2100000381469727
               EndFNumber: 43.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.2100000381469727
               StartFNumber: 43.5
[   3800.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 574.0
               ASName: C17-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3800.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#95, concurrent=0)
               duration: 574.0
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
[   4374.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   4374.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#43, concurrent=0)
[   4374.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#95, concurrent=0)
[   4374.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 374.0
               EndBluarLevel: 3.0
               EndDistance: 1.6399999856948853
               EndFNumber: 125.80000305175781
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.6399999856948853
               StartFNumber: 125.80000305175781
[   4374.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 374.0
               ASName: C18-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4374.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#96, concurrent=0)
               duration: 374.0
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
[   4491.0] E VoicePlayActor[0] - EventStartVoice (#36, concurrent=0)
               duration: 255.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   4746.0] L VoicePlayActor[0] - EventStartVoice (#36, concurrent=0)
[   4748.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   4748.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#44, concurrent=0)
[   4748.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#96, concurrent=0)
[   4748.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 482.0
               EndBluarLevel: 2.0
               EndDistance: 2.759999990463257
               EndFNumber: 33.70000076293945
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.759999990463257
               StartFNumber: 33.70000076293945
[   4748.0] E Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 482.0
               ASName: AS-C19-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4748.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#54, concurrent=0)
               duration: 482.0
               ASName: C19-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4748.0] E Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
               duration: 482.0
               ASName: C19-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4748.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#97, concurrent=0)
               duration: 482.0
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
[   4898.0] E VoicePlayActor[0] - EventStartVoice (#37, concurrent=0)
               duration: 170.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   5068.0] L VoicePlayActor[0] - EventStartVoice (#37, concurrent=0)
[   5068.0] E VoicePlayActor[0] - EventStartVoice (#38, concurrent=0)
               duration: 345.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   5230.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   5230.0] L Npc_Hylia_Zelda_Adult_Scalable[0] - EventPlayASForTimeline (#42, concurrent=0)
[   5230.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#54, concurrent=0)
[   5230.0] L Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
[   5230.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#97, concurrent=0)
[   5230.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 670.0
               EndBluarLevel: 1.3899999856948853
               EndDistance: 3.0
               EndFNumber: 54.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.3899999856948853
               StartDistance: 3.0
               StartFNumber: 54.0
[   5230.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 670.0
               ASName: AS-C20-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5230.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#55, concurrent=0)
               duration: 670.0
               ASName: C20-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5230.0] E Player_Event[0] - EventPlayASForTimeline (#63, concurrent=0)
               duration: 670.0
               ASName: C20-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5230.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#98, concurrent=0)
               duration: 670.0
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
[   5413.0] L VoicePlayActor[0] - EventStartVoice (#38, concurrent=0)
[   5518.0] E VoicePlayActor[0] - EventStartVoice (#39, concurrent=0)
               duration: 380.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   5800.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#65, concurrent=1)
               duration: 100.0
[   5898.0] L VoicePlayActor[0] - EventStartVoice (#39, concurrent=0)
[   5900.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   5900.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#45, concurrent=0)
[   5900.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#55, concurrent=0)
[   5900.0] L Player_Event[0] - EventPlayASForTimeline (#63, concurrent=0)
[   5900.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#65, concurrent=1)
[   5900.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#98, concurrent=0)
[   5900.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 670.0
               EndBluarLevel: 3.0
               EndDistance: 1.3300000429153442
               EndFNumber: 125.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 1.3300000429153442
               StartFNumber: 125.0
[   5900.0] E Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 670.0
               ASName: AS-C21-Npc_Hylia_WU_Zelda_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5900.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#99, concurrent=0)
               duration: 670.0
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
[   6128.0] E VoicePlayActor[0] - EventStartVoice (#40, concurrent=0)
               duration: 76.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   6204.0] L VoicePlayActor[0] - EventStartVoice (#40, concurrent=0)
[   6226.0] E VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
               duration: 284.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0110:Dm_TimeTemple_0110_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Adult
[   6510.0] L VoicePlayActor[0] - EventStartVoice (#41, concurrent=0)
[   6510.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#25, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   6570.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   6570.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#25, concurrent=0)
[   6570.0] L Npc_Hylia_Zelda_Adult[0] - EventPlayASForTimeline (#46, concurrent=0)
[   6570.0] L Npc_Navi - EventGoOffstageForUser (#47, concurrent=0)
[   6570.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#99, concurrent=0)
