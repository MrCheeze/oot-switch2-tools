-------- EventFlow: InsideGanonCastle_CommonGimmick --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventBasedOnLookAtCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForBasedOnLookAt', 'EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void CounterAppear_Room03() {
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': False, 'ActorName': 'DestinationAnchor', 'Target': 0, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'IgnoreTargetPosMove': True, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 15.0, 'ASCommand': 'EvtSurprise', 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor1InstanceName': '', 'FovySetType': 1, 'TargetFovy': 0.0, 'IsWaitEnd': False, 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'PosVectorSetType': 3, 'PosVector': [0.0, 2.0, -3.0], 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})

    call FocusOnGimmick.NewBasicFocus_NoBool_CustomCamSpeed({'CloseDistance': 5.0, 'OriginActor_IfClose': 'Player_Event', 'AnchorName_01': '', 'CameraPosOffset_IfClose': [0.0, 0.0, 0.0], 'FocusOffset_IfClose': [0.0, 1.0, 0.0], 'IgnoreOriginRotation': False, 'CamSpeed': 80, 'CameraPosOffset': [0.0, 0.0, 0.0], 'CameraDistanceFromAnchor': 2.0})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
}

void CounterUnlock_Room03() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventPlayerWait({'IsWaitEnd': True})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'room03_judgePos01', 'CheckDistance': 1.899999976158142, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } else {

        call Silver_Tolken_Finish_Copied({'DoorName': 'room03_lookPos01'})

    }

    call Defeat_Ganon.GimmickShutter_Changed({'CamPosName': 'room03_camPos01', 'AtPosName': 'room03_atPos01', 'LookPosName': 'room03_lookPos01'})

}

void CounterAppear_Room10() {
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': False, 'ActorName': 'DestinationAnchor', 'Target': 0, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'IgnoreTargetPosMove': True, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 15.0, 'ASCommand': 'EvtSurprise', 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor1InstanceName': '', 'FovySetType': 1, 'TargetFovy': 0.0, 'IsWaitEnd': False, 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'PosVectorSetType': 3, 'PosVector': [0.0, 2.0, -3.0], 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})

    call FocusOnGimmick.NewBasicFocus_NoBool_CustomCamSpeed({'CloseDistance': 5.0, 'OriginActor_IfClose': 'Player_Event', 'AnchorName_01': '', 'CameraPosOffset_IfClose': [0.0, 0.0, 0.0], 'FocusOffset_IfClose': [0.0, 1.0, 0.0], 'IgnoreOriginRotation': False, 'CamSpeed': 80, 'CameraPosOffset': [0.0, 0.0, 0.0], 'CameraDistanceFromAnchor': 2.0})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
}

void CounterUnlock_Room10() {

    call CounterUnlock_Room10_Changed()

}

void CounterAppear_Room14() {
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': False, 'ActorName': 'DestinationAnchor', 'Target': 0, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'IgnoreTargetPosMove': True, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 15.0, 'ASCommand': 'EvtSurprise', 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor1InstanceName': '', 'FovySetType': 1, 'TargetFovy': 0.0, 'IsWaitEnd': False, 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'PosVectorSetType': 3, 'PosVector': [0.0, 2.0, -3.0], 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})

    call FocusOnGimmick.NewBasicFocus_NoBool_CustomCamSpeed({'CloseDistance': 5.0, 'OriginActor_IfClose': 'Player_Event', 'AnchorName_01': '', 'CameraPosOffset_IfClose': [0.0, 0.0, 0.0], 'FocusOffset_IfClose': [0.0, 1.0, 0.0], 'IgnoreOriginRotation': False, 'CamSpeed': 80, 'CameraPosOffset': [0.0, 0.0, 0.0], 'CameraDistanceFromAnchor': 2.0})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
}

void CounterUnlock_Room14() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Silver_Tolken_Finish_Copied({'DoorName': 'room14_lookPos01'})


    call Defeat_Ganon.GimmickShutter_Changed({'CamPosName': 'room14_camPos01', 'AtPosName': 'room14_atPos01', 'LookPosName': 'room14_lookPos01'})

}

