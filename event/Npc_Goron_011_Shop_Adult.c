-------- EventFlow: Npc_Goron_011_Shop_Adult --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerExcludeNextTalkChoice']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryIsEmotion']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSendErrorToEventResource']
queries: ['EventQueryRandomChoice2', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventOpenNumDisplayForShop', 'EventTriggerSetDisplayHeartGauge', 'EventTriggerCloseNumDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Talk() {

    fork {

        call DisplayShop.EventCamera({'ShopOwnerActorName': 'Npc_EventStarter', 'GameDataName': 'GoronCity_Shop_Talking'})

    } {

        call InitTalk.InitTalk_DirectShop({'Arg_Turn': 4, 'Arg_Greeting': 4})

    } {
        UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
        UISystemActor.EventOpenNumDisplayForShop({'IsWaitEnd': True, 'IsNeedMaxNum': False, 'ShopType': 1})
    }


    call DisplayShop.DisplayShop_Porter_Check()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked_Special.Npc_Goron_011_Shop_Adult_SageOfFire_IsCompleted_Event11'}) {

            call OMEN()

            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Talk_06', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Talk_03', 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
            }
            Event6:
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call DisplayShop.Root_Buy({'ShopOwnerActorName': 'Npc_EventStarter', 'GameDataName': 'GoronCity_Shop_Talking', 'ASName': 'Wait', 'EmotionType': 0})

                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_01', 'MaintainPerformanceState': 0})
                goto Event6
              case 1:

                call FlavorTalkFlow_Default({'FlavorTalk_GameDataName': 'GoronCity_Shop_FlavorTalk_Int'})

              case 2:
                switchcall DisplayShop.DisplayShop_ZeldaNotes_Flow() {
                  case 0x62b48625:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:Shop_52', 'MaintainPerformanceState': 0})
                    goto Event6
                  case 0x80c8b6de:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceNumber': 4, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Child:ReChoiceTalk_01', 'MaintainPerformanceState': 0})
                    goto Event6
                }
              case 3:

                call Goodby()


                call DisplayShop.DisplayShop_FinishSetting_LinkPosition()

            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HaveTalked_Special.Npc_Goron_011_Shop_Adult_SageOfFire_IsCompleted_Event11'})
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Talk_02', 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
            goto Event6
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Goron_011_Shop_Adult_Talk_Event3', 'Index': -1}) {

        call OMEN()

        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Talk_01', 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
        goto Event6
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Goron_011_Shop_Adult_Talk_Event3', 'Value': True, 'Index': -1})
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        switch Npc_EventStarter.EventQueryIsEmotion() {
          case [0, 1, 2, 3, 5]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Talk_07'})
            goto Event6
          case 4:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Talk_00'})
            goto Event6
        }
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_011_Shop_IgnoreBalloonRequest'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_011_Shop_IgnoreBalloonRequest', 'Value': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Near_01', 'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GoronCity_Shop_adult_BeforeFirstTalk'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Near_00', 'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Near_02'})
    }
}

void Goodby() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Talk_04', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Talk_05', 'MaintainPerformanceState': 0})
    }
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GoronCity_Shop_Talking', 'Value': False})
    GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'GoronCity_Shop_FlavorTalk_Int'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'EnteringStore_Hello_Standby'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron_011_Shop_IgnoreBalloonRequest'})
    }
    UISystemActor.EventTriggerCloseNumDisplay()
}

void FlavorTalkFlow_Default() {
    UISystemActor.EventTriggerCloseNumDisplay()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
        Event33:
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'FlavorTalk_GameDataName'}) {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:FlavorTalk_03', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
            Event41:

            call ReChoice()

          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:FlavorTalk_04', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 2})
            goto Event41
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:FlavorTalk_02', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 3})
            goto Event41
          case 3:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:ReChoiceTalk_03', 'MaintainPerformanceState': 0})
            goto Event33
          case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
            GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '世間話の指定値がおかしい'})
        }
    } else
    Event21:
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'FlavorTalk_GameDataName'}) {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:FlavorTalk_01', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName'})
        Event32:

        call ReChoice()

      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:FlavorTalk_02', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 2})
        goto Event32
      case 2:
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlavorTalk_GameDataName', 'Value': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:ReChoiceTalk_03', 'MaintainPerformanceState': 0})
        goto Event21
      case [3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
        GameSystemActor.EventTriggerSendErrorToEventResource({'Title': '世間話の指定値がおかしい'})
    }
}

void ReChoice() {
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    UISystemActor.EventOpenNumDisplayForShop({'IsWaitEnd': True, 'IsNeedMaxNum': False, 'ShopType': 1})
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': 'Disable_Select_ZeldaNotes', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:ReChoiceTalk_01', 'ChangeMstxtForActor': False, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:ReChoiceTalk_02', 'ChangeMstxtForActor': False, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 4, 'MaintainPerformanceState': 0})
    }
    goto Event6
}

void OMEN() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Adult_GlassTruth'}) {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_011_Shop_Adult_GlassTruth'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron_011_Shop_Adult_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9011, 'ChoiceLabel2': 9012, 'ChoiceLabel4': 9013, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_09'})
        }
    } else {

        call NpcCommon.Mask_Talk_Common({'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_01', 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_08', 'ChangeTheTopic_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_09', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Goron_011_Shop_Adult:Mask_103'})

    }
}
