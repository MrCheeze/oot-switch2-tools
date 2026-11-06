-------- Event timeline: Dm_WaterTemple_0010 --------
actors: 9
clips: 49
oneshots: 0
cuts: 6
duration: 2392.0
subtimelines: ['Dm_WaterTemple_0010_Effect', 'Dm_WaterTemple_0010_Env']
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 497.0
x4: 0
params: (none)

Cut: cut03
start time: 797.0
x4: 0
params: (none)

Cut: cut04
start time: 987.0
x4: 0
params: (none)

Cut: cut05
start time: 1489.0
x4: 0
params: (none)

Cut: cut06
start time: 1809.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor
concurrent clips: 1
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
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
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_0010/Dm_WaterTemple_0010_Npc_Navi/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_0010/Dm_WaterTemple_0010_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Zora_Ruto_Adult_001[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_WaterTemple_0010_Npc_Zora_ZU_Ruto_Adult.root.as
UseEventModelAnime: Work/Model/Event/Dm_WaterTemple_0010/Dm_WaterTemple_0010_Npc_Zora_ZU_Ruto_Adult/workspace.pp__ModelProject.gyml

Actor: VoicePlayActor[0]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventCamera[1]
concurrent clips: 1
actions: ['EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#0, concurrent=0)
               duration: 497.0
               EndBluarLevel: 0.4000000059604645
               EndDistance: 0.0
               EndFNumber: 0.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.4000000059604645
               StartDistance: 0.0
               StartFNumber: 0.0
[      0.0] E UISystemActor - EventEventFadeInForTimeline (#6, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Npc_Navi - EventGoOffstageForUser (#8, concurrent=0)
               duration: 2392.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#9, concurrent=0)
               duration: 497.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#15, concurrent=0)
               duration: 497.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#21, concurrent=1)
               duration: 100.0
               BootsType: 1
[      0.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#24, concurrent=0)
               duration: 497.0
               ASName: AS-C01-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#37, concurrent=0)
               duration: 497.0
               Near: 0.10000000149011612
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
               duration: 497.0
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
[    100.0] L UISystemActor - EventEventFadeInForTimeline (#6, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#21, concurrent=1)
[    173.0] E VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
               duration: 117.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_WaterTemple_0010:Dm_WaterTemple_0010_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[    290.0] L VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
[    497.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#0, concurrent=0)
[    497.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#9, concurrent=0)
[    497.0] L Player_Event[0] - EventPlayASForTimeline (#15, concurrent=0)
[    497.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#24, concurrent=0)
[    497.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#37, concurrent=0)
[    497.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
[    497.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
               duration: 300.0
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
[    497.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#10, concurrent=0)
               duration: 300.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    497.0] E Player_Event[0] - EventPlayASForTimeline (#16, concurrent=0)
               duration: 300.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    497.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#25, concurrent=0)
               duration: 300.0
               ASName: C02-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    497.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#38, concurrent=0)
               duration: 300.0
               Near: 0.10000000149011612
[    497.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
               duration: 300.0
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
[    536.0] E VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
               duration: 63.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_WaterTemple_0010:Dm_WaterTemple_0010_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[    599.0] L VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
[    599.0] E VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
               duration: 163.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_WaterTemple_0010:Dm_WaterTemple_0010_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[    762.0] L VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
[    797.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#1, concurrent=0)
[    797.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#10, concurrent=0)
[    797.0] L Player_Event[0] - EventPlayASForTimeline (#16, concurrent=0)
[    797.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#25, concurrent=0)
[    797.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#38, concurrent=0)
[    797.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
[    797.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 190.0
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
[    797.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#11, concurrent=0)
               duration: 190.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    797.0] E Player_Event[0] - EventPlayASForTimeline (#17, concurrent=0)
               duration: 190.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    797.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 190.0
               ASName: C03-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    797.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#39, concurrent=0)
               duration: 190.0
               Near: 1.0
[    797.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
               duration: 190.0
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
[    987.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    987.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#11, concurrent=0)
[    987.0] L Player_Event[0] - EventPlayASForTimeline (#17, concurrent=0)
[    987.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#26, concurrent=0)
[    987.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#39, concurrent=0)
[    987.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
[    987.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 502.0
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
[    987.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#12, concurrent=0)
               duration: 502.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    987.0] E Player_Event[0] - EventPlayASForTimeline (#18, concurrent=0)
               duration: 502.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    987.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 502.0
               ASName: C04-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    987.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#40, concurrent=0)
               duration: 502.0
               Near: 0.4000000059604645
[    987.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
               duration: 502.0
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
[   1125.0] E VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
               duration: 210.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_WaterTemple_0010:Dm_WaterTemple_0010_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   1335.0] L VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
[   1388.0] E VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
               duration: 99.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_WaterTemple_0010:Dm_WaterTemple_0010_Text_003_c
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   1487.0] L VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
[   1489.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[   1489.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#12, concurrent=0)
[   1489.0] L Player_Event[0] - EventPlayASForTimeline (#18, concurrent=0)
[   1489.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#27, concurrent=0)
[   1489.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#40, concurrent=0)
[   1489.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
[   1489.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 320.0
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
[   1489.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#13, concurrent=0)
               duration: 320.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1489.0] E Player_Event[0] - EventPlayASForTimeline (#19, concurrent=0)
               duration: 320.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1489.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 320.0
               ASName: C05-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1489.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#41, concurrent=0)
               duration: 320.0
               Near: 0.4000000059604645
[   1489.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
               duration: 320.0
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
[   1574.0] E VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
               duration: 124.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_WaterTemple_0010:Dm_WaterTemple_0010_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   1698.0] L VoicePlayActor[0] - EventStartVoice (#35, concurrent=0)
[   1809.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   1809.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#13, concurrent=0)
[   1809.0] L Player_Event[0] - EventPlayASForTimeline (#19, concurrent=0)
[   1809.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#28, concurrent=0)
[   1809.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#41, concurrent=0)
[   1809.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
[   1809.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 583.0
               EndBluarLevel: 3.0
               EndDistance: 4.0
               EndFNumber: 58.20000076293945
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 4.0
               StartFNumber: 58.20000076293945
[   1809.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#14, concurrent=0)
               duration: 583.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1809.0] E Player_Event[0] - EventPlayASForTimeline (#20, concurrent=0)
               duration: 583.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1809.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#22, concurrent=1)
               duration: 100.0
[   1809.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 583.0
               ASName: C06-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1809.0] E EventCamera[1] - EventSetNearCurrentCameraAnimation (#42, concurrent=0)
               duration: 583.0
               Near: 0.4000000059604645
[   1809.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
               duration: 583.0
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
[   1867.0] E VoicePlayActor[0] - EventStartVoice (#36, concurrent=0)
               duration: 381.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_WaterTemple_0010:Dm_WaterTemple_0010_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   1909.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#22, concurrent=1)
[   2248.0] L VoicePlayActor[0] - EventStartVoice (#36, concurrent=0)
[   2292.0] E UISystemActor - EventEventFadeOutForTimeline (#7, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   2391.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#23, concurrent=1)
               duration: 1.0
[   2392.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   2392.0] L UISystemActor - EventEventFadeOutForTimeline (#7, concurrent=0)
[   2392.0] L Npc_Navi - EventGoOffstageForUser (#8, concurrent=0)
[   2392.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#14, concurrent=0)
[   2392.0] L Player_Event[0] - EventPlayASForTimeline (#20, concurrent=0)
[   2392.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#23, concurrent=1)
[   2392.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#29, concurrent=0)
[   2392.0] L EventCamera[1] - EventSetNearCurrentCameraAnimation (#42, concurrent=0)
[   2392.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
