-------- EventFlow: ShadowTemple_Gimmick --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerTalk', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerLookAtObject', 'EventPlayerSeparatedFromAnchor', 'EventPlayerBackMoveForAnchor', 'EventTriggerParticipateEvent', 'EventPlayerWarpToTargetActor', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerStopInAir', 'EventPlayerWait', 'EventPlayerPutAway', 'EventPlayerOffStopMode', 'EventPlayerOnStopMode']
queries: ['EventQueryCheckPlayerState', 'EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventPlayerWaitOnGround']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventBasedOnLookAtCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraToSavePoint', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Dungeon_SmallKey
entrypoint: None()
actions: ['EventPlayASWithClothWarp']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SignBoard_EventStarter
entrypoint: None()
actions: ['EventTalkWithInstanceNameLabel', 'EventTriggerBecomeSpeaker', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventPlayAS', 'EventNaviMoveAroundToPlayer', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventProxyRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint01() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventTriggerCameraSavePoint()
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtLookAroundAttention', 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 0.0, 0.0], 'ActorInstanceName': 'CameraPos_B1F_A_00'}) {
        Event228:
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'IsWaitEnd': False, 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'FovySetType': 0, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'PL_Point02', 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'PosVectorSetType': 3, 'Actor1InstanceName': 'Pos_ShadowTemple_Statue_A_01', 'PosVector': [0.0, 9.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'EnableCameraAlpha': True, 'TargetFovy': 45.0, 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_01_Clear_A'})
        } {
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'InstanceName': '', 'ActorName': 'Obj_ShadowTemple_SwitchShutter_A_02', 'UseNormalTurn': False, 'IsDoNavi': True, 'TurnFaceControlType': 0, 'SlowTurn': True})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } else
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 1, 'ActorInstanceName': '', 'Vector': [10.0, 0.0, 0.0], 'ActorName': ''}) {
        goto Event228
    } else {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'IsWaitEnd': False, 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'PL_Point02', 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'Actor1InstanceName': 'CameraPos_B1F_A_00', 'PosVectorSetType': 1, 'IsIgnorePosVectorReferenceActorRot': True, 'EnableCameraAlpha': True, 'PosVector': [10.0, 0.0, 0.0], 'MoveTime': 0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_01_Clear_A'})
        } {
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'InstanceName': '', 'ActorName': 'Obj_ShadowTemple_SwitchShutter_A_02', 'UseNormalTurn': False, 'IsDoNavi': True, 'TurnFaceControlType': 0, 'SlowTurn': True})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'ReviseMode': 1, 'CollisionInterpolateSkip': False, 'MoveFrame': 75, 'IsRestoreDoF': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }
}

void EntryPoint03() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'PL_Point01', 'CheckDistance': 5.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True}) {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'EvtCaution', 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'Actor1ActorName': 'DestinationAnchor', 'LookAtDis': -1.0, 'PosVectorSetType': 3, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': 'PL_Point02', 'IsLinearMove': False, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'PL_Point01', 'AtVector': [0.0, -1.5, 0.0], 'AtVectorSetType': 4, 'MoveTime': 0, 'PosVector': [3.5, 2.0, 4.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'PL_Point01', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, -1.0, 0.0]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'Actor1ActorName': 'DestinationAnchor', 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'PosVectorSetType': 3, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': 'PL_Point02', 'MoveTime': 60, 'AtVector': [0.0, 0.0, 0.0], 'IsLinearMove': False, 'PosVector': [3.5, 2.0, 4.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call TreasureBoxAppear.Act_EnemyCounter()


    call TBox_Aboid({'TBoxName': 'TBox', 'PlayerDistination': 'Room03_AppearTreasureCamAim'})

}

void EntryPoint04() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'PL_Point01', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'PL_Point02', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4.0, 0.5, 4.0], 'AtVector': [0.0, -0.5, 0.0], 'MoveTotargetPosType': 1, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'PL_Point01', 'PosOffset': [0.0, -0.5, 0.0]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'PL_Point01', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'PL_Point02', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'AtVector': [0.0, -0.5, 0.0], 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'PosVector': [-4.0, 0.5, 4.0], 'IsIgnorePosVectorReferenceActorRot': False, 'MoveTotargetPosType': 1, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call TreasureBoxAppear.Act_EnemyCounter()


    call TBox_Aboid({'TBoxName': 'TBox', 'PlayerDistination': 'Room04_AppearTreasurePlayerPos'})

}

