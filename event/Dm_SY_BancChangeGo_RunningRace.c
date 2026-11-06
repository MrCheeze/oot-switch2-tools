-------- EventFlow: Dm_SY_BancChangeGo_RunningRace --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerOwnedHorseParticipateInPlayingMainEvent']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerMoveToAnchor', 'EventPlayerSetExtraOrderDecelerateToStop', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerPlayASFollowRideHorse']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState', 'EventQueryIsHorseEponaNear']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventGoOffstageForUser', 'EventNaviFollowPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerRequestLoseRunningRaceAfterBancChanged', 'EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void BancChangeGo() {
    if !Player_Event.EventQueryIsHorseEponaNear({'Distance': 15.0}) {
        GameSystemActor.EventTriggerOwnedHorseParticipateInPlayingMainEvent()
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_RunningRace_IsAfter_Ready_Exp'}) {
        if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
            Player_Event.EventPlayerSetExtraOrderDecelerateToStop({'IsWaitEnd': True, 'StopToTime': 0, 'WaitUntilStable': True})
            Player_Event.EventPlayerPlayASFollowRideHorse({'IsWaitEnd': True})
            Event70:
            if !Player_Event.EventQueryCheckPlayerState({'State': 21}) {

                call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})


                call NaviEventCommon.EventTalk_Navi_WithPlayerTalk_Choice2({'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_900', 'ChoiceNumber': 2, 'ChoiceLabel1': 9998, 'ChoiceLabel2': 9999, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0})

                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Fly', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_902', 'MaintainPerformanceState': 0})
                    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
                    Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True})

                    call Npc_Hylia_RunningMan_Adult.RunningRace_TimerAndUI_Stop()


                    call BancChangeGo_End({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'NextStartPosAir': 'NextStartPosAir', 'IsCheckAir': 'IsCheckAir'})

                } else {
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Fly', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_903', 'MaintainPerformanceState': 0})
                    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

                    call Player_BackPosMove()

                }
            } else {
                GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                goto Event70
            }
        } else
        goto Event70
    } else {

        call BancChangeGo_End({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'NextStartPosAir': 'NextStartPosAir', 'IsCheckAir': 'IsCheckAir'})

    }
}

void BancChangeGo_End() {

    call Dm_SY_BancChangeGo.EntryPoint0({'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir', 'NextBanc': 'NextBanc'})

}

void BancChangeGo0() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_RunningRace_IsAfter_Ready_Exp'}) {

        call Npc_Hylia_RunningMan_Adult.RunningRace_TimerAndUI_Stop()

        UISystemActor.EventTriggerRequestLoseRunningRaceAfterBancChanged()

        call BancChangeGo_End({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir'})

    } else {

        call BancChangeGo_End({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir'})

    }
}

void BancChangeGo_KakarikoVillage() {

    call Minigame_CatchCucco.CatchCucco_ResetTimeCheck()


    call BancChangeGo({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'NextStartPosAir': 'NextStartPosAir', 'IsCheckAir': 'IsCheckAir'})

}

void BancChangeGo_Market() {

    call SubEvent_FindRichard.FindRichard_ResetTimeCheck()


    call Npc_Hylia_Soldier_008_Child.HyruleFieldtoMarket_WarpNPC()


    call BancChangeGo({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'NextStartPosAir': 'NextStartPosAir', 'IsCheckAir': 'IsCheckAir'})

}

void BancChangeGo_ZoraDomain() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_RunningRace_IsAfter_Ready_Exp'}) {
        if !Player_Event.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'Type': 0, 'ActorFileName': ''}) {
            Player_Event.EventPlayerSetExtraOrderDecelerateToStop({'IsWaitEnd': True, 'StopToTime': 0, 'WaitUntilStable': True})
            Player_Event.EventPlayerPlayASFollowRideHorse({'IsWaitEnd': True})
            Event29:

            call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})


            call NaviEventCommon.EventTalk_Navi_WithPlayerTalk_Choice2({'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_900', 'ChoiceNumber': 2, 'ChoiceLabel1': 9998, 'ChoiceLabel2': 9999, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0})

            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Fly', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_902', 'MaintainPerformanceState': 0})
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
                Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

                call Npc_Hylia_RunningMan_Adult.RunningRace_TimerAndUI_Stop()


                call BancChangeGo_End_UnderWater({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir'})

            } else {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Fly', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_RunningMan_Adult:Talk_903', 'MaintainPerformanceState': 0})
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

                call Player_BackPosMove()

            }
        } else {
            goto Event29
        }
    } else {

        call BancChangeGo_End_UnderWater({'NextBanc': 'NextBanc', 'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir'})

    }
}

void BancChangeGo_End_UnderWater() {

    call Dm_SY_BancChangeGo.Dm_SY_BancChangeGo_UnderWater({'NextStartPos': 'NextStartPos', 'BootEventName': 'BootEventName', 'IsCheckAir': 'IsCheckAir', 'NextStartPosAir': 'NextStartPosAir', 'NextBanc': 'NextBanc'})

}

void Player_BackPosMove() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'SubEvent_RunningRace_SafetyCounter', 'Value': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SubEvent_RunningRace_EponaArea', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    fork {
        EventCamera.EventBasedOnLookAtCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetActorName': 'Player_Event', 'TargetActorInstanceName': '', 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 50.0, 'LookAtVectorXZ': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.2000000476837158, 0.0], 'ToleranceYDownwardAngle': -15.0, 'TargetOffset': [0.0, 0.699999988079071, 0.0], 'ToleranceDistance': 2.0, 'IdealDistance': 8.5, 'IsWaitEnd': False, 'MoveTime': 120})
        Player_Event.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'BackPos', 'IsWaitEnd': False, 'MoveSpeed': 0.0, 'DecSpeedDistance': 0.0, 'ApplySlowMove': False, 'IsKeepSpeed': False, 'RidableTurnAngleToleranceDeg': 90.0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'RidableGoalDistanceTolerance': 2.0, 'RidableDesiredGear': 2})
        Event72:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SubEvent_RunnningRace_BancChangeGoAreaIn'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 44})
            GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'SubEvent_RunningRace_SafetyCounter'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'SubEvent_RunningRace_SafetyCounter', 'Value': 10}) {
              case 0:
                goto Event72
              case [1, 2]:
                UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'BackPos'})
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 1.0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            }
        }
    } {

        call NaviEventCommon.Navi_followPlayer()

    }

}
