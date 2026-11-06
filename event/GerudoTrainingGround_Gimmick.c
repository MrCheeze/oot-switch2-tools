-------- EventFlow: GerudoTrainingGround_Gimmick --------

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventSoundChangeListenerPreset', 'EventSoundStartSound']
queries: []
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

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera', 'EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerRequestCameraShake', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraToSavePoint']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn', 'EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerMoveToAnchor', 'EventTriggerPlayerLookAtObject', 'EventPlayerBackMoveForAnchor', 'EventPlayerWait', 'EventPlayerSlowWalkStop', 'EventTriggerPlayerEventStartWithRolling', 'EventTriggerPlayerEventStartWithClimb']
queries: ['EventQueryCheckPlayerState', 'EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetRenderingCenterPosFromCameraPosFC']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void Room07_TreasureAppear() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoTrainingGround_Dungeon_Room07_EnterFromRoom06'}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 0, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'AtVector': [0.0, 0.5, 0.0], 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [-1.5, 2.0, 12.0], 'EnableCameraAlpha': True, 'Actor1InstanceName': 'Point1', 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 0, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'PosVectorSetType': 3, 'PosVector': [0.0, 3.0, 8.0], 'AtVector': [0.0, 2.5, 0.0], 'EnableCameraAlpha': True, 'Actor1InstanceName': 'Point3', 'IsEnableRevertFast': False})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'Point1'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoTrainingGround_Dungeon_Room07_EnterFromRoom06'}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'TBox', 'PosVectorSetType': 3, 'MoveTotargetPosType': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'AtVector': [0.0, 1.5, 1.0], 'PosVector': [4.5, 3.0, 4.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'TBox', 'PosVectorSetType': 3, 'MoveTotargetPosType': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [3.0, 2.5, 6.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    call TreasureBoxAppear.Act_EnemyCounter()


    call ShadowTemple_Gimmick.TBox_Aboid_Immediate_BS({'TBoxName': 'TBox', 'PlayerDistination': 'AppearTreasurePlayerPos'})

}

void StoneGimmickClear() {
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'DisableThirdPersonAdjust', 'FadeTime': 0.0})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtCaution', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventEffectEmitter.EventNodeEffectEmit({'IsWaitEnd': False, 'InstanceName': '', 'ELinkKeyName': 'GerudoTrainingGround_Room04_StoneGimmick_Lava', 'ActorName': 'Obj_Gerudo_StoneStatue_B_01'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'Power': 0.15000000596046448, 'IsRumbleController': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoTrainingGround_StoneGimmick_TurnFloorOn', 'Value': False, 'Index': -1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2InstanceName': '04_ActStoneGimmick_Judge2', 'PosVectorSetType': 4, 'AtVectorSetType': 3, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Point2', 'AtVector': [0.0, 0.0, 1.0], 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 0, 'PosVector': [-6.0, 9.0, -6.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoTrainingGround_Room04_OpenDoor', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'Actor2InstanceName': '04_ActStoneGimmick_Judge2', 'PosVectorSetType': 4, 'AtVectorSetType': 3, 'Actor1ActorName': 'DestinationAnchor', 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1InstanceName': 'Point3', 'AtVector': [0.0, 0.0, 0.0], 'PosVector': [-3.0, 4.0, -3.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GerudoTrainingGround_Dungeon_Room04_StoneStatue'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 240})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoTrainingGround_Room04_SpawnTreasureBox', 'Index': -1, 'Value': True})

    call ShadowTemple_Gimmick.FallTBox_OnlyVibration()

    Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Point3', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventSoundChangeListenerPreset({'FadeTime': 1.0, 'ListenerPresetName': 'Normal'})
    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsWaitEnd': False, 'InstanceName': 'Point3', 'PosOffset': [0.0, 0.0, -1.0], 'KeepTalkWait': False, 'IsDoNavi': True})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorInstanceName': '', 'VectorSetType': 3, 'ActorName': 'Player_Event', 'Vector': [0.0, 1.75, -3.0]}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    } else
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': '04_ActStoneGimmick_Judge2', 'CheckDistance': 10.0}) {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVectorSetType': 4, 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'PlayerCamera', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor2ActorName': 'Player_Event', 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 4, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'AtVector': [0.0, 1.75, 0.0], 'MoveTime': 75, 'PosVector': [0.0, 1.75, -3.0], 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    }
}

