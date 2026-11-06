-------- EventFlow: Entry_LonLonRanch --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryHavePlayedEvent', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerPlayerEventStartWithRolling']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Common.AirStartUp()

    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithRolling()
    if GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Entry_LonLonRanch'}) {
        Player_Event.EventTriggerParticipateEvent()
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_LonLon_0010'})
        if !Player_Event.EventQueryPlayerIsChild() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsMalonAppear_HyruleCastleSecondTime', 'Index': -1}) {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsMalonAppear_HyruleCastleSecondTime', 'Index': -1, 'Value': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsMalonAppear_Market'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'IsMalonAppear_Market'})
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goto_HyruleCastle_IsAfter_Step04_Exp'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsArrived_LonLonRanch_AfterMalonAppear', 'Value': True})
            }
        }
    }
}
