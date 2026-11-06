-------- EventFlow: ForestTemple_Gimmick --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave', 'EventStopPostBattlePresentation', 'EventTriggerControllerRumble', 'EventTriggerAddPreComputedCullingBasePosByAnker']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventTriggerStopInGameBgm', 'EventTriggerSoundStartBossBgm', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventBasedOnLookAtCamera', 'EventTriggerRequestCameraShake', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerCameraSavePoint']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Stalfos_Weak[Stalfos_A]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventPlayAS', 'EventTriggerRequestCancelPause', 'EventTriggerRequestPause', 'EventTriggerSetWasAppearInEvent', 'EventAppearFade']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Stalfos_Weak[Stalfos_B]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventPlayAS', 'EventTriggerRequestCancelPause', 'EventTriggerRequestPause', 'EventTriggerSetWasAppearInEvent', 'EventAppearFade']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayMiniMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Stalfos_Weak[Stalfos_C]
entrypoint: None()
actions: ['EventTriggerRequestPause', 'EventWarpToHomeMatrix', 'EventPlayAS', 'EventTriggerRequestCancelPause', 'EventTriggerSetWasAppearInEvent', 'EventAppearFade']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn', 'EventPlayerTurnAndLook', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerLookAtObject', 'EventTriggerParticipateEvent', 'EventPlayerWait', 'EventTriggerPlayerSetBattleMode']
queries: ['EventQueryIsDirToTarget', 'EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNaviRequestBallonMessage', 'EventTalk', 'EventNaviLookAtObject', 'EventNaviMovePosTalkToPlayer', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Bubble_Green[Bubble_Green_ForestTemple_2]
entrypoint: None()
actions: ['EventTriggerEnemyReset']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Enemy_Bubble_Green[Bubble_Green_ForestTemple_1]
entrypoint: None()
actions: ['EventTriggerEnemyReset']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Bubble_Blue[BlueBubble_00]
entrypoint: None()
actions: ['EventExecuteEnemyBubbleBlueForceWait', 'EventTriggerDeathSignal']
queries: ['EventQueryDeathIsDead']
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void LockedMoveToPlusZ_FocusStalfos() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

    fork {
        Enemy_Stalfos_Weak[Stalfos_A].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Enemy_Stalfos_Weak[Stalfos_A].EventTriggerRequestPause()
    } {
        Enemy_Stalfos_Weak[Stalfos_B].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Enemy_Stalfos_Weak[Stalfos_B].EventTriggerRequestPause()
    }


    call Common_Dungeon_OpenShutterMove.LockedMoveToPlusZ_EnemyFocus({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraAnchorName': 'CameraAnchorName'})

    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'TargetOffset': [0.0, 1.5, 0.5], 'IdealDistance': 9.0, 'TargetActorInstanceName': 'Stalfos_A'})

    fork {
        SoundSystemActor.EventTriggerSoundStartBossBgm({'BgmName': 'BGM_MiddleBoss'})
        Enemy_Stalfos_Weak[Stalfos_A].EventTriggerRequestCancelPause()
        Enemy_Stalfos_Weak[Stalfos_A].EventAppearFade({'IsWaitEnd': True, 'ASName': 'Appear'})
        Enemy_Stalfos_Weak[Stalfos_A].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_Stalfos_Weak[Stalfos_A].EventTriggerSetWasAppearInEvent()
    } {
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'MoveTime': 30, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'EndRecelerateRate': 0.5, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'IdealDistance': 5.0, 'TargetOffset': [0.0, 1.5, 0.5], 'TargetActorInstanceName': 'Stalfos_A'})
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'StartAccelerateRate': 0.5, 'MoveTime': 60, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'IdealDistance': 4.5, 'TargetOffset': [0.0, 1.5, 0.5], 'TargetActorInstanceName': 'Stalfos_A'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }


    fork {
        Enemy_Stalfos_Weak[Stalfos_B].EventTriggerRequestCancelPause()
        Enemy_Stalfos_Weak[Stalfos_B].EventAppearFade({'IsWaitEnd': True, 'ASName': 'Appear'})
        Enemy_Stalfos_Weak[Stalfos_B].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_Stalfos_Weak[Stalfos_B].EventTriggerSetWasAppearInEvent()
    } {
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'EndRecelerateRate': 0.5, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'IdealDistance': 5.0, 'TargetOffset': [0.0, 1.5, 0.5], 'TargetActorInstanceName': 'Stalfos_B', 'MoveTime': 30})
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'StartAccelerateRate': 0.5, 'MoveTime': 60, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'IdealDistance': 4.5, 'TargetOffset': [0.0, 1.5, 0.5], 'TargetActorInstanceName': 'Stalfos_B'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'MoveTime': 60, 'Actor2InstanceName': 'Stalfos_B', 'AtVector': [-3.0, -0.5, 0.0], 'PosVector': [0.0, 1.7999999523162842, -1.7999999523162842], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'MoveTime': 30, 'StartAccelerateRate': 0.5, 'Actor2InstanceName': 'Stalfos_B', 'AtVector': [-3.0, -0.5, 0.0], 'PosVector': [0.0, 2.0, -2.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }

}

