-------- EventFlow: Npc_Kokiri_008_Child --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventTriggerKokiriRequestComeCloserFairy', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2', 'EventNPCQueryCheckFrontToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryCompareGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook']
queries: ['EventQueryCheckIsEquippedDynamicEquipment', 'EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryRandomChoice2', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_008_Child
entrypoint: None()
actions: ['EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventPlayAS', 'EventTalk', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[EmoteReset]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Get_StoneOfForest_IsCompleted_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_Get_StoneOfForest_IsCompleted_Talk_Event22', 'Index': -1}) {
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_105', 'MaintainPerformanceState': 0})
        }
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_103', 'MaintainPerformanceState': 0})
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_104', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_106', 'MaintainPerformanceState': 0})
        }
    } else
    if GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'KokiriForest_Get_StoneOfForest_IsCompleted_NumberOfTalkedNpc', 'GameDataB': 'KokiriForest_Get_StoneOfForest_IsCompleted_MaxNumberOfTalkedNpc', 'Operator': 2}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'KokiriForest_Get_StoneOfForest_IsCompleted_NumberOfTalkedNpc', 'Value': 1, 'Index': -1})
    }
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_Get_StoneOfForest_IsCompleted_Talk_Event22', 'Value': True, 'Index': -1})
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_100', 'MaintainPerformanceState': 0})

    call NpcCommon.NpcCommon_PlayerEvtTalking_NpcWait({'Player_IsWaitEnd': True, 'Player_AS': 'EvtTalkingL', 'Npc_ActorName': ActorIdentifier(name="Npc_Kokiri_008_Child")})

    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_101', 'MaintainPerformanceState': 0})
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_102', 'MaintainPerformanceState': 0})
}

void GameStarted_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_GameStarted_Talk_Event44', 'Index': -1}) {
        Npc_Kokiri_008_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})

        call PlayAct_Lift_Rock_To_Stand()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_GameStarted_ChoiceTalk_Event87', 'Index': -1}) {
            switchcall AlreadyPaid_Check() {
              case 3764903497:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_42', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
                Event82:
                Npc_Kokiri_008_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_46', 'ASName': '', 'MaintainPerformanceState': 0})
                Event86:

                call PlayAct_Stand_To_Lift_Rock()

                Npc_Kokiri_008_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
              case 1915009891:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_42', 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call LiftRock_AllBroken_Talk({'ASName': ''})

                } else {
                    goto Event82
                }
                goto Event86
            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Event66:

            call GameStarted_ChoiceTalk_2nd()

            goto Event86
        } else
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_02', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_22', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
        }
        goto Event66
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Meet_DekuTree_IsAfter_Step01_Exp'}) {

        call Before_TalkingMido({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_GameStarted_Talk_Event44', 'Value': True, 'Index': -1})
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalkingL', 'ClothWarpMode': 0})

        call GameStarted_ChoiceTalk_First()


        call PlayAct_Stand_To_Lift_Rock()

        Npc_Kokiri_008_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
    } else {
        switchcall AlreadyPaid_Check() {
          case 3764903497:

            call Before_TalkingMido({'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0})

          case 1915009891:

            call Before_TalkingMido({'ChoiceNumber': 2, 'ChoiceLabel2': 0, 'ChoiceLabel1': 3})

            if !GameSystemActor.EventQueryTalkChoice2() {

                call LiftRock_AllBroken_TalkAndStand({'ASName': 'Act_Lift_Rock_To_Stand'})


                call PlayAct_Stand_To_Lift_Rock()

            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_52', 'MaintainPerformanceState': 0})
            }
        }
    }
}

void Goto_HyruleCastle_IsCompleted_Talk() {
    Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

    call Mask_All()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_Goto_HyruleCastle_IsCompleted_Talk_Event5', 'Index': -1}) {
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_204', 'MaintainPerformanceState': 0})
        }
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_207', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_210', 'MaintainPerformanceState': 0})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_Goto_HyruleCastle_IsCompleted_Talk_Event5', 'Value': True, 'Index': -1})
        EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
        switchcall NpcCommon.CheckAlreadyMaskTalked() {
          case 1307241100:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_200', 'MaintainPerformanceState': 0})
            Event1:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_208', 'MaintainPerformanceState': 0})
          case 803420549:
            goto Event1
        }
    }
}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goto_HyruleCastle_IsCompleted_Exp'}) {

        call Goto_HyruleCastle_IsCompleted_Talk()

    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsCompleted_Exp'}) {
        Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})

        call InitTalk.InitTalk_KokiriOnly({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcFairy_MovingFlag': True})


        call Get_StoneOfForest_IsCompleted_Talk()

    } else {

        call InitTalk.InitTalk_KokiriOnly({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcFairy_MovingFlag': True})


        call Checking_LinkPositioning()


        call GameStarted_Talk()

    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsCompleted_Exp'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Goto_HyruleCastle_IsCompleted_Exp'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Kokiri_008_Child:Near_02'})
        }
    } else
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Kokiri_008_Child:Near_01'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Kokiri_008_Child:Near_03'})
    }
}

