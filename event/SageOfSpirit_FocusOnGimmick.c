-------- EventFlow: SageOfSpirit_FocusOnGimmick --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn', 'EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerEventStartWithClimb', 'EventPlayerMoveToAnchor', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerUnequip', 'EventTriggerPlayerLookAtObject', 'EventPlayerSeparatedFromAnchor', 'EventPlayerBackMoveForAnchor', 'EventTriggerEmitXLink', 'EventTriggerPlayerEventStartWithRolling']
queries: ['EventQueryCheckPlayerState', 'EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventTriggerSoundStartSceneBgm', 'EventSoundChangeListenerPreset', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventWaitForActorPresence', 'EventTriggerAddPreComputedCullingBasePosByAnker', 'EventTriggerAddPreComputedCullingBasePos', 'EventTriggerAddPreComputedCullingBasePosAtCamera']
queries: ['EventQueryIsDistanceBetweenActorsClose', 'EventQueryIsRecommendedMelody']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventBasedOnLookAtCamera', 'EventTriggerRequestCameraShake', 'EventMoveCameraToSavePoint']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget', 'EventQueryCameraCheckRayCastForBasedOnLookAt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Fairy[Fairy01]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Fairy[Fairy02]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Fairy[Fairy03]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Fairy[Fairy04]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Fairy[Fairy05]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Fairy[Fairy06]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Fairy[Fairy07]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Wallmaster[WallmasterSpritTemple19]
entrypoint: None()
actions: ['EventPlayAS', 'EventWallmasterEventAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Obj_SpiritTemple_GoddessStatueFace_A_01
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventResetToInGameParametersDoF']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsWorld': True, 'Position': [-79.91000366210938, 96.19999694824219, 73.44999694824219]}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviMoveAroundToPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void Room_08_SwitchOn_01() {
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SpiritTemple_Room08_AmosRightPosition', 'Index': -1}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorA': True, 'ActorNameA': 'DestinationAnchor', 'InstanceNameA': 'Point2', 'ActorNameB': 'Player_Event', 'CheckDistance': 1.5, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False}) {
                Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'OffsetDist': 1.0, 'AnchorInstanceName': 'Point2'})
            }
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Event6:
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Point1', 'PosVector': [0.0, 0.0, 8.0], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Point1', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsDoNavi': True, 'SlowTurn': True, 'PosOffset': [0.0, 0.0, -4.0], 'OffsetBase': 1})
            }
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SpiritTemple_Room08_AmosRightPosition', 'Index': -1}) {
                SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
                EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SpiritTemple_Room08_Unlocked_05', 'Index': -1, 'Value': True})
            } else {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SpiritTemple_Room08_StepSwitchOnLink'})
            }
        } else {
            goto Event6
        }
    } else {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        goto Event6
    }
}

void SpiritTemple_Level_Room_19_SwitchOn_01() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'Obj_SolarSwitch_A_02', 'ToleranceDistance': 1.0, 'ToleranceXZAngle': 0.0, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 0.0, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetActorInstanceName': 'SpiritTemple_02', 'IdealDistance': 4.0}) {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorInstanceName': 'SpiritTemple_02', 'ToleranceDistance': 1.0, 'ToleranceYDownwardAngle': 0.0, 'ToleranceYUpwardAngle': 15.0, 'MoveTime': 0, 'TargetActorName': 'Obj_SolarSwitch_A_02', 'LookAtVectorXZ': 0, 'ToleranceXZAngle': 20.0, 'CameraCollisionMode': 2, 'TargetOffset': [0.0, 0.0, 0.5], 'IdealDistance': 4.5, 'LookAtVectorY': 0})
    } else {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorInstanceName': 'SpiritTemple_02', 'ToleranceDistance': 1.0, 'ToleranceYDownwardAngle': 0.0, 'ToleranceYUpwardAngle': 15.0, 'TargetActorName': 'Obj_SolarSwitch_A_02', 'ToleranceXZAngle': 20.0, 'TargetOffset': [0.0, 0.0, 0.5], 'CameraCollisionMode': 2, 'IdealDistance': 4.5, 'LookAtVectorXZ': 0, 'MoveTime': 45})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'Point1', 'ToleranceDistance': 2.0, 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IdealDistance': 6.5, 'TargetOffset': [0.0, 1.25, 0.0], 'ToleranceYDownwardAngle': 15.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceXZAngle': 20.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'Point1', 'CheckDistance': 1.0}) {
        Player_Event.EventPlayerSeparatedFromAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Point1', 'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 2.0, 'SeparatedDIstance': 1.0, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
    }

    call ShadowTemple_Gimmick.FallTBox_0()

    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'Point1', 'IsDoNavi': True, 'SlowTurn': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
}

void Room_10_SwitchOn_01() {

    call FocusOnGimmick.HangingStartUp()

    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 2.0, -4.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 1, 'Actor2InstanceName': '', 'PosVector': [0.0, 1.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': '', 'EnableCameraAlpha': True, 'Actor1ActorName': 'Obj_SolarSwitch_A_01', 'Actor1InstanceName': 'SpiritTemple_02', 'PosVectorSetType': 1, 'AtVectorSetType': 3, 'MoveTime': 45, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerCameraSavePoint()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TBox', 'AngleThreshold': 60.0, 'WorldPos': [0.0, 0.0, 0.0]}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'DestinationAnchor', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 2.0, -4.0], 'Actor2InstanceName': 'TBox', 'PosVectorSetType': 4, 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 1, 'AtVectorSetType': 4, 'PosVector': [0.0, 1.0, 6.5], 'AtVector': [0.0, 1.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'DestinationAnchor', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 2.0, -4.0], 'Actor2InstanceName': 'TBox', 'PosVectorSetType': 4, 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 1, 'AtVectorSetType': 4, 'PosVector': [0.0, 1.0, 6.5], 'AtVector': [0.0, 1.0, 0.0], 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    fork {

        call TreasureBoxAppear.Act_TBoxAppear_Magic_0()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBox'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 1.0, 'InstanceNameB': 'TBox'}) {
                Player_Event.EventPlayerMoveToAnchor({'IsMoveAnchorFrontDir': False, 'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsWaitEnd': True, 'AnchorInstanceName': 'Point1', 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            }
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'Point1', 'IsDoNavi': True, 'SlowTurn': True})
        }
    }

    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 1.0, -1.5]}) {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.5, 1.75, 2.5]}) {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.5, 1.75, -2.5]}) {
                EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 2.0, -4.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 1, 'Actor2InstanceName': '', 'Actor2ActorName': '', 'MoveTime': 45, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [-0.5, 1.75, -2.5], 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 2.0, -4.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 1, 'Actor2InstanceName': '', 'Actor2ActorName': '', 'MoveTime': 45, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.5, 1.75, -2.5], 'IsEnableRevertFast': False})
            }
            Event716:
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 2.0, -4.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 1, 'Actor2InstanceName': '', 'Actor2ActorName': '', 'MoveTime': 45, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.5, 1.75, 2.5], 'IsEnableRevertFast': False})
            goto Event716
        }
    }
}

