-------- EventFlow: Npc_Goron_Biggoron_Adult --------

Actor: Npc_Goron_Biggoron_Adult
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventTriggerBecomeSpeaker', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventTriggerRequestLookAtTheFront']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryAvoidDuplicationRandomChoice3', 'EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryCheckElapsedTime', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventCloseMessageDialog']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventDeleteShowItem', 'EventTriggerParticipateEvent', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFront', 'EventPlayerTurnAndLook', 'EventPlayerBackMoveForTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryAvoidDuplicationRandomChoice3', 'EventQueryAvoidDuplicationRandomChoice2', 'EventNPCQueryCheckTargetActorForLookIK']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventNaviLookAtObject', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Item_Sword_Biggoron
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Item_Sword_BrokenGiant
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventDoNothing', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_Sword_Giant
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventDoNothing', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[position]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step06_03_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step09_01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsAfter_Step10_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsCompleted_Exp'}) {
                    if !Npc_Goron_Biggoron_Adult.EventQueryIsOnRecentTalkFlag() {

                        call Biggoron_FixCamera({'UseNormalTurn': False})

                    } else {

                        fork {

                            call RandomTalk_300()

                            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                        } {

                            call Biggoron_FixCameraStart()

                        }

                    }

                    call Biggoron_MaskTalk()


                    call SubEvent_GetSwordBigGoron_Talk04()

                } else {

                    call SubEvent_GetSwordBigGoron_Talk03()

                }
            } else {

                call SubEvent_GetSwordBigGoron_Talk02()

            }
        } else {

            call SubEvent_GetSwordBigGoron_Talk01()

        }
    } else
    if !Npc_Goron_Biggoron_Adult.EventQueryHaveTalked() {
        if !Npc_Goron_Biggoron_Adult.EventQueryIsOnRecentTalkFlag() {

            call Biggoron_FixCamera({'UseNormalTurn': False})

            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_18', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
            Event47:
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_Biggoron_Adult_Talk'})

            call BigGoron_NormalTalk()

            Npc_Goron_Biggoron_Adult.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
        } else {

            fork {

                call RandomTalk_300()

                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            } {

                call Biggoron_FixCameraStart()

            }

            goto Event47
        }
    } else {
        EventSystemActor.EventTransition({'EventName': 'Dm_DeathMtTrail_0040', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})

        call InitTalk.InitTalk_OnEvent_NoCamera_NoTalk({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Arg_Actor': ActorIdentifier(name="Npc_Goron_Biggoron_Adult"), 'ActorName': 'Npc_Goron_Biggoron_Adult', 'InstanceName': ''})

        goto Event47
    }
}

void SubEvent_GetSwordBigGoron_Step07() {

    call Kayui_FirstTalk()


    call SubEvent_GetSwordBigGoron.GetSwordBiggoron_HandOver_PlayerToNpc_ShowItem_NoNavi({'AssignableItem': 40, 'ItemPos_Adult': [0.07500000298023224, -0.5799999833106995, 0.6000000238418579], 'NpcActor': ActorIdentifier(name="Npc_Goron_Biggoron_Adult"), 'NaviLookAtActorName': 'Npc_Goron_Biggoron_Adult'})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GetSwordBigGoron_IsAfterFirstShowBrokenSword_Npc_BigGoron', 'Index': -1}) {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_103', 'IsWaitEnd': True, 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
        Event48:
        Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_108', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
        Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_104', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_102', 'IsWaitEnd': True, 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})

            call SubEvent_GetSwordBigGoron.GetSwordBiggoron_HandOver_PlayerToNpc_ForYou({'NpcActor': ActorIdentifier(name="Npc_Goron_Biggoron_Adult"), 'EmotionType': 0})

            Npc_Goron_Biggoron_Adult.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_113', 'ASName': 'Handover_ItchyEyes', 'MaintainPerformanceState': 0})
            Npc_Goron_Biggoron_Adult.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})

            call Dm_SY_GetInEvent.GetInEvent_NotTurnForPosCamera_BigGoron({'Target': 3, 'ActorName': 'Item_Prescription', 'ASName': 'Act_ItchyEyes', 'Npc_EventStarter': ActorIdentifier(name="Npc_Goron_Biggoron_Adult"), 'NpcActorName': 'Npc_Goron_Biggoron_Adult', 'NpcInstanceName': ''})

            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'IsSetMessageTargetActorName': True, 'IsEquipDIrect': False, 'Actor': 'Item_BrokenSword', 'IsGetEvent': False})
            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_110', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step08'})
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 51})
        } else {

            call NpcCommon.NpcCommon_HandOver_ShowItem_Cancel({'NpcActor': ActorIdentifier(name="Npc_Goron_Biggoron_Adult"), 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_101'})

        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GetSwordBigGoron_IsAfterFirstShowBrokenSword_Npc_BigGoron', 'Index': -1, 'Value': True})
        Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_100', 'IsWaitEnd': True, 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
        goto Event48
    }
}

void SubEvent_GetSwordBigGoron_Talk01() {
    Npc_Goron_Biggoron_Adult.EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': False})
    if !Npc_Goron_Biggoron_Adult.EventQueryIsOnRecentTalkFlag() {

        call Biggoron_FixCamera({'UseNormalTurn': False})

        switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_106', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
          case 1:
            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_109', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
          case 2:
            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_107', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
        }
    } else {

        call InitTalk_BiggoronOnly({'TurnFlag': False})

        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_105', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
    }
}

