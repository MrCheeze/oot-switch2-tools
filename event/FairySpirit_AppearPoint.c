-------- EventFlow: FairySpirit_AppearPoint --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventProxyRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_FairySpirit
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': True, 'EventMemberCreateMethod': 2}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerBackMoveForAnchor', 'EventPlayerTurnAndLook', 'EventTriggerPlayerHealMPMax', 'EventTriggerHealLife', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: ['EventQueryIsDirToTarget', 'EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventStartRecoverOrAddHeartGauge', 'EventWaitHeartGaugeStable', 'EventTriggerSetDisplayHeartGauge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventResetToInGameParametersDoF']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: FairySpirit_AppearPoint_SunSong
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: FairySpirit_AppearPoint_StormSong
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void PlaySunSong() {

    call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': True, 'MelodyType': 3})

    if !GameSystemActor.EventQueryIsRecommendedMelody() {

        call Dm_SY_Ocarina_SunSong.SunSong()


        call PopFairySpirit()

    }
}

void PlayStormSong() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FairySpirit_AppearPoint_WallOn', 'Index': -1, 'Value': True})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'FairySpirit_AppearPoint', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 4.0}) {

        call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': True, 'MelodyType': 5})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FairySpirit_AppearPoint_WallOn', 'Value': False, 'Index': -1})
        if !GameSystemActor.EventQueryIsRecommendedMelody() {

            call PopFairySpirit_Graffiti1()

        }
    } else {

        call Dm_SY_Ocarina.PlayOcarinaFree({'MelodyType': 5, 'HasRecommendedMelody': False})

    }
}

void PopFairySpirit() {
    PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'FairySpirit_AppearPoint', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 4.0})
    && !Player_Event.EventQueryIsDirToTarget({'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'Target': 5, 'AngleThreshold': 90.0}) {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'FairySpirit_AppearPoint', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 1.25}) {

            fork {
                if Player_Event.EventQueryIsDirToTarget({'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'Target': 5, 'AngleThreshold': 45.0}) {
                    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 5, 'IsDoNavi': True})
                }

                fork {
                    Player_Event.EventPlayerBackMoveForAnchor({'AnchorInstanceName': 'FairySpirit_AppearPoint', 'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'OffsetDist': 0.5})
                } {
                    Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1})
                }

            } {
                if !Player_Event.EventQueryIsDirToTarget({'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'Target': 5, 'AngleThreshold': 45.0}) {
                    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'Vector': [-1.25, 1.75, 0.0], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3}) {
                        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'Vector': [1.25, 1.75, 0.0], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3}) {
                            Event76:
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.25, 0.0], 'IsWaitEnd': True, 'TargetFovy': 50.0, 'PosVector': [0.0, 2.5, 0.0], 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsEnableRevertFast': False})
                            Event63:
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                            EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'PosVector': [-1.25, 1.75, -1.25], 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'TargetFovy': 50.0, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.30000001192092896, 0.0], 'IsWaitEnd': True, 'IsEnableRevertFast': False})
                        } else {
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.25, 0.0], 'IsWaitEnd': True, 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [1.25, 1.75, 0.0], 'IsAtVectorReferenceActorPosOnce': True, 'IsEnableRevertFast': False})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                            EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'TargetFovy': 50.0, 'PosVector': [1.25, 1.75, -1.25], 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.30000001192092896, 0.0], 'IsWaitEnd': True, 'IsEnableRevertFast': False})
                        }
                    } else {
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.25, 0.0], 'IsWaitEnd': True, 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [-1.25, 1.75, 0.0], 'IsAtVectorReferenceActorPosOnce': True, 'IsEnableRevertFast': False})
                        goto Event63
                    }
                } else {
                    goto Event76
                }
            }

        } else {

            fork {
                if !Player_Event.EventQueryIsDirToTarget({'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'Target': 5, 'AngleThreshold': 45.0}) {
                    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'Vector': [-1.25, 1.75, 0.0], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3}) {
                        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'Vector': [1.25, 1.75, 0.0], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3}) {
                            Event84:
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.25, 0.0], 'IsWaitEnd': True, 'TargetFovy': 50.0, 'PosVector': [0.0, 2.5, 0.0], 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsEnableRevertFast': False})
                            Event68:
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                            EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'PosVector': [-1.25, 1.75, -1.25], 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'TargetFovy': 50.0, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.30000001192092896, 0.0], 'IsWaitEnd': True, 'IsEnableRevertFast': False})
                        } else {
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.25, 0.0], 'IsWaitEnd': True, 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [1.25, 1.75, 0.0], 'IsAtVectorReferenceActorPosOnce': True, 'IsEnableRevertFast': False})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                            EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'TargetFovy': 50.0, 'PosVector': [1.25, 1.75, -1.25], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.30000001192092896, 0.0], 'IsWaitEnd': True, 'IsEnableRevertFast': False})
                        }
                    } else {
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.25, 0.0], 'IsWaitEnd': True, 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [-1.25, 1.75, 0.0], 'IsAtVectorReferenceActorPosOnce': True, 'IsEnableRevertFast': False})
                        goto Event68
                    }
                } else {
                    goto Event84
                }
            } {
                Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 5, 'IsDoNavi': True})
            }

        }
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 1.0, 0.0]})

        fork {
            Obj_FairySpirit.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': True, 'ASName': 'Drop_GossipStone'})
            Obj_FairySpirit.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'Fly', 'IsWaitEnd': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 0, 'PosVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'MoveTime': 45, 'Actor1ActorName': '', 'AtVector': [0.0, 0.699999988079071, 0.0], 'IsEnableRevertFast': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventProxyRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
        UISystemActor.EventStartRecoverOrAddHeartGauge({'IsWaitEnd': True})
        Player_Event.EventTriggerHealLife({'Value': 32})
        UISystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
        Player_Event.EventTriggerPlayerHealMPMax()
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 3, 'MoveTotargetPosType': 0, 'PosVector': [0.0, 1.75, -2.5], 'AtVector': [0.0, 1.5, 0.0], 'MoveTime': 30, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }
}

