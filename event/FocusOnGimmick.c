-------- EventFlow: FocusOnGimmick --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWait', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerEventStartWithRolling', 'EventPlayerSlowWalkStop', 'EventTriggerPlayerEventStartWithClimb']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Basic() {

    call Basic_Focus({'Frames': 30})

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void Basic_NoSE() {

    call Basic_Focus({'Frames': 60})

}

void Basic_Focus() {

    call Common.AirStartUp()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'TargetActorName': 'DestinationAnchor', 'MoveTime': 30, 'IdealDistance': 5.0, 'ToleranceDistance': 0.0, 'TargetActorInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'Frames'})
}

void Twice_Focus() {

    call Common.AirStartUp()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'TargetActorName': 'DestinationAnchor', 'MoveTime': 30, 'IdealDistance': 5.0, 'ToleranceDistance': 0.0, 'TargetActorInstanceName': 'Point1'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': '1stFrames'})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'TargetActorName': 'DestinationAnchor', 'MoveTime': 30, 'IdealDistance': 5.0, 'ToleranceDistance': 0.0, 'TargetActorInstanceName': 'Point2'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': '2ndFrames'})
}

void Twice() {

    call Twice_Focus({'2ndFrames': 60, '1stFrames': 40})

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
}

void NoBool_Focus() {
    Player_Event.EventPlayerWait({'IsWaitEnd': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'TargetActorName': 'DestinationAnchor', 'MoveTime': 30, 'IdealDistance': 5.0, 'ToleranceDistance': 0.0, 'TargetActorInstanceName': 'TargetActorInstanceName'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void TokenFocus() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtLookAroundAttention', 'ForceFadeFrame': 15.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

    call NewBasicFocus({'CloseDistance': 5.0, 'CameraDistanceFromAnchor': 6.0, 'OriginActor_IfClose': 'Player_Event', 'AnchorName_01': '', 'FocusOffset_IfClose': [1.0, 0.0, 0.0], 'CameraPosOffset_IfClose': [0.0, 0.0, 0.0], 'CameraPosOffset': [0.0, 0.0, 0.0], 'WaitBeforeSE': 90})

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void NewBasicFocus() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    call NewBasicFocus_NoBool({'IgnoreOriginRotation': False, 'CloseDistance': 'CloseDistance', 'AnchorName_01': 'AnchorName_01', 'CameraDistanceFromAnchor': 'CameraDistanceFromAnchor', 'CameraPosOffset': 'CameraPosOffset', 'CameraPosOffset_IfClose': 'CameraPosOffset_IfClose', 'FocusOffset_IfClose': 'FocusOffset_IfClose', 'OriginActor_IfClose': 'OriginActor_IfClose'})

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'WaitBeforeSE'})
}

void SwitchActivation() {
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
}

void NewBasicFocus_FullyCustomizable() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'WaitBeforeCamera'})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'AnchorName_01'}) {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'LookAtDis': -1.0, 'Actor2InstanceName': 'AnchorName_01', 'PosVector': 'CameraOffSet_IfObstacle', 'AtVector': 'FocusOffSet_IfObstacle', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnorePosVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'AnchorName_01'}) {
            EventCamera.EventBasedOnLookAtCamera({'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'MoveTime': 1, 'IsWaitEnd': True, 'TargetActorInstanceName': 'AnchorName_01', 'TargetOffset': 'CameraPosOffset', 'IdealDistance': 'CameraDistanceFromAnchor'})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'LookAtDis': -1.0, 'AtVectorSetType': 1, 'AtVector': [0.0, 0.0, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 1, 'Actor1InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 30, 'IsIgnorePosVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
        Event71:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'Target': 5, 'InstanceName': 'AnchorName_01', 'UpperASCommand': '', 'SlowTurn': False, 'TurnFaceControlType': 1, 'UseNormalTurn': False, 'IsDoNavi': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'WaitBeforeSE'})
    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'AnchorName_01', 'CheckDistance': 'CloseDistance'}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'LookAtDis': 'CameraDistanceFromAnchor', 'Actor2InstanceName': 'AnchorName_01', 'PosVector': 'CameraPosOffset_IfClose', 'AtVector': 'FocusOffset_IfClose', 'Actor1ActorName': 'OriginActor_IfClose', 'IsIgnorePosVectorReferenceActorRot': 'IgnoreOriginRotation', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event71
    } else {
        EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'IdealDistance': 'CameraDistanceFromAnchor', 'TargetActorInstanceName': 'AnchorName_01', 'TargetOffset': 'CameraPosOffset'})
        goto Event71
    }
}

