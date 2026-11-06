-------- EventFlow: FireTemple_Gimmick --------

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventTriggerStopInGameBgm', 'EventTriggerSoundStartBossBgm', 'EventTriggerStartInGameBgm', 'EventTriggerForbidEmitIfOutsideView', 'EventTriggerCancelForbidEmitIfOutsideView']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventBasedOnLookAtCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerRequestCameraShake']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget', 'EventQueryCameraCheckRayCastForBasedOnLookAt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerSetBattleMode']
queries: ['EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayMiniMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_FlareDancer_FireBody
entrypoint: None()
actions: ['EventTriggerRequestPause', 'EventPlayAS', 'EventTriggerRequestCancelPause', 'EventTriggerSetWasAppearInEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_FlareDancer
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventTriggerRequestPause', 'EventTriggerSetWasAppearInEvent', 'EventTriggerRequestCancelPause']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventWaitUntilGameDataTrueWithTimeOut']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DoorShutter_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryDoorIsSuccessPlayerMove']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Obj_FireTemple_Lava_A_03
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Basic_FireTemple2() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room24_camPos01'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room24_camPos01', 'Actor2InstanceName': 'room24_atPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event388:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'room24_atPos01', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Gimmick_DefeatEnemy_Open_FireTemple_01', 'Index': -1, 'Value': True})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor2InstanceName': 'room24_atPos03', 'Actor1InstanceName': 'room24_camPos02', 'MoveTime': 60, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
            Obj_FireTemple_Lava_A_03.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Omen_Start'})
            EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'EftLoc_FireTemple_Lava_A_03', 'ELinkKeyName': 'FireTemple_Room24_FocusOnGimmick_FallDown_Fire_00', 'IsWaitEnd': False, 'InstanceName': ''})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 47})
            EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': True, 'Power': 1.0})
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtSurprise', 'ClothWarpMode': 0})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'InstanceName': 'room24_atPos03', 'KeepTalkWait': False, 'IsDoNavi': True, 'SlowTurn': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room24_camPos01', 'Actor2InstanceName': 'room24_atPos01', 'MoveTime': 90, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event388
    }
}

void LockedMoveToPlusZ_FocusFlareDancer() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Enemy_MiddleBoss_FlareDancer.EventWarpToHomeMatrix({'IsWaitEnd': True})
    Enemy_MiddleBoss_FlareDancer.EventTriggerRequestPause()
    Enemy_MiddleBoss_FlareDancer_FireBody.EventTriggerRequestPause()
    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})

    call Common_Dungeon_OpenShutterMove.LockedMoveToPlusZ_EnemyFocus({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraAnchorName': 'CameraAnchorName'})

    SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'TargetActorInstanceName': '', 'TargetOffset': [0.0, 1.5, -0.5], 'ToleranceXZAngle': 0.0, 'IdealDistance': 7.0})

    fork {
        SoundSystemActor.EventTriggerSoundStartBossBgm({'BgmName': 'BGM_MiddleBoss'})
        Enemy_MiddleBoss_FlareDancer_FireBody.EventTriggerRequestCancelPause()
        Enemy_MiddleBoss_FlareDancer_FireBody.EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'MaterialAnim_Red', 'Partial': 'MaterialAnim', 'IsWaitEnd': False})
        Enemy_MiddleBoss_FlareDancer_FireBody.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'Appear'})
        Enemy_MiddleBoss_FlareDancer_FireBody.EventTriggerSetWasAppearInEvent()
    } {
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'MoveTime': 30, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'EndRecelerateRate': 0.5, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'IdealDistance': 5.0, 'TargetActorInstanceName': '', 'TargetOffset': [0.0, 1.5, -0.5], 'ToleranceXZAngle': 0.0})
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'StartAccelerateRate': 0.5, 'MoveTime': 60, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'IdealDistance': 4.5, 'TargetActorInstanceName': '', 'ToleranceXZAngle': 0.0, 'TargetOffset': [0.0, 1.5, -0.5]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'MoveTime': 60, 'AtVector': [0.0, -0.5, 0.0], 'PosVector': [0.0, 1.7999999523162842, -1.600000023841858], 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    Enemy_MiddleBoss_FlareDancer.EventTriggerRequestCancelPause()
    Enemy_MiddleBoss_FlareDancer.EventTriggerSetWasAppearInEvent()
}