void LockedMoveToPlusZ_FocusStalfos_02() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Enemy_Stalfos_Weak[Stalfos_C].EventWarpToHomeMatrix({'IsWaitEnd': True})
    Enemy_Stalfos_Weak[Stalfos_C].EventTriggerRequestPause()

    call Common_Dungeon_OpenShutterMove.LockedMoveToPlusZ_EnemyFocus({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraAnchorName': 'CameraAnchorName'})

    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'room06_camPos_forStalfos01', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'room06_atPos_forStalfos01', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    fork {
        SoundSystemActor.EventTriggerSoundStartBossBgm({'BgmName': 'BGM_MiddleBoss'})
        Enemy_Stalfos_Weak[Stalfos_C].EventTriggerRequestCancelPause()
        Enemy_Stalfos_Weak[Stalfos_C].EventAppearFade({'IsWaitEnd': True, 'ASName': 'Appear'})
        Enemy_Stalfos_Weak[Stalfos_C].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_Stalfos_Weak[Stalfos_C].EventTriggerSetWasAppearInEvent()
    } {
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'EndRecelerateRate': 0.5, 'IsWaitEnd': True, 'TargetActorInstanceName': 'room06_atPos_forStalfos01', 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'ToleranceXZAngle': 0.0, 'ToleranceYUpwardAngle': 0.0, 'ToleranceYDownwardAngle': 0.0, 'IdealDistance': 6.0, 'MoveTime': 30})
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'EndRecelerateRate': 0.5, 'IsWaitEnd': True, 'TargetActorInstanceName': 'room06_atPos_forStalfos01', 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'ToleranceXZAngle': 0.0, 'ToleranceYUpwardAngle': 0.0, 'ToleranceYDownwardAngle': 0.0, 'IdealDistance': 4.0, 'MoveTime': 60})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'MoveTime': 60, 'Actor2InstanceName': 'Stalfos_A', 'AtVector': [0.0, -0.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.0, 1.7999999523162842, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'MoveTime': 30, 'StartAccelerateRate': 0.5, 'Actor2InstanceName': 'Stalfos_A', 'AtVector': [0.0, -0.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [0.0, 1.899999976158142, -1.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    Player_Event.EventTriggerPlayerSetBattleMode({'frame': 60.0})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void ForestTemple_Room04_OpenDoor_AppearTBox() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 3, 'WithPlayableEvent': True, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    GameSystemActor.EventStopPostBattlePresentation()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveTotargetPosType': 1, 'MoveTime': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'Actor2InstanceName': 'PL_Point01', 'CameraCollisionMode': 0, 'Actor1InstanceName': 'room06_camPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'PL_Point01'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor2InstanceName': 'TBox', 'CameraCollisionMode': 0, 'Actor1InstanceName': 'room06_camPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call DodongoCavern_FocusOnGimmick.TBox_Avoid_temp({'CloseDistance': 1.0, 'TBoxName': 'TBox', 'PlayerDestination': 'room06_avoidPos01', 'isNeedSE': True, 'isByNormalBool': False, 'isByExt1Bool': True, 'isStepBackAvoid': False, 'WaitBeforeAct': -1, 'WaitAfterAct': -1})

}

void ForestTemple_Room11_ElevatorStart() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'Direction': 0.0, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PL_Point01', 'WorldPos': [0.0, 0.0, 0.0], 'KeepTalkWait': False, 'PosOffset': [0.0, -4.0, 0.0], 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'IsDoNavi': False})
        } {

            call NaviEventCommon.Navi_ActorWatch({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PL_Point01'})

        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 107})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'Direction': 0.0, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PL_Point01', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, -4.0, 0.0]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtSurprise', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtSurprise', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'Direction': 0.0, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PL_Point01', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})

        fork {
            EventCamera.EventTriggerRequestCameraShake({'Power': 0.20000000298023224, 'Pattern': 2, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_DoDon'})
        }

    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room11_camPos01'}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 5.0, 'AtVector': [0.0, 0.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'MoveTime': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room11_camPos01', 'Actor2InstanceName': 'room11_atPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Event9:
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 60, 'CameraCollisionMode': 0, 'Actor1InstanceName': 'room11_camPos01', 'Actor2InstanceName': 'room11_atPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            goto Event9
        }
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void ForestTemple_Room12_WaterLevelDrop() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !Enemy_Bubble_Blue[BlueBubble_00].EventQueryDeathIsDead() {

        call ForestTemple_Room12_WaterLevelDrop0_01()

        Enemy_Bubble_Blue[BlueBubble_00].EventExecuteEnemyBubbleBlueForceWait({'IsWaitEnd': False})
        Event313:

        fork {

            call ChangeCamera_ForestTemple_Room12_WaterLevelDrop_Changed()

        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 170})
            Player_Event.EventPlayerMoveToAnchor({'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'IsInertiaMove': False, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'PlayerPos', 'IsWaitEnd': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'FinishASCommand': 'EvtCaution', 'ApplySlowMove': False, 'MoveSpeed': 0.5, 'DecSpeedDistance': 1.75})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PL_Point01', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        } {
            Dm_Locator[1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'Position': [-31.0, 98.5, -41.0]})
            Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'ForestTemple_Gimmick_WaterLevelDrop'})
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Bubble', 'IsIgnoreDucking': False})
        }

        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'FovySetType': 1, 'TargetFovy': 0.0, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'room08_camPos01', 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 60, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'PosVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'Actor2InstanceName': 'room08_atPos01_fixed', 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

        }

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        Enemy_Bubble_Blue[BlueBubble_00].EventTriggerDeathSignal()

        call ForestTemple_Room12_WaterLevelDrop0_01()

        goto Event313
    }
}

