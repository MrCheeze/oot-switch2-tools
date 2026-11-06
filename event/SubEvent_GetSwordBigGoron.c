-------- EventFlow: SubEvent_GetSwordBigGoron --------

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent', 'EventTriggerRemoveSwordBigGoronChallengeActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerUnshowTimerUI', 'EventTriggerMiniGameTimerStop', 'EventExecuteRollbackChallengeStep', 'EventTriggerMiniGameTimerSetting', 'EventTriggerMiniGameTimerStart', 'EventTriggerShowTimerUI', 'EventSetTimerValue']
queries: ['EventQueryIsRemainingTimerValue']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerSetSelectedItem', 'EventPlayerPlayASForFlowchart', 'EventIgnitionShowItem', 'EventCreateShowItem', 'EventDeleteShowItem', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerUnequip', 'EventPlayerWait', 'EventPlayerTurnAndLook', 'EventPlayerBackMoveForTalk']
queries: ['EventQueryPlayerCheckSelectedItem', 'EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState', 'EventQueryIsDirToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviRequestBallonMessage', 'EventNaviLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWait']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerRequestOpenSimpleInfo', 'EventTriggerRequestLoseRunningRaceAfterBancChanged', 'EventTriggerRequestVanishExchangeItemAfterBancChanged']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter[GetSwordBiggoron_HandOver_PlayerToNpc_ShowItem(NpcActor)]
entrypoint: GetSwordBiggoron_HandOver_PlayerToNpc_ShowItem(NpcActor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[GetSwordBiggoron_HandOver_PlayerToNpc_ForYou(NpcActor)]
entrypoint: GetSwordBiggoron_HandOver_PlayerToNpc_ForYou(NpcActor)
actions: ['EventTriggerChangeEmotion']
queries: []
params: None

Actor: Npc_EventStarter[InitTalk_OnEvent_ShowItemOnly(Arg_Actor)]
entrypoint: InitTalk_OnEvent_ShowItemOnly(Arg_Actor)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[GetSwordBiggoron_HandOver_PlayerToNpc_ShowItem_NoNavi(NpcActor)]
entrypoint: GetSwordBiggoron_HandOver_PlayerToNpc_ShowItem_NoNavi(NpcActor)
actions: []
queries: []
params: None

void WaitEggHatch_Npc_Navi_StepStart() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    switch Player_Event.EventQueryPlayerCheckSelectedItem() {
      case 0:

        call EggHatch_PocketEgg()

        Player_Event.EventPlayerSetSelectedItem({'Item': 35, 'IsWaitEnd': True})
        Event46:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'SubEvent_GetSwordBigGoron', 'StepName': 'EggHatched'})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 147})
      case [1, 2]:

        call EggHatch_PocketEgg()

        goto Event46
    }
}

void EggHatch_PocketEgg() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
        if !Player_Event.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': False}) {
            Player_Event.EventPlayerWait({'IsWaitEnd': True})
            SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'Crow'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'IsSetMessageTargetActorName': True, 'IsEquipDIrect': False, 'Actor': 'Item_PocketEgg', 'IsGetEvent': False})

            call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Item_PocketCucco'})

            Event77:
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 147})
        } else {

            fork {
                SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'Crow'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            } {
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtSurprise', 'IsWaitEnd': True, 'ClothWarpMode': 0})
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'IsWaitEnd': False, 'ASCommand': 'Wait'})
            }

            Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
            Event5:
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'IsSetMessageTargetActorName': True, 'IsEquipDIrect': False, 'Actor': 'Item_PocketEgg', 'IsGetEvent': False})

            call GetInEvent_EggHatche.GetInEvent_EggHatche({'ActorName': 'Item_PocketCucco'})

            goto Event77
        }
    } else {
        Player_Event.EventPlayerWait({'IsWaitEnd': True})
        SoundSystemActor.EventSoundStartSound({'IsIgnoreDucking': False, 'SLinkKey': 'Crow'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        goto Event5
    }
}

void SubEvent_TimerCheck() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SubEvent_TimerCheck_Canceled', 'Value': False, 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_TimerCountingStep'}) {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/SubEvent_GetSwordBigGoron:Talk_62', 'ChoiceLabel4': 0, 'ChoiceLabel2': 10, 'ChoiceLabel3': 0, 'ChoiceLabel1': 9, 'MaintainPerformanceState': 0})
        Event15:
        if !GameSystemActor.EventQueryTalkChoice2() {
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()
            ChallengeSystemActor.EventTriggerUnshowTimerUI()
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_TimerCountingStep'}) {
                UISystemActor.EventTriggerRequestOpenSimpleInfo({'Type': 18})
                PouchSystemActor.EventTriggerRemoveSwordBigGoronChallengeActor()
                Event71:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step09_Exp'}) {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'ChallengeName': 'SubEvent_GetSwordBigGoron', 'StepName': 'Step09_01'})
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step08_Exp'}) {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'ChallengeName': 'SubEvent_GetSwordBigGoron', 'StepName': 'Step08_01'})
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step03_03_Exp'}) {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step03_03'})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_RunningRace_IsTimerCountingStep'}) {
                UISystemActor.EventTriggerRequestOpenSimpleInfo({'Type': 19})
                ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'ChallengeName': 'SubEvent_RunningRace', 'ChallengeStep': 'Ready'})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SubEvent_TimerCheck_Canceled', 'Index': -1, 'Value': True})
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_RunningRace_IsTimerCountingStep'}) {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/SubEvent_GetSwordBigGoron:Talk_63', 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'MaintainPerformanceState': 0})
        goto Event15
    }
}