void EntryPoint07() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'PL_Point01', 'CheckDistance': 5.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True}) {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'EvtCaution', 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'PL_Point01', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, -1.0, 0.0], 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 0.0, 6.0], 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'PL_Point01', 'PosOffset': [0.0, -0.5, 0.0]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'PL_Point02', 'MoveTotargetPosType': 1, 'AtVector': [0.0, 1.0, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call TreasureBoxAppear.Act_EnemyCounter()


    call TBox_Aboid({'TBoxName': 'TBox', 'PlayerDistination': 'Room07_AppearTreasurePlayerPos'})

}

void CounterUnlock_Room06() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Silver_Tolken_Finish({'DoorName': 'FocusPos_1'})

    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'ActorInstanceName': 'CameraPos_2', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0]}) {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsWaitEnd': False, 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'FovySetType': 0, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': True, 'Actor1InstanceName': 'CameraPos_1', 'Actor2InstanceName': 'FocusPos_1', 'PosVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 3, 'MoveTotargetPosType': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'TargetFovy': 45.0, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsWaitEnd': False, 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'FovySetType': 0, 'CameraCollisionLookAtActor': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'AtVector': [0.0, 0.0, 0.0], 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 3, 'MoveTotargetPosType': 0, 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'Actor2InstanceName': 'FocusPos_1', 'Actor1InstanceName': 'CameraPos_2', 'MoveTime': 0, 'IsEnableRevertFast': False})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    } {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'PlayerPos', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 2.5}) {
            Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsWaitEnd': True, 'IsMoveAnchorFrontDir': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'AnchorInstanceName': 'PlayerPos'})
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'FocusPos_1', 'IsDoNavi': True, 'SlowTurn': True})
        }
    }

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'Player_Event', 'Vector': [0.0, 2.0, -0.5]}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void CounterUnlock_Room09() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Silver_Tolken_Finish({'DoorName': ''})

    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'ActorInstanceName': '', 'Vector': [0.0, 2.0, 8.0]}) {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'PosVector': [0.0, 2.0, 8.0], 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        Event109:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': '', 'MoveTime': 60, 'Actor1ActorName': 'PlayerCamera', 'PosVectorSetType': 3, 'PosVector': [0.0, 2.5, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'PosVector': [0.0, 2.0, 8.0], 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsEnableRevertFast': False})
        goto Event109
    }
}

void CounterUnlock_Room12() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Silver_Tolken_Finish({'DoorName': ''})

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'CheckDistance': 15.0, 'InstanceNameB': ''}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'Actor2ActorName': 'Player_Event', 'IsIgnorePosVectorReferenceActorRot': False, 'PosVectorSetType': 3, 'MoveTime': 0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 1.25, 7.5], 'IsEnableRevertFast': False})
        Event66:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'Actor2ActorName': 'Player_Event', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'MoveTime': 0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 1.25, 12.5], 'IsEnableRevertFast': False})
        Player_Event.EventPlayerSeparatedFromAnchor({'MoveSpeed': 1.0, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'AvoidPos', 'SeparatedDIstance': 2.0, 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'IsWaitEnd': True})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'IsWaitEnd': False, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsDoNavi': True, 'SlowTurn': True})
        goto Event66
    }
}

