-------- EventFlow: InsideJabuJabuBelly_Gimmick --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventTriggerPlayerEventStartWithCarry', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool', 'EventTriggerSetEventBoolEX1']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera', 'EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: ['EventQueryCameraCheckRayCastForBasedOnLookAt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Zora_Ruto_Child_001[Step1]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void InsideJabuJabuBellyRoom07StepSwitch() {
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Npc_Zora_Ruto_Child_001[Step1].EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'DestinationAnchor', 'ToleranceXZAngle': 5.0, 'LookAtVectorY': 0, 'ToleranceDistance': 0.0, 'ToleranceYDownwardAngle': 0.0, 'LookAtVectorXZ': 0, 'TargetActorInstanceName': 'Room07_StepSwitch_FocusCameraPos', 'TargetOffset': [1.0, 0.0, 6.0], 'IdealDistance': 9.0, 'ToleranceYUpwardAngle': 5.0}) {
        EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'TargetActorInstanceName': 'Room07_StepSwitch_FocusCameraPos', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'MoveTime': 0, 'ToleranceYDownwardAngle': 0.0, 'TargetOffset': [1.0, 0.0, 6.0], 'IdealDistance': 9.0, 'ToleranceYUpwardAngle': 5.0})
    } else {
        EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'TargetActorInstanceName': 'Room07_StepSwitch_FocusCameraPos', 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'MoveTime': 60, 'ToleranceYDownwardAngle': 0.0, 'TargetOffset': [1.0, 0.0, 6.0], 'IdealDistance': 9.0, 'ToleranceYUpwardAngle': 5.0})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': 'Room07_StepSwitch_FocusCameraPos'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'UpperASCommand': '', 'UseNormalTurn': False, 'InstanceName': 'Room07_StepSwitch_FocusCameraPos', 'Target': 5, 'SlowTurn': True, 'IgnoreTargetPosMove': True, 'IsDoNavi': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideJabuJabuBelly_Room07_StepSwitch_Ruto'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideJabuJabuBelly_Room07_StepSwitch_ClearSound', 'Index': -1, 'Value': True})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        Event4:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    } else {
        goto Event4
    }
}

void InsideJabuJabuBellyRoom14StepSwitch() {
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
    Npc_Zora_Ruto_Child_001[Step1].EventTriggerParticipateEvent()
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'TargetFovy': 60.0, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Room14_StepSwitch_ViewPoint', 'Actor2InstanceName': 'Room14_StepSwitch_FocusCameraPos', 'EnableCameraAlpha': True, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': 'Room14_StepSwitch_FocusCameraPos'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'InstanceName': 'Room14_StepSwitch_FocusCameraPos', 'OffsetBase': 0, 'UpperASCommand': 'EvtSurpriseS', 'UseNormalTurn': False, 'SlowTurn': True, 'IgnoreTargetPosMove': True, 'IsDoNavi': False, 'Target': 4, 'Direction': 90.0})
    Npc_Navi.EventNaviFollowPlayer({'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': False, 'IsNearOffset': False, 'Speed': 0.30000001192092896, 'IsWaitEnd': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideJabuJabuBelly_Room14_SwitchControlInEvent', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
    SoundSystemActor.EventTriggerSoundReadRiddle({'BgmReadRiddleType': 1, 'IsWaitEnd': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void InsideJabuJabuBellyRoom01StepSwitch() {
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'DestinationAnchor', 'ToleranceXZAngle': 5.0, 'LookAtVectorY': 0, 'ToleranceDistance': 0.0, 'ToleranceYDownwardAngle': 0.0, 'LookAtVectorXZ': 0, 'IdealDistance': 9.0, 'ToleranceYUpwardAngle': 5.0, 'TargetOffset': [1.0, 0.0, 3.0], 'TargetActorInstanceName': 'Room01_StepSwitch_FocusCameraPos'}) {
        EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetActorInstanceName': 'Room01_StepSwitch_FocusCameraPos', 'TargetOffset': [-1.0, 0.0, 3.0], 'IdealDistance': 9.0, 'ToleranceYUpwardAngle': 5.0, 'ToleranceYDownwardAngle': 4.0, 'MoveTime': 0})
    } else {
        EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'MoveTime': 60, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetActorInstanceName': 'Room01_StepSwitch_FocusCameraPos', 'TargetOffset': [-1.0, 0.0, 3.0], 'IdealDistance': 9.0, 'ToleranceYUpwardAngle': 5.0, 'ToleranceYDownwardAngle': 4.0})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': False, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'UpperASCommand': '', 'UseNormalTurn': False, 'Target': 5, 'InstanceName': 'Room01_StepSwitch_FocusCameraPos', 'IsDoNavi': True, 'SlowTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Insidejabujabu_Room1_Cleared'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideJabuJabuBelly_Room01_ClearSound', 'Index': -1, 'Value': True})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        Event9:
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } else {
        goto Event9
    }
}

void InsideJabuJabuBellyRoom07StepSwitch02() {
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Npc_Zora_Ruto_Child_001[Step1].EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    if !EventCamera.EventQueryCameraCheckRayCastForBasedOnLookAt({'TargetActorLink': 'DestinationAnchor', 'ToleranceXZAngle': 5.0, 'ToleranceYUpwardAngle': 10.0, 'LookAtVectorY': 0, 'TargetOffset': [1.0, -0.5, 6.0], 'IdealDistance': 10.0, 'ToleranceDistance': 0.0, 'ToleranceYDownwardAngle': 0.0, 'TargetActorInstanceName': 'Room07_StepSwitch02_FocusCameraPos', 'LookAtVectorXZ': 0}) {
        EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetActorInstanceName': 'Room07_StepSwitch02_FocusCameraPos', 'TargetOffset': [-1.0, -0.5, 6.0], 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 0.0, 'IdealDistance': 10.0, 'MoveTime': 0})
    } else {
        EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'DestinationAnchor', 'ToleranceDistance': 0.0, 'IsWaitEnd': True, 'ToleranceXZAngle': 5.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 0, 'TargetActorInstanceName': 'Room07_StepSwitch02_FocusCameraPos', 'TargetOffset': [-1.0, -0.5, 6.0], 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': 0.0, 'IdealDistance': 10.0, 'MoveTime': 60})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': 'Room07_StepSwitch02_FocusCameraPos'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'UpperASCommand': '', 'UseNormalTurn': False, 'Target': 5, 'InstanceName': 'Room07_StepSwitch02_FocusCameraPos', 'SlowTurn': True, 'IgnoreTargetPosMove': True, 'IsDoNavi': True})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.5, 'CameraResetPolicy': 0})
}

