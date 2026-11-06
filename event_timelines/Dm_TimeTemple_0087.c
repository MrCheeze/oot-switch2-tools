-------- Event timeline: Dm_TimeTemple_0087 --------
actors: 7
clips: 12
oneshots: 0
cuts: 2
duration: 615.0
subtimelines: ['Dm_TimeTemple_0087_Effect', 'Dm_TimeTemple_0087_Env']
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


===== Actors =====

Actor: PostProcessingActor[1]
concurrent clips: 1
actions: ['EventOverwriteSceneShadingParams']
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

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Player_Event[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
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
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0087/Dm_TimeTemple_0087_Player_Child/workspace.pp__ModelProject.gyml

Actor: Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_TimeTemple_0087/Dm_TimeTemple_0087_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: EventCamera[0]
concurrent clips: 1
actions: ['EventMoveCameraAnimationInstructions']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#1, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 300.0
               EndBluarLevel: 0.0
               EndDistance: 2.5
               EndFNumber: 45.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: true
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.5
               StartFNumber: 45.0
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#6, concurrent=0)
               duration: 300.0
               ASName: C01-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi[0] - EventPlayASForTimeline (#8, concurrent=0)
               duration: 300.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#10, concurrent=0)
               duration: 300.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: true
               IsWaitEnd: false
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C01-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#1, concurrent=0)
[     75.0] E VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
               duration: 162.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_TimeTemple_0087:Dm_TimeTemple_0087_Text_001_b
               OffsetFrame: 30
               Speaker: Npc_Kaepora
[    237.0] L VoicePlayActor[0] - EventStartVoice (#3, concurrent=0)
[    300.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    300.0] L Player_Event[0] - EventPlayASForTimeline (#6, concurrent=0)
[    300.0] L Npc_Navi[0] - EventPlayASForTimeline (#8, concurrent=0)
[    300.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#10, concurrent=0)
[    300.0] E PostProcessingActor[1] - EventOverwriteSceneShadingParams (#0, concurrent=0)
               duration: 100.0
               BakeLightLuminanceRatio: 0.0
               InnerRatio: 0.0
               IsOverwriteBakeLightLuminanceRatio: true
               IsOverwriteInnerRatio: false
               IsOverwriteShadowRatio: true
               ShadowRatio: 1.0
[    300.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 315.0
               EndBluarLevel: 0.0
               EndDistance: 2.5
               EndFNumber: 43.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 2.5
               StartFNumber: 43.0
[    300.0] E Player_Event[0] - EventPlayASForTimeline (#7, concurrent=0)
               duration: 315.0
               ASName: C02-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    300.0] E Npc_Navi[0] - EventPlayASForTimeline (#9, concurrent=0)
               duration: 315.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    300.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#11, concurrent=0)
               duration: 315.0
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
[    400.0] L PostProcessingActor[1] - EventOverwriteSceneShadingParams (#0, concurrent=0)
[    555.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#2, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[    615.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#2, concurrent=0)
[    615.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[    615.0] L Player_Event[0] - EventPlayASForTimeline (#7, concurrent=0)
[    615.0] L Npc_Navi[0] - EventPlayASForTimeline (#9, concurrent=0)
[    615.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#11, concurrent=0)
