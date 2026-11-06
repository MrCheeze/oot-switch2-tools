-------- EventFlow: DodongoCavern_FocusOnGimmick --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendKeepStateMessageToPlayerCamera', 'EventBasedOnLookAtCamera', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraToSavePoint']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget', 'EventQueryCameraCheckRayCastForBasedOnLookAt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Enemy_MiddleBoss_Lizalfos[Lizalfos_A]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerRequestCancelPause', 'EventTriggerRequestPause', 'EventWarpToHomeMatrix', 'EventTriggerSetWasAppearInEvent', 'EventAppearFade']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_Lizalfos[Lizalfos_B]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerRequestCancelPause', 'EventTriggerRequestPause', 'EventWarpToHomeMatrix', 'EventTriggerSetWasAppearInEvent', 'EventAppearFade']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_Lizalfos[Lizalfos_C]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerRequestCancelPause', 'EventTriggerRequestPause', 'EventWarpToHomeMatrix', 'EventTriggerSetWasAppearInEvent', 'EventAppearFade']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_Lizalfos[Lizalfos_D]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerRequestCancelPause', 'EventTriggerRequestPause', 'EventWarpToHomeMatrix', 'EventTriggerSetWasAppearInEvent', 'EventAppearFade']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayMiniMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartBossBgm', 'EventTriggerStopInGameBgm', 'EventTriggerSoundReadRiddle', 'EventTriggerForbidEmitIfOutsideView', 'EventTriggerCancelForbidEmitIfOutsideView']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn', 'EventPlayerTurnAndLook', 'EventTriggerParticipateEvent', 'EventTriggerPlayerLookAtObject', 'EventPlayerMoveToAnchor', 'EventPlayerBackMoveForAnchor', 'EventTriggerPlayerEventStartWithClimb', 'EventPlayerMoveToOffsetAnchor', 'EventPlayerWait', 'EventTriggerPlayerEventStartWithCarry']
queries: ['EventQueryCheckPlayerState', 'EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void LockedMoveToPlusZ_FocusLizalfos() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'FadeType': 1, 'WaitingResumeInGameBgm': False})

    fork {
        Enemy_MiddleBoss_Lizalfos[Lizalfos_A].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_A].EventTriggerRequestPause()
    } {
        Enemy_MiddleBoss_Lizalfos[Lizalfos_B].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_B].EventTriggerRequestPause()
    }


    call Common_Dungeon_OpenShutterMove.LockedMoveToPlusZ_EnemyFocus({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraAnchorName': 'CameraAnchorName'})

    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IdealDistance': 9.0, 'TargetActorInstanceName': 'Lizalfos_A_kai', 'ToleranceXZAngle': 0.0, 'ToleranceYUpwardAngle': 0.0, 'ToleranceYDownwardAngle': 0.0, 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0})

    fork {
        SoundSystemActor.EventTriggerSoundStartBossBgm({'BgmName': 'BGM_MiddleBoss'})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_A].EventTriggerRequestCancelPause()
        Enemy_MiddleBoss_Lizalfos[Lizalfos_A].EventAppearFade({'IsWaitEnd': True, 'ASName': 'Appear'})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_A].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_A].EventTriggerSetWasAppearInEvent()
    } {
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'MoveTime': 30, 'EndRecelerateRate': 0.5, 'IsWaitEnd': True, 'IdealDistance': 5.0, 'TargetActorInstanceName': 'Lizalfos_A_kai', 'ToleranceXZAngle': 0.0, 'ToleranceYUpwardAngle': 0.0, 'ToleranceYDownwardAngle': 0.0, 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0]})
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'StartAccelerateRate': 0.5, 'MoveTime': 60, 'IsWaitEnd': True, 'IdealDistance': 4.5, 'TargetActorInstanceName': 'Lizalfos_A_kai', 'ToleranceXZAngle': 0.0, 'ToleranceYUpwardAngle': 0.0, 'ToleranceYDownwardAngle': 0.0, 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_B].EventTriggerRequestCancelPause()
        Enemy_MiddleBoss_Lizalfos[Lizalfos_B].EventAppearFade({'IsWaitEnd': True, 'ASName': 'Appear'})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_B].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_B].EventTriggerSetWasAppearInEvent()
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'MoveTime': 60, 'Actor2InstanceName': 'Lizalfos_B', 'AtVector': [-12.0, -0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 1.399999976158142, 1.100000023841858], 'LookAtDis': 1.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'MoveTime': 30, 'StartAccelerateRate': 0.5, 'Actor2InstanceName': 'Lizalfos_B', 'AtVector': [-12.0, -0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 1.399999976158142, 1.2999999523162842], 'LookAtDis': 1.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }

}

