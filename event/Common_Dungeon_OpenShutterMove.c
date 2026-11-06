-------- EventFlow: Common_Dungeon_OpenShutterMove --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent', 'EventPlayerMove', 'EventTriggerPlayerEventStartWithCarry', 'EventPlayerTurnAndLookNow', 'EventPlayerTurnAndLook', 'EventPlayerShutterMove', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerSetBattleMode']
queries: ['EventQueryPlayerIsKeepLiftableDoorMove', 'EventQueryPlayerIsChild', 'EventQueryCheckPlayerState', 'EventQueryPlayerIsEquipWeapon', 'EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera', 'EventTriggerRequestCameraShake', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventChasePlayerCameraForDoor', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayMiniMap', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DoorShutter_EventStarter
entrypoint: None()
actions: ['EventDoorOpen', 'EventDoorClose', 'EventDoorUnlockChain', 'EventDoorCreateToken', 'EventTriggerDoorClose']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Enemy_Wolfos_White[First]
entrypoint: None()
actions: ['EventWarpToHomeMatrix', 'EventPlayAS', 'EventTriggerRequestPause', 'EventTriggerRequestCancelPause', 'EventTriggerSetWasAppearInEvent', 'EventAppearFade']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRemoveProjectiles']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartBossBgm', 'EventTriggerStopInGameBgm', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_Deku
entrypoint: None()
actions: ['EventScrubDekuFirstEncounterLookAround']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_Deku_Leaf
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerNaviWarpToPlayerHomePosition', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetRenderingCenterPosFromCameraPosFC', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Floormaster
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void MoveToPlusZ() {

    call PreMoveCommon()


    call MoveTo({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'PostOpenPos': 'PostOpenPos'})

}

void LockedMoveToPlusZ() {

    call PreMoveCommon()


    call LockedMoveTo({'MoveAnchorInstanceName': 'OpenShutterMovePosPlusZ', 'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraTargetAnchorInstanceName': 'CameraAnchorName', 'PlayerReaction': 'EvtTurnAroundSurpriseCaution'})

}

void MoveTo() {

    call DoorCamera({'ChildVerticalAngle': 5.0, 'AdultVerticalAngle': 12.0, 'AdultOffset': [0.0, 1.600000023841858, 0.0], 'ChildSpeed': 80, 'AdultSpeed': 80, 'ChildOffset': [0.0, 1.3600000143051147, 0.0], 'ChildDistance': 2.4000000953674316, 'AdultDistance': 2.4000000953674316})


    fork {
        if !Player_Event.EventQueryCheckPlayerState({'State': 12}) {

            call PlaceHand_and_Open({'LastPos': 'LastPos', 'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'LastPos'})

        } else {

            call Open({'LastPos': 'LastPos', 'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'LastPos', 'CamDist': 2.0})

        }
    } {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'IsHomePosition': True, 'IsNearOffset': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1})
    }

}

void LockedMoveTo() {

    call LockedMoveTo_Sub({'OpenAnim': 'EvtDoorShutter', 'MoveAnchorInstanceName': 'MoveAnchorInstanceName', 'CameraTargetAnchorInstanceName': 'CameraTargetAnchorInstanceName', 'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'PostOpenPos': 'LastPos', 'PlayerReaction': 'PlayerReaction', 'WaitAfterDoorShut': 6, 'useDefaultViewPoint': True})

    if !Player_Event.EventQueryCheckPlayerState({'State': 12}) {
        if !Player_Event.EventQueryPlayerIsChild() {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'AtVector': [0.0, 0.0, 5.5], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [1.0, 0.0, 0.0], 'PosVector': [0.0, 1.4500000476837158, -2.0], 'EnableCameraAlpha': True, 'Actor2InstanceName': 'CameraTargetAnchorInstanceName', 'MoveTime': 45, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'AtVector': [0.0, 1.8200000524520874, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [1.0, 0.0, 0.0], 'PosVector': [0.0, 1.8300000429153442, -2.0], 'EnableCameraAlpha': True, 'Actor2InstanceName': 'CameraTargetAnchorInstanceName', 'MoveTime': 45, 'IsEnableRevertFast': False})
        }
        Event0:
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
    } else
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [1.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 4.5], 'PosVector': [0.0, 2.0, -2.0], 'EnableCameraAlpha': True, 'Actor2InstanceName': 'CameraTargetAnchorInstanceName', 'MoveTime': 45, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'AtVector': [0.0, 1.8200000524520874, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [1.0, 0.0, 0.0], 'PosVector': [0.0, 2.380000114440918, -2.0], 'EnableCameraAlpha': True, 'Actor2InstanceName': 'CameraTargetAnchorInstanceName', 'MoveTime': 45, 'IsEnableRevertFast': False})
    }
    goto Event0
}

void LockedMoveTo_EnemyFocus() {

    call LockedMoveTo_Sub({'OpenAnim': 'EvtDoorShutter', 'MoveAnchorInstanceName': 'MoveAnchorInstanceName', 'CameraTargetAnchorInstanceName': 'CameraTargetAnchorInstanceName', 'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'PostOpenPos': 'LastPos', 'PlayerReaction': 'PlayerReaction', 'WaitAfterDoorShut': 6, 'useDefaultViewPoint': True})

}

void LockedMoveToPlusZ_EnemyFocus() {

    call PreMoveCommon()


    call LockedMoveTo_EnemyFocus({'MoveAnchorInstanceName': 'OpenShutterMovePosPlusZ', 'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'CameraTargetAnchorInstanceName': 'CameraAnchorName', 'PlayerReaction': 'EvtTurnAroundSurpriseCaution'})

}

void LockedMoveTo_Sub() {
    EventCamera.EventTriggerCameraSavePoint()

    call DoorCamera({'ChildVerticalAngle': 5.0, 'ChildSpeed': 30, 'AdultSpeed': 30, 'ChildOffset': [0.0, 1.3600000143051147, 0.0], 'AdultVerticalAngle': 12.0, 'AdultOffset': [0.0, 1.600000023841858, 0.0], 'ChildDistance': 2.0, 'AdultDistance': 2.0})

    Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ClothWarpMode': 0, 'ASCommand': 'OpenAnim'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})
        DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 36})
        PostProcessingActor.EventNorifyCutChangeForGraphics()
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'useDefaultViewPoint'}) {
            EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'IdealDistance': 4.0, 'IsWaitEnd': False, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 22.0, 'ToleranceYDownwardAngle': 22.0, 'TargetOffset': [0.25, 1.600000023841858, 0.5], 'TargetActorInstanceName': 'CameraTargetAnchorInstanceName'})
        } else {
            EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'IsWaitEnd': False, 'TargetActorInstanceName': 'CameraTargetAnchorInstanceName', 'IdealDistance': 3.0, 'ToleranceYUpwardAngle': 16.0, 'ToleranceYDownwardAngle': 16.0, 'ToleranceXZAngle': 20.0, 'TargetOffset': [0.25, 1.2000000476837158, 0.5]})
        }
    }

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'useDefaultViewPoint'}) {

        call LockPlayer({'LastPos': 'LastPos', 'PlayerReaction': 'PlayerReaction', 'WaitAfterDoorShut': 'WaitAfterDoorShut', 'UseDefaultViewpoint': True})

    } else {

        call LockPlayer({'LastPos': 'LastPos', 'PlayerReaction': 'PlayerReaction', 'WaitAfterDoorShut': 'WaitAfterDoorShut', 'UseDefaultViewpoint': False})

    }
}

