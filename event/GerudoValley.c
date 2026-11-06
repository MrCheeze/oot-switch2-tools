-------- EventFlow: GerudoValley --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithoutStopRidingTarget', 'EventTriggerPlayerEventStartWithDrawn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void HorseJump() {
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NaviChat_Gerudo_2214_Talked', 'Index': -1}) {
        Event4:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GerudoValley_0010'})
    } else {
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 128})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NaviChat_Gerudo_2214_Talked', 'Index': -1, 'Value': True})
        goto Event4
    }
}

void HorseJump_Return() {
    Player_Event.EventTriggerPlayerEventStartWithoutStopRidingTarget()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NaviChat_Gerudo_2214_Talked', 'Index': -1}) {
        Event5:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GerudoValley_0020'})
    } else {
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 128})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NaviChat_Gerudo_2214_Talked', 'Index': -1, 'Value': True})
        goto Event5
    }
}
