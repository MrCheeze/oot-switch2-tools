-------- EventFlow: Npc_Kokiri_Fado_Adult --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventTriggerForceSetMaskTalkFlag', 'EventTriggerForceSetAmiiboMaskTalkFlag']
queries: ['EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAvoidDuplicationRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Kokiri_Fado_Adult
entrypoint: None()
actions: ['EventTalk', 'EventTriggerKokiriRequestComeCloserFairy', 'EventTriggerBecomeSpeaker', 'EventNPCTurnToObjectGreeting', 'EventAIScheduleEndTerror', 'EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventTriggerChangeEmotion', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSelectSchedule']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryHasControllerSet', 'EventNPCQueryCheckTurnToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventIgnitionShowItem', 'EventCreateShowItem', 'EventPlayerBackMoveForTalk', 'EventPlayerConversate']
queries: ['EventQueryPlayerIsEquipMask', 'EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Near() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GetSwordBigGoron_CancelHandoverOddPowder_toFado', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Near_01'})
    }
}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step05_01_Exp'}) {

        call Mask_All()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Fado_Adult_Talk_Event28', 'Index': -1}) {
            if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_21', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_01', 'MaintainPerformanceState': 0})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Fado_Adult_Talk_Event28', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_16', 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Fado_Adult_SubEvent_GetSwordBigGoron_Step05_Event8', 'Index': -1}) {

        fork {
            Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 0})
        } {

            call InitTalk.SetTalkCamera_DependingDistance({'ActorNameA': 'Npc_Kokiri_Fado_Adult', 'InstanceNameA': ''})

        } {
            Npc_Kokiri_Fado_Adult.EventTriggerBecomeSpeaker()

            call InitTalk.Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_Kokiri_Fado_Adult")})

            Npc_Kokiri_Fado_Adult.EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
            Npc_Kokiri_Fado_Adult.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False})
            Npc_Kokiri_Fado_Adult.EventTriggerKokiriRequestComeCloserFairy()
        } {

            call NaviEventCommon.Sub_InitTalkNavi_NPC2({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Kokiri_Fado_Adult', 'LookAtInstanceName': ''})

        }

        switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_Kokiri_Fado_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_14', 'MaintainPerformanceState': 0, 'ASName': 'Act_Angry_Wait'})
          case 1:
            Npc_Kokiri_Fado_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_15', 'MaintainPerformanceState': 0, 'ASName': 'Act_Angry_Wait'})
          case 2:
            Npc_Kokiri_Fado_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_19', 'MaintainPerformanceState': 0, 'ASName': 'Act_Angry_Wait'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Fado_Adult_Talk_Event4', 'Index': -1}) {

        call Mask_All()

        Event5:
        if Npc_Kokiri_Fado_Adult.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_08', 'MaintainPerformanceState': 0})
        }
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_22', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_23', 'MaintainPerformanceState': 0})
        }
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsWaitEnd': True, 'StepName': 'Step05_01'})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Fado_Adult_Talk_Event4', 'Value': True, 'Index': -1})

        call InitTalk.InitTalk_KokiriOnly({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcFairy_MovingFlag': True})


        call MaskTalk_FirstTalk()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_00', 'MaintainPerformanceState': 0})
        goto Event5
    }
}