void SpiritTemple_Level_Room_05_SilverToken_Appear() {
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsLinearMove': False, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraPos', 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'MoveTime': 0, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void SpiritTemple_Level_Room_05_SilverToken_Unlock() {

    call Common.AirStartUp()

    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {

        call ShadowTemple_Gimmick.Silver_Tolken_Finish({'DoorName': ''})

    } else {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsLinearMove': False, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraPos', 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'MoveTime': 0, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !Player_Event.EventQueryCheckPlayerState({'State': 3})
    && !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'CheckDistance': 3.0, 'InstanceNameA': '', 'InstanceNameB': 'PlayerAvoid'}) {
        Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsMoveAnchorFrontDir': False, 'AnchorInstanceName': 'PlayerAvoid', 'IsWaitEnd': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
    }
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsLinearMove': False, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraPos', 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 70, 'IsWaitEnd': False, 'PosVector': [0.0, 1.0, 0.0], 'AtVector': [0.0, -1.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 95})
    } {
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'UpperASCommand': '', 'ActorName': 'DestinationAnchor', 'Target': 5, 'UseNormalTurn': False, 'InstanceName': '', 'IsWaitEnd': True, 'IsDoNavi': True, 'SlowTurn': True})
        }
    }

    EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'Power': 0.20000000298023224, 'IsRumbleController': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
}

void SpiritTemple_Level_Room_10_SilverToken_Appear() {
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor1InstanceName': '', 'FovySetType': 1, 'TargetFovy': 0.0, 'IsWaitEnd': False, 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'PosVectorSetType': 3, 'PosVector': [0.0, 2.0, -3.0], 'MoveTime': 60, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void SpiritTemple_Level_Room_10_SilverToken_Unlock() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call ShadowTemple_Gimmick.Silver_Tolken_Finish({'DoorName': ''})

    EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 0.0, 'ToleranceYDownwardAngle': 0.0, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceXZAngle': 0.0, 'IdealDistance': 12.5, 'ToleranceDistance': 5.0, 'TargetOffset': [0.0, 1.0, 0.0]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
}

void SpiritTemple_Level_Room_16_SilverToken_Appear() {
    EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetOffset': [0.0, 1.25, 0.0], 'TargetActorInstanceName': '', 'ToleranceXZAngle': 0.0, 'MoveTime': 0, 'ToleranceDistance': 1.0, 'ToleranceYDownwardAngle': 15.0, 'ToleranceYUpwardAngle': 20.0, 'IdealDistance': 11.0})
}

void SpiritTemple_Level_Room_16_SilverToken_Unlock() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call ShadowTemple_Gimmick.Silver_Tolken_Finish({'DoorName': ''})

    EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetOffset': [0.0, 1.25, 0.0], 'TargetActorInstanceName': '', 'ToleranceXZAngle': 0.0, 'MoveTime': 0, 'ToleranceDistance': 1.0, 'ToleranceYDownwardAngle': 15.0, 'ToleranceYUpwardAngle': 20.0, 'IdealDistance': 11.0})

    fork {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SpiritTemple_Room16_PlayerPosCheck', 'Index': -1}) {
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'PlayerPos'})
        }
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    }

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorInstanceName': '', 'VectorSetType': 3, 'ActorName': 'Player_Event', 'Vector': [0.0, 1.5, -1.0]}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void SpiritTemple_Level_Room_07_SunSwitchOn() {
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'InstanceName': 'Point1', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'Target': 5, 'UseNormalTurn': False, 'UpperASCommand': '', 'IsWaitEnd': False, 'IsDoNavi': True})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-9.100000381469727, 2.6600000858306885, 1.2999999523162842], 'AtVector': [-6.150000095367432, 0.9800000190734863, 1.899999976158142], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Obj_SolarSwitch_A_01', 'Actor1InstanceName': 'SpiritTemple_02', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'LightPoursDown', 'IsIgnoreDucking': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [-32.15999984741211, 120.01000213623047, -47.4900016784668], 'TargetFovy': 50.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 0, 'PosVector': [-32.4900016784668, 123.25, -47.4900016784668], 'Actor1ActorName': 'Obj_SolarSwitch_A_01', 'Actor1InstanceName': 'SpiritTemple_02', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [-32.15999984741211, 120.01000213623047, -47.4900016784668], 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-32.4900016784668, 123.0, -47.4900016784668], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 50.0, 'Actor1ActorName': 'Obj_SolarSwitch_A_01', 'Actor1InstanceName': 'SpiritTemple_02', 'MoveTime': 90, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 15, 'TargetFovy': 50.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Obj_SolarSwitch_A_01', 'Actor1InstanceName': 'SpiritTemple_02', 'PosVector': [-32.529998779296875, 125.0, -47.5099983215332], 'AtVector': [-32.41999816894531, 120.01000213623047, -47.5099983215332], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'AboidPos', 'IsAnchorActorB': True, 'CheckDistance': 0.75}) {
                Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsWaitEnd': True, 'IsMoveAnchorFrontDir': False, 'AnchorInstanceName': 'PlayerPos', 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
            }
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'Target': 3, 'ActorName': 'Obj_SolarSwitch_A_01', 'UpperASCommand': '', 'UseNormalTurn': False, 'InstanceName': 'SpiritTemple_02', 'IsDoNavi': True, 'SlowTurn': True})
        }
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [-27.049999237060547, 122.19999694824219, -48.91999816894531], 'TargetFovy': 50.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-30.40999984741211, 122.7300033569336, -49.72999954223633], 'Actor1ActorName': 'Obj_SolarSwitch_A_01', 'Actor1InstanceName': 'SpiritTemple_02', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SpiritTemple_Room07_Unlocked'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UpperASCommand': 'EvtSurprise', 'Target': 5, 'InstanceName': 'Point2', 'WorldPos': [0.0, 0.0, 0.0], 'UseNormalTurn': False, 'IsWaitEnd': False, 'IsDoNavi': True})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
}