void GerudoTrainingGround_01_AppearTreasureBox() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoTrainingGround_Dungeon_Room01_EnterFromRoom00', 'Index': -1}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Point1', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'AtVector': [0.0, 0.5, 0.0], 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [0.0, 0.5, 11.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 0, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'AtVector': [0.0, 0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Point2', 'PosVectorSetType': 4, 'TargetFovy': 50.0, 'PosVector': [2.5, 1.5, 7.5], 'EnableCameraAlpha': True, 'Actor1InstanceName': 'Point3', 'IsEnableRevertFast': False})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'Point1'})

    call TreasureBoxAppear.Act_EnemyCounter()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoTrainingGround_Dungeon_Room01_EnterFromRoom00', 'Index': -1}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'TBox', 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Point1', 'PosVectorSetType': 4, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [0.0, 0.5, 11.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'TBox', 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 4, 'AtVector': [0.0, 1.5, 0.0], 'Actor2InstanceName': 'Point2', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'PosVector': [2.5, 0.5, 7.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    call ShadowTemple_Gimmick.TBox_Aboid_Immediate_BS({'TBoxName': 'TBox', 'PlayerDistination': 'AppearTreasurePlayerPos'})

    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'ActorName': 'PlayerCamera', 'ActorInstanceName': '', 'VectorSetType': 3}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void GerudoTrainingGround_03_AppaerTreasureBox() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 1.0, 'InstanceNameB': 'TBox'}) {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True})
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'DestinationAnchor', 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActor': 1, 'Actor2InstanceName': 'TBox', 'Actor1InstanceName': '03_AppaerTreasureBox_CamAim', 'AtVector': [0.0, 0.75, 0.0], 'PosVectorSetType': 3, 'MoveTime': 0, 'PosVector': [4.0, 3.0, 7.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventPlayerMoveToAnchor({'IsMoveAnchorFrontDir': False, 'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsWaitEnd': True, 'AnchorInstanceName': 'AppearTreasurePlayerPos', 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        Event193:

        call ShadowTemple_Gimmick.FallTBox_0()

        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'InstanceName': 'TBox', 'UseNormalTurn': False, 'IsDoNavi': False})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'VectorSetType': 3, 'Vector': [0.0, 1.75, 0.0], 'IsIgnoreVectorReferenceActorRot': False}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor2ActorName': 'DestinationAnchor', 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActor': 1, 'Actor2InstanceName': 'TBox', 'Actor1InstanceName': '03_AppaerTreasureBox_CamAim', 'AtVector': [0.0, 0.75, 0.0], 'PosVectorSetType': 4, 'EnableCameraAlpha': True, 'MoveTime': 0, 'PosVector': [0.0, 3.0, 10.0], 'TargetFovy': 45.0, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
        goto Event193
    }
}

