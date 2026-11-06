-------- EventFlow: Common_Dungeon_OpenDungeonDoorSingleMove --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithCarry', 'EventPlayerOpenDoor', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerMove']
queries: ['EventQueryPlayerIsChild', 'EventQueryPlayerIsKeepLiftableDoorMove', 'EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayMiniMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DoorShutter_EventStarter
entrypoint: None()
actions: ['EventDoorUnlockChain', 'EventDoorOpenFromAttention', 'EventTriggerDoorSetModelVisible', 'EventTriggerDoorClose']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventCamera
entrypoint: None()
actions: ['EventChasePlayerCameraForDoor', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void MoveToPlusZ() {

    call PreMoveCommon()


    call MoveTo({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos'})

}

void PreMoveCommon() {
    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': True})
    Player_Event.EventTriggerParticipateEvent()
    if !Player_Event.EventQueryPlayerIsKeepLiftableDoorMove() {
        Player_Event.EventTriggerPlayerEventStartWithCarry()
    }
}

void MoveTo() {
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventChasePlayerCameraForDoor({'PlayerActorName': 'Player_Event', 'DoorActorName': 'DoorShutter_EventStarter', 'Fovy': 50.0, 'Latitude': 5.0, 'LookAtDis': 1.5, 'LerpFrame': 60.0, 'IsWaitEnd': False, 'LookAtOffset': [0.0, 1.3600000143051147, 0.0], 'PlayerInstanceName': '', 'DoorInstanceName': ''})
    } else {
        EventCamera.EventChasePlayerCameraForDoor({'PlayerActorName': 'Player_Event', 'DoorActorName': 'DoorShutter_EventStarter', 'Fovy': 50.0, 'LookAtDis': 1.5, 'LerpFrame': 60.0, 'LookAtOffset': [0.0, 1.7300000190734863, 0.0], 'IsWaitEnd': False, 'PlayerInstanceName': '', 'DoorInstanceName': '', 'Latitude': 5.0})
    }
    DoorShutter_EventStarter.EventDoorOpenFromAttention({'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerOpenDoor({'IsWaitEnd': True})
    } {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HeavyBoot'}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        } else {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        }
        DoorShutter_EventStarter.EventTriggerDoorSetModelVisible({'IsVisible': False})
    }

    DoorShutter_EventStarter.EventTriggerDoorClose()
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}

void MoveTo_NoEndCamera() {
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventChasePlayerCameraForDoor({'PlayerActorName': 'Player_Event', 'DoorActorName': 'DoorShutter_EventStarter', 'Fovy': 50.0, 'Latitude': 5.0, 'LookAtDis': 1.5, 'LerpFrame': 60.0, 'IsWaitEnd': False, 'LookAtOffset': [0.0, 1.3600000143051147, 0.0], 'PlayerInstanceName': '', 'DoorInstanceName': ''})
    } else {
        EventCamera.EventChasePlayerCameraForDoor({'PlayerActorName': 'Player_Event', 'DoorActorName': 'DoorShutter_EventStarter', 'Fovy': 50.0, 'LookAtDis': 1.5, 'LerpFrame': 60.0, 'LookAtOffset': [0.0, 1.7300000190734863, 0.0], 'IsWaitEnd': False, 'PlayerInstanceName': '', 'DoorInstanceName': '', 'Latitude': 5.0})
    }
    DoorShutter_EventStarter.EventDoorOpenFromAttention({'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerOpenDoor({'IsWaitEnd': True})
    } {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HeavyBoot'}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        } else {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        }
        DoorShutter_EventStarter.EventTriggerDoorSetModelVisible({'IsVisible': False})
    }

    DoorShutter_EventStarter.EventTriggerDoorClose()
}

void UnlockMoveTo() {
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventChasePlayerCameraForDoor({'PlayerActorName': 'Player_Event', 'DoorActorName': 'DoorShutter_EventStarter', 'Fovy': 50.0, 'Latitude': 5.0, 'LookAtDis': 1.5, 'LerpFrame': 60.0, 'IsWaitEnd': False, 'LookAtOffset': [0.0, 1.3600000143051147, 0.0], 'PlayerInstanceName': '', 'DoorInstanceName': ''})
    } else {
        EventCamera.EventChasePlayerCameraForDoor({'PlayerActorName': 'Player_Event', 'DoorActorName': 'DoorShutter_EventStarter', 'Fovy': 50.0, 'LookAtDis': 1.5, 'LerpFrame': 60.0, 'LookAtOffset': [0.0, 1.7300000190734863, 0.0], 'IsWaitEnd': False, 'PlayerInstanceName': '', 'DoorInstanceName': '', 'Latitude': 5.0})
    }
    Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'WorldPos': 'PreOpenPos'})

    fork {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'WorldPos': 'LastPos', 'TurnFaceControlType': 0, 'KeepTalkWait': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtDoorKey', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        DoorShutter_EventStarter.EventDoorUnlockChain({'IsWaitEnd': False})
    }

    DoorShutter_EventStarter.EventDoorOpenFromAttention({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 'Wait'})

    fork {
        Player_Event.EventPlayerOpenDoor({'IsWaitEnd': True})
    } {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HeavyBoot'}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 105})
        } else {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 65})
        }
        DoorShutter_EventStarter.EventTriggerDoorSetModelVisible({'IsVisible': False})
    }

    DoorShutter_EventStarter.EventTriggerDoorClose()
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'AfterKeepEndInterpolateCountScale': 3.0, 'IsKeepWithRelativePos': False})
}
