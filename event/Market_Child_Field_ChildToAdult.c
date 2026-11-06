-------- EventFlow: Market_Child_Field_ChildToAdult --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventTriggerBancRequestBeforehandLoad']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Market_Child_Field_ChildToAdult() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/Market/Market_Adult.bcett.json', 'IsTargetRetry': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_TimeTemple_0080', 'FadeInTypeEventEnd': 2})

    call ReplaceEquipmentForEraChange.ReplaceEquipmentForEraChange()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Index': -1, 'Value': False})
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_Adult_Gauntlet_Silver', 'Num': 1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_TimeTemple_0088'}) {
            Event0:
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'IsStartOnEvent': False, 'NextStartPos': '', 'NextBanc': 'Market_Adult', 'BootEventName': 'Dm_TimeTemple_0085', 'FadePattern': 2, 'EventStarterName': '', 'IsItemWarp': False, 'NextPosition': [137.20840454101562, 106.12010192871094, -34.0], 'NextStartRot': [0.0, 90.0, 0.0]})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
        } else {
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'IsStartOnEvent': False, 'NextStartPos': '', 'NextBanc': 'Market_Adult', 'FadePattern': 2, 'BootEventName': 'Dm_TimeTemple_0088', 'EventStarterName': '', 'IsItemWarp': False, 'NextPosition': [137.20840454101562, 106.12010192871094, -34.0], 'NextStartRot': [0.0, 90.0, 0.0]})
        }
    } else {
        goto Event0
    }
}
