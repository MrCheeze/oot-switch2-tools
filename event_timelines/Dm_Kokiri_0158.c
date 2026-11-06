-------- Event timeline: Dm_Kokiri_0158 --------
actors: 10
clips: 96
oneshots: 0
cuts: 15
duration: 5921.0
subtimelines: ['Dm_Kokiri_0158_Effect', 'Dm_Kokiri_0158_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 300.0
x4: 0
params: (none)

Cut: cut03
start time: 1050.0
x4: 0
params: (none)

Cut: cut04
start time: 1182.0
x4: 0
params: (none)

Cut: cut05
start time: 1443.0
x4: 0
params: (none)

Cut: cut06
start time: 1674.0
x4: 0
params: (none)

Cut: cut07
start time: 1974.0
x4: 0
params: (none)

Cut: cut08
start time: 2166.0
x4: 0
params: (none)

Cut: cut09
start time: 2466.0
x4: 0
params: (none)

Cut: cut10
start time: 2850.0
x4: 0
params: (none)

Cut: cut11
start time: 3240.0
x4: 0
params: (none)

Cut: cut12
start time: 3766.0
x4: 0
params: (none)

Cut: cut13
start time: 4216.0
x4: 0
params: (none)

Cut: cut14
start time: 4646.0
x4: 0
params: (none)

Cut: cut15
start time: 5041.0
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

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
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

Actor: Npc_DekuTreeChild[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0158/Dm_Kokiri_0158_Npc_U_DekuTreeChild/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0158/Dm_Kokiri_0158_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerPlayerRestoreBootsChange', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerPlayerTemporaryBootsChange']
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
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0158/Dm_Kokiri_0158_Player_Adult/workspace.pp__ModelProject.gyml

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0158/Dm_Kokiri_0158/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 2
actions: ['EventTriggerParticipateEvent', 'EventDoNothing']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 2.25
- 0.0
- -0.75
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 300.0
               EndBluarLevel: 0.0
               EndDistance: 11.0
               EndFNumber: 4.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 11.0
               StartFNumber: 4.0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#48, concurrent=0)
               duration: 5921.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 300.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
               duration: 300.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#72, concurrent=1)
               duration: 100.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#74, concurrent=2)
               duration: 100.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#75, concurrent=0)
               duration: 300.0
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
[      0.0] E Dm_Locator[0] - EventTriggerParticipateEvent (#94, concurrent=0)
               duration: 5921.0
[      0.0] E Dm_Locator[0] - EventDoNothing (#95, concurrent=1)
               duration: 5921.0
               IsWaitEnd: true
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#72, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#74, concurrent=2)
[    300.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    300.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#49, concurrent=0)
[    300.0] L Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
[    300.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#75, concurrent=0)
[    300.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 750.0
               EndBluarLevel: 1.5
               EndDistance: 2.940000057220459
               EndFNumber: 53.20000076293945
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 2.940000057220459
               StartFNumber: 53.20000076293945
[    300.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 750.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    300.0] E Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
               duration: 750.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    300.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#76, concurrent=0)
               duration: 750.0
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
[    330.0] E VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
               duration: 237.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[    567.0] L VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
[    697.0] E VoicePlayActor[0] - EventStartVoice (#18, concurrent=0)
               duration: 50.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_001_b
               OffsetFrame: 30
               Speaker: Player_Event
[    747.0] L VoicePlayActor[0] - EventStartVoice (#18, concurrent=0)
[    747.0] E VoicePlayActor[0] - EventStartVoice (#19, concurrent=0)
               duration: 91.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[    838.0] L VoicePlayActor[0] - EventStartVoice (#19, concurrent=0)
[    860.0] E VoicePlayActor[0] - EventStartVoice (#20, concurrent=0)
               duration: 112.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[    972.0] L VoicePlayActor[0] - EventStartVoice (#20, concurrent=0)
[   1050.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[   1050.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#50, concurrent=0)
[   1050.0] L Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
[   1050.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#76, concurrent=0)
[   1050.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 132.0
               EndBluarLevel: 0.0
               EndDistance: 7.019999980926514
               EndFNumber: 12.800000190734863
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 7.019999980926514
               StartFNumber: 12.800000190734863
[   1050.0] E Npc_DekuTreeChild[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 132.0
               ASName: C03-Npc_U_DekuTreeChild-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1050.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 132.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1050.0] E Player_Event[0] - EventPlayASForTimeline (#63, concurrent=0)
               duration: 132.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1050.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#77, concurrent=0)
               duration: 132.0
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
[   1182.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   1182.0] L Npc_DekuTreeChild[0] - EventPlayASForTimeline (#36, concurrent=0)
[   1182.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#51, concurrent=0)
[   1182.0] L Player_Event[0] - EventPlayASForTimeline (#63, concurrent=0)
[   1182.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#77, concurrent=0)
[   1182.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 261.0
               EndBluarLevel: 1.5700000524520874
               EndDistance: 1.8700000047683716
               EndFNumber: 223.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5700000524520874
               StartDistance: 1.8700000047683716
               StartFNumber: 223.0
[   1182.0] E Npc_DekuTreeChild[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 261.0
               ASName: C03B-Npc_U_DekuTreeChild-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1182.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 261.0
               ASName: C03B-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1182.0] E Player_Event[0] - EventPlayASForTimeline (#64, concurrent=0)
               duration: 261.0
               ASName: C03B-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1182.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#78, concurrent=0)
               duration: 261.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03B-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1182.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#90, concurrent=1)
               duration: 261.0
               Near: 0.10000000149011612
[   1443.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   1443.0] L Npc_DekuTreeChild[0] - EventPlayASForTimeline (#37, concurrent=0)
[   1443.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#52, concurrent=0)
[   1443.0] L Player_Event[0] - EventPlayASForTimeline (#64, concurrent=0)
[   1443.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#78, concurrent=0)
[   1443.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#90, concurrent=1)
[   1443.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 231.0
               EndBluarLevel: 0.0
               EndDistance: 5.0
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 5.0
               StartFNumber: 70.0
[   1443.0] E Npc_DekuTreeChild[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 231.0
               ASName: C04-Npc_U_DekuTreeChild-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1443.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 231.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1443.0] E Player_Event[0] - EventPlayASForTimeline (#65, concurrent=0)
               duration: 231.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1443.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#79, concurrent=0)
               duration: 231.0
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
[   1649.0] E VoicePlayActor[0] - EventStartVoice (#21, concurrent=0)
               duration: 51.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   1649.0] E VoicePlayActor[1] - EventStartVoice (#35, concurrent=0)
               duration: 51.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_005_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1674.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1674.0] L Npc_DekuTreeChild[0] - EventPlayASForTimeline (#38, concurrent=0)
[   1674.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#53, concurrent=0)
[   1674.0] L Player_Event[0] - EventPlayASForTimeline (#65, concurrent=0)
[   1674.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#79, concurrent=0)
[   1674.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 300.0
               EndBluarLevel: 0.0
               EndDistance: 5.0
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 5.0
               StartFNumber: 70.0
[   1674.0] E Npc_DekuTreeChild[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 300.0
               ASName: C05-Npc_U_DekuTreeChild-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1674.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#54, concurrent=0)
               duration: 300.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1674.0] E Player_Event[0] - EventPlayASForTimeline (#66, concurrent=0)
               duration: 300.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1674.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#80, concurrent=0)
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
[   1674.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#91, concurrent=1)
               duration: 300.0
               Near: 0.10000000149011612
[   1700.0] L VoicePlayActor[0] - EventStartVoice (#21, concurrent=0)
[   1700.0] L VoicePlayActor[1] - EventStartVoice (#35, concurrent=0)
[   1816.0] E VoicePlayActor[0] - EventStartVoice (#22, concurrent=0)
               duration: 129.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_DekuTreeChild
[   1945.0] L VoicePlayActor[0] - EventStartVoice (#22, concurrent=0)
[   1974.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   1974.0] L Npc_DekuTreeChild[0] - EventPlayASForTimeline (#39, concurrent=0)
[   1974.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#54, concurrent=0)
[   1974.0] L Player_Event[0] - EventPlayASForTimeline (#66, concurrent=0)
[   1974.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#80, concurrent=0)
[   1974.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#91, concurrent=1)
[   1974.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 192.0
               EndBluarLevel: 1.7000000476837158
               EndDistance: 0.8600000143051147
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.7000000476837158
               StartDistance: 0.8600000143051147
               StartFNumber: 100.0
[   1974.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#55, concurrent=0)
               duration: 192.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1974.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#81, concurrent=0)
               duration: 192.0
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
[   1974.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#92, concurrent=1)
               duration: 192.0
               Near: 0.10000000149011612
[   1991.0] E VoicePlayActor[0] - EventStartVoice (#23, concurrent=0)
               duration: 125.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2116.0] L VoicePlayActor[0] - EventStartVoice (#23, concurrent=0)
[   2166.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   2166.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#55, concurrent=0)
[   2166.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#81, concurrent=0)
[   2166.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#92, concurrent=1)
[   2166.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 300.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 70.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 70.0
[   2166.0] E Npc_DekuTreeChild[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 300.0
               ASName: C08-Npc_U_DekuTreeChild-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2166.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#82, concurrent=0)
               duration: 300.0
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
[   2169.0] E VoicePlayActor[0] - EventStartVoice (#24, concurrent=0)
               duration: 265.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_DekuTreeChild
[   2434.0] L VoicePlayActor[0] - EventStartVoice (#24, concurrent=0)
[   2466.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   2466.0] L Npc_DekuTreeChild[0] - EventPlayASForTimeline (#40, concurrent=0)
[   2466.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#82, concurrent=0)
[   2466.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 384.0
               EndBluarLevel: 2.0
               EndDistance: 5.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 5.0
               StartFNumber: 50.0
[   2466.0] E Npc_DekuTreeChild[0] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 384.0
               ASName: C09-Npc_U_DekuTreeChild-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2466.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#56, concurrent=0)
               duration: 384.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2466.0] E Player_Event[0] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 384.0
               ASName: C09-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2466.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#83, concurrent=0)
               duration: 384.0
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
[   2477.0] E VoicePlayActor[0] - EventStartVoice (#25, concurrent=0)
               duration: 331.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_DekuTreeChild
[   2808.0] L VoicePlayActor[0] - EventStartVoice (#25, concurrent=0)
[   2826.0] E VoicePlayActor[0] - EventStartVoice (#26, concurrent=0)
               duration: 153.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_DekuTreeChild
[   2850.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   2850.0] L Npc_DekuTreeChild[0] - EventPlayASForTimeline (#41, concurrent=0)
[   2850.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#56, concurrent=0)
[   2850.0] L Player_Event[0] - EventPlayASForTimeline (#67, concurrent=0)
[   2850.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#83, concurrent=0)
[   2850.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 390.0
               EndBluarLevel: 2.0
               EndDistance: 2.5
               EndFNumber: 24.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.5
               StartFNumber: 24.0
[   2850.0] E Npc_DekuTreeChild[0] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 390.0
               ASName: C10-Npc_U_DekuTreeChild-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2850.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#84, concurrent=0)
               duration: 390.0
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
[   2979.0] L VoicePlayActor[0] - EventStartVoice (#26, concurrent=0)
[   2986.0] E VoicePlayActor[0] - EventStartVoice (#27, concurrent=0)
               duration: 228.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_DekuTreeChild
[   3214.0] L VoicePlayActor[0] - EventStartVoice (#27, concurrent=0)
[   3240.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   3240.0] L Npc_DekuTreeChild[0] - EventPlayASForTimeline (#42, concurrent=0)
[   3240.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#84, concurrent=0)
[   3240.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 526.0
               EndBluarLevel: 0.0
               EndDistance: 24.0
               EndFNumber: 10.0
               IsAutoFocalDist: true
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 24.0
               StartFNumber: 10.0
[   3240.0] E Npc_DekuTreeChild[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 526.0
               ASName: C11-Npc_U_DekuTreeChild-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3240.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#57, concurrent=0)
               duration: 526.0
               ASName: C11-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3240.0] E Player_Event[0] - EventPlayASForTimeline (#68, concurrent=0)
               duration: 526.0
               ASName: C11-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3240.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#85, concurrent=0)
               duration: 526.0
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
[   3270.0] E VoicePlayActor[0] - EventStartVoice (#28, concurrent=0)
               duration: 464.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_DekuTreeChild
[   3734.0] L VoicePlayActor[0] - EventStartVoice (#28, concurrent=0)
[   3762.0] E VoicePlayActor[0] - EventStartVoice (#29, concurrent=0)
               duration: 416.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_013_c
               OffsetFrame: 30
               Speaker: Npc_DekuTreeChild
[   3766.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   3766.0] L Npc_DekuTreeChild[0] - EventPlayASForTimeline (#43, concurrent=0)
[   3766.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#57, concurrent=0)
[   3766.0] L Player_Event[0] - EventPlayASForTimeline (#68, concurrent=0)
[   3766.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#85, concurrent=0)
[   3766.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 450.0
               EndBluarLevel: 0.0
               EndDistance: 3.3399999141693115
               EndFNumber: 14.399999618530273
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.3399999141693115
               StartFNumber: 14.399999618530273
[   3766.0] E Npc_DekuTreeChild[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 450.0
               ASName: C12-Npc_U_DekuTreeChild-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3766.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#58, concurrent=0)
               duration: 450.0
               ASName: C12-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3766.0] E Player_Event[0] - EventPlayASForTimeline (#69, concurrent=0)
               duration: 450.0
               ASName: C12-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3766.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#86, concurrent=0)
               duration: 450.0
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
[   3766.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#93, concurrent=1)
               duration: 450.0
               Near: 0.5
[   4178.0] L VoicePlayActor[0] - EventStartVoice (#29, concurrent=0)
[   4216.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   4216.0] L Npc_DekuTreeChild[0] - EventPlayASForTimeline (#44, concurrent=0)
[   4216.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#58, concurrent=0)
[   4216.0] L Player_Event[0] - EventPlayASForTimeline (#69, concurrent=0)
[   4216.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#86, concurrent=0)
[   4216.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#93, concurrent=1)
[   4216.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 430.0
               EndBluarLevel: 1.5
               EndDistance: 3.5999999046325684
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 3.5999999046325684
               StartFNumber: 15.0
[   4216.0] E VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
               duration: 369.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_014_b
               OffsetFrame: 30
               Speaker: Npc_DekuTreeChild
[   4216.0] E Npc_DekuTreeChild[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 430.0
               ASName: C13-Npc_U_DekuTreeChild-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4216.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#59, concurrent=0)
               duration: 430.0
               ASName: C13-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4216.0] E Player_Event[0] - EventPlayASForTimeline (#70, concurrent=0)
               duration: 430.0
               ASName: C13-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4216.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#87, concurrent=0)
               duration: 430.0
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
[   4585.0] L VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
[   4631.0] E VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
               duration: 140.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_015_b
               OffsetFrame: 30
               Speaker: Npc_DekuTreeChild
[   4646.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   4646.0] L Npc_DekuTreeChild[0] - EventPlayASForTimeline (#45, concurrent=0)
[   4646.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#59, concurrent=0)
[   4646.0] L Player_Event[0] - EventPlayASForTimeline (#70, concurrent=0)
[   4646.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#87, concurrent=0)
[   4646.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 395.0
               EndBluarLevel: 2.0
               EndDistance: 1.840000033378601
               EndFNumber: 68.9000015258789
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.840000033378601
               StartFNumber: 68.9000015258789
[   4646.0] E Npc_DekuTreeChild[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 395.0
               ASName: C15-Npc_U_DekuTreeChild-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4646.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#88, concurrent=0)
               duration: 395.0
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
[   4771.0] L VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
[   4772.0] E VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
               duration: 237.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_016_b
               OffsetFrame: 30
               Speaker: Npc_DekuTreeChild
[   5009.0] L VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
[   5041.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   5041.0] L Npc_DekuTreeChild[0] - EventPlayASForTimeline (#46, concurrent=0)
[   5041.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#88, concurrent=0)
[   5041.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 880.0
               EndBluarLevel: 1.0
               EndDistance: 5.0
               EndFNumber: 16.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.0
               StartFNumber: 16.0
[   5041.0] E Npc_DekuTreeChild[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 880.0
               ASName: C16-Npc_U_DekuTreeChild-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5041.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#60, concurrent=0)
               duration: 880.0
               ASName: C16-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5041.0] E Player_Event[0] - EventPlayASForTimeline (#71, concurrent=0)
               duration: 880.0
               ASName: C16-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5041.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#89, concurrent=0)
               duration: 880.0
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
[   5051.0] E VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
               duration: 337.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_018_b
               OffsetFrame: 30
               Speaker: Npc_DekuTreeChild
[   5388.0] L VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
[   5425.0] E VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
               duration: 384.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0158:Dm_Kokiri_0158_Text_019_b
               OffsetFrame: 30
               Speaker: Npc_DekuTreeChild
[   5809.0] L VoicePlayActor[0] - EventStartVoice (#34, concurrent=0)
[   5831.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 90.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   5920.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#73, concurrent=1)
               duration: 1.0
[   5921.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[   5921.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   5921.0] L Npc_DekuTreeChild[0] - EventPlayASForTimeline (#47, concurrent=0)
[   5921.0] L Npc_Navi - EventGoOffstageForUser (#48, concurrent=0)
[   5921.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#60, concurrent=0)
[   5921.0] L Player_Event[0] - EventPlayASForTimeline (#71, concurrent=0)
[   5921.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#73, concurrent=1)
[   5921.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#89, concurrent=0)
[   5921.0] L Dm_Locator[0] - EventTriggerParticipateEvent (#94, concurrent=0)
[   5921.0] L Dm_Locator[0] - EventDoNothing (#95, concurrent=1)