void GerudoTrainingGround_04_ActStoneGimmick() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    PostProcessingActor.EventSetRenderingCenterPosFromCameraPosFC({'StarFocusDis': 2.0, 'EndFocusDis': 2.0, 'IsWaitEnd': True, 'RequiredFrame': 0})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': '04_ActStoneGimmick_Judge1', 'CheckDistance': 15.0}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Point1', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'Actor1InstanceName': '04_ActStoneGimmick_Judge1', 'CameraCollisionLookAtActor': 1, 'MoveTime': 0, 'PosVector': [0.0, 4.5, -1.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Point1', 'AtVectorSetType': 4, 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActor': 1, 'Actor1InstanceName': '04_ActStoneGimmick_Judge3', 'MoveTime': 0, 'PosVector': [0.0, 4.5, -1.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventEffectEmitter.EventNodeEffectEmit({'IsWaitEnd': False, 'ELinkKeyName': 'GerudoTrainingGround_04_ActStoneGimmick_Lava', 'InstanceName': '', 'ActorName': 'Obj_Gerudo_StoneStatue_B_01'})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 135})
        EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'Power': 0.15000000596046448, 'IsRumbleController': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoTrainingGround_StoneGimmick_TurnFloorOn', 'Index': -1, 'Value': True})
    } {
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'Point1', 'IsDoNavi': False})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

    } {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 11, 'LoopEndCount': 4, 'Power': 0.019999999552965164, 'IsRumbleController': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Point1', 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVectorSetType': 1, 'CameraCollisionLookAtActor': 1, 'Actor1InstanceName': '', 'CameraCollisionMode': 2, 'Actor1ActorName': '', 'PosVector': [0.0, -2.5, 0.0], 'EnableCameraAlpha': True, 'MoveTime': 165, 'IsEnableRevertFast': False})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Rumble', 'IsIgnoreDucking': False})
    }

}

void GerudoTrainingGround_05_AppaerTreasureBox() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 0, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Point1', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'AtVector': [0.0, 0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Point2', 'PosVectorSetType': 4, 'PosVector': [6.0, 1.0, 7.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'InstanceName': 'Point1'})

    call TreasureBoxAppear.Act_EnemyCounter()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Point1', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'AtVector': [0.0, 0.5, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'Point2', 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'PosVectorSetType': 4, 'PosVector': [6.0, 1.0, 7.0], 'MoveTime': 60, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'Vector': [0.0, 0.0, 0.0], 'VectorSetType': 3, 'IsIgnoreVectorReferenceActorRot': False, 'ActorName': 'PlayerCamera', 'ActorInstanceName': ''}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }

    call ShadowTemple_Gimmick.TBox_Aboid_Immediate({'TBoxName': 'TBox', 'PlayerDistination': 'AppearTreasurePlayerPos'})

}

void GerudoTrainingGround_05_ShutterOpen() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': '05_ShutterOpen_CamAim', 'CheckDistance': 5.0}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': '', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': '', 'CameraCollisionLookAtActor': 0, 'Actor1InstanceName': '05_ShutterOpen_CamAim', 'IsIgnorePosVectorReferenceActorRot': False, 'PosVector': [0.0, 3.0, 8.0], 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'MoveTime': 0, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': '', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': '', 'CameraCollisionLookAtActor': 0, 'Actor1InstanceName': '05_ShutterOpen_CamAim', 'IsIgnorePosVectorReferenceActorRot': False, 'PosVector': [0.0, 3.0, 15.0], 'EnableCameraAlpha': True, 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': '05_ShutterOpen_CamAim', 'IsDoNavi': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
}

void GerudoTrainingGround_05_DisappearFire() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': '', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '05_DisappearFire_CamAim', 'MoveTime': 0, 'PosVector': [0.0, 2.5, 6.5], 'AtVector': [0.0, -0.25, 0.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': '05_DisappearFire_CamAim', 'IsDoNavi': True})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
}