void CounterAppear_Room16() {
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': False, 'ActorName': 'DestinationAnchor', 'Target': 0, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'IgnoreTargetPosMove': True, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 15.0, 'ASCommand': 'EvtSurprise', 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor1InstanceName': '', 'FovySetType': 1, 'TargetFovy': 0.0, 'IsWaitEnd': False, 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'PosVectorSetType': 3, 'PosVector': [0.0, 2.0, -3.0], 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})

    call FocusOnGimmick.NewBasicFocus_NoBool_CustomCamSpeed({'CloseDistance': 5.0, 'OriginActor_IfClose': 'Player_Event', 'AnchorName_01': '', 'CameraPosOffset_IfClose': [0.0, 0.0, 0.0], 'FocusOffset_IfClose': [0.0, 1.0, 0.0], 'IgnoreOriginRotation': False, 'CamSpeed': 80, 'CameraPosOffset': [0.0, 0.0, 0.0], 'CameraDistanceFromAnchor': 2.0})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
}

void CounterUnlock_Room16() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Silver_Tolken_Finish_Copied({'DoorName': 'room16_lookPos01'})

    if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'DestinationAnchor', 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'ToleranceDistance': 2.0, 'TargetActorInstanceName': 'room16_atPos01', 'IdealDistance': 7.5, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'ToleranceXZAngle': 15.0}) {
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'CameraCollisionMode': 0, 'MoveTime': 1, 'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 8.0], 'LookAtVectorY': 1, 'ToleranceDistance': 2.0, 'TargetActorInstanceName': 'room16_atPos01', 'IdealDistance': 7.5, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'ToleranceXZAngle': 15.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event119:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'KeepTalkWait': False, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'Target': 5, 'UseNormalTurn': False, 'InstanceName': 'room16_lookPos01', 'IsDoNavi': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    } else {
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 8.0], 'LookAtVectorY': 1, 'ToleranceDistance': 2.0, 'IdealDistance': 7.5, 'MoveTime': 60, 'TargetActorInstanceName': 'room16_atPos01', 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'ToleranceXZAngle': 15.0})
        goto Event119
    }
}

void Silver_Tolken_Finish_Copied() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': 'DoorName', 'IsDoNavi': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void CounterUnlock_Room10_Changed() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Silver_Tolken_Finish_Copied({'DoorName': 'room10_lookPos01'})

    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room10_camPos01'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'Actor1InstanceName': 'room10_camPos01', 'Actor2InstanceName': 'room10_atPos01', 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event152:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'KeepTalkWait': False, 'InstanceName': 'room10_lookPos01', 'IsDoNavi': True})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'Actor1InstanceName': 'room10_camPos01', 'Actor2InstanceName': 'room10_atPos01', 'MoveTime': 120, 'IsEnableRevertFast': False})
        goto Event152
    }
}

void InsideGanonCastle_LookBarrierFromDoor_Forest() {

    call Common_Dungeon_OpenShutterMove.MoveToPlusZ({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos'})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_SeeBarrierGuide'}) {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0005'})
    }
}

void InsideGanonCastle_LookBarrierFromDoor_Water() {

    call Common_Dungeon_OpenShutterMove.MoveToPlusZ({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos'})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_SeeBarrierGuide'}) {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0200'})
    }
}

void InsideGanonCastle_LookBarrierFromDoor_Fire() {

    call Common_Dungeon_OpenShutterMove.MoveToPlusZ({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos'})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_SeeBarrierGuide'}) {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0203'})
    }
}

void InsideGanonCastle_LookBarrierFromDoor_Shadow() {

    call Common_Dungeon_OpenShutterMove.MoveToPlusZ({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos'})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_SeeBarrierGuide'}) {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0201'})
    }
}

void InsideGanonCastle_LookBarrierFromDoor_Spirit() {

    call Common_Dungeon_OpenShutterMove.MoveToPlusZ({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos'})

    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideGanonCastle_Dungeon_SeeBarrierGuide'}) {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_InsideGanonCastle_0202'})
    }
}