void DessertColossus_IsStormSongPlayed() {

    call Dm_SY_Ocarina.PlayOcarinaFree({'HasRecommendedMelody': True, 'MelodyType': 5})

    if !GameSystemActor.EventQueryIsRecommendedMelody()
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DesertColossus_IsStormSongPlayed_02'}) {
        PostProcessingActor.EventResetToInGameParametersDoF({'TransitionFrame': 0, 'IsWaitEnd': True})
        Player_Event.EventTriggerParticipateEvent()
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'DisableThirdPersonAdjust', 'FadeTime': 0.0})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor2InstanceName': 'oasis_CameraPan', 'Actor2ActorName': 'CameraAnchor', 'EnableCameraAlpha': True, 'LookAtDis': -1.0, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 3, 'MoveTime': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.5, -3.0], 'AtVector': [0.0, 5.0, 0.0], 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

        fork {

            call NaviEventCommon.Navi_followPlayer()

        } {
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'SlowTurn': False, 'InstanceName': 'oasis_CameraPan', 'UseNormalTurn': False, 'IsWaitEnd': False, 'IsDoNavi': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DessertClossus_IsStormSongPlayed'})
        } {
            Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DessertColossus_IsStormSongPlayed'})
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Rain', 'IsIgnoreDucking': False})
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'DessertColossus_IsStormSongPlayed', 'SLinkKey': ''})
        } {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'ActorInstanceName': 'oasis_CameraPan', 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'CameraAnchor'}) {
                EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'PosVector': [0.0, 2.0, -4.0], 'AtVector': [0.0, -0.5, 0.0], 'LookAtDis': -4.0, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor2InstanceName': 'oasis_CameraPan', 'Actor2ActorName': 'CameraAnchor', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                EventCamera.EventBasedOnLookAtCamera({'ToleranceXZAngle': 10.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'MoveTime': 1, 'IsWaitEnd': True, 'TargetActorInstanceName': 'oasis_CameraPan', 'IdealDistance': 6.0, 'TargetOffset': [0.0, 0.0, 0.0], 'TargetActorName': 'CameraAnchor'})
            } else
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'oasis_CameraPan', 'CheckDistance': 4.0, 'ActorNameB': 'CameraAnchor'}) {
                EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 4, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'Actor2InstanceName': 'oasis_CameraPan', 'Actor2ActorName': 'CameraAnchor', 'LookAtDis': 5.0, 'AtVector': [0.0, 1.0, 0.0], 'PosVector': [1.5, 2.0, -3.0], 'EnableCameraAlpha': True, 'MoveTime': 75, 'IsEnableRevertFast': False})
            } else {
                EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'ToleranceDistance': 0.0, 'IsWaitEnd': True, 'ToleranceYUpwardAngle': 30.0, 'ToleranceXZAngle': 0.0, 'TargetActorInstanceName': 'oasis_CameraPan', 'TargetActorName': 'CameraAnchor', 'ToleranceYDownwardAngle': 24.0, 'TargetOffset': [0.0, 0.5, 0.0], 'LookAtVectorXZ': 0, 'IdealDistance': 9.0, 'MoveTime': 75})
            }
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            Npc_Navi.EventPlayAS({'ASName': 'EvtLookAroundAttention', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtLookAroundAttentionUnder', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 360})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})

        fork {
            EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'ToleranceDistance': 0.0, 'MoveTime': 60, 'IsWaitEnd': True, 'ToleranceYUpwardAngle': 30.0, 'ToleranceXZAngle': 0.0, 'TargetActorInstanceName': 'oasis_CameraPan', 'TargetActorName': 'CameraAnchor', 'ToleranceYDownwardAngle': 24.0, 'TargetOffset': [0.0, 0.5, 0.0], 'LookAtVectorXZ': 0, 'IdealDistance': 12.0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DesertColossus_IsStormSongPlayed_01'})
            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Obj_Fairy', 'InstanceName': 'Fairy01'})

            fork {
                Obj_Fairy[Fairy01].EventTriggerParticipateEvent()
                Obj_Fairy[Fairy01].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Drop_OasisSpot', 'IsWaitEnd': False, 'IsAnimeDriven': True})
            } {
                GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Obj_Fairy', 'InstanceName': 'Fairy02'})

                fork {
                    Obj_Fairy[Fairy02].EventTriggerParticipateEvent()
                    Obj_Fairy[Fairy02].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Drop_OasisSpot', 'IsWaitEnd': False, 'IsAnimeDriven': True})
                } {
                    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Obj_Fairy', 'InstanceName': 'Fairy03'})

                    fork {
                        Obj_Fairy[Fairy03].EventTriggerParticipateEvent()
                        Obj_Fairy[Fairy03].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Drop_OasisSpot', 'IsWaitEnd': False, 'IsAnimeDriven': True})
                    } {
                        GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Obj_Fairy', 'InstanceName': 'Fairy04'})

                        fork {
                            Obj_Fairy[Fairy04].EventTriggerParticipateEvent()
                            Obj_Fairy[Fairy04].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Drop_OasisSpot', 'IsWaitEnd': False, 'IsAnimeDriven': True})
                        } {
                            GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Obj_Fairy', 'InstanceName': 'Fairy05'})

                            fork {
                                Obj_Fairy[Fairy05].EventTriggerParticipateEvent()
                                Obj_Fairy[Fairy05].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Drop_OasisSpot', 'IsWaitEnd': False, 'IsAnimeDriven': True})
                            } {
                                GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Obj_Fairy', 'InstanceName': 'Fairy06'})

                                fork {
                                    Obj_Fairy[Fairy06].EventTriggerParticipateEvent()
                                    Obj_Fairy[Fairy06].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Drop_OasisSpot', 'IsWaitEnd': False, 'IsAnimeDriven': True})
                                } {
                                    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'IsActorCreateRequest': True, 'ActorName': 'Obj_Fairy', 'InstanceName': 'Fairy07'})
                                    Obj_Fairy[Fairy07].EventTriggerParticipateEvent()
                                    Obj_Fairy[Fairy07].EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'Drop_OasisSpot', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'IsAllSlot': False})
                                }

                            }

                        }

                    }

                }

            }

            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtSurpriseS', 'UseAnmDriven': True, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        }

        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 2.5})
    }
}