void PlaySunSong_FairyMemo() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FairySpirit_AppearPoint_WallOn', 'Index': -1, 'Value': True})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'FairySpirit_AppearPoint', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 4.0}) {

        call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': True, 'MelodyType': 3})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FairySpirit_AppearPoint_WallOn', 'Value': False, 'Index': -1})
        if !GameSystemActor.EventQueryIsRecommendedMelody() {

            call Dm_SY_Ocarina_SunSong.SunSong()


            call PopFairySpirit_Graffiti()

        }
    } else {

        call Dm_SY_Ocarina.PlayOcarinaFree({'MelodyType': 3, 'HasRecommendedMelody': False})

    }
}

void PopFairySpirit_Graffiti() {
    PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})

    fork {
        if !Player_Event.EventQueryPlayerIsChild() {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [1.0, 1.0, 1.5], 'ActorName': 'Obj_FairySpirit'}) {
                if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [-1.0, 1.0, 1.5], 'ActorName': 'Obj_FairySpirit'}) {
                    Event131:
                    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'ActorName': 'Obj_FairySpirit', 'Vector': [0.75, 1.5, 0.75]}) {

                        fork {
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'PosVector': [-0.75, 1.5, 0.75], 'PosVectorSetType': 4, 'IsEnableRevertFast': False})
                        } {

                            call Common_Camera_Pln.CameraDoF_Default()

                        }

                    } else {

                        fork {
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'PosVectorSetType': 4, 'PosVector': [0.75, 1.5, 0.75], 'IsEnableRevertFast': False})
                        } {

                            call Common_Camera_Pln.CameraDoF_Default()

                        }

                    }
                    Event142:
                    FairySpirit_AppearPoint_SunSong.EventTriggerEmitXLink({'ELinkKey': 'PreAppear', 'SLinkKey': ''})
                    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Spirit_Drop', 'IsIgnoreDucking': False})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                } else {

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 4, 'TargetFovy': 50.0, 'PosVector': [-1.0, 1.0, 1.5], 'IsEnableRevertFast': False})
                    } {

                        call Common_Camera_Pln.CameraDoF_Default()

                    }

                    goto Event142
                }
            } else {

                fork {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 4, 'TargetFovy': 50.0, 'PosVector': [1.0, 1.0, 1.5], 'IsEnableRevertFast': False})
                } {

                    call Common_Camera_Pln.CameraDoF_Default()

                }

                goto Event142
            }
        } else
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'ActorName': 'Obj_FairySpirit', 'Vector': [1.0, 1.5, 1.5]}) {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'ActorName': 'Obj_FairySpirit', 'Vector': [-1.0, 1.5, 1.5]}) {
                goto Event131
            } else {

                fork {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 4, 'TargetFovy': 50.0, 'PosVector': [-1.0, 1.5, 1.5], 'IsEnableRevertFast': False})
                } {

                    call Common_Camera_Pln.CameraDoF_Default()

                }

                goto Event142
            }
        } else {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 4, 'TargetFovy': 50.0, 'PosVector': [1.0, 1.5, 1.5], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default()

            }

            goto Event142
        }
    } {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'IsAnchorActorA': False, 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'FairySpirit_AppearPoint', 'CheckDistance': 1.25}) {
            Event112:
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 5, 'IsDoNavi': True})

            fork {
                Player_Event.EventPlayerBackMoveForAnchor({'AnchorInstanceName': 'FairySpirit_AppearPoint', 'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'OffsetDist': 0.0})
            } {
                Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1})
            }

        } else
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.5, 0.5]}) {
            goto Event112
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 5, 'IsDoNavi': True})
        }
    }

    Event51:
    EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Obj_FairySpirit', 'InstanceName': ''})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BottomOfTheWell_CoffinRoomCheck', 'Index': -1}) {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'AtVector': [0.0, 0.75, 0.0], 'PosVector': [-0.75, 1.5, -1.25], 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

        }

        Event140:
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Obj_FairySpirit', 'InstanceName': ''})
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
            UISystemActor.EventStartRecoverOrAddHeartGauge({'IsWaitEnd': True})
            Player_Event.EventTriggerHealLife({'Value': 32})
            UISystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})
            Player_Event.EventTriggerPlayerHealMPMax()
        } {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsStart_FairySpiritMove', 'Value': True, 'Index': -1})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsAtVectorReferenceActorPosOnce': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'TargetFovy': 55.0, 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default()

            }

        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
        EventProxyRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsStart_FairySpiritMove', 'Value': False, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'FairySpiritAppear_HrlField_Note', 'Value': True})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 499})
    } else
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 1.0, 0.0]}) {
        Event119:
        if !Player_Event.EventQueryPlayerIsChild() {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'MoveTime': 60, 'PosVectorSetType': 3, 'PosVector': [0.0, 1.5, -2.0], 'AtVector': [0.0, 0.75, 0.0], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

            }

        } else {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'MoveTime': 60, 'PosVectorSetType': 3, 'PosVector': [0.0, 1.75, -2.0], 'AtVector': [0.0, 1.25, 0.0], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

            }

        }
        goto Event140
    } else
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [-1.25, 1.25, -1.25]}) {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [1.25, 1.25, -1.25]}) {
            goto Event119
        } else
        if !Player_Event.EventQueryPlayerIsChild() {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'PosVector': [1.0, 1.25, -1.0], 'AtVector': [0.0, 0.6000000238418579, 0.5], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

            }

        } else {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'PosVector': [1.25, 1.25, -1.25], 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'AtVector': [0.0, 1.0, 0.5], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

            }

        }
        goto Event140
    } else
    if !Player_Event.EventQueryPlayerIsChild() {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'AtVector': [0.0, 0.6000000238418579, 0.5], 'PosVector': [-1.0, 1.25, -1.0], 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

        }

    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 60, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'AtVectorSetType': 3, 'TargetFovy': 55.0, 'PosVector': [-1.25, 1.25, -1.25], 'AtVector': [0.0, 1.0, 0.5], 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

        }

    }
    goto Event140
}