void BigGoronTimer_Step04() {
    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 14400})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    ChallengeSystemActor.EventTriggerShowTimerUI()
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()
}

void BigGoronTimer_Step09() {
    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 9000})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    ChallengeSystemActor.EventTriggerShowTimerUI()
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()
}

void BigGoronTimer_Step10() {
    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 12600})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    ChallengeSystemActor.EventTriggerShowTimerUI()
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()
}

void BigGoronTimerStop() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    GameSystemActor.EventTriggerRequestAutoSave()
}

void SubEvent_TimerCheck_Warp() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_TimerCountingStep'}) {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/SubEvent_GetSwordBigGoron:Talk_64', 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'MaintainPerformanceState': 0})
        Event58:
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_TimerCountingStep'}) {
                if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsFaroreWind'}) {
                    Event172:
                    return 1303515621
                } else
                if !ChallengeSystemActor.EventQueryIsRemainingTimerValue({'RemainingFrame': 600}) {
                    ChallengeSystemActor.EventSetTimerValue({'TimerValue': 600, 'IsWaitEnd': True})
                }
                goto Event172
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_RunningRace_IsTimerCountingStep'}) {
                ChallengeSystemActor.EventTriggerMiniGameTimerStop()
                ChallengeSystemActor.EventTriggerUnshowTimerUI()
                UISystemActor.EventTriggerRequestLoseRunningRaceAfterBancChanged()
                ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'ChallengeName': 'SubEvent_RunningRace', 'ChallengeStep': 'Ready'})
                goto Event172
            } else {
                goto Event172
            }
        } else {
            return 184981848
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_RunningRace_IsTimerCountingStep'}) {
        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 3, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/SubEvent_GetSwordBigGoron:Talk_65', 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'MaintainPerformanceState': 0})
        goto Event58
    } else {
        return 1303515621
    }
}

void SubEvent_TimerCheck_ToChild() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_TimerCountingStep'}) {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 12, 'MessageId': 'EventFlowMsg/SubEvent_GetSwordBigGoron:Talk_67', 'ChoiceLabel1': 15, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()
            ChallengeSystemActor.EventTriggerUnshowTimerUI()
            PouchSystemActor.EventTriggerRemoveSwordBigGoronChallengeActor()
            goto Event71
        }
    }
}

void GetSwordBiggoron_HandOver_PlayerToNpc_ShowItem() {

    fork {

        call ShowItemSuccess_NoCamera_SwordBigGoron({'AssignableItem': 'AssignableItem', 'ItemPos_Adult': 'ItemPos_Adult', 'LookAtActorName': 'NaviLookAtActorName'})

    } {

        call NpcCommon.Npc_IsConfront({'NpcActor': 'NpcActor'})

    }

}

void Sub_ShowItem_SwordBigGoron() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'EvtShowItemSuccess', 'UseAnmDriven': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'ItemPos': 'ItemPos_Adult', 'CreateTime': 70.0, 'IsScale': True, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
}

void ShowItemSuccess_NoCamera_SwordBigGoron() {
    Player_Event.EventCreateShowItem({'IsWaitEnd': True, 'AssignableItem': 'AssignableItem'})

    fork {

        call Sub_ShowItem_SwordBigGoron({'AssignableItem': 'AssignableItem', 'ItemPos_Adult': 'ItemPos_Adult'})

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC2({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'LookAtActorName', 'LookAtInstanceName': ''})

    }

}

void SubEvent_TimerCheck_Demo() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_TimerCountingStep'}) {
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        UISystemActor.EventTriggerRequestOpenSimpleInfo({'Type': 18})
        PouchSystemActor.EventTriggerRemoveSwordBigGoronChallengeActor()
        goto Event71
    }
}