void GerudoTrainingGround_06_DisappearFire() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'Actor2InstanceName': '', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor2ActorName': '', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'MoveTime': 60, 'AtVector': [1.0, 0.0, -20.0], 'PosVector': [3.0, 9.0, -2.0], 'TargetFovy': 45.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': '06_DisappearFire_CamAim', 'PosOffset': [-5.0, 0.0, 0.0], 'IsDoNavi': True})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void GerudoTrainingGround_06_SilverToken_Appear() {

    call Common.AirStartUp_OnlyStopInAir()

    Player_Event.EventTriggerPlayerEventStartWithRolling()
    Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': False})
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventPlayerWait({'IsWaitEnd': True})
    if Player_Event.EventQueryCheckPlayerState({'State': 4}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    }
    EventCamera.EventTriggerCameraSavePoint()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'FovySetType': 1, 'TargetFovy': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'Actor2ActorName': '', 'Actor1ActorName': 'DestinationAnchor', 'LookAtDis': 8.0, 'CameraCollisionMode': 2, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': True, 'EnableCameraAlpha': True, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [47.61478042602539, 96.31288146972656, -43.76969909667969], 'AtVector': [51.92900085449219, 95.95099639892578, -43.82899856567383], 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'FovySetType': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Obj_silverRupeeCounter', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'AtVectorSetType': 3, 'PosVectorSetType': 4, 'Actor2ActorName': 'DestinationAnchor', 'LookAtDis': 8.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'MoveTime': 240, 'TargetFovy': 0.0, 'PosVector': [-3.5, 1.0, -2.0], 'AtVector': [-3.0, 2.0, -12.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    }

    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': False, 'TurnFaceControlType': 1, 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'IgnoreTargetPosMove': True, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DestinationAnchor', 'Target': 5, 'PosOffset': [4.0, 0.0, -10.0], 'IsDoNavi': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'IsAnchorActorB': True, 'CheckDistance': 5.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsTargetPlayingAllEvent': False}) {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 45, 'IsRestoreDoF': False})
    } else {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 90, 'IsRestoreDoF': False})
    }
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void GerudoTrainingGround_06_SilverToken_Unlock() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call ShadowTemple_Gimmick.Silver_Tolken_Finish({'DoorName': ''})

    EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'CameraCollisionMode': 2, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 0.0, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'IdealDistance': 10.0, 'TargetOffset': [0.0, 0.0, 0.0], 'MoveTime': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
}

void GerudoTrainingGround_02_SilverToken_Appear() {
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': False})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': False, 'ActorName': 'DestinationAnchor', 'Target': 0, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'IgnoreTargetPosMove': True, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'TurnFaceControlType': 0, 'IsDoNavi': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0, 'KeepOneTimeAnm': True, 'ForceFadeFrame': -1.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor1InstanceName': '', 'FovySetType': 1, 'IsWaitEnd': False, 'LookAtDis': -1.0, 'PosVectorSetType': 3, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'EnableCameraAlpha': True, 'MoveTime': 90, 'AtVector': [0.0, 0.5, 14.0], 'TargetFovy': -5.0, 'PosVector': [0.0, 1.0, 24.0], 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor1InstanceName': '', 'FovySetType': 1, 'TargetFovy': 0.0, 'IsWaitEnd': False, 'LookAtDis': -1.0, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'DestinationAnchor', 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'PosVector': [-58.22999954223633, 107.29000091552734, -51.45000076293945], 'AtVector': [-51.65999984741211, 104.16999816894531, -42.43000030517578], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
}

void GerudoTrainingGround_02_SilverToken_Unlock() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call ShadowTemple_Gimmick.Silver_Tolken_Finish({'DoorName': ''})

    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'ActorInstanceName': 'CameraPos1', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 1.5, 6.0]}) {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'ActorInstanceName': 'CameraPos2', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 0.0, 0.0], 'VectorSetType': 3}) {
            EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'Actor1InstanceName': 'CameraPos3', 'MoveTime': 0, 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'Actor1InstanceName': 'CameraPos2', 'MoveTime': 0, 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
        }
        Event130:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorInstanceName': '', 'VectorSetType': 3, 'ActorName': 'PlayerCamera', 'Vector': [0.0, 0.0, 0.0]}) {
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor1InstanceName': 'CameraPos1', 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTime': 0, 'PosVector': [0.0, 1.5, 6.0], 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
        goto Event130
    }
}