void DodongoCavern_Gimmick_AppearLizalfos02_Full() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'FadeType': 1, 'WaitingResumeInGameBgm': False})

    fork {
        Enemy_MiddleBoss_Lizalfos[Lizalfos_C].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_C].EventTriggerRequestPause()
    } {
        Enemy_MiddleBoss_Lizalfos[Lizalfos_D].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_D].EventTriggerRequestPause()
    }


    call Common_Dungeon_OpenShutterMove.LockedMoveToPlusZ_EnemyFocus({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraAnchorName': 'CameraAnchorName'})

    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'TargetOffset': [0.0, 1.5, 0.5], 'IdealDistance': 9.0, 'TargetActorInstanceName': 'Point3'})

    fork {
        SoundSystemActor.EventTriggerSoundStartBossBgm({'BgmName': 'BGM_MiddleBoss'})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_C].EventTriggerRequestCancelPause()
        Enemy_MiddleBoss_Lizalfos[Lizalfos_C].EventAppearFade({'IsWaitEnd': True, 'ASName': 'Appear'})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_C].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_C].EventTriggerSetWasAppearInEvent()
    } {
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'MoveTime': 30, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'EndRecelerateRate': 0.5, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 1.5, 0.5], 'IdealDistance': 5.0, 'TargetActorInstanceName': 'Point3'})
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'StartAccelerateRate': 0.5, 'MoveTime': 60, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 1.5, 0.5], 'IdealDistance': 4.5, 'TargetActorInstanceName': 'Point3'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_D].EventTriggerRequestCancelPause()
        Enemy_MiddleBoss_Lizalfos[Lizalfos_D].EventAppearFade({'IsWaitEnd': True, 'ASName': 'Appear'})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_D].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_D].EventTriggerSetWasAppearInEvent()
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'Actor2InstanceName': 'Point3', 'MoveTime': 60, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 1.399999976158142, 1.100000023841858], 'AtVector': [7.0, -0.5, 0.0], 'LookAtDis': 1.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'MoveTime': 30, 'StartAccelerateRate': 0.5, 'Actor2InstanceName': 'Point3', 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 1.399999976158142, 1.2999999523162842], 'AtVector': [7.0, -0.5, 0.0], 'LookAtDis': 1.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }

}

void DodongoCavern_Gimmick_StatueSwitch() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DodongoCavern_AmosStatue_01'}) {
        Event72:
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        Event67:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'TargetActorInstanceName': 'Point1', 'TargetOffset': [0.0, -0.5, 5.0], 'ToleranceYUpwardAngle': 5.0, 'IdealDistance': 5.0, 'ToleranceXZAngle': 5.0})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'Point1', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DodongoCavern_AmosStatue_01'}) {
            Event64:
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DodongoCavern_AmosStatue_02'}) {
            goto Event64
        } else {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DodongoCavern_Room02_StepSwitchOnPlayer'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DodongoCavern_AmosStatue_02'}) {
        goto Event72
    }
    goto Event67
}