void EntryPoint10() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'InstanceNameB': 'FocusPos_1', 'CheckDistance': 15.0}) {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UseNormalTurn': False, 'InstanceName': 'FocusPos_1', 'IsDoNavi': True, 'SlowTurn': True})
    } {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'InstanceNameB': 'FocusPos_1', 'CheckDistance': 15.0}) {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'IsWaitEnd': False, 'Actor1ActorName': 'DestinationAnchor', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor1InstanceName': 'FocusPos_1', 'Actor2InstanceName': '', 'PosVectorSetType': 1, 'PosVector': [0.0, 0.5, 0.0], 'AtVectorSetType': 3, 'MoveTime': 60, 'Actor2ActorName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } else
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'ActorInstanceName': 'CameraPos_1', 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, -4.0, -5.0]}) {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'IsWaitEnd': False, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraPos_1', 'Actor2InstanceName': 'FocusPos_1', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, -3.0, 6.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': False, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraPos_1', 'Actor2InstanceName': 'FocusPos_1', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'MoveTime': 90, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, -3.0, -6.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
}

void EntryPoint13_DOWN() {

    call FocusOnGimmick.HangingStartUp()

    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'EvtCaution', 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': '', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'PosOffset': [0.0, 0.0, 0.0], 'IsDoNavi': True, 'SlowTurn': True})
        }
    } {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'Vector': [0.0, 0.0, 0.0], 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'ActorInstanceName': 'CameraPos'}) {
            EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'IsIgnorePosVectorReferenceActorRot': True, 'IsLinearMove': False, 'PosVectorSetType': 3, 'AtVector': [0.0, -1.0, 1.0], 'MoveTime': 0, 'Actor1InstanceName': 'CameraPos', 'PosVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'IsIgnorePosVectorReferenceActorRot': True, 'IsLinearMove': False, 'PosVectorSetType': 3, 'AtVector': [0.0, -1.0, 1.0], 'Actor1InstanceName': 'CameraPos', 'PosVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void EntryPoint13_UP() {

    call FocusOnGimmick.HangingStartUp()

    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'EvtCaution', 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetOffset': [0.0, -5.5, 0.0], 'ToleranceYUpwardAngle': 45.0, 'ToleranceYDownwardAngle': 30.0, 'IdealDistance': 10.0, 'ToleranceXZAngle': 20.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': '', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'PosOffset': [0.0, -5.0, 0.0], 'IsDoNavi': True, 'SlowTurn': True})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'ActorInstanceName': '', 'ActorName': 'Player_Event', 'Vector': [0.0, 2.0, -3.0]}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVectorSetType': 4, 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'PlayerCamera', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor2ActorName': 'Player_Event', 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 4, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 2.0, -3.0], 'AtVector': [0.0, 1.25, 0.0], 'MoveTime': 60, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }
}

void LargeJar_Key() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 4}) {

        call FocusOnGimmick.HangingStartUp()

        if !Player_Event.EventQueryCheckPlayerState({'State': 35}) {
            if Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': False, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'IgnoreTargetPosMove': True, 'UpperASCommand': '', 'ActorName': 'DestinationAnchor', 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': '', 'Target': 5, 'UseNormalTurn': False, 'IsDoNavi': True, 'SlowTurn': True})
            }
            Event332:
            EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})

            fork {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ShadowTemple_Level_Room_13_PlayerPosCheck', 'Index': -1}) {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': True, 'MoveTime': 30, 'IsIgnorePosVectorReferenceActorRot': True, 'AtVector': [0.0, 1.0, 0.0], 'EnableCameraAlpha': True, 'PosVector': [1.5, 5.0, 0.0], 'IsEnableRevertFast': False})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': True, 'TargetFovy': 35.0, 'MoveTime': 60, 'AtVector': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': True, 'EnableCameraAlpha': True, 'PosVector': [1.5, 5.0, 0.0], 'IsEnableRevertFast': False})
                } else {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraPos', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'CameraPos', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 60, 'TargetFovy': 35.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                }
            } {
                if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ShadowTemple_Level_Room_13_Clear_A', 'Index': -1}) {
                    Obj_Dungeon_SmallKey.EventPlayASWithClothWarp({'ASName': 'Act_Pop', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1, 'IsWaitEnd': True})
                    Obj_Dungeon_SmallKey.EventPlayASWithClothWarp({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ClothWarpMode': -1, 'IsWaitEnd': False, 'ASName': 'Rotate_Obj'})
                }
            }

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        } else {
            goto Event332
        }
    } else {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        goto Event332
    }
}

