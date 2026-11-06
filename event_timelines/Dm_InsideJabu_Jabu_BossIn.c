-------- Event timeline: Dm_InsideJabu_Jabu_BossIn --------
actors: 25
clips: 93
oneshots: 0
cuts: 7
duration: 2840.0
subtimelines: ['Dm_InsideJabu_Jabu_BossIn_Effect', 'Dm_InsideJabu_Jabu_BossIn_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 320.0
x4: 0
params: (none)

Cut: C03
start time: 850.0
x4: 0
params: (none)

Cut: C04
start time: 1170.0
x4: 0
params: (none)

Cut: C05
start time: 1360.0
x4: 0
params: (none)

Cut: C06
start time: 1800.0
x4: 0
params: (none)

Cut: C07
start time: 2000.0
x4: 0
params: (none)


===== Actors =====

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn/workspace.pp__ModelProject.gyml

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetDoFForTimeline', 'EventResetToInGameParametersDoF']
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

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeInForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerSoundStartBossBgm']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[3]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: ElasticBodyCollideObject[2]
concurrent clips: 2
actions: ['EventModelBind', 'EventNodeSetPushRadius']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

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
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Player_Child/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: ElasticBodyCollideObject[0]
concurrent clips: 2
actions: ['EventModelBind', 'EventNodeSetPushRadius']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: true
IsWorld: true
Position:
- 42.27000045776367
- 100.41000366210938
- -112.0999984741211
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Enemy_DungeonBoss_Barinade
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventGoOffstageForUser', 'EventDungeonBossSetConsiderBattlePresentation']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: ''
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Enemy_DungeonBoss_Barinade/workspace.pp__ModelProject.gyml

Actor: Obj_InsideJabu_Jabu_SwitchShutter_A_03[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
Position:
- 0.0
- 0.0
- 0.0
Rotation:
- 0.0
- 0.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Obj_InsideJabu_Jabu_SwitchShutter_A/workspace.pp__ModelProject.gyml

Actor: Obj_InsideJabu_Jabu_SwitchShutter_A_01[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 41.92757034301758
- 104.01290130615234
- -92.74153137207031
Rotation:
- -180.0
- 0.0
- -180.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Enemy_DungeonBoss_Barinade_Jellyfish[A]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Enemy_DungeonBoss_Barinade_Jellyfish/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Barinade_Jellyfish[B]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Enemy_DungeonBoss_Barinade_Jellyfish/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Barinade_Jellyfish[C]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Enemy_DungeonBoss_Barinade_Jellyfish/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Barinade_Jellyfish[D]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Enemy_DungeonBoss_Barinade_Jellyfish/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Barinade_Jellyfish[E]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Enemy_DungeonBoss_Barinade_Jellyfish/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Barinade_Jellyfish[F]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Enemy_DungeonBoss_Barinade_Jellyfish/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Barinade_Jellyfish[G]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Enemy_DungeonBoss_Barinade_Jellyfish/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Barinade_Jellyfish[H]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Enemy_DungeonBoss_Barinade_Jellyfish/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Barinade_Jellyfish[I]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Enemy_DungeonBoss_Barinade_Jellyfish/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_Barinade_Jellyfish[J]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_InsideJabu_Jabu_BossIn/Dm_InsideJabu_Jabu_BossIn_Enemy_DungeonBoss_Barinade_Jellyfish/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#0, concurrent=0)
               duration: 320.0
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
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
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
[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#26, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E ElasticBodyCollideObject[2] - EventModelBind (#30, concurrent=0)
               duration: 2001.0
               ActorName: Player_Event
               BoneName: Skl_Root
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
[      0.0] E ElasticBodyCollideObject[2] - EventNodeSetPushRadius (#32, concurrent=1)
               duration: 100.0
               PushRadius: 0.6499999761581421
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 320.0
               ASName: C01-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#40, concurrent=1)
               duration: 320.0
[      0.0] E Npc_Navi - EventGoOffstageForUser (#41, concurrent=0)
               duration: 2000.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 320.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Dm_Locator[0] - EventDoNothing (#53, concurrent=0)
               duration: 2840.0
               IsWaitEnd: true
[      0.0] E Obj_InsideJabu_Jabu_SwitchShutter_A_03[0] - EventPlayASForTimeline (#59, concurrent=0)
               duration: 2840.0
               ASName: C01_02-Obj_InsideJabu_Jabu_SwitchShutter_A-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Obj_InsideJabu_Jabu_SwitchShutter_A_01[0] - EventDoNothing (#60, concurrent=0)
               duration: 2840.0
               IsWaitEnd: true
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#26, concurrent=0)
[    100.0] L ElasticBodyCollideObject[2] - EventNodeSetPushRadius (#32, concurrent=1)
[    128.0] E VoicePlayActor[0] - EventStartVoice (#20, concurrent=0)
               duration: 55.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideJabu_Jabu_BossIn:Dm_InsideJabu_Jabu_BossIn_Text_000_b
               OffsetFrame: 30
               Speaker: Player_Child
[    183.0] L VoicePlayActor[0] - EventStartVoice (#20, concurrent=0)
[    189.0] E VoicePlayActor[0] - EventStartVoice (#21, concurrent=0)
               duration: 126.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideJabu_Jabu_BossIn:Dm_InsideJabu_Jabu_BossIn_Text_001_d
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Child_001
[    315.0] L VoicePlayActor[0] - EventStartVoice (#21, concurrent=0)
[    317.0] E ElasticBodyCollideObject[0] - EventModelBind (#49, concurrent=0)
               duration: 853.0
               ActorName: Enemy_DungeonBoss_Barinade
               BoneName: Core_Center_2
               InstanceName: ''
               IsWaitEnd: true
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[    317.0] E ElasticBodyCollideObject[0] - EventNodeSetPushRadius (#52, concurrent=1)
               duration: 100.0
               PushRadius: 1.899999976158142
[    320.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#0, concurrent=0)
[    320.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[    320.0] L Player_Event[0] - EventPlayASForTimeline (#33, concurrent=0)
[    320.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#40, concurrent=1)
[    320.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#43, concurrent=0)
[    320.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#1, concurrent=0)
               duration: 530.0
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
[    320.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#7, concurrent=1)
               duration: 530.0
               Near: 0.20000000298023224
[    320.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 530.0
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
[    320.0] E Player_Event[0] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 530.0
               ASName: C02-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    320.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 530.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    320.0] E Enemy_DungeonBoss_Barinade - EventGoOffstageForUser (#54, concurrent=0)
               duration: 1480.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[    320.0] E Enemy_DungeonBoss_Barinade - EventPlayASForTimeline (#57, concurrent=1)
               duration: 530.0
               ASName: C02-Enemy_DungeonBoss_Barinade-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    336.0] E VoicePlayActor[0] - EventStartVoice (#22, concurrent=0)
               duration: 201.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideJabu_Jabu_BossIn:Dm_InsideJabu_Jabu_BossIn_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Child_001
[    417.0] L ElasticBodyCollideObject[0] - EventNodeSetPushRadius (#52, concurrent=1)
[    537.0] L VoicePlayActor[0] - EventStartVoice (#22, concurrent=0)
[    553.0] E VoicePlayActor[0] - EventStartVoice (#23, concurrent=0)
               duration: 138.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideJabu_Jabu_BossIn:Dm_InsideJabu_Jabu_BossIn_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Child_001
[    691.0] L VoicePlayActor[0] - EventStartVoice (#23, concurrent=0)
[    691.0] E VoicePlayActor[0] - EventStartVoice (#24, concurrent=0)
               duration: 133.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideJabu_Jabu_BossIn:Dm_InsideJabu_Jabu_BossIn_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Zora_Ruto_Child_001
[    824.0] L VoicePlayActor[0] - EventStartVoice (#24, concurrent=0)
[    850.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#1, concurrent=0)
[    850.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#7, concurrent=1)
[    850.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[    850.0] L Player_Event[0] - EventPlayASForTimeline (#34, concurrent=0)
[    850.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#44, concurrent=0)
[    850.0] L Enemy_DungeonBoss_Barinade - EventPlayASForTimeline (#57, concurrent=1)
[    850.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#2, concurrent=0)
               duration: 320.0
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
[    850.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#8, concurrent=1)
               duration: 320.0
               Near: 0.20000000298023224
[    850.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 320.0
               EndBluarLevel: 1.5
               EndDistance: 4.119999885559082
               EndFNumber: 57.20000076293945
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 4.119999885559082
               StartFNumber: 57.20000076293945
[    850.0] E Player_Event[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 320.0
               ASName: C03-Player_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    850.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 320.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    850.0] E Enemy_DungeonBoss_Barinade_Jellyfish[G] - EventPlayASForTimeline (#79, concurrent=0)
               duration: 320.0
               ASName: C03-Enemy_DungeonBoss_Barinade_Jellyfish-G-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1068.0] E VoicePlayActor[0] - EventStartVoice (#25, concurrent=0)
               duration: 98.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_InsideJabu_Jabu_BossIn:Dm_InsideJabu_Jabu_BossIn_Text_005_b
               OffsetFrame: 30
               Speaker: Player_Child
[   1166.0] L VoicePlayActor[0] - EventStartVoice (#25, concurrent=0)
[   1170.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#2, concurrent=0)
[   1170.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#8, concurrent=1)
[   1170.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   1170.0] L Player_Event[0] - EventPlayASForTimeline (#35, concurrent=0)
[   1170.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#45, concurrent=0)
[   1170.0] L ElasticBodyCollideObject[0] - EventModelBind (#49, concurrent=0)
[   1170.0] L Enemy_DungeonBoss_Barinade_Jellyfish[G] - EventPlayASForTimeline (#79, concurrent=0)
[   1170.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#3, concurrent=0)
               duration: 190.0
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
[   1170.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#9, concurrent=1)
               duration: 190.0
               Near: 0.10000000149011612
[   1170.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
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
[   1170.0] E Player_Event[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 190.0
               ASName: C04-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1170.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 190.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1170.0] E ElasticBodyCollideObject[0] - EventModelBind (#50, concurrent=0)
               duration: 830.0
               ActorName: Dm_Locator
               BoneName: ''
               InstanceName: ''
               IsWaitEnd: true
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[   1170.0] E Enemy_DungeonBoss_Barinade_Jellyfish[G] - EventPlayASForTimeline (#80, concurrent=0)
               duration: 190.0
               ASName: C04-Enemy_DungeonBoss_Barinade_Jellyfish-G-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1360.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#3, concurrent=0)
[   1360.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#9, concurrent=1)
[   1360.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   1360.0] L Player_Event[0] - EventPlayASForTimeline (#36, concurrent=0)
[   1360.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#46, concurrent=0)
[   1360.0] L Enemy_DungeonBoss_Barinade_Jellyfish[G] - EventPlayASForTimeline (#80, concurrent=0)
[   1360.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#4, concurrent=0)
               duration: 440.0
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
[   1360.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#10, concurrent=1)
               duration: 440.0
               Near: 0.5
[   1360.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 441.0
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
[   1360.0] E Player_Event[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 440.0
               ASName: C05-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1360.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 440.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1360.0] E Enemy_DungeonBoss_Barinade_Jellyfish[A] - EventPlayASForTimeline (#61, concurrent=0)
               duration: 440.0
               ASName: C05-Enemy_DungeonBoss_Barinade_Jellyfish-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1360.0] E Enemy_DungeonBoss_Barinade_Jellyfish[B] - EventPlayASForTimeline (#64, concurrent=0)
               duration: 440.0
               ASName: C05-Enemy_DungeonBoss_Barinade_Jellyfish-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1360.0] E Enemy_DungeonBoss_Barinade_Jellyfish[C] - EventPlayASForTimeline (#67, concurrent=0)
               duration: 440.0
               ASName: C05-Enemy_DungeonBoss_Barinade_Jellyfish-C-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1360.0] E Enemy_DungeonBoss_Barinade_Jellyfish[D] - EventPlayASForTimeline (#70, concurrent=0)
               duration: 440.0
               ASName: C05-Enemy_DungeonBoss_Barinade_Jellyfish-D-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1360.0] E Enemy_DungeonBoss_Barinade_Jellyfish[E] - EventPlayASForTimeline (#73, concurrent=0)
               duration: 440.0
               ASName: C05-Enemy_DungeonBoss_Barinade_Jellyfish-E-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1360.0] E Enemy_DungeonBoss_Barinade_Jellyfish[F] - EventPlayASForTimeline (#76, concurrent=0)
               duration: 440.0
               ASName: C05-Enemy_DungeonBoss_Barinade_Jellyfish-F-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1360.0] E Enemy_DungeonBoss_Barinade_Jellyfish[G] - EventPlayASForTimeline (#81, concurrent=0)
               duration: 440.0
               ASName: C05-Enemy_DungeonBoss_Barinade_Jellyfish-G-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1360.0] E Enemy_DungeonBoss_Barinade_Jellyfish[H] - EventPlayASForTimeline (#84, concurrent=0)
               duration: 440.0
               ASName: C05-Enemy_DungeonBoss_Barinade_Jellyfish-H-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1360.0] E Enemy_DungeonBoss_Barinade_Jellyfish[I] - EventPlayASForTimeline (#87, concurrent=0)
               duration: 440.0
               ASName: C05-Enemy_DungeonBoss_Barinade_Jellyfish-I-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1360.0] E Enemy_DungeonBoss_Barinade_Jellyfish[J] - EventPlayASForTimeline (#90, concurrent=0)
               duration: 440.0
               ASName: C05-Enemy_DungeonBoss_Barinade_Jellyfish-J-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#4, concurrent=0)
[   1800.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#10, concurrent=1)
[   1800.0] L Player_Event[0] - EventPlayASForTimeline (#37, concurrent=0)
[   1800.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#47, concurrent=0)
[   1800.0] L Enemy_DungeonBoss_Barinade - EventGoOffstageForUser (#54, concurrent=0)
[   1800.0] L Enemy_DungeonBoss_Barinade_Jellyfish[A] - EventPlayASForTimeline (#61, concurrent=0)
[   1800.0] L Enemy_DungeonBoss_Barinade_Jellyfish[B] - EventPlayASForTimeline (#64, concurrent=0)
[   1800.0] L Enemy_DungeonBoss_Barinade_Jellyfish[C] - EventPlayASForTimeline (#67, concurrent=0)
[   1800.0] L Enemy_DungeonBoss_Barinade_Jellyfish[D] - EventPlayASForTimeline (#70, concurrent=0)
[   1800.0] L Enemy_DungeonBoss_Barinade_Jellyfish[E] - EventPlayASForTimeline (#73, concurrent=0)
[   1800.0] L Enemy_DungeonBoss_Barinade_Jellyfish[F] - EventPlayASForTimeline (#76, concurrent=0)
[   1800.0] L Enemy_DungeonBoss_Barinade_Jellyfish[G] - EventPlayASForTimeline (#81, concurrent=0)
[   1800.0] L Enemy_DungeonBoss_Barinade_Jellyfish[H] - EventPlayASForTimeline (#84, concurrent=0)
[   1800.0] L Enemy_DungeonBoss_Barinade_Jellyfish[I] - EventPlayASForTimeline (#87, concurrent=0)
[   1800.0] L Enemy_DungeonBoss_Barinade_Jellyfish[J] - EventPlayASForTimeline (#90, concurrent=0)
[   1800.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#5, concurrent=0)
               duration: 200.0
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
[   1800.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#11, concurrent=1)
               duration: 200.0
               Near: 0.10000000149011612
[   1800.0] E Player_Event[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 200.0
               ASName: C06-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 200.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] E Enemy_DungeonBoss_Barinade - EventPlayASForTimeline (#55, concurrent=0)
               duration: 200.0
               ASName: C06-Enemy_DungeonBoss_Barinade-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] E Enemy_DungeonBoss_Barinade_Jellyfish[A] - EventPlayASForTimeline (#62, concurrent=0)
               duration: 200.0
               ASName: C06-Enemy_DungeonBoss_Barinade_Jellyfish-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] E Enemy_DungeonBoss_Barinade_Jellyfish[B] - EventPlayASForTimeline (#65, concurrent=0)
               duration: 200.0
               ASName: C06-Enemy_DungeonBoss_Barinade_Jellyfish-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] E Enemy_DungeonBoss_Barinade_Jellyfish[C] - EventPlayASForTimeline (#68, concurrent=0)
               duration: 200.0
               ASName: C06-Enemy_DungeonBoss_Barinade_Jellyfish-C-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] E Enemy_DungeonBoss_Barinade_Jellyfish[D] - EventPlayASForTimeline (#71, concurrent=0)
               duration: 200.0
               ASName: C06-Enemy_DungeonBoss_Barinade_Jellyfish-D-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] E Enemy_DungeonBoss_Barinade_Jellyfish[E] - EventPlayASForTimeline (#74, concurrent=0)
               duration: 200.0
               ASName: C06-Enemy_DungeonBoss_Barinade_Jellyfish-E-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] E Enemy_DungeonBoss_Barinade_Jellyfish[F] - EventPlayASForTimeline (#77, concurrent=0)
               duration: 200.0
               ASName: C06-Enemy_DungeonBoss_Barinade_Jellyfish-F-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] E Enemy_DungeonBoss_Barinade_Jellyfish[G] - EventPlayASForTimeline (#82, concurrent=0)
               duration: 200.0
               ASName: C06-Enemy_DungeonBoss_Barinade_Jellyfish-G-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] E Enemy_DungeonBoss_Barinade_Jellyfish[H] - EventPlayASForTimeline (#85, concurrent=0)
               duration: 200.0
               ASName: C06-Enemy_DungeonBoss_Barinade_Jellyfish-H-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] E Enemy_DungeonBoss_Barinade_Jellyfish[I] - EventPlayASForTimeline (#88, concurrent=0)
               duration: 200.0
               ASName: C06-Enemy_DungeonBoss_Barinade_Jellyfish-I-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1800.0] E Enemy_DungeonBoss_Barinade_Jellyfish[J] - EventPlayASForTimeline (#91, concurrent=0)
               duration: 200.0
               ASName: C06-Enemy_DungeonBoss_Barinade_Jellyfish-J-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1801.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   1801.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 199.0
               EndBluarLevel: 2.140000104904175
               EndDistance: 1.7400000095367432
               EndFNumber: 35.599998474121094
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.140000104904175
               StartDistance: 1.7400000095367432
               StartFNumber: 35.599998474121094
[   2000.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#5, concurrent=0)
[   2000.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#11, concurrent=1)
[   2000.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   2000.0] L Player_Event[0] - EventPlayASForTimeline (#38, concurrent=0)
[   2000.0] L Npc_Navi - EventGoOffstageForUser (#41, concurrent=0)
[   2000.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#48, concurrent=0)
[   2000.0] L ElasticBodyCollideObject[0] - EventModelBind (#50, concurrent=0)
[   2000.0] L Enemy_DungeonBoss_Barinade - EventPlayASForTimeline (#55, concurrent=0)
[   2000.0] L Enemy_DungeonBoss_Barinade_Jellyfish[A] - EventPlayASForTimeline (#62, concurrent=0)
[   2000.0] L Enemy_DungeonBoss_Barinade_Jellyfish[B] - EventPlayASForTimeline (#65, concurrent=0)
[   2000.0] L Enemy_DungeonBoss_Barinade_Jellyfish[C] - EventPlayASForTimeline (#68, concurrent=0)
[   2000.0] L Enemy_DungeonBoss_Barinade_Jellyfish[D] - EventPlayASForTimeline (#71, concurrent=0)
[   2000.0] L Enemy_DungeonBoss_Barinade_Jellyfish[E] - EventPlayASForTimeline (#74, concurrent=0)
[   2000.0] L Enemy_DungeonBoss_Barinade_Jellyfish[F] - EventPlayASForTimeline (#77, concurrent=0)
[   2000.0] L Enemy_DungeonBoss_Barinade_Jellyfish[G] - EventPlayASForTimeline (#82, concurrent=0)
[   2000.0] L Enemy_DungeonBoss_Barinade_Jellyfish[H] - EventPlayASForTimeline (#85, concurrent=0)
[   2000.0] L Enemy_DungeonBoss_Barinade_Jellyfish[I] - EventPlayASForTimeline (#88, concurrent=0)
[   2000.0] L Enemy_DungeonBoss_Barinade_Jellyfish[J] - EventPlayASForTimeline (#91, concurrent=0)
[   2000.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#6, concurrent=0)
               duration: 840.0
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
[   2000.0] E PostProcessingActor[0] - EventResetToInGameParametersDoF (#19, concurrent=0)
               duration: 840.0
               IsWaitEnd: true
               TransitionFrame: 0
[   2000.0] E Player_Event[0] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 840.0
               ASName: C07-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2000.0] E Npc_Navi - EventPlayASForTimeline (#42, concurrent=0)
               duration: 840.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2000.0] E ElasticBodyCollideObject[0] - EventModelBind (#51, concurrent=0)
               duration: 840.0
               ActorName: Enemy_DungeonBoss_Barinade
               BoneName: Core_Center_2
               InstanceName: ''
               IsWaitEnd: true
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[   2000.0] E Enemy_DungeonBoss_Barinade - EventPlayASForTimeline (#56, concurrent=0)
               duration: 840.0
               ASName: C07-Enemy_DungeonBoss_Barinade-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2000.0] E Enemy_DungeonBoss_Barinade_Jellyfish[A] - EventPlayASForTimeline (#63, concurrent=0)
               duration: 840.0
               ASName: C07-Enemy_DungeonBoss_Barinade_Jellyfish-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2000.0] E Enemy_DungeonBoss_Barinade_Jellyfish[B] - EventPlayASForTimeline (#66, concurrent=0)
               duration: 840.0
               ASName: C07-Enemy_DungeonBoss_Barinade_Jellyfish-B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2000.0] E Enemy_DungeonBoss_Barinade_Jellyfish[C] - EventPlayASForTimeline (#69, concurrent=0)
               duration: 840.0
               ASName: C07-Enemy_DungeonBoss_Barinade_Jellyfish-C-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2000.0] E Enemy_DungeonBoss_Barinade_Jellyfish[D] - EventPlayASForTimeline (#72, concurrent=0)
               duration: 840.0
               ASName: C07-Enemy_DungeonBoss_Barinade_Jellyfish-D-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2000.0] E Enemy_DungeonBoss_Barinade_Jellyfish[E] - EventPlayASForTimeline (#75, concurrent=0)
               duration: 840.0
               ASName: C07-Enemy_DungeonBoss_Barinade_Jellyfish-E-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2000.0] E Enemy_DungeonBoss_Barinade_Jellyfish[F] - EventPlayASForTimeline (#78, concurrent=0)
               duration: 840.0
               ASName: C07-Enemy_DungeonBoss_Barinade_Jellyfish-F-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2000.0] E Enemy_DungeonBoss_Barinade_Jellyfish[G] - EventPlayASForTimeline (#83, concurrent=0)
               duration: 840.0
               ASName: C07-Enemy_DungeonBoss_Barinade_Jellyfish-G-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2000.0] E Enemy_DungeonBoss_Barinade_Jellyfish[H] - EventPlayASForTimeline (#86, concurrent=0)
               duration: 840.0
               ASName: C07-Enemy_DungeonBoss_Barinade_Jellyfish-H-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2000.0] E Enemy_DungeonBoss_Barinade_Jellyfish[I] - EventPlayASForTimeline (#89, concurrent=0)
               duration: 840.0
               ASName: C07-Enemy_DungeonBoss_Barinade_Jellyfish-I-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2000.0] E Enemy_DungeonBoss_Barinade_Jellyfish[J] - EventPlayASForTimeline (#92, concurrent=0)
               duration: 840.0
               ASName: C07-Enemy_DungeonBoss_Barinade_Jellyfish-J-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2001.0] L ElasticBodyCollideObject[2] - EventModelBind (#30, concurrent=0)
[   2001.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#12, concurrent=1)
               duration: 839.0
               Near: 0.10000000149011612
[   2001.0] E Dm_Locator[3] - EventPlayASForTimeline (#29, concurrent=0)
               duration: 839.0
               ASName: C07-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2001.0] E ElasticBodyCollideObject[2] - EventModelBind (#31, concurrent=0)
               duration: 839.0
               ActorName: Dm_Locator
               BoneName: Dm_Locator
               InstanceName: '3'
               IsWaitEnd: true
               RotOffset:
               - 0.0
               - 0.0
               - 0.0
               TransOffset:
               - 0.0
               - 0.0
               - 0.0
[   2320.0] E UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#27, concurrent=0)
               duration: 430.0
               DemoNicknamePos: 0
               DemoNicknameType: 1
               InAnimFrame: 110
               IsWaitEnd: true
               NameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Barinade_Name
               NicknameMessageLabel: GraphicMsg/DemoNicknameEnemy:Enemy_DungeonBoss_Barinade_Nickname
               OutAnimFrame: 110
[   2320.0] E SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#28, concurrent=0)
               duration: 100.0
               BgmName: BGM_DungeonBoss
[   2320.0] E Enemy_DungeonBoss_Barinade - EventDungeonBossSetConsiderBattlePresentation (#58, concurrent=1)
               duration: 520.0
[   2420.0] L SoundSystemActor[0] - EventTriggerSoundStartBossBgm (#28, concurrent=0)
[   2750.0] L UISystemActor[0] - EventShowDemoNicknameUIForTimeline (#27, concurrent=0)
[   2840.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#6, concurrent=0)
[   2840.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#12, concurrent=1)
[   2840.0] L PostProcessingActor[0] - EventResetToInGameParametersDoF (#19, concurrent=0)
[   2840.0] L Dm_Locator[3] - EventPlayASForTimeline (#29, concurrent=0)
[   2840.0] L ElasticBodyCollideObject[2] - EventModelBind (#31, concurrent=0)
[   2840.0] L Player_Event[0] - EventPlayASForTimeline (#39, concurrent=0)
[   2840.0] L Npc_Navi - EventPlayASForTimeline (#42, concurrent=0)
[   2840.0] L ElasticBodyCollideObject[0] - EventModelBind (#51, concurrent=0)
[   2840.0] L Dm_Locator[0] - EventDoNothing (#53, concurrent=0)
[   2840.0] L Enemy_DungeonBoss_Barinade - EventPlayASForTimeline (#56, concurrent=0)
[   2840.0] L Enemy_DungeonBoss_Barinade - EventDungeonBossSetConsiderBattlePresentation (#58, concurrent=1)
[   2840.0] L Obj_InsideJabu_Jabu_SwitchShutter_A_03[0] - EventPlayASForTimeline (#59, concurrent=0)
[   2840.0] L Obj_InsideJabu_Jabu_SwitchShutter_A_01[0] - EventDoNothing (#60, concurrent=0)
[   2840.0] L Enemy_DungeonBoss_Barinade_Jellyfish[A] - EventPlayASForTimeline (#63, concurrent=0)
[   2840.0] L Enemy_DungeonBoss_Barinade_Jellyfish[B] - EventPlayASForTimeline (#66, concurrent=0)
[   2840.0] L Enemy_DungeonBoss_Barinade_Jellyfish[C] - EventPlayASForTimeline (#69, concurrent=0)
[   2840.0] L Enemy_DungeonBoss_Barinade_Jellyfish[D] - EventPlayASForTimeline (#72, concurrent=0)
[   2840.0] L Enemy_DungeonBoss_Barinade_Jellyfish[E] - EventPlayASForTimeline (#75, concurrent=0)
[   2840.0] L Enemy_DungeonBoss_Barinade_Jellyfish[F] - EventPlayASForTimeline (#78, concurrent=0)
[   2840.0] L Enemy_DungeonBoss_Barinade_Jellyfish[G] - EventPlayASForTimeline (#83, concurrent=0)
[   2840.0] L Enemy_DungeonBoss_Barinade_Jellyfish[H] - EventPlayASForTimeline (#86, concurrent=0)
[   2840.0] L Enemy_DungeonBoss_Barinade_Jellyfish[I] - EventPlayASForTimeline (#89, concurrent=0)
[   2840.0] L Enemy_DungeonBoss_Barinade_Jellyfish[J] - EventPlayASForTimeline (#92, concurrent=0)