void LockedMoveToPlusZ_FocusWhiteWolfos() {
    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'FadeType': 1, 'WaitingResumeInGameBgm': False})
    Enemy_Wolfos_White[First].EventWarpToHomeMatrix({'IsWaitEnd': True})
    Enemy_Wolfos_White[First].EventTriggerRequestPause()

    call LockedMoveToPlusZ_EnemyFocus({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'CameraAnchorName': 'CameraAnchorName', 'PostOpenPos': 'LastPos'})

    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'TargetOffset': [0.0, 1.5, 0.5], 'TargetActorInstanceName': 'WhiteWolfos', 'IdealDistance': 8.5})

    fork {
        SoundSystemActor.EventTriggerSoundStartBossBgm({'BgmName': 'BGM_MiddleBoss'})
        Enemy_Wolfos_White[First].EventTriggerRequestCancelPause()
        Enemy_Wolfos_White[First].EventAppearFade({'IsWaitEnd': True, 'ASName': 'Appear'})
        Enemy_Wolfos_White[First].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Enemy_Wolfos_White[First].EventTriggerSetWasAppearInEvent()
    } {
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'MoveTime': 30, 'ToleranceXZAngle': 10.0, 'EndRecelerateRate': 0.5, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'TargetActorInstanceName': 'WhiteWolfos', 'IdealDistance': 3.0, 'ToleranceYUpwardAngle': 5.0, 'ToleranceYDownwardAngle': 5.0, 'TargetOffset': [-0.20000000298023224, 1.5, 0.5]})
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'ToleranceXZAngle': 10.0, 'StartAccelerateRate': 0.5, 'MoveTime': 60, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'TargetActorInstanceName': 'WhiteWolfos', 'IdealDistance': 2.5, 'ToleranceYUpwardAngle': 5.0, 'ToleranceYDownwardAngle': 5.0, 'TargetOffset': [-0.20000000298023224, 1.5, 0.5]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'Actor2InstanceName': 'WhiteWolfos', 'PosVector': [0.0, 2.0, -1.100000023841858], 'StartAccelerateRate': 0.0, 'MoveTime': 40, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'AtVector': [0.0, -1.0, 0.0], 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'Actor2InstanceName': 'WhiteWolfos', 'PosVector': [0.0, 2.0, -1.7000000476837158], 'MoveTime': 45, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'AtVector': [0.0, -1.0, 0.0], 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
    }

}