void GerudoTrainingGround_08_FenceFallDown() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player_Event', 'MoveTime': 60, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': '08_FenceFallDown_CamAim', 'PosVectorSetType': 4, 'AtVectorSetType': 4, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 3.0, 7.5], 'AtVector': [0.0, 1.0, 0.0], 'CameraCollisionLookAtActor': 3, 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 105})
        EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'Power': 0.07500000298023224, 'IsRumbleController': True})
    } {
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': '08_FenceFallDown_CamAim', 'PosOffset': [0.0, 2.5, 0.0], 'IsDoNavi': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': '08_FenceFallDown_CamAim', 'PosOffset': [0.0, -0.5, 0.0], 'IsWaitEnd': False, 'IsDoNavi': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVector': [0.0, 2.5, -3.5], 'AtVector': [0.0, 1.5, 0.0], 'CameraCollisionLookAtActor': 2, 'CameraCollisionMode': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void GerudoTrainingGround_09_SilverToken_Unlock() {

    call Common.AirStartUp_OnlyStopInAir()

    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'SwimWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'ClothWarpMode': 0, 'ForceFadeFrame': 20.0, 'IsWaitEnd': False, 'KeepOneTimeAnm': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': '09_AppaerTreasureBox_CamAim', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 2.5, 12.5], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': False, 'Target': 5, 'InstanceName': '09_AppaerTreasureBox_CamAim', 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
}

void GerudoTrainingGround_09_AppaerTreasureBox() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call TreasureBoxAppear.New_Magic_Enemy({'CloseDistance': 3.0, 'CameraDistanceFromAnchor': 5.0, 'CameraPosOffset': [0.0, 0.0, 0.0], 'CameraPosOffset_IfClose': [1.0, 1.5, 5.0], 'FocusPosOffset_IfClose': [0.0, 0.0, 0.0], 'OriginActor_IfClose': 'Player_Event', 'WaitBeforeBool': 30, 'WaitBeforeCam': 30, 'AnchorName_01': '09_AppaerTreasureBox_CamAim', 'AnchorName_02': '09_AppaerTreasureBox_CamAim'})

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void GerudoTrainingGround_02From03_SilverToken_Appear() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': False})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': False, 'ActorName': 'DestinationAnchor', 'Target': 0, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'IgnoreTargetPosMove': True, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 15.0, 'ASCommand': 'EvtSurprise', 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor1InstanceName': '', 'FovySetType': 1, 'TargetFovy': 0.0, 'IsWaitEnd': False, 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'PosVectorSetType': 3, 'PosVector': [0.0, 2.0, -3.0], 'MoveTime': 60, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})

    call FocusOnGimmick.NewBasicFocus_NoBool_CustomCamSpeed({'CloseDistance': 5.0, 'OriginActor_IfClose': 'Player_Event', 'AnchorName_01': '', 'CameraPosOffset_IfClose': [0.0, 0.0, 0.0], 'FocusOffset_IfClose': [0.0, 1.0, 0.0], 'IgnoreOriginRotation': False, 'CamSpeed': 80, 'CameraPosOffset': [0.0, -0.5, 0.0], 'CameraDistanceFromAnchor': 3.5})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
}

void GerudoTrainingGround_02From03_SilverToken_Unlock() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call ShadowTemple_Gimmick.Silver_Tolken_Finish({'DoorName': ''})

    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, -5.0, 6.0], 'ActorInstanceName': 'CameraPos3'}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor1InstanceName': 'CameraPos1', 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'MoveTime': 0, 'PosVector': [0.0, -5.0, 6.0], 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor2InstanceName': '', 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVectorSetType': 3, 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'CameraCollisionLookAtActor': 2, 'Actor1InstanceName': 'CameraPos3', 'MoveTime': 0, 'PosVector': [0.0, -5.0, 0.0], 'EnableCameraAlpha': True, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'ActorInstanceName': '', 'VectorSetType': 3, 'ActorName': 'PlayerCamera', 'Vector': [0.0, 0.0, 0.0]}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
    }
}

