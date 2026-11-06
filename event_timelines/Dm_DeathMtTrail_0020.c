-------- Event timeline: Dm_DeathMtTrail_0020 --------
actors: 12
clips: 161
oneshots: 0
cuts: 19
duration: 8665.0
subtimelines: ['Dm_DeathMtTrail_0020_Effect', 'Dm_DeathMtTrail_0020_Env']
params: (none)

===== Cuts =====

Cut: C01
start time: 0.0
x4: 0
params: (none)

Cut: C02
start time: 195.0
x4: 0
params: (none)

Cut: C03
start time: 670.0
x4: 0
params: (none)

Cut: C04
start time: 980.0
x4: 0
params: (none)

Cut: C05
start time: 1170.0
x4: 0
params: (none)

Cut: C06
start time: 1375.0
x4: 0
params: (none)

Cut: C07
start time: 2060.0
x4: 0
params: (none)

Cut: C08
start time: 2255.0
x4: 0
params: (none)

Cut: C09
start time: 2950.0
x4: 0
params: (none)

Cut: C10
start time: 4270.0
x4: 0
params: (none)

Cut: C11
start time: 4880.0
x4: 0
params: (none)

Cut: C12
start time: 5120.0
x4: 0
params: (none)

Cut: C13
start time: 5430.0
x4: 0
params: (none)

Cut: C14
start time: 6215.0
x4: 0
params: (none)

Cut: C15
start time: 6610.0
x4: 0
params: (none)

Cut: C16
start time: 7280.0
x4: 0
params: (none)

Cut: C17
start time: 7870.0
x4: 0
params: (none)

Cut: C18
start time: 8070.0
x4: 0
params: (none)

Cut: C19
start time: 8250.0
x4: 0
params: (none)


===== Actors =====