void PreMoveCommon() {
    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': True})
    Player_Event.EventTriggerParticipateEvent()
    if !Player_Event.EventQueryPlayerIsKeepLiftableDoorMove() {
        Player_Event.EventTriggerPlayerEventStartWithCarry()
    }
}

void LockedMoveToPlusZ_FocusStalfos() {

    call LockedMoveToPlusZ_EnemyFocus({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'CameraAnchorName': 'CameraAnchorName', 'PostOpenPos': 'LastPos'})

}

void LockedMoveToPlusZ_DarkLink() {

    call PreMoveCommon()

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    EventCamera.EventTriggerCameraSavePoint()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'MoveTime': 20, 'TargetActorInstanceName': 'DarkLinkRoomFocus', 'TargetActorName': 'DestinationAnchor', 'TargetOffset': [0.0, 0.0, 0.0], 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'IsWaitEnd': True, 'IdealDistance': 12.0})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtLookAroundAttention', 'ClothWarpMode': 0})
    EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': True, 'Power': 0.15000000596046448, 'Pattern': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
}

void UnlockMoveTo() {

    call DoorCamera({'ChildVerticalAngle': 5.0, 'ChildSpeed': 30, 'AdultSpeed': 30, 'ChildOffset': [0.0, 1.3600000143051147, 0.0], 'AdultOffset': [0.0, 1.8200000524520874, 0.0], 'AdultVerticalAngle': 12.0, 'AdultDistance': 1.5, 'ChildDistance': 1.399999976158142})

    Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'WorldPos': 'PreOpenPos', 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})

    fork {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'KeepTalkWait': False, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtDoorKey', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        DoorShutter_EventStarter.EventDoorUnlockChain({'IsWaitEnd': False})
    }

    DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 36})
        Player_Event.EventPlayerShutterMove({'IsWaitEnd': True, 'IsContinueMoveAnimeAfterFinish': True, 'TargetPos': 'LastPos'})
        DoorShutter_EventStarter.EventDoorClose({'IsWaitEnd': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
    } {

        call DoorCamera({'ChildVerticalAngle': 5.0, 'ChildSpeed': 30, 'AdultSpeed': 30, 'ChildOffset': [0.0, 1.2799999713897705, 0.0], 'AdultOffset': [0.0, 1.8200000524520874, 0.0], 'AdultDistance': 1.850000023841858, 'AdultVerticalAngle': 8.0, 'ChildDistance': 1.399999976158142})

    }

}

