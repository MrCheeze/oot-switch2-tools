-------- EventFlow: InsideJabuJabuBelly_FocusGimmick --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventGoOffstageForUser', 'EventPlayerPlayASForFlowchart', 'EventPlayerSlowWalkStop', 'EventPlayerUnequip', 'EventPlayerWarpToStarterLinkAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBoolEX1', 'EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayMiniMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Zora_Ruto_Child_001[Step1]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviMoveAroundToPlayer', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void FocusGimmick_Tentacle() {
    Event53:
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 15.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default()

    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtCaution', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'IsWaitEnd': False, 'ForceFadeFrame': 30.0})
        Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Enemy_Tentacle_Red', 'InstanceName': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 145})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': False, 'IsWaitEnd': True, 'ArrivedASCommand': 'EvtCaution', 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0})
    }

    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'NearPoint', 'IsAnchorActorB': True, 'CheckDistance': 10.0}) {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'Actor1ActorName': 'DestinationAnchor', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': 7.0, 'Actor1InstanceName': 'A001', 'Actor2InstanceName': 'A002', 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'FovySetType': 1, 'TargetFovy': -2.0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LatShiftRange': 10.0, 'LongShiftRange': 10.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        }

    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'Actor1ActorName': 'DestinationAnchor', 'AtVector': [0.0, 1.0, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': 7.0, 'Actor1InstanceName': 'A001', 'Actor2InstanceName': 'A002', 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'FovySetType': 1, 'TargetFovy': -2.0, 'MoveTime': 120, 'IsAtVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'LatShiftRange': 10.0, 'LongShiftRange': 10.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 120})

        }

    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'Point2', 'PosOffset': [-6.0, 0.0, -1.0]})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'SlowTurn': False, 'UseNormalTurn': False, 'UpperASCommand': 'EvtCaution', 'InstanceName': 'Point2', 'PosOffset': [-6.0, 0.0, -1.0], 'IsWaitEnd': False, 'IsDoNavi': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Point2', 'Actor2InstanceName': 'Point2', 'LookAtDis': 7.0, 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [1.0, 0.0, 7.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 120, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 120})

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void FocusGimmick_RedTentacle() {
    EventCamera.EventTriggerCameraSavePoint()

    call Common_Dungeon_OpenShutterMove.PreMoveCommon()


    call Common_Dungeon_OpenShutterMove.MoveToPlusZ_JabuJabu({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos', 'PostOpenPos': 'PostOpenPos'})

    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})
    EventCamera.EventTriggerCameraSavePoint()
}

void FocusGimmick_BlueTentacleGimmick() {

    call FocusGimmick_TentacleEvent({'GameDataName': 'InsideJabuJabuBelly_TentacleBlue'})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideJabuJabuBelly_DieObstacleTentacle_Blue'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideJabuJabuBelly_DeleteObstacleTentacle_Blue'})
}

void FocusGimmick_GreenTentacleGimmick() {
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': False, 'IsSheathed': False})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'ActorInstanceName': 'ViewPoint1', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0]}) {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'LookAtDis': -1.0, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'ViewPoint1', 'Actor2InstanceName': 'TargetPoint1', 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsEnableRevertFast': False})
        Event218:
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsAnchorActorB': True, 'InstanceNameB': 'FallPoint', 'ActorNameB': 'DestinationAnchor', 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'CheckDistance': 5.0}) {
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerWarpPoint', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
        }
        Event67:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideJabuJabuBelly_DieCableTentacle_Green_02_Death'}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideJabuJabuBelly_DieObstacleTentacle_Green'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'LookAtDis': -1.0, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'ViewPoint1', 'Actor2InstanceName': 'TargetPoint1', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'EnableCameraAlpha': True, 'AtVector': [0.0, -4.0, 0.0], 'MoveTime': 75, 'IsEnableRevertFast': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideJabuJabuBelly_DeleteObstacleTentacle_Green'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 2.0})
        } else {
            GameSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
            goto Event67
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideJabuJabuBelly_DieCableTentacle_Green_02_Death'}) {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'ViewPoint1', 'Actor2InstanceName': 'TargetPoint1', 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'EnableCameraAlpha': True, 'MoveTime': 120, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'ViewPoint1', 'Actor2InstanceName': 'TargetPoint1', 'AtVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'EnableCameraAlpha': True, 'MoveTime': 210, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'IsEnableRevertFast': False})
    }
    goto Event218
}