void DodongoCavern_Gimmick_CandleStickShutter() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 5.0, 'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'InstanceNameB': 'room08_01'}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'TurnFaceControlType': 1, 'InstanceName': 'Point1', 'UseNormalTurn': False, 'IsDoNavi': True})

        call MoveCamera_bySetPosAt({'AnchorName_CameraPos': 'cam_pos_01', 'AnchorName_CameraAt': 'Point1', 'Frm_Move': 60, 'AdjustOfs_CameraAt': [0.0, 0.0, 0.0], 'AdjustOfs_CameraPos': [0.0, 0.0, 0.0], 'FOV': 50.0})

        Event66:
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 5.0, 'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'InstanceNameB': 'room08_02'}) {

        call FocusOnGimmick.SwitchActivation()


        call MoveCamera_bySetPosAt({'AnchorName_CameraAt': 'Point1', 'AnchorName_CameraPos': 'cam_pos_02', 'Frm_Move': 90, 'AdjustOfs_CameraPos': [0.0, 0.0, 0.0], 'AdjustOfs_CameraAt': [0.0, 0.0, 0.0], 'FOV': 50.0})

        goto Event66
    } else {

        call FocusOnGimmick.SwitchActivation()


        call MoveCamera_bySetPosAt({'AnchorName_CameraAt': 'Point1', 'Frm_Move': 60, 'AnchorName_CameraPos': 'cam_pos_03', 'AdjustOfs_CameraAt': [0.0, 0.0, 0.0], 'AdjustOfs_CameraPos': [0.0, 0.0, 0.0], 'FOV': 30.0})

        goto Event66
    }
}

void DodongoCavern_Gimmick_SwitchShutter_Room01() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'ActorInstanceName': 'room01_campos02', 'Vector': [0.0, 0.0, 0.0]}) {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'Actor2InstanceName': 'Point1', 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'room01_waypoint01', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'Actor2InstanceName': 'Point1', 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 90, 'Actor1InstanceName': 'room01_campos02', 'PosVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'InstanceName': 'Point1', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'LookAtDis': -4.0, 'AtVector': [0.0, -0.5, 0.0], 'Actor2InstanceName': 'Point1', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'MoveTime': 90, 'PosVector': [0.0, 1.5, -3.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void DodongoCavern_Gimmick_DefeatLizalfos01() {

    call FocusOnGimmick.HangingStartUp()

    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'camPos01'}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'Actor2ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'CameraCollisionMode': 0, 'Actor1InstanceName': 'camPos01', 'Actor2InstanceName': 'camAt01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event15:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

        call TBox_Avoid_temp({'TBoxName': 'TBox', 'isByExt1Bool': True, 'isByNormalBool': False, 'isStepBackAvoid': True, 'WaitBeforeAct': -1, 'WaitAfterAct': -1, 'PlayerDestination': 'none', 'CloseDistance': 1.0, 'isNeedSE': True})

        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'Actor2ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 90, 'Actor1InstanceName': 'camPos01', 'Actor2InstanceName': 'camAt01', 'CameraCollisionMode': 0, 'PosVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event15
    }
}

void DodongoCavern_Gimmick_DefeatLizalfos02() {

    call FocusOnGimmick.HangingStartUp()

    if !Player_Event.EventQueryCheckPlayerState({'State': 35}) {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room16_camPosForTBox'}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'Actor2ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'CameraCollisionMode': 0, 'Actor1InstanceName': 'room16_camPosForTBox', 'Actor2InstanceName': 'TBox', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event382:

        call TBox_Avoid_temp({'TBoxName': 'TBox', 'isNeedSE': False, 'isByNormalBool': False, 'isByExt1Bool': True, 'isStepBackAvoid': True, 'CloseDistance': 1.0, 'WaitBeforeAct': -1, 'WaitAfterAct': -1, 'PlayerDestination': 'none'})

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'MoveToTargetPosCalcMode': 0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'MoveTime': 1, 'Actor1InstanceName': 'room16_camPosForDoor', 'Actor2InstanceName': 'room16_atPosForDoor', 'PosVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !Player_Event.EventQueryCheckPlayerState({'State': 35}) {
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': 'Point1', 'UseNormalTurn': False, 'IsDoNavi': True})
        }
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'EventCamera', 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'room16_camPosForTBox', 'InstanceNameA': '', 'IsAnchorActorA': False, 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'Actor2ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room16_camPosForTBox', 'Actor2InstanceName': 'TBox', 'CameraCollisionMode': 0, 'MoveTime': 120, 'PosVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'Actor2ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room16_camPosForTBox', 'Actor2InstanceName': 'TBox', 'CameraCollisionMode': 0, 'PosVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'MoveTime': 210, 'IsEnableRevertFast': False})
    }
    goto Event382
}

