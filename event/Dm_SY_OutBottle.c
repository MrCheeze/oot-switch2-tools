-------- EventFlow: Dm_SY_OutBottle --------

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerRemoveFromSelectedBottle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerOutBottle', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerOutBottleBlueFire', 'EventPlayerDrawnBottleFull', 'EventPlayerDrawnShieldAfterUseBottle', 'EventTriggerPlayerStopUpdateSelectedItem', 'EventTriggerPlayerStartUpdateSelectedItem']
queries: ['EventQueryGetBottleContent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Weapon_Bottle_Fish
entrypoint: None()
actions: ['EventBottleOutBottle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_Bug
entrypoint: None()
actions: ['EventBottleOutBottle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerReserveNotRebootPlayerCameraAI', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Player_Event.EventTriggerPlayerStopUpdateSelectedItem()
    Player_Event.EventPlayerDrawnBottleFull({'IsWaitEnd': True})

    fork {
        switch Player_Event.EventQueryGetBottleContent() {
          case 5:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 74})
            Weapon_Bottle_Fish.EventBottleOutBottle({'ASName': 'CapOff', 'IsWaitEnd': False})
          case 10:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 74})
            Weapon_Bottle_Bug.EventBottleOutBottle({'ASName': 'CapOff', 'IsWaitEnd': False})
        }
    } {
        PouchSystemActor.EventTriggerRemoveFromSelectedBottle()
        Player_Event.EventPlayerOutBottle({'IsWaitEnd': True})
    }

    Player_Event.EventTriggerPlayerStartUpdateSelectedItem()
    Player_Event.EventPlayerDrawnShieldAfterUseBottle({'IsWaitEnd': True, 'IsImmediateDrawn': False})
}

void BlueFire() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Player_Event.EventTriggerPlayerStopUpdateSelectedItem()
    Player_Event.EventPlayerDrawnBottleFull({'IsWaitEnd': True})
    PouchSystemActor.EventTriggerRemoveFromSelectedBottle()

    fork {
        Player_Event.EventPlayerOutBottleBlueFire({'IsWaitEnd': True})
    } {
        GameSystemActor.EventWait({'Frames': 70, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Small', 'Length': 0.0})
    }

    Player_Event.EventTriggerPlayerStartUpdateSelectedItem()
    Player_Event.EventPlayerDrawnShieldAfterUseBottle({'IsWaitEnd': True, 'IsImmediateDrawn': False})
    EventCamera.EventTriggerReserveNotRebootPlayerCameraAI()
}