void FocusGimmick_RedTentacleGimmick0() {
    goto Event53
}

void FocusGimmick_TentacleEvent() {
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventTriggerCameraSavePoint()

    call FocusOnGimmick.NewBasicFocus({'AnchorName_01': 'Point1', 'CameraDistanceFromAnchor': 3.0, 'OriginActor_IfClose': 'Player_Event', 'CameraPosOffset_IfClose': [0.0, 1.5, 1.0], 'FocusOffset_IfClose': [0.0, 0.0, 0.0], 'CloseDistance': 0.0, 'CameraPosOffset': [0.0, 0.5, 3.0], 'WaitBeforeSE': 90})

    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'GameDataName'})
}

void FocusOnGimmick_JabujabuLift() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'InsideJabuJabuBelly_Room01_LiftMoveDown', 'Value': True})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'EventCamera', 'CheckDistance': 1.0}) {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 30.0, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

        Event205:
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'NearPoint', 'IsAnchorActorB': True, 'CheckDistance': 4.5}) {
            EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'TargetPoint1', 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'MoveTime': 90, 'Actor1InstanceName': 'ViewPoint2', 'MoveTotargetPosType': 1, 'AtVector': [0.0, 2.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            Event228:
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Lift', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 3.0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'ViewPoint1', 'Actor2InstanceName': 'TargetPoint1', 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 90, 'MoveTotargetPosType': 1, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            goto Event228
        }
    } else {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
        goto Event205
    }
}

void InsideJabuJabuBelly_TreasureBoxAppear() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Npc_Zora_Ruto_Child_001[Step1].EventTriggerParticipateEvent()

    call SwitchActivation_JabuJabu()


    fork {
        EventCamera.EventBasedOnLookAtCamera({'ToleranceXZAngle': 10.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'TargetActorInstanceName': 'Point1', 'MoveTime': 0, 'ToleranceYDownwardAngle': 10.0, 'TargetOffset': [0.0, 1.0, 0.0], 'IdealDistance': 5.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Zora_Ruto_Child_001', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': 'Step1', 'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'CheckDistance': 3.0, 'InstanceNameB': 'TBox'}) {
            Npc_Zora_Ruto_Child_001[Step1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': 'RutoPosition', 'YAngle': 'RutoAngle', 'ClothWarpMode': -1})
        }
    }

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Point1', 'Target': 5, 'PosOffset': 'AnchorOffset'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Point2', 'AtVectorSetType': 3, 'PosVectorSetType': 3, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 2.0, 4.0], 'MoveTime': 90, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TBox', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 135})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    } {

        call Defeat_Ganon.AvoidGimmick({'ObjectInstance': 'TBox', 'MoveOffset': [-1.399999976158142, 0.0, 1.399999976158142], 'NearDistance': 1.100000023841858})

    }

}

void InsideJabuJabuBelly_FocusOnGimmick() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerCameraSavePoint()
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'EventCamera', 'CheckDistance': 1.0}) {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 30.0, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

        Event143:
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 5.0, 'InstanceNameB': 'TargetPoint'}) {

            call Near_JampCamera({'OriginActor_IfClose': 'DestinationAnchor', 'CameraDistanceFromAnchor': 13.0, 'FocusOffset_IfClose': [0.0, 1.0, 0.0], 'IgnoreOriginRotation': True, 'CameraPosOffset_IfClose': [0.0, 0.5, 5.0], 'CameraDistanceFromAnchorNear': 3.0, 'CloseDistance': 5.0, 'CameraPosOffset': [0.0, 2.5, 4.0], 'AnchorName_01': 'TargetPoint1'})

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        } else {
            EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'ToleranceXZAngle': 0.0, 'TargetOffset': [0.0, 2.5, 4.0], 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 5.0, 'IdealDistance': 5.0, 'TargetActorInstanceName': 'TargetPoint'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Target': 5, 'Direction': 0.0, 'PosOffset': [-3.0, 0.0, -1.0], 'InstanceName': 'TargetPoint1'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': 'TargetPoint1', 'IsDoNavi': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionMode': 2, 'Actor2InstanceName': '', 'MoveTime': 90, 'Actor2ActorName': 'Obj_InsideJabu_Jabu_SwitchHit_A_01', 'AtVector': [0.0, 6.0, 0.0], 'PosVector': [0.0, 1.5, -3.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    } else {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
        goto Event143
    }
}