void InsideJabuJabuBellyRoom05Swich() {
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call Common.AirStartUp()

    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'Actor1ActorName': '', 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'PosVector': [32.5099983215332, 112.54000091552734, -45.470001220703125], 'AtVector': [33.56999969482422, 110.80999755859375, -48.150001525878906], 'TargetFovy': 50.0, 'AtVectorSetType': 0, 'Actor2ActorName': '', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'UpperASCommand': '', 'UseNormalTurn': False, 'Target': 5, 'InstanceName': '', 'IgnoreTargetPosMove': True, 'SlowTurn': True, 'IsDoNavi': True})
    SoundSystemActor.EventTriggerSoundReadRiddle({'BgmReadRiddleType': 1, 'IsWaitEnd': True})
    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void InsideJabuJabuBellyRoom14StepSwitch_Under() {
    EventRequestActor.EventTriggerSetEventBoolEX1({'Bool': True})
    Npc_Zora_Ruto_Child_001[Step1].EventTriggerParticipateEvent()
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'FovySetType': 1, 'TargetFovy': 0.0, 'MoveTime': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVector': [0.0, 0.0, 0.0], 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'LongShiftRange': 0.0, 'LatShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    } {
        if Player_Event.EventQueryCheckPlayerState({'State': 10}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        }
    }

    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DestinationAnchor', 'Actor2ActorName': 'DestinationAnchor', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'TargetFovy': 60.0, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Room14_StepSwitch_ViewPoint', 'Actor2InstanceName': 'Room14_StepSwitch_FocusCameraPos', 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'InsideJabuJabuBelly_Room14_PlayerIsUnder', 'Index': -1}) {

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 30.0, 'ASCommand': 'EvtLookAroundAttentionUnder', 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventPlayAS({'ASName': 'EvtLookAroundAttention', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideJabuJabuBelly_Room14_SwitchControlInEvent', 'Index': -1, 'Value': True})
        Event144:
        if !Player_Event.EventQueryCheckPlayerState({'State': 6}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            goto Event144
        } else {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 30.0, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
            Player_Event.EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit()

            fork {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 240})
            } {
                Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1})
            }

            SoundSystemActor.EventTriggerSoundReadRiddle({'BgmReadRiddleType': 1, 'IsWaitEnd': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        }
    } else {
        Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'Target': 5, 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': 'Room14_StepSwitch_FocusCameraPos'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

        fork {
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        } {
            Player_Event.EventPlayerTurnAndLook({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'KeepTalkWait': False, 'TurnFaceControlType': 1, 'InstanceName': 'Room14_StepSwitch_FocusCameraPos', 'OffsetBase': 0, 'UpperASCommand': 'EvtSurpriseS', 'UseNormalTurn': False, 'SlowTurn': True, 'IgnoreTargetPosMove': True, 'IsDoNavi': False, 'Target': 4, 'Direction': 90.0})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'InsideJabuJabuBelly_Room14_SwitchControlInEvent', 'Index': -1, 'Value': True})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 240})
        } {
            Npc_Navi.EventNaviFollowPlayer({'IsHomePosition': True, 'IsNearOffset': True, 'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1})
        }

        SoundSystemActor.EventTriggerSoundReadRiddle({'BgmReadRiddleType': 1, 'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }
}