void SubEvent_GetSwordBigGoron_Step05() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Fado_Adult_Talk_Event4', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Fado_Adult_Talk_Event4', 'Value': True, 'Index': -1})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Fado_Adult_SubEvent_GetSwordBigGoron_Step05_Event8', 'Index': -1}) {

        fork {
            Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': 0.0})

            call Player_ShowItem()

        } {

            call InitTalk.SetTalkCamera_DependingDistance({'ActorNameA': 'Npc_Kokiri_Fado_Adult', 'InstanceNameA': ''})

        } {
            Npc_Kokiri_Fado_Adult.EventTriggerBecomeSpeaker()

            call InitTalk.Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_Kokiri_Fado_Adult")})

            Npc_Kokiri_Fado_Adult.EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
            Npc_Kokiri_Fado_Adult.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Kokiri_Fado_Adult.EventTriggerKokiriRequestComeCloserFairy()
        } {

            call NaviEventCommon.Sub_InitTalkNavi_NPC2({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Kokiri_Fado_Adult', 'LookAtInstanceName': ''})

        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        Npc_Kokiri_Fado_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_10', 'MaintainPerformanceState': 0, 'ASName': 'Act_Angry_Wait'})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event76:
            Npc_Kokiri_Fado_Adult.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GetSwordBigGoron_CancelHandoverOddPowder_toFado', 'Index': -1, 'Value': False})
            if !Npc_Kokiri_Fado_Adult.EventQueryHasControllerSet() {
                if Npc_Kokiri_Fado_Adult.EventNPCQueryCheckTurnToTarget({'TurnType': 3}) {
                    Npc_Kokiri_Fado_Adult.EventNPCTurnToObjectGreeting({'TurnType': 3, 'GreetType': 3, 'IsWaitEnd': True})
                }
                Event9:

                fork {

                    call SubEvent_GetSwordBigGoron.GetSwordBiggoron_HandOver_PlayerToNpc_ForYou({'NpcActor': ActorIdentifier(name="Npc_Kokiri_Fado_Adult"), 'EmotionType': 0})

                } {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                }

                Npc_Kokiri_Fado_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_06', 'ASName': 'Handover', 'MaintainPerformanceState': 0})

                call Dm_SY_GetInEvent.GetInEvent_NotTurn_Fado({'ActorName': 'Item_PoacherSaw', 'ASName': 'Wait', 'Target': 3, 'NpcActorName': 'Npc_Kokiri_Fado_Adult', 'Npc_EventStarter': ActorIdentifier(name="Npc_Kokiri_Fado_Adult"), 'NpcInstanceName': ''})

                PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Actor': 'Item_OddPowder', 'IsGetEvent': False})
                Npc_Kokiri_Fado_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_01', 'MaintainPerformanceState': 0})
                Npc_Kokiri_Fado_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_04', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_Fado_ChangeScheduleArea', 'Value': False})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SubEvent_GetSwordBigGoron', 'StepName': 'Step06', 'IsWaitEnd': True})
                Npc_Navi.EventNaviRequestBallonMessage({'Index': 49})
            } else {
                goto Event9
            }
        } else {
            Event13:

            call NpcCommon.NpcCommon_HandOver_ShowItem_Cancel_ChangeAS({'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_11', 'ASName': 'Act_Angry_Wait', 'NpcActor': ActorIdentifier(name="Npc_Kokiri_Fado_Adult")})

            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GetSwordBigGoron_CancelHandoverOddPowder_toFado', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_Fado_ChangeScheduleArea'})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsWaitEnd': True, 'StepName': 'Step05_01'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            Npc_Kokiri_Fado_Adult.EventTriggerAIScheduleSelectSchedule()
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        }
    } else {
        Npc_Kokiri_Fado_Adult.EventTriggerBecomeSpeaker()
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': 0.0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Fado_Adult_SubEvent_GetSwordBigGoron_Step05_Event8', 'Value': True, 'Index': -1})

        call PresentItemTalk_02()

        Npc_Kokiri_Fado_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_03', 'MaintainPerformanceState': 0})
        Npc_Kokiri_Fado_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ASName': 'Act_Talk_Blowup', 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_03_2', 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event76
        } else {
            goto Event13
        }
    }
}