void ForestTemple_Room02_ShutterOpen() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtCaution', 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PL_Point01', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'room02_fence_camPos01', 'Actor2InstanceName': 'room02_fence_camAt01', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 5.0, 'AtVector': [0.0, 0.0, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': True, 'Power': 0.20000000298023224})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    if Player_Event.EventQueryIsDirToTarget({'Target': 5, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'InstanceName': 'room02_judgePos01', 'AngleThreshold': 30.0}) {
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': 'PL_Point01', 'IsWaitEnd': False, 'IsDoNavi': True})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void ForestTemple_Room17_TwoStalfosAppear() {

    call Room17_TwoStalfosAppear_Changed()

}

void ForestTemple_Room17_BigTBoxAppear() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 3, 'WithPlayableEvent': True, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    GameSystemActor.EventStopPostBattlePresentation()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventPlayerWait({'IsWaitEnd': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room06_camPosForTBox'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 5.0, 'AtVector': [0.0, 0.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'MoveTime': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room06_camPosForTBox', 'Actor2InstanceName': 'TBox', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event441:

        call DodongoCavern_FocusOnGimmick.TBox_Avoid_temp({'CloseDistance': 1.0, 'TBoxName': 'TBox', 'PlayerDestination': 'room06_avoidPos02', 'isNeedSE': True, 'isByNormalBool': True, 'isByExt1Bool': False, 'isStepBackAvoid': False, 'WaitBeforeAct': -1, 'WaitAfterAct': -1})

        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor2InstanceName': 'TBox', 'CameraCollisionMode': 0, 'Actor1InstanceName': 'room06_camPosForTBox', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event441
    }
}

