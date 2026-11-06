-------- EventFlow: SignboardWood --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTalk', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventPlayerBackMoveForTalk']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkSignMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventBasedOnLookAtCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget', 'EventQueryCameraCheckRayCastForBasedOnLookAt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SignBoard_EventStarter
entrypoint: None()
actions: ['EventTalkWithInstanceNameLabel', 'EventTriggerBecomeSpeaker', 'EventTalk']
queries: ['EventQueryIsActorInFront']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBecomeSpeaker', 'EventNaviLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitTalkCameraInterpolationEnd']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    call Demo_LookSignboard()


    call Talk_NoLook()

}

void Demo_LookSignboard() {
    SignBoard_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        EventCamera.EventSendEventTalkSignMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    } {

        call NaviEventCommon.NaviMove_Attention({'IsUseDisguiseSpeakerPos': False, 'TargetActorName': 'SignBoard_EventStarter', 'TargetInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0]})

    }

}

void Talk_ReadableOnlyFront() {
    if !SignBoard_EventStarter.EventQueryIsActorInFront({'ActorName': 'Player_Event', 'Angle': 90.0, 'InstanceName': ''}) {

        call Demo_LookSignboard()


        call Talk_NoLookReadableOnlyFront()

    } else {

        call ReadBackSide()

    }
}

void ReadBackSide() {

    fork {
        Player_Event.EventPlayerTurnAndLook({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'TurnFaceControlType': 3, 'Direction': 5.0, 'SlowTurn': True, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    } {
        Npc_Navi.EventTriggerBecomeSpeaker()

        call NaviEventCommon.NaviMove_Attention({'TargetActorName': 'SignBoard_EventStarter', 'TargetInstanceName': '', 'IsUseDisguiseSpeakerPos': True, 'TargetOffset': [0.0, 0.6700000166893005, 0.0]})

        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    }

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'MessageId': 'EventFlowMsg/SignboardWood:Common_001', 'ASName': 'EvtWait', 'MaintainPerformanceState': 0})
}

void Talk_NoLook() {
    SignBoard_EventStarter.EventTriggerBecomeSpeaker()
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'MstxtName': 'SignboardWood', 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
}

void Talk_NoLookReadableOnlyFront() {
    SignBoard_EventStarter.EventTriggerBecomeSpeaker()
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    if !SignBoard_EventStarter.EventQueryIsActorInFront({'ActorName': 'Player_Event', 'Angle': 90.0, 'InstanceName': ''}) {
        SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'MstxtName': 'SignboardWood', 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
    } else {

        call ReadBackSide()

    }
}

void Demo_Look_Kokiri_MessageBoard_A_01() {
    SignBoard_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVectorSetType': 2, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'AtVector': [0.0, 0.0, 0.25], 'TargetFovy': 50.0, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'PosVector': [0.0, 1.75, -2.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVectorSetType': 2, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'AtVector': [0.0, 0.0, 0.25], 'TargetFovy': 50.0, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'PosVector': [0.0, 2.5, -2.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    }

}

void Talk_Kokiri_MessageBoard_A_01() {
    if !SignBoard_EventStarter.EventQueryIsActorInFront({'ActorName': 'Player_Event', 'Angle': 90.0, 'InstanceName': ''}) {

        call Demo_Look_Kokiri_MessageBoard_A_01()


        call Talk_NoLook()

    } else {

        call ReadBackSide_Kokiri_MessageBoard_A_01()

    }
}

void ReadBackSide_Kokiri_MessageBoard_A_01() {

    fork {
        Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    } {
        Npc_Navi.EventTriggerBecomeSpeaker()

        call NaviEventCommon.NaviMove_Attention({'TargetActorName': 'SignBoard_EventStarter', 'TargetInstanceName': '', 'IsUseDisguiseSpeakerPos': True, 'TargetOffset': [0.0, 0.4000000059604645, 0.0]})

        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVectorSetType': 2, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'AtVector': [0.0, 0.0, 0.10000000149011612], 'TargetFovy': 50.0, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'PosVector': [0.0, 1.75, -2.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVectorSetType': 2, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'AtVector': [0.0, 0.0, 0.25], 'TargetFovy': 50.0, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'PosVector': [0.0, 2.5, -2.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    }

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'MessageId': 'EventFlowMsg/SignboardWood:Common_001', 'ASName': 'EvtWait', 'MaintainPerformanceState': 0})
}