void DesertColossus_SecretHole_AppearTreasureBox() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventTriggerAddPreComputedCullingBasePosByAnker({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'TBox'})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'ActorInstanceName': 'TBox', 'VectorSetType': 3, 'Vector': [0.0, 2.5, 5.0], 'IsIgnoreVectorReferenceActorRot': False}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'TBox', 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 1, 'EnableCameraAlpha': True, 'Actor2InstanceName': '', 'AtVector': [0.0, 0.5, 0.0], 'Actor2ActorName': '', 'PosVectorSetType': 3, 'PosVector': [0.0, 2.5, 5.0], 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        Event156:

        call ShadowTemple_Gimmick.TBox_Aboid_BS_0({'TBoxName': 'TBox', 'PlayerDistination': 'AppearTreasurePlayerPos'})

    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'TBox', 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'EnableCameraAlpha': True, 'Actor2InstanceName': '', 'AtVector': [0.0, 0.5, 0.0], 'Actor2ActorName': '', 'PosVectorSetType': 3, 'PosVector': [0.0, 2.5, 5.0], 'IsEnableRevertFast': False})
        goto Event156
    }
}

void HountedWasteland_Ruins_AppearTreasureBox() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'TBox', 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'EnableCameraAlpha': True, 'Actor2InstanceName': '', 'AtVector': [0.0, 0.5, 0.0], 'Actor2ActorName': '', 'PosVectorSetType': 3, 'PosVector': [3.0, 2.5, 5.0], 'IsEnableRevertFast': False})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 1.5, 'InstanceNameB': 'TBox'}) {
        if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'AngleThreshold': 90.0, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': 'TBox'}) {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 10.0, 0.0], 'InstanceName': 'TBox'})
        } else {
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'PosOffset': [0.0, 10.0, 0.0], 'OffsetBase': 1, 'IsDoNavi': True, 'InstanceName': 'TBox', 'SlowTurn': True})
        }
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 0.5, 'InstanceNameB': 'TBox'}) {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'OffsetDist': 2.0, 'AnchorInstanceName': 'TBox'})
        } else {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'OffsetDist': 1.0, 'AnchorInstanceName': 'TBox'})
        }

        call ShadowTemple_Gimmick.FallTBox_0()

        Event712:
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'IsDoNavi': True, 'InstanceName': 'TBox', 'SlowTurn': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    } else {

        call ShadowTemple_Gimmick.FallTBox_0()

        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBox'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        goto Event712
    }
}

void SpiritTemple_Level_Room_30_BoardNetFall() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'Point1', 'ToleranceYUpwardAngle': 10.0, 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceDistance': 0.0, 'IdealDistance': 8.0, 'TargetOffset': [1.0, 1.5, 3.0], 'MoveTime': 60})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Point1', 'Target': 5})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'UpperASCommand': '', 'ActorName': 'DestinationAnchor', 'Target': 5, 'UseNormalTurn': False, 'IsWaitEnd': False, 'InstanceName': 'Point1', 'IsDoNavi': True, 'SlowTurn': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 65})
    EventCamera.EventTriggerRequestCameraShake({'Power': 0.10000000149011612, 'Pattern': 2, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
}

void SpiritTemple_Level_Room_03_BoardNetFall() {
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'TargetActorInstanceName': 'Point1', 'ToleranceDistance': 2.0, 'TargetOffset': [0.0, 1.0, 0.0], 'MoveTime': 30, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 20.0, 'IdealDistance': 7.5, 'ToleranceYDownwardAngle': 10.0, 'ToleranceXZAngle': 0.0})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'Point1', 'CheckDistance': 9.0}) {
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'PlayerMovePos', 'ActorName': 'DestinationAnchor'})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Point1', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 1, 'CameraCollisionMode': 0, 'AtVector': [0.0, 3.0, 6.0], 'MoveTime': 0, 'TargetFovy': 50.0, 'PosVector': [3.0, 2.5, 12.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'UseNormalTurn': False, 'InstanceName': 'Point1', 'PosOffset': [0.0, 6.0, 0.0], 'IsDoNavi': True, 'SlowTurn': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
        Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'Target': 5, 'TurnFaceControlType': 1, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Point1'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Point1', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 1, 'CameraCollisionMode': 0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'AtVector': [0.0, 1.5, 6.0], 'TargetFovy': 55.0, 'PosVector': [3.0, 2.0, 12.5], 'MoveTime': 30, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'Power': 0.15000000596046448, 'IsRumbleController': True})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void SpiritTemple_Level_Room_32_SwitchOn_01() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'MoveTime': 90, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Point1', 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 4, 'PosVector': [0.0, 2.25, -0.5], 'IsPosVectorReferenceActorPosOnce': True, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call ShadowTemple_Gimmick.TBox_Aboid_BS_0({'TBoxName': 'TBox', 'PlayerDistination': 'TBox'})

}

void SpritTemple_Room03_OpenShutter() {

    call FocusOnGimmick.HangingStartUp()

    GameSystemActor.EventTriggerAddPreComputedCullingBasePosByAnker({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'PlayerPos2'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SpiritTemple_Level_Room_02_PlayerPosChange1', 'Index': -1}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': 'Room03_OpenShutter_CamAim', 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [0.0, 1.0, 5.0], 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos1', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
        Event226:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        } {
            EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'InstanceNameB': 'Point1', 'CheckDistance': 5.0}) {
                Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'Point1', 'PosOffset': [0.0, 0.0, 0.0]})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'UseNormalTurn': False, 'InstanceName': 'Point1', 'PosOffset': [0.0, 0.0, 0.0], 'IsDoNavi': True, 'SlowTurn': True})
                Event227:
                SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            } else {
                Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': 'Point2'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'UseNormalTurn': False, 'InstanceName': 'Point2', 'PosOffset': [0.0, 0.0, 0.0], 'IsDoNavi': True, 'SlowTurn': True})
                goto Event227
            }
        } else {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            goto Event227
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SpiritTemple_LevelRoom_02_PlayerPosChange2', 'Index': -1}) {
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos2', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': 'Room03_OpenShutter_CamAim', 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [0.0, 1.0, 5.0], 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        goto Event226
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SpiritTemple_LevelRoom_02_PlayerPosChange1_2'}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': 'Room03_OpenShutter_CamAim', 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [0.0, 1.0, 5.0], 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventTriggerAddPreComputedCullingBasePosByAnker({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'PlayerPos1_2'})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'PlayerPos1_2'})
        Event679:
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        goto Event226
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SpiritTemple_LevelRoom_02_PlayerPosChange2_2'}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': 'Room03_OpenShutter_CamAim', 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [0.0, 1.0, 5.0], 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventTriggerAddPreComputedCullingBasePosByAnker({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'PlayerPos2_2'})
        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'PlayerPos2_2'})
        goto Event679
    } else
    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'CheckDistance': 7.0, 'InstanceNameB': 'Point1'}) {
            Event223:
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'ActorInstanceName': 'Room03_OpenShutter_CamAim', 'Vector': [0.0, 1.0, 5.0]}) {
                EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': 'Room03_OpenShutter_CamAim', 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [0.0, 1.0, 5.0], 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
                goto Event226
            } else {
                EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1InstanceName': 'Room03_OpenShutter_CamAim', 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [0.0, 1.0, 5.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                goto Event226
            }
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'InstanceNameB': 'Point2', 'CheckDistance': 7.0}) {
            goto Event223
        } else
        if !Player_Event.EventQueryCheckPlayerState({'State': 32}) {

            fork {
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
            } {
                Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            }

        }
        goto Event223
    } else
    goto Event223
}

