-------- Event timeline: Dm_Awake_Fire --------
actors: 9
clips: 91
oneshots: 0
cuts: 14
duration: 5000.0
subtimelines: ['Dm_Awake_Fire_Effect', 'Dm_Awake_Fire_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 210.0
x4: 0
params: (none)

Cut: C03
start time: 520.0
x4: 0
params: (none)

Cut: C04
start time: 780.0
x4: 0
params: (none)

Cut: C05
start time: 1190.0
x4: 0
params: (none)

Cut: C06
start time: 1710.0
x4: 0
params: (none)

Cut: C07
start time: 2150.0
x4: 0
params: (none)

Cut: C07-50
start time: 2350.0
x4: 0
params: (none)

Cut: C08
start time: 2850.0
x4: 0
params: (none)

Cut: C08-50
start time: 3090.0
x4: 0
params: (none)

Cut: C09
start time: 3870.0
x4: 0
params: (none)

Cut: C10
start time: 4070.0
x4: 0
params: (none)

Cut: C11
start time: 4350.0
x4: 0
params: (none)

Cut: C12
start time: 4560.0
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
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Fire/Dm_Awake_Fire_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Fire/Dm_Awake_Fire_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Goron_Darunia_Adult[0]
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventTriggerSetCharaReflectionCaustics']
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
UseEventModelAnime: Work/Model/Event/Dm_Awake_Fire/Dm_Awake_Fire_Npc_Goron_GOU_Darunia/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Fire/Dm_Awake_Fire_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Npc_Navi[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Awake_Fire/Dm_Awake_Fire_Npc_Navi/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 210.0
               EndBluarLevel: 0.0
               EndDistance: 8.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 8.0
               StartFNumber: 10.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
               duration: 210.0
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
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#53, concurrent=0)
               duration: 210.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#63, concurrent=1)
               duration: 210.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#64, concurrent=2)
               duration: 210.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerSetCharaReflectionCaustics (#65, concurrent=3)
               duration: 210.0
               DampEndHeightRatio: 0.699999988079071
               DampStartHeightRaito: 0.0
               Intensity: 0.20000000298023224
[      0.0] E Npc_Goron_Darunia_Adult[0] - EventTriggerSetCharaReflectionCaustics (#85, concurrent=1)
               duration: 210.0
               DampEndHeightRatio: 0.30000001192092896
               DampStartHeightRaito: 0.0
               Intensity: 0.20000000298023224
[      0.0] E Dm_Locator[0] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 210.0
               ASName: C01-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#90, concurrent=0)
               duration: 5000.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    210.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[    210.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#35, concurrent=0)
[    210.0] L Player_Event[0] - EventPlayASForTimeline (#53, concurrent=0)
[    210.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#63, concurrent=1)
[    210.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#64, concurrent=2)
[    210.0] L Player_Event[0] - EventTriggerSetCharaReflectionCaustics (#65, concurrent=3)
[    210.0] L Npc_Goron_Darunia_Adult[0] - EventTriggerSetCharaReflectionCaustics (#85, concurrent=1)
[    210.0] L Dm_Locator[0] - EventPlayASForTimeline (#86, concurrent=0)
[    210.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 310.0
               EndBluarLevel: 1.0
               EndDistance: 3.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.0
               StartFNumber: 10.0
[    210.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
               duration: 310.0
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
[    210.0] E Player_Event[0] - EventPlayASForTimeline (#54, concurrent=0)
               duration: 310.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    210.0] E Dm_Locator[0] - EventPlayASForTimeline (#87, concurrent=0)
               duration: 310.0
               ASName: C02-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    520.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[    520.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#36, concurrent=0)
[    520.0] L Player_Event[0] - EventPlayASForTimeline (#54, concurrent=0)
[    520.0] L Dm_Locator[0] - EventPlayASForTimeline (#87, concurrent=0)
[    520.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 260.0
               EndBluarLevel: 1.2999999523162842
               EndDistance: 7.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2999999523162842
               StartDistance: 7.5
               StartFNumber: 20.0
[    520.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
               duration: 260.0
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
[    520.0] E Player_Event[0] - EventPlayASForTimeline (#55, concurrent=0)
               duration: 260.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    520.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#66, concurrent=0)
               duration: 260.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    520.0] E Dm_Locator[0] - EventPlayASForTimeline (#88, concurrent=0)
               duration: 670.0
               ASName: C03-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    632.0] E VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
               duration: 146.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[    778.0] L VoicePlayActor[0] - EventStartVoice (#2, concurrent=0)
[    780.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[    780.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#37, concurrent=0)
[    780.0] L Player_Event[0] - EventPlayASForTimeline (#55, concurrent=0)
[    780.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#66, concurrent=0)
[    780.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 105.0
               EndBluarLevel: 1.5
               EndDistance: 3.4000000953674316
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 3.4000000953674316
               StartFNumber: 20.0
[    780.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
               duration: 410.0
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
[    780.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 410.0
               ASName: C04-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    858.0] E VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
               duration: 182.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_000_c
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[    885.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[    885.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 60.0
               EndBluarLevel: 1.5
               EndDistance: 2.799999952316284
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 3.4000000953674316
               StartFNumber: 20.0
[    945.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[    945.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 97.0
               EndBluarLevel: 1.5
               EndDistance: 2.4000000953674316
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 2.799999952316284
               StartFNumber: 20.0
[   1040.0] L VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
[   1042.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   1042.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 148.0
               EndBluarLevel: 1.5
               EndDistance: 2.200000047683716
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 2.4000000953674316
               StartFNumber: 40.0
[   1190.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   1190.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#38, concurrent=0)
[   1190.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#74, concurrent=0)
[   1190.0] L Dm_Locator[0] - EventPlayASForTimeline (#88, concurrent=0)
[   1190.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
               duration: 520.0
               EndBluarLevel: 1.0
               EndDistance: 2.5
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 2.5
               StartFNumber: 15.0
[   1190.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
               duration: 520.0
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
[   1190.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#49, concurrent=1)
               duration: 520.0
               Near: 0.10000000149011612
[   1190.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#75, concurrent=0)
               duration: 520.0
               ASName: C05-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1195.0] E VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
               duration: 459.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   1654.0] L VoicePlayActor[0] - EventStartVoice (#4, concurrent=0)
[   1710.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#24, concurrent=0)
[   1710.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#39, concurrent=0)
[   1710.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#49, concurrent=1)
[   1710.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#75, concurrent=0)
[   1710.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
               duration: 440.0
               EndBluarLevel: 0.0
               EndDistance: 8.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 8.0
               StartFNumber: 10.0
[   1710.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
               duration: 440.0
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
[   1710.0] E Player_Event[0] - EventPlayASForTimeline (#56, concurrent=0)
               duration: 440.0
               ASName: C06-Player_Adult-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1710.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 440.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1710.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#76, concurrent=0)
               duration: 440.0
               ASName: C06-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1748.0] E VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
               duration: 369.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   2117.0] L VoicePlayActor[0] - EventStartVoice (#5, concurrent=0)
[   2136.0] E VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
               duration: 197.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2150.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#25, concurrent=0)
[   2150.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#40, concurrent=0)
[   2150.0] L Player_Event[0] - EventPlayASForTimeline (#56, concurrent=0)
[   2150.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#67, concurrent=0)
[   2150.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#76, concurrent=0)
[   2150.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
               duration: 200.0
               EndBluarLevel: 1.0
               EndDistance: 10.5
               EndFNumber: 18.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 10.5
               StartFNumber: 18.0
[   2150.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
               duration: 200.0
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
[   2150.0] E Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
               duration: 200.0
               ASName: C07-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2150.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#68, concurrent=0)
               duration: 200.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2150.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#77, concurrent=0)
               duration: 200.0
               ASName: C07-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2333.0] L VoicePlayActor[0] - EventStartVoice (#6, concurrent=0)
[   2350.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#26, concurrent=0)
[   2350.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#41, concurrent=0)
[   2350.0] L Player_Event[0] - EventPlayASForTimeline (#57, concurrent=0)
[   2350.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#68, concurrent=0)
[   2350.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#77, concurrent=0)
[   2350.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
               duration: 500.0
               EndBluarLevel: 1.5
               EndDistance: 3.0
               EndFNumber: 17.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 3.0
               StartFNumber: 17.0
[   2350.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
               duration: 500.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C07_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   2350.0] E Player_Event[0] - EventPlayASForTimeline (#58, concurrent=0)
               duration: 500.0
               ASName: C07_50-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2350.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#69, concurrent=0)
               duration: 500.0
               ASName: C07_50-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2350.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#78, concurrent=0)
               duration: 500.0
               ASName: C07_50-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2384.0] E VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
               duration: 59.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   2443.0] L VoicePlayActor[0] - EventStartVoice (#7, concurrent=0)
[   2525.0] E VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
               duration: 306.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   2831.0] L VoicePlayActor[0] - EventStartVoice (#8, concurrent=0)
[   2850.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#27, concurrent=0)
[   2850.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#42, concurrent=0)
[   2850.0] L Player_Event[0] - EventPlayASForTimeline (#58, concurrent=0)
[   2850.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#69, concurrent=0)
[   2850.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#78, concurrent=0)
[   2850.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
               duration: 240.0
               EndBluarLevel: 1.5
               EndDistance: 7.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 7.0
               StartFNumber: 15.0
[   2850.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
               duration: 240.0
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
[   2850.0] E Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
               duration: 240.0
               ASName: C08-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2850.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#70, concurrent=0)
               duration: 240.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2850.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#79, concurrent=0)
               duration: 240.0
               ASName: C08-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2865.0] E VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
               duration: 182.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   3047.0] L VoicePlayActor[0] - EventStartVoice (#9, concurrent=0)
[   3090.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#28, concurrent=0)
[   3090.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#43, concurrent=0)
[   3090.0] L Player_Event[0] - EventPlayASForTimeline (#59, concurrent=0)
[   3090.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#70, concurrent=0)
[   3090.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#79, concurrent=0)
[   3090.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
               duration: 780.0
               EndBluarLevel: 1.5
               EndDistance: 1.7999999523162842
               EndFNumber: 28.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.7999999523162842
               StartFNumber: 28.0
[   3090.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
               duration: 780.0
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
[   3090.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#50, concurrent=1)
               duration: 780.0
               Near: 0.10000000149011612
[   3090.0] E Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
               duration: 780.0
               ASName: C08_50-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3090.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#71, concurrent=0)
               duration: 780.0
               ASName: C08_50-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3090.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#80, concurrent=0)
               duration: 780.0
               ASName: C08_50-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3103.0] E VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
               duration: 172.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_006_c
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   3275.0] L VoicePlayActor[0] - EventStartVoice (#10, concurrent=0)
[   3336.0] E VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
               duration: 165.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   3501.0] L VoicePlayActor[0] - EventStartVoice (#11, concurrent=0)
[   3518.0] E VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
               duration: 297.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_008_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   3815.0] L VoicePlayActor[0] - EventStartVoice (#12, concurrent=0)
[   3870.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#29, concurrent=0)
[   3870.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#44, concurrent=0)
[   3870.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#50, concurrent=1)
[   3870.0] L Player_Event[0] - EventPlayASForTimeline (#60, concurrent=0)
[   3870.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#71, concurrent=0)
[   3870.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#80, concurrent=0)
[   3870.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
               duration: 200.0
               EndBluarLevel: 1.5
               EndDistance: 3.0
               EndFNumber: 38.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 3.0
               StartFNumber: 38.0
[   3870.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
               duration: 200.0
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
[   3870.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#51, concurrent=1)
               duration: 200.0
               Near: 0.10000000149011612
[   3870.0] E Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
               duration: 200.0
               ASName: C09-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3870.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#72, concurrent=0)
               duration: 200.0
               ASName: C09-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3870.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#81, concurrent=0)
               duration: 200.0
               ASName: C09-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3946.0] E VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
               duration: 87.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   4033.0] L VoicePlayActor[0] - EventStartVoice (#13, concurrent=0)
[   4058.0] E VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
               duration: 278.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_009_c
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   4070.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#30, concurrent=0)
[   4070.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#45, concurrent=0)
[   4070.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#51, concurrent=1)
[   4070.0] L Player_Event[0] - EventPlayASForTimeline (#61, concurrent=0)
[   4070.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#72, concurrent=0)
[   4070.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#81, concurrent=0)
[   4070.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
               duration: 280.0
               EndBluarLevel: 0.0
               EndDistance: 18.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 18.0
               StartFNumber: 15.0
[   4070.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
               duration: 280.0
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
[   4070.0] E Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
               duration: 280.0
               ASName: C10-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4070.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
               duration: 280.0
               ASName: C10-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4070.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#82, concurrent=0)
               duration: 280.0
               ASName: C10-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4336.0] L VoicePlayActor[0] - EventStartVoice (#14, concurrent=0)
[   4350.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#31, concurrent=0)
[   4350.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#46, concurrent=0)
[   4350.0] L Player_Event[0] - EventPlayASForTimeline (#62, concurrent=0)
[   4350.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#73, concurrent=0)
[   4350.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#82, concurrent=0)
[   4350.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
               duration: 210.0
               EndBluarLevel: 2.0
               EndDistance: 4.5
               EndFNumber: 20.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 4.5
               StartFNumber: 20.0
[   4350.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
               duration: 210.0
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
[   4350.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#83, concurrent=0)
               duration: 210.0
               ASName: C11-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4361.0] E VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
               duration: 180.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   4541.0] L VoicePlayActor[0] - EventStartVoice (#15, concurrent=0)
[   4560.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#32, concurrent=0)
[   4560.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#47, concurrent=0)
[   4560.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#83, concurrent=0)
[   4560.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
               duration: 40.0
               EndBluarLevel: 0.0
               EndDistance: 2.0
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 4.5
               StartFNumber: 20.0
[   4560.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
               duration: 440.0
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
[   4560.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#52, concurrent=1)
               duration: 440.0
               Near: 0.10000000149011612
[   4560.0] E Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#84, concurrent=0)
               duration: 440.0
               ASName: C12-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4560.0] E Dm_Locator[0] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 440.0
               ASName: C12-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4570.0] E VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
               duration: 218.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Awake_Fire:Dm_Awake_Fire_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Adult
[   4600.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#33, concurrent=0)
[   4600.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
               duration: 400.0
               EndBluarLevel: 0.0
               EndDistance: 2.0
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.0
               StartFNumber: 25.0
[   4788.0] L VoicePlayActor[0] - EventStartVoice (#16, concurrent=0)
[   4850.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 150.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   5000.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[   5000.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#34, concurrent=0)
[   5000.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#48, concurrent=0)
[   5000.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#52, concurrent=1)
[   5000.0] L Npc_Goron_Darunia_Adult[0] - EventPlayASForTimeline (#84, concurrent=0)
[   5000.0] L Dm_Locator[0] - EventPlayASForTimeline (#89, concurrent=0)
[   5000.0] L Npc_Navi[0] - EventGoOffstageForUser (#90, concurrent=0)
