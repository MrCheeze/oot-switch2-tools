-------- EventFlow: InsideTheDekuTree_Gimmick --------

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerWaitStabilityInWater']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerRequestCameraShake', 'EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventNaviLookAtObject', 'EventNaviMoveAroundToPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void InsideTheDekuTree_Gimmick_FallingLadder() {

    call Common.AirStartUp_OnlyStopInAir()


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveTime': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerCameraSavePoint()
    } {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Player_Event.EventTriggerParticipateEvent()
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        } {
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 1, 'LoopEndCount': 1, 'Power': 0.20000000298023224, 'IsRumbleController': True})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 58})
        } {
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 4, 'LoopEndCount': 6, 'Power': 0.05000000074505806, 'IsRumbleController': False})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 27})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Pattern': 2, 'Power': 0.20000000298023224, 'IsRumbleController': True})
    } {

        call NewBasicFocus_Immediate_Any({'AnchorName_01': 'PL_Point1', 'AnchorName_02': 'PL_Point2', 'CameraPosOffset_IfClose': [0.0, 2.5, 2.0], 'FocusOffset_02': [0.0, 1.5, 0.0], 'OriginActor_IfClose': 'DestinationAnchor', 'CameraPosOffset_02': [0.5, 3.0, 0.0], 'CameraDistanceFromAnchor': -1.0, 'FocusOffset': [0.0, 0.0, 0.0], 'CloseDistance': 50.0, 'CameraPosOffset': [0.0, -1.0, 8.0], 'StepInterval': 110})

    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [0.0, 2.5, -3.0], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False}) {
        EventCamera.EventMoveCameraToSavePoint({'IsRestoreDoF': False, 'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0})
    }
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 2.0, 'CameraResetPolicy': 0})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 331})
}

void InsideTheDekuTree_Gimmick_RoomD_PlatformUp() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 121})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'Pattern': 4, 'Power': 0.20000000298023224, 'LoopEndCount': 21})
    } {

        call NewBasicFocus_Test2({'CloseDistance': 15.0, 'AnchorName_01': '', 'CameraDistanceFromAnchor': 7.0, 'CameraPosOffset': [0.0, 1.0, 7.0], 'CameraPosOffset_IfClose': [0.0, 2.5, -1.0], 'OriginActor_IfClose': 'Player_Event', 'FocusOffset_IfClose': [0.0, 0.0, 0.0], 'WaitBeforeSE': 170})

    }

    EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'LoopEndCount': 1, 'Pattern': 7, 'Power': 0.20000000298023224})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
}

void InsideTheDekuTree_Gimmick_CandleAndSpiderWeb() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveTime': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Player_Event.EventTriggerParticipateEvent()
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'EvtWait', 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'TargetActorName': 'DestinationAnchor', 'MoveTime': 30, 'IdealDistance': 5.0, 'ToleranceDistance': 0.0, 'TargetOffset': [0.0, 0.0, 0.0], 'TargetActorInstanceName': 'SpiderWeb'})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'BurnStartPoint'})
    }


    fork {
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtSurpriseS', 'ClothWarpMode': 0})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': 'BurnStartPoint', 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': False, 'Direction': 0.0, 'KeepTalkWait': False, 'PosOffset': [2.640000104904175, 1.2100000381469727, 0.0], 'UseNormalTurn': False, 'IsDoNavi': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'InsideTheDekuTree_RoomE_KillSpiderWave'})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 443})
}

