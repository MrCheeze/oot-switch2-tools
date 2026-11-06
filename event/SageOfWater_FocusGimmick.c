-------- EventFlow: SageOfWater_FocusGimmick --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventTriggerParticipateEvent', 'EventPlayerUnequip', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerSlowWalkStop', 'EventTriggerPlayerEventStartWithRolling', 'EventTriggerPlayerEventStartWithRestraint']
queries: ['EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventBasedOnLookAtCamera', 'EventTriggerRequestCameraShake', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget', 'EventQueryCameraCheckRayCastForBasedOnLookAt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Tektite_Blue[Room06TektiteBlue00]
entrypoint: None()
actions: ['EventTektiteWait']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Enemy_Tektite_Blue[Room06TektiteBlue02]
entrypoint: None()
actions: ['EventTektiteWait']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Enemy_Tektite_Blue[Room06TektiteBlue01]
entrypoint: None()
actions: ['EventTektiteWait']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_ShellBlade[Room02_ShellBlade01]
entrypoint: None()
actions: ['EventShellBladeDemoFall', 'EventWarpToHomeMatrix']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventPlayAS', 'EventNaviMoveAroundToPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetRenderingCenterPosFromCameraPosFC']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_MiddleBoss_DarkLink
entrypoint: None()
actions: ['EventDarkLinkDieActionForEvent', 'EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 3}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[instance1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Room18_TreasureBoxAppear_Enemy() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'OverwriteRotNearDist': -1.0, 'IsUseAfterPlayerTurn': False, 'ArrivedASCommand': 'EvtCaution', 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'OffsetType': -1})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventBasedOnLookAtCamera({'ToleranceXZAngle': 10.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'TargetActorInstanceName': 'Point1', 'ToleranceYDownwardAngle': 10.0, 'IdealDistance': 4.5, 'TargetOffset': [0.0, 1.0, 0.0], 'MoveTime': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'InstanceName': 'Point1', 'Direction': 0.0, 'Target': 5, 'PosOffset': [-2.0, 0.0, 0.0]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Point2', 'AtVectorSetType': 3, 'PosVectorSetType': 3, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 2.0, 4.0], 'MoveTime': 90, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TBox', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 165})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {

        call Defeat_Ganon.AvoidGimmick({'ObjectInstance': 'TBox', 'MoveOffset': [1.399999976158142, 0.0, 1.399999976158142], 'NearDistance': 0.699999988079071})

    }

}

void WaterTemple_FocusonGimmick_02() {

    fork {
        Player_Event.EventTriggerParticipateEvent()
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'ViewPoint', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'Actor2InstanceName': 'TargetPoint0', 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'ViewPoint', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'PosVector': [0.0, 0.0, 0.0], 'Actor2InstanceName': 'TargetPoint1', 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 60, 'IsEnableRevertFast': False})
        } {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Enemy_ShellBlade', 'InstanceName': 'Room02_ShellBlade01', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }

    } {
        Enemy_ShellBlade[Room02_ShellBlade01].EventWarpToHomeMatrix({'IsWaitEnd': True})
        Enemy_ShellBlade[Room02_ShellBlade01].EventShellBladeDemoFall({'IsWaitEnd': False})
        GameSystemActor[instance1].EventWait({'IsWaitEnd': True, 'Frames': 45})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0, 'CameraResetPolicy': 0})
}

void WaterTemple_Room17_FocusOnGimmick() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call SwitchActivation_Caution()

    EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'IdealDistance': 3.0, 'ToleranceXZAngle': 1.0, 'ToleranceYDownwardAngle': 15.0, 'ToleranceYUpwardAngle': 20.0, 'ToleranceDistance': 0.0, 'TargetOffset': [0.0, 2.0, 4.0]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'InstanceName': '', 'UseNormalTurn': False, 'PosOffset': [10.0, 0.0, 0.0], 'IsDoNavi': True})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void WaterTemple_Waterlevelrise_FocusOnGimmick() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventBasedOnLookAtCamera({'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'ToleranceYUpwardAngle': 30.0, 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'TargetOffset': [0.0, 1.0, 4.0], 'IdealDistance': 6.0, 'TargetActorInstanceName': 'TargetPoint1', 'ToleranceXZAngle': 0.0})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }


    fork {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'Pattern': 11, 'Power': 0.05000000074505806, 'LoopEndCount': 11})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 320})
        EventCamera.EventTriggerRequestCameraShake({'IsRumbleController': False, 'LoopEndCount': 1, 'Pattern': 1, 'Power': 1.0, 'ApplyType': 0})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TargetPoint1'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
}

