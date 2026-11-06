-------- EventFlow: BottomOfTheWell_Gimmick --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventPlayerMoveToAnchor', 'EventPlayerBackMoveForTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SignBoard_EventStarter
entrypoint: None()
actions: ['EventTalkWithInstanceNameLabel']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

void WaterLevel_Down() {

    call Common_Camera_Pln.CameraDoF_Default()


    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player_Event.EventPlayerTurnAndLook({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': '', 'TurnFaceControlType': 1, 'Target': 0, 'ActorName': '', 'WorldPos': [0.0, 103.0, -55.0], 'IsWaitEnd': False, 'IsDoNavi': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BottomOfTheWell_Room_01_StopWater'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'Actor1ActorName': '', 'AtVectorSetType': 0, 'MoveTime': 0, 'AtVector': [-1.0, 103.0, -56.0], 'PosVector': [1.25, 102.0, -48.75], 'EnableCameraAlpha': True, 'IsLinearMove': False, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'Actor1ActorName': '', 'AtVectorSetType': 0, 'PosVector': [1.25, 102.0, -49.0], 'AtVector': [-1.0, 103.0, -56.0], 'MoveTime': 120, 'EnableCameraAlpha': True, 'IsLinearMove': False, 'IsEnableRevertFast': False})
    } {

        call Dm_SY_Ocarina.PaletteRelease_ScreenCap()

    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BottomOfTheWell_Room_01_Blow_Ocarina'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'AtVector': [-1.0, 100.0, -56.0], 'CameraCollisionMode': 2, 'IsLinearMove': False, 'PosVector': [1.25, 104.0, -49.0], 'Actor1ActorName': '', 'CameraCollisionLookAtActor': 0, 'MoveTime': 120, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventTriggerPlayerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 0, 'WorldPos': [0.0, 98.80000305175781, -58.150001525878906], 'ActorName': '', 'InstanceName': ''})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 37})
}

void CounterAppear() {

    call FocusOnGimmick.RollingStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'FovySetType': 1, 'TargetFovy': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'MoveTime': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': 'CameraPos_1', 'Actor2InstanceName': 'CameraPos_1', 'EnableCameraAlpha': True, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-6.795000076293945, 89.18900299072266, -10.6673002243042], 'AtVector': [-13.88656997680664, 89.24018859863281, -8.337461471557617], 'CameraCollisionMode': 0, 'LookAtDis': -1.0, 'CameraCollisionLookAtActor': 0, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 115})
    EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'FovySetType': 1, 'TargetFovy': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': 'CameraPos_1', 'Actor2InstanceName': 'CameraPos_1', 'EnableCameraAlpha': True, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionMode': 0, 'LookAtDis': -1.0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 210, 'PosVector': [-14.401800155639648, 90.39790344238281, -13.04539966583252], 'AtVector': [-4.4813151359558105, 88.1078109741211, -6.4800639152526855], 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
}

void CounterUnlock() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call ShadowTemple_Gimmick.Silver_Tolken_Finish({'DoorName': ''})


    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsWaitEnd': False, 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'FovySetType': 0, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'PosVectorSetType': 3, 'MoveTotargetPosType': 0, 'MoveTime': 1, 'TargetFovy': 50.0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'AtVectorSetType': 3, 'Actor2ActorName': '', 'PosVector': [6.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsTargetPlayingAllEvent': False, 'CheckDistance': 20.0}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void 08_Enemy_WipedOut() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 0, 'TargetActorInstanceName': 'PL_Point01', 'TargetOffset': [0.0, 0.0, 0.0], 'IdealDistance': 8.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'PL_Point01'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'Actor1ActorName': 'DestinationAnchor', 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'PosVectorSetType': 3, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': 'PL_Point02', 'MoveTime': 60, 'AtVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'PosVector': [4.0, 2.5, 5.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call TreasureBoxAppear.Act_EnemyCounter()


    fork {

        call TreasureBoxAppear.Act_TBoxAppear_Magic_1()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'TBox'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 1.0, 'InstanceNameB': 'TBox'}) {

            fork {
                Player_Event.EventPlayerMoveToAnchor({'IsMoveAnchorFrontDir': False, 'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsWaitEnd': True, 'AnchorInstanceName': 'Room08_AppearTreasureCamAim', 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            } {

                call NaviEventCommon.Navi_followPlayer()

            }

        }
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'InstanceName': 'TBox', 'UseNormalTurn': False, 'IsDoNavi': False})
    }

}

void AccessFloorSignboard() {

    call SignboardWood.AccessFloorSignboard({'FB_Offset': [0.0, 2.0, 1.5], 'BF_Offset': [0.0, 2.0, -1.0], 'BB_Offset': [0.0, 2.0, -0.5], 'FF_Offset': [0.0, 2.5, 0.75]})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Signboard_HasRead_BottomOfTheWell_03'})
}

void AccessWellMonument() {

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': 0.0})
    } {
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'SignBoard_EventStarter', 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 10.0, 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorInstanceName': '', 'ToleranceXZAngle': 45.0, 'ToleranceYDownwardAngle': -5.0, 'IdealDistance': 3.0, 'TargetOffset': [0.0, 0.25, 0.0], 'ToleranceDistance': 0.5, 'MoveTime': 45})
        SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'MstxtName': 'SignboardWood', 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
    }

}
