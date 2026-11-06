-------- Event timeline: Dm_HrlCastle_0030 --------
actors: 11
clips: 56
oneshots: 0
cuts: 8
duration: 3710.0
subtimelines: ['Dm_HrlCastle_0030_Effect', 'Dm_HrlCastle_0030_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 400.0
x4: 0
params: (none)

Cut: C03
start time: 590.0
x4: 0
params: (none)

Cut: C04
start time: 890.0
x4: 0
params: (none)

Cut: C04-50
start time: 1150.0
x4: 0
params: (none)

Cut: C05
start time: 1470.0
x4: 0
params: (none)

Cut: C06
start time: 2160.0
x4: 0
params: (none)

Cut: C07
start time: 2400.0
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

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventShowDemoNicknameUIForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor[1]
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
UseEventModelAnime: Work/Model/Event/Dm_HrlCastle_0030/Dm_HrlCastle_0030/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_HrlCastle_0030/Dm_HrlCastle_0030_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Zelda_Child[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_HrlCastle_0030/Dm_HrlCastle_0030_Npc_Hylia_WU_Zelda_Child/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_HrlCastle_0030/Dm_HrlCastle_0030_Player_Child/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E UISystemActor[1] - EventEventFadeInForTimeline (#2, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 400.0
               EndBluarLevel: 1.0
               EndDistance: 7.0
               EndFNumber: 6.25
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 7.0
               StartFNumber: 6.25
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
               duration: 400.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#32, concurrent=1)
               duration: 400.0
               Near: 0.10000000149011612
[      0.0] E Npc_Navi - EventGoOffstageForUser (#37, concurrent=0)
               duration: 3710.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 400.0
               ASName: C01_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 400.0
               ASName: C01_00-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 400.0
               ASName: C01_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#55, concurrent=1)
               duration: 100.0
[     60.0] L UISystemActor[1] - EventEventFadeInForTimeline (#2, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#55, concurrent=1)
[    393.0] E VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
               duration: 53.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0030:Dm_HrlCastle_0030_Text_000_ab
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[    400.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[    400.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
[    400.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#32, concurrent=1)
[    400.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#38, concurrent=0)
[    400.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#42, concurrent=0)
[    400.0] L Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
[    400.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 190.0
               EndBluarLevel: 1.0
               EndDistance: 1.5
               EndFNumber: 84.69999694824219
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 1.5
               StartFNumber: 84.69999694824219
[    400.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
               duration: 190.0
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
[    400.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 190.0
               ASName: C02_00-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    446.0] L VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
[    456.0] E VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
               duration: 110.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0030:Dm_HrlCastle_0030_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[    566.0] L VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
[    590.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[    590.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
[    590.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#43, concurrent=0)
[    590.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 300.0
               EndBluarLevel: 0.0
               EndDistance: 2.5
               EndFNumber: 12.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.5
               StartFNumber: 12.0
[    590.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
               duration: 300.0
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
[    590.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 300.0
               ASName: C03_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    590.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 300.0
               ASName: C03_00-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    590.0] E Player_Event[0] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 300.0
               ASName: C03_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    632.0] E VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
               duration: 185.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0030:Dm_HrlCastle_0030_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[    817.0] L VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
[    890.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[    890.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
[    890.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#39, concurrent=0)
[    890.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#44, concurrent=0)
[    890.0] L Player_Event[0] - EventPlayASForTimeline (#51, concurrent=0)
[    890.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 260.0
               EndBluarLevel: 1.5
               EndDistance: 1.7000000476837158
               EndFNumber: 80.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.7000000476837158
               StartFNumber: 80.0
[    890.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
               duration: 260.0
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
[    890.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#33, concurrent=1)
               duration: 260.0
               Near: 0.20000000298023224
[    890.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 260.0
               ASName: C04_00-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    920.0] E VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
               duration: 188.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0030:Dm_HrlCastle_0030_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   1108.0] L VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
[   1150.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   1150.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
[   1150.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#33, concurrent=1)
[   1150.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#45, concurrent=0)
[   1150.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 320.0
               EndBluarLevel: 1.2000000476837158
               EndDistance: 2.5
               EndFNumber: 8.399999618530273
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2000000476837158
               StartDistance: 2.5
               StartFNumber: 8.399999618530273
[   1150.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
               duration: 320.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C04_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1150.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#34, concurrent=1)
               duration: 320.0
               Near: 0.20000000298023224
[   1150.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 320.0
               ASName: C04_50-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1150.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 320.0
               ASName: C04_50-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1150.0] E Player_Event[0] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 320.0
               ASName: C04_50-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1466.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 107.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0030:Dm_HrlCastle_0030_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   1470.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   1470.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
[   1470.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#34, concurrent=1)
[   1470.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#40, concurrent=0)
[   1470.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#46, concurrent=0)
[   1470.0] L Player_Event[0] - EventPlayASForTimeline (#52, concurrent=0)
[   1470.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 690.0
               EndBluarLevel: 1.5
               EndDistance: 0.3799999952316284
               EndFNumber: 298.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 0.3799999952316284
               StartFNumber: 298.0
[   1470.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
               duration: 690.0
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
[   1470.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#35, concurrent=1)
               duration: 690.0
               Near: 0.4000000059604645
[   1470.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 690.0
               ASName: C05_00-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1470.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 690.0
               ASName: C05_00-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1470.0] E Player_Event[0] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 690.0
               ASName: C05_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1573.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[   1596.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 169.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0030:Dm_HrlCastle_0030_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   1765.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[   1950.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 129.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0030:Dm_HrlCastle_0030_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   2079.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[   2160.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   2160.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
[   2160.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#35, concurrent=1)
[   2160.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#41, concurrent=0)
[   2160.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#47, concurrent=0)
[   2160.0] L Player_Event[0] - EventPlayASForTimeline (#53, concurrent=0)
[   2160.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 240.0
               EndBluarLevel: 1.5
               EndDistance: 1.0
               EndFNumber: 86.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.0
               StartFNumber: 86.0
[   2160.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
               duration: 240.0
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
[   2160.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#36, concurrent=1)
               duration: 240.0
               Near: 0.10000000149011612
[   2160.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 240.0
               ASName: C06_00-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2160.0] E Player_Event[0] - EventPlayASForTimeline (#54, concurrent=0)
               duration: 240.0
               ASName: C06_00-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2171.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 48.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0030:Dm_HrlCastle_0030_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   2219.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   2253.0] E VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
               duration: 81.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0030:Dm_HrlCastle_0030_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   2334.0] L VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
[   2400.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   2400.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
[   2400.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#36, concurrent=1)
[   2400.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#48, concurrent=0)
[   2400.0] L Player_Event[0] - EventPlayASForTimeline (#54, concurrent=0)
[   2400.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 1310.0
               EndBluarLevel: 1.5
               EndDistance: 1.7799999713897705
               EndFNumber: 90.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.7799999713897705
               StartFNumber: 90.0
[   2400.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
               duration: 1310.0
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
[   2400.0] E Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 1310.0
               ASName: C07_00-Npc_Hylia_WU_Zelda_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2408.0] E VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
               duration: 159.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0030:Dm_HrlCastle_0030_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   2491.0] E SoundSystemActor[0] - EventTriggerStartBgmSimple (#0, concurrent=0)
               duration: 10.0
               BGMName: BGM_Dm_HrlCastle_0030
               CommandLife: 2
               IsReleaseDucking: true
[   2501.0] L SoundSystemActor[0] - EventTriggerStartBgmSimple (#0, concurrent=0)
[   2567.0] L VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
[   2644.0] E VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
               duration: 221.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0030:Dm_HrlCastle_0030_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   2865.0] L VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
[   2948.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#1, concurrent=0)
               duration: 320.0
               DemoNicknamePos: 4
               DemoNicknameType: 0
               InAnimFrame: -1
               IsWaitEnd: true
               NameMessageLabel: ActorMsg/Npc:Npc_Hylia_Zelda_Child_Name
               NicknameMessageLabel: ActorMsg/Nickname:Npc_Hylia_Zelda_Child
               OutAnimFrame: -1
[   3268.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#1, concurrent=0)
[   3284.0] E VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
               duration: 238.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlCastle_0030:Dm_HrlCastle_0030_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Hylia_Zelda_Child
[   3522.0] L VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
[   3650.0] E UISystemActor[1] - EventEventFadeOutForTimeline (#3, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   3710.0] L UISystemActor[1] - EventEventFadeOutForTimeline (#3, concurrent=0)
[   3710.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   3710.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
[   3710.0] L Npc_Navi - EventGoOffstageForUser (#37, concurrent=0)
[   3710.0] L Npc_Hylia_Zelda_Child[0] - EventPlayASForTimeline (#49, concurrent=0)
