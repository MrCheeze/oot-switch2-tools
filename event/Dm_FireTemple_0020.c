-------- EventFlow: Dm_FireTemple_0020 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerTurnAndLookNow']
queries: ['EventQueryPlayerIsEquipMask', 'EventQueryPlayerIsEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviLookAtObject', 'EventTalk', 'EventNaviMoveAtPos', 'EventWarpToTargetActor', 'EventNaviRequestBallonMessage', 'EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventCloseMessageDialog', 'EventTriggerSendErrorToEventResource', 'EventWaitForActorPresence', 'EventTriggerAddPreComputedCullingBasePos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventSetDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Goron_005_Adult
entrypoint: None()
actions: ['EventTalk', 'EventTriggerRequestLookAtTheFront', 'EventWarpToTargetPosAndRot', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventPlayASWithClothWarp', 'EventTriggerLookAtObject']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0014/Dm_FireTemple_0014_Npc_Goron_GON_001/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0014_Npc_Goron_GON_001.root.as'}

Actor: Npc_Goron_001_Adult
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0015/Dm_FireTemple_0015_Npc_Goron_GON_001/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0015_Npc_Goron_GON_001.root.as'}

Actor: Npc_Goron_003_Adult
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventPlayASWithClothWarp', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0016/Dm_FireTemple_0016_Npc_Goron_GON_001/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0016_Npc_Goron_GON_001.root.as'}

Actor: Npc_Goron_007_Adult
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventPlayASWithClothWarp', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0017/Dm_FireTemple_0017_Npc_Goron_GON_001/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0017_Npc_Goron_GON_001.root.as'}

Actor: Npc_Goron_004_Adult
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventTriggerEmitXLink', 'EventWarpToTargetActor', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0018/Dm_FireTemple_0018_Npc_Goron_GON_001/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0018_Npc_Goron_GON_001.root.as'}

Actor: Npc_Goron_002_Adult
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventWarpToTargetActor', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0019/Dm_FireTemple_0019_Npc_Goron_GON_001/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0019_Npc_Goron_GON_001.root.as', 'Position': [78.65409851074219, 141.125, 0.35726499557495117], 'Rotation': [0.0, -50.0, 0.0]}

Actor: Npc_Goron_008_Adult
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject', 'EventTriggerEmitXLink', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0020/Dm_FireTemple_0020_Npc_Goron_GON_001/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0020_Npc_Goron_GON_001.root.as', 'IsGrounding': True}

Actor: Npc_Goron_009_Adult
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0021/Dm_FireTemple_0021_Npc_Goron_GON_001/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0021_Npc_Goron_GON_001.root.as'}

Actor: Npc_Goron_010_Adult
entrypoint: None()
actions: ['EventTalk', 'EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject', 'EventPlayASWithClothWarp']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_FireTemple_0022/Dm_FireTemple_0022_Npc_Goron_GON_001/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_FireTemple_0022_Npc_Goron_GON_001.root.as', 'Position': [-7.03000020980835, 100.0, -6.5]}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Obj_DoorChainLock_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor[cut_number]
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Goron_Evt_Wait_01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Player_EventWait_01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Player_EventWait_05]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Player_EventWait_08]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Goron_EvtWait_08]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Player_EventWait_09]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Player_EventWait_07]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[player]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Culling]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void C01_01() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_005_Adult_FireTemple_Delete'})

    fork {
        Npc_Goron_005_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-36.030311584472656, 105.0, 24.19428062438965], 'YAngle': 69.00395202636719, 'ClothWarpMode': -1})
        Npc_Goron_005_Adult.EventPlayASWithClothWarp({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ClothWarpMode': -1})
        Npc_Goron_005_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [-34.655330657958984, 105.03829956054688, 24.976659774780273], 'YAngle': -118.2135009765625, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 3, 'EnableInAir': False})

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron_005_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 0, 'YAngle': -120.0, 'PositionOffset': [0.5, 1.5, 0.0], 'ClothWarpMode': -1})
        }

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-33.119998931884766, 106.22000122070312, 24.139999389648438], 'AtVector': [-37.38999938964844, 106.08000183105469, 25.309999465942383], 'MoveTime': 0, 'TargetFovy': 53.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Dm_Obj_DoorChainLock_A_01.EventTriggerParticipateEvent()
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 2.0, 'EndFNumber': 16.0, 'EndBluarLevel': 2.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron_005_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_005_Adult:Talk_00', 'ASName': '', 'MaintainPerformanceState': 0})
    Npc_Goron_005_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_005_Adult:Talk_01', 'IsOverrideStyle': False, 'IsNotBecomeSpeaker': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0, 'ASName': ''})

    call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingL', 'Player_IsWaitEnd': True, 'Npc_ActorName': ActorIdentifier(name="Npc_Goron_005_Adult")})

    Npc_Goron_005_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Goron_005_Adult:Talk_06', 'MaintainPerformanceState': 0})

    fork {
        Npc_Goron_005_Adult.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 0, 'ActorName': '', 'FaceControlType': 1, 'WorldPos': [-31.628000259399414, 107.0, 21.47100067138672]})
    } {
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})

        fork {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'ActorName': '', 'UpperASCommand': '', 'WorldPos': [-31.82699966430664, 105.0, 14.187000274658203], 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'UseNormalTurn': True, 'SlowTurn': True, 'IsDoNavi': False})
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'Target': 0, 'WorldPos': [-31.82699966430664, 111.11000061035156, 14.187000274658203], 'ActorName': ''})
        }

    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-03', 'RootType': 0, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Npc_Goron_005_Adult.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_005_Adult:Talk_10', 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 2.0, 'EndFNumber': 16.0, 'EndBluarLevel': 2.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0})
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 4.0, 'EndFNumber': 16.0, 'EndBluarLevel': 1.5, 'RequiredFrame': 400, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False})
    }

}