void AccessFloorSignboard() {
    EventCamera.EventTriggerCameraSavePoint()
    SignBoard_EventStarter.EventTriggerBecomeSpeaker()
    if !Player_Event.EventQueryPlayerIsChild() {

        call ChildFloorSignCamera({'FF_Offset': 'FF_Offset', 'FB_Offset': 'FB_Offset', 'BF_Offset': 'BF_Offset', 'BB_Offset': 'BB_Offset'})

    } else {

        call AdultFloorSignCamera({'FF_Offset': 'FF_Offset', 'FB_Offset': 'FB_Offset', 'BF_Offset': 'BF_Offset', 'BB_Offset': 'BB_Offset'})

    }
    SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'MstxtName': 'SignboardWood', 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
}

void Talk_MessageBoard_A_01_RonRon() {
    if !SignBoard_EventStarter.EventQueryIsActorInFront({'ActorName': 'Player_Event', 'Angle': 90.0, 'InstanceName': ''}) {

        call Demo_Look_Kokiri_MessageBoard_A_01()


        call Talk_NoLook()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Talk_MessageBoard_RonRon_Ingo'})
    } else {

        call ReadBackSide_Kokiri_MessageBoard_A_01()

    }
}

void ChildFloorSignCamera() {

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': 0.0})
    } {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'SignBoard_EventStarter', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': 'FF_Offset'}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player_Event', 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'SignBoard_EventStarter', 'Actor2InstanceName': '', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTimeLater': -1, 'DelayLater': -1, 'MoveToTargetPosCalcMode': 0, 'IsLinearMove': False, 'EnableCameraAlpha': True, 'PosVectorSetType': 4, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'MoveTime': 1, 'PosVector': 'FF_Offset', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
        } else
        if !SignBoard_EventStarter.EventQueryIsActorInFront({'InstanceName': '', 'ActorName': 'EventCamera', 'Angle': 45.0}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player_Event', 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'SignBoard_EventStarter', 'Actor2InstanceName': '', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTimeLater': -1, 'DelayLater': -1, 'MoveToTargetPosCalcMode': 0, 'IsLinearMove': False, 'EnableCameraAlpha': True, 'PosVectorSetType': 4, 'MoveTotargetPosType': 0, 'MoveTime': 45, 'PosVector': 'FF_Offset', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
        } else
        if !SignBoard_EventStarter.EventQueryIsActorInFront({'InstanceName': '', 'ActorName': 'EventCamera', 'Angle': 90.0}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player_Event', 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'SignBoard_EventStarter', 'Actor2InstanceName': '', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTimeLater': -1, 'DelayLater': -1, 'MoveToTargetPosCalcMode': 0, 'IsLinearMove': False, 'EnableCameraAlpha': True, 'PosVectorSetType': 4, 'MoveTotargetPosType': 0, 'MoveTime': 60, 'PosVector': 'FF_Offset', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player_Event', 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'SignBoard_EventStarter', 'Actor2InstanceName': '', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTimeLater': -1, 'DelayLater': -1, 'MoveToTargetPosCalcMode': 0, 'IsLinearMove': False, 'EnableCameraAlpha': True, 'PosVectorSetType': 4, 'MoveTotargetPosType': 0, 'MoveTime': 75, 'PosVector': 'FF_Offset', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
        }
    } {

        call NaviEventCommon.NaviMove_Attention({'IsUseDisguiseSpeakerPos': False, 'TargetActorName': 'SignBoard_EventStarter', 'TargetInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0]})

    }

}

void AdultFloorSignCamera() {

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': 0.0})
    } {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'SignBoard_EventStarter', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': 'FF_Offset'}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player_Event', 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'SignBoard_EventStarter', 'Actor2InstanceName': '', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTimeLater': -1, 'DelayLater': -1, 'MoveToTargetPosCalcMode': 0, 'IsLinearMove': False, 'EnableCameraAlpha': True, 'PosVectorSetType': 4, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'MoveTime': 1, 'PosVector': 'FF_Offset', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
        } else
        if !SignBoard_EventStarter.EventQueryIsActorInFront({'InstanceName': '', 'ActorName': 'EventCamera', 'Angle': 45.0}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player_Event', 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'SignBoard_EventStarter', 'Actor2InstanceName': '', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTimeLater': -1, 'DelayLater': -1, 'MoveToTargetPosCalcMode': 0, 'IsLinearMove': False, 'EnableCameraAlpha': True, 'PosVectorSetType': 4, 'MoveTotargetPosType': 0, 'MoveTime': 45, 'PosVector': 'FF_Offset', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
        } else
        if !SignBoard_EventStarter.EventQueryIsActorInFront({'InstanceName': '', 'ActorName': 'EventCamera', 'Angle': 90.0}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player_Event', 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'SignBoard_EventStarter', 'Actor2InstanceName': '', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTimeLater': -1, 'DelayLater': -1, 'MoveToTargetPosCalcMode': 0, 'IsLinearMove': False, 'EnableCameraAlpha': True, 'PosVectorSetType': 4, 'MoveTotargetPosType': 0, 'MoveTime': 60, 'PosVector': 'FF_Offset', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player_Event', 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'SignBoard_EventStarter', 'Actor2InstanceName': '', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTimeLater': -1, 'DelayLater': -1, 'MoveToTargetPosCalcMode': 0, 'IsLinearMove': False, 'EnableCameraAlpha': True, 'PosVectorSetType': 4, 'MoveTotargetPosType': 0, 'MoveTime': 75, 'PosVector': 'FF_Offset', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
        }
    } {

        call NaviEventCommon.NaviMove_Attention({'IsUseDisguiseSpeakerPos': False, 'TargetActorName': 'SignBoard_EventStarter', 'TargetInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0]})

    }

}

void CommonFloorSignCamera() {

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'SignBoard_EventStarter', 'TargetOffset': 'ofs', 'IdealDistance': 'dist', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 'tole_XZAngle', 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 'upwardAngle', 'ToleranceYDownwardAngle': 'upwardAngle', 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1}) {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsLinearMove': False, 'TargetActorName': 'SignBoard_EventStarter', 'TargetOffset': 'ofs', 'IdealDistance': 'dist', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 'tole_XZAngle', 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 'upwardAngle', 'ToleranceYDownwardAngle': 'upwardAngle', 'MoveTime': 0, 'CameraCollisionMode': 1, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0})
        } else
        if !SignBoard_EventStarter.EventQueryIsActorInFront({'InstanceName': '', 'ActorName': 'EventCamera', 'Angle': 90.0}) {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsLinearMove': False, 'TargetActorName': 'SignBoard_EventStarter', 'TargetOffset': 'ofs', 'IdealDistance': 'dist', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 'tole_XZAngle', 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 'upwardAngle', 'ToleranceYDownwardAngle': 'upwardAngle', 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'MoveTime': 45, 'CameraCollisionMode': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0})
        } else {
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsLinearMove': False, 'TargetActorName': 'SignBoard_EventStarter', 'TargetOffset': 'ofs', 'IdealDistance': 'dist', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 'tole_XZAngle', 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 'upwardAngle', 'ToleranceYDownwardAngle': 'upwardAngle', 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'CameraCollisionMode': 0, 'MoveTime': 75, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0})
        }
    }

    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void Talk_GoronCitySecretHole() {
    if !SignBoard_EventStarter.EventQueryIsActorInFront({'ActorName': 'Player_Event', 'Angle': 90.0, 'InstanceName': ''}) {

        call Demo_LookSignboard()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GoronCity_secretHole_RepairSignboard', 'Index': -1}) {
            SignBoard_EventStarter.EventTalk({'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/SignboardWood:SignboardHole__06', 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        } else {
            SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'MstxtName': 'SignboardWood', 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
        }
    } else {

        call ReadBackSide()

    }
}

void Talk_ZoraRiver_Obj_TriForcePoint_A_13() {

    call Demo_LookSignboard_ZoraRiver_Obj_TriForcePoint_A_13()


    call Talk_NoLook()

}

void Demo_LookSignboard_ZoraRiver_Obj_TriForcePoint_A_13() {
    SignBoard_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVector': [121.94999694824219, 131.27000427246094, -39.81999969482422], 'AtVector': [126.70999908447266, 130.05999755859375, -40.7599983215332], 'TargetFovy': 40.0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 30, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    } {

        call NaviEventCommon.NaviMove_Attention({'IsUseDisguiseSpeakerPos': False, 'TargetActorName': 'SignBoard_EventStarter', 'TargetInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0]})

    }

}
