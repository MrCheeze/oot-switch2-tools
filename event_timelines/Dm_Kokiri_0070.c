-------- Event timeline: Dm_Kokiri_0070 --------
actors: 13
clips: 63
oneshots: 0
cuts: 6
duration: 3778.0
subtimelines: ['Dm_Kokiri_0070_Effect', 'Dm_Kokiri_0070_Env']
params: (none)

===== Cuts =====

Cut: cut01
start time: 0.0
x4: 0
params: (none)

Cut: cut02
start time: 187.0
x4: 0
params: (none)

Cut: cut03
start time: 449.0
x4: 0
params: (none)

Cut: cut04
start time: 1854.0
x4: 0
params: (none)

Cut: cut05
start time: 2644.0
x4: 0
params: (none)

Cut: cut06
start time: 3042.0
x4: 0
params: (none)


===== Actors =====

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventDoNothing']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: SoundSystemActor[0]
concurrent clips: 1
actions: ['EventTriggerStartBgmSimple']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[0]
concurrent clips: 1
actions: ['EventSetRenderingCenterPosFromCameraPos']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[1]
concurrent clips: 1
actions: ['EventSetDoFForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: UISystemActor
concurrent clips: 1
actions: ['EventShowDemoNicknameUIForTimeline', 'EventEventFadeInForTimeline', 'EventEventFadeOutForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: VoicePlayActor[2]
concurrent clips: 1
actions: ['EventStartVoice']
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
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0070/Dm_Kokiri_0070_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Land_Kokiri_DekuTree_A_04
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 103.0
- 109.5199966430664
- -29.6299991607666
Rotation:
- 0.0
- -81.85099792480469
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0070/Dm_Kokiri_0070_Land_Kokiri_DekuTree_B/workspace.pp__ModelProject.gyml

Actor: Land_Kokiri_DekuTree_A_01
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: true
Position:
- 103.0
- 109.5199966430664
- -29.6299991607666
Rotation:
- 0.0
- -81.85099792480469
- 0.0
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0070/Dm_Kokiri_0070_Land_Kokiri_DekuTree_A/workspace.pp__ModelProject.gyml

Actor: Player_Event[0]
concurrent clips: 3
actions: ['EventPlayASForTimeline', 'EventTriggerChemicalRequestDryTemporarily', 'EventTriggerSetModelLodManual']
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
UseEventAS: Work/AS/Root/Event/Dm_Kokiri_0070_Player_Child.root.as
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0070/Dm_Kokiri_0070_Player_Child/workspace.pp__ModelProject.gyml

Actor: EventCamera[0]
concurrent clips: 2
actions: ['EventMoveCameraAnimationInstructions', 'EventSetNearCurrentCameraAnimation']
params: EventMemberCreateMethod: 0
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_Kokiri_0070/Dm_Kokiri_0070/workspace.pp__ModelProject.gyml


===== Timeline =====

[      0.0] E Dm_Locator[0] - EventDoNothing (#0, concurrent=0)
               duration: 3778.0
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#2, concurrent=0)
               duration: 187.0
               EndFocusDis: 1.809999942779541
               IsWaitEnd: true
               StarFocusDis: 1.809999942779541
[      0.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 187.0
               EndBluarLevel: 2.0
               EndDistance: 1.149999976158142
               EndFNumber: 38.29999923706055
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 1.149999976158142
               StartFNumber: 38.29999923706055
[      0.0] E UISystemActor - EventEventFadeInForTimeline (#20, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E Npc_Navi - EventGoOffstageForUser (#33, concurrent=0)
               duration: 3778.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[      0.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 187.0
               ASName: C01-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 187.0
               ASName: C01-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#52, concurrent=1)
               duration: 3778.0
[      0.0] E Player_Event[0] - EventTriggerSetModelLodManual (#53, concurrent=2)
               duration: 1854.0
               LodLevel: 0
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
               duration: 187.0
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
[      0.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#61, concurrent=1)
               duration: 187.0
               Near: 0.20000000298023224
[     60.0] L UISystemActor - EventEventFadeInForTimeline (#20, concurrent=0)
[    187.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#2, concurrent=0)
[    187.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#10, concurrent=0)
[    187.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#34, concurrent=0)
[    187.0] L Player_Event[0] - EventPlayASForTimeline (#47, concurrent=0)
[    187.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#55, concurrent=0)
[    187.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#61, concurrent=1)
[    187.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#3, concurrent=0)
               duration: 262.0
               EndFocusDis: 2.0
               IsWaitEnd: true
               StarFocusDis: 2.0
[    187.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 262.0
               EndBluarLevel: 1.5
               EndDistance: 9.625
               EndFNumber: 16.899999618530273
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 9.625
               StartFNumber: 16.899999618530273
[    187.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 262.0
               ASName: C02-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    187.0] E Player_Event[0] - EventPlayASForTimeline (#48, concurrent=0)
               duration: 262.0
               ASName: C02-Player_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    187.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
               duration: 262.0
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
[    449.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#3, concurrent=0)
[    449.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#11, concurrent=0)
[    449.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#35, concurrent=0)
[    449.0] L Player_Event[0] - EventPlayASForTimeline (#48, concurrent=0)
[    449.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#56, concurrent=0)
[    449.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#4, concurrent=0)
               duration: 411.0
               EndFocusDis: 3.2699999809265137
               IsWaitEnd: true
               StarFocusDis: 3.2699999809265137
[    449.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#12, concurrent=0)
               duration: 154.0
               EndBluarLevel: 1.5
               EndDistance: 1.0099999904632568
               EndFNumber: 35.20000076293945
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.0099999904632568
               StartFNumber: 35.20000076293945
[    449.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 1405.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    449.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#41, concurrent=0)
               duration: 1405.0
               ASName: C03-Land_Kokiri_DekuTree_B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    449.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#44, concurrent=0)
               duration: 1405.0
               ASName: C03-Land_Kokiri_DekuTree_A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    449.0] E Player_Event[0] - EventPlayASForTimeline (#49, concurrent=0)
               duration: 1405.0
               ASName: AS_C03-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    449.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
               duration: 1405.0
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
[    449.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#62, concurrent=1)
               duration: 1405.0
               Near: 0.10000000149011612
[    603.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#12, concurrent=0)
[    603.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#13, concurrent=0)
               duration: 197.0
               EndBluarLevel: 1.5
               EndDistance: 0.800000011920929
               EndFNumber: 55.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.0099999904632568
               StartFNumber: 35.20000076293945
[    606.0] E VoicePlayActor[0] - EventStartVoice (#25, concurrent=0)
               duration: 86.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0070:Dm_Kokiri_0070_Text_000_a
               OffsetFrame: 30
               Speaker: Player_Event
[    692.0] L VoicePlayActor[0] - EventStartVoice (#25, concurrent=0)
[    741.0] E VoicePlayActor[0] - EventStartVoice (#26, concurrent=0)
               duration: 129.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0070:Dm_Kokiri_0070_Text_000_ab
               OffsetFrame: 30
               Speaker: Player_Event
[    762.0] E SoundSystemActor[0] - EventTriggerStartBgmSimple (#1, concurrent=0)
               duration: 100.0
               BGMName: BGM_Dm_Kokiri_0070
               CommandLife: 2
               IsReleaseDucking: false
[    800.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#13, concurrent=0)
[    800.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#14, concurrent=0)
               duration: 60.0
               EndBluarLevel: 1.5
               EndDistance: 1.0
               EndFNumber: 55.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 0.800000011920929
               StartFNumber: 55.0
[    860.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#4, concurrent=0)
[    860.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#14, concurrent=0)
[    860.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#5, concurrent=0)
               duration: 172.0
               EndFocusDis: 30.0
               IsWaitEnd: true
               StarFocusDis: 3.2699999809265137
[    860.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#15, concurrent=0)
               duration: 172.0
               EndBluarLevel: 0.0
               EndDistance: 6.53000020980835
               EndFNumber: 9.399999618530273
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 1.0099999904632568
               StartFNumber: 55.0
[    862.0] L SoundSystemActor[0] - EventTriggerStartBgmSimple (#1, concurrent=0)
[    870.0] L VoicePlayActor[0] - EventStartVoice (#26, concurrent=0)
[    940.0] E VoicePlayActor[0] - EventStartVoice (#27, concurrent=0)
               duration: 178.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0070:Dm_Kokiri_0070_Text_000_b
               OffsetFrame: 30
               Speaker: Npc_Navi
[    970.0] E Dm_Npc_Navi[0] - EventNaviPlayLipSync (#39, concurrent=1)
               duration: 150.0
[   1032.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#5, concurrent=0)
[   1032.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#15, concurrent=0)
[   1032.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#6, concurrent=0)
               duration: 822.0
               EndFocusDis: 30.0
               IsWaitEnd: true
               StarFocusDis: 30.0
[   1032.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#16, concurrent=0)
               duration: 822.0
               EndBluarLevel: 0.0
               EndDistance: 6.53000020980835
               EndFNumber: 9.399999618530273
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 6.53000020980835
               StartFNumber: 9.399999618530273
[   1118.0] L VoicePlayActor[0] - EventStartVoice (#27, concurrent=0)
[   1120.0] L Dm_Npc_Navi[0] - EventNaviPlayLipSync (#39, concurrent=1)
[   1120.0] E Dm_Npc_Navi[0] - EventNaviStopLipSync (#40, concurrent=1)
               duration: 10.0
[   1124.0] E VoicePlayActor[0] - EventStartVoice (#28, concurrent=0)
               duration: 328.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0070:Dm_Kokiri_0070_Text_001_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   1130.0] L Dm_Npc_Navi[0] - EventNaviStopLipSync (#40, concurrent=1)
[   1452.0] L VoicePlayActor[0] - EventStartVoice (#28, concurrent=0)
[   1514.0] E UISystemActor - EventShowDemoNicknameUIForTimeline (#21, concurrent=0)
               duration: 320.0
               DemoNicknamePos: 2
               DemoNicknameType: 0
               InAnimFrame: -1
               IsWaitEnd: true
               NameMessageLabel: ActorMsg/Npc:Land_Kokiri_DekuTree_A_01_Name
               NicknameMessageLabel: ActorMsg/Nickname:Npc_DekuTree
               OutAnimFrame: -1
[   1834.0] L UISystemActor - EventShowDemoNicknameUIForTimeline (#21, concurrent=0)
[   1839.0] E VoicePlayActor[0] - EventStartVoice (#29, concurrent=0)
               duration: 228.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0070:Dm_Kokiri_0070_Text_002_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   1854.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#6, concurrent=0)
[   1854.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#16, concurrent=0)
[   1854.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#36, concurrent=0)
[   1854.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#41, concurrent=0)
[   1854.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#44, concurrent=0)
[   1854.0] L Player_Event[0] - EventPlayASForTimeline (#49, concurrent=0)
[   1854.0] L Player_Event[0] - EventTriggerSetModelLodManual (#53, concurrent=2)
[   1854.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#57, concurrent=0)
[   1854.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#62, concurrent=1)
[   1854.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#7, concurrent=0)
               duration: 790.0
               EndFocusDis: 28.520000457763672
               IsWaitEnd: true
               StarFocusDis: 28.520000457763672
[   1854.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#17, concurrent=0)
               duration: 790.0
               EndBluarLevel: 0.0
               EndDistance: 24.200000762939453
               EndFNumber: 3.8299999237060547
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 24.200000762939453
               StartFNumber: 3.8299999237060547
[   1854.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#42, concurrent=0)
               duration: 790.0
               ASName: C04-Land_Kokiri_DekuTree_B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1854.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#45, concurrent=0)
               duration: 790.0
               ASName: C04-Land_Kokiri_DekuTree_A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1854.0] E Player_Event[0] - EventTriggerSetModelLodManual (#54, concurrent=2)
               duration: 790.0
               LodLevel: -1
[   1854.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
               duration: 790.0
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
[   2067.0] L VoicePlayActor[0] - EventStartVoice (#29, concurrent=0)
[   2087.0] E VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
               duration: 497.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0070:Dm_Kokiri_0070_Text_003_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   2584.0] L VoicePlayActor[0] - EventStartVoice (#30, concurrent=0)
[   2637.0] E VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
               duration: 338.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0070:Dm_Kokiri_0070_Text_004_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   2644.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#7, concurrent=0)
[   2644.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#17, concurrent=0)
[   2644.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#42, concurrent=0)
[   2644.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#45, concurrent=0)
[   2644.0] L Player_Event[0] - EventTriggerSetModelLodManual (#54, concurrent=2)
[   2644.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#58, concurrent=0)
[   2644.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#8, concurrent=0)
               duration: 398.0
               EndFocusDis: 28.899999618530273
               IsWaitEnd: true
               StarFocusDis: 28.899999618530273
[   2644.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#18, concurrent=0)
               duration: 398.0
               EndBluarLevel: 0.0
               EndDistance: 30.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 30.0
               StartFNumber: 10.0
[   2644.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 398.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2644.0] E Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#43, concurrent=0)
               duration: 398.0
               ASName: C05-Land_Kokiri_DekuTree_B-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2644.0] E Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#46, concurrent=0)
               duration: 398.0
               ASName: C05-Land_Kokiri_DekuTree_A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2644.0] E Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 398.0
               ASName: C05-Player_Child-A-0
               ClothWarpMode: 2
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2644.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
               duration: 398.0
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
[   2975.0] L VoicePlayActor[0] - EventStartVoice (#31, concurrent=0)
[   3036.0] E VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
               duration: 540.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0070:Dm_Kokiri_0070_Text_005_b
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   3042.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#8, concurrent=0)
[   3042.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#18, concurrent=0)
[   3042.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#37, concurrent=0)
[   3042.0] L Land_Kokiri_DekuTree_A_04 - EventPlayASForTimeline (#43, concurrent=0)
[   3042.0] L Land_Kokiri_DekuTree_A_01 - EventPlayASForTimeline (#46, concurrent=0)
[   3042.0] L Player_Event[0] - EventPlayASForTimeline (#50, concurrent=0)
[   3042.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#59, concurrent=0)
[   3042.0] E PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#9, concurrent=0)
               duration: 736.0
               EndFocusDis: 1.600000023841858
               IsWaitEnd: true
               StarFocusDis: 1.600000023841858
[   3042.0] E PostProcessingActor[1] - EventSetDoFForTimeline (#19, concurrent=0)
               duration: 736.0
               EndBluarLevel: 1.7000000476837158
               EndDistance: 1.149999976158142
               EndFNumber: 90.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: true
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.7000000476837158
               StartDistance: 1.149999976158142
               StartFNumber: 90.0
[   3042.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 736.0
               ASName: C06-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3042.0] E Player_Event[0] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 736.0
               ASName: C06-Player_Child-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   3042.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
               duration: 736.0
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
[   3388.0] E VoicePlayActor[2] - EventStartVoice (#23, concurrent=0)
               duration: 79.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0070:Dm_Kokiri_0070_Text_005_c
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   3467.0] L VoicePlayActor[2] - EventStartVoice (#23, concurrent=0)
[   3576.0] L VoicePlayActor[0] - EventStartVoice (#32, concurrent=0)
[   3606.0] E VoicePlayActor[2] - EventStartVoice (#24, concurrent=0)
               duration: 48.0
               Angle: 0.0
               IsShowingSpeakerName: false
               IsWaitEnd: true
               MessageDemoPosType: 0
               MessageId: EventFlowMsg/Dm_Kokiri_0070:Dm_Kokiri_0070_Text_005_d
               OffsetFrame: 30
               Speaker: Land_Kokiri_DekuTree_A_01
[   3654.0] L VoicePlayActor[2] - EventStartVoice (#24, concurrent=0)
[   3718.0] E UISystemActor - EventEventFadeOutForTimeline (#22, concurrent=0)
               duration: 60.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   3778.0] L Dm_Locator[0] - EventDoNothing (#0, concurrent=0)
[   3778.0] L PostProcessingActor[0] - EventSetRenderingCenterPosFromCameraPos (#9, concurrent=0)
[   3778.0] L PostProcessingActor[1] - EventSetDoFForTimeline (#19, concurrent=0)
[   3778.0] L UISystemActor - EventEventFadeOutForTimeline (#22, concurrent=0)
[   3778.0] L Npc_Navi - EventGoOffstageForUser (#33, concurrent=0)
[   3778.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#38, concurrent=0)
[   3778.0] L Player_Event[0] - EventPlayASForTimeline (#51, concurrent=0)
[   3778.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#52, concurrent=1)
[   3778.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#60, concurrent=0)