void SpiritTemple_Level_Room_04_EyeSwitchOn() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'FireWall', 'WorldPos': [0.0, 0.0, 0.0], 'AngleThreshold': 45.0}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'FireWall', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': True, 'AtVectorSetType': 3, 'PosVector': [0.0, 1.0, -6.0], 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'AtVector': [0.0, -0.5, 1.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'FireWall', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': True, 'AtVectorSetType': 3, 'PosVector': [0.0, 1.0, -6.0], 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'AtVector': [0.0, -0.5, 1.5], 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsEnableRevertFast': False})
    }
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
}

void SpritTemple_Room04_OpenShutter() {
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SpiritTemple_Room04_EnemyDestroy', 'Index': -1}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'MoveTime': 0, 'Actor1ActorName': '', 'AtVectorSetType': 0, 'TargetFovy': 55.0, 'PosVector': [-33.72999954223633, 107.75, -76.3759994506836], 'AtVector': [-33.72999954223633, 106.55000305175781, -73.3759994506836], 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Event231:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': 'Room04_OpenShutter_CamAim', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 90, 'PosVector': [0.0, 0.0, 8.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': False, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'IgnoreTargetPosMove': True, 'UpperASCommand': '', 'UseNormalTurn': False, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Room04_OpenShutter_CamAim', 'PosOffset': [0.0, -1.0, -5.0], 'IsDoNavi': True, 'SlowTurn': True})
        }
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SpiritTemple_Room04_EnemyDestroy', 'Value': False, 'Index': -1})
    } else {
        goto Event231
    }
}

void SpritTemple_Room05_AppearTreasure() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SpiritTemple_Room05_BoardNet_On'}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.5, 0.0], 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActor': 1, 'Actor1InstanceName': 'Room05_AppearTreasure', 'Actor2InstanceName': 'TBox', 'PosVector': [0.0, 1.0, 4.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

        call ShadowTemple_Gimmick.FallTBox_0()

        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'InstanceName': 'TBox', 'UseNormalTurn': False, 'IsDoNavi': True, 'SlowTurn': True})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        Event15:
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVectorSetType': 4, 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'PlayerCamera', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor2ActorName': 'Player_Event', 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 4, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 2.0, -3.0], 'AtVector': [0.0, 1.25, 0.0], 'MoveTime': 60, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.5, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActor': 1, 'Actor2InstanceName': 'TBox', 'Actor1InstanceName': 'CameraPos2', 'PosVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        call ShadowTemple_Gimmick.FallTBox_0()

        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UpperASCommand': '', 'ActorName': 'DestinationAnchor', 'InstanceName': 'Room05_AppearTreasure', 'Target': 5, 'UseNormalTurn': False, 'IsDoNavi': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        goto Event15
    }
}

void SpritTemple_Room07_AppearTreasure() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActor': 1, 'Actor1InstanceName': 'TBox', 'Actor2InstanceName': '', 'PosVector': [0.0, 2.0, 7.0], 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'Actor2ActorName': '', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call ShadowTemple_Gimmick.TBox_Aboid_Immediate_BS0({'TBoxName': 'TBox', 'PlayerDistination': 'DestinationAnchor'})

}

void SpiritTemple_Level_Room_08_Ocarina() {

    call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 0})

    if !GameSystemActor.EventQueryIsRecommendedMelody() {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'LatShiftRange': 5.0, 'LongShiftRange': 5.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'LookAtDis': -1.0, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 1, 'TargetFovy': 60.0, 'Actor1InstanceName': 'Point1', 'Actor2InstanceName': '', 'Actor2ActorName': '', 'MoveTime': 0, 'EnableCameraAlpha': True, 'PosVector': [3.5, 2.0, 3.5], 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        call ShadowTemple_Gimmick.FallTBox_instead()

        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'UpperASCommand': '', 'ActorName': 'DestinationAnchor', 'Target': 5, 'UseNormalTurn': False, 'InstanceName': 'Point1', 'IsDoNavi': True, 'SlowTurn': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }
}

void SpritTemple_Room08_OpenShutter() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'FovySetType': 1, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'IsWaitEnd': True, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Room08_OpenShutter_CamAim', 'Actor1InstanceName': 'CameraPos', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'MoveTime': 0, 'TargetFovy': 10.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    } {
        Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsWaitEnd': True, 'IsMoveAnchorFrontDir': False, 'AnchorInstanceName': 'PlayerPos', 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'Room08_OpenShutter_CamAim', 'TurnFaceControlType': 2, 'IsDoNavi': True, 'SlowTurn': True})
    }

    Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'FovySetType': 1, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVectorSetType': 3, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'MoveTime': 120, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Room08_OpenShutter_CamAim', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'PosVector': [0.0, 4.0, -3.0], 'TargetFovy': -10.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': True, 'AfterKeepEndInterpolateCountScale': 1.0, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void SpritTemple_Room08_AppearTreasureBox() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'TBox', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'FovySetType': 0, 'MoveTime': 0, 'PosVector': [0.0, 3.5, 7.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call ShadowTemple_Gimmick.TBox_Aboid0({'TBoxName': 'Room08_AppearTreasureCamAim', 'PlayerDistination': 'Room08_AppearTreasurePlayerPos'})

    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBox', 'CheckDistance': 12.5}) {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': '', 'VectorSetType': 3}) {
            Event654:
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        goto Event654
    }
}