void C02_01() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 0, 'SceneName': 'C02-04', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Npc_Goron_005_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-36.030311584472656, 105.0, 24.19428062438965], 'YAngle': 69.00395202636719, 'ClothWarpMode': -1})
        Npc_Goron_005_Adult.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_005_Adult:Talk_11', 'MaintainPerformanceState': 0})
        Npc_Goron_005_Adult.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'Act_Sad_Wait', 'ForceFadeInFrame': 0.0, 'IsAllSlot': True})
        Npc_Goron_005_Adult.EventTriggerRequestLookAtTheFront()
        Npc_Goron_005_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    } {
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'Target': 3, 'ActorName': 'Npc_Goron_005_Adult', 'IsWaitEnd': True, 'IgnoreTargetPosMove': False, 'UseNormalTurn': True, 'KeepTalkWait': False, 'SlowTurn': False, 'IsDoNavi': False})
    } {
        Npc_Navi.EventNaviLookAtObject({'InstanceName': '', 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Goron_005_Adult'})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndFNumber': 16.0, 'EndBluarLevel': 2.0, 'EndDistance': 3.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    } {
        EventSystemActor[Culling].EventWait({'IsWaitEnd': True, 'Frames': 180})
        GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [-33.119998931884766, 106.22000122070312, 24.139999389648438], 'EndPos': [-33.119998931884766, 106.22000122070312, 24.139999389648438]})
    }

}

void C03_01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [-37.38999938964844, 106.08000183105469, 25.309999465942383], 'MoveTime': 0, 'TargetFovy': 53.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-33.119998931884766, 106.22000122070312, 24.139999389648438], 'IsEnableRevertFast': False})
    } {
        Npc_Goron_005_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_005_Adult:Talk_03', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'ActorName': '', 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'UseNormalTurn': True, 'WorldPos': [-36.029998779296875, 104.9800033569336, 24.190000534057617], 'PosOffset': [0.0, 1.5, 0.0], 'SlowTurn': False, 'IsDoNavi': False})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 2.0, 'EndFNumber': 16.0, 'EndBluarLevel': 2.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    }

}

void C04_01() {

    fork {
        EventSystemActor[Player_EventWait_01].EventWait({'IsWaitEnd': True, 'Frames': 190})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Goron_005_Adult'})
    } {
        Npc_Goron_005_Adult.EventTriggerRequestLookAtTheFront()
        Npc_Goron_005_Adult.EventTalk({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'ASName': 'C04-0_0014', 'EndDialogOption': 1, 'IsWaitEnd': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0015', 'IsAnimeDriven': True, 'IsNotBecomeSpeaker': False, 'IsOverrideStyle': False, 'MaintainPerformanceState': 0})
        EventSystemActor[Goron_Evt_Wait_01].EventWait({'IsWaitEnd': True, 'Frames': 300})
        Npc_Goron_005_Adult.EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    } {
        Npc_Navi.EventWarpToTargetActor({'ActorName': 'Player_Event', 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 0, 'YAngle': -120.0, 'IsWaitEnd': True, 'PositionOffset': [0.6000000238418579, 1.5, -0.699999988079071], 'ClothWarpMode': -1})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_005_Adult'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-32.959999084472656, 105.77999877929688, 20.809999465942383], 'AtVector': [-35.0099983215332, 106.16999816894531, 24.049999237060547], 'TargetFovy': 48.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 430, 'PosVector': [-32.79999923706055, 105.75, 20.559999465942383], 'AtVector': [-35.0099983215332, 106.16999816894531, 24.049999237060547], 'TargetFovy': 48.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Appear', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 270})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
        Npc_Goron_005_Adult.EventTriggerEmitXLink({'ELinkKey': 'Dm_FireTemple_0020_Rolling_00', 'SLinkKey': ''})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'GameDataName': 'NumberOfCoughtGoron', 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})

    call NumberOfLeftGoron()


    fork {
        Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'IncSpeedDistance': 0.5, 'DecSpeedDistance': 0.5, 'MoveSpeed': 4.0, 'MinimumSpeed': 4.0, 'IsLookAtObject': False, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'LookAtTarget': 0, 'LookAtActorName': '', 'ASCommand': '', 'WorldPos': [-38.900001525878906, 106.0, 24.610000610351562], 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'PosVector': [-35.04999923706055, 106.37999725341797, 23.5], 'AtVector': [-35.400001525878906, 106.30000305175781, 23.639999389648438], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }


    fork {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0006', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerTurnAndLook({'WorldPos': [-39.709999084472656, 105.0, 25.329999923706055], 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void EntryPoint1() {

    fork {

        call C01_02()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0})
    }


    fork {

        call C02_02()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02'})
    }

}