void SubEvent_GetSwordBigGoron_Talk02() {
    if !Npc_Goron_Biggoron_Adult.EventQueryIsOnRecentTalkFlag() {

        call Biggoron_FixCamera({'UseNormalTurn': False})

    } else {

        call Kayui_FirstTalk_FixCamera()

    }
    if !Npc_Goron_Biggoron_Adult.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_202', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
    } else {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_201', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
    }
}

void SubEvent_GetSwordBigGoron_Talk03() {
    if !GameDataActor.EventQueryCheckElapsedTime({'ElapsedMinute': 0, 'ElapsedHour': 72, 'GameDataName': 'GetSwordBigGoron_ElapsedTime'}) {
        if !Npc_Goron_Biggoron_Adult.EventQueryIsOnRecentTalkFlag() {

            call Biggoron_FixCamera({'UseNormalTurn': False})

        } else {

            fork {

                call RandomTalk_300()

                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            } {

                call Biggoron_FixCameraStart()

            }

        }

        call Biggoron_MaskTalk()

        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_Biggoron_Adult_Talk'})
        if !Npc_Goron_Biggoron_Adult.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_303', 'MaintainPerformanceState': 0})
        } else {
            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_306', 'MaintainPerformanceState': 0})
        }
        Npc_Goron_Biggoron_Adult.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
    } else
    if !GameDataActor.EventQueryCheckElapsedTime({'ElapsedMinute': 0, 'GameDataName': 'GetSwordBigGoron_ElapsedTime', 'ElapsedHour': 60}) {

        call BiggoronWaitTalk({'MessageId00': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_319'})

    } else
    if !GameDataActor.EventQueryCheckElapsedTime({'ElapsedMinute': 0, 'GameDataName': 'GetSwordBigGoron_ElapsedTime', 'ElapsedHour': 36}) {

        call BiggoronWaitTalk({'MessageId00': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_311'})

    } else
    if !GameDataActor.EventQueryCheckElapsedTime({'ElapsedMinute': 0, 'GameDataName': 'GetSwordBigGoron_ElapsedTime', 'ElapsedHour': 12}) {

        call BiggoronWaitTalk({'MessageId00': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_310'})

    } else {

        call BiggoronWaitTalk({'MessageId00': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_205'})

    }
}

void SubEvent_GetSwordBigGoron_Talk04() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_Biggoron_Adult_Talk'})
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_10', 'MaintainPerformanceState': 0})
    } else {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_04', 'MaintainPerformanceState': 0})
    }
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_09', 'MaintainPerformanceState': 0})
    } else {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_11', 'MaintainPerformanceState': 0})
    }
}

void SubEvent_GetSwordBigGoron_Step10() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'EventName': 'Dm_DeathMtTrail_0050', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void SubEvent_GetSwordBigGoron_Step11() {

    fork {
        if !Npc_Goron_Biggoron_Adult.EventQueryIsOnRecentTalkFlag() {

            call Biggoron_FixCamera({'UseNormalTurn': True})

        } else {

            call InitTalk_BiggoronOnly({'TurnFlag': True})

        }
    } {
        Item_Sword_Biggoron.EventTriggerParticipateEvent()
        Item_Sword_Biggoron.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Item_Sword_Giant.EventTriggerParticipateEvent()
        Item_Sword_Giant.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Item_Sword_BrokenGiant.EventTriggerParticipateEvent()
        Item_Sword_BrokenGiant.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    call SubEvent_GetSwordBigGoron.GetSwordBiggoron_HandOver_PlayerToNpc_ShowItem_NoNavi({'AssignableItem': 44, 'ItemPos_Adult': [0.07500000298023224, -0.6000000238418579, 0.6499999761581421], 'NpcActor': ActorIdentifier(name="Npc_Goron_Biggoron_Adult"), 'NaviLookAtActorName': 'Npc_Goron_Biggoron_Adult'})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsCompleted_Exp'}) {

        call AfterCompleted()

    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Sword_Giant', 'Num': 1}) {
        if !GameDataActor.EventQueryCheckElapsedTime({'ElapsedMinute': 0, 'ElapsedHour': 72, 'GameDataName': 'GetSwordBigGoron_ElapsedTime'}) {
            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_301', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_307', 'MaintainPerformanceState': 0})
            Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'IsSetMessageTargetActorName': True, 'IsEquipDIrect': False, 'Actor': 'Weapon_Sword_Giant', 'IsGetEvent': False})

            call ItemGiantSword_Receive()

            Event161:
            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_316', 'ASName': 'Handover', 'MaintainPerformanceState': 0})

            call Dm_SY_GetInEvent.GetInEventItemSwordBiggoron({'ActorName': 'Item_Sword_Biggoron', 'IsNpcEventStarter': False})

            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_305', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_302', 'MaintainPerformanceState': 0})
            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_309', 'MaintainPerformanceState': 0})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SubEvent_GetSwordBigGoron', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete'})
            Npc_Navi.EventNaviRequestBallonMessage({'Index': 223})

            call NaviChat.NaviEmotionChange({'EmotionType': 1})

        } else
        Event136:
        if !GameDataActor.EventQueryCheckElapsedTime({'ElapsedMinute': 0, 'GameDataName': 'GetSwordBigGoron_ElapsedTime', 'ElapsedHour': 60}) {

            call BiggoronWaitTalkShowClaimCheck({'MessageId00': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_319'})

        } else
        if !GameDataActor.EventQueryCheckElapsedTime({'ElapsedMinute': 0, 'GameDataName': 'GetSwordBigGoron_ElapsedTime', 'ElapsedHour': 36}) {

            call BiggoronWaitTalkShowClaimCheck({'MessageId00': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_311'})

        } else
        if !GameDataActor.EventQueryCheckElapsedTime({'ElapsedMinute': 0, 'GameDataName': 'GetSwordBigGoron_ElapsedTime', 'ElapsedHour': 12}) {

            call BiggoronWaitTalkShowClaimCheck({'MessageId00': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_310'})

        } else {

            call BiggoronWaitTalkShowClaimCheck({'MessageId00': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_205'})

        }
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Sword_BrokenGiant'}) {
        if !GameDataActor.EventQueryCheckElapsedTime({'ElapsedMinute': 0, 'ElapsedHour': 72, 'GameDataName': 'GetSwordBigGoron_ElapsedTime'}) {
            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_301', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_307', 'MaintainPerformanceState': 0})
            Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'IsSetMessageTargetActorName': True, 'IsEquipDIrect': False, 'Actor': 'Weapon_Sword_BrokenGiant', 'IsGetEvent': False})

            call ItemBrokenGiantSword_Receive()

            goto Event161
        } else
        goto Event136
    } else
    if !GameDataActor.EventQueryCheckElapsedTime({'ElapsedMinute': 0, 'ElapsedHour': 72, 'GameDataName': 'GetSwordBigGoron_ElapsedTime'}) {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_301', 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
        Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_312', 'MaintainPerformanceState': 0})

        call NpcCommon.ShowItem_Close()

        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
        goto Event161
    } else
    goto Event136
}

void BigGoron_NormalTalk() {
    if !Npc_Goron_Biggoron_Adult.EventQueryHaveTalked() {

        call Biggoron_MaskTalk()

        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_16', 'MaintainPerformanceState': 0})
        } else {
            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_17', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_06', 'MaintainPerformanceState': 0})
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_02', 'MaintainPerformanceState': 0})
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_12', 'MaintainPerformanceState': 0})
    }
}

