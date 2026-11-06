-------- EventFlow: ShieldHylianNaviHintBootEvent --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    EventSystemActor.EventTransition({'EventName': 'DefaultBootEvent', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                Event2:
                EventSystemActor.EventTransition({'EventName': 'NaviHint_Shield_Hylian', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
            } else
            if !Player_Event.EventQueryCheckPlayerState({'State': 20}) {
                goto Event2
            } else {
                Event5:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsNoPlayShieldHylianNaviHintEvent', 'Index': -1, 'Value': True})
            }
        } else {
            goto Event2
        }
    } else
    if !Player_Event.EventQueryCheckPlayerState({'State': 32}) {
        goto Event2
    } else {
        goto Event5
    }
}
