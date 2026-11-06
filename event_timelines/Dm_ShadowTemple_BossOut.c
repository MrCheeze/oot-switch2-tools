-------- Event timeline: Dm_ShadowTemple_BossOut --------
actors: 13
clips: 54
oneshots: 0
cuts: 6
duration: 2736.0
subtimelines: ['Dm_ShadowTemple_BossOut_Effect', 'Dm_ShadowTemple_BossOut_Env']
params: (none)

===== Cuts =====

Cut: C01_00
start time: 0.0
x4: 0
params: (none)

Cut: C02_00
start time: 208.0
x4: 0
params: (none)

Cut: C03_00
start time: 628.0
x4: 0
params: (none)

Cut: C03_50
start time: 1223.0
x4: 0
params: (none)

Cut: C04_00
start time: 1513.0
x4: 0
params: (none)

Cut: C05_00
start time: 1937.0
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

Actor: GameSystemActor[0]
concurrent clips: 1
actions: ['EventDemoProductSupportComment']
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
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossOut/Dm_ShadowTemple_BossOut/workspace.pp__ModelProject.gyml

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
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossOut/Dm_ShadowTemple_BossOut_Player_Adult/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_BongoBongo
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_ShadowTemple_BossOut.root.as
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossOut/Dm_ShadowTemple_BossOut_Enemy_DungeonBoss_BongoBongo/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossOut/Dm_ShadowTemple_BossOut_Enemy_DungeonBoss_BongoBongo_LeftHand/workspace.pp__ModelProject.gyml

Actor: Enemy_DungeonBoss_BongoBongo_RightHand[right_hand]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 2
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossOut/Dm_ShadowTemple_BossOut_Enemy_DungeonBoss_BongoBongo_RightHand/workspace.pp__ModelProject.gyml

