-------- EventFlow: Meet_DekuTree --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerSlowWalkStop', 'EventPlayerUnequip']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void KokiriForest_Meet_DekuTree_MeetDekuTree_01() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerParticipateEvent()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})

    fork {
        Player_Event.EventPlayerSlowWalkStop({'IsWaitEnd': True, 'IsSheathed': True})
    } {
        UISystemActor.EventEventFadeOut({'Length': 3, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    }

    Player_Event.EventPlayerUnequip({'IsWaitEnd': False})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 2, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WithPlayableEvent': True, 'WaitingResumeInGameBgm': False})
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_Kokiri_0070'}) {
        Event0:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Kokiri_0075'})
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Kokiri_0070'})
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'IsNoPlayAnime': True, 'Length': 1})
        goto Event0
    }
}