void LockedMoveToPlusZ_FocusFlareDancer_02() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Enemy_MiddleBoss_FlareDancer.EventWarpToHomeMatrix({'IsWaitEnd': True})
    Enemy_MiddleBoss_FlareDancer.EventTriggerRequestPause()
    Enemy_MiddleBoss_FlareDancer_FireBody.EventTriggerRequestPause()

    call Common_Dungeon_OpenShutterMove.UnlockMoveTo_ThenLocked_FD({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'MoveAnchorInstanceName': 'OpenShutterMovePosMinusZ', 'CameraTargetAnchorInstanceName': 'CameraAnchorName'})

    Event575:
    if !DoorShutter_EventStarter.EventQueryDoorIsSuccessPlayerMove() {
        UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'TargetActorInstanceName': '', 'TargetOffset': [0.0, 1.5, -0.5], 'ToleranceXZAngle': 0.0, 'IdealDistance': 8.5})

        fork {
            SoundSystemActor.EventTriggerSoundStartBossBgm({'BgmName': 'BGM_MiddleBoss'})
            Enemy_MiddleBoss_FlareDancer_FireBody.EventTriggerRequestCancelPause()
            Enemy_MiddleBoss_FlareDancer_FireBody.EventPlayAS({'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'MaterialAnim_Red', 'Partial': 'MaterialAnim', 'IsWaitEnd': False})
            Enemy_MiddleBoss_FlareDancer_FireBody.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'Appear'})
            Enemy_MiddleBoss_FlareDancer_FireBody.EventTriggerSetWasAppearInEvent()
        } {
            EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'MoveTime': 30, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'EndRecelerateRate': 0.5, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'IdealDistance': 5.0, 'TargetActorInstanceName': '', 'TargetOffset': [0.0, 1.5, -0.5], 'ToleranceXZAngle': 0.0})
            EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'StartAccelerateRate': 0.5, 'MoveTime': 60, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'IdealDistance': 4.5, 'TargetActorInstanceName': '', 'ToleranceXZAngle': 0.0, 'TargetOffset': [0.0, 1.5, -0.5]})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'MoveTime': 60, 'AtVector': [0.0, -0.5, 0.0], 'PosVector': [0.0, 1.7999999523162842, -1.600000023841858], 'Actor2InstanceName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        Enemy_MiddleBoss_FlareDancer.EventTriggerRequestCancelPause()
        Enemy_MiddleBoss_FlareDancer.EventTriggerSetWasAppearInEvent()
    } else {
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
        Enemy_MiddleBoss_FlareDancer_FireBody.EventTriggerRequestCancelPause()
        Enemy_MiddleBoss_FlareDancer.EventTriggerRequestCancelPause()
    }
}

void AfterFlareDancerDeath() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'ActorInstanceName': 'room03_camPos01', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0]}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor1InstanceName': 'room03_camPos01', 'Actor2InstanceName': 'room03_atPos01', 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event356:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Gimmick_DeleteFire_FireTemple', 'Value': True, 'Index': -1})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'OffsetBase': 1, 'InstanceName': 'TBox', 'UseNormalTurn': False, 'IsDoNavi': True, 'SlowTurn': True})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            GameSystemActor[vibration].EventTriggerControllerRumble({'RumbleCall': 'Demo_Small', 'Length': 0.0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor1InstanceName': 'room03_camPos01', 'Actor2InstanceName': 'room03_atPos01', 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 90, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event356
    }
}