void C01_02() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_001_Adult_FireTemple_Delete'})

    fork {
        Npc_Goron_001_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -45.046138763427734, 'Position': [34.0, 105.30079650878906, -45.046138763427734], 'ClothWarpMode': -1})
        Npc_Goron_001_Adult.EventTriggerLookAtObject({'ActorName': 'Player_Event', 'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Goron_001_Adult.EventPlayASWithClothWarp({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [33.599998474121094, 106.62999725341797, -42.15999984741211], 'AtVector': [32.939998626708984, 106.0, -47.45000076293945], 'TargetFovy': 52.099998474121094, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 137.60870361328125, 'Position': [32.996238708496094, 105.30079650878906, -43.400001525878906], 'ASCommand': 'EvtWait', 'ClothWarpMode': 3, 'EnableInAir': False})

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron_001_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, -5.0]})
        } {
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'InstanceName': '', 'YAngle': -120.0, 'OffsetBase': 1, 'IsNearOffset': False, 'IsDisguisedPlayerPos': False, 'Target': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Type': 1})
            Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_001_Adult'})
        }

    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 2.0, 'EndFNumber': 16.0, 'EndBluarLevel': 2.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
    Npc_Goron_001_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_001_Adult:Talk_00', 'MaintainPerformanceState': 0})
}

void C02_02() {

    fork {
        Npc_Goron_001_Adult.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'ASName': 'C02-0_0015', 'EndDialogOption': 1, 'IsAnimeDriven': True, 'IsWaitEnd': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0001', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [33.20000076293945, 106.61000061035156, -40.220001220703125], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [33.44089889526367, 106.57980346679688, -41.4145393371582], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'PosVector': [33.119998931884766, 106.61000061035156, -39.7400016784668], 'TargetFovy': 50.0, 'MoveTime': 1000, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [33.44089889526367, 106.57980346679688, -41.4145393371582], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 135})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Appear', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'GameDataName': 'NumberOfCoughtGoron', 'Index': -1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call NumberOfLeftGoron()

    Player_Event.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [34.470001220703125, 105.30000305175781, -46.689998626708984]})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void C01_03() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_003_Adult_FireTemple_Delete'})

    fork {
        Npc_Goron_003_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 138.46180725097656, 'Position': [38.79999923706055, 105.30000305175781, 49.15999984741211], 'ClothWarpMode': -1})
        Npc_Goron_003_Adult.EventPlayASWithClothWarp({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1})
        Npc_Goron_003_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [39.57844924926758, 106.7614974975586, 46.329681396484375], 'AtVector': [39.4556884765625, 106.05999755859375, 50.65148162841797], 'TargetFovy': 53.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': -42.89241027832031, 'ASCommand': 'EvtTalk', 'Position': [39.939998626708984, 105.30079650878906, 47.31999969482422], 'ClothWarpMode': 3, 'EnableInAir': False})

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'Target': 0, 'PosOffset': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'ActorName': '', 'WorldPos': [39.02389907836914, 106.9000015258789, 49.04970169067383]})
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'InstanceName': '', 'YAngle': -120.0, 'OffsetBase': 1, 'Type': 1, 'IsNearOffset': False, 'IsDisguisedPlayerPos': False, 'Target': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
            Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_003_Adult'})
        }

    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 1.7000000476837158, 'EndFNumber': 16.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndBluarLevel': 1.5})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron_003_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_003_Adult:Talk_05', 'MaintainPerformanceState': 0})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron_003_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'Direction': 0.0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [-1.0, 0.0, -7.0]})

    call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingL', 'Npc_ActorName': ActorIdentifier(name="Npc_Goron_003_Adult"), 'Player_IsWaitEnd': True})

    Npc_Goron_003_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_003_Adult:Talk_00', 'MaintainPerformanceState': 0})
}

