-------- EventFlow: NaviEventCommon --------

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventNaviWarpToPlayerHomePosition', 'EventNaviLookAtObject', 'EventNaviMovePosTalkToPlayer', 'EventTriggerBecomeSpeaker', 'EventTalk', 'EventNaviMoveAtActor', 'EventNaviFollowPlayer']
queries: ['EventQueryIsNaviAttentionEqualEventStarter', 'EventQueryNaviIsArrivedTarget', 'EventQueryNaviAttentionType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitTalkCameraInterpolationEnd']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFront', 'EventPlayerWait', 'EventPlayerTalk']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[Navi_followPlayer_01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Navi_followPlayer_02]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Navi_ActorWatch]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void NaviMove_PlayerHomePos() {
    Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'IsHomePosition': True, 'LookAtTarget': 2, 'IsLookAtObject': 'IsLookAtPlayer', 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IsUseDisguiseSpeakerPos': 'IsUseDisguiseSpeakerPos', 'ArrivedASCommand': 'EvtWait', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
}

void NaviWarp_PlayerHomePos_Choice() {
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLeft'}) {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': 1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    } else {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'Type': 2, 'IsNearOffset': False, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    }
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtPlayer'}) {
        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    }
    Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
}

void Sub_InitTalkNavi_NPC() {
    if Npc_Navi.EventQueryNaviAttentionType() in [1, 2, 3] {

        call NaviMove_PlayerHomePos_PassThrough({'IsOffCenterCamera': True, 'IsUseDisguiseSpeakerPos': False, 'IsLookAtObject': 'IsLookAtObject', 'LookAtTarget': 'LookAtTarget', 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': 'LookAtInstanceName', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'PassThrough': 0.5})

    }
}

void NaviWarp_PlayerHomePos() {
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'IsWaitEnd': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtPlayer'}) {
        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    }
    Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
}

void NaviMove_PlayerTalkPos() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_Navi', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 2.0}) {
        Npc_Navi.EventNaviMovePosTalkToPlayer({'IsWaitEnd': True, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': True, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DistPassThrough': 0.699999988079071, 'DecSpeedDistance': 0.0, 'MoveSpeed': 0.0, 'ASCommand': ''})
    } else {
        Npc_Navi.EventNaviMovePosTalkToPlayer({'IsWaitEnd': True, 'IsTurnLooking': False, 'IncSpeedDistance': 2.0, 'DecSpeedDistance': 2.0, 'MoveSpeed': 20.0, 'MinimumSpeed': 6.0, 'IsUseDisguiseSpeakerPos': 'IsUseDisguiseSpeakerPos', 'DistPassThrough': 0.0, 'ASCommand': ''})
    }
}

void NaviMove_PlayerHomePos_PassThrough() {
    Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'IsWaitEnd': False, 'IsOffCenterCamera': 'IsOffCenterCamera', 'PassThrough': 'PassThrough', 'IsUseDisguiseSpeakerPos': 'IsUseDisguiseSpeakerPos', 'IsLookAtObject': 'IsLookAtObject', 'LookAtTarget': 'LookAtTarget', 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': 'LookAtInstanceName', 'LookAtWorldPos': 'LookAtWorldPos', 'LookAtPosOffset': 'LookAtPosOffset', 'LookAtDirection': 'LookAtDirection', 'LookAtOffsetBase': 'LookAtOffsetBase', 'IsTurnLooking': 'IsTurnLooking', 'ArrivedASCommand': 'EvtWait', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
}

void Init_PlayerTalk() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 32}) {
        EventSystemActor[0].EventWait({'Frames': 30, 'IsWaitEnd': True})
        if !Player_Event.EventQueryCheckPlayerState({'State': 3})
        && !Player_Event.EventQueryCheckPlayerState({'State': 12})
        && !Player_Event.EventQueryCheckPlayerState({'State': 1})
        && !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
            if !Player_Event.EventQueryCheckPlayerState({'State': 10}) {
                Player_Event.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': False})
            } else {
                Player_Event.EventPlayerWait({'IsWaitEnd': False})
            }
        }
    }
}

void InitTalk_NaviPlayerFront_NoPlayer() {

    fork {

        call NaviMove_PlayerTalkPos({'IsUseDisguiseSpeakerPos': True})

        Npc_Navi.EventTriggerBecomeSpeaker()
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
    }

}

void InitTalk_NaviPlayerFront() {

    fork {

        call NaviMove_PlayerTalkPos({'IsUseDisguiseSpeakerPos': True})

        Npc_Navi.EventTriggerBecomeSpeaker()
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
    } {

        call Sub_InitTalk_PlayerWait()

    }

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtNavi'}) {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 20.0})
    }
}