void EntryPoint15() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 0, 'IdealDistance': 6.0, 'TargetActorInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0], 'ToleranceXZAngle': 0.0, 'IsLinearMove': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': ''})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void EntryPoint16() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor1InstanceName': 'PL_Point01', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 1, 'Actor2InstanceName': 'PL_Point02', 'PosVectorSetType': 4, 'PosVector': [0.0, 2.0, 7.5], 'AtVector': [0.0, 1.25, 0.0], 'EnableCameraAlpha': True, 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})

    call TreasureBoxAppear.Act_EnemyCounter()


    call TBox_Aboid({'TBoxName': 'TBox', 'PlayerDistination': 'Room16_AppearTreasurePlayerPos'})

    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [0.0, 2.0, 0.0], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    }
}

void FloortSign_03() {

    call SignboardWood.AccessFloorSignboard({'FB_Offset': [0.0, 3.0, 2.5], 'BF_Offset': [0.0, 3.0, -2.0], 'BB_Offset': [0.0, 3.0, -1.5], 'FF_Offset': [0.0, 3.5, 1.0]})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_01_HasRead_Sign_01'})
}

void WallSign() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_02_HasRead_Sign_01'})
    Event154:
    EventCamera.EventTriggerCameraSavePoint()
    SignBoard_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player_Event.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': 'SignBoard_EventStarter', 'AtVectorSetType': 4, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': True, 'PosVectorSetType': 4, 'MoveTimeLater': 15, 'DelayLater': 15, 'Actor1ActorName': 'SignBoard_EventStarter', 'EnableCameraAlpha': True, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'PosVector': [1.0, 0.6000000238418579, 3.0], 'AtVector': [0.0, -0.5, 0.0], 'IsEnableRevertFast': False})
    }

    SignBoard_EventStarter.EventPlayAS({'ASName': 'Talk', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'MstxtName': 'SignboardWood', 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 482})
}

void FloortSign_04() {

    call SignboardWood.AccessFloorSignboard({'FB_Offset': [0.0, 3.0, 2.5], 'BF_Offset': [0.0, 3.0, -2.0], 'BB_Offset': [0.0, 3.0, -1.5], 'FF_Offset': [0.0, 3.5, 1.0]})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_11_HasRead_Sign_01'})
}

void WallSign_02() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_02_HasRead_Sign_02'})
    goto Event154
}

void WallSign_03() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_02_HasRead_Sign_03'})
    goto Event154
}

void FloortSign() {

    call SignboardWood.AccessFloorSignboard({'FB_Offset': [0.0, 3.0, 2.5], 'BF_Offset': [0.0, 3.0, -2.0], 'BB_Offset': [0.0, 3.0, -1.5], 'FF_Offset': [0.0, 3.5, 1.0]})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_00_HasRead_Sign_01'})
}

void FloortSign_05() {

    call SignboardWood.AccessFloorSignboard({'FB_Offset': [0.0, 3.0, 2.5], 'BF_Offset': [0.0, 3.0, -2.0], 'BB_Offset': [0.0, 3.0, -1.5], 'FF_Offset': [0.0, 3.5, 1.0]})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_13_HasRead_Sign_01'})
}

void FloortSign_06() {

    call SignboardWood.AccessFloorSignboard({'FB_Offset': [0.0, 3.0, 2.5], 'BF_Offset': [0.0, 3.0, -2.0], 'BB_Offset': [0.0, 3.0, -1.5], 'FF_Offset': [0.0, 3.5, 1.0]})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_20_HasRead_Sign_01'})
}

void FloortSign_02() {

    call SignboardWood.AccessFloorSignboard({'FF_Offset': [0.0, 3.5, 1.0], 'FB_Offset': [0.0, 3.5, 1.0], 'BF_Offset': [0.0, 3.5, 1.0], 'BB_Offset': [0.0, 3.5, 1.0]})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_30_HasRead_Sign_01'})
}

void WallStoneSign_01() {

    call SignboardWood.Talk()

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_01_HasRead_Sign_02'})
}

void WallStoneSign_02() {

    call SignboardWood.Talk()

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ShadowTemple_Level_Room_06_HasRead_Sign_01'})
}