void WaterTemple_EyeSwitch_Focus() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'IdealDistance': 4.0, 'ToleranceXZAngle': 3.0, 'TargetOffset': [0.0, 0.0, 5.0], 'ToleranceYUpwardAngle': 5.0, 'ToleranceYDownwardAngle': -5.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False, 'Power': 0.10000000149011612})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    SoundSystemActor.EventTriggerSoundReadRiddle({'BgmReadRiddleType': 0, 'IsWaitEnd': True})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void SwitchActivation_Caution() {
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    } {
        Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void WaterTemple_Room06_Waterlevelrise_FocusOnGimmick() {

    fork {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'DestinationAnchor', 'IdealDistance': 4.5, 'TargetOffset': [-2.0, 1.5, 4.0], 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 5.0, 'ToleranceDistance': 0.0, 'ToleranceXZAngle': 2.0, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0}) {
            EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorXZ': 1, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'TargetOffset': [-2.0, 1.5, 4.0], 'ToleranceXZAngle': 2.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 5.0, 'IdealDistance': 4.5, 'MoveTime': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Event78:
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room06_TektiteBlue00_Alive'}) {
                Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'Target': 3, 'ActorName': 'Enemy_Tektite_Blue', 'InstanceName': 'Room06TektiteBlue00', 'PosOffset': [0.0, 0.0, 0.0]})
                Event259:

                fork {
                    Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
                } {
                    Npc_Navi.EventPlayAS({'ASName': 'EvtCaution', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                }

                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 230})
                Event84:
                EventCamera.EventTriggerRequestCameraShake({'IsRumbleController': False, 'LoopEndCount': 1, 'Pattern': 1, 'Power': 1.0, 'ApplyType': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room06_TektiteBlue01_Alive'}) {
                Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'Target': 3, 'ActorName': 'Enemy_Tektite_Blue', 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': 'Room06TektiteBlue01'})
                goto Event259
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room06_TektiteBlue02_Alive'}) {
                Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'Target': 3, 'ActorName': 'Enemy_Tektite_Blue', 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': 'Room06TektiteBlue02'})
                goto Event259
            } else {
                Player_Event.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': '', 'PosOffset': [-5.0, 1.0, 2.0]})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'PosOffset': [-5.0, 1.0, 2.0], 'IgnoreTargetPosMove': True, 'SlowTurn': True, 'IsWaitEnd': False, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'UseNormalTurn': False, 'IsDoNavi': True})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 200})
                goto Event84
            }
        } else {
            EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'LookAtVectorXZ': 1, 'MoveTime': 60, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'TargetOffset': [-2.0, 1.5, 4.0], 'ToleranceXZAngle': 2.0, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 5.0, 'IdealDistance': 4.5})
            goto Event78
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room06_TektiteBlue00_Alive'}) {
            Enemy_Tektite_Blue[Room06TektiteBlue00].EventTektiteWait({'IsWaitEnd': False})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room06_TektiteBlue01_Alive'}) {
            Enemy_Tektite_Blue[Room06TektiteBlue01].EventTektiteWait({'IsWaitEnd': False})
        }
    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_Room06_TektiteBlue02_Alive'}) {
            Enemy_Tektite_Blue[Room06TektiteBlue02].EventTektiteWait({'IsWaitEnd': False})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'IsRumbleController': False, 'Pattern': 11, 'Power': 0.05000000074505806, 'LoopEndCount': 12})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 2.0, 'CameraResetPolicy': 0})
}

