-------- EventFlow: Common --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWait', 'EventPlayerStopInAir', 'EventTriggerParticipateEvent']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void AirStartUp() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                    Event5:
                    Player_Event.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
                } else {
                    Event12:
                    Player_Event.EventTriggerParticipateEvent()
                }
            } else
            if !Player_Event.EventQueryCheckPlayerState({'State': 20}) {
                Event4:
                Player_Event.EventPlayerWait({'IsWaitEnd': False})
            } else {
                goto Event5
            }
        } else {
            goto Event4
        }
    } else
    if !Player_Event.EventQueryCheckPlayerState({'State': 32}) {
        goto Event4
    } else {
        goto Event12
    }
}

void AirStartUp_OnlyStopInAir() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 2})
    && !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
            if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                Event11:
                Player_Event.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
            } else {
                Player_Event.EventTriggerParticipateEvent()
            }
        } else
        if !Player_Event.EventQueryCheckPlayerState({'State': 20}) {
            goto Event11
        } else {
            Event10:
            Player_Event.EventTriggerParticipateEvent()
        }
    } else {
        goto Event10
    }
}

void AirStartUp_WaitForAttack() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 2})
    && !Player_Event.EventQueryCheckPlayerState({'State': 1}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
            if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
                Event31:
                Player_Event.EventTriggerParticipateEvent()
            } else {
                Player_Event.EventTriggerParticipateEvent()
            }
            Event26:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            if !Player_Event.EventQueryCheckPlayerState({'State': 41}) {
                Player_Event.EventPlayerWait({'IsWaitEnd': False})
            } else {
                goto Event26
            }
        } else
        if !Player_Event.EventQueryCheckPlayerState({'State': 20}) {
            goto Event31
        } else {
            Event22:
            Player_Event.EventTriggerParticipateEvent()
        }
        goto Event26
    } else {
        goto Event22
    }
}