void ForestTemple_Room17_ShutterOpen() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room06_camPos_forEye'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'Actor1InstanceName': 'room06_camPos_forEye', 'Actor2InstanceName': 'room06_atPos_forEye', 'MoveTime': 1, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event515:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': 'room06_look_forEye', 'IsDoNavi': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'Actor1InstanceName': 'room06_camPos_forEye', 'Actor2InstanceName': 'room06_atPos_forEye', 'MoveTime': 60, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event515
    }
}

void ForestTemple_Room17_TBoxAppear_CandleLight() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room12_camPos01'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 5.0, 'AtVector': [0.0, 0.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'MoveTime': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room12_camPos01', 'Actor2InstanceName': 'room12_camAt01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event396:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'room12_lookAt01'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})

        call DodongoCavern_FocusOnGimmick.TBox_Avoid_temp({'TBoxName': 'TBox', 'isNeedSE': True, 'isByNormalBool': False, 'isByExt1Bool': True, 'isStepBackAvoid': True, 'PlayerDestination': 'room12_avoidPos01', 'CloseDistance': 1.0, 'WaitBeforeAct': -1, 'WaitAfterAct': -1})

        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'PosVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room12_camPos01', 'Actor2InstanceName': 'room12_camAt01', 'MoveTime': 60, 'AtVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event396
    }
}

