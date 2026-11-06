-------- EventFlow: TriggerSongOfTimeBlock --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventWaitUpdate']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryMelodyTypeForNormal']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerRequestTriggerTimeOfBlock', 'EventPlayerWait', 'EventPlayerAdvanceNoticeTimeOfBlock', 'EventTriggerSetTimerInvalidAttentionLockOn', 'EventTriggerPlayerWarpSafePos']
queries: ['EventQueryCheckPlayerContactSongOfTimeBlock']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void PlayOcarina() {

    call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': True, 'MelodyType': 4})

    if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
    && !GameSystemActor.EventQueryIsRecommendedMelody() {
        Player_Event.EventPlayerAdvanceNoticeTimeOfBlock()
        GameSystemActor.EventWaitUpdate({'IsWaitEnd': True, 'UpdateCount': 4})
        if !Player_Event.EventQueryCheckPlayerContactSongOfTimeBlock() {
            GameSystemActor.EventWaitUpdate({'UpdateCount': 2, 'IsWaitEnd': True})

            fork {
                Player_Event.EventTriggerPlayerWarpSafePos({'UseUndecidedPos': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

                call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

            } {

                call Common_Camera_Pln.CameraDoF_Default()

            } {
                EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'PosVector': [0.0, 0.0, 5.0], 'IsEnableRevertFast': False})
            }

            Event30:
            EventCamera.EventMoveToTargetPosCamera({'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 4.0], 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': False, 'MoveTime': 120, 'StartAccelerateRate': 0.0, 'IsEnableRevertFast': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

            fork {
                Player_Event.EventPlayerRequestTriggerTimeOfBlock()
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
                Player_Event.EventPlayerWait({'IsWaitEnd': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
            }

            Player_Event.EventTriggerSetTimerInvalidAttentionLockOn({'Frame': 30.0})
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 359})
        } else {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'PosVector': [0.0, 0.0, 5.0], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default()

            }

            goto Event30
        }
    }
}
