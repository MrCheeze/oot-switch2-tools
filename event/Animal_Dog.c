-------- EventFlow: Animal_Dog --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerBecomeSpeaker', 'EventNPCTurnToObjectGreeting', 'EventStrayDogSetTakenAwayDisableAll', 'EventStrayDogSetTakenAwayEnable']
queries: ['EventQueryHasControllerSet']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_052_Child
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventTriggerBecomeSpeaker', 'EventTriggerSetModelLodManual']
queries: ['EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerTalk', 'EventPlayerConversate']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventBasedOnLookAtCamera', 'EventBustShotCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Correct() {
    switchcall StateCheck_Richard() {
      case 0x61aaf3f7:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_FindRichard_IsCompleted_Exp'}) {

            fork {
                Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
            } {
                Npc_EventStarter.EventTriggerBecomeSpeaker()
                if !Npc_EventStarter.EventQueryHasControllerSet() {
                    Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})
                }
            } {
                EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_EventStarter', 'TargetOffset': [0.0, 0.25, 0.0], 'ToleranceXZAngle': 360.0, 'ToleranceYDownwardAngle': 5.0, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceYUpwardAngle': 30.0, 'MoveTime': 45, 'IdealDistance': 2.0, 'ToleranceDistance': 1.0, 'IsWaitEnd': True})
            }

            Npc_EventStarter.EventPlayAS({'ASName': 'No', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 61})
        } else {

            call MadameAngry()

        }
      case 0x60aaf264:
        Npc_EventStarter.EventStrayDogSetTakenAwayDisableAll({'IsWaitEnd': True})

        fork {
            Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
        } {
            Npc_EventStarter.EventTriggerBecomeSpeaker()
            if !Npc_EventStarter.EventQueryHasControllerSet() {
                Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})
            }
        } {
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_EventStarter', 'TargetOffset': [0.0, 0.25, 0.0], 'ToleranceXZAngle': 360.0, 'ToleranceYDownwardAngle': 5.0, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceYUpwardAngle': 30.0, 'MoveTime': 45, 'IdealDistance': 2.0, 'ToleranceDistance': 1.0, 'IsWaitEnd': True})
        }

        Npc_EventStarter.EventPlayAS({'ASName': 'Yes', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    }
}

void Incorrect() {
    Npc_EventStarter.EventStrayDogSetTakenAwayDisableAll({'IsWaitEnd': True})

    fork {
        Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
    } {
        Npc_EventStarter.EventTriggerBecomeSpeaker()
        if !Npc_EventStarter.EventQueryHasControllerSet() {
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})
        }
    } {
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_EventStarter', 'TargetOffset': [0.0, 0.25, 0.0], 'ToleranceXZAngle': 360.0, 'ToleranceYDownwardAngle': 5.0, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceYUpwardAngle': 30.0, 'MoveTime': 45, 'IdealDistance': 2.0, 'ToleranceDistance': 1.0, 'IsWaitEnd': True})
    }

    Npc_EventStarter.EventPlayAS({'ASName': 'No', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 61})
    Npc_EventStarter.EventStrayDogSetTakenAwayEnable({'IsWaitEnd': True})
}

void MadameAngry() {
    Npc_Hylia_052_Child.EventTriggerSetModelLodManual({'LodLevel': 0})
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Npc_EventStarter.EventNPCTurnToObjectGreeting({'GreetType': 3, 'TurnType': 3, 'IsWaitEnd': True})
        Npc_EventStarter.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {

        call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Hylia_052_Child")})

    } {
        Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    }

    if !Npc_Hylia_052_Child.EventQueryAvoidDuplicationRandomChoice2() {

        call OnEventTalk({'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_201', 'MesageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_202'})

    } else {

        call OnEventTalk({'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_203', 'MesageId': 'EventFlowMsg/Npc_Hylia_052_Child:Talk_204'})

    }
}

void StateCheck_Richard() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_FindRichard_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Market_SubEvent_FindRichard_Retry'}) {
            Event9:
            return 0x60aaf264
        } else {
            Event8:
            return 0x61aaf3f7
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_FindRichard_IsAfter_NotReady_Exp'}) {
        goto Event9
    } else {
        goto Event8
    }
}

void OnEventTalk() {

    fork {
        Npc_Hylia_052_Child.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Hylia_052_Child.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MessageId': 'FirstGreeting_MesageId', 'MaintainPerformanceState': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Hylia_052_Child', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    }

    Npc_Hylia_052_Child.EventTriggerBecomeSpeaker()

    fork {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    } {

        call CheckDistance()

    } {
        Npc_Hylia_052_Child.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'IsConfront': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_Hylia_052_Child.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsNotBecomeSpeaker': True, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MessageId': 'MesageId', 'MaintainPerformanceState': 0})
}

void CheckDistance() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_Hylia_052_Child', 'CheckDistance': 2.5999999046325684}) {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
        Event13:
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_Hylia_052_Child', 'CheckDistance': 5.0}) {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        goto Event13
    } else {
        EventCamera.EventBustShotCamera({'TargetActorName': 'Npc_Hylia_052_Child', 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'Latitude': 0.0, 'Radius': 1.2000000476837158, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'Longitude': 0.0, 'TargetOffset': [0.0, -0.10000000149011612, 0.5]})
    }
}