void GameStarted_ChoiceTalk_First() {
    Npc_Kokiri_008_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    Npc_EventStarter.EventTalk({'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_07', 'ASName': 'Act_Lift_Rock_To_Stand', 'IsAnimeDriven': True, 'IsCloseDialog': False, 'EndDialogOption': 0, 'MaintainPerformanceState': 0})
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_49', 'MaintainPerformanceState': 0})
    if !Player_Event.EventQueryCheckIsEquippedDynamicEquipment({'DynamicEquipmentSlot': 0}) {

        call Show_Sword()

    } else
    if !Player_Event.EventQueryCheckIsEquippedDynamicEquipment({'DynamicEquipmentSlot': 4}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_14', 'MaintainPerformanceState': 0})

        call Show_Shield()

    } else {

        call Talk_SwordAndShield()

    }
}

void GameStarted_ChoiceTalk_2nd() {
    Npc_Kokiri_008_Child.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    if !Player_Event.EventQueryCheckIsEquippedDynamicEquipment({'DynamicEquipmentSlot': 0}) {
        Event77:
        if !Player_Event.EventQueryCheckIsEquippedDynamicEquipment({'DynamicEquipmentSlot': 4}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_GameStarted_ChoiceTalk_First_Event79', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_GameStarted_ChoiceTalk_Event89', 'Index': -1}) {
                    GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '剣も盾も持っている時に想定外のフローに流れた'})
                } else {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_26', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_31', 'MaintainPerformanceState': 0})
                    Event108:
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_GameStarted_ChoiceTalk_Event89', 'Value': True, 'Index': -1})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_GameStarted_ChoiceTalk_Event87', 'Value': True, 'Index': -1})
                    switchcall AlreadyPaid_Check() {
                      case 3764903497:
                        Npc_Kokiri_008_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_47', 'ASName': '', 'MaintainPerformanceState': 0})
                      case 1915009891:
                        Npc_Kokiri_008_Child.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_47', 'ASName': '', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'MaintainPerformanceState': 0})
                        if !GameSystemActor.EventQueryTalkChoice2() {

                            call LiftRock_AllBroken_Talk({'ASName': ''})

                        } else {

                            call Farewell()

                        }
                    }
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_GameStarted_ChoiceTalk_First_Event79', 'Value': True, 'Index': -1})
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_10', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_30', 'MaintainPerformanceState': 0})
                goto Event108
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_GameStarted_ChoiceTalk_First_Event79', 'Index': -1}) {
            Event197:
            switchcall AlreadyPaid_Check() {
              case 3764903497:

                call ShieldOnly_Choice()

              case 1915009891:

                call ShieldAndReward_Choices()

            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_GameStarted_ChoiceTalk_First_Event79', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_10', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
            goto Event197
        }
    } else
    if !Player_Event.EventQueryCheckIsEquippedDynamicEquipment({'DynamicEquipmentSlot': 4}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_GameStarted_ChoiceTalk_Event89', 'Index': -1}) {
            Event196:
            switchcall AlreadyPaid_Check() {
              case 3764903497:

                call SwordOnly_Choice()

              case 1915009891:

                call SwordAndReward_Choices()

            }
        } else {
            Event90:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_GameStarted_ChoiceTalk_Event89', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_26', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
            goto Event196
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_008_Child_HaveNoItems'}) {
        Event20:
        switchcall AlreadyPaid_Check() {
          case 3764903497:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_41', 'MaintainPerformanceState': 0})
            Event68:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call AboutSword()

                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_28', 'MaintainPerformanceState': 0})
                Event78:
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call AboutSheld()

                    Event124:
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_34', 'MaintainPerformanceState': 0})
                } else {
                    Event116:

                    call Farewell()

                }
              case 1:

                call AboutSheld()

                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_29', 'MaintainPerformanceState': 0})
                Event51:
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call AboutSword()

                    goto Event124
                } else {
                    goto Event116
                }
              case 2:

                call Farewell()

            }
          case 1915009891:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_41', 'ChoiceNumber': 4, 'ChoiceLabel4': 0, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call LiftRock_AllBroken_Talk({'ASName': ''})

                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_57', 'MaintainPerformanceState': 0})
                goto Event68
              case 1:

                call AboutSword()

                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_28', 'ChoiceNumber': 3, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2})
                Event182:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:

                    call LiftRock_AllBroken_Talk({'ASName': ''})

                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_57', 'MaintainPerformanceState': 0})
                    goto Event78
                  case 1:

                    call AboutSheld()

                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_34', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'MaintainPerformanceState': 0})
                    Event194:
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call LiftRock_AllBroken_Talk({'ASName': ''})

                    } else {

                        call Farewell()

                    }
                  case 2:
                    Event183:

                    call Farewell()

                }
              case 2:

                call AboutSheld()

                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_29', 'ChoiceNumber': 3, 'MaintainPerformanceState': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1})
                Event181:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:

                    call LiftRock_AllBroken_Talk({'ASName': ''})

                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_57', 'MaintainPerformanceState': 0})
                    goto Event51
                  case 1:

                    call AboutSword()

                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_34', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'MaintainPerformanceState': 0})
                    goto Event194
                  case 2:
                    goto Event183
                }
              case 3:

                call Farewell()

            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Kokiri_008_Child_HaveNoItems'})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_23', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_36', 'MaintainPerformanceState': 0})
        goto Event20
    }
}