void InitTalk_BiggoronOnly() {

    fork {
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'TurnFlag'}) {
            Npc_Goron_Biggoron_Adult.EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [5.639942169189453, 207.9268035888672, -132.92999267578125], 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }
    } {

        call Biggoron_FixCameraStart()

    }

}

void Biggoron_TalkPosition_Warp() {
    Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'Position': [5.639942169189453, 207.9268035888672, -132.92999267578125], 'ASCommand': 'EvtWait', 'YAngle': 60.0, 'ClothWarpMode': 0, 'EnableInAir': False})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
}

void AfterCompleted() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_Biggoron_Adult_Talk'})
    switch Npc_Goron_Biggoron_Adult.EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_313', 'MaintainPerformanceState': 0})
        Event148:

        call NpcCommon.ShowItem_Close()

      case 1:
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_314', 'MaintainPerformanceState': 0})
        goto Event148
      case 2:
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_315', 'MaintainPerformanceState': 0})
        goto Event148
    }
}

void BiggoronWaitTalk() {
    if !Npc_Goron_Biggoron_Adult.EventQueryIsOnRecentTalkFlag() {

        call Biggoron_FixCamera({'UseNormalTurn': False})

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GetSwordBigGoron_Hurried_Npc_BigGoron', 'Index': -1}) {
            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_304', 'MaintainPerformanceState': 0, 'ASName': 'Act_Smith'})
            Event244:
            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'MessageId00', 'MaintainPerformanceState': 0, 'ASName': 'Act_Smith'})
        } else {
            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_300', 'MaintainPerformanceState': 0, 'ASName': 'Act_Smith'})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GetSwordBigGoron_Hurried_Npc_BigGoron', 'Index': -1, 'Value': True})
            goto Event244
        }
    } else {

        fork {

            call RandomTalk_300()

            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
        } {

            call Biggoron_FixCameraStart()

        }


        call Biggoron_MaskTalk()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GetSwordBigGoron_Hurried_Npc_BigGoron', 'Index': -1}) {
            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_304', 'MaintainPerformanceState': 0, 'ASName': ''})
            Event104:
            Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'MessageId00', 'MaintainPerformanceState': 0, 'ASName': ''})
        } else {
            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_300', 'MaintainPerformanceState': 0, 'ASName': ''})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GetSwordBigGoron_Hurried_Npc_BigGoron', 'Index': -1, 'Value': True})
            goto Event104
        }
    }
}