void LockedMoveToPlusZ_FocusLizalfos_02() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DodongoCavern_Lizalfos_C_Dead', 'Index': -1}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DodongoCavern_Gimmick_AppearLizalfos02_OnlyD'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DodongoCavern_Lizalfos_D_Dead', 'Index': -1}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DodongoCavern_Gimmick_AppearLizalfos02_OnlyC'})
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DodongoCavern_Gimmick_AppearLizalfos02_Full'})
    }
}

void DodongoCavern_Gimmick_AppearLizalfos02_OnlyC() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'FadeType': 1, 'WaitingResumeInGameBgm': False})
    Enemy_MiddleBoss_Lizalfos[Lizalfos_C].EventWarpToHomeMatrix({'IsWaitEnd': True})
    Enemy_MiddleBoss_Lizalfos[Lizalfos_C].EventTriggerRequestPause()

    call Common_Dungeon_OpenShutterMove.LockedMoveToPlusZ_EnemyFocus({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraAnchorName': 'CameraAnchorName'})

    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'TargetOffset': [0.0, 1.5, 0.5], 'IdealDistance': 9.0, 'TargetActorInstanceName': 'Point3'})

    fork {
        SoundSystemActor.EventTriggerSoundStartBossBgm({'BgmName': 'BGM_MiddleBoss'})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_C].EventTriggerRequestCancelPause()
        Enemy_MiddleBoss_Lizalfos[Lizalfos_C].EventAppearFade({'IsWaitEnd': True, 'ASName': 'Appear'})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_C].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_C].EventTriggerSetWasAppearInEvent()
    } {
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'MoveTime': 30, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'EndRecelerateRate': 0.5, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 1.5, 0.5], 'IdealDistance': 5.0, 'TargetActorInstanceName': 'Point3'})
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'StartAccelerateRate': 0.5, 'MoveTime': 60, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 1.5, 0.5], 'IdealDistance': 4.5, 'TargetActorInstanceName': 'Point3'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'Actor2InstanceName': 'Point3', 'MoveTime': 60, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 1.399999976158142, 1.100000023841858], 'AtVector': [7.0, -0.5, 0.0], 'LookAtDis': 1.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'MoveTime': 30, 'StartAccelerateRate': 0.5, 'Actor2InstanceName': 'Point3', 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 1.399999976158142, 1.2999999523162842], 'AtVector': [7.0, -0.5, 0.0], 'LookAtDis': 1.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void DodongoCavern_Gimmick_AppearLizalfos02_OnlyD() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'FadeType': 1, 'WaitingResumeInGameBgm': False})
    Enemy_MiddleBoss_Lizalfos[Lizalfos_D].EventWarpToHomeMatrix({'IsWaitEnd': True})
    Enemy_MiddleBoss_Lizalfos[Lizalfos_D].EventTriggerRequestPause()

    call Common_Dungeon_OpenShutterMove.LockedMoveToPlusZ_EnemyFocus({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraAnchorName': 'CameraAnchorName'})

    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'TargetOffset': [0.0, 1.5, 0.5], 'IdealDistance': 9.0, 'TargetActorInstanceName': 'Point4'})

    fork {
        SoundSystemActor.EventTriggerSoundStartBossBgm({'BgmName': 'BGM_MiddleBoss'})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_D].EventTriggerRequestCancelPause()
        Enemy_MiddleBoss_Lizalfos[Lizalfos_D].EventAppearFade({'IsWaitEnd': True, 'ASName': 'Appear'})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_D].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_MiddleBoss_Lizalfos[Lizalfos_D].EventTriggerSetWasAppearInEvent()
    } {
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'MoveTime': 30, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'EndRecelerateRate': 0.5, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 1.5, 0.5], 'IdealDistance': 5.0, 'TargetActorInstanceName': 'Point4'})
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'StartAccelerateRate': 0.5, 'MoveTime': 60, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 1.5, 0.5], 'IdealDistance': 4.5, 'TargetActorInstanceName': 'Point4'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'Actor2InstanceName': 'Point3', 'MoveTime': 60, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 1.399999976158142, 1.100000023841858], 'AtVector': [7.0, -0.5, 0.0], 'LookAtDis': 1.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'MoveTime': 30, 'StartAccelerateRate': 0.5, 'Actor2InstanceName': 'Point3', 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 1.399999976158142, 1.2999999523162842], 'AtVector': [7.0, -0.5, 0.0], 'LookAtDis': 1.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void DodongoCavern_Gimmick_SwitchShutter_Room12() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'Point1'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'Actor2InstanceName': 'Point1', 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room12_campos01', 'MoveTime': 60, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': 'Point1', 'UseNormalTurn': False, 'IsDoNavi': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void DodongoCavern_Gimmick_EyeSwitch() {

    call Common.AirStartUp()


    call DodongoCave_Gimmick_EyeSwitch_Changed()

}