void FireTemple_MovingFireWallCamera_Room16() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerCameraSavePoint()
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 2, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room16_camPos01'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room16_camPos01', 'Actor2InstanceName': 'room16_atPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Event507:
        if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'InstanceName': 'room16_dirJudge01', 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'AngleThreshold': 60.0})
        && !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'InstanceName': 'room16_dirJudge02', 'AngleThreshold': 60.0}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

            fork {
                Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTurnAroundSurprise', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'IsWaitEnd': False})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            }

            Event510:
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 1, 'IsRestoreDoF': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'KeepManualModeFrame': 120.0, 'ChangeToManualModeAfterEvent': False, 'IsKeepWithRelativePos': False})
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 32})
        } else {

            fork {
                Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'KeepTalkWait': False, 'OffsetBase': 1, 'UseNormalTurn': False, 'InstanceName': 'room16_lookPos01', 'UpperASCommand': '', 'IsDoNavi': False})

                fork {
                    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution'})
                } {
                    Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                }

            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            }

            goto Event510
        }
    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room16_camPos01', 'Actor2InstanceName': 'room16_atPos01', 'MoveTime': 60, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        }

        goto Event507
    }
}

void Basic_MultipleAnchor_FireTemple() {

    call Common.AirStartUp()

    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'IdealDistance': 7.5, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceYUpwardAngle': 5.0, 'ToleranceDistance': 0.0, 'MoveTime': 30, 'TargetActorInstanceName': 'Point1', 'IsLinearMove': False})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'IdealDistance': 7.5, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceYUpwardAngle': 5.0, 'ToleranceDistance': 0.0, 'MoveTime': 30, 'TargetActorInstanceName': 'PointEnd', 'IsLinearMove': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
}

void FireTemple_06_EyeSwitch() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'DestinationAnchor', 'TargetActorInstanceName': 'room06_atPos_forEye', 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'IdealDistance': 8.0, 'ToleranceYUpwardAngle': 0.0, 'ToleranceXZAngle': 30.0, 'ToleranceYDownwardAngle': 0.0, 'LookAtVectorY': 1, 'ToleranceDistance': 2.0}) {
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'room06_atPos_forEye', 'CameraCollisionMode': 0, 'MoveTime': 1, 'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IdealDistance': 8.0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 8.0], 'ToleranceYUpwardAngle': 0.0, 'ToleranceXZAngle': 30.0, 'ToleranceYDownwardAngle': 0.0, 'LookAtVectorY': 1, 'ToleranceDistance': 2.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Event178:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'InstanceName': 'room06_lookPos_forEye', 'KeepTalkWait': False, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'Target': 5, 'UseNormalTurn': False, 'IsDoNavi': True})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'room06_atPos_forEye', 'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'IdealDistance': 8.0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 8.0], 'ToleranceYUpwardAngle': 0.0, 'ToleranceXZAngle': 30.0, 'ToleranceYDownwardAngle': 0.0, 'LookAtVectorY': 1, 'ToleranceDistance': 2.0, 'MoveTime': 60})
        goto Event178
    }
}

void FireTemple_15_OpenShutter() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room15_camPos01'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room15_camPos01', 'Actor2InstanceName': 'room15_atPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event465:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'KeepTalkWait': False, 'InstanceName': 'room15_lookPos01', 'IsDoNavi': True})
        }

        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room15_camPos01', 'Actor2InstanceName': 'room15_atPos01', 'MoveTime': 90, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event465
    }
}

void FireTemple_SwitchFireCamera_Room04() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room04_camPos01'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room04_camPos01', 'Actor2InstanceName': 'room04_atPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event332:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FireTemple_Room04_FurtherFireOn'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'FireTemple_Room04_CloserFireOn'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'KeepTalkWait': False, 'OffsetBase': 1, 'InstanceName': 'room04_lookPos01', 'UseNormalTurn': False, 'IsDoNavi': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        } else
        if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'InstanceNameB': 'room04_switchCenter', 'CheckDistance': 2.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 2.0})
        }
    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'InstanceNameB': 'room04_switchCenter', 'CheckDistance': 2.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room04_camPos01', 'Actor2InstanceName': 'room04_atPos01', 'MoveTime': 60, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room04_camPos01', 'Actor2InstanceName': 'room04_atPos01', 'MoveTime': 120, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }
    goto Event332
}

