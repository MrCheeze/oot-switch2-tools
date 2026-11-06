-------- EventFlow: TreasureBoxAppear --------

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
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1', 'EventTriggerSetEventBoolEX2']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerBackMoveForAnchor', 'EventPlayerWait', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Dm_Locator[Point2]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[Point1]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: TerrainSystemActor
entrypoint: None()
actions: ['EventTerrainPinResource']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Fall() {
    Dm_Locator[Point1].EventDmLocatorWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'InstanceName': 'Point1'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Point1', 'PosVector': [-0.009999999776482582, 0.6100000143051147, 1.8899999856948853], 'AtVector': [-0.009999999776482582, 0.6100000143051147, 1.8799999952316284], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    } {
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    } {
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
}

void Act_Magic() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 210})
}

void Magic() {
    Player_Event.EventPlayerWait({'IsWaitEnd': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'IdealDistance': 5.0, 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 5.0, 'MoveTime': 60, 'TargetActorInstanceName': 'Point1', 'ToleranceYDownwardAngle': 0.0, 'ToleranceYUpwardAngle': 20.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'TBox', 'IsAnchorActorB': True, 'CheckDistance': 2.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
        Player_Event.EventPlayerBackMoveForAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'TBox', 'IsWaitEnd': False, 'OffsetDist': 0.30000001192092896})
    }

    call Act_TBoxAppear_Magic_0()

}

void Any_Magic() {

    call FocusOnGimmick.NoBool_Focus({'TargetActorInstanceName': 'Point1'})


    call WaitForFocus()


    call FocusOnGimmick.NoBool_Focus({'TargetActorInstanceName': 'Point2'})


    call Act_TBoxAppear_Magic_1()

}

void Any_Any_Magic() {

    call FocusOnGimmick.NoBool_Focus({'TargetActorInstanceName': 'Point1'})


    call WaitForFocus()


    call FocusOnGimmick.NoBool_Focus({'TargetActorInstanceName': 'Point2'})


    call WaitForFocus()


    call FocusOnGimmick.NoBool_Focus({'TargetActorInstanceName': 'Point3'})


    call Act_TBoxAppear_Magic_1()

}

void Magic_Big() {

    call Common.AirStartUp()


    call FocusOnGimmick.NoBool_Focus({'TargetActorInstanceName': 'Point1'})

    Event66:

    call Act_TBoxAppear_Magic_0()

}

void Any_Magic_02_Big() {
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})

    call FocusOnGimmick.NoBool_Focus({'TargetActorInstanceName': 'Point1'})

    Dm_Locator[Point2].EventDmLocatorWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Point2', 'IsWaitEnd': True, 'NotChangeRot': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Point2', 'PosVector': [2.4800000190734863, 1.7699999809265137, 2.450000047683716], 'AtVector': [2.430000066757202, 1.75, 2.369999885559082], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    call Act_TBoxAppear_Magic_1()

}

void NewTempo_Any_Magic_02() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

    fork {
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'InstanceName': 'Point1', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': False, 'Frames': 20})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'Point1', 'InstanceNameA': '', 'CheckDistance': 8.0, 'IsTargetPlayingAllEvent': True, 'IsAnchorActorA': False, 'IsAnchorActorB': False}) {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 2, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Point1', 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'LookAtDis': -4.0, 'PosVector': [0.0, 2.299999952316284, -3.0], 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.5, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'TargetActorInstanceName': 'Point1', 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': False, 'IdealDistance': 6.0, 'ToleranceXZAngle': 0.0, 'TargetOffset': [0.0, 0.5, 0.0]})
        }
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    }

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'TargetActorInstanceName': 'Point2', 'LookAtVectorXZ': 0, 'MoveTime': 45, 'IdealDistance': 5.0, 'TargetOffset': [0.0, 0.0, -0.5], 'CameraCollisionLookAtActorOffset': [0.0, 0.5, 1.0], 'CameraCollisionMode': 1})
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Any_Any_Magic_02_Big() {
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})

    call FocusOnGimmick.NoBool_Focus({'TargetActorInstanceName': 'Point1'})

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'TargetActorName': 'DestinationAnchor', 'IdealDistance': 5.0, 'ToleranceDistance': 0.0, 'MoveTime': 0, 'TargetActorInstanceName': 'Point2'})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [2.4800000190734863, 1.7699999809265137, 2.450000047683716], 'AtVector': [2.430000066757202, 1.75, 2.369999885559082], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': 'Point3', 'Actor1ActorName': 'DestinationAnchor', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    call Act_TBoxAppear_Magic_1()

}

void Act_EnemyCounter() {
    EventRequestActor.EventTriggerSetEventBoolEX2({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Act_TBoxAppear_Magic_0() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    call Act_Magic()

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Act_TBoxAppear_Magic_1() {
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})

    call Act_Magic()

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void WaitForFocus() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void Magic_Big_Enemy() {

    call Common.AirStartUp()


    call FocusOnGimmick.NoBool_Focus({'TargetActorInstanceName': 'Point1'})


    call Act_EnemyCounter()

    goto Event66
}

void New_Magic_Enemy() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'WaitBeforeCam'})

    call FocusOnGimmick.NewBasicFocus_NoBool({'OriginActor_IfClose': 'OriginActor_IfClose', 'CloseDistance': 'CloseDistance', 'AnchorName_01': 'AnchorName_01', 'CameraDistanceFromAnchor': 'CameraDistanceFromAnchor', 'CameraPosOffset': 'CameraPosOffset', 'CameraPosOffset_IfClose': 'CameraPosOffset_IfClose', 'FocusOffset_IfClose': 'FocusPosOffset_IfClose', 'IgnoreOriginRotation': True})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'WaitBeforeBool'})

    call Act_EnemyCounter()


    call Act_TBoxAppear_Magic_0()

}

void Act_TBoxAppear_Magic_1_NoSE() {
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})

    call Act_Magic()

}

void Magic_Big_Distance() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventTriggerCameraSavePoint()
    TerrainSystemActor.EventTerrainPinResource({'Position': [25.600000381469727, 100.27999877929688, -4.869999885559082], 'SceneName': 'ZoraDomain_Child_02', 'IsWaitEnd': False, 'Level': 16})
    Player_Event.EventPlayerWait({'IsWaitEnd': True})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'TBox', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True}) {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'TargetActorInstanceName': 'Point1', 'ToleranceYDownwardAngle': 15.0, 'MoveTime': 60, 'TargetOffset': [0.0, 0.0, 0.0], 'ToleranceYUpwardAngle': 20.0, 'IdealDistance': 4.0, 'ToleranceXZAngle': 0.0})
        Event178:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TBox', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TBox', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'TBox', 'IsAnchorActorB': True, 'CheckDistance': 1.5, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {

            fork {
                Player_Event.EventPlayerBackMoveForAnchor({'OffsetDist': 1.0, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'TBox', 'IsWaitEnd': True})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
            }

        } else {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        }
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'TBox', 'IsAnchorActorB': True, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 10.0}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 0, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
        }
    } else {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtLookAround', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'TargetActorInstanceName': 'Point1', 'MoveTime': 0, 'ToleranceYDownwardAngle': 15.0, 'TargetOffset': [0.0, 0.0, 0.0], 'ToleranceYUpwardAngle': 20.0, 'IdealDistance': 4.0, 'ToleranceXZAngle': 0.0})
        goto Event178
    }
}
