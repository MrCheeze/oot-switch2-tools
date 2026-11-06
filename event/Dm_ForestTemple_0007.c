-------- EventFlow: Dm_ForestTemple_0007 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble', 'EventTriggerRelocateTwistCorridor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[Door]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Bubble_Green[Bubble_Green_ForestTemple_1]
entrypoint: None()
actions: ['EventExecuteEnemyBubbleGreenForceWait']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

Actor: Enemy_Bubble_Green[Bubble_Green_ForestTemple_2]
entrypoint: None()
actions: ['EventExecuteEnemyBubbleGreenForceWait']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 3}

void EntryPoint0() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [56.5, 131.5, -5.340000152587891], 'AtVector': [56.5, 131.5, -8.850000381469727], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Dm_Locator[Door].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [56.53804016113281, 124.51190185546875, -11.493630409240723], 'ClothWarpMode': -1})
    } {
        Player_Event.EventTriggerParticipateEvent()
    } {
        Enemy_Bubble_Green[Bubble_Green_ForestTemple_1].EventExecuteEnemyBubbleGreenForceWait({'IsWaitEnd': False})
    } {
        Enemy_Bubble_Green[Bubble_Green_ForestTemple_2].EventExecuteEnemyBubbleGreenForceWait({'IsWaitEnd': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False, 'Pattern': 4, 'Power': 0.30000001192092896})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Small', 'Length': 0.0})
    }

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False, 'Power': 0.5, 'Pattern': 4})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Short'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'MoveTime': 35, 'EndRecelerateRate': 1.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [56.5, 131.5, -8.1899995803833], 'AtVector': [56.5, 131.5, -8.850000381469727], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Door', 'PosVector': [0.0, 1.5, -1.7699999809265137], 'AtVector': [0.0, 1.5, -13.770000457763672], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Dm_ForestTemple_0007_ENV_Change'})
    }


    fork {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Spin_Room22', 'IsIgnoreDucking': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.800000011920929, 'MoveTime': 110, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Door', 'PosVector': [-0.07000000029802322, 1.5, -39.33000183105469], 'AtVector': [-0.07000000029802322, 1.5, -51.33000183105469], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GataGata', 'Length': 1.5})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_01'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_01'})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_01'})
    }
    EventRequestActor.EventTriggerSetEventBool({'Bool': False})
    GameSystemActor.EventTriggerRelocateTwistCorridor({'Is01': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Door', 'PosVector': [0.0, 1.5, -1.7699999809265137], 'AtVector': [0.0, 1.5, -13.770000457763672], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.800000011920929, 'MoveTime': 150, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Dm_ForestTemple_0007_ENV_Change', 'Value': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
}
