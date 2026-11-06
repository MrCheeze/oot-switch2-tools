-------- EventFlow: NaviHint --------

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBecomeSpeaker', 'EventNaviLookAtObject', 'EventNaviMovePosTalkToPlayer', 'EventDoNothing', 'EventNaviFollowPlayer']
queries: ['EventQueryNaviAttentionType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventNaviHintCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventTriggerReserveNotRebootPlayerCameraAI', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithClimb', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWait', 'EventTriggerPlayerEventStartWithCarry', 'EventPlayerTalk', 'EventTriggerPlayerSetCalcLiftActor']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerIsEquipWeapon', 'EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFInNaviHintForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Hint_00() {
    GameSystemActor.EventDoNothing({'IsWaitEnd': True})
}

void InitTalk_NaviHint_Obj() {
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    Player_Event.EventTriggerPlayerEventStartWithCarry()
    Player_Event.EventTriggerPlayerSetCalcLiftActor({'IsStopCalc': True})

    call Common.AirStartUp_OnlyStopInAir()

    switch Npc_Navi.EventQueryNaviAttentionType() {
      case 0:

        fork {
            Npc_Navi.EventTriggerBecomeSpeaker()
            Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'IsTurnX': True, 'Direction': 60.0})
        } {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        } {

            call Sub_InitTalk_Player()

        }

      case [1, 2, 3]:

        fork {

            call Sub_InitTalk_Player()

        } {
            Npc_Navi.EventNaviMovePosTalkToPlayer({'IsWaitEnd': True, 'IsUseDisguiseSpeakerPos': True, 'IsTurnLooking': False, 'MoveSpeed': 12.0, 'IncSpeedDistance': 2.0, 'DecSpeedDistance': 2.0, 'MinimumSpeed': 4.0, 'ASCommand': '', 'DistPassThrough': 0.0})
            Npc_Navi.EventTriggerBecomeSpeaker()
        } {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
        }

    }
}

void NaviHint_Field() {
    Npc_Navi.EventDoNothing({'IsWaitEnd': True})
}

void NaviHint_Shield_Hylian() {
    Event135:

    call InitTalk.InitTalk_NaviPlayerSide({'IsLookAtPlayer': True, 'IsLookAtNavi': True})

    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': '', 'MessageId': 'EventFlowMsg/NaviHint:NaviHint_Shield_Hylian_00', 'MaintainPerformanceState': 0})

    call ActionGuide.OpenActionGuideSceen({'ActionGuideType': 56})

}

void Sub_InitTalk_Player() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 3})
    && !Player_Event.EventQueryCheckPlayerState({'State': 12}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
            Player_Event.EventPlayerWait({'IsWaitEnd': False})
        } else {
            Player_Event.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': False})
        }
    }
}

void Hint_Dungeon_Tutorial_Event() {
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'FovySetType': 0, 'CameraCollisionLookAtActor': 2, 'MoveTotargetPosType': 1, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 1, 'LongShiftRange': 30.0, 'LatShiftRange': 30.0, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'IsWaitEnd': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor2InstanceName': '', 'Actor2ActorName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.0, 1.1299999952316284, -1.3899999856948853], 'AtVector': [0.0, 0.6100000143051147, 0.3499999940395355], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})


    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/NaviHint:NaviHint_Dungeon_00'})


    call ActionGuide.OpenActionGuideSceenForce({'ActionGuideType': 14})

}

void InitTalk_NaviHint_Ganondorf() {
    Player_Event.EventTriggerPlayerEventStartWithClimb()
    Player_Event.EventTriggerPlayerEventStartWithCarry()

    call Common.AirStartUp_OnlyStopInAir()


    fork {
        Npc_Navi.EventTriggerBecomeSpeaker()
        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'IsTurnX': True, 'Direction': 60.0})
    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 0})
    } {

        call Sub_InitTalk_Player()

        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 2, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [2.0, -1.0, -2.0]})
    }

}

void CameraReset_RematchRelated() {
    EventCamera.EventMoveCameraToSavePoint({'ReviseMode': 1, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'MoveFrame': 30, 'IsRestoreDoF': False})
    GameSystemActor.EventWait({'Frames': 8, 'IsWaitEnd': True})
    EventCamera.EventTriggerReserveNotRebootPlayerCameraAI()
}

void FirstTimeTalk_Normal() {
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        EventCamera.EventNaviHintCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 30, 'MoveTotargetPosType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'PosToLookAtZOffset': 0.0, 'ToleranceXZAngle': 0.0, 'AtDis': 1.0})
    } {
        PostProcessingActor.EventSetDoFInNaviHintForFlowchart({'IsWaitEnd': True, 'RequiredFrame': 10, 'BluarLevel': 1.5, 'FNumber': 2.5})
    }

}

void FirstTimeTalk_Long() {
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        EventCamera.EventNaviHintCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 30, 'MoveTotargetPosType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'PosToLookAtZOffset': 0.0, 'ToleranceXZAngle': 0.0, 'AtDis': 1.0})
    } {
        PostProcessingActor.EventSetDoFInNaviHintForFlowchart({'IsWaitEnd': True, 'RequiredFrame': 10, 'BluarLevel': 1.5, 'FNumber': 3.5})
    }

}

void Hint_Trial() {
    EventCamera.EventTriggerCameraSavePoint()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HavePlayedEvent.NaviHint_Trial', 'Index': -1, 'Value': True})

    call NaviHelp.InitTalk_NaviHelp()


    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/NaviHint:NaviHint_Dungeon_01'})

    Npc_Navi.EventNaviFollowPlayer({'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'IsHomePosition': True, 'IsNearOffset': True, 'OffsetType': -1})
    EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 20, 'CollisionInterpolateSkip': True, 'IsRestoreDoF': True, 'IsWaitEnd': True, 'ReviseMode': 0})
}

void NaviHint_Shield_Hylian_PlayCheck() {
    switchcall NaviHint_Shield_Hylian_FlagCheck() {
      case 3374314617:

        call NaviHint_Shield_Hylian()

    }
}

void NaviHint_Shield_Hylian_BuyShop() {
    goto Event135
}

void NaviHint_Shield_Hylian_FlagCheck() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsAfter_Ready_Exp'}) {
        Event13:
        return 3357536998
    } else
    if !Player_Event.EventQueryPlayerIsChild()
    && !Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 4, 'ArmorName': 'Weapon_Shield_Hylian'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.NaviHint_Shield_Hylian', 'Index': -1}) {
            goto Event13
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.NaviHint_Shield_Hylian_BuyShop'}) {
            goto Event13
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NaviHint_Shield_Hylian_PlayedEventFlow', 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HavePlayedEvent.NaviHint_Shield_Hylian'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HavePlayedEvent.NaviHint_Shield_Hylian_BuyShop'})
            return 3374314617
        }
    } else {
        goto Event13
    }
}

void NaviHint_Shield_Hylian_PlayCheck_BuyShop() {
    switchcall NaviHint_Shield_Hylian_FlagCheck() {
      case 3374314617:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'NaviHint_Shield_Hylian_BuyShop'})
    }
}
