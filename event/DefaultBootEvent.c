-------- EventFlow: DefaultBootEvent --------

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: ['EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWait', 'EventPlayerStopInAir', 'EventTriggerParticipateEvent', 'EventTriggerPlayerFootIKForceApply', 'EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventWaitCloseLoadingFade']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void DefaultBootEvent() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:ローディング明けデモ専用', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    Player_Event.EventTriggerPlayerFootIKForceApply()
    if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {

        call Common.AirStartUp()

        Event21:
        if !Player_Event.EventQueryCheckPlayerState({'State': 32})
        && !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector2': [0.0, 1.0, 0.0], 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': False, 'VectorSetType1': 3, 'VectorSetType2': 3, 'IsConsiderWater': False, 'Vector1': [0.0, 1.399999976158142, -2.25]}) {
            if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector2': [0.0, 1.0, 0.0], 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': False, 'VectorSetType1': 3, 'VectorSetType2': 3, 'Vector1': [0.0, 2.0, 3.0], 'IsConsiderWater': False}) {
                if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector2': [0.0, 1.0, 0.0], 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': False, 'VectorSetType1': 3, 'VectorSetType2': 3, 'Vector1': [3.0, 2.0, 0.0], 'IsConsiderWater': False}) {
                    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector2': [0.0, 1.0, 0.0], 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': False, 'VectorSetType1': 3, 'VectorSetType2': 3, 'Vector1': [-3.0, 2.0, 0.0], 'IsConsiderWater': False}) {
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 3.0, -0.15000000596046448], 'IsEnableRevertFast': False})
                    } else {
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-3.0, 1.7999999523162842, 0.0], 'IsEnableRevertFast': False})
                    }
                    Event20:
                    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False, 'AfterKeepEndInterpolateCountScale': 2.0})
                    Event1:
                    UISystemActor.EventWaitCloseLoadingFade({'IsWaitEnd': True})
                } else {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [3.0, 1.7999999523162842, 0.0], 'IsEnableRevertFast': False})
                    goto Event20
                }
            } else {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 1.7999999523162842, 3.0], 'IsEnableRevertFast': False})
                goto Event20
            }
        } else {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
            EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
            goto Event1
        }
    } else {
        Player_Event.EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit()
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        goto Event21
    }
}

void AirStartUP() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            Player_Event.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } else {
            Player_Event.EventTriggerParticipateEvent()
        }
    } else {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
    }
}
