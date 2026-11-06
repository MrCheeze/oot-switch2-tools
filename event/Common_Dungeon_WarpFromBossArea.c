-------- EventFlow: Common_Dungeon_WarpFromBossArea --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerSeparatedFromAnchor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void DungeonWarp_Choices() {

    call InitTalk.InitTalk_NaviPlayerFront({'IsLookAtPlayer': True, 'IsLookAtNavi': True})


    fork {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DungeonWarp_Canceled', 'Index': -1}) {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceNumber': 2, 'ASName': '', 'MessageId': 'DungeonWarp_01', 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2', 'MaintainPerformanceState': 0})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'DungeonWarp_Canceled', 'Index': -1, 'Value': True})
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ChoiceNumber': 2, 'ChoiceLabel1': 9998, 'ChoiceLabel2': 9999, 'ASName': '', 'MessageId': 'DungeonWarp_00', 'MaintainPerformanceState': 0})
        }
    }

    if !GameSystemActor.EventQueryTalkChoice2() {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        return 3013883440
    } else {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Fly', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'DungeonWarp_03', 'MaintainPerformanceState': 0})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

        fork {
            Player_Event.EventPlayerSeparatedFromAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'center', 'DecSpeedDistance': 3.0, 'MoveSpeed': 0.5, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'SeparatedDIstance': 2.5, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        } {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'Player_Event', 'TargetActorInstanceName': '', 'IdealDistance': 7.5, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceDistance': 4.0, 'ToleranceYUpwardAngle': 50.0, 'LookAtVectorXZ': 0, 'MoveTime': 72, 'TargetOffset': [0.0, 1.2000000476837158, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.2000000476837158, 0.0], 'ToleranceYDownwardAngle': -15.0})
        } {

            call NaviEventCommon.Navi_followPlayer()

        }

        return 1642511898
    }
}

void DungeonWarp_Choices_Basic() {
    switchcall DungeonWarp_Choices({'ChoiceLabel1': 9996, 'ChoiceLabel2': 9997, 'DungeonWarp_00': 'DungeonWarp_00', 'DungeonWarp_01': 'DungeonWarp_01', 'DungeonWarp_03': 'DungeonWarp_03'}) {
      case 3013883440:
        return 3013883440
      case 1642511898:
        return 1642511898
    }
}

void DungeonWarp_Choices_Sequence() {
    switchcall DungeonWarp_Choices({'ChoiceLabel1': 9996, 'ChoiceLabel2': 9997, 'DungeonWarp_00': 'DungeonWarp_00', 'DungeonWarp_01': 'DungeonWarp_01', 'DungeonWarp_03': 'DungeonWarp_03'}) {
      case 3013883440:
        return 3013883440
      case 1642511898:
        return 1642511898
    }
}

void DungeonWarp_Choices_SpiritTemple() {
    switchcall DungeonWarp_Choices({'ChoiceLabel1': 9998, 'ChoiceLabel2': 9999, 'DungeonWarp_00': 'DungeonWarp_00', 'DungeonWarp_01': 'DungeonWarp_01', 'DungeonWarp_03': 'DungeonWarp_03'}) {
      case 3013883440:
        return 3013883440
      case 1642511898:
        return 1642511898
    }
}