Actor: Dm_Npc_Navi[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossOut/Dm_ShadowTemple_BossOut_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Npc_Navi
concurrent clips: 1
actions: ['EventGoOffstageForUser']
params: EventMemberCreateMethod: 2
ExceptionalBindType: 3
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossOut/Dm_ShadowTemple_BossOut_Npc_Navi/workspace.pp__ModelProject.gyml

Actor: Obj_Heart_Container[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: Work/AS/Root/Event/Dm_ShadowTemple_BossOut.root.as
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossOut/Dm_ShadowTemple_BossOut_Obj_Heart_Container/workspace.pp__ModelProject.gyml

Actor: Dm_Locator[0]
concurrent clips: 1
actions: ['EventPlayASForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: Work/Model/Event/Dm_ShadowTemple_BossOut/Dm_ShadowTemple_BossOut_Dm_Locator/workspace.pp__ModelProject.gyml

Actor: Obj_WarpPoint_A_01[0]
concurrent clips: 1
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsWaitEnd: true
[      0.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
               duration: 208.0
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
[      0.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#12, concurrent=0)
               duration: 208.0
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
[      0.0] E Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#23, concurrent=1)
               duration: 2736.0
[      0.0] E Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#24, concurrent=2)
               duration: 208.0
               BootsType: 0
[      0.0] E Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#26, concurrent=0)
               duration: 208.0
               ASName: C01-Enemy_DungeonBoss_BongoBongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#32, concurrent=0)
               duration: 208.0
               ASName: C01-Enemy_DungeonBoss_BongoBongo_LeftHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#38, concurrent=0)
               duration: 208.0
               ASName: C01-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[      0.0] E Npc_Navi - EventGoOffstageForUser (#48, concurrent=0)
               duration: 2736.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[    100.0] L UISystemActor[0] - EventEventFadeInForTimeline (#0, concurrent=0)
[    208.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#2, concurrent=0)
[    208.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#12, concurrent=0)
[    208.0] L Player_Event[0] - EventTriggerPlayerTemporaryBootsChange (#24, concurrent=2)
[    208.0] L Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#26, concurrent=0)
[    208.0] L Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#32, concurrent=0)
[    208.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#38, concurrent=0)
[    208.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
               duration: 420.0
               EndBluarLevel: 1.5
               EndDistance: 16.799999237060547
               EndFNumber: 0.9700000286102295
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.5
               StartDistance: 16.799999237060547
               StartFNumber: 0.9700000286102295
[    208.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
               duration: 420.0
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
[    208.0] E Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#27, concurrent=0)
               duration: 420.0
               ASName: C02-Enemy_DungeonBoss_BongoBongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    208.0] E Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#33, concurrent=0)
               duration: 420.0
               ASName: C02-Enemy_DungeonBoss_BongoBongo_LeftHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    208.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#39, concurrent=0)
               duration: 420.0
               ASName: C02-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    628.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#3, concurrent=0)
[    628.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#13, concurrent=0)
[    628.0] L Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#27, concurrent=0)
[    628.0] L Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#33, concurrent=0)
[    628.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#39, concurrent=0)
[    628.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
               duration: 47.0
               EndBluarLevel: 2.0
               EndDistance: 8.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 15.0
               StartFNumber: 10.0
[    628.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
               duration: 595.0
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
[    628.0] E Player_Event[0] - EventPlayASForTimeline (#19, concurrent=0)
               duration: 595.0
               ASName: C03-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    628.0] E Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#28, concurrent=0)
               duration: 595.0
               ASName: C03-Enemy_DungeonBoss_BongoBongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    628.0] E Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#34, concurrent=0)
               duration: 595.0
               ASName: C03-Enemy_DungeonBoss_BongoBongo_LeftHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    628.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#40, concurrent=0)
               duration: 595.0
               ASName: C03-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    628.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#44, concurrent=0)
               duration: 595.0
               ASName: C03-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[    675.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#4, concurrent=0)
[    675.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
               duration: 127.0
               EndBluarLevel: 2.0
               EndDistance: 8.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 8.0
               StartFNumber: 10.0
[    802.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#5, concurrent=0)
[    802.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
               duration: 276.0
               EndBluarLevel: 2.0
               EndDistance: 7.0
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 8.0
               StartFNumber: 10.0
[   1078.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#6, concurrent=0)
[   1078.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
               duration: 48.0
               EndBluarLevel: 1.0
               EndDistance: 7.0
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 2.0
               StartDistance: 7.0
               StartFNumber: 5.0
[   1126.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#7, concurrent=0)
[   1126.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
               duration: 97.0
               EndBluarLevel: 1.0
               EndDistance: 7.0
               EndFNumber: 5.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 1.0
               StartDistance: 7.0
               StartFNumber: 5.0
[   1223.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#8, concurrent=0)
[   1223.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#14, concurrent=0)
[   1223.0] L Player_Event[0] - EventPlayASForTimeline (#19, concurrent=0)
[   1223.0] L Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#28, concurrent=0)
[   1223.0] L Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#34, concurrent=0)
[   1223.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#40, concurrent=0)
[   1223.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#44, concurrent=0)
[   1223.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
               duration: 290.0
               EndBluarLevel: 0.0
               EndDistance: 26.0
               EndFNumber: 3.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.0
               StartDistance: 26.0
               StartFNumber: 3.0
[   1223.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
               duration: 290.0
               CameraName: ''
               IsIgnoreRootRot: false
               IsReferenceRootOnce: false
               IsWaitEnd: true
               OverwriteEndFrame: -1.0
               OverwriteStartFrame: -1.0
               RootType: 1
               SceneName: C03_50-0
               TargetActorInstanceName: ''
               TargetActorName: ''
[   1223.0] E Player_Event[0] - EventPlayASForTimeline (#20, concurrent=0)
               duration: 290.0
               ASName: C03_50-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1223.0] E Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#29, concurrent=0)
               duration: 290.0
               ASName: AS-C03_50-Enemy_DungeonBoss_BongoBongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1223.0] E Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#35, concurrent=0)
               duration: 290.0
               ASName: C03_50-Enemy_DungeonBoss_BongoBongo_LeftHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1223.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#41, concurrent=0)
               duration: 290.0
               ASName: C03_50-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1223.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#45, concurrent=0)
               duration: 290.0
               ASName: C03_50-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1513.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#9, concurrent=0)
[   1513.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#15, concurrent=0)
[   1513.0] L Player_Event[0] - EventPlayASForTimeline (#20, concurrent=0)
[   1513.0] L Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#29, concurrent=0)
[   1513.0] L Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#35, concurrent=0)
[   1513.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#41, concurrent=0)
[   1513.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#45, concurrent=0)
[   1513.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
               duration: 424.0
               EndBluarLevel: 0.800000011920929
               EndDistance: 21.399999618530273
               EndFNumber: 2.700000047683716
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.800000011920929
               StartDistance: 21.399999618530273
               StartFNumber: 2.700000047683716
[   1513.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
               duration: 424.0
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
[   1513.0] E Player_Event[0] - EventPlayASForTimeline (#21, concurrent=0)
               duration: 424.0
               ASName: C04-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1513.0] E Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#30, concurrent=0)
               duration: 424.0
               ASName: C04-Enemy_DungeonBoss_BongoBongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1513.0] E Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#36, concurrent=0)
               duration: 424.0
               ASName: C04-Enemy_DungeonBoss_BongoBongo_LeftHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1513.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#42, concurrent=0)
               duration: 424.0
               ASName: C04-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1513.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#46, concurrent=0)
               duration: 424.0
               ASName: C04-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1937.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#10, concurrent=0)
[   1937.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#16, concurrent=0)
[   1937.0] L Player_Event[0] - EventPlayASForTimeline (#21, concurrent=0)
[   1937.0] L Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#30, concurrent=0)
[   1937.0] L Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#36, concurrent=0)
[   1937.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#42, concurrent=0)
[   1937.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#46, concurrent=0)
[   1937.0] E PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
               duration: 799.0
               EndBluarLevel: 0.5
               EndDistance: 10.0
               EndFNumber: 10.0
               IsAutoFocalDist: false
               IsEnableDofFarCancel: false
               IsEnableNear: false
               IsEnableNearDepthBlur: true
               IsPrimaryApply: false
               IsWaitEnd: true
               NearDepthBlurAdd: 3.0
               StartBluarLevel: 0.5
               StartDistance: 10.0
               StartFNumber: 10.0
[   1937.0] E EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
               duration: 799.0
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
[   1937.0] E EventCamera[0] - EventSetNearCurrentCameraAnimation (#18, concurrent=1)
               duration: 799.0
               Near: 0.10000000149011612
[   1937.0] E Player_Event[0] - EventPlayASForTimeline (#22, concurrent=0)
               duration: 799.0
               ASName: C05-Player_Adult-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1937.0] E Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#25, concurrent=2)
               duration: 799.0
[   1937.0] E Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#31, concurrent=0)
               duration: 300.0
               ASName: C05-Enemy_DungeonBoss_BongoBongo-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1937.0] E Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#37, concurrent=0)
               duration: 300.0
               ASName: C05-Enemy_DungeonBoss_BongoBongo_LeftHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1937.0] E Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#43, concurrent=0)
               duration: 300.0
               ASName: C05-Enemy_DungeonBoss_BongoBongo_RightHand-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1937.0] E Dm_Npc_Navi[0] - EventPlayASForTimeline (#47, concurrent=0)
               duration: 799.0
               ASName: C05-Npc_Navi-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1937.0] E Obj_Heart_Container[0] - EventGoOffstageForUser (#49, concurrent=0)
               duration: 423.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   1937.0] E Dm_Locator[0] - EventPlayASForTimeline (#51, concurrent=0)
               duration: 799.0
               ASName: C05-Dm_Locator-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   1937.0] E Obj_WarpPoint_A_01[0] - EventGoOffstageForUser (#52, concurrent=0)
               duration: 499.0
               ExecuteSetSpeedZeroEveryFrame: false
               IsRidingTargetGoOffstage: false
               IsSleepXLink: true
               IsWaitEnd: true
[   2237.0] L Enemy_DungeonBoss_BongoBongo - EventPlayASForTimeline (#31, concurrent=0)
[   2237.0] L Enemy_DungeonBoss_BongoBongo_LeftHand[left_hand] - EventPlayASForTimeline (#37, concurrent=0)
[   2237.0] L Enemy_DungeonBoss_BongoBongo_RightHand[right_hand] - EventPlayASForTimeline (#43, concurrent=0)
[   2360.0] L Obj_Heart_Container[0] - EventGoOffstageForUser (#49, concurrent=0)
[   2360.0] E Obj_Heart_Container[0] - EventPlayASForTimeline (#50, concurrent=0)
               duration: 376.0
               ASName: C05-Obj_Heart_Container-A-0
               ClothWarpMode: -1
               ForceFadeInFrame: -1.0
               IsAllSlot: true
               IsWaitEnd: true
               Partial: ''
[   2436.0] L Obj_WarpPoint_A_01[0] - EventGoOffstageForUser (#52, concurrent=0)
[   2436.0] E Obj_WarpPoint_A_01[0] - EventTriggerParticipateEvent (#53, concurrent=0)
               duration: 300.0
[   2636.0] E UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
               duration: 100.0
               Color: 0
               IsNoPlayAnime: false
               IsStaffCreditTapestryOut: false
               IsWaitEnd: true
[   2736.0] L UISystemActor[0] - EventEventFadeOutForTimeline (#1, concurrent=0)
[   2736.0] L PostProcessingActor[0] - EventSetDoFForTimeline (#11, concurrent=0)
[   2736.0] L EventCamera[0] - EventMoveCameraAnimationInstructions (#17, concurrent=0)
[   2736.0] L EventCamera[0] - EventSetNearCurrentCameraAnimation (#18, concurrent=1)
[   2736.0] L Player_Event[0] - EventPlayASForTimeline (#22, concurrent=0)
[   2736.0] L Player_Event[0] - EventTriggerChemicalRequestDryTemporarily (#23, concurrent=1)
[   2736.0] L Player_Event[0] - EventTriggerPlayerRestoreBootsChange (#25, concurrent=2)
[   2736.0] L Dm_Npc_Navi[0] - EventPlayASForTimeline (#47, concurrent=0)
[   2736.0] L Npc_Navi - EventGoOffstageForUser (#48, concurrent=0)
[   2736.0] L Obj_Heart_Container[0] - EventPlayASForTimeline (#50, concurrent=0)
[   2736.0] L Dm_Locator[0] - EventPlayASForTimeline (#51, concurrent=0)
[   2736.0] L Obj_WarpPoint_A_01[0] - EventTriggerParticipateEvent (#53, concurrent=0)