void UnlockGanonBossRoomMoveTo0() {
    Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})

    fork {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'KeepTalkWait': False, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtDoorBoss', 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        DoorShutter_EventStarter.EventDoorUnlockChain({'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    if !Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Biggoron', 'WeaponSlot': 0}) {
        Npc_Navi.EventTriggerNaviWarpToPlayerHomePosition({'IsNearOffset': False, 'Type': 2, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    } else {
        Npc_Navi.EventTriggerNaviWarpToPlayerHomePosition({'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    }

    fork {
        EventCamera.EventMoveToTargetPosCamera({'LookAtDis': 2.5, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Obj_InsideGanonCastle_SwitchShutter_A_03', 'PosVector': [2.0399999618530273, 0.17000000178813934, -7.139999866485596], 'AtVector': [1.4299999475479126, 0.9599999785423279, -5.300000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'LookAtDis': 2.5, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 400, 'Actor1ActorName': 'Obj_InsideGanonCastle_SwitchShutter_A_03', 'PosVector': [2.240000009536743, 0.17000000178813934, -8.319999694824219], 'AtVector': [1.6399999856948853, 0.9599999785423279, -6.489999771118164], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Obj_InsideGanonCastle_SwitchShutter_A_03', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'PositionOffset': [0.0, 0.0, -1.0]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})

        fork {
            Player_Event.EventPlayerMove({'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'WorldPos': 'LastPos', 'IsSheathed': False, 'IsWaitEnd': False, 'IsInertiaMove': False, 'IsContinueMoveAnimeAfterFinish': True, 'MoveSpeed': 0.10000000149011612, 'DecSpeedDistance': 1.0, 'ApplySlowMove': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
        }


        fork {
            DoorShutter_EventStarter.EventDoorClose({'IsWaitEnd': False})
            EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'IsRumbleController': True, 'Pattern': 2, 'ApplyType': 1, 'Power': 3.0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 0, 'FadeType': 0, 'WaitingResumeInGameBgm': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
            UISystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
        } {
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'ShutterClose', 'IsIgnoreDucking': True})
        }

    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideGanonCastle_IsEnterBossRoom', 'Index': -1, 'Value': True})
    GameSystemActor.EventRemoveProjectiles({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})

    call Defeat_Ganon.InsideGanonCastle_Dungeon_BossAppear_1()

}

void LockedMoveToPlusZ_Shadow_RoomB1FC() {

    call PreMoveCommon()


    call LockedMoveTo_Sub({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'CameraTargetAnchorInstanceName': 'CameraAnchorName', 'MoveAnchorInstanceName': 'OpenShutterMovePosPlusZ', 'OpenAnim': 'EvtDoorShutter', 'PostOpenPos': 'LastPos', 'PlayerReaction': 'EvtTurnAroundSurpriseCaution', 'WaitAfterDoorShut': 6, 'useDefaultViewPoint': True})

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'Actor2InstanceName': 'CameraAnchorName', 'PosVector': [0.0, 2.0999999046325684, -1.600000023841858], 'AtVector': [0.0, 1.600000023841858, 2.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 45, 'EndRecelerateRate': 0.0, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}

void LockedMoveToPlusZ_Forest_Room18() {

    fork {
        Enemy_Floormaster.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {

        call PreMoveCommon()


        call LockedMoveTo_Sub({'MoveAnchorInstanceName': 'OpenShutterMovePosPlusZ', 'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'CameraTargetAnchorInstanceName': 'CameraAnchorName', 'OpenAnim': 'EvtDoorShutter', 'PostOpenPos': 'LastPos', 'PlayerReaction': 'EvtTurnAroundSurpriseCaution', 'WaitAfterDoorShut': 6, 'useDefaultViewPoint': True})

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'Actor2InstanceName': 'CameraAnchorName', 'PosVector': [0.0, 2.25, -2.0], 'AtVector': [0.0, 1.5, 2.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'StartAccelerateRate': 0.5, 'EndRecelerateRate': 0.0, 'MoveTime': 45, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
    }

}

void MoveToPlusZ_Boss() {

    call PreMoveCommon_Boss()


    call MoveToBoss({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'PostOpenPos': 'PostOpenPos'})

}

void PreMoveCommon_Boss() {
    Player_Event.EventTriggerParticipateEvent()
    if !Player_Event.EventQueryPlayerIsKeepLiftableDoorMove() {
        Player_Event.EventTriggerPlayerEventStartWithCarry()
    }
}

void LockedMoveToPlusZ_FocusDeku() {

    call LockedMoveToPlusZ_EnemyFocus({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'CameraAnchorName': 'CameraAnchorName', 'PostOpenPos': 'LastPos'})

    PostProcessingActor.EventNorifyCutChangeForGraphics()
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'TargetActorInstanceName': 'Deku_Leaf', 'IdealDistance': 7.0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'TargetOffset': [0.0, 0.699999988079071, 0.5]})

    fork {
        Enemy_Scrub_Deku.EventScrubDekuFirstEncounterLookAround({'IsWaitEnd': True})
    } {
        Enemy_Scrub_Deku_Leaf.EventTriggerParticipateEvent()
    } {
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'TargetActorInstanceName': 'Deku_Leaf', 'IdealDistance': 3.0, 'MoveTime': 30, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'EndRecelerateRate': 0.5, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 0.699999988079071, 0.5]})
        EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'TargetActorInstanceName': 'Deku_Leaf', 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 10.0, 'IdealDistance': 2.5, 'StartAccelerateRate': 0.5, 'MoveTime': 60, 'IsWaitEnd': True, 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 0.699999988079071, 0.5]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLookNow({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'TurnFaceControlType': 0, 'InstanceName': '', 'ActorName': 'Enemy_Scrub_Deku', 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Deku_Leaf', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'AtVector': [0.0, -0.5, 0.0], 'PosVector': [0.0, 1.600000023841858, -1.100000023841858], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Deku_Leaf', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'AtVector': [0.0, -0.5, 0.0], 'PosVector': [0.0, 1.600000023841858, -1.2999999523162842], 'MoveTime': 30, 'StartAccelerateRate': 0.5, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
    }

}

void UnlockMoveToBoss() {

    fork {
        if !Player_Event.EventQueryPlayerIsChild() {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DoorShutter_EventStarter', 'AtVector': [0.0, 1.0, -1.0], 'PosVector': [0.0, 1.0, -6.0], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

            }

        } else {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DoorShutter_EventStarter', 'AtVector': [0.0, 1.75, -1.0], 'PosVector': [0.0, 1.0, -6.0], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

            }

        }
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
    } {
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'KeepTalkWait': False, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtDoorBoss', 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        DoorShutter_EventStarter.EventDoorUnlockChain({'IsWaitEnd': False})
    }

    DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 72})
    PostProcessingActor.EventSetRenderingCenterPosFromCameraPosFC({'StarFocusDis': 2.0, 'EndFocusDis': 2.0, 'IsWaitEnd': True, 'RequiredFrame': 0})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'LastPos'})
    } {
        if !Player_Event.EventQueryPlayerIsChild() {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DoorShutter_EventStarter', 'PosVector': [0.0, 1.5, 0.6000000238418579], 'AtVector': [0.0, 0.5, 5.599999904632568], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

            }

        } else {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DoorShutter_EventStarter', 'PosVector': [0.0, 1.75, 0.6000000238418579], 'AtVector': [0.0, 1.25, 5.599999904632568], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 60})

            }

        }
    }

    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    DoorShutter_EventStarter.EventDoorClose({'IsWaitEnd': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 2.0, 'IsKeepWithRelativePos': False})
}