void ShowPrescription_Biggoron_Adult() {

    call Kayui_FirstTalk()


    call SubEvent_GetSwordBigGoron.GetSwordBiggoron_HandOver_PlayerToNpc_ShowItem_NoNavi({'AssignableItem': 41, 'ItemPos_Adult': [0.07500000298023224, -0.5899999737739563, 0.6200000047683716], 'NpcActor': ActorIdentifier(name="Npc_Goron_Biggoron_Adult"), 'NaviLookAtActorName': 'Npc_Goron_Biggoron_Adult'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetSwordBigGoron_IsAfterShowPrescription_Biggoron_Adult'}) {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_112', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
        Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_110', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
        Event88:

        call NpcCommon.ShowItem_Close()

    } else {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_111', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetSwordBigGoron_IsAfterShowPrescription_Biggoron_Adult'})
        goto Event88
    }
}

void BiggoronWaitTalkShowClaimCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GetSwordBigGoron_Hurried_Npc_BigGoron', 'Index': -1}) {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_304', 'MaintainPerformanceState': 0, 'ASName': 'Act_Smith'})
        Event263:

        fork {
            Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0, 'ASName': 'Act_Smith', 'MessageId': 'MessageId00'})
        } {
            Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': True, 'ChangeVisibleOffWithRequestDelete': False})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtGet', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
        }

    } else {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_300', 'MaintainPerformanceState': 0, 'ASName': 'Act_Smith'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GetSwordBigGoron_Hurried_Npc_BigGoron', 'Index': -1, 'Value': True})
        goto Event263
    }
}