void C02_03() {

    fork {
        Npc_Goron_003_Adult.EventTriggerRequestLookAtTheFront()
        Npc_Goron_003_Adult.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0000', 'EndDialogOption': 1, 'ASName': 'C02-0_0016', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [39.560001373291016, 106.58000183105469, 44.68000030517578], 'AtVector': [39.40999984741211, 106.33000183105469, 48.11000061035156], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 1000, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': False, 'PosVector': [39.56999969482422, 106.5999984741211, 44.369998931884766], 'AtVector': [39.40999984741211, 106.33000183105469, 48.11000061035156], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 135})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Appear', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 170})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'GameDataName': 'NumberOfCoughtGoron', 'Index': -1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call NumberOfLeftGoron()

    Player_Event.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [38.5099983215332, 105.30000305175781, 50.81999969482422]})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void C01_04() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_007_Adult_FireTemple_Delete'})
    Npc_Goron_007_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 49.81779098510742, 'ClothWarpMode': -1, 'Position': [48.16830062866211, 147.0, -41.45431137084961]})
    Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'TargetActorKind': 1, 'ActorName': 'Npc_Goron_007_Adult', 'OffsetBase': 1, 'YAngle': 180.0, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 2.0999999046325684], 'ASCommand': 'EvtTalk'})

    fork {
        Npc_Goron_007_Adult.EventPlayASWithClothWarp({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1})
        Npc_Goron_007_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 3})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron_007_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'Direction': 0.0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, -7.0]})
    } {
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Biggoron', 'WeaponSlot': 0}) {
            Event39:
            Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'TargetActorKind': 1, 'InstanceName': '', 'YAngle': -120.0, 'OffsetBase': 1, 'ClothWarpMode': -1, 'PositionOffset': [0.009999999776482582, 1.7200000286102295, -0.3700000047683716]})
            Event551:
            Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_007_Adult'})
        } else
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_Giant'}) {
            goto Event39
        } else
        if !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 0, 'ArmorName': 'Weapon_Sword_BrokenGiant'}) {
            goto Event39
        } else {
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'InstanceName': '', 'YAngle': -120.0, 'OffsetBase': 1, 'Type': 1, 'IsNearOffset': False, 'IsDisguisedPlayerPos': False, 'Target': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
        }
        goto Event551
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [49.650001525878906, 148.27000427246094, -38.810001373291016], 'AtVector': [48.310001373291016, 148.0500030517578, -42.709999084472656], 'TargetFovy': 53.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 1.7000000476837158, 'EndFNumber': 16.0, 'EndBluarLevel': 1.5, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron_007_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Adult:Talk_00', 'MaintainPerformanceState': 0})

    call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingL', 'Player_IsWaitEnd': True, 'Npc_ActorName': ActorIdentifier(name="Npc_Goron_007_Adult")})

    Npc_Goron_007_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Adult:Talk_05', 'MaintainPerformanceState': 0})
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        Npc_Goron_007_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_007_Adult:Talk_07', 'MaintainPerformanceState': 0})
    }
}

void C02_04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [49.720001220703125, 148.10000610351562, -37.25], 'AtVector': [48.88999938964844, 148.24000549316406, -40.849998474121094], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 1000, 'PosVector': [49.83000183105469, 148.10000610351562, -36.95000076293945], 'AtVector': [49.0, 148.24000549316406, -40.54999923706055], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Goron_007_Adult.EventTriggerRequestLookAtTheFront()
        Npc_Goron_007_Adult.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0000', 'IsAnimeDriven': True, 'ASName': '02_0017', 'EndDialogOption': 1, 'IsWaitEnd': False, 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Appear', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'GameDataName': 'NumberOfCoughtGoron', 'Index': -1})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call NumberOfLeftGoron()

    Player_Event.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [47.91999816894531, 147.0, -43.5]})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void C01_05() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_004_Adult_FireTemple_Delete'})

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 90.0, 'ClothWarpMode': 3, 'Position': [-19.600000381469727, 147.0, -30.200000762939453], 'EnableInAir': False})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
        Player_Event.EventTriggerPlayerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'PosOffset': [0.0, 0.0, 0.0], 'WorldPos': [-18.158000946044922, 148.44400024414062, -30.04599952697754]})

        fork {
            Npc_Goron_004_Adult.EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': -90.0, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'PositionOffset': [2.0, 0.0, -0.30000001192092896], 'InstanceName': '', 'OffsetBase': 0, 'ClothWarpMode': -1})
            Npc_Goron_004_Adult.EventTriggerLookAtObject({'ActorName': 'Player_Event', 'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_Goron_004_Adult.EventPlayASWithClothWarp({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ClothWarpMode': 2})
        } {
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'InstanceName': '', 'YAngle': -120.0, 'OffsetBase': 1, 'IsNearOffset': False, 'IsDisguisedPlayerPos': False, 'Target': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Type': 1})
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_004_Adult'})
        }

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [-20.15999984741211, 148.22000122070312, -28.950000762939453], 'AtVector': [-19.049999237060547, 148.1300048828125, -30.139999389648438], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 1.7000000476837158, 'EndFNumber': 16.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndBluarLevel': 1.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron_004_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_004_Adult:Talk_00', 'MaintainPerformanceState': 0})
    Npc_Goron_004_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_004_Adult:Talk_06', 'MaintainPerformanceState': 0})
}