void PlaceHand_and_Open() {
    Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtDoorShutter', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})
        DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 47})

    fork {
        Player_Event.EventPlayerShutterMove({'IsWaitEnd': True, 'TargetPos': 'LastPos', 'IsContinueMoveAnimeAfterFinish': True})
    } {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HeavyBoot'}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 72})
            Event62:
            DoorShutter_EventStarter.EventDoorClose({'IsWaitEnd': False})
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HoverBoot'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 48})
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 44})
        }
        goto Event62
    } {

        call DoorCamera({'ChildOffset': [0.0, 1.2799999713897705, 0.0], 'ChildVerticalAngle': 5.0, 'ChildSpeed': 30, 'AdultVerticalAngle': 8.0, 'AdultSpeed': 30, 'AdultDistance': 1.600000023841858, 'ChildDistance': 1.399999976158142, 'AdultOffset': [0.0, 1.7200000286102295, 0.0]})

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}

void Open() {
    Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})
    DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        Player_Event.EventPlayerShutterMove({'IsWaitEnd': True, 'IsContinueMoveAnimeAfterFinish': True, 'TargetPos': 'LastPos'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        DoorShutter_EventStarter.EventTriggerDoorClose()
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    } {

        call DoorCamera({'ChildOffset': [0.0, 1.2799999713897705, 0.0], 'AdultOffset': [0.0, 1.8200000524520874, 0.0], 'ChildVerticalAngle': 5.0, 'ChildSpeed': 30, 'AdultVerticalAngle': 8.0, 'AdultSpeed': 30, 'ChildDistance': 'CamDist', 'AdultDistance': 1.7999999523162842})

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}

void Unlock_Then_LockedMoveTo_Sub() {
    EventCamera.EventTriggerCameraSavePoint()

    call DoorCamera({'ChildVerticalAngle': 5.0, 'ChildSpeed': 30, 'AdultSpeed': 30, 'ChildOffset': [0.0, 1.3600000143051147, 0.0], 'AdultVerticalAngle': 12.0, 'ChildDistance': 1.5, 'AdultDistance': 1.5, 'AdultOffset': [0.0, 1.600000023841858, 0.0]})

    Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})

    fork {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'KeepTalkWait': False, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtDoorKey', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        DoorShutter_EventStarter.EventDoorUnlockChain({'IsWaitEnd': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
    DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'IdealDistance': 4.0, 'ToleranceYDownwardAngle': 22.0, 'ToleranceYUpwardAngle': 22.0, 'TargetOffset': [0.25, 1.600000023841858, 0.5], 'TargetActorInstanceName': 'CameraTargetAnchorInstanceName', 'IsWaitEnd': False})

    call LockPlayer({'LastPos': 'LastPos', 'PlayerReaction': 'EvtTurnAroundSurpriseCaution', 'WaitAfterDoorShut': 6, 'UseDefaultViewpoint': True})

}