void ForestTemple_Room17_TBoxAppear_CandleLight_ShutterOpen() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerSetBattleMode({'frame': 15.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtLookAroundAttention', 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
    GameSystemActor.EventTriggerAddPreComputedCullingBasePosByAnker({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'cull'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

    call Change_forFB()

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'MoveTime': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room13_camPos02', 'Actor2InstanceName': 'room13_camAt02', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'room13_lookAt01'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})

    call DodongoCavern_FocusOnGimmick.TBox_Avoid_temp({'CloseDistance': 1.0, 'TBoxName': 'TBox', 'PlayerDestination': 'room13_avoidPos01', 'isNeedSE': True, 'isByNormalBool': False, 'isByExt1Bool': True, 'isStepBackAvoid': False, 'WaitBeforeAct': -1, 'WaitAfterAct': -1})

    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void ForestTemple_Room11_TBoxAppear() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'distCheck_center', 'CheckDistance': 8.0}) {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBox', 'CheckDistance': 2.0}) {

            fork {
                Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtCaution', 'Position': [-52.84000015258789, 115.0, 2.630000114440918], 'YAngle': 0.0, 'ClothWarpMode': 0, 'EnableInAir': False})
            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveTotargetPosType': 1, 'MoveTime': 1, 'Actor1InstanceName': 'room11_camPos02', 'Actor2InstanceName': 'room11_camAt02', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            }

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Event347:

            fork {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
            } {
                EventRequestActor.EventTriggerSetEventBool({'Bool': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                GameSystemActor[vibration].EventTriggerControllerRumble({'RumbleCall': 'Demo_Small', 'Length': 0.0})
            }

        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'room11_camPos01', 'Actor2InstanceName': 'TBox', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'PosVectorSetType': 1, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 1.5, 0.0], 'MoveTime': 60, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            goto Event347
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'CameraCollisionMode': 0, 'Actor1InstanceName': 'room11_camPos02', 'Actor2InstanceName': 'room11_camAt02', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        goto Event347
    }
}

void ForestTemple_Room11_RoomSpin() {

    call Common.AirStartUp()


    fork {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
    } {
        Npc_Navi.EventTriggerParticipateEvent()
    }

    SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'Spin_Room11'})
    EventSystemActor.EventTransition({'EventName': 'Dm_ForestTemple_0005', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void ForestTemple_Room21_ShutterOpen() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call FocusOnGimmick.SwitchActivation()


    call FocusOnGimmick.NewBasicFocus_FullyCustomizable({'AnchorName_01': 'PL_Point01', 'OriginActor_IfClose': 'Player_Event', 'WaitBeforeSE': 60, 'IgnoreOriginRotation': False, 'WaitBeforeCamera': 15, 'CameraOffSet_IfObstacle': [0.0, 2.0, -2.0], 'FocusOffset_IfClose': [0.0, 0.0, 0.0], 'CameraPosOffset': [0.0, 0.0, 13.0], 'FocusOffSet_IfObstacle': [0.0, 0.0, -14.0], 'CameraPosOffset_IfClose': [-1.0, 2.0, -5.0], 'CameraDistanceFromAnchor': 5.0, 'CloseDistance': 8.0})

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void ForestTemple_Room22_ShutterOpen_TBoxAppear() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveTotargetPosType': 1, 'MoveTime': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room18_camPos01', 'Actor2InstanceName': 'PL_Point01', 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'PL_Point01'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room18_camPos01', 'MoveTime': 60, 'Actor2InstanceName': 'TBox', 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call DodongoCavern_FocusOnGimmick.TBox_Avoid_temp({'CloseDistance': 1.0, 'TBoxName': 'TBox', 'PlayerDestination': 'room18_avoidPos01', 'isNeedSE': True, 'isByNormalBool': False, 'isByExt1Bool': True, 'isStepBackAvoid': False, 'WaitBeforeAct': -1, 'WaitAfterAct': -1})

}

void ForestTemple_Room22_IceMelts() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'Actor1InstanceName': 'room26_camPos01', 'Actor2InstanceName': 'room26_camPos01', 'AtVector': [0.0, 0.0, -2.0], 'MoveTime': 25, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 210})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void ForestTemple_Room22_RoomSpin() {

    call Common.AirStartUp()


    fork {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
    } {
        Npc_Navi.EventTriggerParticipateEvent()
    } {
        Enemy_Bubble_Green[Bubble_Green_ForestTemple_1].EventTriggerEnemyReset()
    } {
        Enemy_Bubble_Green[Bubble_Green_ForestTemple_2].EventTriggerEnemyReset()
    }

    SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'Spin_Room22'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_ForestTemple_0007'})
}

void ForestTemple_Room22_FallingCeiling() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'TargetOffset': [0.0, 0.0, 0.0], 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'MoveTime': 60, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 60.0, 'TargetActorInstanceName': 'PL_Point01'})
    } {
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PL_Point01', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False, 'Pattern': 1, 'Power': 0.10000000149011612})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 115})
    }

    EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False, 'Power': 0.4000000059604645, 'Pattern': 2})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Introduction_FallingCeiling'})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 30})
}

void ForestTemple_Room22_ShutterOpen() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PL_Point01', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 5.0, 'AtVector': [0.0, 0.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor2InstanceName': 'PL_Point01', 'Actor1InstanceName': 'PL_Point01', 'PosVector': [0.0, 1.0, 6.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 6.0], 'CameraCollisionMode': 0, 'MoveTime': 120, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PL_Point01', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'IsDoNavi': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void ForestTemple_Room25_CandleLight_ShutterOpen() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'DestinationAnchor', 'ActorInstanceName': 'room16_camPos01', 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0]}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 5.0, 'AtVector': [0.0, 0.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor2InstanceName': 'PL_Point01', 'Actor1InstanceName': 'room16_camPos01', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'MoveTime': 1, 'PosVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event366:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'room16_lookAt01'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': 'PL_Point01', 'IsDoNavi': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor2InstanceName': 'PL_Point01', 'Actor1InstanceName': 'room16_camPos01', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 90, 'LookAtDis': -1.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'PosVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event366
    }
}

