-------- Event timeline: Dm_Awake_Water --------
actors: 11
clips: 103
oneshots: 0
cuts: 15
duration: 7448.0
subtimelines: ['Dm_Awake_Water_Effect', 'Dm_Awake_Water_Env']
params: (none)

===== Cuts =====

Cut: C01_00
start time: 0.0
x4: 0
params: (none)

Cut: C02_00
start time: 210.0
x4: 0
params: (none)

Cut: C03_00
start time: 520.0
x4: 0
params: (none)

Cut: C04_00
start time: 780.0
x4: 0
params: (none)

Cut: C04_50
start time: 1620.0
x4: 0
params: (none)

Cut: C05_00
start time: 2110.0
x4: 0
params: (none)

Cut: C06_00
start time: 2330.0
x4: 0
params: (none)

Cut: C07_00
start time: 3350.0
x4: 0
params: (none)

Cut: C08_00
start time: 3790.0
x4: 0
params: (none)

Cut: C08_50
start time: 3950.0
x4: 0
params: (none)

Cut: C09_00
start time: 4610.0
x4: 0
params: (none)

Cut: C10_00
start time: 5740.0
x4: 0
params: (none)

Cut: C12_00
start time: 6060.0
x4: 0
params: (none)

Cut: C13_00
start time: 6660.0
x4: 0
params: (none)