void ShowEyeballFrog_KingZora_Adult() {

    call SubEvent_GetSwordBigGoron.InitTalk_OnEvent_ShowItemOnly({'Arg_Greeting': 4, 'ActorNameA': 'Npc_Kokiri_Fado_Adult', 'InstanceNameA': '', 'Arg_Turn': 3, 'Arg_Actor': ActorIdentifier(name="Npc_Kokiri_Fado_Adult"), 'CameraType': False})

    Npc_Kokiri_Fado_Adult.EventTriggerKokiriRequestComeCloserFairy()

    call SubEvent_GetSwordBigGoron.GetSwordBiggoron_HandOver_PlayerToNpc_ShowItem({'AssignableItem': 39, 'ItemPos_Adult': [0.07500000298023224, -0.6200000047683716, 0.6299999952316284], 'NpcActor': ActorIdentifier(name="Npc_Kokiri_Fado_Adult"), 'NaviLookAtActorName': 'Npc_Kokiri_Fado_Adult'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_IsAfterShowPoacherSaw_Fado_Adult'}) {
        if !Npc_Kokiri_Fado_Adult.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Kokiri_Fado_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_20', 'MaintainPerformanceState': 0})
        } else {
            Npc_Kokiri_Fado_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_17', 'MaintainPerformanceState': 0})
        }
        Event80:

        call NpcCommon.ShowItem_Close()

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GetSwordBigGoron_IsAfterShowPoacherSaw_Fado_Adult'})
        Npc_Kokiri_Fado_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Talk_18', 'MaintainPerformanceState': 0})
        goto Event80
    }
}

void MaskTalk_FirstTalk() {
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_00', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTriggerForceSetMaskTalkFlag({'value': True})
        Npc_EventStarter.EventTriggerForceSetAmiiboMaskTalkFlag({'value': True})
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NoChangeTheTopic_KokiryOnly({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_03', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_08', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_04', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_103', 'ASName': 'TalkMonolog'}) {
      case 1183930306:
        return 4151362380
      case 1530789637:
        return 2799305849
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 4, 'NpcFairy_MovingFlag': True})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_Fado_Adult_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kokiri_Fado_Adult_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:GlassTruth', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case 4151362380:
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_Fado_Adult:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void PresentItemTalk_02() {
    Npc_Kokiri_Fado_Adult.EventTriggerBecomeSpeaker()

    fork {

        call Player_ShowItem()

    } {

        call InitTalk.SetTalkCamera_DependingDistance({'ActorNameA': 'Npc_Kokiri_Fado_Adult', 'InstanceNameA': ''})

    } {

        call InitTalk.Sub_InitTalk_Npc({'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Kokiri_Fado_Adult"), 'Arg_Turn': 4})


        call Fado_Sub_InitTalk()

    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC2({'IsLookAtObject': True, 'LookAtInstanceName': '', 'LookAtTarget': 3, 'LookAtActorName': 'Npc_Kokiri_Fado_Adult'})

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Npc_Kokiri_Fado_Adult.EventTriggerKokiriRequestComeCloserFairy()

    call NpcCommon.Npc_IsConfront({'NpcActor': ActorIdentifier(name="Npc_Kokiri_Fado_Adult")})

}

void Fado_Sub_InitTalk() {
    Npc_Kokiri_Fado_Adult.EventTriggerBecomeSpeaker()
    Npc_Kokiri_Fado_Adult.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    Npc_Kokiri_Fado_Adult.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    Npc_Kokiri_Fado_Adult.EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
    Npc_Kokiri_Fado_Adult.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
}

void Player_ShowItem() {
    Player_Event.EventPlayerTurnAndLook({'ActorName': 'Npc_Kokiri_Fado_Adult', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'KeepTalkWait': False, 'IsDoNavi': False, 'UseNormalTurn': True})
    Player_Event.EventCreateShowItem({'IsWaitEnd': True, 'AssignableItem': 38})
    Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'KeepOneTimeAnm': True, 'ASCommand': 'EvtShowItemSuccess', 'UseAnmDriven': True, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
    Player_Event.EventIgnitionShowItem({'CreateTime': 70.0, 'IsScale': True, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo', 'IsWaitEnd': False, 'ItemPos': [0.07500000298023224, -0.6499999761581421, 0.6499999761581421]})
}