void WaterTemple_Room07_LongHook() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    EventSystemActor.EventTransition({'EventName': 'Dm_SY_Treasurebox', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 30.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
    EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorY': 0, 'ToleranceDistance': 0.0, 'MoveTime': 60, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'TargetActorName': 'Player_Event', 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 0.0, 'ToleranceYUpwardAngle': -7.0, 'ToleranceYDownwardAngle': -7.0, 'IdealDistance': 2.0, 'TargetOffset': [0.0, 1.7000000476837158, 3.0]})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 60.0, 'IsKeepWithRelativePos': False})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 480})
}

void WaterTemple_Room22_Clear() {
    Enemy_MiddleBoss_DarkLink.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRestraint()
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Enemy_MiddleBoss_DarkLink', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'ClothWarpMode': -1})
    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Dm_Locator'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True, 'ActorName': 'Dm_Locator'})
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'WaterTemple_DarkLink_Death', 'Index': -1}) {
        Enemy_MiddleBoss_DarkLink.EventDarkLinkDieActionForEvent({'IsWaitEnd': False})
    }
    if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [2.0, 1.0, -2.5]}) {
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [-2.0, 1.0, -2.5]}) {
            Event230:
            EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'TargetActorInstanceName': '', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'ToleranceDistance': 1.0, 'MoveTime': 0, 'ToleranceXZAngle': 180.0, 'IdealDistance': 7.0, 'TargetOffset': [0.0, 1.0, 0.0], 'ToleranceYUpwardAngle': 0.0, 'ToleranceYDownwardAngle': 0.0, 'TargetActorName': 'Dm_Locator'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 360})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_DarkLinkRoom_DoorSide'}) {

                fork {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'DarkLinkRoomFocus', 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'MoveTime': 90, 'Actor1InstanceName': 'DarkLinkRoomViewPointNear1', 'MoveTotargetPosType': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                } {

                    call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 90})

                    PostProcessingActor.EventSetRenderingCenterPosFromCameraPosFC({'IsWaitEnd': True, 'RequiredFrame': 0, 'StarFocusDis': 3.0, 'EndFocusDis': 3.0})
                }

                Event199:
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                EventRequestActor.EventTriggerSetEventBool({'Bool': True})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'Target': 5, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'InstanceName': 'DarkLinkRoomFocus', 'OffsetBase': 1, 'PosOffset': [0.0, 0.0, -5.0], 'IsWaitEnd': False, 'IsDoNavi': True})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'VectorSetType': 3, 'Vector': [0.0, 1.5, -3.5]})
                && !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'TreeNearPoint', 'IsAnchorActorB': True, 'CheckDistance': 5.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False}) {
                    Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'TreeNearPoint', 'ASCommand': 'EvtCaution', 'NotChangeRot': False, 'UseDemoWait': True})
                }
            } else {
                Event235:

                fork {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'DarkLinkRoomFocus', 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'Actor1InstanceName': 'DarkLinkRoomViewPointNear1', 'MoveTotargetPosType': 1, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                } {

                    call Common_Camera_Pln.CameraDoF_Default()

                    PostProcessingActor.EventSetRenderingCenterPosFromCameraPosFC({'IsWaitEnd': True, 'RequiredFrame': 0, 'StarFocusDis': 3.0, 'EndFocusDis': 3.0})
                }

                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                goto Event199
            }
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVector': [0.0, 1.0, 0.0], 'MoveTime': 90, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'PosVector': [-2.0, 1.0, -2.5], 'Actor2ActorName': 'Dm_Locator', 'IsEnableRevertFast': False})
            Event219:
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 270})
            goto Event235
        }
    } else
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Dm_Locator'}) {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVectorSetType': 4, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTotargetPosType': 1, 'AtVector': [0.0, 1.0, 0.0], 'MoveTime': 90, 'PosVector': [2.0, 1.0, -2.5], 'Actor2ActorName': 'Dm_Locator', 'IsEnableRevertFast': False})
        goto Event219
    } else {
        goto Event230
    }
}

void WaterTemple_Room22_Close() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithRolling()

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': False, 'IsSheathed': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'Actor2InstanceName': 'DarkLinkRoomFocus', 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'CameraCollisionLookAtActor': 0, 'IsIgnorePosVectorReferenceActorRot': True, 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'MoveTotargetPosType': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1InstanceName': 'ViewPoint', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    if !Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'ClosedDoor', 'AngleThreshold': 45.0, 'WorldPos': [0.0, 0.0, 0.0]}) {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Event162:
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'EvtLookAround', 'ClothWarpMode': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 2.0, 'CameraResetPolicy': 0})
    } else {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'ClosedDoor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'ClosedDoor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'UseNormalTurn': False, 'IgnoreTargetPosMove': True, 'IsWaitEnd': True, 'SlowTurn': True, 'IsDoNavi': True})
        goto Event162
    }
}