void WallStoneSign_03() {

    call SignboardWood.Talk()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShadowTemple_Level_Room_15_HasRead_Sign_01'})
}

void TBox_Aboid() {

    fork {

        call TreasureBoxAppear.Act_TBoxAppear_Magic_1()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBoxName'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBoxName', 'CheckDistance': 1.5}) {
            Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsWaitEnd': True, 'AnchorInstanceName': 'PlayerDistination', 'IsMoveAnchorFrontDir': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        }
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'IsDoNavi': True, 'SlowTurn': True})
    }

}

void CounterAppear_Room06() {
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': '', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void CounterAppear_Room09() {
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1InstanceName': '', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void EntryPoint21() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'PL_Point01', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'CheckDistance': 5.0}) {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'EvtCaution', 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'InstanceNameB': 'PositionCheck', 'CheckDistance': 8.0}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'AtVectorSetType': 3, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'EventCamera', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'Actor1InstanceName': 'PL_Point01', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'PosVector': [3.0, 1.0, 5.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'PL_Point01', 'PosOffset': [0.0, -0.5, 0.0]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor1ActorName': 'DestinationAnchor', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'Actor1InstanceName': 'PL_Point01', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [4.0, 1.0, 7.0], 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'TBox', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.5, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        Event272:

        call TreasureBoxAppear.Act_EnemyCounter()


        call TBox_Aboid_BS({'TBoxName': 'TBox', 'PlayerDistination': 'Room16_AppearTreasurePlayerPos'})

    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'AtVectorSetType': 3, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'EventCamera', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'Actor1InstanceName': 'PL_Point01', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'AtVector': [0.0, 0.0, 0.0], 'PosVector': [-3.0, 1.0, 5.0], 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'PL_Point01', 'PosOffset': [0.0, -0.5, 0.0]})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor1ActorName': 'DestinationAnchor', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'Actor1InstanceName': 'PL_Point01', 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [-4.0, 1.0, 7.0], 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'TBox', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.5, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        goto Event272
    }
}

void TBox_Aboid_Immediate() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBoxName', 'CheckDistance': 1.2000000476837158}) {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True})
        Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsWaitEnd': True, 'IsMoveAnchorFrontDir': False, 'AnchorInstanceName': 'PlayerDistination', 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        Event155:

        call FallTBox_1()

        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'IsDoNavi': False, 'SlowTurn': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    } else {
        goto Event155
    }
}

void EntryPoint19() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !Player_Event.EventQueryCheckPlayerState({'State': 10}) {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': False, 'IsWaitEnd': True, 'ArrivedASCommand': 'EvtCaution', 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0})
        }

    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 1, 'EnableCameraAlpha': True, 'Actor2InstanceName': '', 'MoveTime': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'CameraCollisionMode': 0, 'Actor1InstanceName': 'Point1', 'PosVector': [4.0, 2.0, 7.0], 'AtVector': [-3.0, -1.0, 0.0], 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'Point1'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [0.0, 1.0, 0.0], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    }
}

void Silver_Tolken_Finish() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerOnStopMode({'StopAnm': False, 'ResetLookIK': True})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'Target': 5, 'UseNormalTurn': False, 'IsDoNavi': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'DoorName', 'TurnFaceControlType': 1, 'SlowTurn': True})
    Player_Event.EventPlayerOffStopMode()
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'DoorName', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void TBox_Aboid_BS() {

    fork {

        call TreasureBoxAppear.Act_TBoxAppear_Magic_1()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBoxName'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        if Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TBoxName', 'AngleThreshold': 90.0, 'WorldPos': [0.0, 0.0, 0.0]}) {
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'IsDoNavi': True, 'SlowTurn': True})
        }
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBoxName', 'CheckDistance': 0.5}) {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'TBoxName', 'OffsetDist': 2.0})
            Event280:
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'IsDoNavi': True, 'SlowTurn': True})
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBoxName', 'CheckDistance': 1.5}) {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'TBoxName', 'OffsetDist': 1.0})
        }
        goto Event280
    }

}

