-------- EventFlow: DmF_SY_CuccoAngry --------

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: ['EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerSetCctForwardSpeedZero', 'EventCuccoWarpAngrySafePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void EntryPoint0() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Npc_EventStarter.EventCuccoWarpAngrySafePoint({'IsWaitEnd': True})
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventPlayerTurnAndLook({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': False, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'IsDoNavi': True})
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Cucco_IsAngry'})
        Npc_EventStarter.EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})
        Npc_EventStarter.EventPlayAS({'ASName': 'Angry', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'IsIgnoreVectorReferenceActorRot1': False, 'ActorName2': '', 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': False, 'ActorName1': 'CameraTarget1_ActorName', 'Actor1InstanceName': 'CameraTarget1_ActorInstanceName', 'VectorSetType1': 2, 'Vector1': [0.0, 1.5, 1.0], 'VectorSetType2': 2, 'Vector2': [0.0, 0.4000000059604645, 0.0], 'IsConsiderWater': False}) {
            EventCamera.EventMoveToTargetPosCamera({'AtVectorSetType': 2, 'LookAtDis': -1.0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'CameraTarget1_ActorName', 'Actor1InstanceName': 'CameraTarget1_ActorInstanceName', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'PosVectorSetType': 2, 'MoveTime': 0, 'AtVector': [0.0, 0.4000000059604645, 0.0], 'PosVector': [0.0, 1.5, 0.10000000149011612], 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'AtVectorSetType': 2, 'LookAtDis': -1.0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'CameraTarget1_ActorName', 'Actor1InstanceName': 'CameraTarget1_ActorInstanceName', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'PosVectorSetType': 2, 'MoveTime': 69, 'AtVector': [0.0, 0.4000000059604645, 0.0], 'PosVector': [0.0, 1.399999976158142, 0.07500000298023224], 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'AtVectorSetType': 2, 'LookAtDis': -1.0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'CameraTarget1_ActorName', 'Actor1InstanceName': 'CameraTarget1_ActorInstanceName', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'PosVectorSetType': 2, 'MoveTime': 120, 'PosVector': [0.0, 1.5, 0.10000000149011612], 'AtVector': [0.0, 0.4000000059604645, 0.0], 'IsEnableRevertFast': False})
            Event19:
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'ReviseMode': 1, 'CollisionInterpolateSkip': True, 'IsRestoreDoF': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'AtVectorSetType': 2, 'LookAtDis': -1.0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'CameraTarget1_ActorName', 'Actor1InstanceName': 'CameraTarget1_ActorInstanceName', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'PosVectorSetType': 2, 'PosVector': [0.0, 1.5, 1.0], 'MoveTime': 0, 'AtVector': [0.0, 0.4000000059604645, 0.0], 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'AtVectorSetType': 2, 'LookAtDis': -1.0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'CameraTarget1_ActorName', 'Actor1InstanceName': 'CameraTarget1_ActorInstanceName', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'PosVectorSetType': 2, 'MoveTime': 69, 'PosVector': [0.0, 1.2000000476837158, 0.75], 'AtVector': [0.0, 0.4000000059604645, 0.0], 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'AtVectorSetType': 2, 'LookAtDis': -1.0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'CameraTarget1_ActorName', 'Actor1InstanceName': 'CameraTarget1_ActorInstanceName', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'PosVectorSetType': 2, 'MoveTime': 120, 'PosVector': [0.0, 1.5, 1.0], 'AtVector': [0.0, 0.4000000059604645, 0.0], 'IsEnableRevertFast': False})
            goto Event19
        }
    }

    Npc_Navi.EventNaviRequestBallonMessage({'Index': 427})
}