void NewBasicFocus_NoBool() {

    fork {
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'InstanceName': 'AnchorName_01', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    } {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'AnchorName_01'}) {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'PosVector': [0.0, 2.0, -4.0], 'LookAtDis': -4.0, 'AtVector': [0.0, -0.5, 0.0], 'Actor2InstanceName': 'AnchorName_01', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventCamera.EventBasedOnLookAtCamera({'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'MoveTime': 1, 'IsWaitEnd': True, 'TargetActorInstanceName': 'AnchorName_01', 'TargetOffset': 'CameraPosOffset', 'IdealDistance': 'CameraDistanceFromAnchor'})
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'AnchorName_01', 'CheckDistance': 'CloseDistance'}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'LookAtDis': 'CameraDistanceFromAnchor', 'Actor2InstanceName': 'AnchorName_01', 'PosVector': 'CameraPosOffset_IfClose', 'AtVector': 'FocusOffset_IfClose', 'Actor1ActorName': 'OriginActor_IfClose', 'LatShiftRange': 5.0, 'LongShiftRange': 5.0, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'IdealDistance': 'CameraDistanceFromAnchor', 'TargetActorInstanceName': 'AnchorName_01', 'TargetOffset': 'CameraPosOffset', 'ToleranceXZAngle': 5.0})
        }
    }

}

void ReturnToPlayer() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'MoveTime': 60, 'Actor2InstanceName': 'AnchorName', 'AtVector': 'FocusOffset', 'PosVector': 'CameraPosOffset', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void NewBasicFocus_NoBool_CustomCamSpeed() {

    fork {
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'InstanceName': 'AnchorName_01', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    } {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'AnchorName_01'}) {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'PosVector': [0.0, 2.0, -4.0], 'LookAtDis': -4.0, 'AtVector': [0.0, -0.5, 0.0], 'Actor2InstanceName': 'AnchorName_01', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventCamera.EventBasedOnLookAtCamera({'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'MoveTime': 1, 'IsWaitEnd': True, 'TargetActorInstanceName': 'AnchorName_01', 'TargetOffset': 'CameraPosOffset', 'IdealDistance': 'CameraDistanceFromAnchor'})
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'AnchorName_01', 'CheckDistance': 'CloseDistance'}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'IsIgnorePosVectorReferenceActorRot': False, 'LookAtDis': 'CameraDistanceFromAnchor', 'Actor2InstanceName': 'AnchorName_01', 'PosVector': 'CameraPosOffset_IfClose', 'AtVector': 'FocusOffset_IfClose', 'Actor1ActorName': 'OriginActor_IfClose', 'MoveTime': 'CamSpeed', 'CameraCollisionLookAtActor': 0, 'IsIgnoreAtVectorReferenceActorRot': 'IgnoreOriginRotation', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'IdealDistance': 'CameraDistanceFromAnchor', 'TargetActorInstanceName': 'AnchorName_01', 'TargetOffset': 'CameraPosOffset', 'MoveTime': 'CamSpeed'})
        }
    }

}

void RollingStartUp() {
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    if Player_Event.EventQueryCheckPlayerState({'State': 21}) {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': False})
    }
}

void HangingStartUp() {

    call Common.AirStartUp_OnlyStopInAir()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithClimb()
}