void GerudoTrainingGround_10_FallTreasureBox() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'DestinationAnchor', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'ActorInstanceName': '', 'Vector': [-5.0, 2.0, 5.0]}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor1InstanceName': '', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActor': 1, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'TBox', 'MoveTime': 0, 'EnableCameraAlpha': True, 'PosVector': [-4.0, 2.0, 4.0], 'AtVector': [0.0, 1.0, 0.0], 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        Event48:
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 1.0, 'InstanceNameB': 'TBox'}) {
            Player_Event.EventPlayerMoveToAnchor({'IsMoveAnchorFrontDir': False, 'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsWaitEnd': True, 'AnchorInstanceName': 'AppearTreasurePlayerPos', 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
        }

        call ShadowTemple_Gimmick.FallTBox_0()

        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'InstanceName': 'TBox', 'UseNormalTurn': False, 'IsDoNavi': True})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'MoveTime': 60, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor1InstanceName': '', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActor': 1, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'TBox', 'EnableCameraAlpha': True, 'PosVector': [-4.0, 2.0, 4.0], 'AtVector': [0.0, 1.0, 0.0], 'IsEnableRevertFast': False})
        goto Event48
    }
}

void GerudoTrainingGround_10_AppearTreasureBox() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'CameraCollisionMode': 2, 'Actor1ActorName': 'DestinationAnchor', 'CameraCollisionLookAtActor': 1, 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'TBox', 'PosVector': [0.0, 1.25, 5.0], 'Actor1InstanceName': '10_AppearTreasureBox_CamAim', 'AtVector': [0.0, 0.5, 0.0], 'EnableCameraAlpha': True, 'MoveTime': 0, 'IsEnableRevertFast': False})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 1.0, 'InstanceNameB': 'TBox'}) {
        Player_Event.EventPlayerMoveToAnchor({'IsMoveAnchorFrontDir': False, 'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'MoveSpeed': 1.0, 'IsWaitEnd': True, 'AnchorInstanceName': 'AppearTreasurePlayerPos', 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    call ShadowTemple_Gimmick.FallTBox_0()

    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'InstanceName': 'TBox', 'UseNormalTurn': False, 'IsDoNavi': True})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'ActorName': 'Player_Event', 'ActorInstanceName': '', 'Vector': [0.0, 1.5, -2.0]}) {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    }
}

void GerudoTrainingGround_03_ShutterOpen() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'InstanceNameB': '03_ShutterOpen_CamAim', 'CheckDistance': 16.0}) {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'DestinationAnchor', 'MoveTime': 60, 'Actor1InstanceName': '03_ShutterOpen_CamAim', 'Actor2InstanceName': '', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': '', 'IsIgnorePosVectorReferenceActorRot': True, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 0, 'PosVector': [0.0, 2.0, 12.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'IsPosVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'DestinationAnchor', 'MoveTime': 60, 'Actor1InstanceName': '03_ShutterOpen_CamAim', 'Actor2InstanceName': '', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 0.0, 0.0], 'Actor2ActorName': '', 'IsIgnorePosVectorReferenceActorRot': True, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 0, 'PosVector': [0.0, 2.0, 25.0], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': '03_ShutterOpen_CamAim', 'IsDoNavi': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
}

void GerudoTrainingGround_00_FallTreasureBox() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor1InstanceName': '', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': '00_FallTreasureBox_CamAim', 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 4, 'AtVector': [0.0, 0.5, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'PosVector': [0.0, 2.0, 6.0], 'CameraCollisionLookAtActor': 1, 'EnableCameraAlpha': True, 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 1.5, 'InstanceNameB': 'TBox'}) {
        if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'AngleThreshold': 90.0, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': 'TBox'}) {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 10.0, 0.0], 'InstanceName': 'TBox'})
        } else {
            Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'PosOffset': [0.0, 10.0, 0.0], 'OffsetBase': 1, 'InstanceName': 'TBox', 'IsDoNavi': False})
        }
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 0.5, 'InstanceNameB': 'TBox'}) {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'OffsetDist': 2.0, 'AnchorInstanceName': 'TBox'})
        } else {
            Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'OffsetDist': 1.0, 'AnchorInstanceName': 'TBox'})
        }

        call ShadowTemple_Gimmick.FallTBox_0()

        Event260:
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'InstanceName': 'TBox', 'IsDoNavi': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    } else {

        call ShadowTemple_Gimmick.FallTBox_0()

        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'TBox'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        goto Event260
    }
}
