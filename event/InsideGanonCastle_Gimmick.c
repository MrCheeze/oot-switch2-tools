-------- EventFlow: InsideGanonCastle_Gimmick --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void LockedMoveToPlusZ_FocusDinoflos() {

    call Common_Dungeon_OpenShutterMove.PreMoveCommon()


    call Common_Dungeon_OpenShutterMove.LockedMoveTo_EnemyFocus_GanonTower({'MoveAnchorInstanceName': 'OpenShutterMovePosPlusZ', 'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraTargetAnchorInstanceName': 'CameraAnchorName', 'PlayerReaction': 'EvtTurnAroundSmall'})

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 2.0, -2.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'Actor2InstanceName': 'C', 'AtVector': [0.0, 0.0, 0.0], 'StartAccelerateRate': 0.0, 'IsEnableRevertFast': False})
}

void LockedMoveToPlusZ_FocusStalfos() {

    call Common_Dungeon_OpenShutterMove.PreMoveCommon()


    call Common_Dungeon_OpenShutterMove.LockedMoveTo_EnemyFocus_GanonTower({'MoveAnchorInstanceName': 'OpenShutterMovePosPlusZ', 'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraTargetAnchorInstanceName': 'CameraAnchorName', 'PlayerReaction': 'EvtTurnAroundSmall'})

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 2.0, -2.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'Actor2InstanceName': 'C', 'AtVector': [0.0, 0.0, 0.0], 'StartAccelerateRate': 0.0, 'IsEnableRevertFast': False})
}

void LockedMoveToPlusZ_FocusIronKnuckle() {

    call Common_Dungeon_OpenShutterMove.PreMoveCommon()


    call Common_Dungeon_OpenShutterMove.LockedMoveTo_EnemyFocus_GanonTower({'MoveAnchorInstanceName': 'OpenShutterMovePosPlusZ', 'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraTargetAnchorInstanceName': 'CameraAnchorName', 'PlayerReaction': 'EvtTurnAroundSmall'})

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 2.0, -2.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'Actor2InstanceName': 'C', 'AtVector': [0.0, 0.0, 0.0], 'StartAccelerateRate': 0.0, 'IsEnableRevertFast': False})
}

void DefeatDinolfos() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Defeat_Ganon.GimmickShutter_Changed({'CamPosName': 'room20_camPos01', 'AtPosName': 'room20_atPos01', 'LookPosName': 'room20_atPos01'})

}

void DefeatStalfos() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Defeat_Ganon.GimmickShutter_Changed({'CamPosName': 'room22_camPos01', 'AtPosName': 'room22_atPos01', 'LookPosName': 'room22_atPos01'})

}

void DefeatIronKnuckle() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room24_camPos01'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room24_camPos01', 'Actor2InstanceName': 'room24_atPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Event134:

        call DodongoCavern_FocusOnGimmick.TBox_Avoid_temp({'isNeedSE': False, 'isByNormalBool': True, 'isByExt1Bool': False, 'isStepBackAvoid': False, 'CloseDistance': 1.5, 'TBoxName': 'TBox', 'PlayerDestination': 'room24_avoidPos01', 'WaitBeforeAct': -1, 'WaitAfterAct': -1})

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room24_camPos01', 'Actor2InstanceName': 'room24_atPos01', 'MoveTime': 90, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event134
    }
}