void DodongoCavern_Gimmick_SwitchShortcut() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor2InstanceName': 'room12_camAt01', 'Actor1InstanceName': 'room12_camPos01', 'MoveTime': 1, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 4.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 5, 'TurnFaceControlType': 1, 'InstanceName': 'room12_camAt01'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } {
        Player_Event.EventPlayerMoveToOffsetAnchor({'MoveSpeed': 4.0, 'IsWaitEnd': True, 'DecSpeedDistance': 1.0, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Point1', 'IsOffsetBasedOnAnchorDir': True, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'Offset': [0.0, 0.0, 4.0]})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'room12_camAt01', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    }

}

void Get_StoneOfFire_EmitLight() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_DodongoCave_0020', 'Index': -1}) {
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 91})
    }
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_DodongoCave_0020', 'FadeInTypeEventEnd': 0})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
}

void DodongoCavern_Gimmick_SwitchShutter_Room19() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'Point1'}) {
        EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'TargetActorInstanceName': 'Point1', 'TargetOffset': [0.0, 0.10000000149011612, 5.0], 'ToleranceXZAngle': 0.0, 'MoveTime': 60, 'IdealDistance': 3.0, 'IsLinearMove': False})
        Event200:
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': 'Point1', 'UseNormalTurn': False, 'IsDoNavi': True})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DodongoCavern_Room19_MovableBox'}) {
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DodongoCavern_Room19_StepSwitchOnPlayer'})
        }
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } else {
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'Point1'})
        EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'TargetActorInstanceName': 'Point1', 'IdealDistance': 5.0, 'TargetOffset': [0.0, 0.10000000149011612, 5.0]})
        goto Event200
    }
}

