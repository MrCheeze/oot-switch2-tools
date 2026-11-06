-------- EventFlow: Market_Adult_Field_AdultToChild --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventTriggerBancRequestBeforehandLoad']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: ChallengeSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryMiniGameTimerIsCounting']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Market_Adult_Field_AdultToChild() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/Market/Market_Child.bcett.json', 'IsTargetRetry': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'SubEvent_TimerCheck_ToChild'})
    if ChallengeSystemActor.EventQueryMiniGameTimerIsCounting() {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_TimeTemple_0070', 'FadeInTypeEventEnd': 2})

        call ReplaceEquipmentForEraChange.ReplaceEquipmentForEraChange()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Index': -1, 'Value': True})
        GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'IsStartOnEvent': False, 'NextBanc': 'Market_Child', 'NextStartPos': '', 'FadePattern': 2, 'BootEventName': 'Dm_TimeTemple_0075', 'EventStarterName': '', 'IsItemWarp': False, 'NextPosition': [137.2100067138672, 106.12000274658203, -34.0], 'NextStartRot': [0.0, 90.0, 0.0]})
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Adult_Firsttime_GobacktoChild', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_Adult_Firsttime_GobacktoChild', 'Index': -1, 'Value': True})
        }
    }
}