void ItemGiantSword_Receive() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtShowItemSuccess', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 114})
        Item_Sword_Giant.EventTriggerModelBind({'InstanceName': '', 'BoneName': 'Weapon_L', 'ActorName': 'Player_Event', 'RotOffset': [20.0, 90.0, -15.0], 'TransOffset': [0.0, 0.4000000059604645, 0.0]})
        Item_Sword_Giant.EventDoNothing({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Item_Sword_Giant.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    } {
        Npc_Goron_Biggoron_Adult.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Receive', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void ItemBrokenGiantSword_Receive() {

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtShowItemSuccess', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 114})
        Item_Sword_BrokenGiant.EventTriggerModelBind({'InstanceName': '', 'BoneName': 'Weapon_L', 'ActorName': 'Player_Event', 'TransOffset': [0.0, 0.25, 0.0], 'RotOffset': [-20.0, 90.0, -15.0]})
        Item_Sword_BrokenGiant.EventDoNothing({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Item_Sword_BrokenGiant.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    } {
        Npc_Goron_Biggoron_Adult.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Receive', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void Biggoron_FixCameraStart() {
    Npc_Goron_Biggoron_Adult.EventTriggerBecomeSpeaker()

    call InitTalk.Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_Goron_Biggoron_Adult")})

    Dm_Locator[position].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [24.25, 200.4600067138672, -128.5], 'ClothWarpMode': -1})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'position', 'PosVector': [-24.280000686645508, 12.729999542236328, -6.860000133514404], 'AtVector': [-23.170000076293945, 13.109999656677246, -6.659999847412109], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call Biggoron_TalkPosition_Warp()

    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Player_Event.EventTriggerPlayerRequestLookAtTheFront()
    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Goron_Biggoron_Adult', 'InstanceName': '', 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'PosOffset': [0.0, -2.0, 0.0]})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [2.5, 208.00999450683594, -130.7899932861328], 'AtVector': [5.710000038146973, 209.61000061035156, -131.07000732421875], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 50.0, 'MoveTime': 180, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
}

void Kayui_FirstTalk() {
    if !Npc_Goron_Biggoron_Adult.EventQueryIsOnRecentTalkFlag() {

        call Biggoron_FixCamera({'UseNormalTurn': False})


        call RandomTalk_110()

    } else {
        Event209:

        fork {

            call RandomTalk_110()

            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
        } {

            call Biggoron_FixCameraStart()

        }

    }
}

void Biggoron_FixCamera() {
    Npc_Goron_Biggoron_Adult.EventTriggerBecomeSpeaker()
    Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': 4.099999904632568})

    fork {
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'Target': 3, 'ActorName': 'Npc_Goron_Biggoron_Adult', 'Direction': 0.0, 'UseNormalTurn': 'UseNormalTurn', 'IsDoNavi': False})
    } {

        call NaviEventCommon.Sub_InitTalkNavi_NPC2({'IsLookAtObject': True, 'LookAtTarget': 3, 'LookAtInstanceName': '', 'LookAtActorName': 'Npc_Goron_Biggoron_Adult'})

    }


    fork {
        Player_Event.EventTriggerPlayerRequestLookAtTheFront()
    } {

        call InitTalk.Sub_InitFlag_Npc({'Arg_Actor': ActorIdentifier(name="Npc_Goron_Biggoron_Adult")})

    } {

        call FixCamera_Choice()

    }

}

void RandomTalk_300() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_317', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } else {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_318', 'EndDialogOption': 3, 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    }
}

void RandomTalk_110() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_114', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    } else {
        Npc_Goron_Biggoron_Adult.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 3, 'MessageId': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Talk_115', 'ASName': 'Act_ItchyEyes_Talk', 'MaintainPerformanceState': 0, 'IsCloseDialog': True})
    }
}

void FixCamera_Choice() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_Biggoron_Adult_DoArea_Near'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_Biggoron_Adult_DoArea_Right'}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 90, 'IsWaitEnd': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor2ActorName': '', 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.7300000190734863, 0.25, -2.0299999713897705], 'AtVector': [1.1799999475479126, 1.850000023841858, 0.7699999809265137], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 90, 'IsWaitEnd': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor2ActorName': '', 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'PosVector': [-1.9700000286102295, 0.2199999988079071, -1.8899999856948853], 'AtVector': [-1.0299999713897705, 1.9600000381469727, 1.1100000143051147], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_Biggoron_Adult_DoArea_Right'}) {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 90, 'IsWaitEnd': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor2ActorName': '', 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'PosVector': [2.430000066757202, 0.27000001072883606, -2.130000114440918], 'AtVector': [1.399999976158142, 1.8700000047683716, 0.9200000166893005], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 90, 'IsWaitEnd': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor2ActorName': '', 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'PosVector': [-2.819999933242798, 0.09000000357627869, -2.549999952316284], 'AtVector': [-1.7899999618530273, 1.690000057220459, 0.5], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
    }
}

void Biggoron_MaskTalk() {
    if !Npc_Goron_Biggoron_Adult.EventQueryIsPlayingSameAS({'ASName': 'Act_Smith', 'Partial': ''}) {
        Npc_Goron_Biggoron_Adult.EventTriggerRequestLookAtTheFront()
    }
    if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {

        call NpcCommon.Mask_Talk_Common_NoChangeTheTopic({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_103', 'ASName': 'TalkMonolog'})

    } else {

        call NpcCommon.Mask_Talk_Common_NoChangeTheTopic({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_08', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_103', 'ASName': 'TalkMonolog', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Goron_Biggoron_Adult:Mask_05_01'})

    }
}

void Kayui_FirstTalk_FixCamera() {
    goto Event209
}