void ForestTemple_Room27_CandleLight() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call FocusOnGimmick.SwitchActivation()

    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'ForestTemple_SageOfForest_PivotedFloor_A_01', 'Value': 3, 'Index': -1}) {
      case 0:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 5.0, 'AtVector': [0.0, 0.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor2InstanceName': 'PL_Point01', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'MoveTime': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'camPosForTorch_01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        Event467:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [-15.907999992370605, 60.79999923706055, -19.600000381469727], 'ASCommand': 'EvtWait', 'YAngle': 45.0, 'ClothWarpMode': 0, 'EnableInAir': False})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 5.0, 'AtVector': [0.0, 0.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'PosVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'camPos_forBack', 'Actor2InstanceName': 'atPos_forBack', 'MoveTime': 120, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
      case 1:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 5.0, 'AtVector': [0.0, 0.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'MoveTime': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'camPosForTorch_03', 'Actor2InstanceName': 'PL_Point03', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event467
      case 2:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 5.0, 'AtVector': [0.0, 0.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'MoveTime': 1, 'Actor1InstanceName': 'camPosForTorch_05', 'Actor2InstanceName': 'PL_Point05', 'PosVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event467
    }
}

void ForestTemple_Room27_IceMelts() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'AtVector': [0.0, 0.0, -2.0], 'MoveTime': 1, 'Actor1InstanceName': 'room17_camPos_forMelt', 'Actor2InstanceName': 'room17_camPos_forMelt', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 210})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
}

void ForestTemple_Room27_ShutterOpen() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room17_camPos_forBossDoor'}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 5.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'MoveTime': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room17_camPos_forBossDoor', 'Actor2InstanceName': 'room17_camPos_forBossDoor', 'AtVector': [0.0, 0.0, -2.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event491:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': 'PL_Point01', 'IsWaitEnd': False, 'IsDoNavi': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'PosVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room17_camPos_forBossDoor', 'Actor2InstanceName': 'room17_camPos_forBossDoor', 'AtVector': [0.0, 0.0, -1.0], 'EnableCameraAlpha': True, 'MoveTime': 60, 'IsEnableRevertFast': False})
        goto Event491
    }
}

void TreasureBoxDM_NaviChat_ForestTemple_BossKey() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_Treasurebox'})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 361})
}

void Room17_TwoStalfosAppear_Changed() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    fork {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'InstanceNameB': 'judge_NE', 'CheckDistance': 8.0}) {
            Event590:
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'judge_NE', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 15.0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 9.800000190734863, 'TargetOffset': [0.0, 0.5, -11.312999725341797]})
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'judge_NE', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 15.0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 6.5, 'StartAccelerateRate': 1.0, 'MoveTime': 90, 'TargetOffset': [0.0, 0.5, -11.312999725341797]})
            Event598:
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'InstanceNameB': 'judge_SE', 'CheckDistance': 8.0}) {
            Event592:
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 15.0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 9.800000190734863, 'TargetActorInstanceName': 'judge_SE', 'TargetOffset': [0.0, 0.5, -11.312999725341797]})
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 15.0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 6.5, 'StartAccelerateRate': 1.0, 'MoveTime': 90, 'TargetActorInstanceName': 'judge_SE', 'TargetOffset': [0.0, 0.5, -11.312999725341797]})
            goto Event598
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'InstanceNameB': 'judge_SW', 'CheckDistance': 8.0}) {
            Event594:
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 15.0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 9.800000190734863, 'TargetActorInstanceName': 'judge_SW', 'TargetOffset': [0.0, 0.5, -11.312999725341797]})
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 15.0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 6.5, 'StartAccelerateRate': 1.0, 'MoveTime': 90, 'TargetActorInstanceName': 'judge_SW', 'TargetOffset': [0.0, 0.5, -11.312999725341797]})
            goto Event598
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'InstanceNameB': 'judge_NW', 'CheckDistance': 8.0}) {
            Event596:
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 15.0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 9.800000190734863, 'TargetActorInstanceName': 'judge_NW', 'TargetOffset': [0.0, 0.5, -11.312999725341797]})
            EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 15.0, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IdealDistance': 6.5, 'StartAccelerateRate': 1.0, 'MoveTime': 90, 'TargetActorInstanceName': 'judge_NW', 'TargetOffset': [0.0, 0.5, -11.312999725341797]})
            goto Event598
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'InstanceNameB': 'judge_NE', 'CheckDistance': 11.5}) {
            goto Event590
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'InstanceNameB': 'judge_SE', 'CheckDistance': 11.5}) {
            goto Event592
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'InstanceNameB': 'judge_SW', 'CheckDistance': 11.5}) {
            goto Event594
        } else
        if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Player_Event', 'InstanceNameB': 'judge_NW', 'CheckDistance': 11.5}) in [0, 1] {
            goto Event596
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'room06_StalfosCenter', 'IsAnchorActorB': True, 'CheckDistance': 2.0999999046325684, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsWaitEnd': True, 'InstanceName': 'room06_stalfosD', 'IsDoNavi': True})
        } else {
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsWaitEnd': True, 'InstanceName': 'room06_StalfosCenter', 'IsDoNavi': True})
        }
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    }

}