void SpritTemple_Room12_OpenShutter() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 105})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SpiritTemple_Room12_ChairBroken'}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 2.0, -4.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 1, 'AtVectorSetType': 4, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraPos', 'Actor2InstanceName': 'Room12_OpenShutter_CamAim', 'PosVectorSetType': 3, 'MoveTime': 0, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [0.0, 0.5, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 2.0, -4.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 1, 'AtVectorSetType': 4, 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Room12_OpenShutter_CamAim', 'PosVectorSetType': 3, 'MoveTime': 0, 'Actor1InstanceName': 'CameraPos2', 'CameraCollisionMode': 0, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Room12_OpenShutter_CamAim'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'Room12_OpenShutter_CamAim', 'IsDoNavi': True, 'SlowTurn': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundStartSceneBgm({'StartType': 2, 'BgmName': 'BGM_SpiritTemple'})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'ActorInstanceName': '', 'ActorName': 'Player_Event', 'Vector': [0.0, 1.5, -2.0]}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void SpritTemple_Room14_OpenShutter() {
    GameSystemActor.EventTriggerAddPreComputedCullingBasePos({'StartPos': [33.0, 107.0, -32.0], 'EndPos': [33.0, 107.0, -32.0]})
    GameSystemActor.EventTriggerAddPreComputedCullingBasePosAtCamera()
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': 'Room14_OpenShutter_Cam1Aim', 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'LookAtDis': 1.0, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'PosVector': [0.0, 1.0, 0.0], 'MoveTime': 30, 'AtVector': [0.0, 0.5, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'ActorInstanceName': 'Room14_OpenShutter_Cam1Aim', 'Vector': [0.0, 1.0, 10.0]}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': 'Room14_OpenShutter_Cam1Aim', 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'AtVector': [0.0, 0.0, 2.5], 'LookAtDis': 1.0, 'MoveTime': 0, 'PosVector': [0.0, 1.0, 12.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': 'Room14_OpenShutter_Cam1Aim', 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'MoveTime': 60, 'AtVector': [0.0, 0.0, 2.5], 'LookAtDis': 1.0, 'PosVector': [0.0, 1.0, 12.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Room14_OpenShutter_Cam1Aim'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Room14_OpenShutter_Cam2Aim', 'MoveTime': 90, 'AtVector': [0.0, 0.0, 3.5], 'LookAtDis': 1.0, 'PosVector': [0.0, 1.0, 12.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'Room14_OpenShutter_Cam2Aim', 'PosOffset': [0.0, 0.0, 0.0]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'UseNormalTurn': False, 'InstanceName': 'Room14_OpenShutter_Cam2Aim', 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'IsDoNavi': True, 'SlowTurn': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'ActorInstanceName': '', 'ActorName': 'Player_Event', 'Vector': [0.0, 1.5, -2.0]}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void SpiritTemple_Level_Room_15_Ocarina() {

    call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 0})

    if !GameSystemActor.EventQueryIsRecommendedMelody() {

        call Common_Camera_Pln.CameraDoF_Default()

        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'LookAtDis': 1.0, 'Actor1InstanceName': 'Room_15_Ocarina_CamAim', 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [4.0, 1.0, 8.0], 'IsIgnoreAtVectorReferenceActorRot': True, 'AtVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsEnableRevertFast': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SpiritTemple_Room15_TBox_On'})

        fork {

            call TreasureBoxAppear.Act_Magic()

            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        } {
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'UseNormalTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': 'Room_15_Ocarina_CamAim', 'IsWaitEnd': False, 'IsDoNavi': True, 'SlowTurn': True})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }
}

void SpiritTemple_Room19_SunSwitchShutterOpen() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventTriggerCameraSavePoint()
    if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'Obj_SolarSwitch_A_02', 'ToleranceDistance': 1.0, 'ToleranceXZAngle': 0.0, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 0.0, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetActorInstanceName': 'SpiritTemple_02', 'IdealDistance': 4.0}) {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorInstanceName': 'SpiritTemple_02', 'ToleranceDistance': 1.0, 'ToleranceYDownwardAngle': 0.0, 'ToleranceYUpwardAngle': 15.0, 'MoveTime': 0, 'TargetActorName': 'Obj_SolarSwitch_A_02', 'LookAtVectorXZ': 0, 'ToleranceXZAngle': 20.0, 'CameraCollisionMode': 2, 'TargetOffset': [0.0, 0.0, 0.5], 'IdealDistance': 4.5})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'FovySetType': 1, 'TargetFovy': 0.0, 'LookAtDis': -1.0, 'MoveTime': 60, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Room19_Cam2Aim', 'Actor1InstanceName': 'CameraPos4', 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [3.5, 0.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        Event468:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'InstanceName': 'Room19_Cam2Aim', 'IsWaitEnd': False, 'IsDoNavi': True, 'SlowTurn': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': '', 'VectorSetType': 3}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorInstanceName': 'SpiritTemple_02', 'ToleranceDistance': 1.0, 'ToleranceYDownwardAngle': 0.0, 'ToleranceYUpwardAngle': 15.0, 'TargetActorName': 'Obj_SolarSwitch_A_02', 'ToleranceXZAngle': 20.0, 'TargetOffset': [0.0, 0.0, 0.5], 'CameraCollisionMode': 2, 'IdealDistance': 4.5, 'LookAtVectorXZ': 0, 'MoveTime': 45})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'FovySetType': 1, 'TargetFovy': 0.0, 'LookAtDis': -1.0, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Room19_Cam2Aim', 'Actor1InstanceName': 'CameraPos4', 'PosVector': [3.5, 0.0, 0.0], 'MoveTime': 0, 'AtVector': [0.0, 0.5, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event468
    }
}

void SpritTemple_Room22_StepSwitch() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Room22_StepSwitch_CamAim', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 3, 'PosVector': [-2.0, 2.0, -4.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'UseNormalTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'InstanceName': 'Room22_StepSwitch_CamAim', 'IsDoNavi': True, 'SlowTurn': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void SpritTemple_Room22_OpenShutter() {
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SpiritTemple_Room04_EnemyDestroy', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SpiritTemple_Room22_MarkBlock_Appear'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'EnableCameraAlpha': True, 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [34.70000076293945, 133.39999389648438, -24.610000610351562], 'AtVector': [40.630001068115234, 131.6699981689453, -24.6299991607666], 'Actor2ActorName': '', 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Event490:
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'Actor2InstanceName': 'Room22_OpenShutter_CamAim', 'PosVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 1.0, 12.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Room22_OpenShutter_CamAim'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'UseNormalTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'InstanceName': 'Room22_OpenShutter_CamAim', 'IsDoNavi': True, 'SlowTurn': True})
            Event603:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        } else {
            goto Event603
        }
    } else {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        goto Event490
    }
}