void DoorCamera() {
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventChasePlayerCameraForDoor({'PlayerActorName': 'Player_Event', 'DoorActorName': 'DoorShutter_EventStarter', 'Fovy': 50.0, 'PlayerInstanceName': '', 'DoorInstanceName': '', 'LerpFrame': 30.0, 'LookAtOffset': 'ChildOffset', 'LookAtDis': 'ChildDistance', 'Latitude': 'ChildVerticalAngle', 'IsWaitEnd': False})
    } else {
        EventCamera.EventChasePlayerCameraForDoor({'PlayerActorName': 'Player_Event', 'DoorActorName': 'DoorShutter_EventStarter', 'Fovy': 50.0, 'PlayerInstanceName': '', 'DoorInstanceName': '', 'LerpFrame': 30.0, 'LookAtOffset': 'AdultOffset', 'LookAtDis': 'AdultDistance', 'Latitude': 'AdultVerticalAngle', 'IsWaitEnd': False})
    }
}

void LockPlayer() {

    fork {
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'UseDefaultViewpoint'}) {
            Player_Event.EventPlayerShutterMove({'IsWaitEnd': True, 'IsContinueMoveAnimeAfterFinish': False, 'TargetPos': 'LastPos'})
        } else {
            Player_Event.EventPlayerShutterMove({'IsWaitEnd': True, 'TargetPos': 'LastPos', 'IsContinueMoveAnimeAfterFinish': True})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0, 'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'ForceFadeFrame': -1.0})
        }
    } {
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'UseDefaultViewpoint'}) {
            if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HeavyBoot'}) {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 56})
            } else {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 36})
            }
            Event247:
            DoorShutter_EventStarter.EventDoorClose({'IsWaitEnd': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            DoorShutter_EventStarter.EventDoorCreateToken()
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': True, 'Power': 0.15000000596046448, 'Pattern': 1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'WaitAfterDoorShut'})
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HeavyBoot'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        }
        goto Event247
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0, 'ASCommand': 'PlayerReaction'})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'EvtTurnAroundSurprise'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    }

    Player_Event.EventTriggerPlayerSetBattleMode({'frame': 60.0})
    Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'EvtCaution'})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}