void Sub_InitTalk_PlayerWait() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 32}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 3})
        && !Player_Event.EventQueryCheckPlayerState({'State': 12})
        && !Player_Event.EventQueryCheckPlayerState({'State': 1})
        && !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
            Player_Event.EventPlayerWait({'IsWaitEnd': False})
        } else {
            Player_Event.EventTriggerParticipateEvent()
        }
    }
}

void EventTalk_Navi_WithPlayerTalk() {

    fork {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})
    } {

        call Init_PlayerTalk()

    }

}

void EventTalk_Navi_WithPlayerTalk_Choice2() {

    fork {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId', 'ChoiceNumber': 'ChoiceNumber', 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2', 'ChoiceLabel3': 'ChoiceLabel3', 'ChoiceLabel4': 'ChoiceLabel4', 'ChoiceDefaultNo': 'ChoiceDefaultNo', 'ChoiceCancelNo': 'ChoiceCancelNo', 'MaintainPerformanceState': 0})
    } {

        call Init_PlayerTalk()

    }

}

void NaviMove_Attention() {
    switch Npc_Navi.EventQueryNaviAttentionType() {
      case 0:
        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
      case [1, 2, 3]:
        if !Npc_Navi.EventQueryNaviIsArrivedTarget()
        && !Npc_Navi.EventQueryIsNaviAttentionEqualEventStarter() {
            Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        } else {
            Npc_Navi.EventNaviMoveAtActor({'LookAtTarget': 2, 'ASCommand': 'EvtWait', 'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsLookAtObject': True, 'IsUseDisguiseSpeakerPos': 'IsUseDisguiseSpeakerPos', 'TargetActorName': 'TargetActorName', 'TargetInstanceName': 'TargetInstanceName', 'TargetOffset': 'TargetOffset', 'OverwriteRotNearDist': -1.0, 'IsTargetNaviAttentionPos': True, 'MoveSpeed': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0})
        }
    }
}

void Navi_ActorWatch() {
    EventSystemActor[Navi_ActorWatch].EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 'Target', 'ActorName': 'ActorName', 'InstanceName': 'InstanceName'})
}

void Sub_InitTalkNavi_NPC_GetDemo() {

    call NaviMove_PlayerHomePos_PassThrough({'IsOffCenterCamera': True, 'IsUseDisguiseSpeakerPos': False, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'IsLookAtObject': 'IsLookAtObject', 'LookAtTarget': 'LookAtTarget', 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': 'LookAtInstanceName', 'PassThrough': 0.30000001192092896})

}

void NaviMove_PlayerHomePos_LookTarget() {
    if Npc_Navi.EventQueryNaviAttentionType() in [1, 2, 3] {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'IsHomePosition': True, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsOffCenterCamera': False, 'ArrivedASCommand': 'EvtWait', 'OffsetType': -1, 'IsLookAtObject': True, 'LookAtTarget': 'LookAtTarget', 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': 'LookAtInstanceName', 'LookAtWorldPos': 'LookAtWorldPos', 'LookAtPosOffset': 'LookAtPosOffset', 'LookAtDirection': 'LookAtDirection', 'LookAtOffsetBase': 'LookAtOffsetBase', 'IsTurnLooking': 'IsTurnLooking', 'OverwriteRotNearDist': 'OverwriteRotNearDist', 'IsUseDisguiseSpeakerPos': 'IsUseDisguiseSpeakerPos', 'IsUseAfterPlayerTurn': True, 'PassThrough': -1.0})
    }
}

void InitTalk_NaviPlayerSide_Near() {

    fork {

        call NaviMove_PlayerHomePos({'IsUseDisguiseSpeakerPos': True, 'IsLookAtPlayer': 'IsLookAtPlayer'})

        Npc_Navi.EventTriggerBecomeSpeaker()
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
        GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
    } {

        call Sub_InitTalk_PlayerWait()

    }

    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtNavi'}) {
        Player_Event.EventTriggerPlayerRequestLookAtTheFront()
    }
}

void NaviMove_PlayerHomePos_Door() {
    Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'IsHomePosition': True, 'LookAtTarget': 2, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': 'EvtWait', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': False, 'IsUseDisguiseSpeakerPos': False, 'IsLookAtObject': True})
    Npc_Navi.EventTriggerBecomeSpeaker()
    Player_Event.EventTriggerPlayerRequestLookAtTheFront()
}

void Navi_followPlayer() {
    EventSystemActor[Navi_followPlayer_01].EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True})
}

