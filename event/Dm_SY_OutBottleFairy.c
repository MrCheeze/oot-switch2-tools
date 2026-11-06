-------- EventFlow: Dm_SY_OutBottleFairy --------

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerRemoveFromSelectedBottle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerOutBottleFairy', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerDrawnBottleFull', 'EventPlayerDrawnShieldAfterUseBottle', 'EventTriggerPlayerStopUpdateSelectedItem', 'EventTriggerPlayerStartUpdateSelectedItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayHeartGauge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerZeldaNotesAddIntegratedValueItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerStopUpdateSelectedItem()
    Player_Event.EventPlayerDrawnBottleFull({'IsWaitEnd': True})
    PouchSystemActor.EventTriggerRemoveFromSelectedBottle()
    GameSystemActor.EventTriggerZeldaNotesAddIntegratedValueItem({'Type': 13, 'Frame': 120})
    Player_Event.EventPlayerOutBottleFairy({'IsWaitEnd': True})
    Player_Event.EventTriggerPlayerStartUpdateSelectedItem()
    Player_Event.EventPlayerDrawnShieldAfterUseBottle({'IsWaitEnd': True, 'IsImmediateDrawn': False})
}
