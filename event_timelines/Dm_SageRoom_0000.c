-------- Event timeline: Dm_SageRoom_0000 --------
actors: 11
clips: 50
oneshots: 0
cuts: 5
duration: 5547.0
subtimelines: ['Dm_SageRoom_0000_Effect', 'Dm_SageRoom_0000_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 2718.0
x4: 0
params: (none)

Cut: C03
start time: 3659.0
x4: 0
params: (none)

Cut: C04
start time: 4125.0
x4: 0
params: (none)

Cut: C05
start time: 4646.0
x4: 0
params: (none)


===== Actors =====

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerStartBgmSimple']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[1]
concurrent clips: 1
actions: ['EventSetRenderingCenterPosFromCameraPos']
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
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Npc_Hylia_Rauru[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetCharaReflectionCaustics']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SageRoom_0000/Dm_SageRoom_0000_Npc_Hylia_MU_Rauru/workspace.pp__ModelProject.gyml

Actor: Weapon_Sword_Master[0]
concurrent clips: 1
actions: ['EventModelBind']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerSetCharaReflectionCaustics']
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
UseEventModelAnime: Work/Model/Event/Dm_SageRoom_0000/Dm_SageRoom_0000_Player_Adult/workspace.pp__ModelProject.gyml

Actor: VoicePlayActor[0]
concurrent clips: 1
actions: ['EventStartVoice']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Npc_Navi
concurrent clips: 2
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
actions: ['EventPlayASForTimeline', 'EventNaviPlayLipSync', 'EventNaviStopLipSync', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SageRoom_0000/Dm_SageRoom_0000_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_SageRoom_0000/Dm_SageRoom_0000/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 440.0
               EndBluarLevel: 10.0
               EndDistance: 5.0
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 10.0
               StartDistance: 5.0
               StartFNumber: 5.0
[      0.0] E Dm_Npc_Hylia_Rauru[0] - EventPlayASForTimeline (#14, concurrent=0)
               duration: 2718.0
               ASName: C01-Npc_Hylia_MU_Rauru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Npc_Hylia_Rauru[0] - EventTriggerSetCharaReflectionCaustics (#17, concurrent=1)
               duration: 5547.0
               DampEndHeightRatio: 0.6000000238418579
               DampStartHeightRaito: 0.0
               Intensity: 0.20000000298023224
[      0.0] E Npc_Navi - EventGoOffstageForUser (#34, concurrent=0)
               duration: 5547.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventGoOffstageForUser (#35, concurrent=0)
               duration: 4125.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
               duration: 2718.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#45, concurrent=1)
               duration: 2718.0
               Near: 0.5
[     12.0] E VoicePlayActor[0] - EventStartVoice (#24, concurrent=0)
               duration: 483.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0000:Dm_SageRoom_0000_Text_000_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Rauru
[    320.0] E UISystemActor[0] - EventEventFadeInForTimeline (#11, concurrent=0)
               duration: 120.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[    440.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    440.0] L UISystemActor[0] - EventEventFadeInForTimeline (#11, concurrent=0)
[    440.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 335.0
               EndBluarLevel: 0.0
               EndDistance: 5.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 10.0
               StartDistance: 5.0
               StartFNumber: 10.0
[    448.0] E SoundSystemActor[0] - EventTriggerStartBgmSimple (#0, concurrent=0)
               duration: 100.0
               BGMName: BGM_Dm_SageRoom_0000
               CommandLife: 2
               IsReleaseDucking: false
[    495.0] L VoicePlayActor[0] - EventStartVoice (#24, concurrent=0)
[    546.0] E VoicePlayActor[0] - EventStartVoice (#25, concurrent=0)
               duration: 195.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0000:Dm_SageRoom_0000_Text_001_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Rauru
[    548.0] L SoundSystemActor[0] - EventTriggerStartBgmSimple (#0, concurrent=0)
[    741.0] L VoicePlayActor[0] - EventStartVoice (#25, concurrent=0)
[    775.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    775.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 1943.0
               EndBluarLevel: 0.0
               EndDistance: 5.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 5.0
               StartFNumber: 10.0
[   2050.0] E VoicePlayActor[0] - EventStartVoice (#26, concurrent=0)
               duration: 166.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0000:Dm_SageRoom_0000_Text_002_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Rauru
[   2216.0] L VoicePlayActor[0] - EventStartVoice (#26, concurrent=0)
[   2216.0] E VoicePlayActor[0] - EventStartVoice (#27, concurrent=0)
               duration: 443.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0000:Dm_SageRoom_0000_Text_003_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Rauru
[   2659.0] L VoicePlayActor[0] - EventStartVoice (#27, concurrent=0)
[   2703.0] E VoicePlayActor[0] - EventStartVoice (#28, concurrent=0)
               duration: 554.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0000:Dm_SageRoom_0000_Text_004_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Rauru
[   2718.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[   2718.0] L Dm_Npc_Hylia_Rauru[0] - EventPlayASForTimeline (#14, concurrent=0)
[   2718.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
[   2718.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#45, concurrent=1)
[   2718.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 938.0
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
[   2718.0] E Dm_Npc_Hylia_Rauru[0] - EventPlayASForTimeline (#15, concurrent=0)
               duration: 941.0
               ASName: C02-Npc_Hylia_MU_Rauru-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2718.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
               duration: 941.0
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
[   2718.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#46, concurrent=1)
               duration: 941.0
               Near: 0.5
[   3257.0] L VoicePlayActor[0] - EventStartVoice (#28, concurrent=0)
[   3309.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#12, concurrent=0)
               duration: 320.0
               DemoNicknamePos: 8
               DemoNicknameType: 0
               InAnimFrame: -1
               IsWaitEnd: true
               NameMessageLabel: ActorMsg/Npc:Dm_Npc_Hylia_Rauru_Name
               NicknameMessageLabel: ActorMsg/Nickname:Npc_Hylia_Rauru
               OutAnimFrame: -1
[   3629.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#12, concurrent=0)
[   3643.0] E VoicePlayActor[0] - EventStartVoice (#29, concurrent=0)
               duration: 440.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0000:Dm_SageRoom_0000_Text_005_b
               OffsetFrame: 30
               Speaker: Dm_Npc_Hylia_Rauru
[   3656.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   3659.0] L Dm_Npc_Hylia_Rauru[0] - EventPlayASForTimeline (#15, concurrent=0)
[   3659.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
[   3659.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#46, concurrent=1)
[   3659.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 466.0
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
[   3659.0] E Dm_Npc_Hylia_Rauru[0] - EventPlayASForTimeline (#16, concurrent=0)
               duration: 466.0
               ASName: C03-Npc_Hylia_MU_Rauru-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3659.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
               duration: 466.0
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
[   3659.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#47, concurrent=1)
               duration: 466.0
               Near: 0.5
[   4083.0] L VoicePlayActor[0] - EventStartVoice (#29, concurrent=0)
[   4125.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   4125.0] L Dm_Npc_Hylia_Rauru[0] - EventPlayASForTimeline (#16, concurrent=0)
[   4125.0] L Dm_Npc_Navi[0] - EventGoOffstageForUser (#35, concurrent=0)
[   4125.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
[   4125.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#47, concurrent=1)
[   4125.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 521.0
               EndBluarLevel: 1.0
               EndDistance: 1.8799999952316284
               EndFNumber: 81.69999694824219
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.8799999952316284
               StartFNumber: 81.69999694824219
[   4125.0] E Weapon_Sword_Master[0] - EventModelBind (#18, concurrent=0)
               duration: 521.0
               ActorName: Player_Event
               BoneName: Weapon_L
               InstanceName: '0'
               IsWaitEnd: true
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[   4125.0] E Player_Event[0] - EventPlayASForTimeline (#20, concurrent=0)
               duration: 521.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4125.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#22, concurrent=1)
               duration: 100.0
[   4125.0] E Player_Event[0] - EventTriggerSetCharaReflectionCaustics (#23, concurrent=2)
               duration: 1422.0
               DampEndHeightRatio: 0.699999988079071
               DampStartHeightRaito: 0.0
               Intensity: 0.20000000298023224
[   4125.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 521.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4125.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
               duration: 521.0
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
[   4125.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#48, concurrent=1)
               duration: 521.0
               Near: 0.5
[   4225.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#22, concurrent=1)
[   4550.0] E VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
               duration: 94.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: false
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0000:Dm_SageRoom_0000_Text_006_ab
               OffsetFrame: 30
               Speaker: Player_Adult
[   4644.0] L VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
[   4646.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   4646.0] L Weapon_Sword_Master[0] - EventModelBind (#18, concurrent=0)
[   4646.0] L Player_Event[0] - EventPlayASForTimeline (#20, concurrent=0)
[   4646.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
[   4646.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
[   4646.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#48, concurrent=1)
[   4646.0] E PostProcessingActor[1] - EventSetRenderingCenterPosFromCameraPos (#1, concurrent=0)
               duration: 901.0
               EndFocusDis: 3.0
               IsWaitEnd: true
               StarFocusDis: 3.0
[   4646.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 350.0
               EndBluarLevel: 1.0
               EndDistance: 1.9800000190734863
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.1799999475479126
               StartFNumber: 80.0
[   4646.0] E Weapon_Sword_Master[0] - EventModelBind (#19, concurrent=0)
               duration: 901.0
               ActorName: Player_Event
               BoneName: Weapon_L
               InstanceName: '0'
               IsWaitEnd: true
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[   4646.0] E Player_Event[0] - EventPlayASForTimeline (#21, concurrent=0)
               duration: 901.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4646.0] E VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
               duration: 470.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0000:Dm_SageRoom_0000_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   4646.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 901.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4646.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
               duration: 901.0
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
[   4646.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=1)
               duration: 1.0
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
[   4647.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#49, concurrent=1)
[   4676.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#38, concurrent=1)
               duration: 320.0
[   4996.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   4996.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#38, concurrent=1)
[   4996.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 223.0
               EndBluarLevel: 2.0
               EndDistance: 2.930000066757202
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.9800000190734863
               StartFNumber: 80.0
[   4996.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#39, concurrent=1)
               duration: 5.0
[   5001.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#39, concurrent=1)
[   5116.0] L VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
[   5116.0] E VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
               duration: 101.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0000:Dm_SageRoom_0000_Text_006_ac
               OffsetFrame: 30
               Speaker: Player_Adult
[   5217.0] L VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
[   5219.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   5219.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 328.0
               EndBluarLevel: 2.0
               EndDistance: 2.930000066757202
               EndFNumber: 52.20000076293945
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 2.930000066757202
               StartFNumber: 80.0
[   5229.0] E VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
               duration: 183.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_SageRoom_0000:Dm_SageRoom_0000_Text_006_ad
               OffsetFrame: 30
               Speaker: Player_Adult
[   5412.0] L VoicePlayActor[0] - EventStartVoice (#33, concurrent=0)
[   5487.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#13, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   5547.0] L PostProcessingActor[1] - EventSetRenderingCenterPosFromCameraPos (#1, concurrent=0)
[   5547.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   5547.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#13, concurrent=0)
[   5547.0] L Dm_Npc_Hylia_Rauru[0] - EventTriggerSetCharaReflectionCaustics (#17, concurrent=1)
[   5547.0] L Weapon_Sword_Master[0] - EventModelBind (#19, concurrent=0)
[   5547.0] L Player_Event[0] - EventPlayASForTimeline (#21, concurrent=0)
[   5547.0] L Player_Event[0] - EventTriggerSetCharaReflectionCaustics (#23, concurrent=2)
[   5547.0] L Npc_Navi - EventGoOffstageForUser (#34, concurrent=0)
[   5547.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#37, concurrent=0)
[   5547.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