void Basic_InsideJabuJabuBelly_02() {
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Step09_Exp'}) {
        Npc_Zora_Ruto_Child_001[Step1].EventTriggerParticipateEvent()
    }
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerParticipateEvent()
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'EventCamera', 'CheckDistance': 1.0}) {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 30.0, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

        Event129:
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': '', 'CheckDistance': 5.0}) {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor2ActorName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [28.139999389648438, 80.52999877929688, -38.779998779296875], 'AtVector': [26.329999923706055, 80.41000366210938, -38.88999938964844], 'TargetFovy': 50.0, 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor2ActorName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [28.139999389648438, 80.52999877929688, -38.779998779296875], 'AtVector': [26.329999923706055, 80.41000366210938, -38.88999938964844], 'TargetFovy': 60.0, 'MoveTime': 60, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Target': 5, 'Direction': 0.0, 'InstanceName': '', 'PosOffset': [-3.0, 0.0, -1.0]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'UseNormalTurn': False, 'InstanceName': '', 'OffsetBase': 0, 'PosOffset': [-3.0, 0.0, -1.0], 'SlowTurn': True, 'IgnoreTargetPosMove': True, 'IsDoNavi': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    } else {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
        goto Event129
    }
}

void Near_JampCamera() {
    EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'TargetActorInstanceName': 'AnchorName_01', 'IdealDistance': 'CameraDistanceFromAnchorNear', 'TargetOffset': 'CameraPosOffset_IfClose', 'MoveTime': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Target': 5, 'Direction': 0.0, 'PosOffset': [-3.0, 0.0, -1.0], 'InstanceName': 'AnchorName_01'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': 'AnchorName_01', 'OffsetBase': 1, 'UseNormalTurn': False, 'PosOffset': [0.0, 0.0, -10.0], 'IsDoNavi': True})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
    EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'MoveTime': 60, 'TargetOffset': 'FocusOffset_IfClose', 'TargetActorInstanceName': '', 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'IdealDistance': 4.0, 'TargetActorName': 'Player_Event', 'LookAtVectorXZ': 0, 'ToleranceDistance': 0.5})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'AfterKeepEndInterpolateCountScale': 1.0, 'KeepManualModeFrame': 60.0, 'IsKeepWithRelativePos': False})
}

void InsideJabuJabuBelly_Room09_TreasureBoxAppear() {

    call InsideJabuJabuBelly_TreasureBoxAppear({'RutoPosition': [-30.0, 92.44599914550781, -134.0], 'RutoAngle': 30.0, 'AnchorOffset': [5.0, 0.0, 0.0]})

}

void InsideJabuJabuBelly_Room12_TreasureBoxAppear() {

    call InsideJabuJabuBelly_TreasureBoxAppear({'RutoPosition': [25.5, 92.44599914550781, -173.5], 'RutoAngle': -110.0, 'AnchorOffset': [-5.0, 0.0, 4.0]})

}

void SwitchActivation_JabuJabu() {
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 30.0, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void TreasureBox_WithRuto_Room09() {
    Player_Event.EventTriggerParticipateEvent()
    Npc_Zora_Ruto_Child_001[Step1].EventTriggerParticipateEvent()
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})

    fork {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_Treasurebox'})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'InsideJabuJabuBelly_Room09_TBoxNearRuto', 'Index': -1}) {
            Npc_Zora_Ruto_Child_001[Step1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [-30.0, 92.44599914550781, -134.0], 'YAngle': 30.0})
        }
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideJabuJabuBelly_Room09_TBoxDemo', 'Index': -1, 'Value': True})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 475})
}

void TreasureBox_WithRuto_Room12() {
    Player_Event.EventTriggerParticipateEvent()
    Npc_Zora_Ruto_Child_001[Step1].EventTriggerParticipateEvent()
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})

    fork {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'InsideJabuJabuBelly_GetCompass'})
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'InsideJabuJabuBelly_Room12_TBoxNearRuto', 'Index': -1}) {
            Npc_Zora_Ruto_Child_001[Step1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'ClothWarpMode': -1, 'Position': [25.5, 92.44599914550781, -173.5], 'YAngle': -110.0})
        }
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideJabuJabuBelly_Room12_TBoxDemo', 'Index': -1, 'Value': True})
}
