-------- Event timeline: Dm_ShadowTemple_BossIn --------
actors: 12
clips: 84
oneshots: 0
cuts: 12
duration: 2155.0
subtimelines: ['Dm_ShadowTemple_BossIn_Effect', 'Dm_ShadowTemple_BossIn_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 151.0
x4: 0
params: (none)

Cut: C03
start time: 332.0
x4: 0
params: (none)

Cut: C04
start time: 533.0
x4: 0
params: (none)

Cut: C05
start time: 633.0
x4: 0
params: (none)

Cut: C06
start time: 839.0
x4: 0
params: (none)

Cut: C07
start time: 929.0
x4: 0
params: (none)

Cut: C08
start time: 1117.0
x4: 0
params: (none)

Cut: C09
start time: 1311.0
x4: 0
params: (none)

Cut: C10
start time: 1471.0
x4: 0
params: (none)

Cut: C11
start time: 1622.0
x4: 0
params: (none)

Cut: C12
start time: 1902.0
x4: 0
params: (none)


===== Actors =====

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerSoundStartBossBgm']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeInForTimeline']
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
actions: ['EventSetDoFForTimeline', 'EventResetToInGameParametersDoF']
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
UseEventModelAnime: 使用しない

Actor: Enemy_DungeonBoss_BongoBongo
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerStartFadeIn', 'EventTriggerStartFadeOut', 'EventDungeonBossSetConsiderBattlePresentation']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossIn/Dm_ShadowTemple_BossIn_Enemy_DungeonBoss_BongoBongo/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossIn/Dm_ShadowTemple_BossIn_Enemy_DungeonBoss_BongoBongo_LeftHand/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_BongoBongo_RightHand[right_hand]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerStartFadeIn']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossIn/Dm_ShadowTemple_BossIn_Enemy_DungeonBoss_BongoBongo_RightHand/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerPlayerRestoreBootsChange']
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
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossIn/Dm_ShadowTemple_BossIn_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossIn/Dm_ShadowTemple_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossIn/Dm_ShadowTemple_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossIn/Dm_ShadowTemple_BossIn_Dm_Locator/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#1, concurrent=0)
               duration: 61.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
               duration: 151.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#58, concurrent=0)
               duration: 151.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#68, concurrent=1)
               duration: 2155.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#69, concurrent=2)
               duration: 151.0
               BootsType: 0
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#71, concurrent=0)
               duration: 151.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#80, concurrent=0)
               duration: 1902.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Locator[0] - EventPlayASForTimeline (#82, concurrent=0)
               duration: 151.0
               ASName: C01-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     61.0] L UISystemActor[0] - EventEventFadeInForTimeline (#1, concurrent=0)
[    151.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#24, concurrent=0)
[    151.0] L Player_Event[0] - EventPlayASForTimeline (#58, concurrent=0)
[    151.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#69, concurrent=2)
[    151.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#71, concurrent=0)
[    151.0] L Dm_Locator[0] - EventPlayASForTimeline (#82, concurrent=0)
[    151.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
               duration: 181.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C02
               TargetActorInstanceName: ''
               TargetActorName: ''
[    151.0] E Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
               duration: 181.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    151.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#72, concurrent=0)
               duration: 181.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    151.0] E Dm_Locator[0] - EventPlayASForTimeline (#83, concurrent=0)
               duration: 2004.0
               ASName: C02-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    332.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#25, concurrent=0)
[    332.0] L Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
[    332.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#72, concurrent=0)
[    332.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 94.0
               EndBluarLevel: 2.0
               EndDistance: 4.574999809265137
               EndFNumber: 143.39999389648438
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.574999809265137
               StartFNumber: 143.39999389648438
[    332.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
               duration: 201.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03
               TargetActorInstanceName: ''
               TargetActorName: ''
[    332.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventTriggerStartFadeIn (#49, concurrent=0)
               duration: 201.0
               FadeFrame: 150
[    332.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#57, concurrent=1)
               duration: 201.0
               ASName: C03-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    332.0] E Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
               duration: 201.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    332.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
               duration: 201.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    396.0] E VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
               duration: 54.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ShadowTemple_BossIn:Dm_ShadowTemple_BossIn_Text_002_b
               OffsetFrame: 30
               Speaker: Player_Event
[    426.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[    426.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 26.0
               EndBluarLevel: 2.0
               EndDistance: 11.75
               EndFNumber: 143.39999389648438
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.574999809265137
               StartFNumber: 143.39999389648438
[    450.0] L VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
[    452.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[    452.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 81.0
               EndBluarLevel: 2.0
               EndDistance: 11.75
               EndFNumber: 143.39999389648438
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 11.75
               StartFNumber: 143.39999389648438
[    527.0] E VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
               duration: 64.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ShadowTemple_BossIn:Dm_ShadowTemple_BossIn_Text_007_b
               OffsetFrame: 30
               Speaker: Player_Event
[    533.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[    533.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#26, concurrent=0)
[    533.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventTriggerStartFadeIn (#49, concurrent=0)
[    533.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#57, concurrent=1)
[    533.0] L Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
[    533.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
[    533.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 100.0
               EndBluarLevel: 3.0
               EndDistance: 25.299999237060547
               EndFNumber: 115.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 25.299999237060547
               StartFNumber: 115.0
[    533.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
               duration: 100.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C04
               TargetActorInstanceName: ''
               TargetActorName: ''
[    533.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 100.0
               ASName: C04-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    533.0] E Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
               duration: 100.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    533.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 100.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    591.0] L VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
[    633.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[    633.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#27, concurrent=0)
[    633.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#50, concurrent=0)
[    633.0] L Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
[    633.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#74, concurrent=0)
[    633.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 206.0
               EndBluarLevel: 2.5
               EndDistance: 19.200000762939453
               EndFNumber: 250.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.5
               StartDistance: 19.200000762939453
               StartFNumber: 250.0
[    633.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
               duration: 206.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C05
               TargetActorInstanceName: ''
               TargetActorName: ''
[    633.0] E Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 206.0
               ASName: C05-Enemy_DungeonBoss_BongoBongo_LeftHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    633.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 206.0
               ASName: C05-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    633.0] E Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
               duration: 206.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    633.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#75, concurrent=0)
               duration: 206.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    650.0] E VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
               duration: 63.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ShadowTemple_BossIn:Dm_ShadowTemple_BossIn_Text_004_b
               OffsetFrame: 30
               Speaker: Player_Event
[    713.0] L VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
[    839.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[    839.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#28, concurrent=0)
[    839.0] L Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#43, concurrent=0)
[    839.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#51, concurrent=0)
[    839.0] L Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
[    839.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#75, concurrent=0)
[    839.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 90.0
               EndBluarLevel: 4.0
               EndDistance: 2.450000047683716
               EndFNumber: 265.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 4.0
               StartDistance: 2.450000047683716
               StartFNumber: 265.0
[    839.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
               duration: 90.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C06
               TargetActorInstanceName: ''
               TargetActorName: ''
[    839.0] E Player_Event[0] - EventPlayASForTimeline (#63, concurrent=0)
               duration: 90.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    839.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#76, concurrent=0)
               duration: 90.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    867.0] E VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
               duration: 53.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ShadowTemple_BossIn:Dm_ShadowTemple_BossIn_Text_003_b
               OffsetFrame: 30
               Speaker: Player_Event
[    920.0] L VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
[    929.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[    929.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#29, concurrent=0)
[    929.0] L Player_Event[0] - EventPlayASForTimeline (#63, concurrent=0)
[    929.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#76, concurrent=0)
[    929.0] E VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
               duration: 161.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ShadowTemple_BossIn:Dm_ShadowTemple_BossIn_Text_001_b
               OffsetFrame: 30
               Speaker: Player_Event
[    929.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 188.0
               EndBluarLevel: 4.0
               EndDistance: 1.5750000476837158
               EndFNumber: 264.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 4.0
               StartDistance: 1.5750000476837158
               StartFNumber: 264.0
[    929.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
               duration: 188.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C07
               TargetActorInstanceName: ''
               TargetActorName: ''
[    929.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#36, concurrent=1)
               duration: 188.0
               Near: 0.10000000149011612
[    929.0] E Player_Event[0] - EventPlayASForTimeline (#64, concurrent=0)
               duration: 188.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1090.0] L VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
[   1117.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   1117.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#30, concurrent=0)
[   1117.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#36, concurrent=1)
[   1117.0] L Player_Event[0] - EventPlayASForTimeline (#64, concurrent=0)
[   1117.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 194.0
               EndBluarLevel: 3.0
               EndDistance: 21.0
               EndFNumber: 43.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 21.0
               StartFNumber: 43.0
[   1117.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
               duration: 194.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C08
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1117.0] E Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 194.0
               ASName: C08-Enemy_DungeonBoss_BongoBongo_LeftHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1117.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 194.0
               ASName: C08-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1311.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   1311.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#31, concurrent=0)
[   1311.0] L Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#44, concurrent=0)
[   1311.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#52, concurrent=0)
[   1311.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 160.0
               EndBluarLevel: 2.0
               EndDistance: 11.0
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 11.0
               StartFNumber: 5.0
[   1311.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
               duration: 160.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C09
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1311.0] E Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 160.0
               ASName: C09-Enemy_DungeonBoss_BongoBongo_LeftHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1311.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 160.0
               ASName: C09-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1311.0] E Player_Event[0] - EventPlayASForTimeline (#65, concurrent=0)
               duration: 160.0
               ASName: C09-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1311.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#77, concurrent=0)
               duration: 160.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1471.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   1471.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#32, concurrent=0)
[   1471.0] L Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#45, concurrent=0)
[   1471.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#53, concurrent=0)
[   1471.0] L Player_Event[0] - EventPlayASForTimeline (#65, concurrent=0)
[   1471.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#77, concurrent=0)
[   1471.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 151.0
               EndBluarLevel: 3.0
               EndDistance: 11.0
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 11.0
               StartFNumber: 50.0
[   1471.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
               duration: 151.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C10
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1471.0] E Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#40, concurrent=1)
               duration: 151.0
               ASName: C10-Enemy_DungeonBoss_BongoBongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1471.0] E Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 151.0
               ASName: C10-Enemy_DungeonBoss_BongoBongo_LeftHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1471.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#54, concurrent=0)
               duration: 151.0
               ASName: C10-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1471.0] E Player_Event[0] - EventPlayASForTimeline (#66, concurrent=0)
               duration: 151.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1471.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#78, concurrent=0)
               duration: 151.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1480.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 64.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ShadowTemple_BossIn:Dm_ShadowTemple_BossIn_Text_008_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1490.0] E Enemy_DungeonBoss_BongoBongo - EventTriggerStartFadeIn (#37, concurrent=0)
               duration: 132.0
               FadeFrame: 90
[   1544.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[   1554.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 54.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ShadowTemple_BossIn:Dm_ShadowTemple_BossIn_Text_000_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1608.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[   1622.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   1622.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#33, concurrent=0)
[   1622.0] L Enemy_DungeonBoss_BongoBongo - EventTriggerStartFadeIn (#37, concurrent=0)
[   1622.0] L Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#40, concurrent=1)
[   1622.0] L Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#46, concurrent=0)
[   1622.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#54, concurrent=0)
[   1622.0] L Player_Event[0] - EventPlayASForTimeline (#66, concurrent=0)
[   1622.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#78, concurrent=0)
[   1622.0] E SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#0, concurrent=0)
               duration: 100.0
               BgmName: BGM_DungeonBoss
[   1622.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#2, concurrent=0)
               duration: 430.0
               DemoNicknamePos: 0
               DemoNicknameType: 1
               InAnimFrame: 110
               IsWaitEnd: true
               NameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_BongoBongo_Name
               NicknameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_BongoBongo_Nickname
               OutAnimFrame: 110
[   1622.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 280.0
               EndBluarLevel: 3.0
               EndDistance: 30.0
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 20.0
               StartFNumber: 40.0
[   1622.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
               duration: 280.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C11
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1622.0] E Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#38, concurrent=0)
               duration: 280.0
               ASName: C11-Enemy_DungeonBoss_BongoBongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1622.0] E Enemy_DungeonBoss_BongoBongo - EventDungeonBossSetConsiderBattlePresentation (#41, concurrent=1)
               duration: 100.0
[   1622.0] E Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 280.0
               ASName: C11-Enemy_DungeonBoss_BongoBongo_LeftHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1622.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#55, concurrent=0)
               duration: 280.0
               ASName: C11-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1622.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#70, concurrent=2)
               duration: 280.0
[   1722.0] L SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#0, concurrent=0)
[   1722.0] L Enemy_DungeonBoss_BongoBongo - EventDungeonBossSetConsiderBattlePresentation (#41, concurrent=1)
[   1902.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   1902.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#34, concurrent=0)
[   1902.0] L Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#38, concurrent=0)
[   1902.0] L Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#47, concurrent=0)
[   1902.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#55, concurrent=0)
[   1902.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#70, concurrent=2)
[   1902.0] L Npc_Navi - EventGoOffstageForUser (#80, concurrent=0)
[   1902.0] E PostProcessingActor[0] - EventResetToInGameParametersDoF (#23, concurrent=0)
               duration: 253.0
               IsWaitEnd: true
               TransitionFrame: 0
[   1902.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
               duration: 253.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C12
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1902.0] E Enemy_DungeonBoss_BongoBongo - EventTriggerStartFadeOut (#39, concurrent=0)
               duration: 253.0
               FadeFrame: 180
[   1902.0] E Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#42, concurrent=1)
               duration: 253.0
               ASName: C12-Enemy_DungeonBoss_BongoBongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1902.0] E Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 253.0
               ASName: C12-Enemy_DungeonBoss_BongoBongo_LeftHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1902.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#56, concurrent=0)
               duration: 253.0
               ASName: C12-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1902.0] E Player_Event[0] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 253.0
               ASName: C12-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1902.0] E Dm_Npc_Navi[0] - EventGoOffstageForUser (#79, concurrent=0)
               duration: 253.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1902.0] E Npc_Navi - EventPlayASForTimeline (#81, concurrent=0)
               duration: 253.0
               ASName: C12-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1909.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 41.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ShadowTemple_BossIn:Dm_ShadowTemple_BossIn_Text_005_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1950.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[   1994.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 49.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_ShadowTemple_BossIn:Dm_ShadowTemple_BossIn_Text_006_b
               OffsetFrame: 30
               Speaker: Player_Event
[   2043.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   2052.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#2, concurrent=0)
[   2155.0] L PostProcessingActor[0] - EventResetToInGameParametersDoF (#23, concurrent=0)
[   2155.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
[   2155.0] L Enemy_DungeonBoss_BongoBongo - EventTriggerStartFadeOut (#39, concurrent=0)
[   2155.0] L Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#42, concurrent=1)
[   2155.0] L Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#48, concurrent=0)
[   2155.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#56, concurrent=0)
[   2155.0] L Player_Event[0] - EventPlayASForTimeline (#67, concurrent=0)
[   2155.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#68, concurrent=1)
[   2155.0] L Dm_Npc_Navi[0] - EventGoOffstageForUser (#79, concurrent=0)
[   2155.0] L Npc_Navi - EventPlayASForTimeline (#81, concurrent=0)
[   2155.0] L Dm_Locator[0] - EventPlayASForTimeline (#83, concurrent=0)