void NaviMove_PlayerHomePos_Choice() {
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLeft'}) {
        Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [0.0, 0.0, 0.0], 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': 'EvtWait', 'OverwriteRotNearDist': -1.0, 'IsUseAfterPlayerTurn': True, 'IsNearOffset': False, 'IsOffCenterCamera': False, 'IsHomePosition': True, 'OffsetType': 1, 'IsTurnLooking': 'IsTurnLooking', 'LookAtTarget': 'LookAtTarget', 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': 'LookAtInstanceName', 'LookAtWorldPos': 'LookAtWorldPos', 'LookAtPosOffset': 'LookAtPosOffset', 'LookAtDirection': 'LookAtDirection', 'LookAtOffsetBase': 'LookAtOffsetBase', 'IsUseDisguiseSpeakerPos': 'IsUseDisguiseSpeakerPos', 'PassThrough': 'PassThrough', 'IsLookAtObject': 'IsLookAtObject', 'IsWaitEnd': 'IsWaitEnd'})
    } else {
        Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': 'EvtWait', 'OverwriteRotNearDist': -1.0, 'IsUseAfterPlayerTurn': True, 'OffsetType': 2, 'IsOffCenterCamera': False, 'IsNearOffset': False, 'IsLookAtObject': 'IsLookAtObject', 'LookAtTarget': 'LookAtTarget', 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': 'LookAtInstanceName', 'LookAtWorldPos': 'LookAtWorldPos', 'LookAtPosOffset': 'LookAtPosOffset', 'LookAtDirection': 'LookAtDirection', 'LookAtOffsetBase': 'LookAtOffsetBase', 'IsTurnLooking': 'IsTurnLooking', 'IsUseDisguiseSpeakerPos': 'IsUseDisguiseSpeakerPos', 'PassThrough': 'PassThrough', 'IsWaitEnd': 'IsWaitEnd'})
    }
}

void NaviMove_PlayerHomePos_PassThrough2() {
    if Npc_Navi.EventQueryNaviAttentionType() in [1, 2, 3] {
        Npc_Navi.EventNaviMoveAroundToPlayer({'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsNearOffset': False, 'IsWaitEnd': False, 'ArrivedASCommand': 'EvtWait', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsOffCenterCamera': 'IsOffCenterCamera', 'PassThrough': 'PassThrough', 'IsUseDisguiseSpeakerPos': 'IsUseDisguiseSpeakerPos', 'IsLookAtObject': 'IsLookAtObject', 'LookAtTarget': 'LookAtTarget', 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': 'LookAtInstanceName', 'LookAtWorldPos': 'LookAtWorldPos', 'LookAtPosOffset': 'LookAtPosOffset', 'LookAtDirection': 'LookAtDirection', 'LookAtOffsetBase': 'LookAtOffsetBase', 'IsTurnLooking': 'IsTurnLooking', 'IsUseAfterPlayerTurn': False})
    }
}

void Sub_InitTalkNavi_NPC2() {

    call NaviMove_PlayerHomePos_PassThrough2({'IsOffCenterCamera': True, 'IsUseDisguiseSpeakerPos': False, 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'IsLookAtObject': 'IsLookAtObject', 'LookAtTarget': 'LookAtTarget', 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': 'LookAtInstanceName', 'PassThrough': 0.5})

}

void Navi_followPlayer2() {
    EventSystemActor[Navi_followPlayer_02].EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': False})
}

void InitTalk_NaviPlayerSide_CloseCamera() {
    switch Npc_Navi.EventQueryNaviAttentionType() {
      case 0:
        Event89:

        fork {

            call Sub_InitTalk_PlayerWait()

        } {
            Npc_Navi.EventTriggerBecomeSpeaker()
        } {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 1})
            GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
        }

        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtNavi'}) {
            Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        }
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtNavi'}) {
            Player_Event.EventTriggerPlayerRequestLookAtTheFront()
        }
      case [1, 2, 3]:
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True})
        goto Event89
    }
}

void NaviMove_Attention_Must() {
    if !Npc_Navi.EventQueryNaviIsArrivedTarget()
    && !Npc_Navi.EventQueryIsNaviAttentionEqualEventStarter() {
        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    } else {
        Npc_Navi.EventNaviMoveAtActor({'LookAtTarget': 2, 'ASCommand': 'EvtWait', 'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsLookAtObject': True, 'OverwriteRotNearDist': -1.0, 'IsTargetNaviAttentionPos': True, 'IsUseDisguiseSpeakerPos': 'IsUseDisguiseSpeakerPos', 'TargetActorName': 'TargetActorName', 'TargetInstanceName': 'TargetInstanceName', 'TargetOffset': 'TargetOffset', 'MoveSpeed': -1.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0})
    }
}