void SpritTemple_Room23_StepSwitch() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'OverwriteRotNearDist': -1.0, 'IsUseAfterPlayerTurn': False, 'ArrivedASCommand': 'EvtCaution', 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'OffsetType': -1})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'Room23_StepSwitch_CamAim'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'PosVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2InstanceName': 'Room23_StepSwitch_CamAim', 'AtVector': [0.0, -1.0, 0.0], 'PosVector': [0.0, 1.0, 13.0], 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        Event608:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Room23_StepSwitch_CamAim'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'UseNormalTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'InstanceName': 'Room23_StepSwitch_CamAim', 'IsDoNavi': True, 'SlowTurn': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SpiritTemple_Room23_IsStepOn'}) {
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SpiritTemple_Room23_StepSwitchOnLink'})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'PosVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2InstanceName': 'Room23_StepSwitch_CamAim', 'AtVector': [0.0, -1.0, 0.0], 'PosVector': [0.0, 1.0, 13.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event608
    }
}

void SpritTemple_Room23_SunSwitch() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Obj_SolarSwitch_A_02', 'Actor2InstanceName': '', 'AtVectorSetType': 3, 'Actor2ActorName': '', 'PosVectorSetType': 1, 'MoveTime': 30, 'PosVector': [0.0, 1.0, -2.0], 'AtVector': [0.0, 0.0, 0.5], 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2InstanceName': 'Room23_SunSwitch_CamAim', 'AtVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'Actor1ActorName': 'Obj_SolarSwitch_A_02', 'PosVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 1, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void SpritTemple_Room25_OpenShutter() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SpiritTemple_Room25_ChairBroken'}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 2.0, -4.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 1, 'AtVectorSetType': 4, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraPos', 'PosVectorSetType': 3, 'MoveTime': 0, 'AtVector': [0.0, 1.5, 0.0], 'Actor2InstanceName': 'Room25_OpenShutter_CamAim', 'PosVector': [0.0, 1.25, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActorOffset': [0.0, 2.0, -4.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 1, 'AtVectorSetType': 4, 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'MoveTime': 0, 'Actor1InstanceName': 'CameraPos2', 'CameraCollisionMode': 0, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'Actor2InstanceName': 'Room25_OpenShutter_CamAim', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Room25_OpenShutter_CamAim'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'Room25_OpenShutter_CamAim', 'IsDoNavi': True, 'SlowTurn': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundStartSceneBgm({'StartType': 2, 'BgmName': 'BGM_SpiritTemple'})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'ActorInstanceName': '', 'ActorName': 'Player_Event', 'Vector': [0.0, 1.75, -2.5]}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void SpiritTemple_Level_Room_19_wallmaster() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'ToleranceDistance': 1.0, 'ToleranceXZAngle': 0.0, 'ToleranceYUpwardAngle': 15.0, 'ToleranceYDownwardAngle': 0.0, 'TargetOffset': [0.0, 0.0, 0.0], 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetActorInstanceName': 'SpiritTemple_02', 'IdealDistance': 4.0, 'TargetActorLink': 'Obj_SolarSwitch_A_03'}) {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorInstanceName': 'SpiritTemple_02', 'ToleranceDistance': 1.0, 'ToleranceYDownwardAngle': 0.0, 'ToleranceYUpwardAngle': 15.0, 'MoveTime': 0, 'LookAtVectorXZ': 0, 'ToleranceXZAngle': 20.0, 'CameraCollisionMode': 2, 'TargetOffset': [0.0, 0.0, 0.5], 'IdealDistance': 4.5, 'TargetActorName': 'Obj_SolarSwitch_A_03'})
    } else {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorInstanceName': 'SpiritTemple_02', 'ToleranceDistance': 1.0, 'ToleranceYDownwardAngle': 0.0, 'ToleranceYUpwardAngle': 15.0, 'ToleranceXZAngle': 20.0, 'TargetOffset': [0.0, 0.0, 0.5], 'CameraCollisionMode': 2, 'IdealDistance': 4.5, 'TargetActorName': 'Obj_SolarSwitch_A_03', 'LookAtVectorXZ': 0, 'MoveTime': 45})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 60, 'TargetOffset': [0.0, 1.25, 0.0], 'TargetActorInstanceName': '', 'IdealDistance': 5.0, 'ToleranceDistance': 1.0, 'ToleranceYDownwardAngle': 10.0, 'ToleranceYUpwardAngle': 20.0, 'ToleranceXZAngle': 25.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': '', 'CheckDistance': 1.25}) {
        Player_Event.EventPlayerSeparatedFromAnchor({'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 2.0, 'AnchorInstanceName': '', 'SeparatedDIstance': 1.25, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
    }
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': '', 'IsDoNavi': False, 'SlowTurn': True})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_Wallmaster', 'InstanceName': 'WallmasterSpritTemple19', 'IsWaitEnd': True, 'IsActorCreateRequest': True})
        Enemy_Wallmaster[WallmasterSpritTemple19].EventWallmasterEventAppear({'IsWaitEnd': True, 'AnchorInstanceName': ''})
        Enemy_Wallmaster[WallmasterSpritTemple19].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'AppearWait'})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution', 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': '', 'VectorSetType': 3}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void SpiritTemple_Level_Room_29_Ocarina() {

    call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 0})

    if !GameSystemActor.EventQueryIsRecommendedMelody() {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 6.0], 'Actor1ActorName': 'DestinationAnchor', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Room_29_Ocarina_CamAim', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'CameraPos', 'PosVectorSetType': 4, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 3, 'IsLinearMove': False, 'MoveTime': 0, 'AtVector': [0.0, 0.0, 0.0], 'PosVector': [0.0, 2.0, -1.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SpiritTemple_Room29_Unlocked'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'UseNormalTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'InstanceName': 'Room_29_Ocarina_CamAim', 'IsDoNavi': True, 'SlowTurn': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }
}