void C02_05() {

    fork {
        EventSystemActor[Player_EventWait_05].EventWait({'IsWaitEnd': True, 'Frames': 185})

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Goron_004_Adult'})
        } {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_004_Adult'})
        }

    } {
        Npc_Goron_004_Adult.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 1, 'IsAnimeDriven': True, 'IsWaitEnd': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0001', 'ASName': 'C02_0018', 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 45.0, 'EnableCameraAlpha': True, 'PosVector': [-22.299999237060547, 147.86000061035156, -27.31999969482422], 'AtVector': [-17.84000015258789, 147.97999572753906, -31.350000381469727], 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 1000, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 45.0, 'EnableCameraAlpha': True, 'PosVector': [-22.59000015258789, 147.86000061035156, -27.06999969482422], 'AtVector': [-17.84000015258789, 147.97999572753906, -31.350000381469727], 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Appear', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
        Npc_Goron_004_Adult.EventTriggerEmitXLink({'ELinkKey': 'Dm_FireTemple_0020_Rolling_00', 'SLinkKey': ''})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 170})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'GameDataName': 'NumberOfCoughtGoron', 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumberOfCoughtGoron', 'Index': 8, 'Value': 3}) {
      case [0, 1]:
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Event182:

        call NumberOfLeftGoron()

        Player_Event.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-16.600000381469727, 147.0, -31.25]})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
      case 2:
        goto Event182
    }
}

void C01_06() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_002_Adult_FireTemple_Delete'})
    EventSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})

    fork {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 30.0, 'UseDemoWait': True, 'ClothWarpMode': 2, 'ASCommand': 'EvtTalk', 'Position': [77.2699966430664, 141.1300048828125, -0.9399999976158142], 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 2})
        Npc_Goron_002_Adult.EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': -130.0, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'PositionOffset': [1.3600000143051147, 0.0, 1.2999999523162842], 'InstanceName': '', 'OffsetBase': 0, 'ClothWarpMode': -1})

        fork {
            Npc_Goron_002_Adult.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False, 'PosOffset': [0.0, 0.10000000149011612, 0.0]})
            Npc_Goron_002_Adult.EventPlayASWithClothWarp({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1})
        } {
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
            Player_Event.EventTriggerPlayerLookAtObject({'InstanceName': '', 'Direction': 0.0, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'WorldPos': [78.59110260009766, 142.75, 0.14000000059604645], 'PosOffset': [0.30000001192092896, 0.0, 0.0]})
        } {
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'InstanceName': '', 'YAngle': -120.0, 'OffsetBase': 1, 'IsNearOffset': False, 'IsDisguisedPlayerPos': False, 'Target': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Type': 2})
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_002_Adult'})
        }

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'TargetFovy': 46.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [77.54000091552734, 142.49000549316406, -2.1600000858306885], 'AtVector': [77.75, 142.30999755859375, -0.4300000071525574], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 1.899999976158142, 'EndFNumber': 16.0, 'EndBluarLevel': 1.5, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_002_Adult:Talk_09', 'MaintainPerformanceState': 0})

    call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingL', 'Player_IsWaitEnd': True, 'Npc_ActorName': ActorIdentifier(name="Npc_Goron_002_Adult")})

    Npc_Goron_002_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_002_Adult:Talk_00', 'MaintainPerformanceState': 0})
}

void C02_06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [82.2699966430664, 142.1300048828125, -1.100000023841858], 'AtVector': [81.38999938964844, 142.0800018310547, -0.7799999713897705], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 1000, 'IsWaitEnd': False, 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [82.45999908447266, 142.13999938964844, -1.1699999570846558], 'AtVector': [81.38999938964844, 142.0800018310547, -0.7799999713897705], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Goron_002_Adult.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0002', 'IsAnimeDriven': True, 'EndDialogOption': 1, 'ASName': 'C02_0019', 'IsWaitEnd': False, 'MaintainPerformanceState': 0})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_002_Adult', 'PosOffset': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 170})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Appear', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 300})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 3.0, 'EndDistance': 3.0, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': False, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 180})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Goron_002_Adult', 'TurnFaceControlType': 1, 'InstanceName': '', 'Direction': 0.0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [-2.0, 0.0, -10.0]})
    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}