void UnlockMoveTo_ThenLocked() {

    call Unlock_Then_LockedMoveTo_Sub({'MoveAnchorInstanceName': 'MoveAnchorInstanceName', 'CameraTargetAnchorInstanceName': 'CameraTargetAnchorInstanceName', 'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'PostOpenPos': 'LastPos'})

    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'Actor2InstanceName': 'CameraTargetAnchorInstanceName', 'PosVector': [0.0, 1.4500000476837158, -1.5], 'AtVector': [0.0, 0.0, 5.5], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [1.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'MoveTime': 45, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'Actor2InstanceName': 'CameraTargetAnchorInstanceName', 'AtVector': [0.0, 1.8200000524520874, 0.0], 'PosVector': [0.0, 1.8300000429153442, -1.600000023841858], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [1.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'MoveTime': 45, 'IsEnableRevertFast': False})
    }
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}

void MoveToPlusZ_JabuJabu() {

    call PreMoveCommon()


    call DoorCamera({'ChildVerticalAngle': 5.0, 'AdultVerticalAngle': 12.0, 'AdultDistance': 1.5, 'ChildOffset': [0.0, 1.3600000143051147, 0.0], 'AdultOffset': [0.0, 1.600000023841858, 0.0], 'AdultSpeed': 60, 'ChildSpeed': 60, 'ChildDistance': 3.0})

    if !Player_Event.EventQueryCheckPlayerState({'State': 12}) {

        call PlaceHand_and_Open_JabuJabu({'LastPos': 'LastPos', 'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'LastPos'})

    } else {

        call Open({'LastPos': 'LastPos', 'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'LastPos', 'CamDist': 1.600000023841858})

    }
}

void LockedMoveToPlusZ_JabuJabu() {

    call PreMoveCommon()


    call LockedMoveTo_Sub_JabuJabu({'OpenAnim': 'EvtDoorJabu', 'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'MoveAnchorInstanceName': 'OpenShutterMovePosPlusZ', 'CameraTargetAnchorInstanceName': 'CameraAnchorName', 'PostOpenPos': 'LastPos'})

    if !Player_Event.EventQueryCheckPlayerState({'State': 12}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'PosVector': [0.0, 1.4500000476837158, -1.5], 'AtVector': [0.0, 0.0, 5.5], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [1.0, 0.0, 0.0], 'Actor2InstanceName': 'CameraAnchorName', 'EnableCameraAlpha': True, 'MoveTime': 45, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [1.0, 0.0, 0.0], 'PosVector': [0.0, 2.0, -1.7000000476837158], 'AtVector': [0.0, 0.0, 4.5], 'Actor2InstanceName': 'CameraAnchorName', 'EnableCameraAlpha': True, 'MoveTime': 45, 'IsEnableRevertFast': False})
    }
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}

void PlaceHand_and_Open_JabuJabu() {
    Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'EvtDoorJabu', 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})
        DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 39})

    fork {
        Player_Event.EventPlayerShutterMove({'IsWaitEnd': True, 'TargetPos': 'LastPos', 'IsContinueMoveAnimeAfterFinish': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 42})
        DoorShutter_EventStarter.EventDoorClose({'IsWaitEnd': False})
    } {

        call DoorCamera({'ChildOffset': [0.0, 1.2799999713897705, 0.0], 'AdultOffset': [0.0, 1.8200000524520874, 0.0], 'ChildVerticalAngle': 5.0, 'ChildSpeed': 30, 'AdultVerticalAngle': 8.0, 'AdultSpeed': 30, 'AdultDistance': 1.7999999523162842, 'ChildDistance': 1.399999976158142})

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}

void LockedMoveTo_Sub_JabuJabu() {
    EventCamera.EventTriggerCameraSavePoint()

    call DoorCamera({'ChildVerticalAngle': 5.0, 'ChildSpeed': 30, 'AdultSpeed': 30, 'ChildOffset': [0.0, 1.3600000143051147, 0.0], 'AdultVerticalAngle': 12.0, 'AdultOffset': [0.0, 1.600000023841858, 0.0], 'ChildDistance': 2.0, 'AdultDistance': 2.0})

    Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})
    if !Player_Event.EventQueryCheckPlayerState({'State': 12}) {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ClothWarpMode': 0, 'ASCommand': 'OpenAnim'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 24})
            DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'IdealDistance': 4.0, 'IsWaitEnd': False, 'ToleranceYDownwardAngle': 12.0, 'ToleranceYUpwardAngle': 12.0, 'ToleranceXZAngle': 8.0, 'TargetOffset': [0.25, 1.2000000476837158, 0.5], 'TargetActorInstanceName': 'CameraTargetAnchorInstanceName'})
        }

        Event388:

        call LockPlayer_JabuJabu({'LastPos': 'LastPos', 'PlayerReaction': 'EvtTurnAroundSurpriseCaution'})

    } else {
        DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 9})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            EventCamera.EventBasedOnLookAtCamera({'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorY': 1, 'IdealDistance': 4.0, 'IsWaitEnd': False, 'ToleranceYUpwardAngle': 12.0, 'ToleranceYDownwardAngle': 12.0, 'ToleranceXZAngle': 8.0, 'TargetOffset': [0.25, 1.2000000476837158, 0.5], 'TargetActorInstanceName': 'CameraTargetAnchorInstanceName'})
        }

        goto Event388
    }
}