void SpritTemple_Room30_StepSwitch() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 6.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Room30_StepSwitch_Cam1Aim', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Room30_StepSwitch_Cam2Aim', 'PosVector': [0.0, 0.0, 0.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 2, 'AtVectorSetType': 4, 'CameraCollisionMode': 0, 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'UpperASCommand': '', 'ActorName': 'DestinationAnchor', 'InstanceName': 'Room30_StepSwitch_Cam1Aim', 'Target': 5, 'UseNormalTurn': False, 'IsWaitEnd': False, 'IsDoNavi': True, 'SlowTurn': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
}

void SageOfSpirit_LiftGoesDown() {
    EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceDistance': 0.0, 'TargetOffset': [0.0, 0.0, 0.0], 'IdealDistance': 5.0, 'ToleranceXZAngle': 0.0, 'ToleranceYUpwardAngle': 15.0, 'MoveTime': 60, 'TargetActorInstanceName': ''})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Lift', 'NotChangeRot': True, 'ASCommand': 'EvtWait'})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventSystemActor.EventTransition({'EventName': 'SageOfSpirit_LiftGoesDown_Next', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void SpritTemple_Room31_OpenShutter() {

    call Common.AirStartUp()

    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SpiritTemple_Level_Room_31_AreaCheck1', 'Index': -1}) {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'Actor1InstanceName': 'Room31_OpenShutter_Cam1Aim', 'Actor2InstanceName': 'Room31_OpenShutter_Cam2Aim', 'MoveTime': 0, 'PosVector': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'AtVector': [0.0, 1.0, 0.0], 'CameraCollisionMode': 0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'EnableCameraAlpha': True, 'TargetFovy': 55.0, 'IsEnableRevertFast': False})
        } {
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': False, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'PlayerPosCheck'})
        }

        Event442:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorInstanceName': '', 'VectorSetType': 3, 'ActorName': 'Player_Event', 'Vector': [0.0, 1.5, -1.5]}) {
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
            }
        } else {
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SpiritTemple_Level_Room_31_AreaCheck2', 'Index': -1}) {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'Actor1InstanceName': 'Room31_OpenShutter_Cam1Aim', 'Actor2InstanceName': 'Room31_OpenShutter_Cam2Aim', 'MoveTime': 0, 'PosVector': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 2, 'AtVector': [0.0, 1.0, 0.0], 'CameraCollisionMode': 0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'EnableCameraAlpha': True, 'TargetFovy': 55.0, 'IsEnableRevertFast': False})
        } {
            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': False, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'PlayerPosCheck2'})
        }

        goto Event442
    } else
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'ActorInstanceName': 'Room31_OpenShutter_Cam1Aim', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0]}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'Actor1InstanceName': 'Room31_OpenShutter_Cam1Aim', 'Actor2InstanceName': 'Room31_OpenShutter_Cam2Aim', 'CameraCollisionMode': 2, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 1.0, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 1, 'EnableCameraAlpha': True, 'TargetFovy': 55.0, 'MoveTime': 0, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'Actor1InstanceName': 'Room31_OpenShutter_Cam1Aim', 'Actor2InstanceName': 'Room31_OpenShutter_Cam2Aim', 'CameraCollisionMode': 2, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 1.0, 0.0], 'MoveTime': 60, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 1, 'EnableCameraAlpha': True, 'TargetFovy': 55.0, 'IsEnableRevertFast': False})
    }
    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'UseNormalTurn': False, 'IsWaitEnd': False, 'InstanceName': 'PlayerLookAt', 'IsDoNavi': True, 'SlowTurn': True})
    }
    goto Event442
}

void DesertColossus_LeftHand_AppearTreasureBox() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'TBox', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'FovySetType': 0, 'EnableCameraAlpha': True, 'AtVector': [0.0, 0.75, 0.0], 'MoveTime': 0, 'PosVector': [0.0, 1.5, 6.0], 'IsEnableRevertFast': False})

    fork {

        call TreasureBoxAppear.Act_TBoxAppear_Magic_0()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBox'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'UpperASCommand': '', 'ActorName': 'DestinationAnchor', 'Target': 5, 'UseNormalTurn': False, 'IsWaitEnd': True, 'InstanceName': 'TBox', 'IsDoNavi': True, 'SlowTurn': True})
    }

}

void SageOfSpirit_FaceIsBroken() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SpiritTemple_Room08_Unlocked_06', 'Index': -1, 'Value': True})

    call Common.AirStartUp_OnlyStopInAir()

    EventSystemActor.EventTransition({'EventName': 'Dm_SpiritTemple_0000', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void SpiritTemple_FaceIsBroken_Effect() {
    Dm_Obj_SpiritTemple_GoddessStatueFace_A_01.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'SageOfSpirit_FaceIsBroken_00'})
}

void SageOfSpirit_LiftGoesDown_Next() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraPos', 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 3, 'AtVectorSetType': 4, 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'TargetFovy': 55.0, 'PosVector': [0.0, -1.0, 0.5], 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SpiritTemple_Room31_Lift_On'})
    EventCamera.EventTriggerRequestCameraShake({'Power': 0.10000000149011612, 'Pattern': 2, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': True})
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtLookAroundAttentionUnder', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraPos', 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 3, 'AtVectorSetType': 4, 'CameraCollisionMode': 0, 'MoveTime': 180, 'EnableCameraAlpha': True, 'TargetFovy': 55.0, 'PosVector': [0.0, -1.0, 4.0], 'IsEnableRevertFast': False})
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution', 'KeepOneTimeAnm': True, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    GameSystemActor.EventTriggerAddPreComputedCullingBasePosByAnker({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'CameraPos2'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraPos2', 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'TargetFovy': 50.0, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVector': [0.0, 0.0, 0.0], 'EnableCameraAlpha': True, 'AtVector': [0.0, -2.0, 0.0], 'IsEnableRevertFast': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': 'CameraPos3', 'PosVector': [0.0, 0.0, 0.0], 'TargetFovy': 57.5, 'AtVector': [0.0, 0.5, 7.5], 'EnableCameraAlpha': True, 'MoveTime': 410, 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerTurnAndLook({'Direction': 0.0, 'KeepTalkWait': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'WorldPos': [0.0, 37.0, -67.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'TurnFaceControlType': 0, 'IsWaitEnd': True, 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution', 'KeepOneTimeAnm': True, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    }

    EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': True, 'Pattern': 2, 'Power': 0.10000000149011612})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVectorSetType': 4, 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'PlayerCamera', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor2ActorName': 'Player_Event', 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 4, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'AtVector': [0.0, 1.75, 0.0], 'MoveTime': 75, 'PosVector': [0.0, 1.75, -4.5], 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}