Actor: UISystemActor[0]
concurrent clips: 1
actions: ['EventEventFadeOutForTimeline', 'EventEventFadeInForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[0]
concurrent clips: 2
actions: ['EventSetDoFForTimeline', 'EventSetRenderingCenterPosFromCameraPos']
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

Actor: Npc_Goron_Darunia_Child[0]
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
UseEventModelAnime: Work/Model/Event/Dm_DeathMtTrail_0020/Dm_DeathMtTrail_0020_Npc_Goron_GOU_Darunia/workspace.pp__ModelProject.gyml

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
concurrent clips: 2
actions: ['EventPlayASForTimeline', 'EventNaviPlayLipSync', 'EventNaviStopLipSync']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_DeathMtTrail_0020/Dm_DeathMtTrail_0020_Npc_Navi/workspace.pp__ModelProject.gyml

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
UseEventAS: Work/AS/Root/Event/Dm_DeathMtTrail_0020.root.as
UseEventModelAnime: Work/Model/Event/Dm_DeathMtTrail_0020/Dm_DeathMtTrail_0020_Player_Child/workspace.pp__ModelProject.gyml

Actor: Land_DeathMtTrail_DemoGround_A_01
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- -42.0
- 110.0009994506836
- -13.800000190734863
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[Eff_001]
concurrent clips: 1
actions: ['EventWarpToTargetPosAndRot']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 0.0
- 0.0
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: Dm_Locator[Eff_002]
concurrent clips: 1
actions: ['EventWarpToTargetPosAndRot']
params: EventMemberCreateMethod: 1
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 60.0
               Color: 1
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 195.0
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
[      0.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#24, concurrent=1)
               duration: 195.0
               EndFocusDis: 8.850000381469727
               IsWaitEnd: true
               StarFocusDis: 8.850000381469727
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#82, concurrent=0)
               duration: 195.0
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
[      0.0] E Npc_Navi - EventGoOffstageForUser (#121, concurrent=0)
               duration: 8665.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#122, concurrent=0)
               duration: 195.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#139, concurrent=0)
               duration: 195.0
               ASName: AS-C01-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Land_DeathMtTrail_DemoGround_A_01 - EventGoOffstageForUser (#151, concurrent=0)
               duration: 670.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Locator[Eff_001] - EventWarpToTargetPosAndRot (#158, concurrent=0)
               duration: 195.0
               ClothWarpMode: -1
               IsWaitEnd: true
               Position:
               - -42.75
               - 109.30999755859375
               - -14.508000373840332
               YAngle: 0.0
[     60.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    195.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    195.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#24, concurrent=1)
[    195.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#82, concurrent=0)
[    195.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#122, concurrent=0)
[    195.0] L Player_Event[0] - EventPlayASForTimeline (#139, concurrent=0)
[    195.0] L Dm_Locator[Eff_001] - EventWarpToTargetPosAndRot (#158, concurrent=0)
[    195.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 475.0
               EndBluarLevel: 1.4800000190734863
               EndDistance: 1.6799999475479126
               EndFNumber: 71.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.4800000190734863
               StartDistance: 1.6799999475479126
               StartFNumber: 71.0
[    195.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#25, concurrent=1)
               duration: 475.0
               EndFocusDis: 3.0999999046325684
               IsWaitEnd: true
               StarFocusDis: 3.0999999046325684
[    195.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#83, concurrent=0)
               duration: 475.0
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
[    195.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#101, concurrent=1)
               duration: 475.0
               Near: 0.10000000149011612
[    195.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#107, concurrent=0)
               duration: 475.0
               ASName: C02-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    195.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#123, concurrent=0)
               duration: 475.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    195.0] E Player_Event[0] - EventPlayASForTimeline (#140, concurrent=0)
               duration: 475.0
               ASName: AS-C02-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    195.0] E Dm_Locator[Eff_001] - EventWarpToTargetPosAndRot (#159, concurrent=0)
               duration: 475.0
               ClothWarpMode: -1
               IsWaitEnd: true
               Position:
               - -42.5
               - 109.30999755859375
               - -14.300000190734863
               YAngle: 0.0
[    195.0] E Dm_Locator[Eff_002] - EventWarpToTargetPosAndRot (#160, concurrent=0)
               duration: 785.0
               ClothWarpMode: -1
               IsWaitEnd: true
               Position:
               - -42.16600036621094
               - 109.41200256347656
               - -15.241999626159668
               YAngle: 15.0
[    620.0] E VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
               duration: 58.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_000_b
               OffsetFrame: 30
               Speaker: Player_Event
[    670.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    670.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#25, concurrent=1)
[    670.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#83, concurrent=0)
[    670.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#101, concurrent=1)
[    670.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#107, concurrent=0)
[    670.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#123, concurrent=0)
[    670.0] L Player_Event[0] - EventPlayASForTimeline (#140, concurrent=0)
[    670.0] L Land_DeathMtTrail_DemoGround_A_01 - EventGoOffstageForUser (#151, concurrent=0)
[    670.0] L Dm_Locator[Eff_001] - EventWarpToTargetPosAndRot (#159, concurrent=0)
[    670.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 310.0
               EndBluarLevel: 2.0
               EndDistance: 0.9700000286102295
               EndFNumber: 130.60000610351562
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.9700000286102295
               StartFNumber: 130.60000610351562
[    670.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#26, concurrent=1)
               duration: 310.0
               EndFocusDis: 1.1299999952316284
               IsWaitEnd: true
               StarFocusDis: 1.1299999952316284
[    670.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#84, concurrent=0)
               duration: 310.0
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
[    670.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#102, concurrent=1)
               duration: 310.0
               Near: 0.10000000149011612
[    670.0] E Player_Event[0] - EventPlayASForTimeline (#141, concurrent=0)
               duration: 310.0
               ASName: AS-C03-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    670.0] E Land_DeathMtTrail_DemoGround_A_01 - EventTriggerParticipateEvent (#152, concurrent=0)
               duration: 310.0
[    678.0] L VoicePlayActor[0] - EventStartVoice (#45, concurrent=0)
[    678.0] E VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
               duration: 62.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_000_c
               OffsetFrame: 30
               Speaker: Player_Event
[    740.0] L VoicePlayActor[0] - EventStartVoice (#46, concurrent=0)
[    740.0] E VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
               duration: 188.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_001_c
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[    928.0] L VoicePlayActor[0] - EventStartVoice (#47, concurrent=0)
[    965.0] E VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
               duration: 190.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_002_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[    980.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    980.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#26, concurrent=1)
[    980.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#84, concurrent=0)
[    980.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#102, concurrent=1)
[    980.0] L Player_Event[0] - EventPlayASForTimeline (#141, concurrent=0)
[    980.0] L Land_DeathMtTrail_DemoGround_A_01 - EventTriggerParticipateEvent (#152, concurrent=0)
[    980.0] L Dm_Locator[Eff_002] - EventWarpToTargetPosAndRot (#160, concurrent=0)
[    980.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 190.0
               EndBluarLevel: 0.8100000023841858
               EndDistance: 2.130000114440918
               EndFNumber: 91.80000305175781
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.8100000023841858
               StartDistance: 2.130000114440918
               StartFNumber: 91.80000305175781
[    980.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#27, concurrent=1)
               duration: 190.0
               EndFocusDis: 3.5
               IsWaitEnd: true
               StarFocusDis: 3.5
[    980.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#85, concurrent=0)
               duration: 190.0
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
[    980.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#108, concurrent=0)
               duration: 190.0
               ASName: C04-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    980.0] E Land_DeathMtTrail_DemoGround_A_01 - EventGoOffstageForUser (#153, concurrent=0)
               duration: 1080.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1155.0] L VoicePlayActor[0] - EventStartVoice (#48, concurrent=0)
[   1155.0] E VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
               duration: 200.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_003_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   1170.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[   1170.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#27, concurrent=1)
[   1170.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#85, concurrent=0)
[   1170.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#108, concurrent=0)
[   1170.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 205.0
               EndBluarLevel: 2.240000009536743
               EndDistance: 2.4100000858306885
               EndFNumber: 36.20000076293945
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.240000009536743
               StartDistance: 2.4100000858306885
               StartFNumber: 36.20000076293945
[   1170.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#28, concurrent=1)
               duration: 205.0
               EndFocusDis: 5.380000114440918
               IsWaitEnd: true
               StarFocusDis: 5.380000114440918
[   1170.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#86, concurrent=0)
               duration: 205.0
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
[   1170.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#109, concurrent=0)
               duration: 205.0
               ASName: C05-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1170.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#124, concurrent=0)
               duration: 205.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1170.0] E Player_Event[0] - EventPlayASForTimeline (#142, concurrent=0)
               duration: 205.0
               ASName: C05-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1355.0] L VoicePlayActor[0] - EventStartVoice (#49, concurrent=0)
[   1355.0] E VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
               duration: 155.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_004_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   1375.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1375.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#28, concurrent=1)
[   1375.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#86, concurrent=0)
[   1375.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#109, concurrent=0)
[   1375.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#124, concurrent=0)
[   1375.0] L Player_Event[0] - EventPlayASForTimeline (#142, concurrent=0)
[   1375.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 685.0
               EndBluarLevel: 1.2599999904632568
               EndDistance: 3.380000114440918
               EndFNumber: 41.79999923706055
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.2599999904632568
               StartDistance: 3.380000114440918
               StartFNumber: 41.79999923706055
[   1375.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#29, concurrent=1)
               duration: 685.0
               EndFocusDis: 3.299999952316284
               IsWaitEnd: true
               StarFocusDis: 3.299999952316284
[   1375.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#87, concurrent=0)
               duration: 685.0
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
[   1375.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#110, concurrent=0)
               duration: 685.0
               ASName: C06-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1375.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#125, concurrent=0)
               duration: 685.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1375.0] E Player_Event[0] - EventPlayASForTimeline (#143, concurrent=0)
               duration: 685.0
               ASName: AS-C06-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1510.0] L VoicePlayActor[0] - EventStartVoice (#50, concurrent=0)
[   1510.0] E VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
               duration: 185.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_005_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   1695.0] L VoicePlayActor[0] - EventStartVoice (#51, concurrent=0)
[   1695.0] E VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
               duration: 155.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_006_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   1793.0] E VoicePlayActor[1] - EventStartVoice (#79, concurrent=0)
               duration: 67.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_008_b
               OffsetFrame: 30
               Speaker: Player_Event
[   1850.0] L VoicePlayActor[0] - EventStartVoice (#52, concurrent=0)
[   1850.0] E VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
               duration: 158.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_007_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   1860.0] L VoicePlayActor[1] - EventStartVoice (#79, concurrent=0)
[   1860.0] E VoicePlayActor[1] - EventStartVoice (#80, concurrent=0)
               duration: 31.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_008_c
               OffsetFrame: 30
               Speaker: Player_Event
[   1891.0] L VoicePlayActor[1] - EventStartVoice (#80, concurrent=0)
[   1891.0] E VoicePlayActor[1] - EventStartVoice (#81, concurrent=0)
               duration: 120.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_008_d
               OffsetFrame: 30
               Speaker: Player_Event
[   2008.0] L VoicePlayActor[0] - EventStartVoice (#53, concurrent=0)
[   2011.0] L VoicePlayActor[1] - EventStartVoice (#81, concurrent=0)
[   2060.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   2060.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#29, concurrent=1)
[   2060.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#87, concurrent=0)
[   2060.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#110, concurrent=0)
[   2060.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#125, concurrent=0)
[   2060.0] L Player_Event[0] - EventPlayASForTimeline (#143, concurrent=0)
[   2060.0] L Land_DeathMtTrail_DemoGround_A_01 - EventGoOffstageForUser (#153, concurrent=0)
[   2060.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 195.0
               EndBluarLevel: 2.0
               EndDistance: 0.9700000286102295
               EndFNumber: 120.80000305175781
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 0.9700000286102295
               StartFNumber: 120.80000305175781
[   2060.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#30, concurrent=1)
               duration: 195.0
               EndFocusDis: 1.3799999952316284
               IsWaitEnd: true
               StarFocusDis: 1.3799999952316284
[   2060.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#88, concurrent=0)
               duration: 195.0
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
[   2060.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#103, concurrent=1)
               duration: 195.0
               Near: 0.10000000149011612
[   2060.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#126, concurrent=0)
               duration: 195.0
               ASName: C07-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2060.0] E Player_Event[0] - EventPlayASForTimeline (#144, concurrent=0)
               duration: 195.0
               ASName: AS-C07-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2060.0] E Land_DeathMtTrail_DemoGround_A_01 - EventTriggerParticipateEvent (#154, concurrent=0)
               duration: 195.0
[   2138.0] E VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
               duration: 107.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_009_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2168.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#133, concurrent=1)
               duration: 82.0
[   2245.0] L VoicePlayActor[0] - EventStartVoice (#54, concurrent=0)
[   2245.0] E VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
               duration: 295.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_010_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   2250.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#133, concurrent=1)
[   2250.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#134, concurrent=1)
               duration: 5.0
[   2255.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   2255.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#30, concurrent=1)
[   2255.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#88, concurrent=0)
[   2255.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#103, concurrent=1)
[   2255.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#126, concurrent=0)
[   2255.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#134, concurrent=1)
[   2255.0] L Player_Event[0] - EventPlayASForTimeline (#144, concurrent=0)
[   2255.0] L Land_DeathMtTrail_DemoGround_A_01 - EventTriggerParticipateEvent (#154, concurrent=0)
[   2255.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 490.0
               EndBluarLevel: 3.0
               EndDistance: 5.0
               EndFNumber: 14.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 5.0
               StartFNumber: 14.0
[   2255.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#31, concurrent=1)
               duration: 695.0
               EndFocusDis: 2.200000047683716
               IsWaitEnd: true
               StarFocusDis: 2.200000047683716
[   2255.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#89, concurrent=0)
               duration: 695.0
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
[   2255.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#104, concurrent=1)
               duration: 695.0
               Near: 0.10000000149011612
[   2255.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#111, concurrent=0)
               duration: 695.0
               ASName: C08-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2255.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#127, concurrent=0)
               duration: 695.0
               ASName: C08-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2255.0] E Player_Event[0] - EventPlayASForTimeline (#145, concurrent=0)
               duration: 695.0
               ASName: C08-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2255.0] E Land_DeathMtTrail_DemoGround_A_01 - EventGoOffstageForUser (#155, concurrent=0)
               duration: 2865.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   2540.0] L VoicePlayActor[0] - EventStartVoice (#55, concurrent=0)
[   2540.0] E VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
               duration: 185.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_011_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   2725.0] L VoicePlayActor[0] - EventStartVoice (#56, concurrent=0)
[   2725.0] E VoicePlayActor[0] - EventStartVoice (#57, concurrent=0)
               duration: 223.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_012_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   2745.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   2745.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 10.0
               EndBluarLevel: 3.0
               EndDistance: 0.3100000023841858
               EndFNumber: 125.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 5.0
               StartFNumber: 14.0
[   2755.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   2755.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 195.0
               EndBluarLevel: 3.0
               EndDistance: 0.3100000023841858
               EndFNumber: 125.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 0.3100000023841858
               StartFNumber: 125.0
[   2755.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#135, concurrent=1)
               duration: 190.0
[   2945.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#135, concurrent=1)
[   2945.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#136, concurrent=1)
               duration: 5.0
[   2948.0] L VoicePlayActor[0] - EventStartVoice (#57, concurrent=0)
[   2950.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   2950.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#31, concurrent=1)
[   2950.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#89, concurrent=0)
[   2950.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#104, concurrent=1)
[   2950.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#111, concurrent=0)
[   2950.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#127, concurrent=0)
[   2950.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#136, concurrent=1)
[   2950.0] L Player_Event[0] - EventPlayASForTimeline (#145, concurrent=0)
[   2950.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 1320.0
               EndBluarLevel: 1.0800000429153442
               EndDistance: 3.0999999046325684
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0800000429153442
               StartDistance: 3.0999999046325684
               StartFNumber: 30.0
[   2950.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#32, concurrent=1)
               duration: 1320.0
               EndFocusDis: 2.75
               IsWaitEnd: true
               StarFocusDis: 2.75
[   2950.0] E VoicePlayActor[0] - EventStartVoice (#58, concurrent=0)
               duration: 170.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_013_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   2950.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#90, concurrent=0)
               duration: 1320.0
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
[   2950.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#112, concurrent=0)
               duration: 1320.0
               ASName: C09-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3120.0] L VoicePlayActor[0] - EventStartVoice (#58, concurrent=0)
[   3120.0] E VoicePlayActor[0] - EventStartVoice (#59, concurrent=0)
               duration: 225.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_014_c
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   3345.0] L VoicePlayActor[0] - EventStartVoice (#59, concurrent=0)
[   3345.0] E VoicePlayActor[0] - EventStartVoice (#60, concurrent=0)
               duration: 465.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_015_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   3810.0] L VoicePlayActor[0] - EventStartVoice (#60, concurrent=0)
[   3810.0] E VoicePlayActor[0] - EventStartVoice (#61, concurrent=0)
               duration: 288.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_016_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   4098.0] L VoicePlayActor[0] - EventStartVoice (#61, concurrent=0)
[   4130.0] E VoicePlayActor[0] - EventStartVoice (#62, concurrent=0)
               duration: 113.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_017_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   4243.0] L VoicePlayActor[0] - EventStartVoice (#62, concurrent=0)
[   4260.0] E VoicePlayActor[0] - EventStartVoice (#63, concurrent=0)
               duration: 443.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_018_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   4270.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#12, concurrent=0)
[   4270.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#32, concurrent=1)
[   4270.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#90, concurrent=0)
[   4270.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#112, concurrent=0)
[   4270.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 610.0
               EndBluarLevel: 2.4800000190734863
               EndDistance: 1.850000023841858
               EndFNumber: 38.29999923706055
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.4800000190734863
               StartDistance: 1.850000023841858
               StartFNumber: 38.29999923706055
[   4270.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#33, concurrent=1)
               duration: 610.0
               EndFocusDis: 4.0
               IsWaitEnd: true
               StarFocusDis: 4.0
[   4270.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#91, concurrent=0)
               duration: 610.0
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
[   4270.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#113, concurrent=0)
               duration: 610.0
               ASName: C10-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   4703.0] L VoicePlayActor[0] - EventStartVoice (#63, concurrent=0)
[   4703.0] E VoicePlayActor[0] - EventStartVoice (#64, concurrent=0)
               duration: 158.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_019_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   4861.0] L VoicePlayActor[0] - EventStartVoice (#64, concurrent=0)
[   4880.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#13, concurrent=0)
[   4880.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#33, concurrent=1)
[   4880.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#91, concurrent=0)
[   4880.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#113, concurrent=0)
[   4880.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 240.0
               EndBluarLevel: 1.0
               EndDistance: 4.300000190734863
               EndFNumber: 25.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 4.300000190734863
               StartFNumber: 25.0
[   4880.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#34, concurrent=1)
               duration: 240.0
               EndFocusDis: 2.5799999237060547
               IsWaitEnd: true
               StarFocusDis: 2.5799999237060547
[   4880.0] E VoicePlayActor[0] - EventStartVoice (#65, concurrent=0)
               duration: 238.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_020_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   4880.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#92, concurrent=0)
               duration: 240.0
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
[   4880.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#114, concurrent=0)
               duration: 240.0
               ASName: C11-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5118.0] L VoicePlayActor[0] - EventStartVoice (#65, concurrent=0)
[   5120.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#14, concurrent=0)
[   5120.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#34, concurrent=1)
[   5120.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#92, concurrent=0)
[   5120.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#114, concurrent=0)
[   5120.0] L Land_DeathMtTrail_DemoGround_A_01 - EventGoOffstageForUser (#155, concurrent=0)
[   5120.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 310.0
               EndBluarLevel: 1.399999976158142
               EndDistance: 0.8399999737739563
               EndFNumber: 165.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.399999976158142
               StartDistance: 0.8399999737739563
               StartFNumber: 165.0
[   5120.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#35, concurrent=1)
               duration: 310.0
               EndFocusDis: 1.2799999713897705
               IsWaitEnd: true
               StarFocusDis: 1.2799999713897705
[   5120.0] E VoicePlayActor[0] - EventStartVoice (#66, concurrent=0)
               duration: 105.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_021_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[   5120.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#93, concurrent=0)
               duration: 310.0
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
[   5120.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#105, concurrent=1)
               duration: 310.0
               Near: 0.10000000149011612
[   5120.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#128, concurrent=0)
               duration: 310.0
               ASName: C12-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5120.0] E Player_Event[0] - EventPlayASForTimeline (#146, concurrent=0)
               duration: 310.0
               ASName: AS-C12-Player_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5120.0] E Land_DeathMtTrail_DemoGround_A_01 - EventTriggerParticipateEvent (#156, concurrent=0)
               duration: 310.0
[   5150.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#137, concurrent=1)
               duration: 100.0
[   5225.0] L VoicePlayActor[0] - EventStartVoice (#66, concurrent=0)
[   5225.0] E VoicePlayActor[0] - EventStartVoice (#67, concurrent=0)
               duration: 47.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_022_b
               OffsetFrame: 30
               Speaker: Player_Event
[   5250.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#137, concurrent=1)
[   5250.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#138, concurrent=1)
               duration: 5.0
[   5255.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#138, concurrent=1)
[   5272.0] L VoicePlayActor[0] - EventStartVoice (#67, concurrent=0)
[   5272.0] E VoicePlayActor[0] - EventStartVoice (#68, concurrent=0)
               duration: 88.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_023_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   5360.0] L VoicePlayActor[0] - EventStartVoice (#68, concurrent=0)
[   5415.0] E VoicePlayActor[0] - EventStartVoice (#69, concurrent=0)
               duration: 391.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_024_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   5430.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#15, concurrent=0)
[   5430.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#35, concurrent=1)
[   5430.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#93, concurrent=0)
[   5430.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#105, concurrent=1)
[   5430.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#128, concurrent=0)
[   5430.0] L Player_Event[0] - EventPlayASForTimeline (#146, concurrent=0)
[   5430.0] L Land_DeathMtTrail_DemoGround_A_01 - EventTriggerParticipateEvent (#156, concurrent=0)
[   5430.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 785.0
               EndBluarLevel: 0.0
               EndDistance: 1.5
               EndFNumber: 35.900001525878906
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 1.5
               StartFNumber: 35.900001525878906
[   5430.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#36, concurrent=1)
               duration: 785.0
               EndFocusDis: 6.400000095367432
               IsWaitEnd: true
               StarFocusDis: 6.400000095367432
[   5430.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#94, concurrent=0)
               duration: 785.0
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
[   5430.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#106, concurrent=1)
               duration: 785.0
               Near: 0.10000000149011612
[   5430.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#115, concurrent=0)
               duration: 785.0
               ASName: C13-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5430.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#129, concurrent=0)
               duration: 785.0
               ASName: C13-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5430.0] E Player_Event[0] - EventPlayASForTimeline (#147, concurrent=0)
               duration: 785.0
               ASName: C13-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   5430.0] E Land_DeathMtTrail_DemoGround_A_01 - EventGoOffstageForUser (#157, concurrent=0)
               duration: 3235.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   5806.0] L VoicePlayActor[0] - EventStartVoice (#69, concurrent=0)
[   5806.0] E VoicePlayActor[0] - EventStartVoice (#70, concurrent=0)
               duration: 379.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_025_c
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   6185.0] L VoicePlayActor[0] - EventStartVoice (#70, concurrent=0)
[   6185.0] E VoicePlayActor[0] - EventStartVoice (#71, concurrent=0)
               duration: 423.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_026_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   6215.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#16, concurrent=0)
[   6215.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#36, concurrent=1)
[   6215.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#94, concurrent=0)
[   6215.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#106, concurrent=1)
[   6215.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#115, concurrent=0)
[   6215.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#129, concurrent=0)
[   6215.0] L Player_Event[0] - EventPlayASForTimeline (#147, concurrent=0)
[   6215.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 395.0
               EndBluarLevel: 1.0399999618530273
               EndDistance: 2.4700000286102295
               EndFNumber: 74.5
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0399999618530273
               StartDistance: 2.4700000286102295
               StartFNumber: 74.5
[   6215.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#37, concurrent=1)
               duration: 395.0
               EndFocusDis: 2.559999942779541
               IsWaitEnd: true
               StarFocusDis: 2.559999942779541
[   6215.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#95, concurrent=0)
               duration: 395.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C14-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   6215.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#116, concurrent=0)
               duration: 395.0
               ASName: C14-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6608.0] L VoicePlayActor[0] - EventStartVoice (#71, concurrent=0)
[   6610.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#17, concurrent=0)
[   6610.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#37, concurrent=1)
[   6610.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#95, concurrent=0)
[   6610.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#116, concurrent=0)
[   6610.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 670.0
               EndBluarLevel: 0.800000011920929
               EndDistance: 3.799999952316284
               EndFNumber: 30.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.800000011920929
               StartDistance: 3.799999952316284
               StartFNumber: 30.0
[   6610.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#38, concurrent=1)
               duration: 670.0
               EndFocusDis: 6.800000190734863
               IsWaitEnd: true
               StarFocusDis: 6.800000190734863
[   6610.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#96, concurrent=0)
               duration: 670.0
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
[   6610.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#117, concurrent=0)
               duration: 670.0
               ASName: C15-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6610.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#130, concurrent=0)
               duration: 670.0
               ASName: C15-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6610.0] E Player_Event[0] - EventPlayASForTimeline (#148, concurrent=0)
               duration: 670.0
               ASName: C15-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   6612.0] E VoicePlayActor[0] - EventStartVoice (#72, concurrent=0)
               duration: 278.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_027_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   6890.0] L VoicePlayActor[0] - EventStartVoice (#72, concurrent=0)
[   6890.0] E VoicePlayActor[0] - EventStartVoice (#73, concurrent=0)
               duration: 388.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_028_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   7278.0] L VoicePlayActor[0] - EventStartVoice (#73, concurrent=0)
[   7280.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#18, concurrent=0)
[   7280.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#38, concurrent=1)
[   7280.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#96, concurrent=0)
[   7280.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#117, concurrent=0)
[   7280.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#130, concurrent=0)
[   7280.0] L Player_Event[0] - EventPlayASForTimeline (#148, concurrent=0)
[   7280.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 590.0
               EndBluarLevel: 1.3420000076293945
               EndDistance: 2.200000047683716
               EndFNumber: 40.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.3420000076293945
               StartDistance: 2.200000047683716
               StartFNumber: 40.0
[   7280.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#39, concurrent=1)
               duration: 254.0
               EndFocusDis: 2.8299999237060547
               IsWaitEnd: true
               StarFocusDis: 2.8299999237060547
[   7280.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#97, concurrent=0)
               duration: 590.0
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
[   7280.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#118, concurrent=0)
               duration: 590.0
               ASName: C16-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7515.0] E VoicePlayActor[0] - EventStartVoice (#74, concurrent=0)
               duration: 160.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_029_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   7534.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#39, concurrent=1)
[   7534.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#40, concurrent=1)
               duration: 11.0
               EndFocusDis: 1.690000057220459
               IsWaitEnd: true
               StarFocusDis: 2.8299999237060547
[   7545.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#40, concurrent=1)
[   7545.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#41, concurrent=1)
               duration: 325.0
               EndFocusDis: 1.690000057220459
               IsWaitEnd: true
               StarFocusDis: 1.690000057220459
[   7675.0] L VoicePlayActor[0] - EventStartVoice (#74, concurrent=0)
[   7675.0] E VoicePlayActor[0] - EventStartVoice (#75, concurrent=0)
               duration: 165.0
               Angle: 0.0
               IsShowingSpeakerName: true
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_030_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   7840.0] L VoicePlayActor[0] - EventStartVoice (#75, concurrent=0)
[   7840.0] E VoicePlayActor[0] - EventStartVoice (#76, concurrent=0)
               duration: 200.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_031_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   7870.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#19, concurrent=0)
[   7870.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#41, concurrent=1)
[   7870.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#97, concurrent=0)
[   7870.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#118, concurrent=0)
[   7870.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
               duration: 30.0
               EndBluarLevel: 3.0
               EndDistance: 8.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 4.5
               StartFNumber: 15.0
[   7870.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#42, concurrent=1)
               duration: 200.0
               EndFocusDis: 12.5
               IsWaitEnd: true
               StarFocusDis: 9.739999771118164
[   7870.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#98, concurrent=0)
               duration: 200.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C17-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   7870.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#119, concurrent=0)
               duration: 200.0
               ASName: C17-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7870.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#131, concurrent=0)
               duration: 200.0
               ASName: C17-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7870.0] E Player_Event[0] - EventPlayASForTimeline (#149, concurrent=0)
               duration: 200.0
               ASName: C17-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   7900.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#20, concurrent=0)
[   7900.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
               duration: 170.0
               EndBluarLevel: 3.0
               EndDistance: 8.0
               EndFNumber: 15.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 3.0
               StartDistance: 8.0
               StartFNumber: 15.0
[   8040.0] L VoicePlayActor[0] - EventStartVoice (#76, concurrent=0)
[   8040.0] E VoicePlayActor[0] - EventStartVoice (#77, concurrent=0)
               duration: 195.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_031_c
               OffsetFrame: 30
               Speaker: Player_Event
[   8070.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#21, concurrent=0)
[   8070.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#42, concurrent=1)
[   8070.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#98, concurrent=0)
[   8070.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#119, concurrent=0)
[   8070.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#131, concurrent=0)
[   8070.0] L Player_Event[0] - EventPlayASForTimeline (#149, concurrent=0)
[   8070.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
               duration: 180.0
               EndBluarLevel: 0.9660000205039978
               EndDistance: 1.4299999475479126
               EndFNumber: 55.20000076293945
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.9660000205039978
               StartDistance: 1.4299999475479126
               StartFNumber: 55.20000076293945
[   8070.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#43, concurrent=1)
               duration: 180.0
               EndFocusDis: 1.690000057220459
               IsWaitEnd: true
               StarFocusDis: 1.690000057220459
[   8070.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#99, concurrent=0)
               duration: 180.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C18-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   8070.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#132, concurrent=0)
               duration: 180.0
               ASName: C18-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8070.0] E Player_Event[0] - EventPlayASForTimeline (#150, concurrent=0)
               duration: 180.0
               ASName: C18-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8235.0] L VoicePlayActor[0] - EventStartVoice (#77, concurrent=0)
[   8235.0] E VoicePlayActor[0] - EventStartVoice (#78, concurrent=0)
               duration: 428.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_DeathMtTrail_0020:Dm_DeathMtTrail_0020_Text_034_b
               OffsetFrame: 30
               Speaker: Npc_Goron_Darunia_Child
[   8250.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#22, concurrent=0)
[   8250.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#43, concurrent=1)
[   8250.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#99, concurrent=0)
[   8250.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#132, concurrent=0)
[   8250.0] L Player_Event[0] - EventPlayASForTimeline (#150, concurrent=0)
[   8250.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
               duration: 415.0
               EndBluarLevel: 1.3420000076293945
               EndDistance: 2.5
               EndFNumber: 50.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.3420000076293945
               StartDistance: 2.5
               StartFNumber: 50.0
[   8250.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#44, concurrent=1)
               duration: 415.0
               EndFocusDis: 3.240000009536743
               IsWaitEnd: true
               StarFocusDis: 3.240000009536743
[   8250.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#100, concurrent=0)
               duration: 415.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C19-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   8250.0] E Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#120, concurrent=0)
               duration: 415.0
               ASName: C19-Npc_Goron_GOU_Darunia-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   8521.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 144.0
               Color: 1
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   8663.0] L VoicePlayActor[0] - EventStartVoice (#78, concurrent=0)
[   8665.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[   8665.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#23, concurrent=0)
[   8665.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#44, concurrent=1)
[   8665.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#100, concurrent=0)
[   8665.0] L Npc_Goron_Darunia_Child[0] - EventPlayASForTimeline (#120, concurrent=0)
[   8665.0] L Npc_Navi - EventGoOffstageForUser (#121, concurrent=0)
[   8665.0] L Land_DeathMtTrail_DemoGround_A_01 - EventGoOffstageForUser (#157, concurrent=0)
