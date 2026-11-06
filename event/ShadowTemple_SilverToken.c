-------- EventFlow: ShadowTemple_SilverToken --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void CounterAppear_Room12() {
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': False, 'ActorName': 'DestinationAnchor', 'Target': 0, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'KeepTalkWait': False, 'IgnoreTargetPosMove': True, 'UpperASCommand': '', 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeFrame': 15.0, 'ASCommand': 'EvtSurprise', 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor1InstanceName': '', 'FovySetType': 1, 'TargetFovy': 0.0, 'IsWaitEnd': False, 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'LookAtDis': -1.0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'DestinationAnchor', 'AtVectorSetType': 4, 'PosVectorSetType': 3, 'PosVector': [0.0, 2.0, -3.0], 'MoveTime': 60, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})

    call FocusOnGimmick.NewBasicFocus_NoBool_CustomCamSpeed({'CloseDistance': 5.0, 'OriginActor_IfClose': 'Player_Event', 'AnchorName_01': '', 'CameraPosOffset_IfClose': [0.0, 0.0, 0.0], 'FocusOffset_IfClose': [0.0, 1.0, 0.0], 'IgnoreOriginRotation': False, 'CamSpeed': 80, 'CameraPosOffset': [0.0, 0.0, 0.0], 'CameraDistanceFromAnchor': 2.0})

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
}