void MoveToBoss() {

    call DoorCamera({'ChildOffset': [0.0, 1.3600000143051147, 0.0], 'AdultOffset': [0.0, 1.600000023841858, 0.0], 'ChildSpeed': 80, 'AdultSpeed': 80, 'AdultVerticalAngle': 8.0, 'ChildVerticalAngle': 3.0, 'ChildDistance': 4.0, 'AdultDistance': 5.0})


    call PlaceHand_and_OpenBoss({'LastPos': 'LastPos', 'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'LastPos'})

}

void PlaceHand_and_OpenBoss() {
    Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtDoorShutter', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})
        DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})

    fork {
        Player_Event.EventPlayerShutterMove({'IsWaitEnd': True, 'IsContinueMoveAnimeAfterFinish': False, 'TargetPos': 'LastPos'})
    } {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HeavyBoot'}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
            Event362:
            DoorShutter_EventStarter.EventDoorClose({'IsWaitEnd': False})
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HoverBoot'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 58})
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 44})
        }
        goto Event362
    } {

        call DoorCamera({'ChildOffset': [0.0, 1.2799999713897705, 0.0], 'AdultOffset': [0.0, 1.8200000524520874, 0.0], 'ChildVerticalAngle': 5.0, 'ChildSpeed': 30, 'AdultVerticalAngle': 8.0, 'AdultSpeed': 30, 'AdultDistance': 1.7999999523162842, 'ChildDistance': 1.399999976158142})

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}

void UnlockMoveTo_ThenLocked_FD() {

    call Unlock_Then_LockedMoveTo_Sub({'MoveAnchorInstanceName': 'MoveAnchorInstanceName', 'CameraTargetAnchorInstanceName': 'CameraTargetAnchorInstanceName', 'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'PostOpenPos': 'LastPos'})

}

void LockPlayer_JabuJabu() {

    fork {
        Player_Event.EventPlayerShutterMove({'IsWaitEnd': True, 'IsContinueMoveAnimeAfterFinish': False, 'TargetPos': 'LastPos'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 36})
        DoorShutter_EventStarter.EventDoorClose({'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        DoorShutter_EventStarter.EventDoorCreateToken()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': True, 'Power': 0.15000000596046448, 'Pattern': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 6})
    }


    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0, 'ASCommand': 'PlayerReaction'})
    } {
        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'EvtTurnAroundSurprise'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    }

    Player_Event.EventTriggerPlayerSetBattleMode({'frame': 60.0})
    Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'EvtCaution'})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}

void LockedMoveTo_EnemyFocus_GanonTower() {

    call LockedMoveTo_Sub({'OpenAnim': 'EvtDoorShutter', 'MoveAnchorInstanceName': 'MoveAnchorInstanceName', 'CameraTargetAnchorInstanceName': 'CameraTargetAnchorInstanceName', 'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'PostOpenPos': 'LastPos', 'PlayerReaction': 'PlayerReaction', 'WaitAfterDoorShut': 19, 'useDefaultViewPoint': False})

}

void MoveToPlusZ_JabuJabu_Octa() {

    call PreMoveCommon()


    call DoorCamera({'ChildVerticalAngle': 5.0, 'AdultVerticalAngle': 12.0, 'AdultDistance': 1.5, 'ChildOffset': [0.0, 1.3600000143051147, 0.0], 'AdultOffset': [0.0, 1.600000023841858, 0.0], 'AdultSpeed': 60, 'ChildSpeed': 60, 'ChildDistance': 3.0})

    if !Player_Event.EventQueryCheckPlayerState({'State': 12}) {

        call PlaceHand_and_Open_JabuJabu({'LastPos': 'LastPos', 'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'LastPos'})

    } else {

        call Open_Octa({'LastPos': 'LastPos', 'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'CamDist': 1.399999976158142})

    }
}

void Open_Octa() {
    Player_Event.EventPlayerMove({'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos', 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'UseNormalTurn': False, 'IsDoNavi': False, 'WorldPos': 'LastPos'})
    DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        Player_Event.EventPlayerShutterMove({'IsWaitEnd': True, 'IsContinueMoveAnimeAfterFinish': True, 'TargetPos': 'LastPos'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        DoorShutter_EventStarter.EventTriggerDoorClose()
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    } {

        call DoorCamera({'ChildOffset': [0.0, 1.2799999713897705, 0.0], 'AdultOffset': [0.0, 1.8200000524520874, 0.0], 'ChildVerticalAngle': 5.0, 'ChildSpeed': 30, 'AdultVerticalAngle': 8.0, 'AdultSpeed': 30, 'AdultDistance': 2.0, 'ChildDistance': 'CamDist'})

    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}