void Camera_ForPracticeArea() {
    EventCamera.EventTriggerCameraSavePoint()

    call NpcCommon.SuggestCamera_Start_90({'TurnTarget': 5, 'TurnTargetActorName': 'DestinationAnchor', 'TurnTargetInstanceName': 'ForPracticeArea', 'CameraTargetActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'CameraTargetInstanceName': 'ForPracticeArea_Camera', 'EmotionType': 0, 'IsActFaceOnly': False, 'NpcActor': ActorIdentifier(name="Npc_Kokiri_008_Child"), 'CameraAtVector': [-46.400001525878906, 113.37000274658203, -27.239999771118164]})

    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_37', 'MaintainPerformanceState': 0})
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_08', 'MaintainPerformanceState': 0})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'EventTalkCameraType': 2, 'IsWaitEnd': False})
    Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Player_Event.EventPlayerTurnAndLook({'Target': 1, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})

    call NaviEventCommon.Navi_ActorWatch({'Target': 1, 'ActorName': 'Npc_EventStarter', 'InstanceName': ''})

}

void AboutSheld() {
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkWonder', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_AfterShieldTalk_Npc_Kokiri_008_Child', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_06', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_20', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_AfterShieldTalk_Npc_Kokiri_008_Child', 'Index': -1, 'Value': True})
    }
}

void AboutSword() {
    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtTalkWonder', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_008_Child_Sword'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_03', 'MaintainPerformanceState': 0})
        Event38:

        call Camera_ForPracticeArea()

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Kokiri_008_Child_Sword'})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_19', 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_44', 'MaintainPerformanceState': 0})
        goto Event38
    }
}

void Farewell() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_21', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_40', 'MaintainPerformanceState': 0})
    }
}

void Show_Shield() {
    goto Event90
}

void Talk_SwordAndShield() {
    goto Event20
}

void Show_Sword() {
    goto Event77
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk_KokiriOnly({'Arg_Greeting': 4, 'Arg_Turn': 4, 'NpcFairy_MovingFlag': True})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_008_Child_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kokiri_008_Child_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:GlassTruth', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_09', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk() {
          case 4151362380:
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTriggerKokiriRequestComeCloserFairy()
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_10', 'MaintainPerformanceState': 0})
        }
    }
}