void C01_07() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_008_Adult_FireTemple_Delete'})

    fork {
        Npc_Goron_008_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 137.068603515625, 'Position': [46.18000030517578, 150.5, 31.420000076293945], 'ClothWarpMode': -1})
        Npc_Goron_008_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Goron_008_Adult.EventPlayASWithClothWarp({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [47.400001525878906, 151.85000610351562, 28.25], 'AtVector': [46.439998626708984, 151.47000122070312, 33.900001525878906], 'TargetFovy': 43.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': -38.41691970825195, 'Position': [47.59000015258789, 150.5, 29.510000228881836], 'ASCommand': 'EvtTalk', 'ClothWarpMode': 2, 'EnableInAir': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 2})

        fork {
            Player_Event.EventPlayerTurnAndLook({'InstanceName': '', 'Direction': 0.0, 'IsWaitEnd': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'WorldPos': [46.18000030517578, 150.5, 31.420000076293945], 'SlowTurn': False, 'UseNormalTurn': False, 'KeepTalkWait': True, 'PosOffset': [0.0, 1.0, 0.0], 'IsDoNavi': False})
        } {
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'InstanceName': '', 'YAngle': -120.0, 'OffsetBase': 1, 'IsNearOffset': False, 'IsDisguisedPlayerPos': False, 'Target': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Type': 1})
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_008_Adult'})
        }

    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 2.200000047683716, 'EndFNumber': 16.0, 'EndBluarLevel': 1.5, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron_008_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_008_Adult:Talk_04', 'MaintainPerformanceState': 0})

    call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingL', 'Player_IsWaitEnd': True, 'Npc_ActorName': ActorIdentifier(name="Npc_Goron_008_Adult")})

    Npc_Goron_008_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_008_Adult:Talk_00', 'MaintainPerformanceState': 0})
}

void C02_07() {

    fork {
        EventSystemActor[Player_EventWait_07].EventWait({'IsWaitEnd': True, 'Frames': 180})

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Goron_008_Adult'})
        } {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_008_Adult'})
        }

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [47.38999938964844, 151.55999755859375, 25.389999389648438], 'AtVector': [46.900001525878906, 151.64999389648438, 29.5], 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 1000, 'PosVector': [47.45000076293945, 151.5500030517578, 24.8700008392334], 'AtVector': [46.900001525878906, 151.64999389648438, 29.5], 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Goron_008_Adult.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0000', 'EndDialogOption': 1, 'IsAnimeDriven': True, 'ASName': 'C02_0020', 'IsWaitEnd': False, 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Appear', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 280})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
        Npc_Goron_008_Adult.EventTriggerEmitXLink({'ELinkKey': 'Dm_FireTemple_0020_Rolling_00', 'SLinkKey': ''})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'GameDataName': 'NumberOfCoughtGoron', 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumberOfCoughtGoron', 'Index': 8, 'Value': 3}) {
      case [0, 1]:
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Event260:

        call NumberOfLeftGoron()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [45.58000183105469, 150.5, 33.0099983215332]})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
      case 2:
        goto Event260
    }
}

void C01_08() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_009_Adult_FireTemple_Delete'})
    Npc_Goron_009_Adult.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -58.31050109863281, 'Position': [-39.866798400878906, 145.1999969482422, -0.3499999940395355], 'ClothWarpMode': -1})

    fork {
        Npc_Goron_009_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Goron_009_Adult.EventPlayASWithClothWarp({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-42.72999954223633, 146.52000427246094, 0.28999999165534973], 'AtVector': [-41.31999969482422, 146.4499969482422, 0.4000000059604645], 'TargetFovy': 44.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 2.0], 'YAngle': 180.0, 'TargetActorKind': 1, 'ActorName': 'Npc_Goron_009_Adult', 'InstanceName': ''})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 3})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'InstanceName': '', 'YAngle': -120.0, 'OffsetBase': 1, 'IsNearOffset': False, 'IsDisguisedPlayerPos': False, 'Target': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Type': 2})

        fork {
            Player_Event.EventPlayerTurnAndLook({'InstanceName': '', 'Direction': 0.0, 'IsWaitEnd': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'UpperASCommand': 'EvtWait', 'SlowTurn': False, 'KeepTalkWait': False, 'UseNormalTurn': True, 'WorldPos': [-39.869998931884766, 145.22000122070312, -0.3499999940395355], 'PosOffset': [0.0, 1.0, 0.0], 'IsDoNavi': False})
        } {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_009_Adult'})
        }

    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndDistance': 2.0, 'EndFNumber': 16.0, 'EndBluarLevel': 1.5, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron_009_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_009_Adult:Talk_04', 'MaintainPerformanceState': 0})
    Npc_Goron_009_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_009_Adult:Talk_00', 'MaintainPerformanceState': 0})
}