void FireTemple_SwitchFireCamera_Room12() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerCameraSavePoint()
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'room12_camPos02'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'Actor1InstanceName': 'room12_camPos02', 'Actor2InstanceName': 'room12_atPos02', 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FireTemple_Room12_FurtherFireOn'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'FireTemple_Room12_CloserFireOn'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Event341:
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
        } else
        if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'EventCamera', 'InstanceNameB': '', 'IsAnchorActorB': False, 'CheckDistance': 4.0}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 2.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room12_camPos02', 'Actor2InstanceName': 'room12_atPos02', 'EnableCameraAlpha': True, 'MoveTime': 90, 'IsEnableRevertFast': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FireTemple_Room12_FurtherFireOn'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'FireTemple_Room12_CloserFireOn'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'KeepTalkWait': False, 'OffsetBase': 1, 'InstanceName': 'room12_lookPos01', 'UseNormalTurn': False, 'IsDoNavi': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        goto Event341
    }
}

void FireTemple_LargePillarFallCamera() {

    call Common.AirStartUp()

    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False, 'Power': 1.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtLookAroundAttentionUnder', 'KeepOneTimeAnm': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 57.0, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 1, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': 'Obj_FireTemple_HammerDropPillar_A_01', 'Actor2InstanceName': 'HammerDropPillar', 'MoveTime': 30, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'FollowCameraC1', 'PosVector': [0.0, 1.0, -2.0], 'PosVectorSetType': 3, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 57.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'PillarFallCameraPoint', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'CameraCollisionMode': 0, 'Actor2ActorName': 'Obj_FireTemple_HammerDropPillar_A_01', 'Actor2InstanceName': 'HammerDropPillar', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False, 'MoveTime': 0})
    GameDataActor.EventWaitUntilGameDataTrueWithTimeOut({'GameDataName': 'AutogenGameDataLogicNode.15744991116824525035-1232849570', 'IsWaitEnd': True, 'Index': -1, 'TimeOutFrame': 200})

    fork {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'IsRumbleController': True, 'Pattern': 2, 'LoopEndCount': 1, 'Power': 1.0})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ClothWarpMode': 0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtUnbalance'})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtCaution', 'ForceFadeFrame': 15.0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerSetBattleMode({'frame': 60.0})
}

void FireTemple_PutOutFireWallTrap() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'ActorInstanceName': 'room10_camPos01', 'VectorSetType': 2, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0]}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 1, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'room10_camPos01', 'Actor2InstanceName': 'room10_atPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'PosVectorSetType': 3, 'PosVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 90, 'Actor1InstanceName': 'room10_camPos01', 'Actor2InstanceName': 'room10_atPos01', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtLookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'KeepTalkWait': False, 'OffsetBase': 1, 'UseNormalTurn': False, 'InstanceName': 'room10_lookPos01', 'IsDoNavi': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FireTemple_FlameWallGimmick_Clear'}) {
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Event381:
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'FireTemple_Room10_StepSwitchOnLink'})
        goto Event381
    }
}

void DeathMountainCrater_SecretHole_AppearTreasureBox() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Defeat_Ganon.GimmickTreasureBox_Changed({'CamPosName': 'hole25_camPos01', 'AtPosName': 'hole25_atPos01', 'AvoidPosName': 'hole25_avoidPos01'})

}

void LockedMoveToPlusZ_FocusFlareDancer_02_B() {

    call Common_Dungeon_OpenShutterMove.LockedMoveToPlusZ_EnemyFocus({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraAnchorName': 'CameraAnchorName'})

    goto Event575
}