void SubEvent_TimerCheck_Demo_CloseTimer() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_TimerCountingStep'}) {
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
    }
}

void SubEvent_TimerCheck_Demo_DeleteItem() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_TimerCountingStep'}) {
        UISystemActor.EventTriggerRequestOpenSimpleInfo({'Type': 18})
        PouchSystemActor.EventTriggerRemoveSwordBigGoronChallengeActor()
        goto Event71
    }
}

void GetSwordBiggoron_HandOver_PlayerToNpc_ForYou() {
    Npc_EventStarter[GetSwordBiggoron_HandOver_PlayerToNpc_ForYou(NpcActor)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 'EmotionType'})
    Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': True, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void SubEvent_TimerCheck_Sleep() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SubEvent_TimerCheck_Canceled', 'Value': False, 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_TimerCountingStep'}) {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel4': 0, 'ChoiceLabel2': 10, 'ChoiceLabel3': 0, 'ChoiceLabel1': 9, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/SubEvent_GetSwordBigGoron:Talk_68'})
        Event148:
        if !GameSystemActor.EventQueryTalkChoice2() {
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()
            ChallengeSystemActor.EventTriggerUnshowTimerUI()
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_TimerCountingStep'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LinkBed_DeepSleep', 'Index': -1}) {
                    UISystemActor.EventTriggerRequestVanishExchangeItemAfterBancChanged()
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsRequestVanishExchangeItem_DreamWorld', 'Value': False, 'Index': -1})
                } else {
                    UISystemActor.EventTriggerRequestOpenSimpleInfo({'Type': 18})
                    PouchSystemActor.EventTriggerRemoveSwordBigGoronChallengeActor()
                    goto Event71
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LinkBed_DeepSleep', 'Index': -1}) {
                UISystemActor.EventTriggerRequestLoseRunningRaceAfterBancChanged()
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsRequestLoseRunningRace_DreamWorld', 'Value': False, 'Index': -1})
                Event161:
                ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'ChallengeName': 'SubEvent_RunningRace', 'ChallengeStep': 'Ready'})
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_RunningRace_IsTimerCountingStep'}) {
                UISystemActor.EventTriggerRequestOpenSimpleInfo({'Type': 19})
                goto Event161
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SubEvent_TimerCheck_Canceled', 'Index': -1, 'Value': True})
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_RunningRace_IsTimerCountingStep'}) {
        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 3, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/SubEvent_GetSwordBigGoron:Talk_69'})
        goto Event148
    }
}

void InitTalk_OnEvent_ShowItemOnly() {

    fork {
        if !Player_Event.EventQueryIsDirToTarget({'Target': 3, 'AngleThreshold': 135.0, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'ActorNameA', 'InstanceName': 'InstanceNameA'}) {
            Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': 0.0})
            if Player_Event.EventQueryIsDirToTarget({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'ActorNameA', 'InstanceName': 'InstanceNameA', 'AngleThreshold': 15.0}) {
                Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IsDoNavi': True, 'UseNormalTurn': True, 'SlowTurn': True, 'IgnoreTargetPosMove': True, 'ActorName': 'ActorNameA', 'InstanceName': 'InstanceNameA'})
            }
        } else {
            Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsDoNavi': True, 'UseNormalTurn': True, 'ActorName': 'ActorNameA', 'InstanceName': 'InstanceNameA', 'KeepTalkWait': False})
            Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': 0.0})
        }
    } {

        call InitTalk.Sub_InitTalk_Npc({'Arg_Greeting': 3, 'Arg_Turn': 'Arg_Turn', 'Arg_Actor': 'Arg_Actor'})

    } {
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'CameraType'}) {

            call InitTalk.SetTalkCamera_NormalType()

        } else {

            call InitTalk.SetTalkCamera_DependingDistance({'ActorNameA': 'ActorNameA', 'InstanceNameA': 'InstanceNameA'})

        }
    }

}

void ShowItemSuccess_NoCamera_SwordBigGoron_NoNavi() {
    Player_Event.EventCreateShowItem({'IsWaitEnd': True, 'AssignableItem': 'AssignableItem'})

    call Sub_ShowItem_SwordBigGoron({'AssignableItem': 'AssignableItem', 'ItemPos_Adult': 'ItemPos_Adult'})

}

void GetSwordBiggoron_HandOver_PlayerToNpc_ShowItem_NoNavi() {

    fork {

        call ShowItemSuccess_NoCamera_SwordBigGoron_NoNavi({'AssignableItem': 'AssignableItem', 'ItemPos_Adult': 'ItemPos_Adult', 'LookAtActorName': 'NaviLookAtActorName'})

    } {

        call NpcCommon.Npc_IsConfront({'NpcActor': 'NpcActor'})

    }

}