void C02_08() {

    fork {
        EventSystemActor[Player_EventWait_08].EventWait({'IsWaitEnd': True, 'Frames': 150})

        fork {
            Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_Goron_009_Adult', 'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, -5.0]})
        } {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_009_Adult'})
        }

    } {
        Npc_Goron_009_Adult.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0002', 'IsAnimeDriven': True, 'EndDialogOption': 2, 'ASName': 'C02_0021', 'IsWaitEnd': False, 'MaintainPerformanceState': 0})
        EventSystemActor[Goron_EvtWait_08].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Goron_009_Adult.EventPlayAS({'IsAnimeDriven': True, 'ASName': 'C02_0021', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVector': [-44.040000915527344, 146.2899932861328, 0.6100000143051147], 'AtVector': [-42.81999969482422, 146.3300018310547, 0.3799999952316284], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 1000, 'TargetFovy': 50.0, 'PosVector': [-44.31999969482422, 146.2899932861328, 0.6800000071525574], 'AtVector': [-43.099998474121094, 146.3300018310547, 0.46000000834465027], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 145})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Appear', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 280})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'GameDataName': 'NumberOfCoughtGoron', 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call NumberOfLeftGoron()

    Player_Event.EventTriggerPlayerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'WorldPos': [-37.0, 145.1999969482422, -0.8500000238418579]})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void C01_09() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_010_Adult_FireTemple_Delete'})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_Goron_010_Adult', 'IsWaitEnd': True, 'InstanceName': '', 'IsActorCreateRequest': True})

    fork {
        Npc_Goron_010_Adult.EventWarpToTargetPosAndRot({'YAngle': -145.19200134277344, 'IsWaitEnd': True, 'Position': [-7.03000020980835, 100.0, -6.5], 'ClothWarpMode': -1})
        Npc_Goron_010_Adult.EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player_Event', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Goron_010_Adult.EventPlayASWithClothWarp({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-9.930000305175781, 101.27999877929688, -8.729999542236328], 'AtVector': [-7.070000171661377, 101.08000183105469, -7.730000019073486], 'TargetFovy': 45.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerTurnAndLookNow({'TurnFaceControlType': 1, 'InstanceName': '', 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Goron_010_Adult', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'OffsetBase': 0, 'IsDoNavi': False})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 35.65523147583008, 'Position': [-8.399999618530273, 100.0, -8.722236633300781], 'ASCommand': 'EvtTalk', 'ClothWarpMode': 3, 'EnableInAir': False})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 2})
        } {
            Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 1, 'YAngle': 0.0, 'PositionOffset': [-0.5, 1.5, 0.0], 'ClothWarpMode': -1})
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_010_Adult'})
        }

    } {
        PostProcessingActor.EventSetDoFForFlowchart({'EndFNumber': 16.0, 'EndBluarLevel': 1.5, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 2.5})
    }

    EventSystemActor[Player_EventWait_09].EventWait({'IsWaitEnd': True, 'Frames': 30})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron_010_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Adult:Talk_04', 'MaintainPerformanceState': 0})

    call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_AS': 'EvtTalkingL', 'Player_IsWaitEnd': True, 'Npc_ActorName': ActorIdentifier(name="Npc_Goron_010_Adult")})

    Npc_Goron_010_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_010_Adult:Talk_08', 'MaintainPerformanceState': 0})
}

void C02_09() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-7.039999961853027, 101.23999786376953, -1.340000033378601], 'AtVector': [-7.059999942779541, 101.19000244140625, -5.75], 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 1000, 'IsWaitEnd': False, 'PosVector': [-7.039999961853027, 101.25, -0.8600000143051147], 'AtVector': [-7.059999942779541, 101.19000244140625, -5.75], 'TargetFovy': 40.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Npc_Goron_010_Adult.EventTalk({'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 1, 'ASName': 'C02_0022', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0001', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsWaitEnd': True, 'IsEnableNear': True, 'StartDistance': 3.5, 'EndDistance': 3.5, 'StartFNumber': 16.0, 'EndFNumber': 16.0, 'StartBluarLevel': 1.5, 'EndBluarLevel': 1.5, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Goron_010_Adult', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
        EventSystemActor[Player_EventWait_09].EventWait({'IsWaitEnd': True, 'Frames': 240})
        Player_Event.EventPlayerTurnAndLook({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'OffsetBase': 0, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'SlowTurn': True, 'IgnoreTargetPosMove': False, 'WorldPos': [-5.0, 100.0, 1.4199999570846558], 'UpperASCommand': '', 'KeepTalkWait': True, 'UseNormalTurn': False, 'IsDoNavi': True})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Npc_Goron_010_Adult'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Appear', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 280})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}