void TBox_Aboid_Immediate_BS() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBoxName', 'CheckDistance': 1.5}) {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True})
        if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TBoxName', 'AngleThreshold': 90.0, 'WorldPos': [0.0, 0.0, 0.0]}) {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBoxName', 'PosOffset': [0.0, 10.0, 0.0]})
        } else {
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'PosOffset': [0.0, 10.0, 0.0], 'OffsetBase': 1, 'IsDoNavi': False})
        }
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBoxName', 'CheckDistance': 0.5}) {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'TBoxName', 'OffsetDist': 2.0})
        } else {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'TBoxName', 'OffsetDist': 1.0})
        }

        call FallTBox_1()

        Event314:
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'IsDoNavi': True, 'SlowTurn': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    } else {

        call FallTBox_1()

        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBoxName'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        goto Event314
    }
}

void TBox_Aboid_BS_0() {

    fork {

        call TreasureBoxAppear.Act_TBoxAppear_Magic_0()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBoxName'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        if Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'AngleThreshold': 90.0, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': 'TBoxName'}) {
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'IsDoNavi': True, 'SlowTurn': True})
        }
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 0.5, 'InstanceNameB': 'TBoxName'}) {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'OffsetDist': 2.0, 'AnchorInstanceName': 'TBoxName'})
            Event157:
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'IsDoNavi': True, 'SlowTurn': True})
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 1.5, 'InstanceNameB': 'TBoxName'}) {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'OffsetDist': 1.0, 'AnchorInstanceName': 'TBoxName'})
        }
        goto Event157
    }

}

void BossRoomIn_AfterBossWin() {
    Player_Event.EventTriggerParticipateEvent()
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_AfterBossWin', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.5, 0.0], 'FovySetType': 0, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'PlayerPos_AfterBossWin', 'PosVector': [0.0, 1.9049999713897705, -3.9800000190734863], 'IsEnableRevertFast': False})
    Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Player_Event', 'PositionOffset': [0.0, 8.0, 0.0], 'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': ''})
    Player_Event.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    Player_Event.EventPlayerPutAway({'IsWaitEnd': False})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Fall', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        GameSystemActor.EventPlayerWaitOnGround({'IsWaitEnd': True, 'TimeOutFrame': 600.0})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'Land', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 0, 'IsWaitEnd': False})
    }

    Player_Event.EventPlayerWait({'IsWaitEnd': True})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void FallTBox_0() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Event337:
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    GameSystemActor[vibration].EventTriggerControllerRumble({'RumbleCall': 'Demo_Small', 'Length': 0.0})
}

void FallTBox_1() {
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
    goto Event337
}

void FallTBox_instead() {
    EventProxyRequestActor.EventTriggerSetEventBool({'Bool': True})
    goto Event337
}

void FallTBox_OnlyVibration() {
    goto Event337
}

void TBox_Aboid0() {

    fork {

        call TreasureBoxAppear.Act_TBoxAppear_Magic_0()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBoxName'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBoxName', 'CheckDistance': 1.5}) {
            Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsWaitEnd': True, 'AnchorInstanceName': 'PlayerDistination', 'IsMoveAnchorFrontDir': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        }
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'IsDoNavi': True, 'SlowTurn': True})
    }

}

void TBox_Aboid_Immediate_BS0() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBoxName', 'CheckDistance': 1.5}) {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True})
        if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TBoxName', 'AngleThreshold': 90.0, 'WorldPos': [0.0, 0.0, 0.0]}) {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBoxName', 'PosOffset': [0.0, 10.0, 0.0]})
        } else {
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'InstanceName': 'TBoxName', 'PosOffset': [0.0, 10.0, 0.0], 'OffsetBase': 1, 'IsDoNavi': False, 'UseNormalTurn': False, 'SlowTurn': True})
        }
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': 'TBoxName', 'CheckDistance': 0.5}) {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'TBoxName', 'OffsetDist': 2.0})
        } else {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'TBoxName', 'OffsetDist': 1.0})
        }

        call FallTBox_0()

        Event378:
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBoxName', 'IsDoNavi': True, 'SlowTurn': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    } else {

        call FallTBox_0()

        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBoxName'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        goto Event378
    }
}