void ChangeCamera_ForestTemple_Room12_WaterLevelDrop_Changed() {

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'room08_atPos01', 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'Actor1InstanceName': 'room08_camPos02', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'room08_atPos01', 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'Actor1InstanceName': 'room08_camPos03', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 165})
}

void Change_forFB() {
    EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'MoveTime': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'Actor1InstanceName': 'room13_camPos98', 'Actor2InstanceName': 'room13_atPos99', 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'Actor2InstanceName': 'room13_atPos99', 'Actor1InstanceName': 'room13_camPos99', 'MoveTime': 60, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void ForestTemple_Room25_FirstTimeBlock() {

    call FirstTimeBlock({'CameraOffset': [-1.5, 0.0, 3.0], 'CameraOffset_Right': [1.5, 0.0, 3.0], 'WatchOffset': [0.0, 1.5, 0.0]})

}

void FirstTimeBlock() {
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ForestTemple_IsLeftOfTimeBLock', 'Index': -1}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'AtVector': [0.0, 0.0, -1.0], 'EnableCameraAlpha': True, 'MoveTime': 60, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'PosVector': 'CameraOffset', 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'AtVector': [0.0, 0.0, -1.0], 'EnableCameraAlpha': True, 'MoveTime': 60, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'PosVector': 'CameraOffset_Right', 'IsEnableRevertFast': False})
        }
    } {
        Npc_Navi.EventNaviMovePosTalkToPlayer({'IsWaitEnd': True, 'IncSpeedDistance': 2.0, 'DecSpeedDistance': 2.0, 'MoveSpeed': 20.0, 'MinimumSpeed': 6.0, 'ASCommand': 'EvtTalk', 'DistPassThrough': 0.0, 'IsTurnLooking': True, 'IsUseDisguiseSpeakerPos': False})
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Obj_SongOfTimeBlock_A_01', 'InstanceName': ''})
    } {
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsWaitEnd': True, 'SlowTurn': True, 'Target': 3, 'ActorName': 'Obj_SongOfTimeBlock_A_01', 'PosOffset': 'WatchOffset', 'IsDoNavi': False})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ForestTemple_SageOfForest_HaveSearchedTimeBlock'}) {

        fork {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'InstanceName': '', 'Target': 2, 'ActorName': ''})
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/SageOfForest:NaviTalk_00'})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }

    } else {

        fork {
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'InstanceName': '', 'Target': 2, 'ActorName': ''})
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/SageOfForest:NaviTalk_01'})
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 30})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }

        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Obj_SongOfTimeBlock_A_01', 'InstanceName': ''})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/SageOfForest:NaviTalk_02'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ForestTemple_SageOfForest_HaveSearchedTimeBlock', 'Index': -1, 'Value': True})
    }
}

void SacredForest_FirstTimeBlock() {
    if !Player_Event.EventQueryPlayerIsChild() {

        call FirstTimeBlock({'CameraOffset': [-1.5, -0.5, 3.0], 'WatchOffset': [-1.5, 1.5, 0.0], 'CameraOffset_Right': [1.5, -0.5, 3.0]})

    } else {

        call FirstTimeBlock({'CameraOffset': [-1.5, 0.0, 3.0], 'WatchOffset': [-1.5, 1.5, 0.0], 'CameraOffset_Right': [1.5, 0.0, 3.0]})

    }
}

void ForestTemple_Room12_WaterLevelDrop0_01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
}