void Mask_Talk() {
    switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_KokiriOnly({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Kokiri_008_Child:Mask_103', 'ASName': 'TalkMonolog'}) {
      case 4205900657:
        return 4151362380
      case 4155567800:
        return 2799305849
    }
}

void PlayAct_Stand_To_Lift_Rock() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_LiftRock_AllBroken_Talk_Event166', 'Index': -1}) {
        Npc_Kokiri_008_Child.EventNPCTurnToTarget({'FaceControlType': 0, 'Target': 5, 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsWaitEnd': True, 'ActorName': 'AnchorAction1', 'InstanceName': ''})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_LiftRock_AllBroken_Talk_Event166', 'Value': False, 'Index': -1})
        Event160:

        fork {
            Npc_Kokiri_008_Child.EventPlayAS({'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Lift_Rock_To_Crouch', 'IsWaitEnd': False})
        } {
            EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
        }

    } else {
        goto Event160
    }
}

void PlayAct_Lift_Rock_To_Stand() {

    fork {
        Npc_Kokiri_008_Child.EventPlayAS({'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Lift_Rock_To_Stand', 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    }

}

void Before_TalkingMido() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_50', 'ChoiceNumber': 'ChoiceNumber', 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_51', 'ChoiceNumber': 'ChoiceNumber', 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_00', 'IsAnimeDriven': False, 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_04', 'ChoiceNumber': 'ChoiceNumber', 'ChoiceLabel1': 'ChoiceLabel1', 'ChoiceLabel2': 'ChoiceLabel2', 'MaintainPerformanceState': 0})
    }
}

void AlreadyPaid_Check() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_008_Child_LiftRock_AllBroken'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_Npc_Kokiri_008_Child_AlreadyPaid'}) {
            Event172:
            return 3764903497
        } else {
            return 1915009891
        }
    } else {
        goto Event172
    }
}

void LiftRock_AllBroken_Talk() {
    Npc_EventStarter.EventTalk({'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_53', 'ASName': 'ASName', 'IsCloseDialog': True, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
    Event235:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_008_Child_TalkedInFront', 'Index': -1}) {
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'AllBroken_LookAtPoint', 'Direction': 0.0})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_54', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 5, 'ActorName': 'AnchorAction1', 'FaceControlType': 0})
        Npc_EventStarter.EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 5, 'ActorName': 'AnchorAction1', 'ResetArriveTransformFixed': False})
        Event166:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_55', 'ASName': 'Handover', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_008_Child_LiftRock_AllBroken_Talk_Event166', 'Value': True, 'Index': -1})

        fork {

            call Dm_SY_GetInEvent.GetInEvent_NotTurn({'Target': 3, 'NpcInstanceName': '', 'ASName': 'Wait', 'Npc_EventStarter': ActorIdentifier(name="Npc_EventStarter"), 'ActorName': 'Obj_Rupee_Blue', 'NpcActorName': 'Npc_EventStarter'})

        } {
            EventSystemActor[EmoteReset].EventWait({'IsWaitEnd': True, 'Frames': 5})
            Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        }

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_56', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_008_Child_AlreadyPaid', 'Index': -1, 'Value': True})
    } else {
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1, 'Target': 5, 'ActorName': 'DestinationAnchor', 'InstanceName': 'AllBroken_LookAtPoint', 'Direction': 0.0})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_54', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        goto Event166
    }
}

void SwordAndReward_Choices() {
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_25', 'MaintainPerformanceState': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1})
    goto Event181
}

void SwordOnly_Choice() {
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_25', 'MaintainPerformanceState': 0})
    goto Event51
}

void ShieldOnly_Choice() {
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_24', 'MaintainPerformanceState': 0})
    goto Event78
}

void ShieldAndReward_Choices() {
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_24', 'MaintainPerformanceState': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2})
    goto Event182
}

void LiftRock_AllBroken_TalkAndStand() {
    Npc_EventStarter.EventTalk({'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': False, 'IsWaitEnd': True, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/Npc_Kokiri_008_Child:Talk_53', 'ASName': 'ASName', 'MaintainPerformanceState': 0, 'IsCloseDialog': False, 'EndDialogOption': 3})
    goto Event235
}

void Checking_LinkPositioning() {
    if !Npc_EventStarter.EventNPCQueryCheckFrontToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'AngleThreshold': 6.0}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_008_Child_TalkedInFront', 'Index': -1, 'Value': True})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_Npc_Kokiri_008_Child_TalkedInFront', 'Value': False, 'Index': -1})
    }
}
