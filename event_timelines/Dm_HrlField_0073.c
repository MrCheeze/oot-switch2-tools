-------- Event timeline: Dm_HrlField_0073 --------
actors: 10
clips: 30
oneshots: 0
cuts: 4
duration: 935.0
subtimelines: ['Dm_HrlField_0073_Env', 'Dm_HrlField_0073_Effect']
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 301.0
x4: 0
params: (none)

Cut: cut03
start time: 472.0
x4: 0
params: (none)

Cut: cut04
start time: 603.0
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

Actor: PostProcessingActor
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Npc_Navi[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser']
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
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0073/Dm_HrlField_0073_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Ingo_002_Adult[0]
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
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0073/Dm_HrlField_0073_Npc_Hylia_MU_Ingo_Adult/workspace.pp__ModelProject.gyml

Actor: Npc_Hylia_Malon_Adult[0]
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
UseEventAS: Work/AS/Root/Event/Dm_HrlField_0073_Npc_Hylia_WN_Malon_Adult.root.as
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0073/Dm_HrlField_0073_Npc_Hylia_WN_Malon_Adult/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
concurrent clips: 4
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerPlayerTemporaryBootsChange', 'EventTriggerPlayerOnRideCollidable']
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
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0073/Dm_HrlField_0073_Player_Adult/workspace.pp__ModelProject.gyml

Actor: EventCamera[0]
concurrent clips: 1
actions: ['EventMoveCameraAnimationInstructions']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0073/Dm_HrlField_0073/workspace.pp__ModelProject.gyml

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Animal_Epona_Adult[Animal_Horse_Epona_Adult_Owned]
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
UseEventModelAnime: Work/Model/Event/Dm_HrlField_0073/Dm_HrlField_0073_Animal_Horse_Epona_Adult/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E PostProcessingActor - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 301.0
               EndBluarLevel: 1.0
               EndDistance: 9.25
               EndFNumber: 68.5999984741211
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 9.25
               StartFNumber: 68.5999984741211
[      0.0] E Npc_Navi[0] - EventGoOffstageForUser (#6, concurrent=0)
               duration: 935.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#7, concurrent=0)
               duration: 301.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Hylia_Ingo_002_Adult[0] - EventPlayASForTimeline (#11, concurrent=0)
               duration: 301.0
               ASName: C01-Npc_Hylia_MU_Ingo_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Hylia_Malon_Adult[0] - EventPlayASForTimeline (#12, concurrent=0)
               duration: 301.0
               ASName: AS-C01-Npc_Hylia_WN_Malon_Adult-A-0.fskb
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#13, concurrent=0)
               duration: 301.0
               ASName: C01-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#17, concurrent=1)
               duration: 100.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#18, concurrent=2)
               duration: 100.0
               BootsType: 0
[      0.0] E Player_Event[0] - EventTriggerPlayerOnRideCollidable (#19, concurrent=3)
               duration: 301.0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
               duration: 301.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: false
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#24, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Animal_Epona_Adult[Animal_Horse_Epona_Adult_Owned] - EventPlayASForTimeline (#26, concurrent=0)
               duration: 301.0
               ASName: C01-Animal_Horse_Epona_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[     50.0] E VoicePlayActor[0] - EventStartVoice (#0, concurrent=0)
               duration: 143.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0073:Dm_HrlField_0073_0000
               OffsetFrame: 30
               Speaker: Npc_Hylia_Ingo_001_Adult
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#24, concurrent=0)
[    100.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#17, concurrent=1)
[    100.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#18, concurrent=2)
[    193.0] L VoicePlayActor[0] - EventStartVoice (#0, concurrent=0)
[    210.0] E VoicePlayActor[0] - EventStartVoice (#1, concurrent=0)
               duration: 89.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_HrlField_0073:Dm_HrlField_0073_0001
               OffsetFrame: 30
               Speaker: Npc_Hylia_Malon_Adult
[    299.0] L VoicePlayActor[0] - EventStartVoice (#1, concurrent=0)
[    301.0] L PostProcessingActor - EventSetDoFForTimeline (#2, concurrent=0)
[    301.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#7, concurrent=0)
[    301.0] L Npc_Hylia_Ingo_002_Adult[0] - EventPlayASForTimeline (#11, concurrent=0)
[    301.0] L Npc_Hylia_Malon_Adult[0] - EventPlayASForTimeline (#12, concurrent=0)
[    301.0] L Player_Event[0] - EventPlayASForTimeline (#13, concurrent=0)
[    301.0] L Player_Event[0] - EventTriggerPlayerOnRideCollidable (#19, concurrent=3)
[    301.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#20, concurrent=0)
[    301.0] L Animal_Epona_Adult[Animal_Horse_Epona_Adult_Owned] - EventPlayASForTimeline (#26, concurrent=0)
[    301.0] E PostProcessingActor - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 171.0
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
[    301.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#8, concurrent=0)
               duration: 171.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    301.0] E Player_Event[0] - EventPlayASForTimeline (#14, concurrent=0)
               duration: 171.0
               ASName: C02-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    301.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
               duration: 171.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: false
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C02-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    301.0] E Animal_Epona_Adult[Animal_Horse_Epona_Adult_Owned] - EventPlayASForTimeline (#27, concurrent=0)
               duration: 171.0
               ASName: C02-Animal_Horse_Epona_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    472.0] L PostProcessingActor - EventSetDoFForTimeline (#3, concurrent=0)
[    472.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#8, concurrent=0)
[    472.0] L Player_Event[0] - EventPlayASForTimeline (#14, concurrent=0)
[    472.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#21, concurrent=0)
[    472.0] L Animal_Epona_Adult[Animal_Horse_Epona_Adult_Owned] - EventPlayASForTimeline (#27, concurrent=0)
[    472.0] E PostProcessingActor - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 131.0
               EndBluarLevel: 1.0
               EndDistance: 3.799999952316284
               EndFNumber: 100.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 3.799999952316284
               StartFNumber: 100.0
[    472.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#9, concurrent=0)
               duration: 131.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    472.0] E Player_Event[0] - EventPlayASForTimeline (#15, concurrent=0)
               duration: 131.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    472.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
               duration: 131.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: false
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    472.0] E Animal_Epona_Adult[Animal_Horse_Epona_Adult_Owned] - EventPlayASForTimeline (#28, concurrent=0)
               duration: 131.0
               ASName: C03-Animal_Horse_Epona_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    603.0] L PostProcessingActor - EventSetDoFForTimeline (#4, concurrent=0)
[    603.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#9, concurrent=0)
[    603.0] L Player_Event[0] - EventPlayASForTimeline (#15, concurrent=0)
[    603.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#22, concurrent=0)
[    603.0] L Animal_Epona_Adult[Animal_Horse_Epona_Adult_Owned] - EventPlayASForTimeline (#28, concurrent=0)
[    603.0] E PostProcessingActor - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 332.0
               EndBluarLevel: 0.5
               EndDistance: 7.75
               EndFNumber: 25.700000762939453
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 7.75
               StartFNumber: 25.700000762939453
[    603.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#10, concurrent=0)
               duration: 332.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    603.0] E Player_Event[0] - EventPlayASForTimeline (#16, concurrent=0)
               duration: 332.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    603.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
               duration: 332.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: false
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C04-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[    603.0] E Animal_Epona_Adult[Animal_Horse_Epona_Adult_Owned] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 332.0
               ASName: C04-Animal_Horse_Epona_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    875.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#25, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[    935.0] L PostProcessingActor - EventSetDoFForTimeline (#5, concurrent=0)
[    935.0] L Npc_Navi[0] - EventGoOffstageForUser (#6, concurrent=0)
[    935.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#10, concurrent=0)
[    935.0] L Player_Event[0] - EventPlayASForTimeline (#16, concurrent=0)
[    935.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#23, concurrent=0)
[    935.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#25, concurrent=0)
[    935.0] L Animal_Epona_Adult[Animal_Horse_Epona_Adult_Owned] - EventPlayASForTimeline (#29, concurrent=0)
