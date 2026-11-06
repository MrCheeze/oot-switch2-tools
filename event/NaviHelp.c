-------- EventFlow: NaviHelp --------

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerBecomeSpeaker', 'EventNaviMovePosTalkToPlayer']
queries: ['EventQueryNaviMoveToTargetType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWait', 'EventTriggerPlayerEventStartWithCarry', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerEventStartWithClimb', 'EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerTalk']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void InitTalk_NaviHelp() {
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()

    call Common.AirStartUp()


    fork {
        if !Player_Event.EventQueryCheckPlayerState({'State': 32})
        && !Player_Event.EventQueryCheckPlayerState({'State': 35})
        && !Player_Event.EventQueryCheckPlayerState({'State': 3})
        && !Player_Event.EventQueryCheckPlayerState({'State': 12}) {
            if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
                Player_Event.EventPlayerWait({'IsWaitEnd': False})
            } else {
                Player_Event.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': False})
            }
        } else {
            Player_Event.EventTriggerParticipateEvent()
        }
    } {
        Npc_Navi.EventNaviMovePosTalkToPlayer({'IsWaitEnd': True, 'IsTurnLooking': False, 'ASCommand': 'EvtTalk', 'IsUseDisguiseSpeakerPos': True, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'MoveSpeed': 0.0, 'DistPassThrough': 0.5})
        Npc_Navi.EventTriggerBecomeSpeaker()
    } {
        if !Player_Event.EventQueryCheckPlayerState({'State': 32}) {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
        } else {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        }
    }

    Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 20.0})
    if Npc_Navi.EventQueryNaviMoveToTargetType() == 5 {
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': 'ナビィの移動先がありません'})
    }
}
