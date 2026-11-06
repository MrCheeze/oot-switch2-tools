-------- EventFlow: Dm_ForestTemple_0005 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble', 'EventTriggerRelocateTwistCorridor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void EntryPoint0() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'PosVector': [-56.5, 131.5, -4.550000190734863], 'AtVector': [-56.5, 131.5, -8.15999984741211], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Dm_Locator[Door].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-56.5, 124.50050354003906, -11.556539535522461], 'ClothWarpMode': -1})
    } {
        Player_Event.EventTriggerParticipateEvent()
    } {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_04'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_03'})
        }
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Pattern': 4, 'Power': 0.30000001192092896, 'IsRumbleController': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Small', 'Length': 0.0})
    }

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Pattern': 4, 'Power': 0.5, 'IsRumbleController': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Short'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'EndRecelerateRate': 1.0, 'MoveTime': 35, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-56.5, 131.5, -7.519999980926514], 'AtVector': [-56.5, 131.5, -8.15999984741211], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Spin_Room11', 'IsIgnoreDucking': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Door', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor1ActorName': 'Dm_Locator', 'CameraCollisionMode': 1, 'MoveTotargetPosType': 0, 'EndRecelerateRate': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVector': [0.0, 1.5, -3.0], 'AtVector': [0.0, 1.5, -15.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Door', 'PosVector': [-0.03999999910593033, 1.5, -39.08000183105469], 'AtVector': [-0.03999999910593033, 1.5, -51.08000183105469], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.800000011920929, 'MoveTime': 110, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_GataGata', 'Length': 1.5})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_02'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_02'})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ForestTemple_Room18_GetSmallKey'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ForestTemple_TwistCorridor_IsReverse', 'Value': True})
        }
        Event2:
        EventRequestActor.EventTriggerSetEventBool({'Bool': False})
        GameSystemActor.EventTriggerRelocateTwistCorridor({'Is01': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'Door', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor1ActorName': 'Dm_Locator', 'CameraCollisionMode': 1, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVector': [0.0, 1.5, -3.0], 'AtVector': [0.0, 1.5, -15.0], 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.800000011920929, 'MoveTime': 150, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_04'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_03'})
        }
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_04'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_04'})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_04'})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ForestTemple_SageOfForest_TwistedCorridor_A_02'})
        goto Event2
    }
}