void InsideTheDekuTree_Gimmick_RoomF_EyeSwitch() {

    call Common.AirStartUp()


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveTime': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Player_Event.EventTriggerParticipateEvent()
    }


    call NewBasicFocus_Immediate({'CloseDistance': 10.0, 'AnchorName_01': '', 'AnchorName_02': '', 'CameraDistanceFromAnchor': 6.0, 'CameraPosOffset': [0.0, -1.0, 4.0], 'CameraPosOffset_IfClose': [0.0, -0.5, 5.0], 'FocusOffset_IfClose': [0.0, 0.0, 0.0], 'OriginActor_IfClose': 'DestinationAnchor', 'WaitBeforeSE': 60, 'WaitBeforeBool': 0, 'IgnoreOriginRotation': False})

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void InsideTheDekuTree_Gimmick_RoomG_WaterLevelDrop() {

    call Common.AirStartUp()


    fork {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'TargetOffset': [0.0, 0.0, 0.0], 'ToleranceYUpwardAngle': 15.0, 'ToleranceDistance': 0.0, 'TargetActorInstanceName': 'WaterGate', 'ToleranceXZAngle': 5.0, 'IdealDistance': 4.5, 'ToleranceYDownwardAngle': 15.0, 'MoveTime': 60})
    } {
        Player_Event.EventPlayerWaitStabilityInWater({'IsWaitEnd': True})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'Obj_InsideTheDekuTree_WaterGate_A_01', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'PosOffset': [0.0, 0.0, -5.0]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Navi.EventNaviLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Obj_InsideTheDekuTree_WaterGate_A_01', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 135})
    EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'Power': 0.10000000149011612, 'LoopEndCount': 1, 'Pattern': 7})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 47.11000061035156, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Water', 'AtVectorSetType': 3, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LookAtDis': -1.0, 'IsPosVectorReferenceActorPosOnce': False, 'PosVectorSetType': 4, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'WaterGate01', 'AtVector': [0.0, -1.7000000476837158, 0.0], 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': True, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 47.11000061035156, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Water', 'AtVectorSetType': 3, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LookAtDis': -1.0, 'IsPosVectorReferenceActorPosOnce': False, 'PosVectorSetType': 4, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'WaterGate01', 'PosVector': [0.0, -1.0, 0.0], 'AtVector': [0.0, -1.7000000476837158, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'MoveTime': 240, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'InstanceName': '', 'ActorName': 'Obj_Deku_MoveFloor_A_01'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 3, 'ActorName': 'Obj_Deku_MoveFloor_A_01', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0]})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': True, 'IsTurnLooking': True, 'LookAtActorName': 'Obj_Deku_MoveFloor_A_01', 'IsHomePosition': True, 'IsNearOffset': True, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsUseAfterPlayerTurn': True, 'LookAtTarget': 3, 'offset': [0.0, 0.0, 0.0], 'MoveSpeed': 0.15000000596046448, 'IsWaitEnd': False})
    }

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 332})
}

void InsideTheDekuTree_Gimmick_RoomH_CandleStick() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call NewBasicFocus_Test({'CloseDistance': 0.0, 'AnchorName_01': '', 'CameraPosOffset': [0.0, 0.5, 2.0], 'CameraPosOffset_IfClose': [0.0, 0.0, 0.0], 'FocusOffset_IfClose': [0.0, 0.0, 0.0], 'OriginActor_IfClose': 'Player_Event', 'WaitBeforeSE': 60, 'CameraDistanceFromAnchor': 2.5})

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
}

void NewBasicFocus_Immediate_Any() {

    fork {
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'AnchorName_01', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    } {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'ActorInstanceName': 'AnchorName_01', 'VectorSetType': 3, 'Vector': 'CameraPosOffset'}) {
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'AnchorName_01', 'CheckDistance': 'CloseDistance'}) {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 'CameraDistanceFromAnchor', 'AtVector': 'FocusOffset', 'Actor1ActorName': 'OriginActor_IfClose', 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': 'AnchorName_01', 'Actor2ActorName': 'OriginActor_IfClose', 'Actor2InstanceName': 'AnchorName_01', 'PosVector': 'CameraPosOffset', 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'ToleranceYUpwardAngle': 30.0, 'ToleranceXZAngle': 0.0, 'IdealDistance': 'CameraDistanceFromAnchor', 'TargetActorInstanceName': 'AnchorName_01', 'TargetOffset': 'CameraPosOffset', 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceYDownwardAngle': -5.0, 'MoveTime': 0})
            }
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Event100:
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'StepInterval'})
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1ActorName': 'DestinationAnchor', 'AtVectorSetType': 3, 'PosVectorSetType': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'AtVector': 'FocusOffset_02', 'Actor1InstanceName': 'AnchorName_02', 'PosVector': 'CameraPosOffset_02', 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 30, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'AnchorName_01', 'CheckDistance': 'CloseDistance'}) {
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': 'CameraDistanceFromAnchor', 'AtVector': 'FocusOffset', 'Actor1ActorName': 'OriginActor_IfClose', 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': 'AnchorName_01', 'Actor2ActorName': 'OriginActor_IfClose', 'Actor2InstanceName': 'AnchorName_01', 'PosVector': 'CameraPosOffset', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'ToleranceYUpwardAngle': 30.0, 'ToleranceXZAngle': 0.0, 'IdealDistance': 'CameraDistanceFromAnchor', 'TargetActorInstanceName': 'AnchorName_01', 'TargetOffset': 'CameraPosOffset', 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceYDownwardAngle': -5.0})
        }
        goto Event100
    }

}

void NewBasicFocus_NoBool_Test() {
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'AnchorName_01'}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': 'AnchorName_01', 'IsWaitEnd': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        } {
            EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'IdealDistance': 'CameraDistanceFromAnchor', 'TargetActorInstanceName': 'AnchorName_01', 'TargetOffset': 'CameraPosOffset', 'MoveTime': 0, 'ToleranceYUpwardAngle': 15.0})
        }

    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'AnchorName_01', 'CheckDistance': 'CloseDistance'}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': 'AnchorName_01', 'IsWaitEnd': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        } {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IsWaitEnd': True, 'PosVectorSetType': 3, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'LatShiftRange': 5.0, 'LongShiftRange': 5.0, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LookAtDis': 'CameraDistanceFromAnchor', 'Actor2InstanceName': 'AnchorName_01', 'PosVector': 'CameraPosOffset_IfClose', 'AtVector': 'FocusOffset_IfClose', 'Actor1ActorName': 'OriginActor_IfClose', 'IsPosVectorReferenceActorPosOnce': True, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

    } else {

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': 'AnchorName_01', 'IsWaitEnd': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        } {
            EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'IdealDistance': 'CameraDistanceFromAnchor', 'TargetActorInstanceName': 'AnchorName_01', 'TargetOffset': 'CameraPosOffset', 'ToleranceYUpwardAngle': 15.0})
        }

    }
}