Cut: C14_00
start time: 7100.0
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

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Water/Dm_Awake_Water_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: GameSystemActor[0]
concurrent clips: 1
actions: ['EventDemoProductSupportComment']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Player_Event[0]
concurrent clips: 4
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerSetCharaReflectionCaustics']
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
UseEventAS: Work/AS/Root/Event/Dm_Awake_Water_Player.root.as
UseEventModelAnime: Work/Model/Event/Dm_Awake_Water/Dm_Awake_Water_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Zora_Ruto_Adult_001[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetCharaReflectionCaustics']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_Awake_Water.root.as
UseEventModelAnime: Work/Model/Event/Dm_Awake_Water/Dm_Awake_Water_Npc_Zora_ZU_Ruto_Adult/workspace.pp__ModelProject.gyml

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

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Water/Dm_Awake_Water_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Water/Dm_Awake_Water_Npc_Navi/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 210.0
               EndBluarLevel: 0.0
               EndDistance: 10.0
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 10.0
               StartFNumber: 5.0
[      0.0] E Dm_Locator[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 210.0
               ASName: C01-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#47, concurrent=0)
               duration: 180.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 210.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#58, concurrent=1)
               duration: 210.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#59, concurrent=2)
               duration: 100.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerSetCharaReflectionCaustics (#60, concurrent=3)
               duration: 100.0
               DampEndHeightRatio: 0.699999988079071
               DampStartHeightRaito: 0.0
               Intensity: 0.20000000298023224
[      0.0] E Npc_Zora_Ruto_Adult_001[0] - EventTriggerSetCharaReflectionCaustics (#72, concurrent=1)
               duration: 100.0
               DampEndHeightRatio: 0.699999988079071
               DampStartHeightRaito: 0.0
               Intensity: 0.20000000298023224
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#73, concurrent=0)
               duration: 210.0
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
[      5.0] E Npc_Navi - EventGoOffstageForUser (#102, concurrent=0)
               duration: 7443.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#59, concurrent=2)
[    100.0] L Player_Event[0] - EventTriggerSetCharaReflectionCaustics (#60, concurrent=3)
[    100.0] L Npc_Zora_Ruto_Adult_001[0] - EventTriggerSetCharaReflectionCaustics (#72, concurrent=1)
[    180.0] L UISystemActor[0] - EventEventFadeInForTimeline (#47, concurrent=0)
[    210.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[    210.0] L Dm_Locator[0] - EventPlayASForTimeline (#43, concurrent=0)
[    210.0] L Player_Event[0] - EventPlayASForTimeline (#49, concurrent=0)
[    210.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#58, concurrent=1)
[    210.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#73, concurrent=0)
[    210.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 310.0
               EndBluarLevel: 1.0
               EndDistance: 2.359999895095825
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.359999895095825
               StartFNumber: 15.0
[    210.0] E Dm_Locator[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 310.0
               ASName: C02-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    210.0] E Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 310.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    210.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#74, concurrent=0)
               duration: 310.0
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
[    520.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
[    520.0] L Dm_Locator[0] - EventPlayASForTimeline (#44, concurrent=0)
[    520.0] L Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
[    520.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#74, concurrent=0)
[    520.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 260.0
               EndBluarLevel: 0.699999988079071
               EndDistance: 3.0
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.699999988079071
               StartDistance: 3.0
               StartFNumber: 30.0
[    520.0] E Dm_Locator[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 260.0
               ASName: C03-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    520.0] E Player_Event[0] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 260.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    520.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#75, concurrent=0)
               duration: 260.0
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
[    520.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#88, concurrent=1)
               duration: 260.0
               Near: 0.20000000298023224
[    520.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#95, concurrent=0)
               duration: 260.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    575.0] E VoicePlayActor[0] - EventStartVoice (#0, concurrent=0)
               duration: 157.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[    732.0] L VoicePlayActor[0] - EventStartVoice (#0, concurrent=0)
[    780.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
[    780.0] L Dm_Locator[0] - EventPlayASForTimeline (#45, concurrent=0)
[    780.0] L Player_Event[0] - EventPlayASForTimeline (#51, concurrent=0)
[    780.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#75, concurrent=0)
[    780.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#88, concurrent=1)
[    780.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#95, concurrent=0)
[    780.0] E VoicePlayActor[0] - EventStartVoice (#1, concurrent=0)
               duration: 377.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[    780.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 840.0
               EndBluarLevel: 2.0
               EndDistance: 1.75
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.75
               StartFNumber: 40.0
[    780.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#61, concurrent=0)
               duration: 840.0
               ASName: C04-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    780.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#76, concurrent=0)
               duration: 840.0
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
[    780.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#89, concurrent=1)
               duration: 840.0
               Near: 0.5
[   1157.0] L VoicePlayActor[0] - EventStartVoice (#1, concurrent=0)
[   1185.0] E VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
               duration: 382.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   1567.0] L VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
[   1620.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
[   1620.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#61, concurrent=0)
[   1620.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#76, concurrent=0)
[   1620.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#89, concurrent=1)
[   1620.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
               duration: 490.0
               EndBluarLevel: 2.0
               EndDistance: 1.0
               EndFNumber: 150.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.0
               StartFNumber: 150.0
[   1620.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#62, concurrent=0)
               duration: 490.0
               ASName: AS-C04_50-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1620.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#77, concurrent=0)
               duration: 490.0
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
[   1620.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#90, concurrent=1)
               duration: 490.0
               Near: 0.20000000298023224
[   1622.0] E VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
               duration: 163.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   1785.0] L VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
[   1833.0] E VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
               duration: 259.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_003_c
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   2092.0] L VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
[   2096.0] E VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
               duration: 58.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_004_b
               OffsetFrame: 30
               Speaker: Player_Event
[   2110.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
[   2110.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#62, concurrent=0)
[   2110.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#77, concurrent=0)
[   2110.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#90, concurrent=1)
[   2110.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 220.0
               EndBluarLevel: 1.0
               EndDistance: 5.5
               EndFNumber: 13.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 5.5
               StartFNumber: 13.0
[   2110.0] E Player_Event[0] - EventPlayASForTimeline (#52, concurrent=0)
               duration: 220.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2110.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#63, concurrent=0)
               duration: 220.0
               ASName: C05-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2110.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#78, concurrent=0)
               duration: 220.0
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
[   2110.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#91, concurrent=1)
               duration: 220.0
               Near: 0.5
[   2110.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#96, concurrent=0)
               duration: 220.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2154.0] L VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
[   2170.0] E VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
               duration: 129.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   2299.0] L VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
[   2330.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
[   2330.0] L Player_Event[0] - EventPlayASForTimeline (#52, concurrent=0)
[   2330.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#63, concurrent=0)
[   2330.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#78, concurrent=0)
[   2330.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#91, concurrent=1)
[   2330.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#96, concurrent=0)
[   2330.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 1020.0
               EndBluarLevel: 2.0
               EndDistance: 1.5
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.5
               StartFNumber: 50.0
[   2330.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#64, concurrent=0)
               duration: 1020.0
               ASName: AS-C06-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2330.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#79, concurrent=0)
               duration: 1020.0
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
[   2427.0] E VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
               duration: 158.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   2585.0] L VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
[   2596.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 194.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   2790.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[   2867.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 396.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   3263.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[   3350.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
[   3350.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#64, concurrent=0)
[   3350.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#79, concurrent=0)
[   3350.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 440.0
               EndBluarLevel: 2.0
               EndDistance: 1.7999999523162842
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.7999999523162842
               StartFNumber: 100.0
[   3350.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#65, concurrent=0)
               duration: 440.0
               ASName: AS-C07-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3350.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#80, concurrent=0)
               duration: 440.0
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
[   3354.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 433.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   3787.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[   3790.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
[   3790.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#65, concurrent=0)
[   3790.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#80, concurrent=0)
[   3790.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 160.0
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
[   3790.0] E Player_Event[0] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 160.0
               ASName: C08-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3790.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#81, concurrent=0)
               duration: 160.0
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
[   3790.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#97, concurrent=0)
               duration: 160.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3805.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 70.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   3875.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   3941.0] E VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
               duration: 363.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   3950.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
[   3950.0] L Player_Event[0] - EventPlayASForTimeline (#53, concurrent=0)
[   3950.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#81, concurrent=0)
[   3950.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#97, concurrent=0)
[   3950.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 660.0
               EndBluarLevel: 0.0
               EndDistance: 14.0
               EndFNumber: 18.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 14.0
               StartFNumber: 18.0
[   3950.0] E Player_Event[0] - EventPlayASForTimeline (#54, concurrent=0)
               duration: 660.0
               ASName: C08_50-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3950.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#66, concurrent=0)
               duration: 660.0
               ASName: AS-C08_50-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3950.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#82, concurrent=0)
               duration: 660.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C08_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   3950.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#98, concurrent=0)
               duration: 660.0
               ASName: C08_50-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4304.0] L VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
[   4373.0] E VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
               duration: 482.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   4610.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
[   4610.0] L Player_Event[0] - EventPlayASForTimeline (#54, concurrent=0)
[   4610.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#66, concurrent=0)
[   4610.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#82, concurrent=0)
[   4610.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#98, concurrent=0)
[   4610.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 120.0
               EndBluarLevel: 0.0
               EndDistance: 4.5
               EndFNumber: 38.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 4.5
               StartFNumber: 38.0
[   4610.0] E Player_Event[0] - EventPlayASForTimeline (#55, concurrent=0)
               duration: 1130.0
               ASName: C09-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4610.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 1130.0
               ASName: AS-C09-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4610.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#83, concurrent=0)
               duration: 1130.0
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
[   4610.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#99, concurrent=0)
               duration: 1130.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4730.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
[   4730.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 90.0
               EndBluarLevel: 0.0
               EndDistance: 2.700000047683716
               EndFNumber: 38.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 4.5
               StartFNumber: 38.0
[   4820.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
[   4820.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#35, concurrent=0)
               duration: 920.0
               EndBluarLevel: 0.0
               EndDistance: 2.700000047683716
               EndFNumber: 38.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.700000047683716
               StartFNumber: 38.0
[   4855.0] L VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
[   4952.0] E VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
               duration: 75.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_013_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   5027.0] L VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
[   5046.0] E VoicePlayActor[1] - EventStartVoice (#22, concurrent=0)
               duration: 249.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_014_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   5270.0] E VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
               duration: 53.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_015_b
               OffsetFrame: 30
               Speaker: Player_Event
[   5295.0] L VoicePlayActor[1] - EventStartVoice (#22, concurrent=0)
[   5323.0] L VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
[   5379.0] E VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
               duration: 170.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_016_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   5549.0] L VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
[   5565.0] E VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
               duration: 88.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_017_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   5653.0] L VoicePlayActor[0] - EventStartVoice (#17, concurrent=0)
[   5740.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#35, concurrent=0)
[   5740.0] L Player_Event[0] - EventPlayASForTimeline (#55, concurrent=0)
[   5740.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#67, concurrent=0)
[   5740.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#83, concurrent=0)
[   5740.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#99, concurrent=0)
[   5740.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#36, concurrent=0)
               duration: 320.0
               EndBluarLevel: 0.0
               EndDistance: 5.5
               EndFNumber: 13.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 5.5
               StartFNumber: 13.0
[   5740.0] E Player_Event[0] - EventPlayASForTimeline (#56, concurrent=0)
               duration: 320.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5740.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#68, concurrent=0)
               duration: 320.0
               ASName: AS-C10-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5740.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#84, concurrent=0)
               duration: 320.0
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
[   5740.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#92, concurrent=1)
               duration: 320.0
               Near: 0.10000000149011612
[   5740.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#100, concurrent=0)
               duration: 320.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5768.0] E VoicePlayActor[0] - EventStartVoice (#18, concurrent=0)
               duration: 381.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_018_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   6060.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#36, concurrent=0)
[   6060.0] L Player_Event[0] - EventPlayASForTimeline (#56, concurrent=0)
[   6060.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#68, concurrent=0)
[   6060.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#84, concurrent=0)
[   6060.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#92, concurrent=1)
[   6060.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#100, concurrent=0)
[   6060.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#37, concurrent=0)
               duration: 600.0
               EndBluarLevel: 0.0
               EndDistance: 4.0
               EndFNumber: 74.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 4.0
               StartFNumber: 74.0
[   6060.0] E Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
               duration: 600.0
               ASName: AS-C12-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6060.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#69, concurrent=0)
               duration: 600.0
               ASName: C12-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6060.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#85, concurrent=0)
               duration: 600.0
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
[   6060.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#101, concurrent=0)
               duration: 600.0
               ASName: C12-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6149.0] L VoicePlayActor[0] - EventStartVoice (#18, concurrent=0)
[   6241.0] E VoicePlayActor[0] - EventStartVoice (#19, concurrent=0)
               duration: 356.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_019_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   6597.0] L VoicePlayActor[0] - EventStartVoice (#19, concurrent=0)
[   6660.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#37, concurrent=0)
[   6660.0] L Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
[   6660.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#69, concurrent=0)
[   6660.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#85, concurrent=0)
[   6660.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#101, concurrent=0)
[   6660.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#38, concurrent=0)
               duration: 440.0
               EndBluarLevel: 2.0
               EndDistance: 3.0
               EndFNumber: 120.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 3.0
               StartFNumber: 120.0
[   6660.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#70, concurrent=0)
               duration: 440.0
               ASName: AS-C13-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6660.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#86, concurrent=0)
               duration: 440.0
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
[   6660.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#93, concurrent=1)
               duration: 440.0
               Near: 0.10000000149011612
[   6698.0] E VoicePlayActor[0] - EventStartVoice (#20, concurrent=0)
               duration: 247.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_020_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   6945.0] L VoicePlayActor[0] - EventStartVoice (#20, concurrent=0)
[   7070.0] E VoicePlayActor[0] - EventStartVoice (#21, concurrent=0)
               duration: 180.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Water:Dm_Awake_Water_Text_021_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Adult_001
[   7100.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#38, concurrent=0)
[   7100.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#70, concurrent=0)
[   7100.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#86, concurrent=0)
[   7100.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#93, concurrent=1)
[   7100.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#39, concurrent=0)
               duration: 50.0
               EndBluarLevel: 0.0
               EndDistance: 3.0
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.0
               StartFNumber: 20.0
[   7100.0] E Dm_Locator[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 348.0
               ASName: C14-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7100.0] E Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#71, concurrent=0)
               duration: 348.0
               ASName: C14-Npc_Zora_ZU_Ruto_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7100.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#87, concurrent=0)
               duration: 348.0
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
[   7100.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#94, concurrent=1)
               duration: 348.0
               Near: 0.10000000149011612
[   7150.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#39, concurrent=0)
[   7150.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#40, concurrent=0)
               duration: 90.0
               EndBluarLevel: 0.0
               EndDistance: 1.2999999523162842
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 3.0
               StartFNumber: 20.0
[   7240.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#40, concurrent=0)
[   7240.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#41, concurrent=0)
               duration: 64.0
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
               StartDistance: 1.2999999523162842
               StartFNumber: 50.0
[   7250.0] L VoicePlayActor[0] - EventStartVoice (#21, concurrent=0)
[   7304.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#41, concurrent=0)
[   7304.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#42, concurrent=0)
               duration: 144.0
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
[   7320.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#48, concurrent=0)
               duration: 128.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   7448.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#42, concurrent=0)
[   7448.0] L Dm_Locator[0] - EventPlayASForTimeline (#46, concurrent=0)
[   7448.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#48, concurrent=0)
[   7448.0] L Npc_Zora_Ruto_Adult_001[0] - EventPlayASForTimeline (#71, concurrent=0)
[   7448.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#87, concurrent=0)
[   7448.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#94, concurrent=1)
[   7448.0] L Npc_Navi - EventGoOffstageForUser (#102, concurrent=0)