void MoveCamera_bySetPosAt() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'ActorInstanceName': 'AnchorName_CameraPos', 'Vector': 'AdjustOfs_CameraPos'}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'Frm_Move'})

        fork {
            PostProcessingActor.EventSetDoFForFlowchart({'IsAutoFocalDist': True, 'EndBluarLevel': 0.75, 'EndFNumber': 8.0, 'IsWaitEnd': True, 'EndDistance': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'LookAtDis': -1.0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': 'AnchorName_CameraPos', 'Actor2InstanceName': 'AnchorName_CameraAt', 'PosVector': 'AdjustOfs_CameraPos', 'AtVector': 'AdjustOfs_CameraAt', 'TargetFovy': 'FOV', 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsEnableRevertFast': False})
        }

        Event230:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'TurnFaceControlType': 1, 'UseNormalTurn': False, 'InstanceName': 'AnchorName_CameraAt', 'IsDoNavi': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'LookAtDis': -1.0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': 'AnchorName_CameraPos', 'Actor2InstanceName': 'AnchorName_CameraAt', 'PosVector': 'AdjustOfs_CameraPos', 'AtVector': 'AdjustOfs_CameraAt', 'MoveTime': 'Frm_Move', 'TargetFovy': 'FOV', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            PostProcessingActor.EventSetDoFForFlowchart({'IsAutoFocalDist': True, 'EndBluarLevel': 0.75, 'EndFNumber': 8.0, 'RequiredFrame': 'Frm_Move', 'IsWaitEnd': True, 'EndDistance': 0.0, 'IsPrimaryApply': False})
        }

        goto Event230
    }
}

void TBox_Avoid_temp() {

    fork {
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'isByNormalBool'}) {
            if !GameDataActor.EventQueryIsBool({'BoolValue': 'isNeedSE'}) {

                call TreasureBoxAppear.Act_TBoxAppear_Magic_0()

            } else {
                EventRequestActor.EventTriggerSetEventBool({'Bool': True})

                call TreasureBoxAppear.Act_Magic()

            }
        } else
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'isByExt1Bool'}) {
            if !GameDataActor.EventQueryIsBool({'BoolValue': 'isNeedSE'}) {

                call TreasureBoxAppear.Act_TBoxAppear_Magic_1()

            } else {

                call TreasureBoxAppear.Act_TBoxAppear_Magic_1_NoSE()

            }
        }
    } {
        if !Player_Event.EventQueryCheckPlayerState({'State': 35}) {
            if !GameDataActor.EventQueryIsBool({'BoolValue': 'isStepBackAvoid'}) {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBoxName'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                    if Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TBoxName', 'AngleThreshold': 90.0, 'WorldPos': [0.0, 0.0, 0.0]}) {
                        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'IsDoNavi': True, 'SlowTurn': True})
                    }
                    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBoxName', 'CheckDistance': 0.5}) {
                        Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'TBoxName', 'OffsetDist': 2.0})
                        Event375:
                        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'IsDoNavi': True, 'SlowTurn': True})
                    } else
                    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBoxName', 'CheckDistance': 1.5}) {
                        Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'TBoxName', 'OffsetDist': 1.0})
                    }
                    goto Event375
                }
            } else {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBoxName'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBoxName', 'CheckDistance': 'CloseDistance'}) {
                        Player_Event.EventPlayerMoveToAnchor({'IsMoveAnchorFrontDir': False, 'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsWaitEnd': True, 'AnchorInstanceName': 'PlayerDestination', 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
                    }
                    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'IsDoNavi': True, 'SlowTurn': True})
                }
            }
        }
    }

}

void DodongoCave_Gimmick_EyeSwitch_Changed() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerCameraSavePoint()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'DestinationAnchor', 'TargetActorInstanceName': 'room14_atPos', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 5.0, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'IdealDistance': 7.5}) {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'room14_atPos', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 5.0, 'CameraCollisionMode': 0, 'MoveTime': 1, 'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 7.5})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event350:
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'TurnFaceControlType': 1, 'IsWaitEnd': False, 'UseNormalTurn': False, 'InstanceName': 'Point1', 'IsDoNavi': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
        }
    } else {
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'room14_atPos', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 5.0, 'MoveTime': 60, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 7.5})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        goto Event350
    }
}