void PopFairySpirit_Graffiti1() {
    PostProcessingActor.EventResetToInGameParametersDoF({'IsWaitEnd': True, 'TransitionFrame': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BottomOfTheWell_CoffinRoomCheck', 'Index': -1}) {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVectorSetType': 4, 'PosVectorSetType': 4, 'AtVector': [0.0, -0.25, 0.0], 'PosVector': [1.0, 0.75, 2.0], 'IsEnableRevertFast': False})
            FairySpirit_AppearPoint_StormSong.EventTriggerEmitXLink({'ELinkKey': 'PreAppear', 'SLinkKey': ''})
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Spirit_Drop', 'IsIgnoreDucking': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        } {
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'IsAnchorActorA': False, 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'FairySpirit_AppearPoint', 'CheckDistance': 1.5}) {
                Event154:
                Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 5, 'IsDoNavi': True})

                fork {
                    Player_Event.EventPlayerBackMoveForAnchor({'AnchorInstanceName': 'FairySpirit_AppearPoint', 'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'OffsetDist': 1.5})
                } {
                    Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1})
                }

            } else
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.5, 0.5]}) {
                goto Event154
            } else {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 5, 'IsDoNavi': True})
            }
        }

    } else {

        fork {
            if !Player_Event.EventQueryPlayerIsChild() {
                if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [1.0, 1.0, 1.5], 'ActorName': 'Obj_FairySpirit'}) {
                    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [-1.0, 1.0, 1.5], 'ActorName': 'Obj_FairySpirit'}) {
                        Event188:
                        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'ActorName': 'Obj_FairySpirit', 'Vector': [0.75, 1.5, 0.75]}) {

                            fork {
                                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'PosVector': [-0.75, 1.5, 0.75], 'PosVectorSetType': 4, 'IsEnableRevertFast': False})
                            } {

                                call Common_Camera_Pln.CameraDoF_Default()

                            }

                        } else {

                            fork {
                                EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'PosVectorSetType': 4, 'PosVector': [0.75, 1.5, 0.75], 'IsEnableRevertFast': False})
                            } {

                                call Common_Camera_Pln.CameraDoF_Default()

                            }

                        }
                        Event203:
                        FairySpirit_AppearPoint_StormSong.EventTriggerEmitXLink({'ELinkKey': 'PreAppear', 'SLinkKey': ''})
                        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Spirit_Drop', 'IsIgnoreDucking': False})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                    } else {

                        fork {
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 4, 'TargetFovy': 50.0, 'PosVector': [-1.0, 1.0, 1.5], 'IsEnableRevertFast': False})
                        } {

                            call Common_Camera_Pln.CameraDoF_Default()

                        }

                        goto Event203
                    }
                } else {

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 4, 'TargetFovy': 50.0, 'PosVector': [1.0, 1.0, 1.5], 'IsEnableRevertFast': False})
                    } {

                        call Common_Camera_Pln.CameraDoF_Default()

                    }

                    goto Event203
                }
            } else
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'ActorName': 'Obj_FairySpirit', 'Vector': [1.0, 1.5, 1.5]}) {
                if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'ActorName': 'Obj_FairySpirit', 'Vector': [-1.0, 1.5, 1.5]}) {
                    goto Event188
                } else {

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 4, 'TargetFovy': 50.0, 'PosVector': [-1.0, 1.5, 1.5], 'IsEnableRevertFast': False})
                    } {

                        call Common_Camera_Pln.CameraDoF_Default()

                    }

                    goto Event203
                }
            } else {

                fork {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Obj_FairySpirit', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 4, 'TargetFovy': 50.0, 'PosVector': [1.0, 1.5, 1.5], 'IsEnableRevertFast': False})
                } {

                    call Common_Camera_Pln.CameraDoF_Default()

                }

                goto Event203
            }
        } {
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'IsAnchorActorA': False, 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'FairySpirit_AppearPoint', 'CheckDistance': 1.5}) {
                Event172:
                Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 5, 'IsDoNavi': True})

                fork {
                    Player_Event.EventPlayerBackMoveForAnchor({'AnchorInstanceName': 'FairySpirit_AppearPoint', 'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'OffsetDist': 0.5})
                } {
                    Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1})
                }

            } else
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.5, 0.5]}) {
                goto Event172
            } else {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'InstanceName': 'FairySpirit_AppearPoint', 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'Target': 5, 'IsDoNavi': True})
            }
        }

    }
    goto Event51
}