void C03_09() {

    fork {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-9.399999618530273, 101.2699966430664, -7.510000228881836], 'AtVector': [-6.760000228881836, 101.30999755859375, -9.180000305175781], 'TargetFovy': 50.099998474121094, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'GameDataName': 'NumberOfCoughtGoron', 'Index': -1})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {

        call NumberOfLeftGoron()

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'WorldPos': [-5.059999942779541, 100.9000015258789, -8.699999809265137], 'KeepTalkWait': False, 'IgnoreTargetPosMove': False, 'SlowTurn': True, 'UseNormalTurn': True, 'IsDoNavi': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsOffCenterCamera': True, 'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'PassThrough': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'LookAtTarget': 2, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'IsUseAfterPlayerTurn': True, 'IsLookAtObject': False, 'MoveSpeed': 1.0})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})

    call SageOfFire.SageOfFire_MeetBoss()

}

void EntryPoint2() {

    fork {

        call C01_03()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0})
    }


    fork {

        call C02_03()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02'})
    }

}

void EntryPoint3() {

    fork {

        call C01_04()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0})
    }


    fork {

        call C02_04()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02'})
    }

}

void EntryPoint4() {

    fork {

        call C01_05()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0})
    }


    fork {

        call C02_05()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02'})
    }

}

void EntryPoint5() {

    fork {

        call C01_06()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0})
    }


    fork {

        call C02_06()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02'})
    }


    fork {

        call C03_06()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C03'})
    }

}

void EntryPoint6() {

    fork {

        call C01_07()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0})
    }


    fork {

        call C02_07()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02'})
    }

}

void EntryPoint7() {

    fork {

        call C01_08()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0})
    }


    fork {

        call C02_08()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02'})
    }

}

void EntryPoint8() {

    fork {

        call C01_09()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0})
    }


    fork {

        call C02_09()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02'})
    }


    fork {

        call C03_09()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C03'})
    }

}

void EntryPoint0() {

    fork {

        call C01_01()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0})
    }


    fork {

        call C02_01()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02'})
    }


    fork {

        call C03_01()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C03', 'Text2': ''})
    }


    fork {

        call C04_01()

    } {
        DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 1, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C04'})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 3.0, 'CameraResetPolicy': 0})
}

void C03_06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [79.26000213623047, 141.88999938964844, 0.5699999928474426], 'AtVector': [77.33999633789062, 142.07000732421875, -0.5299999713897705], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': -1, 'GameDataName': 'NumberOfCoughtGoron', 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumberOfCoughtGoron', 'Index': 8, 'Value': 3}) {
      case [0, 1]:

        fork {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }

        Event221:

        call NumberOfLeftGoron()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [72.91000366210938, 141.0, 0.1899999976158142], 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
      case 2:
        goto Event221
    }
}

void NumberOfLeftGoron() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumberOfCoughtGoron', 'Index': 8, 'Value': 8}) {
      case [0, 2]:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumberOfCoughtGoron', 'Index': 8, 'Value': 7}) {
          case [0, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumberOfCoughtGoron', 'Index': 8, 'Value': 6}) {
              case [0, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumberOfCoughtGoron', 'Index': 8, 'Value': 5}) {
                  case [0, 2]:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumberOfCoughtGoron', 'Index': 8, 'Value': 4}) {
                      case [0, 2]:
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumberOfCoughtGoron', 'Index': 8, 'Value': 3}) {
                          case [0, 2]:
                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumberOfCoughtGoron', 'Index': 8, 'Value': 2}) {
                              case [0, 2]:
                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumberOfCoughtGoron', 'Index': 8, 'Value': 1}) {
                                  case [0, 2]:
                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumberOfCoughtGoron', 'Index': 8, 'Value': 0}) {
                                      case [0, 2]:
                                        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': 'ゴロン族残り救出人数の分岐で想定していないフローに流れました'})
                                      case 1:
                                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0004', 'MaintainPerformanceState': 0})
                                    }
                                  case 1:
                                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0014', 'MaintainPerformanceState': 0})
                                }
                              case 1:
                                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0013', 'MaintainPerformanceState': 0})
                            }
                          case 1:
                            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0012', 'MaintainPerformanceState': 0})
                        }
                      case 1:
                        Npc_Navi.EventNaviRequestBallonMessage({'Index': 175})
                    }
                  case 1:
                    Npc_Navi.EventNaviRequestBallonMessage({'Index': 174})
                }
              case 1:
                Npc_Navi.EventNaviRequestBallonMessage({'Index': 173})
            }
          case 1:
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 172})
        }
      case 1:
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FireTemple_0020:Dm_FireTemple_0020_0007', 'MaintainPerformanceState': 0})
    }
}