void NewBasicFocus_Test() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    call NewBasicFocus_NoBool_Test({'CloseDistance': 'CloseDistance', 'AnchorName_01': 'AnchorName_01', 'CameraDistanceFromAnchor': 'CameraDistanceFromAnchor', 'CameraPosOffset': 'CameraPosOffset', 'CameraPosOffset_IfClose': 'CameraPosOffset_IfClose', 'FocusOffset_IfClose': 'FocusOffset_IfClose', 'OriginActor_IfClose': 'OriginActor_IfClose', 'IgnoreOriginRotation': False})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'WaitBeforeSE'})
}

void NewBasicFocus_Test2() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    call NewBasicFocus_NoBool_Test2({'CloseDistance': 'CloseDistance', 'AnchorName_01': 'AnchorName_01', 'CameraDistanceFromAnchor': 'CameraDistanceFromAnchor', 'CameraPosOffset': 'CameraPosOffset', 'CameraPosOffset_IfClose': 'CameraPosOffset_IfClose', 'FocusOffset_IfClose': 'FocusOffset_IfClose', 'OriginActor_IfClose': 'OriginActor_IfClose', 'IgnoreOriginRotation': False})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'WaitBeforeSE'})
}

void NewBasicFocus_NoBool_Test2() {
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'AnchorName_01'}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': 'AnchorName_01', 'IsWaitEnd': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        } {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'LatShiftRange': 5.0, 'LongShiftRange': 5.0, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LookAtDis': 'CameraDistanceFromAnchor', 'Actor2InstanceName': 'AnchorName_01', 'PosVector': 'CameraPosOffset_IfClose', 'AtVector': 'FocusOffset_IfClose', 'Actor1ActorName': 'OriginActor_IfClose', 'IsPosVectorReferenceActorPosOnce': True, 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsEnableRevertFast': False})
        }

    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'AnchorName_01', 'CheckDistance': 'CloseDistance'}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': 'AnchorName_01', 'IsWaitEnd': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        } {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IsWaitEnd': True, 'PosVectorSetType': 3, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'LatShiftRange': 5.0, 'LongShiftRange': 5.0, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LookAtDis': 'CameraDistanceFromAnchor', 'Actor2InstanceName': 'AnchorName_01', 'PosVector': 'CameraPosOffset_IfClose', 'AtVector': 'FocusOffset_IfClose', 'Actor1ActorName': 'OriginActor_IfClose', 'IsPosVectorReferenceActorPosOnce': True, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }

    } else {

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': 'AnchorName_01', 'IsWaitEnd': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        } {
            EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'IdealDistance': 'CameraDistanceFromAnchor', 'TargetActorInstanceName': 'AnchorName_01', 'TargetOffset': 'CameraPosOffset'})
        }

    }
}

void NewBasicFocus_Immediate() {

    call NewBasicFocus_NoBool_Test3({'CloseDistance': 'CloseDistance', 'AnchorName_01': 'AnchorName_01', 'CameraDistanceFromAnchor': 'CameraDistanceFromAnchor', 'CameraPosOffset': 'CameraPosOffset', 'CameraPosOffset_IfClose': 'CameraPosOffset_IfClose', 'FocusOffset_IfClose': 'FocusOffset_IfClose', 'OriginActor_IfClose': 'OriginActor_IfClose', 'IgnoreOriginRotation': False})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'WaitBeforeBool'})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'WaitBeforeSE'})
}

void NewBasicFocus_NoBool_Test3() {

    fork {
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': 'AnchorName_01', 'UseNormalTurn': False, 'IsDoNavi': True})
    } {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'AnchorName_01', 'CheckDistance': 'CloseDistance'}) {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'LatShiftRange': 5.0, 'LongShiftRange': 5.0, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LookAtDis': 'CameraDistanceFromAnchor', 'Actor2InstanceName': 'AnchorName_01', 'PosVector': 'CameraPosOffset_IfClose', 'AtVector': 'FocusOffset_IfClose', 'Actor1ActorName': 'OriginActor_IfClose', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'IdealDistance': 'CameraDistanceFromAnchor', 'TargetActorInstanceName': 'AnchorName_01', 'TargetOffset': 'CameraPosOffset'})
        }
    }

}
